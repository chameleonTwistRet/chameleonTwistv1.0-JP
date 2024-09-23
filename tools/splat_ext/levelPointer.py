"""
"""

import re
import struct
from pathlib import Path
from splat.util.log import error
from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment

class N64SegLevelPointer(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.lvp.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        pointer_data = rom_bytes[self.rom_start : self.rom_end]

        lines = []
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Lvp")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Lvp", define=True
            )



        num = 0
        pointersets = []
        while num*0x30 < len(pointer_data):
            data = struct.unpack('>IIiiiiiiiiii', pointer_data[num*0x30:(num+1)*0x30])
            pointersets.append([])
            i = 0
            while i < len(data):
                if i == 0: #Graphics
                    symG = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "Gfx")
                    if not symG:
                        symG = self.create_symbol(
                            addr=data[i], in_segment=True, type="Gfx", define=True
                        )
                    pointersets[num].append("&"+symG.name+"[0]")
                elif i == 1: #Collision
                    symC = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "ColH")
                    if not symC:
                        symC = self.create_symbol(
                            addr=data[i], in_segment=True, type="ColH", define=True
                        )
                    pointersets[num].append("&"+symC.name)
                else:
                    nus = str(data[i])
                    if i == 2:
                        nus = "{"+nus
                    elif i == 11:
                        nus += "}"
                    pointersets[num].append(nus)

                i += 1
            num += 1
        
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append("StageModel "+sym.name+"["+str(num)+"] = {")

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