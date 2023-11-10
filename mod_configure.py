import glob
import os
import ninja_syntax
import fnmatch

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

mod_asm_path = 'src/mod/'
mod_assets_path = None

for root, dirs, files in os.walk(mod_asm_path):
    if 'assets' in dirs:
        mod_assets_path = os.path.join(root, 'assets')
        break

c_files = glob.glob(f'{dir_path}/**/*.c', recursive=True)
s_files = glob.glob(f'{asm_path}/**/*.s', recursive=True)
bin_files = glob.glob(f'{assets_path}/**/*.bin', recursive=True)
a_files = glob.glob(f'{mod_dir}/**/*.a', recursive=True)

for root, dirs, files in os.walk(mod_dir):
    s_file = glob.glob(os.path.join(root, '*.s'))
    s_files.extend(s_file)

if os.name == 'nt':
    DETECTED_OS = 'windows'
else:
    uname = os.uname()
    if uname[0] == 'Linux':
        DETECTED_OS = 'linux'
    elif uname[0] == 'Darwin':
        DETECTED_OS = 'macos'
        MAKE = 'gmake'
        CPPFLAGS += '-xc++'

# c_files = [file for file in c_files if not file.startswith(mod_dir)]
# s_files = [file for file in s_files if not file.startswith(mod_dir)]
# bin_files = [file for file in bin_files if not file.startswith(mod_dir)]

with open('asm/nonmatchings/code/5FF30/MainLoop.s', 'r') as file:
    # Read the contents of the file
    lines = file.readlines()

# Replace lines 37 through 61 with the new text
lines[37:61] = [
    '/* 6BA88 80090688 */  sw         $ra, 0x14($sp)\n'
    '/* 6BA8C 8009068C */  jal        func_8002D080\n',
    '/* 6BA90 80090690 */  nop\n',
    '/* 6BA94 80090694 */  lui $a0, %hi(mod_ROM_START)\n',
    '/* 6BA98 80090698 */  addiu $a0, $a0, %lo(mod_ROM_START)\n',
    '/* 6BA9C 8009069C */  lui $a1, %hi(mod_VRAM)\n',
    '/* 6BAA0 800906A0 */  addiu $a0, $a0, %lo(mod_VRAM)\n',
    '/* 6BAA4 800906A4 */  lui $a2, %hi(mod_ROM_END)\n',
    '/* 6BAA8 800906A8 */  addiu $a2, $a2, %lo(mod_ROM_END)\n',
    '/* 6BAAC 800906AC */  lui $a3, %hi(mod_ROM_START)\n',
    '/* 6BAB0 800906B0 */  addiu $a3, $a3, %lo(mod_ROM_START)\n',
    '/* 6BAB4 800906B4 */  subu $a2, $a2, $a3\n',
    '/* 6BAB8 800906B8 */  jal dma_copy\n',
    '/* 6BABC 800906BC */  nop\n',
    '/* 6BAC0 800906C0 */  lui $t0, 0xA460\n'
    '/* 6BAC4 800906C4 */  ori $t0, $t0, 0x0010\n'
    '/* 6BAC8 800906C8 */  lw $t1, 0x0000 ($t0)\n'
    '/* 6BACC 800906CC */  andi $t2, $t1, 0x03\n'
    '/* 6BAD0 800906D0  BNE $zero, $t2, dmaLoop */ .word 0x140AFFFD \n'
    '/* 6BAD4 800906D4 */  nop\n'
    '/* 6BAD8 800906D8 */  J mod_main_func\n',
    '/* 6BADC 800906DC */  nop\n'
]


# Open the file for writing
with open('asm/nonmatchings/code/5FF30/MainLoop.s', 'w') as file:
    # Write the modified contents back to the file
    file.writelines(lines)

linker_script_file = 'chameleontwist.jp.ld'
mod_directory = 'src/mod'

with open(linker_script_file) as file:
    for line_number, line in enumerate(file):
        if 'ROM_PADDING_VRAM_END' in line:
            next_line = next(file, None)
            break
line_number = line_number + 1

with open(linker_script_file, 'r') as file:
    lines = file.readlines()


