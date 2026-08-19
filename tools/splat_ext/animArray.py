"""Anim array struct splitter: emits Mtx[frames][objects]."""

import os
import struct
import sys

sys.path.insert(0, os.path.dirname(__file__))
from _ct_base import CTSegBase  # noqa: E402

from splat.util.log import error  # noqa: E402


def _mtx_lines(buffer):
    """Format a 64-byte 4x4 matrix as the same set of lines mtx.py emits.
    Animation arrays use the integer-form (trueResult=False path)."""
    if len(buffer) != 0x40:
        if len(buffer) == 72:
            buffer = buffer[:0x40]
        else:
            error(
                f"Error: Mtx slice in Anim array length ({len(buffer)}) "
                f"is not a 4x4 matrix!"
            )
    words = struct.unpack(">IIIIIIIIIIIIIIII", buffer)
    h = [f"0x{w:08X}" for w in words]
    return [
        f"   {{ {h[0]}, {h[1]},",
        f"   {h[2]}, {h[3]},",
        f"   {h[4]}, {h[5]},",
        f"   {h[6]}, {h[7]},",
        "",
        f"   {h[8]}, {h[9]},",
        f"   {h[10]}, {h[11]},",
        f"   {h[12]}, {h[13]},",
        f"   {h[14]}, {h[15]} }}",
    ]


class N64SegAnimArray(CTSegBase):
    SUFFIX = "animArr"

    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml):
        super().__init__(rom_start, rom_end, type, name, vram_start, args, yaml)
        if isinstance(yaml, dict):
            self.args.append(yaml.get("frames", 1))
            self.args.append(yaml.get("objects", 1))

    def disassemble_data(self, rom_bytes):
        buffer = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(buffer)
        if segment_length % 0x40 != 0:
            error(
                f"Error: Animation array segment {self.name} size incorrect; "
                f"Is ({segment_length}) when it should be a multiple of ({0x40})!"
            )

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )

        ao_frames = self.args[0]
        ao_objects = self.args[1]

        per_frame_blocks = []
        offset = 0
        while offset < segment_length:
            mtx = _mtx_lines(buffer[offset : offset + 0x40])
            # original wraps each frame in an extra `{ ... },`
            mtx[0] = mtx[0].replace("{", "{{", 1)
            mtx[-1] = mtx[-1] + "},"
            per_frame_blocks.append("\n".join(mtx))
            offset += 0x40

        # Group objects-per-frame: open `{` at every nth frame, close at the (n-1)th
        cut = 4  # leading whitespace before first `{` from `_mtx_lines`
        for idx, block in enumerate(per_frame_blocks):
            if idx % ao_objects == 0:
                block = block[:cut] + "{" + block[cut:]
            if idx % ao_objects == ao_objects - 1:
                block = block + "},"
            per_frame_blocks[idx] = block

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Mtx {sym.name}[{ao_frames}][{ao_objects}] = {{")

        lines.extend(per_frame_blocks)

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
