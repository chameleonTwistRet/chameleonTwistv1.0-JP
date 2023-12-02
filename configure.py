import glob
import os
import ninja_syntax

dir_path = 'src/'
asm_path = 'asm/'
assets_path = 'assets/'
audio_dir = 'src/audio'
code_dir = 'src/code'
gu_dir = 'src/gu'
io_dir = 'src/io'
libc_dir = 'src/libc'
os_dir = 'src/os'
mod_dir = 'src/mod'

incResources = True
incSuffix = ".ME" #once we properly inc all the resources, obsolete this
incDataOnly = "d"

c_files = glob.glob(f'{dir_path}/**/*.c', recursive=True)
s_files = glob.glob(f'{asm_path}/**/*.s', recursive=True)
bin_files = glob.glob(f'{assets_path}/**/*.bin', recursive=True)

c_files = [file for file in c_files if not file.startswith(mod_dir)]
s_files = [file for file in s_files if not file.startswith(mod_dir)]
bin_files = [file for file in bin_files if not file.startswith(mod_dir)]

def getIncs(arr):
    new = []
    i = 0
    while i < len(arr):
        if arr[i].find(incSuffix) != -1 and incResources:
            new.append(arr.pop(i))
            continue
        i += 1
    return new

inc_bin_files = getIncs(bin_files)

def append_extension(filename, extension='.o'):
    return filename + extension

def append_prefix(filename, prefix='build/'):
    return prefix + filename

i4_files = glob.glob(f'{assets_path}/**/*.i4.png', recursive=True)
i8_files = glob.glob(f'{assets_path}/**/*.i8.png', recursive=True)
ia4_files = glob.glob(f'{assets_path}/**/*.ia4.png', recursive=True)
ia8_files = glob.glob(f'{assets_path}/**/*.ia8.png', recursive=True)
rgba16_files = glob.glob(f'{assets_path}/**/*.rgba16.png', recursive=True)
rgba32_files = glob.glob(f'{assets_path}/**/*.rgba32.png', recursive=True)
ci8_files = glob.glob(f'{assets_path}/**/*.ci8.png', recursive=True)
ci4_files = glob.glob(f'{assets_path}/**/*.ci4.png', recursive=True)


inc_i4_files = getIncs(i4_files)
inc_i8_files = getIncs(i8_files)
inc_ia4_files = getIncs(ia4_files)
inc_ia8_files = getIncs(ia8_files)
inc_rgba16_files = getIncs(rgba16_files)
inc_rgba32_files = getIncs(rgba32_files)
inc_ci8_files = getIncs(ci8_files)
inc_ci4_files = getIncs(ci4_files)


# Append '.png' to each file name in the lists
i4_png_files_o = [file + '.png' for file in i4_files]
i8_png_files_o = [file + '.png' for file in i8_files]
ia4_png_files_o = [file + '.png' for file in ia4_files]
ia8_png_files_o = [file + '.png' for file in ia8_files]
rgba16_png_files_o = [file + '.png' for file in rgba16_files]
rgba32_png_files_o = [file + '.png' for file in rgba32_files]

ci4_png_files_o = [file + '.png' for file in ci4_files]
ci8_png_files_o = [file + '.png' for file in ci8_files]

ci4_files_pal_final = [os.path.splitext(file)[0] + '.pal' for file in ci4_files]
ci8_files_pal_final = [os.path.splitext(file)[0] + '.pal' for file in ci8_files]

ci4_pal_files_o = [file + '.pal' for file in ci4_files]
ci8_pal_files_o = [file + '.pal' for file in ci8_files]

image_files_o = i4_png_files_o + i8_png_files_o + ia4_png_files_o + ia8_png_files_o + rgba16_png_files_o + rgba32_png_files_o + ci4_png_files_o + ci8_png_files_o + ci4_pal_files_o + ci8_pal_files_o

o_files = []

to_o = c_files + s_files + i4_files + i8_files + ia4_files + ia8_files + rgba16_files + rgba32_files + ci8_files + ci4_files + ci4_files_pal_final + ci8_files_pal_final + bin_files

for file in to_o:
    if 'asm/nonmatchings/' not in file:
        o_files.append(append_prefix(append_extension(file)))

ninja_file = ninja_syntax.Writer(open('build.ninja', 'w'))

