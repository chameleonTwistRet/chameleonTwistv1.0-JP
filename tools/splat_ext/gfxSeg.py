"""
Workaround for splat seg2virtual: a custom Gfx segtype that resolves
segmented addresses (Vtx / Gfx / Light / etc.) by walking the project YAML.

The original implementation re-read the entire YAML from disk on *every*
gfxd callback. This version reads it once and caches the lines in a
module-level list, which is shared across instances.
"""

import os
import re
from functools import lru_cache
from pathlib import Path
from typing import Optional

from pygfxd import (
    gfxd_buffer_to_string,
    gfxd_cimg_callback,
    gfxd_dl_callback,
    gfxd_endian,
    gfxd_execute,
    gfxd_input_buffer,
    gfxd_light_callback,
    gfxd_lookat_callback,
    gfxd_macro_fn,
    gfxd_mtx_callback,
    gfxd_output_buffer,
    gfxd_printf,
    gfxd_target,
    gfxd_timg_callback,
    gfxd_tlut_callback,
    gfxd_vp_callback,
    gfxd_vtx_callback,
    gfxd_zimg_callback,
    GfxdEndian,
)

from splat.segtypes.n64.gfx import N64SegGfx
from splat.util import options, symbols
from splat.util.log import error


# AnimationSlots range for the Mtx callback fallback — addresses in this
# window aren't real symbols, they index into a runtime mtx pool.
_ANIM_RANGE_START = 0x80129730
_ANIM_SLOTS = 40
_ANIM_RANGE_END = _ANIM_RANGE_START + _ANIM_SLOTS * 0x40

_LIGHTS_RE = re.compile(r"\*\(Lightsn \*\)0x[0-9A-F]{8}")


@lru_cache(maxsize=1)
def _yaml_lines():
    yaml_path = Path(os.getcwd()) / "chameleontwist.jp.yaml"
    with open(yaml_path, "r", encoding="utf-8") as f:
        return f.readlines()


