"""N64 Mtx struct splitter: dumps Mtx as .inc.c."""

import os
import struct
import sys
from _ct_base import CTSegBase
from splat.util.log import error

class N64SegMtx(CTSegBase):
    SUFFIX = "mtx"

    def disassemble_data(self, rom_bytes):
        matrix_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(matrix_data)
        if segment_length != 64:
            if segment_length == 72:
                matrix_data = matrix_data[:64]
            else:
                error(
                    f"Error: Mtx segment {self.name} length ({segment_length}) "
                    f"is not a 4x4 matrix!"
                )

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )

        words = struct.unpack(">IIIIIIIIIIIIIIII", matrix_data)
        hexed = [f"0x{w:08X}" for w in words]

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Mtx {sym.name} = {{")

        lines += [
            f"   {{ {hexed[0]}, {hexed[1]},",
            f"   {hexed[2]}, {hexed[3]},",
            f"   {hexed[4]}, {hexed[5]},",
            f"   {hexed[6]}, {hexed[7]},",
            "",
            f"   {hexed[8]}, {hexed[9]},",
            f"   {hexed[10]}, {hexed[11]},",
            f"   {hexed[12]}, {hexed[13]},",
            f"   {hexed[14]}, {hexed[15]} }}",
        ]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
