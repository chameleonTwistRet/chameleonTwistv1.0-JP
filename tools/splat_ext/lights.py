"""
Chameleon Twist: Lights Actor struct splitter
Dumps out Lights data as a .inc.c file.

Author: Ellie (Elisiah)
"""

import re
import struct
from pathlib import Path
from util.log import error

from util import options
from segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegLights(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.light.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        lights_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(lights_data)
        if (segment_length) != 0x18:
            error(
                f"Error: Light segment {self.name} length ({segment_length}) is not valid"
            )

        lines = []
        from util import symbols
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Light")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Light", define=True
            )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append("Lights1 %s = " % (sym.name))
        lines.append("gdSPDefLights1(")
    

        data = struct.unpack('>BBBbBBBbBBBbBBBbBBBbBBBb', bytearray(lights_data))
        ambientColor = [data[0], data[1], data[2]] #copies to data[4], data[5], and data[6]
        rgb1 = [data[8], data[9], data[0xA]] #copies to data[0xC], data[0xD], and data[0xE]
        xyz1 = [data[0x10], data[0x11], data[0x12]]
        #0x4 of padding at the end
        
        lines.append("\t/* ambient color */")
        s = []
        for i in ambientColor: s.append(str(i))
        temp = ", ".join(s)
        lines.append("\t"+temp+",")

        lines.append("\t/* colored light direction */")
        s = []
        for i in rgb1+xyz1: s.append(str(i))
        temp = ", ".join(s)
        lines.append("\t"+temp)

        lines.append(");")
        
        ## enforce newline at end of file
        lines.append("")
        return "\n".join(lines)

    def split(self, rom_bytes: bytes):
        if self.file_text and self.out_path():
            self.out_path().parent.mkdir(parents=True, exist_ok=True)

            with open(self.out_path(), "w", newline="\n") as f:
                f.write(self.file_text)
