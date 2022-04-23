#include "common.h"

s32 __osSyncVPrintf(s32 arg0, s32 arg1, s32 arg2) {
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libc/syncprintf/osSyncPrintf.s")