ninja_file.variable('AS', 'mips-linux-gnu-as')
ninja_file.variable('CPP', 'cpp')
ninja_file.variable('LD', 'mips-linux-gnu-ld')
ninja_file.variable('LDFLAGS', '-T chameleontwist.jp.ld -T undefined_syms_auto.txt -T undefined_syms.txt -Map build/chameleontwist.jp.map --no-check-sections')
ninja_file.variable('OBJDUMP', 'mips-linux-gnu-objdump')
ninja_file.variable('OBJCOPY', 'mips-linux-gnu-objcopy')
ninja_file.variable('OBJCOPYFLAGS', '-O binary')
ninja_file.variable('cflags', '-G 0 -fullwarn -verbose -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul')
ninja_file.variable('include_cflags', '-I. -Iinclude -Iinclude/PR -Iassets -Isrc')
ninja_file.variable('check_warnings_gcc', '-Wall -Waddress -Wextra -Wno-format-security -Wno-unknown-pragmas -Wno-unused-parameter -Wno-unused-variable -Wno-missing-braces -Wno-int-conversion -Wno-comment')
ninja_file.variable('cc_check', 'gcc -fsyntax-only -fno-builtin -fsigned-char -std=gnu90 -m32 $check_warnings_gcc $include_cflags')
ninja_file.variable('ido_cc', 'tools/ido_5.3/usr/lib/cc')
ninja_file.variable('mips_version', '-mips2')
ninja_file.variable('DEFINES', '-D_LANGUAGE_C -DF3DEX_GBI -DNDEBUG')
ninja_file.variable('CFLAGS', '-woff 649,838 $include_cflags')
ninja_file.variable('ASM_PROC', 'python3 tools/asm-processor/build.py')
ninja_file.variable('ASM_PROC_FLAGS', '--input-enc=utf-8 --output-enc=euc-jp')
ninja_file.variable('ASFLAGS', '-EB -mtune=vr4300 -march=vr4300 -mabi=32 -Iinclude -Isrc')
ninja_file.variable('opt_flags', '-O2')
ninja_file.variable('IMG_CONVERT', 'tools/image_converter.py')
ninja_file.variable('BIN_CONVERT', 'tools/bin_inc_c.py')
ninja_file.variable('MAKE_EXPECTED', 'tools/make_expected.py')
ninja_file.variable('GCC_FLAGS', '$include_cflags $DEFINES -G 0 -mno-shared -march=vr4300 -mfix4300 -mabi=32 -mhard-float -mdivide-breaks -fno-stack-protector -fno-common -fno-zero-initialized-in-bss -fno-PIC -mno-abicalls -fno-strict-aliasing -fno-inline-functions -ffreestanding -fwrapv -Wall -Wextra -Wno-missing-braces')

ninja_file.rule('gcc_dependency',
    command = '$cc_check -MM -MT $out -MF $out.d $in',
    description = 'Generating dependencies $out.d',
    depfile = '$out.d',
    deps = 'gcc')

ninja_file.rule('ido_O3_cc',
    command = '$ido_cc -c -G 0 -Xcpluscomm -xansi -I. -Iinclude/PR -Iinclude -non_shared -mips2 -woff 819,826,852 -Wab,-r4300_mul -nostdinc -O3 -o $out $in',
    description = 'Compiling -O3 ido .c file',
    depfile = '$out.d',
    deps = 'gcc')

ninja_file.rule('motor_O3_cc',
    command = '$ido_cc -c -G 0 -Xcpluscomm -xansi -I. -Iinclude/PR -Iinclude -non_shared -mips1 -woff 819,826,852 -Wab,-r4300_mul -nostdinc -O3 -o $out $in',
    description = 'Compiling -O3 ido .c file',
    depfile = '$out.d',
    deps = 'gcc')

ninja_file.rule('O2_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O2 -o $out $in',
    description = 'Compiling -O2 .c file',
    depfile = '$out.d',
    deps = 'gcc')

ninja_file.rule('O1_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O1 -o $out $in',
    description = 'Compiling -O1 .c file',
    depfile = '$out.d',  # Add the depfile specification here
    deps = 'gcc')

ninja_file.rule('s_file',
    command = 'iconv --from UTF-8 --to EUC-JP $in | $AS $ASFLAGS -o $out',
    description = 'Assembling .s file' )

ninja_file.rule('make_elf',
    command = '$LD $LDFLAGS -o $out',
    description = 'Linking ELF')

ninja_file.rule('make_z64',
    command = '($OBJCOPY -O binary $in $out) && (sha1sum -c chameleonTwistJP.sha1)',
    description = 'Making z64')

ninja_file.rule('make_expected',
    command = '(cp $in $out) && (python3 ./$MAKE_EXPECTED $in)')

ninja_file.rule('ia4_convert',
                 command = "python3 ./$IMG_CONVERT ia4 $in $out",
                 description = "Converting ia4")

ninja_file.rule('ia8_convert',
                 command = "python3 ./$IMG_CONVERT ia8 $in $out",
                 description = "Converting ia8")

ninja_file.rule('i4_convert',
                 command = "python3 ./$IMG_CONVERT i4 $in $out",
                 description = "Converting i4")

ninja_file.rule('i8_convert',
                 command = "python3 ./$IMG_CONVERT i8 $in $out",
                 description = "Converting i8")

