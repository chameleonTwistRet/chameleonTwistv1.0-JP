#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code/A3D00/func_800C8900.s")
/* NEEDS PERMUTING
s32 func_800C8900(s32 arg0, s32 arg1) {
    s32 phi_v1;

    if (D_80100FD0 != 0) {
        phi_v1 = (s32) (((f32) ((arg1 - arg0) + 1) * ((f32) ((s32) (D_801FCA10 * 0x101) % 65535) / D_80110100)) + (f32) arg0);
    } else {
        phi_v1 = (s32) (((f32) ((arg1 - arg0) + 1) * ((f32) (func_800E0A70() % 65535) / D_80110104)) + (f32) arg0);
    }
    return phi_v1;
}

*/

#pragma GLOBAL_ASM("asm/nonmatchings/code/A3D00/func_800C89E8.s")
/*
f32 func_800C89E8(void) {
    return (f32) func_800C8900(0, 0xFFFF) / D_80110108;    //Max 2bytes
}
*/

#pragma GLOBAL_ASM("asm/nonmatchings/code/A3D00/func_800C8A1C.s")

//Fully compiles on decompme
/*f32 func_800C8A1C(f32 x) {  // Get Tan(x)
    f32 sin_x;
    f32 cos_x;
    f32 tan_x;

    sin_x = sinf(x);
    cos_x = cosf(x);
    if (cos_x == 0.0) {
        tan_x = 0.0f;       // Return 0 if tan is undefined
    } else {
        tan_x = sin_x / cos_x;
    }
    return tan_x;
}*/



#pragma GLOBAL_ASM("asm/nonmatchings/code/A3D00/func_800C8A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/A3D00/func_800C8BE4.s")
/*
extern f64 D_80110120;
f32 func_800C8BE4(void) {
    return (f32) (D_80110120 - (f64) func_800C8A78());
}
*/

#pragma GLOBAL_ASM("asm/nonmatchings/code/A3D00/func_800C8C14.s")
