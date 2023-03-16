#include "common.h"


f32 Vec3f_Normalize(Vec3f* arg0) {
    f32 temp_f0 = __sqrtf((arg0->x * arg0->x) + (arg0->y * arg0->y) + (arg0->z * arg0->z));
    if (temp_f0 == 0.0f) {
        Vec3f_Zero(arg0);
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
        DummiedPrintf3("?? ratio = %f\n", arg0, arg7);
    }
    
    sp1C.x = ((1.0f - arg7) * arg1.x) + (arg4.x * arg7);
    sp1C.y = ((1.0f - arg7) * arg1.y) + (arg4.y * arg7);
    sp1C.z = ((1.0f - arg7) * arg1.z) + (arg4.z * arg7);
    *arg0 = sp1C;
    return arg0;
}

void func_800D8338(Vec3f arg0, f32* arg3, f32* arg4, f32* arg5) {
    f32 sqrtResult;

    *arg3 = __sqrtf(SQ(arg0.x) + SQ(arg0.y) + SQ(arg0.z));
    
    if (*arg3 == 0.0) {
        *arg4 = 0.0f;
        *arg5 = 0.0f;
        return;
    } else {
        *arg4 = func_800C8BE4(arg0.y / *arg3);
        sqrtResult = __sqrtf(SQ(arg0.z) + SQ(arg0.x));
        
        if (sqrtResult == 0.0) {
            *arg5 = 0.0f;
            return;
        }
        
        *arg5 = func_800C8BE4(arg0.z / sqrtResult);
        
        if (arg0.x < 0.0) {
            *arg5 = *arg5 * -1.0;
        }        
    }
}

Vec3f* func_800D8468(Vec3f* arg0, f32 arg1, f32 arg2, f32 arg3) {
    Vec3f sp24;
    Vec3f sp18;

    sp18.y = arg2 * 3.141592653589793 / 180.0;
    sp18.z = __sinf(sp18.y) * arg1;
    sp18.x = arg3 * 3.141592653589793 / 180.0;
    sp18 = sp18;
    sp24.x = __sinf(sp18.x) * sp18.z;
    sp24.y = __cosf(sp18.y) * arg1;
    sp24.z = __cosf(sp18.x) * sp18.z;
    *arg0 = sp24;
    return arg0;
}

void func_800D8544(Vec3f arg0) {
    DummiedPrintf3("%7.1f %7.1f %7.1f ", arg0.x, arg0.y, arg0.z);
}