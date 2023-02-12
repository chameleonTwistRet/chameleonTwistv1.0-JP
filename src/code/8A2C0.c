#include "common.h"

void func_800AF2A4(f32, f32, f32, f32, s32);
void func_800AEEC0(s32, f32, f32);

#pragma GLOBAL_ASM("asm/nonmatchings/code/8A2C0/func_800AEEC0.s")

void func_800AF260(s32 arg0, f32 arg1) {
    func_800AEEC0(arg0, (arg1 + 20.0), 300.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8A2C0/func_800AF2A4.s")

void func_800AF604(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_800AF2A4(arg0, arg1, arg2, arg3, 0);
}

void func_800AF62C(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_800AF2A4(arg0, arg1, arg2, arg3, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8A2C0/func_800AF658.s")
