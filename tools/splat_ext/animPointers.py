"""Anim pointers struct splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase
from splat.util import symbols


class N64SegAnimPointers(CTSegBase):
    SUFFIX = "animP"

    def disassemble_data(self, rom_bytes):
        pointer_data = rom_bytes[self.rom_start : self.rom_end]

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Animp"
        )
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Animp", define=True
            )

        pointersets = []
        num = 0
        while num * 0xC < len(pointer_data):
            data = struct.unpack(">III", pointer_data[num * 0xC : (num + 1) * 0xC])
            row = []
            for i, val in enumerate(data):
                if i == 0:  # Frames
                    sym_g = self.retrieve_sym_type(
                        symbols.all_symbols_dict, val - 0x28, "Animh"
                    ) or self.create_symbol(
                        addr=val, in_segment=True, type="Animh", define=True
                    )
                    row.append(f"&{sym_g.name}.frames")
                elif i == 1:  # Objects
                    sym_g = self.retrieve_sym_type(
                        symbols.all_symbols_dict, val - 0x2C, "Animh"
                    ) or self.create_symbol(
                        addr=val, in_segment=True, type="Animh", define=True
                    )
                    row.append(f"&{sym_g.name}.objects")
                elif i == 2:  # Anim
                    sym_g = self.retrieve_sym_type(
                        symbols.all_symbols_dict, val - 0x2C, "Animarr"
                    ) or self.create_symbol(
                        addr=val, in_segment=True, type="Animarr", define=True
                    )
                    row.append(f"&{sym_g.name}[0][0]")
            pointersets.append(row)
            num += 1

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"AnimPointer {sym.name}[{num}] = {{")

        for row in pointersets:
            lines.append("{" + ", ".join(row) + "},")
        if pointersets:
            lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
