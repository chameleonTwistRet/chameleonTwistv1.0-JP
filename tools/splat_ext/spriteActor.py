"""
Chameleon Twist: Sprite Actor struct splitter
Dumps out spriteActor data as a .inc.c file.

Author: Ellie (Elisiah)
Originally found struct format: Nathan R.
"""

import re
import struct
from pathlib import Path
from splat.util.log import error

from splat.util import options
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegSpriteActor(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.sprite.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        sprite_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(sprite_data)
        if (segment_length) != 80:
            error(
                f"Error: spriteActor segment {self.name} length ({segment_length}) is not valid"
            )

        lines = []

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            if "/" in self.name:
                lines.append("SpriteActor %s = {" % (self.name.split("/")[(len(self.name.split("/"))-1)]))
            else:
                lines.append("SpriteActor %s = {" % (self.name))

        byteData = bytearray(sprite_data)
        data = struct.unpack('>iiffffffiifiiiiiiiii', byteData)
        for v in data: 
            lines.append(f"    {v},")

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
