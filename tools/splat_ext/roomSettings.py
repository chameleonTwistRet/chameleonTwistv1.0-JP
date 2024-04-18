"""
Chameleon Twist: Sprite Actor struct splitter
Dumps out spriteActor data as a .inc.c file.

Original Author: Ellie (Elisiah)
Modified for Room Settings struct: Nathan R.
"""

import re
import struct
from pathlib import Path
from splat.util.log import error
from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegRoomSettings(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.rmSet.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        sprite_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(sprite_data)
        if (segment_length) != 0x6C:
            error(
                f"Error: roomSettings segment {self.name} length ({segment_length}) is not valid"
            )

        lines = []

        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Rmset")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Rmset", define=True
            )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append("RoomSettings %s = {" % (sym.name))

        byteData = bytearray(sprite_data)
        data = struct.unpack('>IIIIiiiiiififffiiifhhhhiiiifi', byteData)
        i = 0
        while i < len(data):
            v = data[i]
            if data[i] != 0:
                if i == 0: #Room Objects
                    rmsym = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "Roomobj")
                    if not rmsym:
                        rmsym = self.create_symbol(
                            addr=data[i], in_segment=True, type="Roomobj", define=True
                        )
                        v = str(data[i])
                    else: v = "&"+rmsym.name
                elif i == 1: #Room Actors
                    rmsym = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "Roomact")
                    if not rmsym:
                        rmsym = self.create_symbol(
                            addr=data[i], in_segment=True, type="Roomact", define=True
                        )
                        v = str(data[i])
                    else: v = "&"+rmsym.name
                elif i == 2: #Collectables
                    rmsym = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "Clct")
                    if not rmsym:
                        rmsym = self.create_symbol(
                            addr=data[i], in_segment=True, type="Clct", define=True
                        )
                        v = str(data[i])
                    else: v = "&"+rmsym.name
                elif i == 3: #Sprite Actors
                    rmsym = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "Sprite")
                    if not rmsym:
                        rmsym = self.create_symbol(
                            addr=data[i], in_segment=True, type="Sprite", define=True
                        )
                        v = str(data[i])
                    else: v = "&"+rmsym.name
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