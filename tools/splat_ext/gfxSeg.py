from segtypes.n64.gfx import N64SegGfx
import os
#workaround for seg2virtual until we get something reasonably better

class N64SegGfxSeg(N64SegGfx):
    def format_sym_name(self, sym):
        if sym.name.find("D_") != -1:
            new = os.getcwd()+"/chameleontwist.jp.yaml"
            yamler = open(new, "r", encoding="utf-8").readlines()
            segAdr = int(sym.name.split("_")[1], 16)
            #index = (segAdr & 0x0F000000) >> 24
            otherhalf = segAdr & ~0x0F000000
            myself = hex(self.rom_start)
            i = 0
            mode = 0
            get = 0x0
            while i < len(yamler):
                if mode == 0: #find the split the gfx came from
                    if yamler[i].lower().find(myself) != -1:
                        mode = 1
                    i += 1
                elif mode == 1: #go backwards until you find a vram
                    if yamler[i].find("vram:") != -1:
                        get = int(yamler[i].split(":")[1].split("#")[0], 16)
                        break
                    i -= 1
            #get should now be the vram of the group, therefore:
            sym = self.create_symbol(addr=get+otherhalf, in_segment=self.in_segment, type="data", reference=True)
        return sym.name