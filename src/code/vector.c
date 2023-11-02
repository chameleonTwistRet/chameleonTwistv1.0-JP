#include "common.h"

// Auth: Rain, revo, simonlindholm
void DummiedPrintf3(char* arg0, ...) { /* variadic args: simonlindholm*/
}

/**
 * @brief Wraps an angle to the range [0, 360).
 * @param angle: pointer to the angle to wrap.
 * 
 * @return: (the wrapped angle).
 */

void WrapAngle(f32* arg0) {
    if (*arg0 < 0.0) {
        *arg0 = (*arg0 + 360.0);
        return;
    }

    if (360.0 <= *arg0) {
        *arg0 = (*arg0 - 360.0);
    }
}

/**
 * @brief Compares two angles (degrees), wrapping them to the range [0, 360) before comparing.
 *      
 * @param angle1: the first angle to compare.
 * @param angle2: the second angle to compare.
 * 
 * @return: 1 if angle1 is greater than angle2, -1 if angle1 is less than angle2, and 0 if they are equal.
 */
s32 CompareWrappedAngles(f32 angle1, f32 angle2) {
    s32 ret;
    
    WrapAngle(&angle1);
    WrapAngle(&angle2);
    
    if (angle1 == angle2) {
        ret = 0;
    } else {
        if (angle1 < 180.0) {
            if ((angle1 < angle2) && (angle2 <= (angle1 + 180.0))) {
                ret = 1;
            } else {
                ret = -1;
            }
        } else {
            if (((angle1 - 180.0) < angle2) && (angle2 <= angle1)) {
                ret = -1;
            } else {
                ret = 1;
            }
        }
    }

    return ret;
}

