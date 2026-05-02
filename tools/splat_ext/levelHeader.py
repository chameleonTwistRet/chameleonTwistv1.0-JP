"""Level header struct splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


class N64SegLevelHeader(CTSegBase):
    SUFFIX = "lvlHdr"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 0x20:
            error(
                f"Error: levelHeader segment {self.name} length ({len(buf)}) "
                f"is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Lvlhdr"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Lvlhdr", define=True
        )

        data = struct.unpack(">IIIHHIIII", buf)

        # field index → (referenced symbol type, formatter)
        REFS = {
            0: ("LvmH", lambda s: f"&{s.name}"),
            1: ("Rmset", lambda s: f"&{s.name}"),
            2: ("Lvp", lambda s: f"&{s.name}[0]"),
            7: ("Sprlib", lambda s: f"&{s.name}[0]"),
            len(data) - 1: ("Lvlscope", lambda s: f"&{s.name}"),
        }

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"StageData {sym.name} = {{")

        for i, raw in enumerate(data):
            use = raw
            if raw != 0 and i in REFS:
                ref_type, fmt = REFS[i]
                ref_sym = self.retrieve_sym_type(
                    symbols.all_symbols_dict, raw, ref_type
                )
                if ref_sym:
                    use = fmt(ref_sym)
            lines.append(f"    {use},")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
