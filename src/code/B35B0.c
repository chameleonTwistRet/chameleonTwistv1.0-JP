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
//vec3f lerp?
Vec3f* InterpolateVec3f(Vec3f* arg0, Vec3f arg1, Vec3f arg4, f32 arg7) {
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

void func_800D8338(Vec3f inputVec, f32* vectorLength, f32* theta, f32* verticalAngle) {
    f32 sqrtResult;

    *vectorLength = __sqrtf(SQ(inputVec.x) + SQ(inputVec.y) + SQ(inputVec.z));
    
    if (*vectorLength == 0.0) {
        *theta = 0.0f;
        *verticalAngle = 0.0f;
        return;
    } else {
        *theta = AngleFromArcSin(inputVec.y / *vectorLength);
        sqrtResult = __sqrtf(SQ(inputVec.z) + SQ(inputVec.x));
        
        if (sqrtResult == 0.0) {
            *verticalAngle = 0.0f;
            return;
        }
        
        *verticalAngle = AngleFromArcSin(inputVec.z / sqrtResult);
        
        if (inputVec.x < 0.0) {
            *verticalAngle = *verticalAngle * -1.0;
        }        
    }
}

//(radius, inclination, azimuth) -> (x, y, z)
Vec3f* CalculateSphericalToCartesian (Vec3f* arg0, f32 radius, f32 latitude, f32 longitude) {
    Vec3f cartesian_coords;
    Vec3f spherical_coords;

    spherical_coords.y = latitude * PI / 180.0;
    spherical_coords.z = __sinf(spherical_coords.y) * radius;
    spherical_coords.x = longitude * PI / 180.0;
    spherical_coords = spherical_coords;
    cartesian_coords.x = __sinf(spherical_coords.x) * spherical_coords.z;
    cartesian_coords.y = __cosf(spherical_coords.y) * radius;
    cartesian_coords.z = __cosf(spherical_coords.x) * spherical_coords.z;
    *arg0 = cartesian_coords;
    return arg0;
}

void func_800D8544(Vec3f arg0) {
    DummiedPrintf3("%7.1f %7.1f %7.1f ", arg0.x, arg0.y, arg0.z);
}