// jtbl 801107F8
#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/func_800D75B4.s")
/* //non equivalent
void func_800D75B4(Poly* arg0, s32 arg1) {
    Vec3f sp70; //unk_70
    f32 sp50; //unkVecStruct.vec2
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f14;
    f32 temp_f14_4;
    f32 temp_f16;
    f32 temp_f16_4;
    f32 temp_f18_3;
    f32 temp_f2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    unkVecStruct* temp_v0;

    switch (arg1) {
    case 1:
        func_800AEB48(arg0);
        break;
    case 2:
        // Orthonormalisation Algorithm
        
        temp_v0 = &arg0->unkVectorStruct;

        // s = unkVec - offset
        sp70.x = arg0->unkVec.x - arg0->offset.x;
        sp70.y = arg0->unkVec.y - arg0->offset.y;
        sp70.z = arg0->unkVec.z - arg0->offset.z;

        // t = unkVec2 - offset
        temp_f2 = arg0->unkVec2.x - arg0->offset.x;
        temp_f14 = arg0->unkVec2.y - arg0->offset.y;
        temp_f16 = arg0->unkVec2.z - arg0->offset.z;

        // v1 = s = (unkvec - off)
        temp_v0->vec1 = sp70;

        // ||v1||
        temp_f0_2 = __sqrtf(SQ(arg0->unkVectorStruct.vec1.x) + SQ(arg0->unkVectorStruct.vec1.y + SQ(arg0->unkVectorStruct.vec1.z)));

        // if length of v1 is 0, not a poly
        if (temp_f0_2 == 0.0) {
            arg0->unk_00 = -1;
            break;
        }

        // normalise s.t. v1 = v1/||v1||
        temp_v0->vec1.x /= temp_f0_2;
        temp_v0->vec1.y = temp_v0->vec1.y / temp_f0_2;
        temp_v0->vec1.z = temp_v0->vec1.z / temp_f0_2;

        // let n = (s x t), hence (s orth n) and (s orth t)
        temp_v0->normal.x = (sp70.y * temp_f16) - (sp70.z * temp_f14);
        temp_v0->normal.y = (sp70.z * temp_f2) - (sp70.x * temp_f16);
        temp_v0->normal.z = (sp70.x * temp_f14) - (sp70.y * temp_f2);

        // ||n||
        temp_f0_3 = __sqrtf(SQ(temp_v0->normal.z) + (SQ(temp_v0->normal.x) + SQ(temp_v0->normal.y)));

        // if ||n|| = 0, not poly
        if (temp_f0_3 == 0.0) {
            arg0->unk_00 = -1;
            break;
        }

        // normalise s.t. n = n/||n||
        temp_v0->normal.x = temp_v0->normal.x / temp_f0_3;
        temp_v0->normal.y = temp_v0->normal.y / temp_f0_3;
        temp_v0->normal.z = temp_v0->normal.z / temp_f0_3;

        // v2 = (n x v1) -> (v2 orth n) and (v2 orth v1)
        // Given two normalised orthogonal vectors, their cross product will also be normalised

        // from earlier (s orth n) -> (v1 orth n), preserved through normalisation
        temp_v0->vec2.x = (temp_v0->normal.y * temp_v0->vec1.z) - (temp_v0->vec1.y * temp_v0->normal.z);
        temp_v0->vec2.y = (temp_v0->normal.z * temp_v0->vec1.x) - (temp_v0->vec1.z * temp_v0->normal.x);
        temp_v0->vec2.z = (temp_v0->normal.x * temp_v0->vec1.y) - (temp_v0->vec1.x * temp_v0->normal.y);
        break;
    case 3:
        sp70.x = arg0->unkVec.x - arg0->unkVectorStruct.vec1.x;
        sp70.y = arg0->unkVec.y - arg0->unkVectorStruct.vec1.y;
        sp70.z = arg0->unkVec.z - arg0->unkVectorStruct.vec1.z;
        temp_f2_4 = arg0->unkVec2.x - arg0->unkVectorStruct.vec1.x;
        temp_f14_4 = arg0->unkVec2.y - arg0->unkVectorStruct.vec1.y;
        temp_f16_4 = arg0->unkVec2.z - arg0->unkVectorStruct.vec1.z;
        sp50 = (arg0->unkVectorStruct.vec1.z * temp_f16_4) + ((temp_f2_4 * arg0->unkVectorStruct.vec1.x) + (temp_f14_4 * arg0->unkVectorStruct.vec1.y));
        temp_f18_3 = (arg0->unkVectorStruct.vec2.z * temp_f16_4) + ((temp_f2_4 * arg0->unkVectorStruct.vec2.x) + (temp_f14_4 * arg0->unkVectorStruct.vec2.y));
        temp_f0_4 = __sqrtf(SQ(sp70.x) + SQ(sp70.y) + SQ(sp70.z));
        if (((temp_f0_4 * temp_f18_3)) == 0.0) {
            arg0->unk_00 = -1;
            //func_800D7460("\nIt's not a polygon.**********************\n");
            func_800D7460(D_80110720);
            break;
        }
        arg0->unk_84 = temp_f0_4;
        arg0->unk_8C = sp50;
        arg0->unk_90 = temp_f18_3;
        arg0->unk_70.x = 0.0f;
        arg0->unk_7C = 0.0f;
        arg0->unk_80 = 0.0f;
        arg0->unk_88 = 0.0f;
        arg0->unk_6C = temp_f18_3 * (f32)(1.0 / (temp_f0_4 * temp_f18_3));
        arg0->unk_70.y = -sp50 * (f32)(1.0 / (temp_f0_4 * temp_f18_3));
        arg0->unk_70.z = temp_f0_4 * (f32)(1.0 / (temp_f0_4 * temp_f18_3));
        break;
    default:
    case -1:
    case 0:
        break;
    }
    arg0->unk_00 = arg1;
}
*/

