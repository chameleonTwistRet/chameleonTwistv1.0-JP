import os
import subprocess
import pkg_resources
import fileinput
import sys
import fnmatch

dir_path = 'src/'
asm_path = 'asm/'
mod_asm_path = 'src/mod/'
mod_assets_path = 'src/mod/assets'
assets_path = 'assets/'
cflags = '-G 0 -fullwarn -verbose -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul'
#python3 tools/splat/split.py chameleontwist.jp.yaml

# Get a list of all subdirectories in the directory
subdirs_c = [os.path.join(dir_path, d) for d in os.listdir(dir_path) if os.path.isdir(os.path.join(dir_path, d))]
subdirs_asm = [os.path.join(asm_path, d) for d in os.listdir(asm_path) if os.path.isdir(os.path.join(asm_path, d))]
subdirs_bin = [os.path.join(assets_path, d) for d in os.listdir(assets_path) if os.path.isdir(os.path.join(assets_path, d))]

header = (
    "AS = mips-linux-gnu-as\n"
    "CPP = cpp\n"
    "LD = mips-linux-gnu-ld\n"
    "OBJDUMP = mips-linux-gnu-objdump\n"
    "OBJCOPY = mips-linux-gnu-objcopy\n"
    "OBJCOPYFLAGS = -O binary\n"
    "PYTHON = python3\n"
    "cflags = -G 0 -fullwarn -verbose -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul\n"
    "include_cflags = -I. -Iinclude -Iinclude/PR -Iassets -Isrc\n"
    "check_warnings_gcc = -Wall -Waddress -Wextra -Wno-format-security -Wno-unknown-pragmas -Wno-unused-parameter -Wno-unused-variable -Wno-missing-braces -Wno-int-conversion -Wno-comment\n"
    "cc_check = gcc -fsyntax-only -fno-builtin -fsigned-char -std=gnu90 -m32 $check_warnings_gcc $include_cflags\n"
    "ido_cc = tools/ido_5.3/usr/lib/cc\n"
    "mips_version = -mips2\n"
    "DEFINES = -D_LANGUAGE_C -DF3DEX_GBI -DNDEBUG\n"
    "CFLAGS = -woff 649,838 $include_cflags\n"
    "ASM_PROC = python3 tools/asm-processor/build.py\n"
    "ASM_PROC_FLAGS = --input-enc=utf-8 --output-enc=euc-jp\n"
    "ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -Iinclude -Isrc\n"
    "opt_flags = -O2\n"
    "objdump_command = $OBJDUMP $in > $in:.o=.s\n"
    "splat = python3 tools/splat/split.py chameleontwist.jp.yaml\n"
    "XGCC = mips-linux-gnu-gcc\n"
    "IMG_CONVERT = tools/image_converter.py\n"
    "GCC_FLAGS = $include_cflags $DEFINES -G 0 -mno-shared -march=vr4300 -mfix4300 -mabi=32 -mhard-float -mdivide-breaks -fno-stack-protector -fno-common -fno-zero-initialized-in-bss -fno-PIC -mno-abicalls -fno-strict-aliasing -fno-inline-functions -ffreestanding -fwrapv -Wall -Wextra -Wno-missing-braces"
    "\n"

    "rule audio_cc\n"
    "  command = $ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O2 -o $out $in\n"
    "\n"

    "rule code_cc\n"
    "  command = $ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O2 -o $out $in\n"
    "\n"

    "rule gu_cc\n"
    "  command = $ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O2 -o $out $in\n"
    "\n"

    "rule io_cc\n"
    "  command = $ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O1 -o $out $in\n"
    "\n"

    "rule libc_cc\n"
    "  command = $ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O2 -o $out $in\n"
    "\n"

    "rule libc_ll_cc\n"
    "  command = ($ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS -mips3 -32 -O1 -o $out $in) && (python3 tools/set_o32abi_bit.py $out)\n"
    "  description = Generating object file and setting o32abi bit for $out\n"
    "\n"

    "rule xprintf_cc\n"
    "  command = $ido_cc -c $CFLAGS $mips_version -O3 -o $out $in \n"
    "\n"

    "rule o32_abi_set\n"
    "  command = python3 tools/set_o32abi_bit.py build/libc/ll.c.o"
    "\n"

    "rule os_cc\n"
    "  command = $ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O1 -o $out $in\n"
    "\n"

    "rule s_file\n"
    "  command = iconv --from UTF-8 --to EUC-JP $in | $AS $ASFLAGS -o $out\n"
    "\n"

    "rule bin_file\n"
    "  command = $LD -r -b binary -o $out $in\n"
    "\n"

    "rule data_cc\n"
    " command = $XGCC -c $GCC_FLAGS -o $out $in\n"
    "\n"
    
    "rule ci8_img_cc\n"
    " command = python3 ./$IMG_CONVERT ci8 $in $out\n"
    "\n"

    "rule ia8_img_cc\n"
    " command = python3 ./$IMG_CONVERT ia8 $in $out\n"
    "\n"

    "rule ia4_img_cc\n"
    " command = python3 ./$IMG_CONVERT ia4 $in $out\n"
    "\n"

    "rule rgba32_img_cc\n"
    " command = python3 ./$IMG_CONVERT rgba32 $in $out\n"
    "\n"

    "rule rgba16_img_cc\n"
    " command = python3 ./$IMG_CONVERT rgba16 $in $out\n"
    "\n"

    "rule ci4_img_cc\n"
    " command = python3 ./$IMG_CONVERT ci4 $in $out\n"
    "\n"

    "rule pal_cc\n"
    " command = python3 ./$IMG_CONVERT palette $in $out\n"
    "\n"

    "rule j_to_png_bin\n"
    " command = ($LD -r -b binary -o $out $in) && (rm -f $in)\n"
    "\n"

    "rule make_elf\n"
    "  command = mips-linux-gnu-ld -T chameleontwist.jp.ld -T undefined_syms_auto.txt -Map build/chameleontwist.jp.map --no-check-sections -o $out\n"
    "\n"

    "rule make_rom_bin\n"
    "  command = mips-linux-gnu-objcopy -O binary $in $out\n"
    "\n"

    "rule make_rom_z64\n"
    "  command = (cp $in $out) && (./tools/n64crc/n64crc.exe $out)\n"
    "\n"

    "rule mod_cc\n"
    "  command = $ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c $cflags $DEFINES $CFLAGS $mips_version -O2 -o $out $in\n"
    "\n"

)

