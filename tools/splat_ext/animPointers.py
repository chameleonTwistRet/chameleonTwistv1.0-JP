"""
"""

import re
import struct
from pathlib import Path
from splat.util.log import error
from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment

class N64SegAnimPointers(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.animP.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        pointer_data = rom_bytes[self.rom_start : self.rom_end]

        lines = []
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Animp")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Animp", define=True
            )



        num = 0
        pointersets = []
        while num*0xC < len(pointer_data):
            data = struct.unpack('>III', pointer_data[num*0xC:(num+1)*0xC])
            pointersets.append([])
            i = 0
            while i < len(data):
                if i == 0: #Frames
                    symG = self.retrieve_sym_type(symbols.all_symbols_dict, data[i]-0x28, "Animh")
                    if not symG:
                        symG = self.create_symbol(
                            addr=data[i], in_segment=True, type="Animh", define=True
                        )
                    pointersets[num].append("&"+symG.name+".frames")
                elif i == 1: #Objects
                    symG = self.retrieve_sym_type(symbols.all_symbols_dict, data[i]-0x2C, "Animh")
                    if not symG:
                        symG = self.create_symbol(
                            addr=data[i], in_segment=True, type="Animh", define=True
                        )
                    pointersets[num].append("&"+symG.name+".objects")
                elif i == 2: #Anim
                    symG = self.retrieve_sym_type(symbols.all_symbols_dict, data[i]-0x2C, "Animarr")
                    if not symG:
                        symG = self.create_symbol(
                            addr=data[i], in_segment=True, type="Animarr", define=True
                        )
                    pointersets[num].append("&"+symG.name+"[0][0]")

                i += 1
            num += 1
        
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append("AnimPointer  "+sym.name+"["+str(num)+"] = {")

        for set in pointersets:
            currLine = "{"
            for v in set: currLine += v+", "
            currLine += "},"
            lines.append(currLine)

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