void OnlyCheckPolyInfoLevel(Poly* arg0, s32 arg1, char* arg2) {
    if (arg0->unk_00 < arg1) {
        DummiedPrintf3("OnlyCheckPolyInfoLevel: Need More Info Level\n");
        DummiedPrintf3("Function: %s\n", arg2);
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

/**
 * @brief Projects a given 3D vector onto a polygon in 3D space, returning the projected vector.
 * 
 * @param[in,out]  vec:    the vector to project.
 * @param          perspX: the X coordinate of the perspective point.
 * @param          perspY: the Y coordinate of the perspective point.
 * @param          perspZ: the Z coordinate of the perspective point.
 * @param          poly:   the polygon to project onto.
 * 
 * @return (Vec3f) the projected vector.
 */
Vec3f* ProjectOnPolygon(Vec3f* vec, f32 perspX, f32 perspY, f32 perspZ, Poly* poly) {
    Vec3f vec_proj;
    f32 p_x;
    f32 dotProduct;
    f32 dist;
    f32 p_x2;

    OnlyCheckPolyInfoLevel(poly, 2, "ProjectOnPolygon");
    p_x = poly->unkVectorStruct.vec1.x;
    p_x2 = poly->unkVectorStruct.vec2.x;
    dotProduct = (poly->unkVectorStruct.vec1.z * perspZ) + ((perspX * p_x) + (perspY * poly->unkVectorStruct.vec1.y));
    dist = (poly->unkVectorStruct.vec2.z * perspZ) + ((perspX * p_x2) + (perspY * poly->unkVectorStruct.vec2.y));
    vec_proj.x = (p_x2 * dist) + (dotProduct * p_x);
    vec_proj.y = (poly->unkVectorStruct.vec2.y * dist) + (dotProduct * poly->unkVectorStruct.vec1.y);
    vec_proj.z = (poly->unkVectorStruct.vec2.z * dist) + (dotProduct * poly->unkVectorStruct.vec1.z);
    *vec = vec_proj;
    return vec;
}

/** 
 * @brief Converts a 3D vector from world space to local space. 
 * 
 * @param[in,out]  outVec: Pointer to a Vec3f where the resulting local-space vector will be stored.
 * @param          vec:    The 3D vector to be converted from world space to local space.
 * @param          poly:   The polygon with respect to which the conversion should be performed.
 *
 * @return (Vec3f) A pointer to the resulting local-space vector, stored in the `outVec` parameter.
 */
Vec3f* WorldToLocal(Vec3f* outVec, Vec3f vec, Poly* poly) {
    // Take P to be a matrix with the columns being the x, y, and z vectors of the poly struct
    // P(v) = outVec, where v is the input vector agter being translated by an offset vector
    Vec3f temp_vec;
 
    OnlyCheckPolyInfoLevel(poly, 2, "WorldToLocal");
    vec.x = vec.x - poly->offset.x;
    vec.y = vec.y - poly->offset.y;
    vec.z = vec.z - poly->offset.z;
    temp_vec.x = (poly->unkVectorStruct.vec1.z * vec.z) + ((vec.x * poly->unkVectorStruct.vec1.x) + (vec.y * poly->unkVectorStruct.vec1.y));
    temp_vec.y = (poly->unkVectorStruct.vec2.z * vec.z) + ((vec.x * poly->unkVectorStruct.vec2.x) + (vec.y * poly->unkVectorStruct.vec2.y));
    temp_vec.z = (poly->unkVectorStruct.normal.z * vec.z) + ((vec.x * poly->unkVectorStruct.normal.x) + (vec.y * poly->unkVectorStruct.normal.y));
    *outVec = temp_vec;

    return outVec;
}

/** 
 * @brief Converts a 3D vector from local space to world space. 
 * 
 * @param[in,out] outVec:     Pointer to a Vec3f where the resulting world-space vector will be stored.
 * @param         vec:        The 3D vector to be converted from local space to world space.
 * @param         poly:       The polygon with respect to which the conversion should be performed.
 *
 * @return (Vec3f) A pointer to the resulting world-space vector, stored in the `outVec` parameter.
 */
Vec3f* LocalToWorld(Vec3f* outVec, Vec3f vec, Poly* poly) {
    Vec3f temp_vec;

    OnlyCheckPolyInfoLevel(poly, 2, "LocalToWorld");
    temp_vec.x = (poly->unkVectorStruct.normal.x * vec.z) + ((vec.x * poly->unkVectorStruct.vec1.x) + (vec.y * poly->unkVectorStruct.vec2.x));
    temp_vec.y = (poly->unkVectorStruct.normal.y * vec.z) + ((vec.x * poly->unkVectorStruct.vec1.y) + (vec.y * poly->unkVectorStruct.vec2.y));
    temp_vec.z = (poly->unkVectorStruct.normal.z * vec.z) + ((vec.x * poly->unkVectorStruct.vec1.z) + (vec.y * poly->unkVectorStruct.vec2.z));
    temp_vec.x += poly->offset.x;
    temp_vec.y += poly->offset.y;
    temp_vec.z += poly->offset.z;
    *outVec = temp_vec;
    return outVec;
}

/**
 * @brief Checks if a given 3D vector is inside a polygon in 3D space.
 * 
 * @param vec:  the vector to check.
 * @param poly: the polygon to check against
 * 
 * @return (s32 bool) 1 if the vector is inside the polygon, 0 otherwise.
 */
s32 IsInsidePolygon(Vec3f vec, Poly* poly) {
   f32 x_0;
   f32 y_0;
   OnlyCheckPolyInfoLevel(poly, 3, "IsInsidePolygon");
   x_0 = (poly->unk_74 * vec.y) + (poly->unk_6C * vec.x);
   y_0 = (poly->unk_78 * vec.y) + (poly->unk_70 * vec.x);
   if (x_0 < -0.0001) {
       return 0;
   }
   if (y_0 < -0.0001) {
       return 0;
   }
   if (1.0001 < (x_0 + y_0)) {
       return 0;
   }
   return 1;
}


extern char D_801107D0[]; // = "IsOnPolygon" "";

/**
 * @brief Uses the dot product of the point and the polygon's normal vector to determine if the point is on the polygon.
 * 
 * @param vec:  the point to check
 * @param poly: the polygon to check
 * 
 * @return (s32 bool) 1 if the point is on the polygon, 0 otherwise
 */
s32 IsOnPolygon(Vec3f vec, Poly* poly) {
    f32 dotProduct;
    
    OnlyCheckPolyInfoLevel(poly, 2, "IsOnPolygon");
    vec.x -= poly->offset.x;
    vec.y -= poly->offset.y;
    vec.z -= poly->offset.z;
    
    dotProduct = vec.z * poly->unkVectorStruct.normal.z + (vec.x * poly->unkVectorStruct.normal.x + vec.y * poly->unkVectorStruct.normal.y);

    if (dotProduct < -1.0) {
        return 0;
    }
    if (dotProduct > 1.0) {
        return 0;
    }
    return 1;
}

/**
 * @brief Calculates the result of a given rotation matrix multiplied by a given vector.
 * 
 * @param[in,out]   outVec:                 pointer to the output vector
 * @param           inpVec:                 the input vector
 * @param           theta:                  the angle of rotation
 * @param           rotateAroundAxesIndex:  the axis to rotate around / the rotation matrix to use
 *
 * @return (Vec3f) the vector after the rotation
*/
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


/**
 * @brief Return if a point is within a certain radius of another point.
 * 
 * @param   vec1:           first vector
 * @param   vec2:           second vector
 * @param   approxRadius:   radius to check
 * 
 * @return (s32 bool) 1 if within radius, 0 if not
 */
s32 IsNearPoint(Vec3f vec1, Vec3f vec2, f32 approxRadius) {
    f32 x_0;
    f32 z_0;
    f32 y_0;
    s32 ret;

    // Find a vector to represent the distance between the two points
    x_0 = vec1.x - vec2.x;
    y_0 = vec1.y - vec2.y;
    z_0 = vec1.z - vec2.z;
    
    if (NORM_3(x_0, y_0, z_0) < approxRadius) {     // Check if said vector is within the given radius from the origin
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

/**
 * @brief compares two Vec3f structs. [Both are neccessary for checksum]
 * 
 * @param vec1: first vector
 * @param vec2: second vector
 * 
 * @return (s32 bool) 1 if equal, 0 if not
 */
s32 Vec3f_Equals(Vec3f vec1, Vec3f vec2) {
    return ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z)) ? 1 : 0;
}

/**
 * @brief compares two Vec3f structs. [Both are neccessary for checksum]
 * 
 * @param vec1: first vector
 * @param vec2: second vector
 * 
 * @return (s32 bool) 1 if equal, 0 if not
 */
s32 Vec3f_EqualsCopy(Vec3f vec1, Vec3f vec2) {
    return ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z)) ? 1 : 0;
}

/**
 * @brief Sets the input vector to have given values.
 * 
 * @param vec: pointer for vector to set
 * @param x: x value to set
 * @param y: y value to set
 * @param z: z value to set
 */
void Vec3f_Set(Vec3f* vec, f32 x, f32 y, f32 z) {
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

/**
 * @brief Sets the input vector to the zero vector.
 * 
 * @param vec: pointer for vector to zero
 */
void Vec3f_Zero(Vec3f* vec) {
    vec->x = 0.0f;
    vec->y = 0.0f;
    vec->z = 0.0f;
}