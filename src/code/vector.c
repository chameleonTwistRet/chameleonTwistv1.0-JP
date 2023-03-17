#include "common.h"

// Auth: Rain, revo, simonlindholm
void DummiedPrintf3(char* arg0, ...) { /* variadic args: simonlindholm*/
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/func_800D747C.s")
// void func_800D747C(f32* arg0) {
//     if (*arg0 < 0.0) {
//         *arg0 = (*arg0 + 360.0);
//         return;
//     }

//     if (360.0 <= *arg0) {
//         *arg0 = (*arg0 - 360.0);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/func_800D74E0.s")
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/func_800D75B4.s")

void OnlyCheckPolyInfoLevel(unkB2860* arg0, s32 arg1, char* arg2) {
    if (arg0->unk_00 < arg1) {
        DummiedPrintf3(D_8011074C);
        DummiedPrintf3(D_8011077C, arg2);
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

Vec3f* ProjectOnPolygon(Vec3f* arg0, f32 arg1, f32 arg2, f32 arg3, unkB2860* arg4) {
    Vec3f sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    OnlyCheckPolyInfoLevel(arg4, 2, D_8011078C);
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

Vec3f* WorldToLocal(Vec3f* arg0, Vec3f arg1, unkB2860* arg4) {
    Vec3f sp1C;

    OnlyCheckPolyInfoLevel(arg4, 2, D_801107A0);
    arg1.x = arg1.x - arg4->unk_08;
    arg1.y = arg1.y - arg4->unk_0C;
    arg1.z = arg1.z - arg4->unk_10;
    sp1C.x = (arg4->unk_4C * arg1.z) + ((arg1.x * arg4->unk_44) + (arg1.y * arg4->unk_48));
    sp1C.y = (arg4->unk_58 * arg1.z) + ((arg1.x * arg4->unk_50) + (arg1.y * arg4->unk_54));
    sp1C.z = (arg4->unk_64 * arg1.z) + ((arg1.x * arg4->unk_5C) + (arg1.y * arg4->unk_60));
    *arg0 = sp1C;

    return arg0;
}

Vec3f* LocalToWorld(Vec3f* arg0, Vec3f arg1, unkB2860* arg4) {
    Vec3f sp1C;

    OnlyCheckPolyInfoLevel(arg4, 2, D_801107B0);
    sp1C.x = (arg4->unk_5C * arg1.z) + ((arg1.x * arg4->unk_44) + (arg1.y * arg4->unk_50));
    sp1C.y = (arg4->unk_60 * arg1.z) + ((arg1.x * arg4->unk_48) + (arg1.y * arg4->unk_54));
    sp1C.z = (arg4->unk_64 * arg1.z) + ((arg1.x * arg4->unk_4C) + (arg1.y * arg4->unk_58));
    sp1C.x += arg4->unk_08;
    sp1C.y += arg4->unk_0C;
    sp1C.z += arg4->unk_10;
    *arg0 = sp1C;
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/IsInsidePolygon.s")
// s32 IsInsidePolygon(Vec3f arg0, unkB2860* arg3) {
//     f32 temp_f0;
//     f32 temp_f2;

//     OnlyCheckPolyInfoLevel(arg3, 3, D_801107C0);
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

s32 IsOnPolygon(Vec3f arg0, unkB2860* arg3) {
    f32 dotProduct;
    
    OnlyCheckPolyInfoLevel(arg3, 2, D_801107D0);
    arg0.x -= arg3->unk_08;
    arg0.y -= arg3->unk_0C;
    arg0.z -= arg3->unk_10;
    
    dotProduct = arg0.z * arg3->unk_64 + (arg0.x * arg3->unk_5C + arg0.y * arg3->unk_60);
    if (dotProduct < -1.0) {
        return 0;
    }
    if (dotProduct > 1.0) {
        return 0;
    }
    return 1;
}

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
// refered to in  US1.0 as "Vector.c - IsNearPoint"
s32 IsNearPoint(Vec3f arg0, Vec3f arg3, f32 arg6) {
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

s32 Vec3f_Equals(Vec3f arg0, Vec3f arg3) {
    s32 ret;
    
    if ((arg0.x == arg3.x) && (arg0.y == arg3.y) && (arg0.z == arg3.z)) {
        ret = 1;
    } else {
        ret = 0;
    }
    
    return ret;
}

s32 Vec3f_EqualsCopy(Vec3f arg0, Vec3f arg3) {
    s32 ret;
    
    if ((arg0.x == arg3.x) && (arg0.y == arg3.y) && (arg0.z == arg3.z)) {
        ret = 1;
    } else {
        ret = 0;
    }
    
    return ret;
}


void Vec3f_Set(Vec3f* arg0, f32 arg1, f32 arg2, f32 arg3) {
    arg0->x = arg1;
    arg0->y = arg2;
    arg0->z = arg3;
}

void Vec3f_Zero(Vec3f* arg0) {
    arg0->x = 0.0f;
    arg0->y = 0.0f;
    arg0->z = 0.0f;
}
