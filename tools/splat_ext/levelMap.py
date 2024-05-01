"""
"""

import re
import struct
from pathlib import Path
from splat.util.log import error
from splat.util import options, symbols
from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment

class N64SegLevelMap(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.lvm{self.type[0]}.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        map_data = rom_bytes[self.rom_start : self.rom_end]

        lines = []
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Lvp")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Lvp", define=True
            )


        if self.type == "Header":
            data = struct.unpack('>iiII', map_data[0:0x10])
            add = []
            i = 0
            while i < len(data):
                if i == 2: #Settings Pointer
                    rmsym = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "Rmset")
                    if not rmsym:
                        rmsym = self.create_symbol(
                            addr=data[i], in_segment=True, type="Rmset", define=True
                        )
                        add.append(str(data[i]))
                    else: add.append("&"+rmsym.name)
                elif i == 3: #Map Array pointer
                    smsym = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], "LvmM")
                    if not smsym:
                        smsym = self.create_symbol(
                            addr=data[i], in_segment=True, type="LvmM", define=True
                        )
                        add.append(str(data[i]))
                    else: add.append("&"+smsym.name+"[0]")
                else:
                    add.append(str(data[i]))
                i += 1

            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                lines.append("LevelMap "+sym.name+" = {")

            currLine = ""
            for v in add: currLine += v+", "
            lines.append(currLine)

        elif self.type == "Map":
            num = 0
            pointersets = []
            while num*4 < len(map_data):
                data = struct.unpack('>i', map_data[num*4:(num+1)*4])
                pointersets.append(str(data[0]))
                num += 1
            
            if not self.data_only:
                lines.append('#include "common.h"')
                lines.append("")
                lines.append("s32 "+sym.name+"["+str(len(pointersets))+"] = {")
            currLine = ""
            for v in pointersets: currLine += v+", "
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