"""Demo data struct splitter: emits ContDemo[]."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


_BUTTONS = {
    "R_CBUTTONS": 1 << 0,
    "L_CBUTTONS": 1 << 1,
    "D_CBUTTONS": 1 << 2,
    "U_CBUTTONS": 1 << 3,
    "R_TRIG": 1 << 4,
    "L_TRIG": 1 << 5,
    "R_JPAD": 1 << 8,
    "L_JPAD": 1 << 9,
    "D_JPAD": 1 << 10,
    "U_JPAD": 1 << 11,
    "START_BUTTON": 1 << 12,
    "Z_TRIG": 1 << 13,
    "B_BUTTON": 1 << 14,
    "A_BUTTON": 1 << 15,
}


def _format_buttons(value: int) -> str:
    if value == 0xFFFF:
        return "0xFFFF"
    if value == 0:
        return "0"
    return " | ".join(name for name, bit in _BUTTONS.items() if value & bit)


class N64SegDemoData(CTSegBase):
    SUFFIX = "demo"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % 4 != 0:
            error(
                f"Error: Demo segment {self.name} length ({len(buf)}) "
                f"is a proper array!"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Demo"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Demo", define=True
        )

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ContDemo {sym.name}[] = {{")

        last_off = len(buf) - 4
        for i in range(0, len(buf), 4):
            buttons_raw, b1, b2 = struct.unpack(">Hbb", buf[i : i + 4])
            entry = "{" + _format_buttons(buttons_raw) + ", " + str(b1) + ", " + str(b2) + "}"
            entry = entry + ("" if i == last_off else ",")
            lines.append(entry)

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
