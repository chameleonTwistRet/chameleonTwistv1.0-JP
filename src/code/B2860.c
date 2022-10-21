#include "common.h"
//AOF=22

// Auth: Rain, revo, simonlindholm
void func_800D7460(s32 arg0, ...) { /* variadic args: simonlindholm*/
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D747C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D74E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D75B4.s")

void func_800D799C(s32* arg0, s32 arg1, s32 arg2) {
    if (*arg0 < arg1) {
        func_800D7460((s32) &D_8011074C);
        func_800D7460((s32) &D_8011077C, arg2);
    }
}

void func_800D79E4(s32* arg0, s32 arg1) {
    s32 i = *arg0 + 1;
    if (*arg0 < arg1) {
        for (; arg1 >= i; i++) {
            func_800D75B4(arg0, i);
        }        
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7A4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D80B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8114.s")

void func_800D8178(Vec3f* arg0, f32 arg1, f32 arg2, f32 arg3) {
    arg0->x = arg1;
    arg0->y = arg2;
    arg0->z = arg3;
}

void func_800D8198(Vec3f* arg0) {
    arg0->x = 0.0f;
    arg0->y = 0.0f;
    arg0->z = 0.0f;
}

f32 func_800D81B0(Vec3f* arg0) {
    f32 temp_f0 = __sqrtf((arg0->x * arg0->x) + (arg0->y * arg0->y) + (arg0->z * arg0->z));
    if (temp_f0 == 0.0f) {
        func_800D8198(arg0);
    } else {
        arg0->x = (f32) (arg0->x / temp_f0);
        arg0->y = (f32) (arg0->y / temp_f0);
        arg0->z = (f32) (arg0->z / temp_f0);
    }
    return temp_f0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8544.s")