ninja_file.rule('rgba16_convert',
                 command = "python3 ./$IMG_CONVERT rgba16 $in $out",
                 description = "Converting rgba16")

ninja_file.rule('rgba32_convert',
                 command = "python3 ./$IMG_CONVERT rgba32 $in $out",
                 description = "Converting rgba32")

ninja_file.rule('ci4_convert',
                 command = "python3 ./$IMG_CONVERT ci4 $in $out",
                 description = "Converting ci4")

ninja_file.rule('ci8_convert',
                 command = "python3 ./$IMG_CONVERT ci8 $in $out",
                 description = "Converting ci8")

ninja_file.rule('objcopy_image',
                 command = "$LD -r -b binary -o $out $in")

ninja_file.rule('pal_convert',
                 command = "python3 ./$IMG_CONVERT palette $in $out",
                 description = "Converting pal")

#used for inc'd bins
#dataOnly 
ninja_file.rule("bin_inc_c_d",
                 command=f'python3 ./$BIN_CONVERT 1 $in $out',
                 description="bin_inc_c $out",)
#with generated symbol
ninja_file.rule("bin_inc_c",
                 command=f'python3 ./$BIN_CONVERT 0 $in $out',
                 description="bin_inc_c $out",)
#otherwise
ninja_file.rule('bin_file',
                 command = '$LD -r -b binary -o $out $in')

ninja_file.rule('libc_ll_cc',
                 command = "($ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS -mips3 -32 -O1 -o $out $in) && (python3 tools/set_o32abi_bit.py $out)",
                 description = "Converting pal")

#c file ninja rule overrides
c_file_rule_overrides = {
    'll.c': "libc_ll_cc",
    'xprintf.c': "ido_O3_cc",
    'xldtob.c': "ido_O3_cc",
    'scale.c': "ido_O3_cc",
    'mtxcatf.c': "ido_O3_cc",
    'lookat.c': "ido_O3_cc",
    'align.c': "ido_O3_cc",
    'getfrustum.c': "ido_O3_cc",
    'rotate.c': "ido_O3_cc",

    #audio files. once audio/ is all decompiled, these can be removed and O2_cc -> ido_O3_cc for audio/ below
    'auxbus.c': "ido_O3_cc",
    'bnkf.c': "ido_O3_cc",
    'seqpsetvol.c': "ido_O3_cc",
    'cseq.c': "ido_O3_cc",
    'csplayer.c': "ido_O3_cc",
    'drvrNew.c': "ido_O3_cc",
    'env.c': "ido_O3_cc",
    'event.c': "ido_O3_cc",
    'load.c': "ido_O3_cc",
    'mainbus.c': "ido_O3_cc",
    'resample.c': "ido_O3_cc",
    'reverb.c': "ido_O3_cc",
    'seq.c': "ido_O3_cc",
    'seqplayer.c': "ido_O3_cc",
    'seqpsetbank.c': "ido_O3_cc",
    'seqpsetpan.c': "ido_O3_cc",
    'cspsetseq.c': "ido_O3_cc",
    'cspsettempo.c': "ido_O3_cc",
    #'sl.c': "ido_O3_cc",
    'sndplayer.c': "ido_O3_cc",
    'synthesizer.c': "ido_O3_cc",
    'sndpsetfxmix.c': "ido_O3_cc",
    'sndpsetvol.c': "ido_O3_cc",
    'synallocfx.c': "ido_O3_cc",
    'synallocvoice.c': "ido_O3_cc",
    'synfreevoice.c': "ido_O3_cc",
    'sndpsetpan.c': "ido_O3_cc",
    'sptask.c': "O2_cc",

    'motor.c': "O2_cc", #should actually use rule "motor_O3_cc" when C file is ready to compile


    'mtxcatl.c': "O2_cc",
    'mtxutil.c': "O2_cc",
    'normalize.c': "O2_cc",
    'perspective.c': "O2_cc",
    'translate.c': "O2_cc",
}

def getFileSettings(file):
    suffix = incSuffix+incDataOnly if file.find(incSuffix+incDataOnly) != -1 else incSuffix
    rule = "bin_inc_c" if suffix == incSuffix else "bin_inc_c_d"
    return {"suffix":suffix, "rule":rule}

def doImageBuild(image, rule, inc=False):
    if not inc: #standard building
        ninja_file.build(append_prefix(append_extension(image, ".png")), rule, image)
        if image.find(".ci") != -1: #paletted
            ninja_file.build(append_prefix(append_extension(image, ".pal")), "pal_convert", image)
    else: #inc into c's
        s = getFileSettings(image)
        result = append_prefix(append_extension(image, ".bin").replace(s["suffix"], ""), "build/include/")
        ninja_file.build(result, rule, image)
        ninja_file.build(result.replace(".bin", ".inc.c"), s["rule"], result)
        if image.find(".ci") != -1: #paletted
            result = append_prefix(append_extension(image.replace(".png", ".pal"), ".bin").replace(s["suffix"], ""), "build/include/")
            ninja_file.build(result, "pal_convert", image)
            ninja_file.build(result.replace(".bin", ".inc.c"), s["rule"], result)

