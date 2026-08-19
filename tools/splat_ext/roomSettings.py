"""Room settings struct splitter."""

import os
import struct
import sys
from _ct_base import CTSegBase  
from splat.util import symbols  
from splat.util.log import error


# Field index → (referenced symbol type) for the four pointer fields at the
# start of a RoomInstance.
_PTR_FIELDS = {
    0: "Roomobj",
    1: "Roomact",
    2: "Clct",
    3: "Sprite",
}


class N64SegRoomSettings(CTSegBase):
    SUFFIX = "rmSet"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 0x6C:
            error(
                f"Error: roomSettings segment {self.name} length ({len(buf)}) "
                f"is not valid"
            )

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Rmset"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Rmset", define=True
        )

        data = struct.unpack(">IIIIiiiiiififffffffhhhhiiiiff", buf)

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"RoomInstance {sym.name} = {{")

        for i, raw in enumerate(data):
            v = raw
            if raw != 0 and i in _PTR_FIELDS:
                ref_type = _PTR_FIELDS[i]
                ref = self.retrieve_sym_type(
                    symbols.all_symbols_dict, raw, ref_type
                )
                if not ref:
                    self.create_symbol(
                        addr=raw, in_segment=True, type=ref_type, define=True
                    )
                    v = str(raw)
                else:
                    v = f"&{ref.name}"
            lines.append(f"    {v},")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
