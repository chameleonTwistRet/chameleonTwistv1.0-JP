#include "common.h"
void func_800DA8C0(void);
void func_800DA7C0(unktemp*, s32);
//needs -O3 to match

#pragma GLOBAL_ASM("asm/nonmatchings/B5E30/func_800DAA30.s")

// void func_800DAA30(unktemp* arg0, f32 arg1, f32 arg2, f32 arg3) {
//     func_800DA8C0();
//     arg0->unk_00 = arg1;
//     arg0->unk_14 = arg2;
//     arg0->unk_28 = arg3;
//     arg0->unk_3C = 1.0f;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/B5E30/func_800DAA84.s")
// void func_800DAA84(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
//     unktemp sp18;

//     func_800DAA30(&sp18, arg1, arg2, arg3);
//     func_800DA7C0(&sp18, arg0);
// }
