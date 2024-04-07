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
TOOLS_DIR = ROOT / "tools"

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
ASM_PROC = "python3 tools/asm-processor/build.py"
ASM_PROC_FLAGS = "--input-enc=utf-8 --output-enc=euc-jp"
ASFLAGS = f"{MIPS}-as -EB -mtune=vr4300 -march=vr4300 -mabi=32 {INCLUDES}"

GAME_CC_DIR = f"{ASM_PROC} {ASM_PROC_FLAGS} {IDO_CC} --{ASFLAGS}"
LIB_CC_DIR = GAME_CC_DIR
DEFINES = "-D_LANGUAGE_C -DF3DEX_GBI -DNDEBUG"
WARNINGS = f"-fullwarn -verbose -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul {DEFINES} -woff 649,838"
CFLAGS = f"-G 0 {WARNINGS} {INCLUDES}" 
GAME_COMPILE_CMD = (
    f"{GAME_CC_DIR} {INCLUDES} -- -c {CFLAGS} -mips2 -O2"
)
LIB_COMPILE_CMD = (
    f"{LIB_CC_DIR} -c -B {LIB_CC_DIR}/ee- {INCLUDES} -O2 -G0"
)

LDFLGS = f"-T {LD_PATH} -T undefined_syms_auto.txt -T undefined_syms.txt -Map {MAP_PATH} --no-check-sections"
DEPENDENCY_GEN = f"cpp -w {INCLUDES} -nostdinc -MD -MF $out.d $in -o /dev/null"

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
            f"""compiler_command = "{GAME_COMPILE_CMD}"
            assembler_command = "$ASFLAGS"
            compiler_type = "gcc"

            [preserve_macros]

            [decompme.compilers]
            "tools/ido_5.3/usr/lib/cc" = "ido_5.3"
            """
            )

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

    ninja = ninja_syntax.Writer(open("build.ninja", "w"))
    

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
        command=f"({ASM_PROC} {ASM_PROC_FLAGS} {IDO_CC} -- {ASFLAGS} -- -c {CFLAGS} -mips3 -32 -O1 -o $out $in) && (python3 tools/set_o32abi_bit.py $out)",
        description="Converting pal",
    )

    ninja.rule(
        "s_file",
        command=f"iconv --from UTF-8 --to EUC-JP $in | {ASFLAGS} -o $out",
        description="Assembling .s file",
    )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{MIPS}-ld {LDFLGS} -o $out",
    )

    #seperate this?
    ninja.rule(
        "make_z64",
        command=f"({MIPS}-objcopy -O binary $in $out) && (sha1sum -c {SHA1_PATH})",
        description="Making z64",
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
                    if str(src_path).startswith("src/"):
                        fixed = str(src_path).split("/")[-1]
                        if fixed in list(c_file_rule_overrides.keys()):
                            overrideC.append(str(src_path))
                            build(entry.object_path, entry.src_paths, c_file_rule_overrides[fixed])
                            break
            elif ioCheck or osCheck:
                for src_path in entry.src_paths:
                    if str(src_path).startswith("src/"):
                        overrideC.append(str(src_path))
                build(entry.object_path, entry.src_paths, "O1_cc")
            else:
                for src_path in entry.src_paths:
                    if str(src_path).startswith("src/"):
                        overrideC.append(str(src_path))
                build(entry.object_path, entry.src_paths, "O2_cc")
        else:
            print(f"ERROR: Unsupported build segment type {seg.type}")
            sys.exit(1)
    
    #invalidate this by letting the linker entries do the work
    #cant rn bc of yaml stuff but when we can get that to work

    import glob

    c_files = glob.glob(f"src/**/*.c", recursive=True)
    c_files = [file for file in c_files if not file in overrideC]

    def append_extension(filename, extension=".o"):
        return filename + extension
    def append_prefix(filename, prefix="build/"):
        return prefix + filename

    o_files = []
    for file in c_files:
        o_files.append(append_prefix(append_extension(file)))

    for c_file in c_files:
        if os.path.dirname(c_file) == "src/mod":
            continue

        if os.path.dirname(c_file) == "src/audio":
            ninja.build(append_prefix(append_extension(c_file)), "O2_cc", c_file)  # Update later
        elif os.path.dirname(c_file) in ["src/io", "src/os"]:
            ninja.build(append_prefix(append_extension(c_file)), "O1_cc", c_file)
    
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

    print("build.ninja generated")
    ninja.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "-c",
        "--clean",
        help="Clean extraction and build artifacts",
        action="store_true",
    )
    args = parser.parse_args()

    if args.clean:
        clean()

    split.main([YAML_FILE], modes="all", verbose=False, use_cache=False)

    linker_entries = split.linker_writer.entries

    build_stuff(linker_entries)

    write_permuter_settings()