#patch MainLoop.s to dma our custom code, then proceed as normal
# Open the file for reading
with open('asm/nonmatchings/code/5FF30/MainLoop.s', 'r') as file:
    # Read the contents of the file
    lines = file.readlines()

# Replace lines 2 through 15 with the new text
lines[1:19] = [
    '/* 6BA84 80090684 */  addiu      $sp, $sp, -0x18\n'
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
    '/* 6BAC0 800906C0 */  J mod_main_func\n',
    '/* 6BAC4 800906C4 */  nop\n'
]

# Open the file for writing
with open('asm/nonmatchings/code/5FF30/MainLoop.s', 'w') as file:
    # Write the modified contents back to the file
    file.writelines(lines)

linker_script_file = 'chameleontwist.jp.ld'
mod_directory = 'src/mod'

with open(linker_script_file) as file:
    for line_number, line in enumerate(file):
        if 'romPadding_VRAM_END' in line:
            next_line = next(file, None)
            break
line_number = line_number + 1

with open(linker_script_file, 'r') as file:
    lines = file.readlines()


lines.insert(line_number, "\n\t__romPos = 0xC00000;\n")
lines.insert(line_number + 1, "\tmod_ROM_START = __romPos;\n")
lines.insert(line_number + 2, "\tmod_VRAM = ADDR(.mod);\n")
lines.insert(line_number + 3, "\t.mod 0x80400000 : AT(mod_ROM_START) SUBALIGN(16)\n")
lines.insert(line_number + 4, "\t{\n")
lines.insert(line_number + 5, "\t\tmod_TEXT_START = .;\n")
line_number += 6

