"""Room object struct splitter."""

import os
import struct
import sys
from math import degrees
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


class N64SegRoomObject(CTSegBase):
    SUFFIX = "roomObj"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 140:
            error(
                f"Error: roomObject segment {self.name} length ({len(buf)}) "
                f"is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Roomobj"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Roomobj", define=True
        )

        data = struct.unpack(">ffffffifiiffffiiiiiiiiiiIIiiiiiiiii", buf)

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"RoomObject {sym.name} = {{")

        i = 0
        while i < len(data):
            v = data[i]
            if i in (0, 3):  # Vec3 fields
                v = "{" + str(data[i]) + "," + str(data[i + 1]) + "," + str(data[i + 2]) + "}"
                i += 2
            elif i == 7:
                v = f"DEGREES_TO_RADIANS_2PI({degrees(v)})"
            elif i == 14:  # uservariable symbol — promote 0x3xxxxxx pointers
                if hex(v).startswith("0x3") and len(hex(v)) == 9:
                    sym2 = self.create_symbol(
                        addr=v, in_segment=True, type="data", define=True
                    )
                    if not sym2.name.startswith("D_"):
                        v = f"&{sym2.name}"
            elif i in (24, 25):  # function pointers
                fn_sym = self.retrieve_sym_type(
                    symbols.all_symbols_dict, data[i], "func"
                )
                v = f"&{fn_sym.name}" if fn_sym else "NULL"

            lines.append(f"    {v},")
            i += 1

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
