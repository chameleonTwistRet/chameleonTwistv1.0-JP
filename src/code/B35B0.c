#include "common.h"

// Vector Math (Probably the end of vector.c just spliced)

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

Vec3f* Vec3f_Lerp(Vec3f* outVec, Vec3f vecOne, Vec3f vecTwo, f32 scalar) {
    // returns a vector linearly interpolated between two input vectors
    Vec3f temp_vec;

    if ((scalar < 0.0f) || (scalar > 1.0f)) {
        DummiedPrintf3("?? ratio = %f\n", outVec, scalar);
    }
    
    temp_vec.x = ((1.0f - scalar) * vecOne.x) + (vecTwo.x * scalar);
    temp_vec.y = ((1.0f - scalar) * vecOne.y) + (vecTwo.y * scalar);
    temp_vec.z = ((1.0f - scalar) * vecOne.z) + (vecTwo.z * scalar);
    *outVec = temp_vec;
    return outVec;
}

void CartesianToSpherical(Vec3f inputVec, f32* radius, f32* theta, f32* phi) {
    f32 sqrtResult;

    *radius = __sqrtf(SQ(inputVec.x) + SQ(inputVec.y) + SQ(inputVec.z));
    
    if (*radius == 0.0) {
        *theta = 0.0f;
        *phi = 0.0f;
        return;
    } else {
        *theta = AngleFromArcSin(inputVec.y / *radius);
        sqrtResult = __sqrtf(SQ(inputVec.z) + SQ(inputVec.x));
        
        if (sqrtResult == 0.0) {
            *phi = 0.0f;
            return;
        }
        
        *phi = AngleFromArcSin(inputVec.z / sqrtResult);
        
        if (inputVec.x < 0.0) {
            *phi = *phi * -1.0;
        }        
    }
}

// spherical struct: x = r, y = theta, z = phi
Vec3f* SphericalToCartesian (Vec3f* inputVec, f32 radius, f32 theta, f32 phi) {
    // y = r*cos(theta) since y is height here
    // therefore, z = r*sin(theta)*sin(phi) and x = r*sin(theta)*cos(phi)
    Vec3f cartesian_coords;
    Vec3f spherical_coords;

    spherical_coords.y = DEGREES_TO_RADIANS_PI(theta);
    spherical_coords.z = __sinf(spherical_coords.y) * radius;
    spherical_coords.x = DEGREES_TO_RADIANS_PI(phi);
    spherical_coords = spherical_coords;
    cartesian_coords.x = __sinf(spherical_coords.x) * spherical_coords.z;
    cartesian_coords.y = __cosf(spherical_coords.y) * radius;
    cartesian_coords.z = __cosf(spherical_coords.x) * spherical_coords.z;
    *inputVec = cartesian_coords;
    return inputVec;
}

void PrintVec(Vec3f v) {
    DummiedPrintf3("%7.1f %7.1f %7.1f ", v.x, v.y, v.z);
}