for index, line in enumerate(lines):
    if 'romPadding_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.text);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.text);\n")
                line_number += 1
        break

lines.insert(line_number, "\t\tmod_RODATA_START = .;\n")
line_number += 1

for index, line in enumerate(lines):
    if 'romPadding_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.rodata);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.rodata);\n")
                line_number += 1
        break

lines.insert(line_number, "\t\tmod_DATA_START = .;\n")
line_number += 1        

for index, line in enumerate(lines):
    if 'romPadding_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.data);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.data);\n")
                line_number += 1
        break

lines.insert(line_number, "\t\tmod_BSS_START = .;\n")
line_number += 1

for index, line in enumerate(lines):
    if 'romPadding_VRAM_END' in line:
        for root, dirnames, filenames in os.walk(mod_directory):
            for filename in fnmatch.filter(filenames, '*.c'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.bss);\n")
                line_number += 1
            for filename in fnmatch.filter(filenames, '*.s'):
                lines.insert(line_number, f"\t\tbuild/{root}/{filename}.o(.bss);\n")
                line_number += 1
        break

lines.insert(line_number, "\t}\n")
lines.insert(line_number + 1, "\t__romPos += SIZEOF(.mod);\n")
lines.insert(line_number + 2, "\tmod_ROM_END = __romPos;\n")
lines.insert(line_number + 3, "\tmod_VRAM_END = .;\n")
line_number += 4

with open(linker_script_file, 'w') as file:
    file.writelines(lines)

# Traverse each subdirectory recursively and find all C files
def append_extension(filename):
    return filename + '.o'

c_files = []
for root, dirs, files in os.walk(dir_path):
    for file in files:
        if file.endswith('.c'):
            c_files.append(os.path.join(root, file))

s_files = []
for root, dirs, files in os.walk(asm_path):
    for file in files:
        if file.endswith('.s'):
            s_files.append(os.path.join(root, file))

mod_s_files = []
for root, dirs, files in os.walk(mod_asm_path):
    for file in files:
        if file.endswith('.s'):
            s_files.append(os.path.join(root, file))

# Get modded rgba32 images
mod_rgba32_files = []
for root, dirs, files in os.walk(mod_assets_path):
    for file in files:
        if file.endswith('rgba32.png'):
            mod_rgba32_files.append(os.path.join(root, file))

rgba32_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('rgba32.png'):
            if file not in mod_rgba32_files:
                rgba32_files.append(os.path.join(root, file))

# Get modded rgba16 images
mod_rgba16_files = []
for root, dirs, files in os.walk(mod_assets_path):
    for file in files:
        if file.endswith('rgba16.png'):
            mod_rgba16_files.append(os.path.join(root, file))

rgba16_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('rgba16.png'):
            if file not in mod_rgba16_files:
                rgba16_files.append(os.path.join(root, file))

# Get modded ia8 images
mod_ia8_files = []
for root, dirs, files in os.walk(mod_assets_path):
    for file in files:
        if file.endswith('ia8.png'):
            mod_ia8_files.append(os.path.join(root, file))

ia8_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('ia8.png'):
            if file not in mod_ia8_files:
                ia8_files.append(os.path.join(root, file))

# Get modded ia4 images
mod_ia4_files = []
for root, dirs, files in os.walk(mod_assets_path):
    for file in files:
        if file.endswith('ia4.png'):
            mod_ia4_files.append(os.path.join(root, file))

ia4_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('ia4.png'):
            if file not in mod_ia4_files:
                ia4_files.append(os.path.join(root, file))




