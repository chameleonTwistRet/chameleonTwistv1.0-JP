"""
Dumps out an animation header as a .inc.c file.
"""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util.log import error


class N64SegAnimHeader(CTSegBase):
    SUFFIX = "animH"

    def disassemble_data(self, rom_bytes):
        buffer = rom_bytes[self.rom_start : self.rom_end]
        if len(buffer) != 0x30:
            error(
                f"Error: Animation header segment {self.name} size incorrect; "
                f"Is ({len(buffer)}) when it should be ({0x30})!"
            )

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Anim {sym.name} = {{")

        for v in struct.unpack(">ffffffffffII", buffer):
            lines.append(f"    {v},")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
