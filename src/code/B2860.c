#include "common.h"
//AOF=22

extern char D_8011078C[];
extern char D_801107A0[];
extern char D_801107B0[];
extern char D_801107C0[];
extern char D_80110820[];
extern char D_80110830[];

// Auth: Rain, revo, simonlindholm
void func_800D7460(char* arg0, ...) { /* variadic args: simonlindholm*/
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D747C.s")
// void func_800D747C(f32* arg0) {
//     if (*arg0 < 0.0) {
//         *arg0 = (*arg0 + 360.0);
//         return;
//     }

//     if (360.0 <= *arg0) {
//         *arg0 = (*arg0 - 360.0);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D74E0.s")
// s32 func_800D74E0(f32 arg0, f32 arg1) {
//     s32 ret;
    
//     func_800D747C(&arg0);
//     func_800D747C(&arg1);
    
//     if (arg0 == arg1) {
//         ret = 0;
//     } else {
//         if (arg0 < 180.0) {
//             if ((arg0 < arg1) && (arg1 <= (arg0 + 180.0))) {
//                 ret = 1;
//             } else {
//                 ret = -1;
//             }
//         } else {
//             if (((arg0 - 180.0) < arg1) && (arg1 <= arg0)) {
//                 ret = -1;
//             } else {
//                 ret = 1;
//             }
//         }
//     }

//     return ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D75B4.s")

void func_800D799C(unkB2860* arg0, s32 arg1, char* arg2) {
    if (arg0->unk_00 < arg1) {
        func_800D7460(D_8011074C);
        func_800D7460(D_8011077C, arg2);
    }
}

void func_800D79E4(unkB2860* arg0, s32 arg1) {
    s32 i = arg0->unk_00 + 1;
    if (arg0->unk_00 < arg1) {
        for (; arg1 >= i; i++) {
            func_800D75B4(arg0, i);
        }        
    }
}

Vec3f* func_800D7A4C(Vec3f* arg0, f32 arg1, f32 arg2, f32 arg3, unkB2860* arg4) {
    Vec3f sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    func_800D799C(arg4, 2, D_8011078C);
    temp_f0 = arg4->unk_44;
    temp_f2 = arg4->unk_50;
    temp_f12 = (arg4->unk_4C * arg3) + ((arg1 * temp_f0) + (arg2 * arg4->unk_48));
    temp_f14 = (arg4->unk_58 * arg3) + ((arg1 * temp_f2) + (arg2 * arg4->unk_54));
    sp2C.x = (temp_f2 * temp_f14) + (temp_f12 * temp_f0);
    sp2C.y = (arg4->unk_54 * temp_f14) + (temp_f12 * arg4->unk_48);
    sp2C.z = (arg4->unk_58 * temp_f14) + (temp_f12 * arg4->unk_4C);
    *arg0 = sp2C;
    return arg0;
}

Vec3f* func_800D7B44(Vec3f* arg0, Vec3f arg1, unkB2860* arg4) {
    Vec3f sp1C;

    func_800D799C(arg4, 2, D_801107A0);
    arg1.x = arg1.x - arg4->unk_08;
    arg1.y = arg1.y - arg4->unk_0C;
    arg1.z = arg1.z - arg4->unk_10;
    sp1C.x = (arg4->unk_4C * arg1.z) + ((arg1.x * arg4->unk_44) + (arg1.y * arg4->unk_48));
    sp1C.y = (arg4->unk_58 * arg1.z) + ((arg1.x * arg4->unk_50) + (arg1.y * arg4->unk_54));
    sp1C.z = (arg4->unk_64 * arg1.z) + ((arg1.x * arg4->unk_5C) + (arg1.y * arg4->unk_60));
    *arg0 = sp1C;

    return arg0;
}

Vec3f* func_800D7C3C(Vec3f* arg0, Vec3f arg1, unkB2860* arg4) {
    Vec3f sp1C;

    func_800D799C(arg4, 2, D_801107B0);
    sp1C.x = (arg4->unk_5C * arg1.z) + ((arg1.x * arg4->unk_44) + (arg1.y * arg4->unk_50));
    sp1C.y = (arg4->unk_60 * arg1.z) + ((arg1.x * arg4->unk_48) + (arg1.y * arg4->unk_54));
    sp1C.z = (arg4->unk_64 * arg1.z) + ((arg1.x * arg4->unk_4C) + (arg1.y * arg4->unk_58));
    sp1C.x += arg4->unk_08;
    sp1C.y += arg4->unk_0C;
    sp1C.z += arg4->unk_10;
    *arg0 = sp1C;
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7D3C.s")
// s32 func_800D7D3C(Vec3f arg0, unkB2860* arg3) {
//     f32 temp_f0;
//     f32 temp_f2;

//     func_800D799C(arg3, 3, D_801107C0);
//     temp_f0 = (arg3->unk_74 * arg0.y) + (arg3->unk_6C * arg0.x);
//     temp_f2 = (arg3->unk_78 * arg0.y) + (arg3->unk_70 * arg0.x);
//     if (temp_f0 < -0.0001) {
//         return 0;
//     }
//     if (temp_f2 < -0.0001) {
//         return 0;
//     }
//     if (1.0001 < (temp_f0 + temp_f2)) {
//         return 0;
//     }
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D7E10.s")

Vec3f* func_800D7EE0(Vec3f* arg0, Vec3f arg1, f32 arg4, s32 arg5) {
    Vec3f sp24;
    f32 sin;
    f32 cos;

    sin = __sinf(arg4);
    cos = __cosf(arg4);
    switch (arg5) {
    case 0:
        sp24 = arg1;
        break;
    case 1:
        sp24.x = arg1.x;
        sp24.y = (cos * arg1.y) - (sin * arg1.z);
        sp24.z = (sin * arg1.y) + (cos * arg1.z);
        break;
    case 2:
        sp24.y = arg1.y;
        sp24.x = (sin * arg1.z) + (cos * arg1.x);
        sp24.z = (cos * arg1.z) - (sin * arg1.x);
        break;
    case 3:
        sp24.z = arg1.z;
        sp24.x = (cos * arg1.x) - (sin * arg1.y);
        sp24.y = (sin * arg1.x) + (cos * arg1.y);
        break;
    }
    
    *arg0 = sp24;
    return arg0;

}

s32 func_800D8030(Vec3f arg0, Vec3f arg3, f32 arg6) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    s32 ret;

    temp_f0 = arg0.x - arg3.x;
    temp_f2 = arg0.y - arg3.y;
    temp_f14 = arg0.z - arg3.z;
    
    if (__sqrtf((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f14 * temp_f14)) < arg6) {
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

s32 func_800D80B0(Vec3f arg0, Vec3f arg3) {
    s32 ret;
    
    if ((arg0.x == arg3.x) && (arg0.y == arg3.y) && (arg0.z == arg3.z)) {
        ret = 1;
    } else {
        ret = 0;
    }
    
    return ret;
}

s32 func_800D8114(Vec3f arg0, Vec3f arg3) {
    s32 ret;
    
    if ((arg0.x == arg3.x) && (arg0.y == arg3.y) && (arg0.z == arg3.z)) {
        ret = 1;
    } else {
        ret = 0;
    }
    
    return ret;
}


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

Vec3f* func_800D8244(Vec3f* arg0, Vec3f arg1, Vec3f arg4, f32 arg7) {
    Vec3f sp1C;

    if ((arg7 < 0.0f) || (arg7 > 1.0f)) {
        func_800D7460(D_80110820, arg0, arg7);
    }
    
    sp1C.x = ((1.0f - arg7) * arg1.x) + (arg4.x * arg7);
    sp1C.y = ((1.0f - arg7) * arg1.y) + (arg4.y * arg7);
    sp1C.z = ((1.0f - arg7) * arg1.z) + (arg4.z * arg7);
    *arg0 = sp1C;
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8338.s")
// void func_800D8338(Vec3f arg0, f32* arg3, f32* arg4, f32* arg5) {
//     f32 sqrtResult;

//     *arg3 = __sqrtf(SQ(arg0.x) + SQ(arg0.y) + SQ(arg0.z));
    
//     if (*arg3 == 0.0) {
//         *arg4 = 0.0f;
//         *arg5 = 0.0f;
//         return;
//     } else {
//         *arg4 = func_800C8BE4(arg0.y / *arg3);
//         sqrtResult = __sqrtf(SQ(arg0.z) + SQ(arg0.x));
        
//         if (sqrtResult == 0.0) {
//             *arg5 = 0.0f;
//             return;
//         }
        
//         *arg5 = func_800C8BE4(arg0.z / sqrtResult);
        
//         if (arg0.x < 0.0) {
//             *arg5 = *arg5 * -1.0;
//         }        
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/B2860/func_800D8468.s")
// Vec3f* func_800D8468(Vec3f* arg0, f32 arg1, f32 arg2, f32 arg3) {
//     Vec3f sp24;
//     Vec3f sp18;

//     sp18.y = arg2 * 3.141592653589793 / 180.0;
//     sp18.z = __sinf(sp18.y) * arg1;
//     sp18.x = arg3 * 3.141592653589793 / 180.0;
//     sp18 = sp18;
//     sp24.x = __sinf(sp18.x) * sp18.z;
//     sp24.y = __cosf(sp18.y) * arg1;
//     sp24.z = __cosf(sp18.x) * sp18.z;
//     *arg0 = sp24;
//     return arg0;
// }

void func_800D8544(Vec3f arg0) {
    func_800D7460(D_80110830, arg0.x, arg0.y, arg0.z);
}