# Get modded ci8 images
mod_ci8_files = []
for root, dirs, files in os.walk(mod_assets_path):
    for file in files:
        if file.endswith('ci8.png'):
            mod_ci8_files.append(file)

# Get modded ci4 images
mod_ci4_files = []
for root, dirs, files in os.walk(mod_assets_path):
    for file in files:
        if file.endswith('ci4.png'):
            mod_ci4_files.append(file)

bin_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('.bin'):
            bin_files.append(os.path.join(root, file))

ia8_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('ia8.png'):
            ia8_files.append(os.path.join(root, file))

ci8_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('ci8.png'):
            ci8_files.append(os.path.join(root, file))

ci4_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('ci4.png'):
            ci4_files.append(os.path.join(root, file))

pal_files = []
pal_files.extend([f.replace('.png', '.pal') for f in ci8_files])
pal_files.extend([f.replace('.png', '.pal') for f in ci4_files])

j_files = []
j_files.extend([f.replace('.png', '.j') for f in rgba32_files])
j_files.extend([f.replace('.png', '.j') for f in rgba16_files])
j_files.extend([f.replace('.png', '.j') for f in ia8_files])
j_files.extend([f.replace('.png', '.j') for f in ia4_files])
j_files.extend([f.replace('.png', '.j') for f in ci8_files])
j_files.extend([f.replace('.png', '.j') for f in ci4_files])

# Combine the lists and change file extensions
o_files = []
for file in c_files + s_files + bin_files + rgba32_files + mod_rgba32_files + rgba16_files + mod_rgba16_files + ia8_files + mod_ia8_files + ia4_files + mod_ia4_files + ci4_files + ci8_files:
    if 'src/mod/' not in file and not file.startswith('src/mod/'):
        if 'asm/nonmatchings/' not in file:
            o_files.append("build/" + append_extension(file))

with open('build.ninja', 'w') as f:
    f.write(header)

