#! /usr/bin/env python3

import argparse
import os
import shutil
import subprocess
import sys
from pathlib import Path
from typing import Dict, List, Set, Union

import ninja_syntax
import splat
import splat.scripts.split as split
from splat.segtypes.linker_entry import LinkerEntry

ROOT = Path(__file__).parent.resolve()
TOOLS_DIR = "tools"

BASENAME = "chameleontwist.jp"
YAML_FILE = f"{BASENAME}.yaml"
LD_PATH = f"{BASENAME}.ld"
ELF_PATH = f"build/{BASENAME}"
MAP_PATH = f"build/{BASENAME}.map"
PRE_ELF_PATH = f"build/{BASENAME}.elf"
BUILD_PATH = f"build/{BASENAME}.z64"
SHA1_PATH = f"{BASENAME}.sha1"

INCLUDES = "-I. -Iinclude -Iinclude/PR -Iassets -Isrc"

MIPS = "mips-linux-gnu"

IDO_CC = f"{TOOLS_DIR}/ido_5.3/usr/lib/cc"
ASM_PROC = f"python3 {TOOLS_DIR}/asm-processor/build.py"
ASM_PROC_FLAGS = "--input-enc=utf-8 --output-enc=euc-jp"
ASFLAGS = f"{MIPS}-as -EB -mtune=vr4300 -march=vr4300 -mabi=32 {INCLUDES}"

GAME_CC_DIR = f"{ASM_PROC} {ASM_PROC_FLAGS} {IDO_CC} --{ASFLAGS}"
LIB_CC_DIR = GAME_CC_DIR

VERSION = "VER_JP"

DEFINES = f"-D_LANGUAGE_C -DF3DEX_GBI -DNDEBUG -D{VERSION}"

WARNINGS = f"-fullwarn -verbose -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul -woff 649,838"

CFLAGS = f"-G 0 {WARNINGS} {INCLUDES} {DEFINES}" 

GAME_COMPILE_CMD = f"{GAME_CC_DIR} -- -c {CFLAGS} -mips2 -O2"

#LIB_COMPILE_CMD = (f"{LIB_CC_DIR} -c -B {LIB_CC_DIR}/ee- {INCLUDES} -O2 -G0")

LDFLGS = f"-T {LD_PATH} -T undefined_syms_auto.txt -T undefined_syms.txt -Map {MAP_PATH} --no-check-sections"
DEPENDENCY_GEN = f"cpp -w {INCLUDES} -nostdinc -MD -MF $out.d $in -o /dev/null"

IMG_CONVERT = f"{TOOLS_DIR}/image_converter.py"
BIN_CONVERT = f"{TOOLS_DIR}/bin_inc_c.py"

NINJA_FILE = "build.ninja"
NINJA_FILE_ASSETS = "assets.ninja"

args = None #cmd args for use in build_stuff

def clean():
    if os.path.exists(".splache"):
        os.remove(".splache")
    shutil.rmtree("asm", ignore_errors=True)
    shutil.rmtree("assets", ignore_errors=True)
    shutil.rmtree("build", ignore_errors=True)
    print("directory cleaned!")


def write_permuter_settings():
    with open("permuter_settings.toml", "w") as f:
        f.write(
            f"""compiler_command = "{(GAME_COMPILE_CMD)}"
            assembler_command = "$ASFLAGS"
            compiler_type = "gcc"

            [preserve_macros]

            [decompme.compilers]
            f"{TOOLS_DIR}/ido_5.3/usr/lib/cc" = "ido_5.3"
            """
            )

needsRecalculation = False