lines[line_number:line_number] = [
    "\n\t__romPos = 0xC00000;\n",
    "\tmod_ROM_START = __romPos;\n",
    "\tmod_VRAM = ADDR(.mod);\n",
    "\t.mod 0x80400000 : AT(mod_ROM_START) SUBALIGN(16)\n",
    "\t{\n",
    "\t\tmod_TEXT_START = .;\n"
]
line_number += 6


for index, line in enumerate(lines):
    if 'ROM_PADDING_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.text);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.text);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.a'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.text);\n")
                line_number += 1
        break

lines.insert(line_number, "\t\tmod_RODATA_START = .;\n")
line_number += 1

for index, line in enumerate(lines):
    if 'ROM_PADDING_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.rodata);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.rodata);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.a'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.rodata*);\n")
                line_number += 1
        break

lines.insert(line_number, "\t\tmod_DATA_START = .;\n")
line_number += 1        

for index, line in enumerate(lines):
    if 'ROM_PADDING_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.data);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.data);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.a'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.data);\n")
                line_number += 1
        break

lines[line_number:line_number] = [
    "\t}\n",
    "\tmod_BSS_VRAM = ADDR(.mod_BSS);\n",
    "\t.mod_BSS (NOLOAD) : SUBALIGN(8)\n",
    "\t{\n",
    "\t\tmod_BSS_START = .;\n"
]
line_number += 5

for index, line in enumerate(lines):
    if 'ROM_PADDING_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.bss);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.bss);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.a'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.bss);\n")
                line_number += 1
        break

lines[line_number:line_number] = [
    "\t\tmod_BSS_END = .;\n",
    "\t\tmod_BSS_SIZE = ABSOLUTE(mod_BSS_END - mod_BSS_START);\n",
    "\t}\n",
    "\t__romPos += SIZEOF(.mod);\n",
    "\tmod_ROM_END = __romPos;\n",
    "\tmod_VRAM_END = .;\n"
]
line_number += 6


with open(linker_script_file, 'w') as file:
    file.writelines(lines)

def append_extension(filename, extension='.o'):
    return filename + extension

def append_prefix(filename, prefix='build/'):
    return prefix + filename

def get_files(pattern):
    return glob.glob(pattern, recursive=True)

# Get the list of vanilla and mod files for each type
vanilla_i4_files = get_files(f'{assets_path}/**/*.i4.png')
vanilla_i8_files = get_files(f'{assets_path}/**/*.i8.png')
vanilla_ia4_files = get_files(f'{assets_path}/**/*.ia4.png')
vanilla_ia8_files = get_files(f'{assets_path}/**/*.ia8.png')
vanilla_rgba16_files = get_files(f'{assets_path}/**/*.rgba16.png')
vanilla_rgba32_files = get_files(f'{assets_path}/**/*.rgba32.png')
vanilla_ci8_files = get_files(f'{assets_path}/**/*.ci8.png')
vanilla_ci4_files = get_files(f'{assets_path}/**/*.ci4.png')

mod_i4_files = get_files(f'{mod_assets_path}/**/*.ia.png')
mod_i8_files = get_files(f'{mod_assets_path}/**/*.i8.png')
mod_ia4_files = get_files(f'{mod_assets_path}/**/*.ia4.png')
mod_ia8_files = get_files(f'{mod_assets_path}/**/*.ia8.png')
mod_rgba16_files = get_files(f'{mod_assets_path}/**/*.rgba16.png')
mod_rgba32_files = get_files(f'{mod_assets_path}/**/*.rgba32.png')
mod_ci8_files = get_files(f'{mod_assets_path}/**/*.ci8.png')
mod_ci4_files = get_files(f'{mod_assets_path}/**/*.ci4.png')


def filter_and_extend(mod_files, vanilla_files):
    files = []
    for file_path in mod_files:
        file_name = os.path.basename(file_path)
        if file_name in [os.path.basename(path) for path in vanilla_files]:
            vanilla_files = [path for path in vanilla_files if os.path.basename(path) != file_name]
        files.append(file_path)
    files.extend(vanilla_files)
    return files

