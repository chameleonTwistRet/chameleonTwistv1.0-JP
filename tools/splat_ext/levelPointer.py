"""Level pointer struct splitter: emits StageModel[]."""

import os
import struct
import sys
from _ct_base import CTSegBase
from splat.util import symbols


class N64SegLevelPointer(CTSegBase):
    SUFFIX = "lvp"

    def disassemble_data(self, rom_bytes):
        pointer_data = rom_bytes[self.rom_start : self.rom_end]

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Lvp"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Lvp", define=True
        )

        pointersets = []
        num = 0
        while num * 0x30 < len(pointer_data):
            data = struct.unpack(
                ">IIiiiiiiiiii", pointer_data[num * 0x30 : (num + 1) * 0x30]
            )
            row = []
            for i, val in enumerate(data):
                if i == 0:  # Graphics
                    sg = self.retrieve_sym_type(
                        symbols.all_symbols_dict, val, "Gfx"
                    ) or self.create_symbol(
                        addr=val, in_segment=True, type="Gfx", define=True
                    )
                    row.append(f"&{sg.name}[0]")
                elif i == 1:  # Collision
                    sc = self.retrieve_sym_type(
                        symbols.all_symbols_dict, val, "ColH"
                    ) or self.create_symbol(
                        addr=val, in_segment=True, type="ColH", define=True
                    )
                    row.append(f"&{sc.name}")
                else:
                    s = str(val)
                    if i == 2:
                        s = "{" + s
                    elif i == 11:
                        s += "}"
                    row.append(s)
            pointersets.append(row)
            num += 1

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"StageModel {sym.name}[{num}] = {{")

        for row in pointersets:
            lines.append("{" + ", ".join(row) + ", },")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
