#include "common.h"

void func_800DB98C(void);
void __osSiGetAccess(void);
void __osSiRelAccess(void);
s32 func_800E0ED0(s32, s32*);
extern s32 D_8024B100[];
extern s32 D_8024B13C;
extern u8 D_8024B140;

s32 osContStartReadData(OSMesgQueue* arg0) {
    s32 sp1C = 0;
    s32 i;

    __osSiGetAccess();
    
    if (D_8024B140 != 1) {
        func_800DB98C();
        sp1C = func_800E0ED0(1, D_8024B100);
        osRecvMesg(arg0, NULL, OS_MESG_BLOCK);
    }
    
    for (i = 0; i < 16; i++) {
        D_8024B100[i] = 0xFF;
    }

    D_8024B13C = 0;
    sp1C = func_800E0ED0(0, D_8024B100);
    D_8024B140 = 1;
    __osSiRelAccess();
    return sp1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/io/contreaddata/osContGetReadData.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/contreaddata/func_800DB98C.s")
