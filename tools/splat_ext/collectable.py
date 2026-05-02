"""Collectable struct splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase, lookup_enum
from splat.util import symbols  
from splat.util.log import error


class N64SegCollectable(CTSegBase):
    SUFFIX = "clct"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 0x20:
            error(
                f"Error: clct segment {self.name} length ({len(buf)}) is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Clct"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Clct", define=True
        )

        data = struct.unpack(">ifffIiii", buf)

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Collectable {sym.name} = {{")

        i = 0
        while i < len(data):
            use = data[i]
            if i == 0:  # Actor ID — resolve to enum identifier if known
                ident = lookup_enum("actorIDs", use)
                if ident is not None:
                    use = ident
            elif i == 1:  # Position vec3
                use = "{" + str(data[i]) + "," + str(data[i + 1]) + "," + str(data[i + 2]) + "}"
                i += 2
            lines.append(f"    {use},")
            i += 1

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
