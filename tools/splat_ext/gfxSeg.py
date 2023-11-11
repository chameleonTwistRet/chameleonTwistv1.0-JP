#workaround for seg2virtual until we get something reasonably better
import os

"""
N64 f3dex display list splitter
Dumps out Gfx[] as a .inc.c file.
"""

import re
from typing import Optional

from pathlib import Path

from pygfxd import (
    gfxd_buffer_to_string,
    gfxd_cimg_callback,
    gfxd_dl_callback,
    gfxd_endian,
    gfxd_execute,
    gfxd_input_buffer,
    gfxd_light_callback,
    gfxd_lookat_callback,
    gfxd_macro_dflt,
    gfxd_macro_fn,
    gfxd_mtx_callback,
    gfxd_output_buffer,
    gfxd_printf,
    gfxd_puts,
    gfxd_target,
    gfxd_timg_callback,
    gfxd_tlut_callback,
    gfxd_vp_callback,
    gfxd_vtx_callback,
    gfxd_zimg_callback,
    GfxdEndian,
    gfxd_f3d,
    gfxd_f3db,
    gfxd_f3dex,
    gfxd_f3dexb,
    gfxd_f3dex2,
)
from segtypes.segment import Segment

from util import log, options
from util.log import error

from segtypes.n64.gfx import N64SegGfx

from util import symbols

LIGHTS_RE = re.compile(r"\*\(Lightsn \*\)0x[0-9A-F]{8}")

