"""Level scope struct splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


class N64SegLevelScope(CTSegBase):
    SUFFIX = "lvlScope"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 0x18:
            error(
                f"Error: levelScope segment {self.name} length ({len(buf)}) "
                f"is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Lvlscope"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Lvlscope", define=True
        )

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"LevelScope {sym.name} = {{")

        for v in struct.unpack(">iiiiii", buf):
            lines.append(f"    {v},")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
