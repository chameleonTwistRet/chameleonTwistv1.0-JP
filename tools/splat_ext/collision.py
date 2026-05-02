"""Collision struct splitter: Header / Verts / Tris / Settings variants."""

import os
import struct
import sys
from pathlib import Path
from _ct_base import CTSegBase
from splat.util import options, symbols


def _vec_array(buf, fmt, stride):
    """Yield C-formatted brace-enclosed tuples for an array of `stride`-byte
    records unpacked with `fmt`. Output spacing (', ') matches the original
    splitter, which derived it from `str(tuple)`."""
    for off in range(0, len(buf), stride):
        chunk = struct.unpack(fmt, buf[off : off + stride])
        yield "{" + ", ".join(str(v) for v in chunk) + "},"


class N64SegCollision(CTSegBase):
    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml):
        super().__init__(rom_start, rom_end, type, name, vram_start, args, yaml)
        self.type = isinstance(yaml, dict) and yaml.get("args", "Header")

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.col{self.type[0]}.inc.c"

    def _open_array(self, sym_name: str, c_type: str):
        if self.data_only:
            return [], None
        return [
            '#include "common.h"',
            "",
            f"{c_type} {sym_name}[] = {{",
        ], "header_close"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]

        if self.type == "Verts":
            return self._verts(buf)
        if self.type == "Tris":
            return self._tris(buf)
        if self.type == "Settings":
            return self._settings(buf)
        if self.type == "Header":
            return self._header(buf)
        return ""

    def _ensure_sym(self, addr, sym_type):
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, sym_type)
        if not sym:
            sym = self.create_symbol(
                addr=addr, in_segment=True, type=sym_type, define=True
            )
        return sym

    def _verts(self, buf):
        sym = self._ensure_sym(self.vram_start, "ColV")
        rows = list(_vec_array(buf, ">fff", 0xC))
        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Vec3f {sym.name}[] = {{")
        lines.extend(rows)
        if not self.data_only:
            lines.append("};")
        lines.append("")
        return "\n".join(lines)

    def _tris(self, buf):
        sym = self._ensure_sym(self.vram_start, "ColT")
        rows = list(_vec_array(buf, ">iii", 0xC))
        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Vec3w {sym.name}[] = {{")
        lines.extend(rows)
        if not self.data_only:
            lines.append("};")
        lines.append("")
        return "\n".join(lines)

    def _settings(self, buf):
        sym = self._ensure_sym(self.vram_start, "ColS")
        a = struct.unpack(">fff", buf[0:0xC])
        b = struct.unpack(">fff", buf[0xC : 0x18])
        body = (
            "{" + ", ".join(str(v) for v in a) + "},"
            "{" + ", ".join(str(v) for v in b) + "}"
        )
        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Rect3D {sym.name} = {{")
        lines.append(body)
        if not self.data_only:
            lines.append("};")
        lines.append("")
        return "\n".join(lines)

    def _header(self, buf):
        sym = self._ensure_sym(self.vram_start, "ColH")
        data = list(struct.unpack(">iiIII", buf[0:0x14]))

        # i==2 ColV, i==3 ColT, i==4 ColS — resolve pointers to symbol refs.
        for i, ref_type, suffix in (
            (2, "ColV", "[0]"),
            (3, "ColT", "[0]"),
            (4, "ColS", ""),
        ):
            ref = self.retrieve_sym_type(symbols.all_symbols_dict, data[i], ref_type)
            if not ref:
                ref = self.create_symbol(
                    addr=self.vram_start, in_segment=True, type=ref_type, define=True
                )
            data[i] = f"&{ref.name}{suffix}"

        body = ", ".join(str(v) for v in data)

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ModelCollision {sym.name} = {{")
        lines.append(body)
        if not self.data_only:
            lines.append("};")
        lines.append("")
        return "\n".join(lines)
