"""Lights struct splitter: emits gdSPDefLights1(...)."""

import os
import struct
import sys

sys.path.insert(0, os.path.dirname(__file__))
from _ct_base import CTSegBase  # noqa: E402
from splat.util import symbols  # noqa: E402
from splat.util.log import error  # noqa: E402


class N64SegLights(CTSegBase):
    SUFFIX = "light"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 0x18:
            error(
                f"Error: Light segment {self.name} length ({len(buf)}) is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Light"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Light", define=True
        )

        data = struct.unpack(">BBBbBBBbBBBbBBBbBBBbBBBb", buf)
        ambient = [data[0], data[1], data[2]]
        rgb1 = [data[8], data[9], data[0xA]]
        xyz1 = [data[0x10], data[0x11], data[0x12]]

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Lights1 {sym.name} = ")

        lines.append("gdSPDefLights1(")
        lines.append("\t/* ambient color */")
        lines.append("\t" + ", ".join(str(i) for i in ambient) + ",")
        lines.append("\t/* colored light direction */")
        lines.append("\t" + ", ".join(str(i) for i in rgb1 + xyz1))
        lines.append(");")
        lines.append("")
        return "\n".join(lines)
