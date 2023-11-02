// Vector Math (Probably the end of vector.c just spliced)
#include "common.h"

/**  
 * @brief Normalizes the input vector then returns its norm.
 *  
 * @param[in,out] vec: pointer to the vector to be normalized
 * 
 * @return (f32) the norm of the input vector 
 */
f32 Vec3f_Normalize(Vec3f* vec) {
    f32 norm = NORM_3(vec->x,vec->y,vec->z);
    if (norm == 0.0f) { 
        Vec3f_Zero(vec);                    // if the norm is 0, then we cannot divide by it
    } else {
        vec->x = (f32) (vec->x / norm);
        vec->y = (f32) (vec->y / norm);
        vec->z = (f32) (vec->z / norm);
    }
    return norm;
}

/**
 * @brief Linearly interpolates between two input vectors.
 *      
 * @param[in,out]  outVec:     pointer to the output vector
 * @param          vecOne:     first input vector
 * @param          vecTwo:     second input vector
 * @param          scalar:     scalar value to interpolate between the two vectors
 * 
 * @return (Vec3f) pointer to the output vector
 */
Vec3f* Vec3f_Lerp(Vec3f* outVec, Vec3f vecOne, Vec3f vecTwo, f32 scalar) {
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

/**
 * @brief Converts a cartesian vector to spherical coordinates.
 * 
 * @param          inputVec:   input vector
 * @param[in,out]  radius:     pointer to the radius of the spherical coordinate
 * @param[in,out]  theta:      pointer to the theta of the spherical coordinate
 * @param[in,out]  phi:        pointer to the phi of the spherical coordinate
 */
void CartesianToSpherical(Vec3f inputVec, f32* radius, f32* theta, f32* phi) {
    f32 sqrtResult;

    *radius = NORM_3(inputVec.x,inputVec.y,inputVec.z);
    
    if (*radius == 0.0) {
        *theta = 0.0f;
        *phi = 0.0f;
        return;
    } else {
        *theta = AngleFromArcSin(inputVec.y / *radius);
        sqrtResult = NORM_2(inputVec.z,inputVec.x);
        
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

/**
 * @brief SphericalToCartesian: Converts a spherical vector to cartesian coordinates
 * 
 * @param[in,out]  inputVec:   pointer to the vector
 * @param          radius:     radius of the spherical coordinate
 * @param          theta:      theta of the spherical coordinate
 * @param          phi:        phi of the spherical coordinate
 * 
 * @return (Vec3f) pointer to the vector
 */
Vec3f* SphericalToCartesian (Vec3f* inputVec, f32 radius, f32 theta, f32 phi) {
    Vec3f cartesian_coords;
    Vec3f spherical_coords;                                                     // spherical 'vector' struct: x = r, y = theta, z = phi

    spherical_coords.y = DEGREES_TO_RADIANS_PI(theta);
    spherical_coords.z = __sinf(spherical_coords.y) * radius;
    spherical_coords.x = DEGREES_TO_RADIANS_PI(phi);
    spherical_coords = spherical_coords;
    cartesian_coords.x = __sinf(spherical_coords.x) * spherical_coords.z;       // x = r*sin(theta)*cos(phi)
    cartesian_coords.y = __cosf(spherical_coords.y) * radius;                   // y = r*cos(theta) since y is height here
    cartesian_coords.z = __cosf(spherical_coords.x) * spherical_coords.z;       // z = r*sin(theta)*sin(phi)
    *inputVec = cartesian_coords;
    return inputVec;
}

/**
 * @brief Prints a vector to the console.
 * 
 * @param v: vector to print
 */
void Vec3f_Print(Vec3f v) {
    DummiedPrintf3("%7.1f %7.1f %7.1f ", v.x, v.y, v.z);
}