def build_stuff(linker_entries: List[LinkerEntry]):
    built_objects: Set[Path] = set()

    def build(
        object_paths: Union[Path, List[Path]],
        src_paths: List[Path],
        task: str,
        variables: Dict[str, str] = {},
        implicit_outputs: List[str] = [],
    ):
        if not isinstance(object_paths, list):
            object_paths = [object_paths]

        object_strs = [str(obj) for obj in object_paths]

        for object_path in object_paths:
            if object_path.suffix == ".o":
                built_objects.add(object_path)
            ninja.build(
                outputs=object_strs,
                rule=task,
                inputs=[str(s) for s in src_paths],
                variables=variables,
                implicit_outputs=implicit_outputs,
            )

    ninja = ninja_syntax.Writer(open(NINJA_FILE, "w"))

    ninja.rule(
        "ido_O3_cc",
        command=f"{IDO_CC} -c -G 0 -Xcpluscomm -xansi {INCLUDES} -non_shared -mips2 -woff 819,826,852 -Wab,-r4300_mul -nostdinc -O3 -o $out $in && {DEPENDENCY_GEN}",
        description="Compiling -O3 ido .c file",
        depfile="$out.d",
        deps="gcc",
    )

    ninja.rule(
        "motor_O3_cc",
        command=f"{IDO_CC} -c -G 0 -Xcpluscomm -xansi {INCLUDES} -non_shared -mips1 -woff 819,826,852 -Wab,-r4300_mul -nostdinc -O3 -o $out $in && {DEPENDENCY_GEN}",
        description="Compiling -O3 ido .c file",
        depfile="$out.d",
        deps="gcc",
    )

    ninja.rule(
        "O2_cc",
        command=f"{ASM_PROC} {ASM_PROC_FLAGS} {IDO_CC} -- {ASFLAGS} -- -c {CFLAGS} -mips2 -O2 -o $out $in && {DEPENDENCY_GEN}",
        description="Compiling -O2 .c file",
        depfile="$out.d",
        deps="gcc",
    )

    ninja.rule(
        "O1_cc",
        command=f"{ASM_PROC} {ASM_PROC_FLAGS} {IDO_CC} -- {ASFLAGS} -- -c {CFLAGS} -mips2 -O1 -o $out $in && {DEPENDENCY_GEN}",
        description="Compiling -O1 .c file",
        depfile="$out.d",  # Add the depfile specification here
        deps="gcc",
    )

    ninja.rule(
        "libc_ll_cc",
        command=f"({ASM_PROC} {ASM_PROC_FLAGS} {IDO_CC} -- {ASFLAGS} -- -c {CFLAGS} -mips3 -32 -O1 -o $out $in) && (python3 {TOOLS_DIR}/set_o32abi_bit.py $out)",
        description="Compiling libc_ll_cc .c file"
    )

    ninja.rule(
        "s_file",
        command=f"iconv --from UTF-8 --to EUC-JP $in | {ASFLAGS} -o $out",
        description="Assembling .s file"
    )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{MIPS}-ld {LDFLGS} -o $out"
    )

    #seperate this?
    if not needsRecalculation:
        ninja.rule(
            "make_z64",
            command=f"({MIPS}-objcopy -O binary $in $out) && (sha1sum -c {SHA1_PATH})",
            description="Making z64"
        )
    else:
        ninja.rule(
            "make_z64",
            command=f"({MIPS}-objcopy -O binary $in $out) && ({TOOLS_DIR}/n64crc/n64crc.exe $out)",
            description="Making z64"
        )
        
    


    ninja.rule(
        "elf",
        description="elf $out",
        command=f"{MIPS}-objcopy $in $out -O binary",
    )


    # c file ninja rule overrides
    c_file_rule_overrides = {
        "ll.c": "libc_ll_cc",
        "xprintf.c": "ido_O3_cc",
        "xldtob.c": "ido_O3_cc",
        "scale.c": "ido_O3_cc",
        "mtxcatf.c": "ido_O3_cc",
        "lookat.c": "ido_O3_cc",
        "align.c": "ido_O3_cc",
        "ortho.c": "ido_O3_cc",
        "rotate.c": "ido_O3_cc",
        # audio files. once audio/ is all decompiled, these can be removed and O2_cc -> ido_O3_cc for audio/ below
        "auxbus.c": "ido_O3_cc",
        "bnkf.c": "ido_O3_cc",
        "seqpsetvol.c": "ido_O3_cc",
        "cseq.c": "ido_O3_cc",
        "csplayer.c": "ido_O3_cc",
        "drvrNew.c": "ido_O3_cc",
        "env.c": "ido_O3_cc",
        "event.c": "ido_O3_cc",
        "load.c": "ido_O3_cc",
        "mainbus.c": "ido_O3_cc",
        "resample.c": "ido_O3_cc",
        "reverb.c": "ido_O3_cc",
        "seq.c": "ido_O3_cc",
        "seqplayer.c": "ido_O3_cc",
        "seqpsetbank.c": "ido_O3_cc",
        "seqpsetpan.c": "ido_O3_cc",
        "cspsetseq.c": "ido_O3_cc",
        "cspsettempo.c": "ido_O3_cc",
        #'sl.c': "ido_O3_cc",
        "sndplayer.c": "ido_O3_cc",
        "synthesizer.c": "ido_O3_cc",
        "sndpsetfxmix.c": "ido_O3_cc",
        "sndpsetvol.c": "ido_O3_cc",
        "synallocfx.c": "ido_O3_cc",
        "synallocvoice.c": "ido_O3_cc",
        "synfreevoice.c": "ido_O3_cc",
        "sndpsetpan.c": "ido_O3_cc",
        "sptask.c": "O2_cc",
        "motor.c": "motor_O3_cc",
        "mtxcatl.c": "O2_cc",
        "mtxutil.c": "O2_cc",
        "normalize.c": "O2_cc",
        "perspective.c": "O2_cc",
        "translate.c": "O2_cc",
    }

    #assets
    #i dont think there is a way to retrieve needed files? since its .data anyways
    #manual it is

    #TODO: get a better method to get custom c's. maybe some asset path reading???
    #TODO: why does the github ci compile c's first THEN assets???? ninja2 should NOT be needed and wasnt before.
    
    ninja2 = ninja_syntax.Writer(open(NINJA_FILE_ASSETS, "w"))

    import glob
    asset_files = []
    for file in glob.glob(f"src/**/*.c", recursive=True):
        for custom in ["chameleons/", "levelGroup/", "img/"]:
            if file.find(custom) != -1:
                asset_files.append(file)
                break
    
    #print(split.config["segments"])

    imageOpt = False
    binOpt = False
    binOpt2 = False

    for file in asset_files:
        fileContents = open(file, "r", encoding="utf-8").readlines()
        for line in fileContents:
            if line.find("build/assets/") == -1: continue
            #manual compilation for build/asset files
            if line.find(".png.inc.c") != -1: #is image
                if not imageOpt:
                    #generate image rules if any images used
                    for imageType in ["ia4", "ia8", "i4", "i8", "rgba16", "rgba32", "ci4", "ci8", "palette16", "palette256"]:
                        COMMAND = f"python3 {IMG_CONVERT} {imageType} $in $out"
                        if imageType == "palette16":
                            COMMAND += " --palSize 16"
                        elif imageType == "palette256":
                            COMMAND += " --palSize 256"
                        if imageType.find("palette") != -1:
                            COMMAND = COMMAND.replace(imageType, "palette")
                        ninja2.rule(
                            f'{imageType}_convert',
                            command = COMMAND,
                            description = f"Converting {imageType}"
                        )
                    imageOpt = True
                if not binOpt:
                    #used for inc'd bins
                    #dataOnly 
                    ninja2.rule(
                        "bin_inc_c_d",
                        command=f'python3 {BIN_CONVERT} 1 $in $out',
                        description="bin_inc_c $out"
                    )
                    binOpt = True

                path = line.split("build/")[-1].split(".inc.c")[0].split(".")
                #path should be assets/**/*
                #technically, the type can be gotten from the symbol
                #im too lazy rn, should be easy as going back a line
                png = path.pop(-1)
                type = path[-1]
                path = path[0]+"."+type+".png"
                base = path

                bin = "build/"+path+".bin"
                ninja2.build(bin, type+"_convert", base)
                ninja2.build(bin.replace(".bin", ".inc.c"), "bin_inc_c_d", bin)
                if type.find("ci") != -1: #paletted
                    size = type.split("ci")[-1]
                    if size == "4":
                        size = "16"
                    elif size == "8":
                        size = "256"


                    bin = "build/"+path.replace(".png",".pal")+".bin"
                    ninja2.build(bin, "palette"+size+"_convert", base)
                    ninja2.build(bin.replace(".bin", ".inc.c"), "bin_inc_c_d", bin)
            elif line.find(".inc.c") != -1 and line.find(".pal.inc.c") == -1: #is databin
                if not binOpt2:
                    #used for inc'd bins
                    #dataOnly 
                    ninja2.rule(
                        "bin_inc_c",
                        command=f'python3 {BIN_CONVERT} 0 $in $out',
                        description="bin_inc_c $out"
                    )
                    binOpt2 = True
                path = line.split("build/")[-1].split(".inc.c")[0]+".databin.bin"
                ninja2.build("build/"+path.replace(".databin.bin", ".inc.c"), "bin_inc_c", path)
    print(f"{NINJA_FILE_ASSETS} generated")
    ninja2.close()

    overrideC = []
    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue
        
        #databins' src paths are actually pointing to asm/data.
        #the .s' just incbin the bins anyways. whatever.
        #the rest are just asm so it makes sense
        if isinstance(seg, splat.segtypes.common.databin.CommonSegDatabin)\
        or isinstance(seg, splat.segtypes.common.asm.CommonSegAsm)\
        or isinstance(seg, splat.segtypes.common.data.CommonSegData):
            build(entry.object_path, entry.src_paths, "s_file")
        #clean this up (namely the overrideC) when we fix the other c's
        elif isinstance(seg, splat.segtypes.common.c.CommonSegC):
            override = any(str(src_path).split("/")[-1] in list(c_file_rule_overrides.keys()) for src_path in entry.src_paths)
            ioCheck = any(str(src_path).startswith("src/io/") for src_path in entry.src_paths)
            osCheck = any(str(src_path).startswith("src/os/") for src_path in entry.src_paths)
            if override:
                for src_path in entry.src_paths:
                    fixed = str(src_path).split("/")[-1]
                    if fixed in list(c_file_rule_overrides.keys()):
                        overrideC.append(str(src_path))
                        build(entry.object_path, entry.src_paths, c_file_rule_overrides[fixed])
                        break
            elif ioCheck or osCheck:
                for src_path in entry.src_paths:
                    overrideC.append(str(src_path))
                build(entry.object_path, entry.src_paths, "O1_cc")
            else:
                for src_path in entry.src_paths:
                    overrideC.append(str(src_path))
                build(entry.object_path, entry.src_paths, "O2_cc")
        else:
            print(f"ERROR: Unsupported build segment type {seg.type}")
            sys.exit(1)


    #invalidate this by letting the linker entries do the work
    #cant rn bc of yaml stuff but when we can get that to work


    c_files = [file for file in glob.glob(f"src/**/*.c", recursive=True) if not file in overrideC]

    o_files = []
    for c_file in c_files:
        o_file = "build/"+c_file+".o"
        o_files.append(o_file)

        if os.path.dirname(c_file) == "src/mod":
            continue

        if os.path.dirname(c_file) == "src/audio":
            ninja.build(o_file, "O2_cc", c_file)  # Update later
        elif os.path.dirname(c_file) in ["src/io", "src/os"]:
            ninja.build(o_file, "O1_cc", c_file)
    
    for obj in built_objects:
        o_files.append(str(obj))
    #########################

    ninja.build(
        PRE_ELF_PATH,
        "ld",
        LD_PATH,
        o_files
    )

    ninja.build(
        BUILD_PATH,
        "make_z64",
        PRE_ELF_PATH
    )

    ninja.build(
        ELF_PATH,
        "elf",
        PRE_ELF_PATH,
    )


    print(f"{NINJA_FILE} generated")
    ninja.close()