class N64SegGfxSeg(N64SegGfx):

    def tlut_handler(self, addr, idx, count):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def timg_handler(self, addr, fmt, size, width, height, pal):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def cimg_handler(self, addr, fmt, size, width):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def zimg_handler(self, addr):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def dl_handler(self, addr):
        # Look for 'Gfx'-typed symbols first
        addr = self.getTrueAdr(addr)
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, "Gfx")

        if not sym:
            sym = self.create_symbol(
                addr=addr, in_segment=self.in_segment, type="data", reference=True
            )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def lookat_handler(self, addr, count):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def light_handler(self, addr, count):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    def vp_handler(self, addr):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(f"&{self.format_sym_name(sym)}")
        return 1

    def mtx_handler(self, addr):
        sym = self.create_symbol(
            addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
        )
        gfxd_printf(f"&{self.format_sym_name(sym)}")
        return 1


    def vtx_handler(self, addr, count):
        # Look for 'Vtx'-typed symbols first
        splitAdr = self.getTrueAdr(addr, True)
        addr = self.getTrueAdr(addr)
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, splitAdr, "Vtx")

        if not sym:
            sym = self.create_symbol(
                addr=splitAdr,
                in_segment=self.in_segment,
                type="Vtx",
                reference=True,
                search_ranges=True,
            )

        index = int((addr - splitAdr) / 0x10)
        gfxd_printf(f"&{self.format_sym_name(sym)}[{index}]")
        return 1

    def getSplitAdr(self, line):
        compare = 0x0
        if line.find("[") != -1: #normal
            args = ("0x"+(line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
            for a in range(len(args)): args[a] = args[a].strip()
            compare = int(args[0],16)
        elif line.find("{") != -1: #dict
            args = ("0x"+(line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
            for a in range(len(args)): args[a] = args[a].replace("type: ", "").replace("name: ", "").strip()
            compare = int(args[0],16)
        return compare

    def getTrueAdr(self, addr, split=False):
        if not hex(addr).startswith("0x8"):#SPECIFICALLY at the start
            yamlPath = os.getcwd()+"/chameleontwist.jp.yaml"
            yamler = open(yamlPath, "r", encoding="utf-8").readlines()
            otherhalf = addr & ~0x0F000000
            myself = hex(self.rom_start)
            i = 0
            mode = 0
            vram = 0x0
            baseAdr = 0x0
            new = 0x0
            while i < len(yamler):
                if mode == 0: #find the split the gfx came from
                    if yamler[i].lower().find(myself) != -1:
                        mode = 1
                    i += 1
                elif mode == 1: #go backwards until you find a vram
                    if yamler[i].startswith("  - start: "):
                        baseAdr = int(yamler[i].split("- start: ")[1].split("#")[0].strip(),16)
                        for back in range(0,5):
                            line = yamler[i - back]
                            if line.startswith("    vram: ") and vram == 0x0:
                                vram = int(line.split(": ")[1].split("#")[0].strip(),16)
                                break
                            line = yamler[i + back]
                            if line.startswith("    vram: ") and vram == 0x0:
                                vram = int(line.split(": ")[1].split("#")[0].strip(),16)
                                break
                    if baseAdr != 0x0 and vram != 0x0:
                        new = baseAdr+otherhalf
                        if not split: break
                        mode = 2
                    i -= 1
                elif mode == 2: #try and find the asset in which you are calling for
                    #the only reason this mode exists is because vtx's have a bad habit of being called a specific distance into themselves, making this all worthless
                    if yamler[i].find("-") != -1:
                        yoink = self.getSplitAdr(yamler[i])
                        if yoink == new: break #is a valid split; wouldve been generated in symbol_addrs if you got to this point
                        elif yoink > new: #we definitely passed it. it must be in the middle of the one before
                            diff = (baseAdr+otherhalf)-self.getSplitAdr(yamler[i-1])
                            #print(hex(otherhalf), hex(diff), hex(myself))
                            otherhalf -= diff
                            break
                    i += 1
            return vram+otherhalf
        else: return addr
    
    def disassemble_data(self, rom_bytes):
        assert isinstance(self.rom_start, int)
        assert isinstance(self.rom_end, int)
        assert isinstance(self.vram_start, int)

        gfx_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(gfx_data)
        if (segment_length) % 8 != 0:
            error(
                f"Error: gfx segment {self.name} length ({segment_length}) is not a multiple of 8!"
            )

        out_str = "" if self.data_only else options.opts.generated_c_preamble + "\n\n"

        sym = self.create_symbol(
            addr=self.vram_start, in_segment=True, type="data", define=True
        )

        gfxd_input_buffer(gfx_data)

        # TODO terrible guess at the size we'll need - improve this
        outb = bytes([0] * segment_length * 100)
        outbuf = gfxd_output_buffer(outb, len(outb))

        gfxd_target(self.get_gfxd_target())
        gfxd_endian(
            GfxdEndian.big if options.opts.endianness == "big" else GfxdEndian.little, 4
        )

        # Callbacks
        gfxd_macro_fn(self.macro_fn)

        gfxd_tlut_callback(self.tlut_handler)
        gfxd_timg_callback(self.timg_handler)
        gfxd_cimg_callback(self.cimg_handler)
        gfxd_zimg_callback(self.zimg_handler)
        gfxd_dl_callback(self.dl_handler)
        gfxd_mtx_callback(self.mtx_handler)
        gfxd_lookat_callback(self.lookat_handler)
        gfxd_light_callback(self.light_handler)
        # gfxd_seg_callback ?
        gfxd_vtx_callback(self.vtx_handler)
        gfxd_vp_callback(self.vp_handler)
        # gfxd_uctext_callback ?
        # gfxd_ucdata_callback ?
        # gfxd_dram_callback ?

        gfxd_execute()

        if self.data_only:
            out_str += gfxd_buffer_to_string(outbuf)
        else:
            out_str += "Gfx " + self.format_sym_name(sym) + "[] = {\n"
            out_str += gfxd_buffer_to_string(outbuf)
            out_str += "};\n"

        # Poor man's light fix until we get my libgfxd PR merged
        def light_sub_func(match):
            light = match.group(0)
            addr = int(light[12:], 0)
            sym = self.create_symbol(
                addr=self.getTrueAdr(addr), in_segment=self.in_segment, type="data", reference=True
            )
            return self.format_sym_name(sym)

        out_str = re.sub(LIGHTS_RE, light_sub_func, out_str)

        return out_str