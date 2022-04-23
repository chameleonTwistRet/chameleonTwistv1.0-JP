MAKEFLAGS += --no-builtin-rules

# Options
NON_MATCHING ?= 0
VERSION      ?= jp
OBJDUMP_BUILD ?= 0
VERIFY       ?= verify

BASENAME  := chameleontwist

# Directories

BUILD_DIR := build
ASM_DIRS  := asm asm/data
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

RGBA16_FILES    := $(shell find assets/img/ -name "*.rgba16.png" 2> /dev/null)
RGBA16_O_FILES  := $(foreach file,$(RGBA16_FILES),$(BUILD_DIR)/$(file:.png=.png.o))

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
CC       := $(TOOLS_DIR)/usr/lib/cc
SPLAT    := $(TOOLS_DIR)/splat/split.py

# Flags

OPT_FLAGS      := -O2
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

CHECK_WARNINGS := -Wall -Wextra -Wno-format-security -Wno-unknown-pragmas -Wno-unused-parameter -Wno-unused-variable -Wno-missing-braces -Wno-int-conversion
CC_CHECK := $(GCC) -fsyntax-only -fno-builtin -fsigned-char -std=gnu90 -m32 $(CHECK_WARNINGS) $(INCLUDE_CFLAGS) $(DEFINES)

GCC_FLAGS := $(INCLUDE_CFLAGS) $(DEFINES)
GCC_FLAGS += -G 0 -mno-shared -march=vr4300 -mfix4300 -mabi=32 -mhard-float
GCC_FLAGS += -mdivide-breaks -fno-stack-protector -fno-common -fno-zero-initialized-in-bss -fno-PIC -mno-abicalls -fno-strict-aliasing -fno-inline-functions -ffreestanding -fwrapv
GCC_FLAGS += -Wall -Wextra -Wno-missing-braces

TARGET     := $(BUILD_DIR)/$(BASENAME).$(VERSION)
LD_SCRIPT  := $(BASENAME).$(VERSION).ld

LD_FLAGS   := -T $(LD_SCRIPT) -T undefined_syms_auto.txt -T undefined_funcs_auto.txt
LD_FLAGS   += -Map $(TARGET).map --no-check-sections

ASM_PROC := python3 tools/asm-processor/build.py
ASM_PROC_FLAGS := --input-enc=utf-8 --output-enc=euc-jp


### File and directory flags
$(BUILD_DIR)/$(SRC_DIR)/%.c.o: CC := $(ASM_PROC) $(ASM_PROC_FLAGS) $(CC) -- $(AS) $(ASFLAGS) --

$(BUILD_DIR)/$(SRC_DIR)/io/visetyscale.c.o: OPT_FLAGS := -O1
$(BUILD_DIR)/$(SRC_DIR)/code/5FEB0.c.o: OPT_FLAGS := -O1
$(BUILD_DIR)/$(SRC_DIR)/os/virtualtophysical.c.o: OPT_FLAGS := -O1

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
	rm -rf build

distclean: clean
	rm -rf asm
	rm -rf assets
	rm -rf expected
	rm -f *auto.txt
	rm -f $(BASENAME).$(VERSION).ld

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

$(TARGET).elf: $(BASENAME).$(VERSION).ld $(O_FILES) $(RGBA16_O_FILES)
	$(LD) $(LD_FLAGS) $(LD_FLAGS_EXTRA) -o $@

$(BUILD_DIR)/$(SRC_DIR)/%.c.o: $(SRC_DIR)/%.c
	$(CC_CHECK) $<
	$(CC) -c $(CFLAGS) $(MIPS_VERSION) $(OPT_FLAGS) -o $@ $<
	$(OBJDUMP_CMD)

# use modern gcc for data
$(BUILD_DIR)/$(SRC_DIR)/data/%.c.o: $(SRC_DIR)/data/%.c
	$(XGCC) -c $(GCC_FLAGS) -o $@ $<

$(BUILD_DIR)/%.s.o: %.s
	cat $< | iconv --from UTF-8 --to EUC-JP | $(AS) $(ASFLAGS) -o $@

$(BUILD_DIR)/%.bin.o: %.bin
	$(LD) -r -b binary -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $(OBJCOPYFLAGS) $< $@

$(TARGET).z64: $(TARGET).bin
	@cp $< $@

# fake targets for better error handling
$(SPLAT):
	$(info Repo cloned without submodules, attempting to fetch them now...)
	@which git >/dev/null || echo "ERROR: git binary not found on PATH"
	@which git >/dev/null
	git submodule update --init --recursive

$(BASENAME).$(VERSION).ld:
	$(error Please run make setup and try again.)

baserom.$(VERSION).z64:
	$(error Place the JP chameleon twist ROM, named '$@', in the root of this repo and try again.)

### Settings
.DEFAULT_GOAL: all
.PHONY: all clean distclean expected
SHELL = /bin/bash -e -o pipefail