if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "-c",
        "--clean",
        help="Clean extraction and build artifacts",
        action="store_true",
    )

    parser.add_argument(
        "-n",
        "--nonmatching",
        help="Build a non-matching version of the game",
        action="store_true",
    )

    parser.add_argument(
        "-crc",
        "--chckrecalc",
        help="Build a checksum-recalculated version of the game",
        action="store_true",
    )

    args = parser.parse_args()

    if args.clean:
        clean()
    
    needsRecalculation = args.nonmatching or args.chckrecalc

    if needsRecalculation:
        print('checksum will be recalibrated when building!')
        subprocess.run(f"gcc {TOOLS_DIR}/n64crc/n64crc.c -o {TOOLS_DIR}/n64crc/n64crc.exe", shell = True, executable="/bin/bash")
    
    if args.nonmatching:
        print('a nonmatching rom will be built!')
        to = DEFINES + " -DNON_MATCHING"
        CFLAGS = CFLAGS.replace(DEFINES, to)
        GAME_COMPILE_CMD = GAME_COMPILE_CMD.replace(DEFINES, to)
        DEFINES = to
        

    split.main([YAML_FILE], modes="all", verbose=False, use_cache=False)

    linker_entries = split.linker_writer.entries

    build_stuff(linker_entries)

    write_permuter_settings()