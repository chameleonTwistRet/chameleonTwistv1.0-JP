"""unkType1 (PlatformKeyframe) splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


class N64SegUnkType1(CTSegBase):
    SUFFIX = "ut1"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 0x24:
            error(
                f"Error: unkType1 segment {self.name} length ({len(buf)}) is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Ut1"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Ut1", define=True
        )

        data = list(struct.unpack(">fffiiiiii", buf))
        vec3 = "{" + str(data[0]) + ", " + str(data[1]) + ", " + str(data[2]) + "}"
        # original: str(list).replace("[","{").replace("]","}") => "{a, b, c}"
        rest = [str(v) for v in data[3:]]

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"PlatformKeyframe {sym.name} = {{")

        lines.append(",".join([vec3, *rest]))

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
