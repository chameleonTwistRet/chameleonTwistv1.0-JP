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


class N64SegDemoPointers(CommonSegCodeSubsegment):
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
        return options.opts.asset_path / self.dir / f"{self.name}.demoP.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes):
        pointer_data = rom_bytes[self.rom_start : self.rom_end]

        lines = []

        sym = self.retrieve_sym_type(symbols.all_symbols_dict, self.vram_start, "Demop")
        if not sym:
            sym = self.create_symbol(
                addr=self.vram_start, in_segment=True, type="Demop", define=True
            )
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ContDemo* {sym.name}[] = {{")
        
        a = 0
        while a < len(pointer_data):
            v = struct.unpack(">I", pointer_data[a:a+4])[0]
            if v != 0:
                sym2 = self.retrieve_sym_type(symbols.all_symbols_dict, v, "Demo")
                if not sym2:
                    sym2 = self.create_symbol(
                        addr=v, in_segment=True, type="Demo", define=True
                    )
                v = "&"+sym2.name+"[0]"
            else:
                v = "NULL"
            newLine = v+","
            if a == len(pointer_data) - 4: newLine = newLine[:-1]
            lines.append(newLine)
            a += 4

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