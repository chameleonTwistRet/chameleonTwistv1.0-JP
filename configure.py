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

c_files = glob.glob(f'{dir_path}/**/*.c', recursive=True)
s_files = glob.glob(f'{asm_path}/**/*.s', recursive=True)
bin_files = glob.glob(f'{assets_path}/**/*.bin', recursive=True)

c_files = [file for file in c_files if not file.startswith(mod_dir)]
s_files = [file for file in s_files if not file.startswith(mod_dir)]
bin_files = [file for file in bin_files if not file.startswith(mod_dir)]

def append_extension(filename, extension='.o'):
    return filename + extension

def append_prefix(filename, prefix='build/'):
    return prefix + filename

ia4_files = glob.glob(f'{assets_path}/**/*ia4.png', recursive=True)
ia8_files = glob.glob(f'{assets_path}/**/*ia8.png', recursive=True)
rgba16_files = glob.glob(f'{assets_path}/**/*rgba16.png', recursive=True)
rgba32_files = glob.glob(f'{assets_path}/**/*rgba32.png', recursive=True)
ci8_files = glob.glob(f'{assets_path}/**/*ci8.png', recursive=True)
ci4_files = glob.glob(f'{assets_path}/**/*ci4.png', recursive=True)

# Append '.png' to each file name in the lists
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

image_files_o = ia4_png_files_o + ia8_png_files_o + rgba16_png_files_o + rgba32_png_files_o + ci4_png_files_o + ci8_png_files_o + ci4_pal_files_o + ci8_pal_files_o

o_files = []
for file in c_files + s_files + bin_files + ia4_files + ia8_files + rgba16_files + rgba32_files + ci8_files + ci4_files + ci4_files_pal_final + ci8_files_pal_final:
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
ninja_file.variable('MAKE_EXPECTED', 'tools/make_expected.py')
ninja_file.variable('GCC_FLAGS', '$include_cflags $DEFINES -G 0 -mno-shared -march=vr4300 -mfix4300 -mabi=32 -mhard-float -mdivide-breaks -fno-stack-protector -fno-common -fno-zero-initialized-in-bss -fno-PIC -mno-abicalls -fno-strict-aliasing -fno-inline-functions -ffreestanding -fwrapv -Wall -Wextra -Wno-missing-braces')

ninja_file.rule('O2_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O2 -o $out $in',
    description = 'Compiling -O2 .c file' )

ninja_file.rule('O1_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O1 -o $out $in',
    description = 'Compiling -O1 .c file' )

ninja_file.rule('s_file',
    command = 'iconv --from UTF-8 --to EUC-JP $in | $AS $ASFLAGS -o $out',
    description = 'Assembling .s file' )

ninja_file.rule('bin_file',
    command = '$LD -r -b binary -o $out $in')

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

ninja_file.rule('libc_ll_cc',
                 command = "($ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS -mips3 -32 -O1 -o $out $in) && (python3 tools/set_o32abi_bit.py $out)",
                 description = "Converting pal")

for c_file in c_files:
    if os.path.dirname(c_file) == mod_dir:
        continue
    elif os.path.basename(c_file) == 'll.c':  # Compare only the filename
        ninja_file.build(append_prefix(append_extension(c_file)), "libc_ll_cc", c_file)
    elif os.path.dirname(c_file) == audio_dir or os.path.dirname(c_file) == code_dir or os.path.dirname(c_file) == libc_dir:  # Check if the file's directory matches the specific folder
        ninja_file.build(append_prefix(append_extension(c_file)), "O2_cc", c_file)
    elif os.path.dirname(c_file) == gu_dir:
        ninja_file.build(append_prefix(append_extension(c_file)), "O2_cc", c_file) #update later
    elif os.path.dirname(c_file) == io_dir or os.path.dirname(c_file) == os_dir:
        ninja_file.build(append_prefix(append_extension(c_file)), "O1_cc", c_file)

for s_file in s_files:
    if "asm/nonmatchings" in s_file:
        continue
    ninja_file.build(append_prefix(append_extension(s_file)), "s_file", s_file)

for bin_file in bin_files:
    ninja_file.build(append_prefix(append_extension(bin_file)), "bin_file", bin_file)

for ia4_file in ia4_files:
    ninja_file.build(append_prefix(append_extension(ia4_file, ".png")), "ia4_convert", ia4_file)

for ia8_file in ia8_files:
    ninja_file.build(append_prefix(append_extension(ia8_file, ".png")), "ia8_convert", ia8_file)

for rgba16_file in rgba16_files:
    ninja_file.build(append_prefix(append_extension(rgba16_file, ".png")), "rgba16_convert", rgba16_file)

for rgba32_file in rgba32_files:
    ninja_file.build(append_prefix(append_extension(rgba32_file, ".png")), "rgba32_convert", rgba32_file)


for ci4_file in ci4_files:
    png_png_file = append_prefix(append_extension(ci4_file, ".png"))
    ninja_file.build(png_png_file, "ci4_convert", ci4_file)
    png_pal_file = append_prefix(append_extension(ci4_file, ".pal"))
    ninja_file.build(png_pal_file, "pal_convert", ci4_file)

for ci8_file in ci8_files:
    png_png_file = append_prefix(append_extension(ci8_file, ".png"))
    ninja_file.build(png_png_file, "ci8_convert", ci8_file)
    png_pal_file = append_prefix(append_extension(ci8_file, ".pal"))
    ninja_file.build(png_pal_file, "pal_convert", ci8_file)
    

#change .png.png -> png.o
#change .png.pal -> pal.o
#we are forced into using these extension names by splat due to how the linker generates

for img_file in image_files_o:
    extension = os.path.splitext(img_file)[1]
    if extension == '.pal':
        pal_file = os.path.splitext(img_file)[0]
        pal_file_pal = os.path.splitext(pal_file)[0] + '.pal'
        ninja_file.build(append_extension(append_prefix(pal_file_pal)), "objcopy_image", append_prefix(img_file))
    elif extension == '.png':
        png_file = os.path.splitext(img_file)[0]
        ninja_file.build(append_extension(append_prefix(png_file)), "objcopy_image", append_prefix(img_file))
       
ninja_file.build("build/chameleonTwistJP.elf", "make_elf ", o_files)
ninja_file.build("build/chameleonTwistJP.z64", "make_z64 ", "build/chameleonTwistJP.elf")
ninja_file.build("build/chameleonTwistJP.ok", "make_expected ", "build/chameleonTwistJP.z64")


print ("build.ninja generated")
ninja_file.close()
