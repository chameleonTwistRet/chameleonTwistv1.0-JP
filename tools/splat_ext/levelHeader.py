"""
Chameleon Twist: Sprite Actor struct splitter
Dumps out spriteActor data as a .inc.c file.

Original Author: Ellie (Elisiah)
Modified for Level Header struct: Nathan R.
"""

import re
import struct
from pathlib import Path
from splat.util.log import error
from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegLevelHeader(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.lvlHdr.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        sprite_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(sprite_data)
        if (segment_length) != 0x20:
            error(
                f"Error: levelHeader segment {self.name} length ({segment_length}) is not valid"
            )

        lines = []

        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Lvlhdr")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Lvlhdr", define=True
            )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append("StageData %s = {" % (sym.name))

        byteData = bytearray(sprite_data)
        data = struct.unpack('>IIIHHIIII', byteData)
        i = 0
        while i < len(data):
            use = data[i]
            if use != 0:
                if i == 0: #level map
                    map = self.retrieve_sym_type(symbols.all_symbols_dict, use, "LvmH")
                    if map: use = "&"+map.name
                elif i == 1: #overworld rooms
                    ov = self.retrieve_sym_type(symbols.all_symbols_dict, use, "Rmset")
                    if ov: use = "&"+ov.name
                elif i == 2: #pointers
                    pointers = self.retrieve_sym_type(symbols.all_symbols_dict, use, "Lvp")
                    if pointers: use = "&"+pointers.name+"[0]"
                #rabObjects would go here but i still dont know what it does
                elif i == 7: #spriteLib
                    sprLib = self.retrieve_sym_type(symbols.all_symbols_dict, use, "Sprlib")
                    if sprLib: use = "&"+sprLib.name+"[0]"
                elif i == len(data) - 1: #level scope
                    scopeSym = self.retrieve_sym_type(symbols.all_symbols_dict, use, "Lvlscope")
                    if scopeSym: use = "&"+scopeSym.name
            lines.append(f"    {use},")
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