def _split_addr(line: str) -> int:
    """Extract the leading 0x address from a YAML segment entry."""
    args = ("0x" + (line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
    if "[" in line:
        args = [a.strip() for a in args]
    elif "{" in line:
        args = [
            a.replace("type: ", "").replace("name: ", "").strip()
            for a in args
        ]
    return int(args[0], 16)


class N64SegGfxSeg(N64SegGfx):
    groupName = ""

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.gfx.inc.c"

    def disassemble_data(self, rom_bytes):
        assert isinstance(self.rom_start, int)
        assert isinstance(self.rom_end, int)
        assert isinstance(self.vram_start, int)

        gfx_data = rom_bytes[self.rom_start : self.rom_end]
        if len(gfx_data) % 8 != 0:
            error(
                f"Error: gfx segment {self.name} length ({len(gfx_data)}) "
                f"is not a multiple of 8!"
            )

        out_str = "" if self.data_only else options.opts.generated_c_preamble + "\n\n"

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )

        gfxd_input_buffer(gfx_data)

        # TODO: terrible guess at the size we'll need — improve this
        outb = bytes([0] * len(gfx_data) * 100)
        outbuf = gfxd_output_buffer(outb, len(outb))

        gfxd_target(self.get_gfxd_target())
        gfxd_endian(
            GfxdEndian.big if options.opts.endianness == "big" else GfxdEndian.little, 4
        )

        gfxd_macro_fn(self.macro_fn)
        gfxd_tlut_callback(self.tlut_handler)
        gfxd_timg_callback(self.timg_handler)
        gfxd_cimg_callback(self.cimg_handler)
        gfxd_zimg_callback(self.zimg_handler)
        gfxd_dl_callback(self.dl_handler)
        gfxd_mtx_callback(self.mtx_handler)
        gfxd_lookat_callback(self.lookat_handler)
        gfxd_light_callback(self.light_handler)
        gfxd_vtx_callback(self.vtx_handler)
        gfxd_vp_callback(self.vp_handler)

        gfxd_execute()

        if self.data_only:
            out_str += gfxd_buffer_to_string(outbuf)
        else:
            out_str += "Gfx " + self.format_sym_name(sym) + "[] = {\n"
            out_str += gfxd_buffer_to_string(outbuf)
            out_str += "};\n"

        # Poor man's light fix until we get the libgfxd PR merged.
        out_str = re.sub(_LIGHTS_RE, self._light_sub, out_str)
        return out_str

    # ----- gfxd callbacks --------------------------------------------------

    def _resolve_with_fallback(self, addr: int, sym_type: str):
        """Try to resolve an address as a symbol of `sym_type`, first via the
        fixed mapping then via the legacy split-mapping. Creates a symbol if
        none is found."""
        # getTrueAdr(addr, split=False) is functionally a no-op: it walks the
        # YAML for side-effects (a now-unused groupName attr) but returns
        # `addr` unchanged.
        addr_fixed = addr
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr_fixed, sym_type)
        if sym:
            return sym
        split_adr = self.getTrueAdr(addr, True)
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, split_adr, sym_type)
        if sym:
            return sym
        return self.create_symbol(
            addr=split_adr,
            in_segment=self.in_segment,
            type=sym_type,
            reference=True,
            search_ranges=True,
        )

    def _light_sub(self, match):
        light = match.group(0)
        addr = int(light[12:], 0)
        sym = self._resolve_with_fallback(addr, "Light")
        return self.format_sym_name(sym)

    def tlut_handler(self, addr, idx, count):
        sym = self._resolve_with_fallback(addr, "TLut")
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def timg_handler(self, addr, fmt, size, width, height, pal):
        sym = self._resolve_with_fallback(addr, "TImg")
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def cimg_handler(self, addr, fmt, size, width):
        sym = self.create_symbol(
            addr=addr, in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def zimg_handler(self, addr):
        sym = self.create_symbol(
            addr=addr, in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def dl_handler(self, addr):
        sym = self._resolve_with_fallback(addr, "Gfx")
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def mtx_handler(self, addr):
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, "Mtx")
        if sym:
            gfxd_printf(f"&{self.format_sym_name(sym)}")
            return 1
        if _ANIM_RANGE_START <= addr < _ANIM_RANGE_END:
            index = (addr - _ANIM_RANGE_START) // 0x40
            gfxd_printf(f"&AnimationSlots[{index}]")
            return 1
        gfxd_printf("")
        return 1

    def vtx_handler(self, addr, count):
        split_adr = self.getTrueAdr(addr, True)
        addr_fixed = addr  # getTrueAdr(addr, False) is a no-op (see _resolve_with_fallback)
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, split_adr, "Vtx")
        if not sym:
            sym = self.create_symbol(
                addr=split_adr,
                in_segment=self.in_segment,
                type="Vtx",
                reference=True,
                search_ranges=True,
            )
        index = (addr_fixed - split_adr) // 0x10
        gfxd_printf(f"&{self.format_sym_name(sym)}[{index}]")
        return 1

    # ----- segmented-address resolver --------------------------------------

    def getTrueAdr(self, addr: int, split: bool = False) -> int:
        # Real virtual addresses are 0x80xxxxxx-style — already 9 hex chars.
        # Anything shorter is a segmented address that needs translation.
        if len(hex(addr)) > 7 + 2:
            return addr
        # split=False was a no-op walk; callers now skip it. Preserve here in
        # case anything else calls getTrueAdr directly.
        if not split:
            return addr
        return _resolve_split_adr(self.rom_start, addr)


@lru_cache(maxsize=None)
def _resolve_split_adr(rom_start: int, addr: int) -> int:
    yaml_lines = _yaml_lines()
    index = hex((addr & 0x0F000000) >> 24).replace("0x", "0x0")
    otherhalf = addr & ~0x0F000000
    myself = hex(rom_start)

    i = 0
    mode = 0
    base_adr = 0x0
    new = 0x0

    while i < len(yaml_lines):
        line = yaml_lines[i]
        if mode == 0:  # find the split this gfx segment came from
            if line.lower().find(myself) != -1:
                mode = 1
            i += 1
        elif mode == 1:  # walk back to find the rom-start of that block
            if line.find("SEGMENT " + index):
                for back in range(0, 5):
                    prev = yaml_lines[i - back]
                    if prev.startswith("  - start: ") and base_adr == 0x0:
                        base_adr = int(
                            prev.split(": ")[1].split("#")[0].strip(), 16
                        )
                    if base_adr != 0x0:
                        break
            if base_adr != 0x0:
                new = base_adr + otherhalf
                mode = 2
            i -= 1
        elif mode == 2:
            if line.find("-") != -1 and "0x" in line:
                candidate = _split_addr(line)
                if candidate == new:
                    break
                if candidate > new:
                    diff = (base_adr + otherhalf) - _split_addr(yaml_lines[i - 1])
                    otherhalf -= diff
                    break
            i += 1

    return int(index + "000000", 16) + otherhalf
