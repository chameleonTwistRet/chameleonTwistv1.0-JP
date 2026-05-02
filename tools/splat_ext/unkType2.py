"""unkType2 splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


class N64SegUnkType2(CTSegBase):
    SUFFIX = "ut2"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 0x18:
            error(
                f"Error: unkType2 segment {self.name} length ({len(buf)}) is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Ut2"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Ut2", define=True
        )

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"UnkType2 {sym.name} = {{")

        for v in struct.unpack(">ffifff", buf):
            lines.append(f"    {v},")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
