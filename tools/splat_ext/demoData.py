"""
N64 Mtx struct splitter
Dumps out Mtx as a .inc.c file.

Author: Ellie (Elisiah)
"""

import re
import struct
from pathlib import Path
from splat.util.log import error

from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegDemoData(CommonSegCodeSubsegment):
    def __init__(
        self,
        rom_start,
        rom_end,
        type,
        name,
        vram_start,
        args,
        yaml,
    ):
        super().__init__(
            rom_start,
            rom_end,
            type,
            name,
            vram_start,
            args=args,
            yaml=yaml,
        )
        self.file_text = None
        self.data_only = isinstance(yaml, dict) and yaml.get("data_only", False)

    def get_linker_section(self) -> str:
        #return ".data"
        return []

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.demo.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        demo_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(demo_data)
        if (segment_length) % 4 != 0:
            error(
                f"Error: Demo segment {self.name} length ({segment_length}) is a proper array!"
            )

        lines = []

        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Demo")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Demo", define=True
            )

        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ContDemo {sym.name}[] = {{")
        
        i = 0
        while i < len(demo_data):
            byteData = demo_data[i:i+4]
            data = struct.unpack('>Hbb', byteData)
            newData = list(data)
            buttons = {
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
                "A_BUTTON": 1 << 15
            }

            if hex(newData[0]) == "0xffff": newData[0] = "0xFFFF"
            elif newData[0] == 0:           newData[0] = 0
            else:
                ors = []
                for button in list(buttons.keys()):
                    if newData[0] & buttons[button]: ors.append(button)
                newData[0] = " | ".join(ors)
            newLine = str(newData).replace("[", "{").replace("]", "}").replace("'", "")+","
            if i == len(demo_data)-4:
                newLine = newLine[:-1]
            lines.append(newLine)
            i += 4



        if not self.data_only:
            lines.append("};")

        # enforce newline at end of file
        lines.append("")
        return "\n".join(lines)

    def split(self, rom_bytes: bytes):
        if self.file_text and self.out_path():
            self.out_path().parent.mkdir(parents=True, exist_ok=True)

            with open(self.out_path(), "w", newline="\n") as f:
                f.write(self.file_text)

    #def should_scan(self) -> bool:
    #    return (
    #        self.rom_start != "auto"
    #        and self.rom_end != "auto"
    #    )
#
    #def should_split(self) -> bool:
    #    return self.extract and options.mode_active("mtx")