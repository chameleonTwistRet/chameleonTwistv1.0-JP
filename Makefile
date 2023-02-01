MAKEFLAGS += --no-builtin-rules

# Options
NON_MATCHING 	?= 0
VERSION      	?= jp
OBJDUMP_BUILD 	?= 0
VERIFY       	?= verify
VERBOSE 		?= 0

ifeq ($(VERBOSE),0)
V := @
endif

BASENAME  := chameleontwist

PRINT := printf '
 ENDCOLOR := \033[0m
 WHITE     := \033[0m
 ENDWHITE  := $(ENDCOLOR)
 GREEN     := \033[0;32m
 ENDGREEN  := $(ENDCOLOR)
 BLUE      := \033[0;34m
 ENDBLUE   := $(ENDCOLOR)
 YELLOW    := \033[0;33m
 ENDYELLOW := $(ENDCOLOR)
 PURPLE    := \033[0;35m
 ENDPURPLE := $(ENDCOLOR)
ENDLINE := \n'

# Directories

BUILD_DIR := build
ASM_DIRS  := asm asm/data asm/os asm/gu asm/libc asm/data/audio asm/data/os asm/data/gu
BIN_DIRS  := assets
SRC_DIR   := src
SRC_DIRS  := $(shell find $(SRC_DIR) -type d)

TOOLS_DIR := tools

# Files

S_FILES   := $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES   := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
# H_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.h))
BIN_FILES := $(foreach dir,$(BIN_DIRS),$(wildcard $(dir)/*.bin))

O_FILES   := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file).o) \
             $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file).o) \
             $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file).o)


RGBA32_FILES        = $(shell find assets/ -name "*.rgba32.png" 2> /dev/null)
RGBA32_O_FILES      = $(foreach file,$(RGBA32_FILES),$(BUILD_DIR)/$(file:.png=.png.o))

RGBA16_FILES        = $(shell find assets/ -name "*.rgba16.png" 2> /dev/null)
RGBA16_O_FILES      = $(foreach file,$(RGBA16_FILES),$(BUILD_DIR)/$(file:.png=.png.o))

I4_FILES        = $(shell find assets/ -name "*.i4.png" 2> /dev/null)
I4_O_FILES      = $(foreach file,$(I4_FILES),$(BUILD_DIR)/$(file:.png=.png.o))

IA4_FILES        = $(shell find assets/ -name "*.ia4.png" 2> /dev/null)
IA4_O_FILES      = $(foreach file,$(IA4_FILES),$(BUILD_DIR)/$(file:.png=.png.o))

I8_FILES        = $(shell find assets/ -name "*.i8.png" 2> /dev/null)
I8_O_FILES      = $(foreach file,$(I8_FILES),$(BUILD_DIR)/$(file:.png=.png.o))

IA8_FILES        = $(shell find assets/ -name "*.ia8.png" 2> /dev/null)
IA8_O_FILES      = $(foreach file,$(IA8_FILES),$(BUILD_DIR)/$(file:.png=.png.o))



IMAGE_O_FILES = $(RGBA32_O_FILES) $(RGBA16_O_FILES) $(I4_O_FILES) $(IA4_O_FILES) $(I8_O_FILES) $(IA8_O_FILES)


# Tools

CROSS    := mips-linux-gnu-

AS       := $(CROSS)as
CPP      := cpp
LD       := $(CROSS)ld
OBJDUMP  := $(CROSS)objdump
OBJCOPY  := $(CROSS)objcopy
PYTHON   := python3
GCC      := gcc

XGCC     := mips-linux-gnu-gcc

GREP     := grep -rl
CC       := $(TOOLS_DIR)/ido_5.3/usr/lib/cc
SPLAT    := $(TOOLS_DIR)/splat/split.py

IMG_CONVERT = $(PYTHON) $(TOOLS_DIR)/image_converter.py
# Flags

OPT_FLAGS      := -O1
CODE_OPT_FLAGS := -O2
GU_OPT_FLAGS   := -O2 #should actually be -O3
LIBC_OPT_FLAGS := -O2
LIBC_MIPS_VERSION := -mips2
MIPS_VERSION   := -mips2

INCLUDE_CFLAGS := -I. -Iinclude -Iinclude/PR -Iassets -Isrc
DEFINES := -D_LANGUAGE_C -DF3DEX_GBI -DNDEBUG

ASFLAGS        := -EB -mtune=vr4300 -march=vr4300 -mabi=32 -Iinclude -Isrc
OBJCOPYFLAGS   := -O binary
OBJDUMPFLAGS   := -drz

ifneq ($(OBJDUMP_BUILD), 0)
  OBJDUMP_CMD = $(OBJDUMP) $(OBJDUMP_FLAGS) $@ > $(@:.o=.s)
else
  OBJDUMP_CMD = @:
endif

ifeq ($(VERSION),us)
DEFINES += -DVERSION_US
endif
ifeq ($(VERSION),eu)
DEFINES += -DVERSION_EU
endif

ifeq ($(NON_MATCHING),1)
DEFINES += -DNON_MATCHING
VERIFY := no_verify
PROGRESS_NONMATCHING = --non-matching
endif

CFLAGS := -G 0 -fullwarn -verbose -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += $(DEFINES)
# ignore compiler warnings about anonymous structs
CFLAGS += -woff 649,838
CFLAGS += $(INCLUDE_CFLAGS)

CHECK_WARNINGS := -Wall -Wextra -Wno-format-security -Wno-unknown-pragmas -Wno-unused-parameter -Wno-unused-variable -Wno-missing-braces -Wno-int-conversion -Wno-comment
CC_CHECK := $(GCC) -fsyntax-only -fno-builtin -fsigned-char -std=gnu90 -m32 $(CHECK_WARNINGS) $(INCLUDE_CFLAGS) $(DEFINES)

GCC_FLAGS := $(INCLUDE_CFLAGS) $(DEFINES)
GCC_FLAGS += -G 0 -mno-shared -march=vr4300 -mfix4300 -mabi=32 -mhard-float
GCC_FLAGS += -mdivide-breaks -fno-stack-protector -fno-common -fno-zero-initialized-in-bss -fno-PIC -mno-abicalls -fno-strict-aliasing -fno-inline-functions -ffreestanding -fwrapv
GCC_FLAGS += -Wall -Wextra -Wno-missing-braces

TARGET     := $(BUILD_DIR)/$(BASENAME).$(VERSION)
LD_SCRIPT  := $(BASENAME).$(VERSION).ld

LD_FLAGS   := -T $(LD_SCRIPT) -T undefined_syms_auto.txt
LD_FLAGS   += -Map $(TARGET).map --no-check-sections

ASM_PROC := python3 tools/asm-processor/build.py
ASM_PROC_FLAGS := --input-enc=utf-8 --output-enc=euc-jp


### File and directory flags
$(BUILD_DIR)/$(SRC_DIR)/%.c.o: CC := $(ASM_PROC) $(ASM_PROC_FLAGS) $(CC) -- $(AS) $(ASFLAGS) --

$(BUILD_DIR)/$(SRC_DIR)/code/5FEB0.c.o: CODE_OPT_FLAGS := -O1

$(BUILD_DIR)/$(SRC_DIR)/libc/syncprintf.c.o: OPT_FLAGS := -O2

$(BUILD_DIR)/$(SRC_DIR)/libc/ll.c.o: LIBC_MIPS_VERSION := -mips3 -32
#$(BUILD_DIR)/$(SRC_DIR)/libc/string.c.o: LIBC_OPT_FLAGS := -O2



### Targets

all: dirs $(VERIFY)

dirs:
	$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(BIN_DIRS),$(shell mkdir -p $(BUILD_DIR)/$(dir)))

check: .baserom.$(VERSION).ok

verify: $(TARGET).z64
	@sha1sum -c $(BASENAME).$(VERSION).sha1

no_verify: $(TARGET).z64
	@echo "Skipping SHA1SUM check!"

progress: dirs $(VERIFY) progress.csv

splat: $(SPLAT)

setup: splat
	$(PYTHON) $(SPLAT) $(BASENAME).$(VERSION).yaml

clean:
	$(V)rm -rf build

distclean: clean
	$(V)rm -rf asm
	$(V)rm -rf assets
	$(V)rm -rf expected
	$(V)rm -f *auto.txt
	$(V)rm -f $(LD_SCRIPT)

expected: verify
	$(RM) -rf expected/
	mkdir -p expected/
	cp -r build expected/build

### Recipes

.baserom.$(VERSION).ok: baserom.$(VERSION).z64
	@echo "$$(cat $(BASENAME).$(VERSION).sha1)  $<" | sha1sum --check
	@touch $@

$(BUILD_DIR)/:
	@mkdir -p $(BUILD_DIR)

$(TARGET).elf: $(LD_SCRIPT) $(O_FILES) $(IMAGE_O_FILES)
	$(V)$(LD) $(LD_FLAGS) -o $@



$(BUILD_DIR)/$(SRC_DIR)/%.c.o: $(SRC_DIR)/%.c
	$(V)$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDLINE)
	$(V)$(CC_CHECK) $<
	$(V)$(CC) -c $(CFLAGS) $(MIPS_VERSION) $(OPT_FLAGS) -o $@ $<
	$(V)$(OBJDUMP_CMD)

$(BUILD_DIR)/$(SRC_DIR)/code/%.c.o: $(SRC_DIR)/code/%.c
	$(V)$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDLINE)
	$(V)$(CC_CHECK) $<
	$(V)$(CC) -c $(CFLAGS) $(MIPS_VERSION) $(CODE_OPT_FLAGS) -o $@ $<
	$(V)$(OBJDUMP_CMD)

$(BUILD_DIR)/$(SRC_DIR)/gu/%.c.o: $(SRC_DIR)/gu/%.c
	$(V)$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDLINE)
	$(V)$(CC_CHECK) $<
	$(V)$(CC) -c $(CFLAGS) $(MIPS_VERSION) $(GU_OPT_FLAGS) -o $@ $<
	$(V)$(OBJDUMP_CMD)

$(BUILD_DIR)/$(SRC_DIR)/audio/%.c.o: $(SRC_DIR)/audio/%.c
	$(V)$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDLINE)
	$(V)$(CC_CHECK) $<
	$(V)$(CC) -c $(CFLAGS) $(MIPS_VERSION) -O2 -o $@ $<
	$(V)$(OBJDUMP_CMD)

$(BUILD_DIR)/$(SRC_DIR)/libc/%.c.o: $(SRC_DIR)/libc/%.c
	$(V)$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDLINE)
	$(V)$(CC_CHECK) $<
	$(V)$(CC) -c $(CFLAGS) $(LIBC_MIPS_VERSION) $(LIBC_OPT_FLAGS) -o $@ $<
	$(V)$(OBJDUMP_CMD)

$(BUILD_DIR)/$(SRC_DIR)/libc/ll.c.o: $(SRC_DIR)/libc/ll.c
	$(V)$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDLINE)
	$(V)$(CC_CHECK) $<
	$(V)$(CC) -c $(CFLAGS) -mips3 -32 -O1 -o $@ $<
	@python3 tools/set_o32abi_bit.py $@
	$(V)$(OBJDUMP_CMD)



# use modern gcc for data
$(BUILD_DIR)/$(SRC_DIR)/data/%.c.o: $(SRC_DIR)/data/%.c
	$(V)$(XGCC) -c $(GCC_FLAGS) -o $@ $<

$(BUILD_DIR)/%.s.o: %.s
	$(V)$(PRINT)$(GREEN)Assembling asm file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDLINE)
	$(V)iconv --from UTF-8 --to EUC-JP $< | $(AS) $(ASFLAGS) -o $@


# uncompressed images
$(BUILD_DIR)/%.rgba32.png: %.rgba32.png
	$(V)mkdir -p $$(dirname $@)
	$(V)$(IMG_CONVERT) rgba32 $< $@

$(BUILD_DIR)/%.rgba16.png: %.rgba16.png
	$(V)mkdir -p $$(dirname $@)
	$(V)$(IMG_CONVERT) rgba16 $< $@


$(BUILD_DIR)/%.i4.png: %.i4.png
	$(V)mkdir -p $$(dirname $@)
	$(V)$(IMG_CONVERT) i4 $< $@


$(BUILD_DIR)/%.ia4.png: %.ia4.png
	$(V)mkdir -p $$(dirname $@)
	$(V)$(IMG_CONVERT) ia4 $< $@


$(BUILD_DIR)/%.i8.png: %.i8.png
	$(V)mkdir -p $$(dirname $@)
	$(V)$(IMG_CONVERT) i8 $< $@


$(BUILD_DIR)/%.ia8.png: %.ia8.png
	$(V)mkdir -p $$(dirname $@)
	$(V)$(IMG_CONVERT) ia8 $< $@



# BUILD_DIR prefix to suppress circular dependency
$(BUILD_DIR)/%.png.o: $(BUILD_DIR)/%.png
	$(V)$(LD) -r -b binary -o $@ $<


#where the binaries are maaaaade
$(BUILD_DIR)/%.bin.o: %.bin
	$(V)$(LD) -r -b binary -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(V)$(PRINT)$(GREEN)Linking elf file: $(ENDGREEN)$(BLUE)$@$(ENDBLUE)$(ENDLINE)
	$(V)$(OBJCOPY) $(OBJCOPYFLAGS) $< $@

$(TARGET).z64: $(TARGET).bin
	$(V)$(PRINT)$(PURPLE)Creating z64: $(ENDPURPLE)$(BLUE)$@$(ENDBLUE)$(ENDLINE)
	@cp $< $@

# fake targets for better error handling
$(SPLAT):
	$(info Repo cloned without submodules, attempting to fetch them now...)
	@which git >/dev/null || echo "ERROR: git binary not found on PATH"
	git submodule update --init --recursive

baserom.$(VERSION).z64:
	$(error Place the JP chameleon twist ROM, named '$@', in the root of this repo and try again.)

### Settings
.DEFAULT_GOAL: all
.PHONY: all clean distclean expected
SHELL = /bin/bash -e -o pipefail
