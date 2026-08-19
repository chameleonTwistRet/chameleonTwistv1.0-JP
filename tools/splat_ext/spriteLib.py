"""Sprite library splitter: emits s32 array."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


class N64SegSpriteLib(CTSegBase):
    SUFFIX = "sprLib"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % 4 != 0:
            error(
                f"Error: sprLib segment {self.name} length ({len(buf)}) is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Sprlib"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Sprlib", define=True
        )

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"s32 {sym.name}[] = {{")

        for i in range(0, len(buf), 4):
            (v,) = struct.unpack(">i", buf[i : i + 4])
            lines.append(f"    {v},")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