i4_files = filter_and_extend(mod_i4_files, vanilla_i4_files)
i8_files = filter_and_extend(mod_i8_files, vanilla_i8_files)
ia4_files = filter_and_extend(mod_ia4_files, vanilla_ia4_files)
ia8_files = filter_and_extend(mod_ia8_files, vanilla_ia8_files)
rgba16_files = filter_and_extend(mod_rgba16_files, vanilla_rgba16_files)
rgba32_files = filter_and_extend(mod_rgba32_files, vanilla_rgba32_files)
ci4_files = filter_and_extend(mod_ci4_files, vanilla_ci4_files)
ci8_files = filter_and_extend(mod_ci8_files, vanilla_ci8_files)


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
for file in c_files + s_files + a_files + bin_files + i4_files + i8_files + ia4_files + ia8_files + rgba16_files + rgba32_files + ci8_files + ci4_files + ci4_files_pal_final + ci8_files_pal_final:
    if 'asm/nonmatchings/' not in file:
        if file.endswith(('.png', '.pal')) and file.startswith('src/mod'):
            modified_file = file.split('assets/', 1)[1]  # Split at 'assets/' and take the second part
            modified_file = 'assets/' + modified_file
            o_files.append(append_prefix(append_extension(modified_file)))
        else:
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
ninja_file.variable('CC', 'tools/gcc_2.7.2/linux/gcc')
ninja_file.variable('STRIP', 'mips-linux-gnu-strip')
ninja_file.variable('CPPFLAGS', '-I. -I include -I include/PR -I include -I src -I build/include')

