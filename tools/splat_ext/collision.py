"""
Converts Chameleon Twist collision data to a struct of user's choosing

Author: Nathan R.
"""

import re
import struct
from pathlib import Path
from util.log import error

from util import options
from segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegCollision(CommonSegCodeSubsegment):
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
        self.type = isinstance(yaml, dict) and yaml.get("args", "Header")

    def get_linker_section(self) -> str:
        #return ".data"
        return []

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.col{self.type[0]}.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        collision_data = rom_bytes[self.rom_start : self.rom_end]
        #segment_length = len(collision_data)
        #if (segment_length) != 64:
        #    if (segment_length == 72):
        #        collision_data = collision_data[:64]
        #    else:
        #        error(
        #            f"wrong"
        #        )

        lines = []

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )
        if self.type == "Verts":
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                typer = "Vec3f"
                lines.append(f"{typer} {sym.name}[] = {{")
            at = len(lines)
            
            a = 0
            b = 0
            while a < len(collision_data):
                newLine = str(struct.unpack(">fff", collision_data[a:a+0xC])).replace("(", "{").replace(")","}")+","
                lines.append(newLine)
                a += 0xC
                b += 1

            if not self.data_only:
                lines[at] = lines[at].replace("[]", "["+str(b)+"]")
                lines.append("};")
        elif self.type == "Tris":
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                typer = "Vec3s"
                lines.append(f"{typer} {sym.name}[] = {{")
            at = len(lines)
            
            a = 0
            b = 0
            while a < len(collision_data):
                newLine = str(struct.unpack(">iii", collision_data[a:a+0xC])).replace("(", "{").replace(")","}")+","
                lines.append(newLine)
                a += 0xC
                b += 1
            

            if not self.data_only:
                lines[at] = lines[at].replace("[]", "["+str(b)+"]")
                lines.append("};")
        elif self.type == "Settings":
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                typer = "Vec3f"
                lines.append(f"{typer} {sym.name}[2] = {{")
            
            #settings only consist of 2 vec3f's
            newLine = str(struct.unpack(">fff", collision_data[0:0xC])).replace("(", "{").replace(")","}")+","
            lines.append(newLine)
            newLine = str(struct.unpack(">fff", collision_data[0xC:0xC*2])).replace("(", "{").replace(")","}")+","
            lines.append(newLine)

            if not self.data_only:
                lines.append("};")
        elif self.type == "Header":
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                typer = "CollisionData"
                lines.append(f"{typer} {sym.name} = {{")
            
            #see common_structs.h
            newLine = str(struct.unpack(">iiIII", collision_data[0:0x14])).replace("(", "{").replace(")","}")+","
            lines.append(newLine)

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
