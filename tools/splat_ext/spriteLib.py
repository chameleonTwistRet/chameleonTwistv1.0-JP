"""
Chameleon Twist: Sprite Actor struct splitter
Dumps out spriteActor data as a .inc.c file.

Original Author: Ellie (Elisiah)
Modified for Collectable struct: Nathan R.
"""

import re
import struct
from pathlib import Path
from splat.util.log import error
from splat.util import symbols, options
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment

class N64SegSpriteLib(CommonSegCodeSubsegment):
    def __init__(
        self,
        rom_start,
        rom_end,
        type,
        name,
        vram_start,
        args,
        yaml,
    ):
        super().__init__(
            rom_start,
            rom_end,
            type,
            name,
            vram_start,
            args=args,
            yaml=yaml,
        )
        self.file_text = None
        self.data_only = isinstance(yaml, dict) and yaml.get("data_only", False)

    def get_linker_section(self) -> str:
        #return ".data"
        return []

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.sprLib.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        sprite_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(sprite_data)
        if (segment_length) % 0x4 != 0:
            error(
                f"Error: sprLib segment {self.name} length ({segment_length}) is not valid"
            )

        lines = []
        
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Sprlib")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Sprlib", define=True
            )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"s32 {sym.name}[] = {{")

        i = 0
        while i < len(sprite_data):
            newSprite = list(struct.unpack('>i', sprite_data[i:i+4]))
            lines.append(f"    {newSprite[0]},")
            i += 4
            

        if not self.data_only:
            lines.append("};")

        # enforce newline at end of file
        lines.append("")
        return "\n".join(lines)

    def split(self, rom_bytes: bytes):
        if self.file_text and self.out_path():
            self.out_path().parent.mkdir(parents=True, exist_ok=True)

            with open(self.out_path(), "w", newline="\n") as f:
                f.write(self.file_text)