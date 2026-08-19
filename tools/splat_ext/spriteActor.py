"""Sprite actor struct splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


class N64SegSpriteActor(CTSegBase):
    SUFFIX = "sprite"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 80:
            error(
                f"Error: spriteActor segment {self.name} length ({len(buf)}) "
                f"is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Sprite"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Sprite", define=True
        )

        data = struct.unpack(">iiffffffiifiiiiiiiii", buf)

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"SpriteActor {sym.name} = {{")

        i = 0
        while i < len(data):
            use = data[i]
            if i in (2, 5):  # Vec3 fields
                use = "{" + str(data[i]) + "," + str(data[i + 1]) + "," + str(data[i + 2]) + "}"
                i += 2
            lines.append(f"    {use},")
            i += 1

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
