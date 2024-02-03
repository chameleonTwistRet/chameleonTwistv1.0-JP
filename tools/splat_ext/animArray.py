"""
N64 Mtx struct splitter
Dumps out Mtx as a .inc.c file.

Modified for CT1 Animations: Nathan R.
"""

import re
import struct
from pathlib import Path
from util.log import error
from math import floor
from util import options
from segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegAnimArray(CommonSegCodeSubsegment):
    trueResult = True
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
        return options.opts.asset_path / self.dir / f"{self.name}.animArr.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)
        
        
    def mtxDisasm(self, rom_bytes):
        #taken from mtx.py because it doesnt want to import
        segment_length = len(rom_bytes)
        if (segment_length) != 0x40:
            if (segment_length == 72):
                rom_bytes = rom_bytes[:0x40]
            else:
                error(
                    f"Error: Mtx segment in Anim segment {self.name} length ({segment_length}) is not a 4x4 matrix!"
                )

        lines = []

        if self.trueResult:
            s = []
            word_length = 2
            word_count = 16
            for i in range(0x20):
                s.append(int.from_bytes(rom_bytes[(i*2):(i*2)+2], "big"))
            short = []
            for i in s:
                short.append(str(i))
                if len(short)%word_count == 0 and len(short)>=0:
                    lines.append("{"+",".join(short)+"},")
                    short = []
            #lines[-1] = lines[-1][:-1]
        else:
            s15 = []
            s16 = []
            for i in range(0, 16):
                s15.append(int.from_bytes(rom_bytes[(i*2):(i*2)+2], "big", signed=True))
                s = int.from_bytes(rom_bytes[(i*2)+32:(i*2)+34], "big", signed=True)
                sign = ""
                if str(s)[0] == "-":
                    #remove the sign and add it in front of the 0
                    sign = "-"
                    s *= -1
                s16.append(float(sign + "0." + str(s)))

            lines = [
            f"""   {{ {s15[0]+s16[0]}, {s15[1]+s16[1]}, {s15[2]+s16[2]}, {s15[3]+s16[3]} }},""",
            f"""   {{ {s15[4]+s16[4]}, {s15[5]+s16[5]}, {s15[6]+s16[6]}, {s15[7]+s16[7]} }},""",
            f"""   {{ {s15[8]+s16[8]}, {s15[9]+s16[9]}, {s15[10]+s16[10]}, {s15[11]+s16[11]} }},""",
            f"""   {{ {s15[12]+s16[12]}, {s15[13]+s16[13]}, {s15[14]+s16[14]}, {s15[15]+s16[15]} }}"""]

        # enforce newline at end of file
        return "\n".join(lines)


    def disassemble_data(self, rom_bytes):
        buffer = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(buffer)
        if segment_length % 0x40 != 0:
            error(
                f"Error: Animation array segment {self.name} size incorrect; Is ({segment_length}) when it should be a multiple of ({0x40})!"
            )

        sym2 = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )

        after = []
        frames = 0
        Aoframes = self.args[0]
        Aoobjects = self.args[1]
        while (frames * 0x40)< segment_length:
            frameStart = (frames * 0x40)
            frameEnd = ((frames + 1) * 0x40)
            after.append(self.mtxDisasm(buffer[frameStart:frameEnd]))
            after[-1] = after[-1].replace("{", "{{", 1) + "},"
            frames += 1
        frame = 0
        for i in range(len(after)):
            line = after[i]
            linecut = 2 if self.trueResult else 4
            if frame % Aoobjects == 0: line=line[:linecut]+"{"+line[linecut:]
            if frame % Aoobjects == Aoobjects-1:line+="},"
            after[i] = line
            frame += 1
            
        lines = []

        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            type = "Mtx_f" if self.trueResult else "Mtx"
            bounds = "" if self.trueResult else "[4][4]"
            lines.append(f"{type} {sym2.name}[{Aoframes}][{Aoobjects}]{bounds} = {{")
        


        
        for frame in after:
            lines.append(frame)

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