# Write the full path of each C file to a new text file called build.ninja
with open('build.ninja', 'a') as outfile:
    for c_file in c_files:
        if os.path.basename(c_file) == "ll.c":
            outfile.write("build build/" + os.path.splitext(c_file)[0] + ".c.o: " + "libc_ll_cc " + c_file + "\n")
        elif "src/mod" in os.path.relpath(c_file):
            outfile.write("build build/" + os.path.splitext(c_file)[0] + ".c.o: " + "mod_cc " + c_file + "\n")
        else:
            folder_name = os.path.basename(os.path.dirname(c_file))
            outfile.write("build build/" + os.path.splitext(c_file)[0] + ".c.o: " + folder_name + "_cc " + c_file + "\n")
    for s_file in s_files:
        if "asm/nonmatchings" in s_file:
            continue
        outfile.write("build build/" + os.path.splitext(s_file)[0] + ".s.o: " + "s_file " + s_file + "\n")
    for s_file in mod_s_files:
        outfile.write("build build/" + os.path.splitext(s_file)[0] + ".s.o: " + "s_file " + mod_s_files + "\n")
    for bin_file in bin_files:
        outfile.write("build build/" + os.path.splitext(bin_file)[0] + ".bin.o: " + "bin_file " + bin_file + "\n")

    # Write the rules for ia8 mod files
    for mod_ia8_file in mod_ia8_files:
        mod_ia8_file_without_src_mod = mod_ia8_file.replace('src/mod/', '')
        outfile.write("build " + os.path.splitext(mod_ia8_file_without_src_mod)[0] + ".j: " + "ia8_img_cc " + mod_ia8_file + "\n")
    
    # Write the rules for ia8 files
    for ia8_file in ia8_files:
        if os.path.basename(ia8_file) not in [os.path.basename(f) for f in mod_ia8_files]:
            outfile.write("build " + os.path.splitext(ia8_file)[0] + ".j: " + "ia8_img_cc " + ia8_file + "\n")

    # Write the rules for ia4 mod files
    for mod_ia4_file in mod_ia4_files:
        mod_ia4_file_without_src_mod = mod_ia4_file.replace('src/mod/', '')
        outfile.write("build " + os.path.splitext(mod_ia4_file_without_src_mod)[0] + ".j: " + "ia4_img_cc " + mod_ia4_file + "\n")
    
    # Write the rules for ia4 files
    for ia4_file in ia4_files:
        if os.path.basename(ia4_file) not in [os.path.basename(f) for f in mod_ia4_files]:
            outfile.write("build " + os.path.splitext(ia4_file)[0] + ".j: " + "ia4_img_cc " + ia4_file + "\n")


    # Write the rules for rgba32 mod files
    for mod_rgba32_file in mod_rgba32_files:
        mod_rgba32_file_without_src_mod = mod_rgba32_file.replace('src/mod/', '')
        outfile.write("build " + os.path.splitext(mod_rgba32_file_without_src_mod)[0] + ".j: " + "rgba32_img_cc " + mod_rgba32_file + "\n")
    
    # Write the rules for rgba32 files
    for rgba32_file in rgba32_files:
        if os.path.basename(rgba32_file) not in [os.path.basename(f) for f in mod_rgba32_files]:
            outfile.write("build " + os.path.splitext(rgba32_file)[0] + ".j: " + "rgba32_img_cc " + rgba32_file + "\n")


    # Write the rules for rgba16 mod files
    for mod_rgba16_file in mod_rgba16_files:
        mod_rgba16_file_without_src_mod = mod_rgba16_file.replace('src/mod/', '')
        outfile.write("build " + os.path.splitext(mod_rgba16_file_without_src_mod)[0] + ".j: " + "rgba16_img_cc " + mod_rgba16_file + "\n")

    # Write the rules for rgba16 files
    for rgba16_file in rgba16_files:
        if os.path.basename(rgba16_file) not in [os.path.basename(f) for f in mod_rgba16_files]:
            outfile.write("build " + os.path.splitext(rgba16_file)[0] + ".j: " + "rgba16_img_cc " + rgba16_file + "\n")
    

    # Write the rules for ci8 files
    for ci8_file in ci8_files:
        outfile.write("build " + os.path.splitext(ci8_file)[0] + ".j: " + "ci8_img_cc " + ci8_file + "\n")

    # Write the rules for ci8 pal files
    for ci8_file in ci8_files:
        outfile.write("build " + os.path.splitext(ci8_file)[0] + ".pal.j: " + "pal_cc " + ci8_file + "\n")

    # Write the rules for ci4 files
    for ci4_file in ci4_files:
        outfile.write("build " + os.path.splitext(ci4_file)[0] + ".j: " + "ci4_img_cc " + ci4_file + "\n")

    # Write the rules for ci4 pal files
    for ci4_file in ci4_files:
        outfile.write("build " + os.path.splitext(ci4_file)[0] + ".pal.j: " + "pal_cc " + ci4_file + "\n")

    # Write the rules for ci4 files
    for pal_file in pal_files:
        outfile.write("build build/" + os.path.splitext(pal_file)[0] + ".pal.o: " + "j_to_png_bin " + pal_file + ".j " + "\n")

    #j files are png images converted using image_converter.py
    for j_file in j_files:
        if not file.endswith('.pal.j'):
            outfile.write("build build/" + os.path.splitext(j_file)[0] + ".png.o: " + "j_to_png_bin " + j_file + "\n")

    # Build the ninja rule with the .o files
    outfile.write("build build/chameleontwist.jp.elf: make_elf " + " ".join(o_files) + "\n")
    outfile.write("build build/chameleontwist.jp.bin: make_rom_bin build/chameleontwist.jp.elf\n")
    outfile.write("build build/chameleontwist.jp.z64: make_rom_z64 build/chameleontwist.jp.bin\n")