ninja_file.rule('gcc_dependency',
    command = '$cc_check -MM $in -MT $out -MF $out.d',
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

ninja_file.rule('gcc_cc',
    command = '(export COMPILER_PATH=tools/gcc_2.7.2/linux && $CC -O2 -G0 -mips3 -mgp32 -mfp32 -D_LANGUAGE_C $CPPFLAGS -c -o $out $in) && ($STRIP $out -N dummy-symbol-name)',
    description = 'Compiling -O2 .c file',
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
    depfile = '$out.d',
    deps = 'gcc')

ninja_file.rule('s_file',
    command = 'iconv --from UTF-8 --to EUC-JP $in | $AS $ASFLAGS -o $out',
    description = 'Assembling .s file' )

ninja_file.rule('bin_file',
    command = '$LD -r -b binary -o $out $in')

ninja_file.rule('a_file',
    command = 'cp $in $out')

ninja_file.rule('make_elf',
    command = '$LD $LDFLAGS -o $out',
    description = 'Linking ELF')

ninja_file.rule('make_z64',
    command = '($OBJCOPY -O binary $in $out) && (./tools/n64crc/n64crc.exe $out)',
    description = 'Making z64')

variable_name = 'AUTO_BOOT_N64'
variable_value = os.environ.get(variable_name)

if variable_value is not None:
    ninja_file.rule('start_z64',
        command = 'cp $in /mnt/c/Users/Rainchus/Desktop/AutoBootN64/game.v64',
        description = 'Starting z64 ROM...')
else:
    print(f"The environment variable {variable_name} does not exist.")

ninja_file.rule('make_expected',
    command = '(cp $in $out) && (python3 ./$MAKE_EXPECTED $in)')

ninja_file.rule('i4_convert',
                 command = "python3 ./$IMG_CONVERT i4 $in $out",
                 description = "Converting i4")

ninja_file.rule('i8_convert',
                 command = "python3 ./$IMG_CONVERT i8 $in $out",
                 description = "Converting i8")

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

for c_file in c_files:
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
        ninja_file.build(append_prefix(append_extension(c_file)), "O2_cc", c_file, dep)


for s_file in s_files:
    if "asm/nonmatchings" in s_file:
        continue
    ninja_file.build(append_prefix(append_extension(s_file)), "s_file", s_file)

for bin_file in bin_files:
    ninja_file.build(append_prefix(append_extension(bin_file)), "bin_file", bin_file)

for a_file in a_files:
    ninja_file.build(append_prefix(append_extension(a_file)), "a_file", a_file)

for i4_file in i4_files:
    if i4_file.startswith("src/mod"):
        _, _, modified_path = i4_file.partition("assets/")
        modified_path = "assets/" + modified_path
        ninja_file.build(append_prefix(append_extension(modified_path, ".png")), "i4_convert", i4_file)
    else:
        ninja_file.build(append_prefix(append_extension(i4_file, ".png")), "i4_convert", i4_file)

for i8_file in i8_files:
    if i8_file.startswith("src/mod"):
        _, _, modified_path = i8_file.partition("assets/")
        modified_path = "assets/" + modified_path
        ninja_file.build(append_prefix(append_extension(modified_path, ".png")), "i8_convert", i8_file)
    else:
        ninja_file.build(append_prefix(append_extension(i8_file, ".png")), "i8_convert", i8_file)

for ia4_file in ia4_files:
    if ia4_file.startswith("src/mod"):
        _, _, modified_path = ia4_file.partition("assets/")
        modified_path = "assets/" + modified_path
        ninja_file.build(append_prefix(append_extension(modified_path, ".png")), "ia4_convert", ia4_file)
    else:
        ninja_file.build(append_prefix(append_extension(ia4_file, ".png")), "ia4_convert", ia4_file)

for ia8_file in ia8_files:
    if ia8_file.startswith("src/mod"):
        _, _, modified_path = ia8_file.partition("assets/")
        modified_path = "assets/" + modified_path
        ninja_file.build(append_prefix(append_extension(modified_path, ".png")), "ia8_convert", ia8_file)
    else:
        ninja_file.build(append_prefix(append_extension(ia8_file, ".png")), "ia8_convert", ia8_file)

for rgba16_file in rgba16_files:
    if rgba16_file.startswith("src/mod"):
        _, _, modified_path = rgba16_file.partition("assets/")
        modified_path = "assets/" + modified_path
        ninja_file.build(append_prefix(append_extension(modified_path, ".png")), "rgba16_convert", rgba16_file)
    else:
        ninja_file.build(append_prefix(append_extension(rgba16_file, ".png")), "rgba16_convert", rgba16_file)

for rgba32_file in rgba32_files:
    if rgba32_file.startswith("src/mod"):
        _, _, modified_path = rgba32_file.partition("assets/")
        modified_path = "assets/" + modified_path
        ninja_file.build(append_prefix(append_extension(modified_path, ".png")), "rgba32_convert", rgba32_file)
    else:
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
    #print(extension)
    if extension == '.pal':
        if img_file.startswith("src/mod"):
            _, _, modified_path = img_file.partition("assets/")
            modified_path = "assets/" + modified_path
            ninja_file.build(append_extension(append_prefix(modified_path)), "objcopy_image", append_prefix(modified_path))
        else:
            pal_file = os.path.splitext(img_file)[0]
            pal_file_pal = os.path.splitext(pal_file)[0] + '.pal'
            ninja_file.build(append_extension(append_prefix(pal_file_pal)), "objcopy_image", append_prefix(img_file))
    elif extension == '.png':
        if img_file.startswith("src/mod"):
            png_file = os.path.splitext(img_file)[0]
            _, _, modified_path = png_file.partition("assets/")
            modified_path = "assets/" + modified_path
            print(append_extension(append_prefix(modified_path)))
            ninja_file.build(append_extension(append_prefix(modified_path)), "objcopy_image", append_prefix(modified_path) + ".png")
        else:
            png_file = os.path.splitext(img_file)[0]
            ninja_file.build(append_extension(append_prefix(png_file)), "objcopy_image", append_prefix(img_file))
       
ninja_file.build("build/chameleonTwistJP.elf", "make_elf ", o_files)
ninja_file.build("build/chameleonTwistJP.z64", "make_z64 ", "build/chameleonTwistJP.elf")

# if variable_value is not None:
#     ninja_file.build("src/mod/n64AutoBoot/chameleonTwistJP_Mod.z64", "start_z64 ", "build/chameleonTwistJP.z64")



print ("build.ninja generated")
ninja_file.close()
