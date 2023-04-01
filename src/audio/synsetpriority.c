#include "common.h"

//#pragma GLOBAL_ASM("asm/nonmatchings/audio/synsetpriority/func_800ED330.s")
typedef struct temp_func_800ED330 {
    char unk0[0x16];
    s16 unk16;
} temp_func_800ED330;

void func_800ED330(s32 arg0, temp_func_800ED330* arg1, s16 arg2) {
    arg1->unk16 = arg2;
}
