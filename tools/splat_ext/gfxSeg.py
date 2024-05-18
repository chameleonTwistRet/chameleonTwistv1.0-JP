#workaround for seg2virtual until we get something reasonably better
import os

"""
Because segmented addresses mess up symbol generaton,
this custom segtype aims to fix that.
At least by fixing vtx's.
"""

rangeStarter = 0x80129730
animSlots = 40

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
from splat.segtypes.segment import Segment

from splat.util import log, options, symbols
from splat.util.log import error

from splat.segtypes.n64.gfx import N64SegGfx


LIGHTS_RE = re.compile(r"\*\(Lightsn \*\)0x[0-9A-F]{8}")

class N64SegGfxSeg(N64SegGfx):
    groupName = ""

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.gfx.inc.c"
    
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


            #Do fixed check first
            addr = self.getTrueAdr(addr)
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, "Light")
            if not sym:
                #Do legacy check next, for compatability
                splitAdr = self.getTrueAdr(addr, True)
                addr = self.getTrueAdr(addr)
                sym = self.retrieve_sym_type(symbols.all_symbols_dict, splitAdr, "Light")
                if not sym:
                    sym = self.create_symbol(
                        addr=splitAdr,
                        in_segment=self.in_segment,
                        type="Light",
                        reference=True,
                        search_ranges=True,
                    )

            return self.format_sym_name(sym)

        out_str = re.sub(LIGHTS_RE, light_sub_func, out_str)

        return out_str
    
    def tlut_handler(self, addr, idx, count):
        #Do fixed check first
        addr = self.getTrueAdr(addr)
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, "TLut")
        if not sym:
            #Do legacy check next, for compatability
            splitAdr = self.getTrueAdr(addr, True)
            addr = self.getTrueAdr(addr)
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, splitAdr, "TLut")
            if not sym:
                sym = self.create_symbol(
                    addr=splitAdr,
                    in_segment=self.in_segment,
                    type="TLut",
                    reference=True,
                    search_ranges=True,
                )
        gfxd_printf(self.format_sym_name(sym))
        return 1

    #ci image
    def timg_handler(self, addr, fmt, size, width, height, pal):
        #Do fixed check first
        addr = self.getTrueAdr(addr)
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, "TImg")
        if not sym:
            #Do legacy check next, for compatability
            splitAdr = self.getTrueAdr(addr, True)
            addr = self.getTrueAdr(addr)
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, splitAdr, "TImg")
            if not sym:
                sym = self.create_symbol(
                    addr=splitAdr,
                    in_segment=self.in_segment,
                    type="TImg",
                    reference=True,
                    search_ranges=True,
                )
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
    
    #Gfx
    def dl_handler(self, addr):
        #Do fixed check first
        addr = self.getTrueAdr(addr)
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, "Gfx")
        if not sym:
            #Do legacy check next, for compatability
            splitAdr = self.getTrueAdr(addr, True)
            addr = self.getTrueAdr(addr)
            sym = self.retrieve_sym_type(symbols.all_symbols_dict, splitAdr, "Gfx")
            if not sym:
                sym = self.create_symbol(
                    addr=splitAdr,
                    in_segment=self.in_segment,
                    type="Gfx",
                    reference=True,
                    search_ranges=True,
                )

        gfxd_printf(self.format_sym_name(sym))
        return 1

    def mtx_handler(self, addr):
        use = ""
        sym = self.retrieve_sym_type(symbols.all_symbols_dict, addr, "Mtx")
        if not sym:
            #animslot check
            if addr >= rangeStarter and addr < rangeStarter + (animSlots * 0x40):
                index = int((addr - rangeStarter)/0x40)
                use = f"&AnimationSlots[{index}]"
            else:
                print("guh")
        else:
            use = f"&{self.format_sym_name(sym)}"
        gfxd_printf(use)
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
        args = ("0x"+(line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
        if line.find("[") != -1:
            for a in range(len(args)): args[a] = args[a].strip()
        elif line.find("{") != -1:
            for a in range(len(args)): args[a] = args[a].replace("type: ", "").replace("name: ", "").strip()
        return int(args[0],16)

    def getTrueAdr(self, addr, split=False):
        if len(hex(addr)) <= 7 + 2:#SPECIFICALLY at the start
            yamlPath = os.getcwd()+"/chameleontwist.jp.yaml"
            yamler = open(yamlPath, "r", encoding="utf-8").readlines()
            index = hex((addr & 0x0F000000) >> 24).replace("0x", "0x0")
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
                elif mode == 1: #go backwards until you find a rom start
                    if yamler[i].find("SEGMENT "+index):
                        for back in range(0,5):
                            line = yamler[i - back]
                            if line.startswith("  - start: ") and baseAdr == 0x0:
                                baseAdr = int(line.split(": ")[1].split("#")[0].strip(),16)
                            elif line.startswith("    name: ") and self.groupName == "":
                                self.groupName = line.split(": ")[1].split("#")[0].strip()
                            if baseAdr != 0x0 and self.groupName != "": break
                    if baseAdr != 0x0:
                        new = baseAdr+otherhalf
                        if not split: break
                        mode = 2
                    i -= 1
                elif mode == 2: #try and find the asset in which you are calling for
                    #the only reason this mode exists is because vtx's have a bad habit of being called a specific distance into themselves, making this all worthless
                    if yamler[i].find("-") != -1 and yamler[i].find("0x") != -1:
                        yoink = self.getSplitAdr(yamler[i])
                        if yoink == new: break #is a valid split; wouldve been generated in symbol_addrs if you got to this point
                        elif yoink > new: #we definitely passed it. it must be in the middle of the one before
                            diff = (baseAdr+otherhalf)-self.getSplitAdr(yamler[i-1])
                            #print(hex(otherhalf), hex(diff), hex(myself))
                            otherhalf -= diff
                            break
                    i += 1
            return int(index+"000000",16)+otherhalf
        else: return addr