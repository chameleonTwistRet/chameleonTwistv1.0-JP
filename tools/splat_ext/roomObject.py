"""
Chameleon Twist: Sprite Actor struct splitter
Dumps out spriteActor data as a .inc.c file.

Original Author: Ellie (Elisiah)
Modified for Room Object struct: Nathan R.
"""

import re
import struct
from math import degrees
from pathlib import Path
from splat.util.log import error
from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegRoomObject(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.roomObj.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        sprite_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(sprite_data)
        if (segment_length) != 140:
            error(
                f"Error: roomObject segment {self.name} length ({segment_length}) is not valid"
            )

        lines = []

        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Roomobj")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Roomobj", define=True
            )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append("RoomObject %s = {" % (sym.name))

        byteData = bytearray(sprite_data)
        data = struct.unpack('>ffffffifiiffffiiiiiiiiiiIIiiiiiiiii', byteData)
        enums = open("include/enums.h", "r", encoding="UTF-8").readlines()
        i = 0
        while i < len(data):
            v = data[i]
            if i in [0, 3]:
                v = "{"+str(data[i])+","+str(data[i+1])+","+str(data[i+2])+"}"
                i += 2
            elif i == 6: #rotationMode
                pass
                #enum = 0
                #actorAt = 0 #number in the actor enum
                #reading = False
                #while enum < len(enums):
                #    enumLine = enums[enum]
                #    if enumLine.find("RotationMode") != -1: reading = True
                #    elif reading:
                #        if actorAt == v:
                #            v = enumLine.split(",")[0].split("	")[-1].strip()
                #            break
                #        elif enumLine.find("};") != -1: break
                #        actorAt += 1
                #    enum += 1
            elif i == 7:
                v = "DEGREES_TO_RADIANS_2PI("+str(degrees(v))+")"
            elif i == 14: #uservariable symbol
                if hex(v).startswith("0x3") and len(hex(v)) == 7 + 2:
                    #CAN BE:
                        #uservariable symbol
                        #exitDirection
                    #TODO: what the hell is 4DD0D8 - 4dd1f4 in bombland. it is referenced with this slot but i have no idea what it is
                    #ive had to make a workaround for now but this is the first appearance of anything relating to this
                    sym2 = self.create_symbol(
                        addr=v, in_segment=True, type="data", define=True
                    )
                    if not sym2.name.startswith("D_"):
                        v = "&"+sym2.name
                pass
                #enum = 0
                #actorAt = 0 #number in the actor enum
                #reading = False
                #while enum < len(enums):
                #    enumLine = enums[enum]
                #    if enumLine.find("ExitDirection") != -1: reading = True
                #    elif reading:
                #        if actorAt == v:
                #            v = enumLine.split(",")[0].split("	")[-1].strip()
                #            break
                #        elif enumLine.find("};") != -1: break
                #        actorAt += 1
                #    enum += 1
            elif i in [24, 25]: #func RoomObject*
                if i != 0:
                    smsym = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "func")
                    if not smsym:
                        v = "NULL"
                    else:
                        v = "&"+smsym.name
                else: v = "NULL"

            lines.append(f"    {v},")
            i += 1

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