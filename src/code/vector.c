#include "common.h"

// Auth: Rain, revo, simonlindholm
void DummiedPrintf3(char* arg0, ...) { /* variadic args: simonlindholm*/
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/NormalizeAngle.s")
// void NormalizeAngle(f32* arg0) {
//     if (*arg0 < 0.0) {
//         *arg0 = (*arg0 + 360.0);
//         return;
//     }

//     if (360.0 <= *arg0) {
//         *arg0 = (*arg0 - 360.0);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/CompareNormalizedAngles.s")
// s32 CompareNormalizedAngles(f32 arg0, f32 arg1) {
//     s32 ret;
    
//     NormalizeAngle(&arg0);
//     NormalizeAngle(&arg1);
    
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

void OnlyCheckPolyInfoLevel(Poly* arg0, s32 arg1, char* arg2) {
    if (arg0->unk_00 < arg1) {
        DummiedPrintf3(D_8011074C);
        DummiedPrintf3(D_8011077C, arg2);
    }
}

void func_800D79E4(Poly* arg0, s32 arg1) {
    s32 i = arg0->unk_00 + 1;
    if (arg0->unk_00 < arg1) {
        for (; arg1 >= i; i++) {
            func_800D75B4(arg0, i);
        }        
    }
}

Vec3f* ProjectOnPolygon(Vec3f* vec, f32 pointX, f32 pointY, f32 pointZ, Poly* arg4) {
    Vec3f vec_proj;
    f32 v0x;
    f32 dotProduct;
    f32 dist;
    f32 v0z;

    OnlyCheckPolyInfoLevel(arg4, 2, D_8011078C);
    v0x = arg4->x;
    v0z = arg4->x2;
    dotProduct = (arg4->z * pointZ) + ((pointX * v0x) + (pointY * arg4->y));
    dist = (arg4->z2 * pointZ) + ((pointX * v0z) + (pointY * arg4->y2));
    vec_proj.x = (v0z * dist) + (dotProduct * v0x);
    vec_proj.y = (arg4->y2 * dist) + (dotProduct * arg4->y);
    vec_proj.z = (arg4->z2 * dist) + (dotProduct * arg4->z);
    *vec = vec_proj;
    return vec;
}

Vec3f* WorldToLocal(Vec3f* outVec, Vec3f vec, Poly* poly) {
    // Take P to be a matrix with the columns being the x, y, and z vectors of the poly struct
    // P(v) = outVec, where v is the input vector agter being translated by an offset vector
    Vec3f temp_vec;
 
    OnlyCheckPolyInfoLevel(poly, 2, D_801107A0);
    vec.x = vec.x - poly->offset_x;
    vec.y = vec.y - poly->offset_y;
    vec.z = vec.z - poly->offset_z;
    temp_vec.x = (poly->z * vec.z) + ((vec.x * poly->x) + (vec.y * poly->y));
    temp_vec.y = (poly->z2 * vec.z) + ((vec.x * poly->x2) + (vec.y * poly->y2));
    temp_vec.z = (poly->z3 * vec.z) + ((vec.x * poly->x3) + (vec.y * poly->y3));
    *outVec = temp_vec;

    return outVec;
}

Vec3f* LocalToWorld(Vec3f* outVec, Vec3f vec, Poly* poly) {
    Vec3f temp_vec;

    OnlyCheckPolyInfoLevel(poly, 2, D_801107B0);
    temp_vec.x = (poly->x3 * vec.z) + ((vec.x * poly->x) + (vec.y * poly->x2));
    temp_vec.y = (poly->y3 * vec.z) + ((vec.x * poly->y) + (vec.y * poly->y2));
    temp_vec.z = (poly->z3 * vec.z) + ((vec.x * poly->z) + (vec.y * poly->z2));
    temp_vec.x += poly->offset_x;
    temp_vec.y += poly->offset_y;
    temp_vec.z += poly->offset_z;
    *outVec = temp_vec;
    return outVec;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/IsInsidePolygon.s")
// s32 IsInsidePolygon(Vec3f arg0, Poly* arg3) {
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

s32 IsOnPolygon(Vec3f vec, Poly* arg3) {
    f32 dotProduct;
    
    OnlyCheckPolyInfoLevel(arg3, 2, D_801107D0);
    vec.x -= arg3->offset_x;
    vec.y -= arg3->offset_y;
    vec.z -= arg3->offset_z;
    
    dotProduct = vec.z * arg3->z3 + (vec.x * arg3->x3 + vec.y * arg3->y3);
    if (dotProduct < -1.0) {
        return 0;
    }
    if (dotProduct > 1.0) {
        return 0;
    }
    return 1;
}

Vec3f* RotateVector3D(Vec3f* outVec, Vec3f inpVec, f32 theta, s32 rotateAroundAxesIndex) {
    #define NO_ROTATION 0
    #define X_ROTATION 1
    #define Y_ROTATION 2
    #define Z_ROTATION 3
    Vec3f temp_vec;
    f32 sin;
    f32 cos;

    sin = __sinf(theta);
    cos = __cosf(theta);
    switch (rotateAroundAxesIndex) {
    case NO_ROTATION:
        temp_vec = inpVec;
        break;
    case X_ROTATION:
        temp_vec.x = inpVec.x;
        temp_vec.y = (cos * inpVec.y) - (sin * inpVec.z);
        temp_vec.z = (sin * inpVec.y) + (cos * inpVec.z);
        break;
    case Y_ROTATION:
        temp_vec.y = inpVec.y;
        temp_vec.x = (sin * inpVec.z) + (cos * inpVec.x);
        temp_vec.z = (cos * inpVec.z) - (sin * inpVec.x);
        break;
    case Z_ROTATION:
        temp_vec.z = inpVec.z;
        temp_vec.x = (cos * inpVec.x) - (sin * inpVec.y);
        temp_vec.y = (sin * inpVec.x) + (cos * inpVec.y);
        break;
    }
    
    *outVec = temp_vec;
    return outVec;
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
    
    if (__sqrtf((SQ(temp_f0)) + (SQ(temp_f2)) + (SQ(temp_f14))) < arg6) {
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

s32 Vec3f_Equals(Vec3f arg0, Vec3f arg3) {
    return ((arg0.x == arg3.x) && (arg0.y == arg3.y) && (arg0.z == arg3.z)) ? 1 : 0;
}

s32 Vec3f_EqualsCopy(Vec3f vec1, Vec3f vec2) {
    return ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z)) ? 1 : 0;
}


void Vec3f_Set(Vec3f* vec, f32 x, f32 y, f32 z) {
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

void Vec3f_Zero(Vec3f* vec) {
    vec->x = 0.0f;
    vec->y = 0.0f;
    vec->z = 0.0f;
}