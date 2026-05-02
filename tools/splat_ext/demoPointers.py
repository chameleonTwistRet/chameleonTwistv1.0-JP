"""Demo pointer table splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase
from splat.util import symbols


class N64SegDemoPointers(CTSegBase):
    SUFFIX = "demoP"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Demop"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Demop", define=True
        )

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ContDemo* {sym.name}[] = {{")

        last_off = len(buf) - 4
        for i in range(0, len(buf), 4):
            (val,) = struct.unpack(">I", buf[i : i + 4])
            if val != 0:
                ref = self.retrieve_sym_type(
                    symbols.all_symbols_dict, val, "Demo"
                ) or self.create_symbol(
                    addr=val, in_segment=True, type="Demo", define=True
                )
                cell = f"&{ref.name}[0]"
            else:
                cell = "NULL"
            lines.append(cell + ("" if i == last_off else ","))

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
