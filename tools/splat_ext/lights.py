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
        if (segment_length) != 16:
            error(
                f"Error: Light segment {self.name} length ({segment_length}) is not valid"
            )

        lines = []

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            if "/" in self.name:
                lines.append("Lights1 %s = gdSPDefLights1(" % (self.name.split("/")[(len(self.name.split("/"))-1)]))
            else:
                lines.append("Lights1 %s = gdSPDefLights1(" % (self.name))

        byteData = bytearray(lights_data)
        data = struct.unpack('>BBBbBBBbbbbbbbbb', byteData)
        # BBB0BBB0bbb00000
        lines.append("\t/* ambient color */")
        lines.append("\t%d, %d, %d," % (data[0], data[1], data[2]))
        lines.append("\t/* colored light direction */")
        lines.append("\t%d, %d, %d,\t%d, %d, %d" % (data[4], data[5], data[6], data[8], data[9], data[10]))
#
        if not self.data_only:
            lines.append(");")
#
        ## enforce newline at end of file
        lines.append("")
        return "\n".join(lines)

    def split(self, rom_bytes: bytes):
        if self.file_text and self.out_path():
            self.out_path().parent.mkdir(parents=True, exist_ok=True)

            with open(self.out_path(), "w", newline="\n") as f:
                f.write(self.file_text)
