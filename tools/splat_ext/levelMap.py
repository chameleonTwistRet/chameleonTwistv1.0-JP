"""Level map struct splitter."""

import os
import struct
import sys
from pathlib import Path
from _ct_base import CTSegBase
from splat.util import options, symbols


class N64SegLevelMap(CTSegBase):
    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml):
        super().__init__(rom_start, rom_end, type, name, vram_start, args, yaml)
        self.type = isinstance(yaml, dict) and yaml.get("args", "Header")

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.lvm{self.type[0]}.inc.c"

    def disassemble_data(self, rom_bytes):
        map_data = rom_bytes[self.rom_start : self.rom_end]

        sym = self.retrieve_sym_type(
            symbols.all_symbols_dict, self.vram_start, "Lvp"
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type="Lvp", define=True
        )

        lines = []

        if self.type == "Header":
            data = struct.unpack(">iiII", map_data[0:0x10])
            parts = []
            for i, val in enumerate(data):
                if i == 2:  # Settings pointer
                    rmsym = self.retrieve_sym_type(
                        symbols.all_symbols_dict, val, "Rmset"
                    )
                    if not rmsym:
                        rmsym = self.create_symbol(
                            addr=val, in_segment=True, type="Rmset", define=True
                        )
                        parts.append(str(val))
                    else:
                        parts.append(f"&{rmsym.name}")
                elif i == 3:  # Map array pointer
                    smsym = self.retrieve_sym_type(
                        symbols.all_symbols_dict, val, "LvmM"
                    )
                    if not smsym:
                        smsym = self.create_symbol(
                            addr=val, in_segment=True, type="LvmM", define=True
                        )
                        parts.append(str(val))
                    else:
                        parts.append(smsym.name)
                else:
                    parts.append(str(val))

            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                lines.append(f"StageMapData {sym.name} = {{")

            lines.append("".join(p + ", " for p in parts))

        elif self.type == "Map":
            count = len(map_data) // 4
            values = [str(struct.unpack(">i", map_data[n * 4 : (n + 1) * 4])[0])
                      for n in range(count)]

            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                lines.append(f"s32 {sym.name}[{count}] = {{")
            lines.append("".join(v + ", " for v in values))

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
