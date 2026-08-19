#include "common.h"

void func_800AEB48(Poly*);

// Auth: Rain, revo, simonlindholm
void DummiedPrintf3(char* arg0, ...) { /* variadic args: simonlindholm*/
}

/**
 * @brief Wraps an angle to the range [0, 360).
 * @param angle: pointer to the angle to wrap.
 *
 * @return: (the wrapped angle).
 */

void WrapAngle(f32* angle) {
    if (*angle < 0.0) {
        *angle = (*angle + 360.0);
        return;
    }

    if (360.0 <= *angle) {
        *angle = (*angle - 360.0);
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

void Poly_BuildInfoLevel(Poly *poly, s32 level) {
    char pad[4];
    Vec3f edge1;          // first edge vector (unkVec - offset)
    Vec3f edge2;          // second edge vector (unkVec2 - offset)
    f32 lenEdge1;         // length of edge1 / v1 before normalisation
    f32 lenNormal;        // length of normal before normalisation
    f32 lenEdge1_2;       // length of unnormalized edge1 in case 3
    f32 dotV2T;           // dot(v2, t)
    f32 dotV1T;           // dot(v1, t)
    char pad2[8];
    OrthBasis* basis;     // pointer to the orthonormal basis in poly


    switch (level) {
    case 1:
        func_800AEB48(poly);
        break;

    case 2:
        basis = &poly->orthBasis;

        edge1.x = poly->edgeVec.x - poly->origin.x;
        edge1.y = poly->edgeVec.y - poly->origin.y;
        edge1.z = poly->edgeVec.z - poly->origin.z;

        edge2.x = poly->edgeVec2.x - poly->origin.x;
        edge2.y = poly->edgeVec2.y - poly->origin.y;
        edge2.z = poly->edgeVec2.z - poly->origin.z;

        // v1 = edge1
        basis->vec1 = edge1;

        // lenEdge1 = ||v1||
        lenEdge1 = __sqrtf((basis->vec1.z * basis->vec1.z) + ((basis->vec1.x * basis->vec1.x) + (basis->vec1.y * basis->vec1.y)));

        if (lenEdge1 == 0.0) {
            poly->infoLevel = -1;
            return;
        }

        // v1 = v1 / ||v1||
        basis->vec1.x /= lenEdge1;
        basis->vec1.y /= lenEdge1;
        basis->vec1.z /= lenEdge1;

        // normal = edge1 x edge2
        basis->normal.x = (edge1.y * edge2.z) - (edge1.z * edge2.y);
        basis->normal.y = (edge1.z * edge2.x) - (edge1.x * edge2.z);
        basis->normal.z = (edge1.x * edge2.y) - (edge1.y * edge2.x);

        // lenNormal = ||normal||
        lenNormal = __sqrtf((basis->normal.z * basis->normal.z) + ((basis->normal.x * basis->normal.x) + (basis->normal.y * basis->normal.y)));
        if (lenNormal == 0.0) {
            poly->infoLevel = -1;
            return;
        }

        // normal = normal / ||normal||
        basis->normal.x = basis->normal.x / lenNormal;
        basis->normal.y = basis->normal.y / lenNormal;
        basis->normal.z = basis->normal.z / lenNormal;

        // v2 = normal x v1
        // (v1 orth normal) preserved from (edge1 orth normal)
        // result is automatically normalised since both inputs are orthonormal
        basis->vec2.x = (basis->normal.y * basis->vec1.z) - (basis->vec1.y * basis->normal.z);
        basis->vec2.y = (basis->normal.z * basis->vec1.x) - (basis->vec1.z * basis->normal.x);
        basis->vec2.z = (basis->normal.x * basis->vec1.y) - (basis->vec1.x * basis->normal.y);
        break;

    case 3:
        edge1.x = poly->edgeVec.x - poly->origin.x;
        edge1.y = poly->edgeVec.y - poly->origin.y;
        edge1.z = poly->edgeVec.z - poly->origin.z;
        edge2.x = poly->edgeVec2.x - poly->origin.x;
        edge2.y = poly->edgeVec2.y - poly->origin.y;
        edge2.z = poly->edgeVec2.z - poly->origin.z;

        // dot(v1, edge2): projection of edge2 onto v1
        dotV1T = (poly->orthBasis.vec1.z * edge2.z) + ((edge2.x * poly->orthBasis.vec1.x) + (edge2.y * poly->orthBasis.vec1.y));

        // dot(v2, edge2): projection of edge2 onto v2
        // (duplicated to fix codegen)
        dotV2T = (poly->orthBasis.vec2.x * edge2.z) + ((edge2.x * poly->orthBasis.vec2.x) + (edge2.y * poly->orthBasis.vec2.y));
        dotV2T = (poly->orthBasis.vec2.z * edge2.z) + ((edge2.x * poly->orthBasis.vec2.x) + (edge2.y * poly->orthBasis.vec2.y));

        // lenEdge1_2 = ||edge1||
        lenEdge1_2 = __sqrtf(((edge1.x * edge1.x) + (edge1.y * edge1.y)) + (edge1.z * edge1.z));

        if ((lenEdge1_2 * dotV2T) == 0.0) {
            poly->infoLevel = -1;
            DummiedPrintf3("\nIt's not a polygon.**********************\n");
            return;
        }

        poly->edgeData.x = lenEdge1_2;
        poly->projData.x = dotV1T;
        poly->projData.y = dotV2T;
        poly->invMtxUSkew = 0.0f;
        poly->uvOffset.x = 0.0f;
        poly->uvOffset.y = 0.0f;
        poly->edgeData.y = 0.0f;

        // Build inverse UV matrix scaled by 1/(lenEdge1_2 * dotV2T)
        poly->invMtxU = poly->projData.y * ((f32) (1.0 / (poly->edgeData.x * poly->projData.y)));
        poly->invMtxVSkew = (-dotV1T)      * ((f32) (1.0 / (poly->edgeData.x * poly->projData.y)));
        poly->invMtxV = poly->edgeData.x * ((f32) (1.0 / (poly->edgeData.x * poly->projData.y)));
        break;

    default:
    case -1:
    case 0:
        break;
    }

    poly->infoLevel = level;
}

// originally named: OnlyCheckPolyInfoLevel by the devs
void Poly_AssertInfoLevel(Poly* poly, s32 levelCheck, char* funcStr) {
    if (poly->infoLevel < levelCheck) {
        DummiedPrintf3("OnlyCheckPolyInfoLevel: Need More Info Level\n");
        DummiedPrintf3("Function: %s\n", funcStr);
    }
}

// Incrementally builds poly info up to the requested level.
// Levels are cumulative, each depends on the previous being computed.
void Poly_EnsureInfoLevel (Poly* poly, s32 level) {
    s32 currLevel = poly->infoLevel + 1;
    if (poly->infoLevel < level) {
        for (; level >= currLevel; currLevel++) {
            Poly_BuildInfoLevel(poly, currLevel);
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

    Poly_AssertInfoLevel(poly, 2, "ProjectOnPolygon");
    p_x = poly->orthBasis.vec1.x;
    p_x2 = poly->orthBasis.vec2.x;
    dotProduct = (poly->orthBasis.vec1.z * perspZ) + ((perspX * p_x) + (perspY * poly->orthBasis.vec1.y));
    dist = (poly->orthBasis.vec2.z * perspZ) + ((perspX * p_x2) + (perspY * poly->orthBasis.vec2.y));
    vec_proj.x = (p_x2 * dist) + (dotProduct * p_x);
    vec_proj.y = (poly->orthBasis.vec2.y * dist) + (dotProduct * poly->orthBasis.vec1.y);
    vec_proj.z = (poly->orthBasis.vec2.z * dist) + (dotProduct * poly->orthBasis.vec1.z);
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
    // P(v) = outVec, where v is the input vector after being translated by an offset vector
    Vec3f temp_vec;

    Poly_AssertInfoLevel(poly, 2, "WorldToLocal");
    vec.x = vec.x - poly->origin.x;
    vec.y = vec.y - poly->origin.y;
    vec.z = vec.z - poly->origin.z;
    temp_vec.x = (poly->orthBasis.vec1.z * vec.z) + ((vec.x * poly->orthBasis.vec1.x) + (vec.y * poly->orthBasis.vec1.y));
    temp_vec.y = (poly->orthBasis.vec2.z * vec.z) + ((vec.x * poly->orthBasis.vec2.x) + (vec.y * poly->orthBasis.vec2.y));
    temp_vec.z = (poly->orthBasis.normal.z * vec.z) + ((vec.x * poly->orthBasis.normal.x) + (vec.y * poly->orthBasis.normal.y));
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

    Poly_AssertInfoLevel(poly, 2, "LocalToWorld");
    temp_vec.x = (poly->orthBasis.normal.x * vec.z) + ((vec.x * poly->orthBasis.vec1.x) + (vec.y * poly->orthBasis.vec2.x));
    temp_vec.y = (poly->orthBasis.normal.y * vec.z) + ((vec.x * poly->orthBasis.vec1.y) + (vec.y * poly->orthBasis.vec2.y));
    temp_vec.z = (poly->orthBasis.normal.z * vec.z) + ((vec.x * poly->orthBasis.vec1.z) + (vec.y * poly->orthBasis.vec2.z));
    temp_vec.x += poly->origin.x;
    temp_vec.y += poly->origin.y;
    temp_vec.z += poly->origin.z;
    *outVec = temp_vec;
    return outVec;
}

/**
 * @brief Checks if a given point is inside a polygon using barycentric coordinates.
 *        Computes barycentric coordinates (U, V) of the point relative to the polygon,
 *        and returns 1 if the point lies within the triangle (U >= 0, V >= 0, U+V <= 1).
 *
 * @param vec:  the point to check.
 * @param poly: the polygon to check against. Must be at info level 3.
 *
 * @return (s32 bool) 1 if the point is inside the polygon, 0 otherwise.
 */
s32 IsInsidePolygon(Vec3f vec, Poly* poly) {
    f32 baryU;
    f32 baryV;
    Poly_AssertInfoLevel(poly, 3, "IsInsidePolygon");
    baryU = (poly->invMtxVSkew * vec.y) + (poly->invMtxU * vec.x);
    baryV = (poly->invMtxV * vec.y) + (poly->invMtxUSkew * vec.x);
    if (baryU < -0.0001) {
        return 0;
    }
    if (baryV < -0.0001) {
        return 0;
    }
    if (1.0001 < (baryU + baryV)) {
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

    Poly_AssertInfoLevel(poly, 2, "IsOnPolygon");
    vec.x -= poly->origin.x;
    vec.y -= poly->origin.y;
    vec.z -= poly->origin.z;

    dotProduct = vec.z * poly->orthBasis.normal.z + (vec.x * poly->orthBasis.normal.x + vec.y * poly->orthBasis.normal.y);

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

    sin = sinf(theta);
    cos = cosf(theta);
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
    f32 dx;
    f32 dz;
    f32 dy;
    s32 ret;

    // Find a vector to represent the distance between the two points
    dx = vec1.x - vec2.x;
    dy = vec1.y - vec2.y;
    dz = vec1.z - vec2.z;

    if (NORM_3(dx, dy, dz) < approxRadius) {     // Check if said vector is within the given radius from the origin
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