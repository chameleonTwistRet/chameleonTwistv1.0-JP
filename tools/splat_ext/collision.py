"""
Converts Chameleon Twist collision data to a struct of user's choosing

Author: Nathan R.
"""

import re
import struct
from pathlib import Path
from splat.util.log import error
from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment


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

        if self.type == "Verts":
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "ColV")
            if not sym:
                sym = self.create_symbol(
                    addr=self.vram_start, in_segment=True, type="ColV", define=True
                )
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
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "ColT")
            if not sym:
                sym = self.create_symbol(
                    addr=self.vram_start, in_segment=True, type="ColT", define=True
                )
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                typer = "Vec3w"
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
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "ColS")
            if not sym:
                sym = self.create_symbol(
                    addr=self.vram_start, in_segment=True, type="ColS", define=True
                )
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                typer = "Rect3D"
                lines.append(f"{typer} {sym.name} = {{")
            
            newLine = str(struct.unpack(">fff", collision_data[0:0xC])).replace("(", "{").replace(")","}")+"," +\
                      str(struct.unpack(">fff", collision_data[0xC:0xC+0xC])).replace("(", "{").replace(")","}")
            lines.append(newLine)

            if not self.data_only:
                lines.append("};")
        elif self.type == "Header":
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "ColH")
            if not sym:
                sym = self.create_symbol(
                    addr=self.vram_start, in_segment=True, type="ColH", define=True
                )
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                typer = "CollisionData"
                lines.append(f"{typer} {sym.name} = {{")
            
            #see common_structs.h
            newLine = str()

            
            data = struct.unpack(">iiIII", collision_data[0:0x14])
            one = ""
            enums = open("include/enums.h", "r", encoding="UTF-8").readlines()
            i = 0
            while i < len(data):
                v = data[i]
                if i == 2:
                    sym2 = self.retrieve_sym_type(symbols.all_symbols_dict, v, "ColV")
                    if not sym2:
                        sym2 = self.create_symbol(
                            addr=self.vram_start, in_segment=True, type="ColV", define=True
                        )
                    v = "&"+sym2.name
                elif i == 3:
                    sym2 = self.retrieve_sym_type(symbols.all_symbols_dict, v, "ColT")
                    if not sym2:
                        sym2 = self.create_symbol(
                            addr=self.vram_start, in_segment=True, type="ColT", define=True
                        )
                    v = "&"+sym2.name
                elif i == 4:
                    sym2 = self.retrieve_sym_type(symbols.all_symbols_dict, v, "ColS")
                    if not sym2:
                        sym2 = self.create_symbol(
                            addr=self.vram_start, in_segment=True, type="ColS", define=True
                        )
                    v = "&"+sym2.name
                one += str(v)+", "
                i += 1
            lines.append(one[:-2])

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