for ia4_file in ia4_files: doImageBuild(ia4_file, "ia4_convert")
for ia8_file in ia8_files: doImageBuild(ia8_file, "ia8_convert")
for i4_file in i4_files: doImageBuild(i4_file, "i4_convert")
for i8_file in i8_files: doImageBuild(i8_file, "i8_convert")
for rgba16_file in rgba16_files: doImageBuild(rgba16_file, "rgba16_convert")
for rgba32_file in rgba32_files: doImageBuild(rgba32_file, "rgba32_convert")
for ci4_file in ci4_files: doImageBuild(ci4_file, "ci4_convert")
for ci8_file in ci8_files: doImageBuild(ci8_file, "ci8_convert")

for ia4_file in inc_ia4_files: doImageBuild(ia4_file, "ia4_convert", True)
for ia8_file in inc_ia8_files: doImageBuild(ia8_file, "ia8_convert", True)
for i4_file in inc_i4_files: doImageBuild(i4_file, "i4_convert", True)
for i8_file in inc_i8_files: doImageBuild(i8_file, "i8_convert", True)
for rgba16_file in inc_rgba16_files: doImageBuild(rgba16_file, "rgba16_convert", True)
for rgba32_file in inc_rgba32_files: doImageBuild(rgba32_file, "rgba32_convert", True)
for ci4_file in inc_ci4_files: doImageBuild(ci4_file, "ci4_convert", True)
for ci8_file in inc_ci8_files: doImageBuild(ci8_file, "ci8_convert", True)

for bin_file in bin_files:
    ninja_file.build(append_prefix(append_extension(bin_file)), "bin_file", bin_file)

for inc_bin in inc_bin_files:
    s = getFileSettings(inc_bin)
    ninja_file.build(append_prefix(inc_bin.replace(s["suffix"]+".bin", ".inc.c"), "build/include/"), s["rule"], inc_bin)

#change .png.png -> png.o
#change .png.pal -> pal.o
#we are forced into using these extension names by splat due to how the linker script generates
for img_file in image_files_o:
    extension = os.path.splitext(img_file)[1]
    if extension == '.pal':
        pal_file = os.path.splitext(img_file)[0]
        pal_file_pal = os.path.splitext(pal_file)[0] + '.pal'
        ninja_file.build(append_extension(append_prefix(pal_file_pal)), "objcopy_image", append_prefix(img_file))
    elif extension == '.png':
        png_file = os.path.splitext(img_file)[0]
        ninja_file.build(append_extension(append_prefix(png_file)), "objcopy_image", append_prefix(img_file))

for c_file in c_files:
    if os.path.dirname(c_file) == mod_dir: continue

    file_name = os.path.basename(c_file)
    dep = append_prefix(append_extension(c_file) + '.d')
    c_file_target = append_prefix(append_extension(c_file))

    #build depedency file
    ninja_file.build(dep, "gcc_dependency", c_file)

    if file_name in c_file_rule_overrides:
        build_target = c_file_rule_overrides[file_name]
        ninja_file.build(append_prefix(append_extension(c_file)), build_target, c_file, dep)
    elif os.path.dirname(c_file) in [code_dir, libc_dir]:
        ninja_file.build(append_prefix(append_extension(c_file)), "O2_cc", c_file, dep)
    elif os.path.dirname(c_file) == audio_dir:
        ninja_file.build(append_prefix(append_extension(c_file)), "O2_cc", c_file, dep)  # Update later
    elif os.path.dirname(c_file) == gu_dir:
        ninja_file.build(append_prefix(append_extension(c_file)), "O2_cc", c_file, dep)  # Update later
    elif os.path.dirname(c_file) in [io_dir, os_dir]:
        ninja_file.build(c_file_target, "O1_cc", c_file, dep)
    else:
        ninja_file.build(append_prefix(append_extension(c_file)), "O2_cc", c_file, dep)  # Update later

for s_file in s_files:
    if "asm/nonmatchings" in s_file: continue
    ninja_file.build(append_prefix(append_extension(s_file)), "s_file", s_file)
       
ninja_file.build("build/chameleonTwistJP.elf", "make_elf ", o_files)
ninja_file.build("build/chameleonTwistJP.z64", "make_z64 ", "build/chameleonTwistJP.elf")
ninja_file.build("build/chameleonTwistJP.ok", "make_expected ", "build/chameleonTwistJP.z64")


print ("build.ninja generated")
ninja_file.close()
