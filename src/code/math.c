#include "common.h"

extern f32 D_80108B70[64];
extern f32 D_80108C74[64];
extern f32 D_80108D78[64];
extern f32 D_80108E7C[];
extern s32 gFixedSeedIndex;

/**
 * @brief Returns a random integer between min and max, inclusive.
 * Uses a fixed seed if UseFixedRNGSeed is TRUE or guRandom() if FALSE.
 * @param min: Minimum value to return
 * @param max: Maximum value to return
 * 
 * @return: A random integer between min and max, inclusive
 */
s32 Random(s32 min, s32 max) {
    s32 randVal;
    f32 randFloat;
    f32 randFloat2;
    
    if (UseFixedRNGSeed != FALSE) {
        randFloat = ((gFixedSeedIndex * 256) + gFixedSeedIndex) % 65535 / 65535.0f;
        randFloat2 = max - min + 1;
        randVal = randFloat2 * randFloat + min;
    } else {
        randFloat2 = guRandom() % 65535;
        randVal = (max - min + 1) * (randFloat2 / 65535.0f) + min;
    }

    return randVal;
}

/**
 * @brief Returns a random float between 0 and 1 by calling Random().
 * @return A random float between 0 and 1 
 */
f32 RandomF(void) {
    return Random(0, 0xFFFF) / 65535.0f;
}

/**
 * @brief Returns the tangent of x.
 * @param x: the angle
 * @return the tangent of x or 0 if the tangent is undefined
 */
f32 tanf(f32 x) {
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
}

/**
 * @brief Interpolates and clamps the inverse sin of a given float value.
 * @param x The value to calculate the arcsine of.
 * @return The interpolated and clamped arcsine of the input value.
 */
f32 InterpolateAndClampArcSin(f32 x) {
    f32* table;
    f32 sign;
    f32 abs_x;
    f32 cur;
    s32 base;
    s32 next;
    f32 entry1;
    f32 entry2;
    f32 t;
    
    if (x >= 0.0f) {
        sign = 1.0f;
        abs_x = x;
    } else {
        sign = -1.0f;
        abs_x = -x;
    }
    
    if (abs_x > 1.0) {
        abs_x = 1.0f;
    }

    if ((1-1/200.0) <= abs_x) {
        table = D_80108D78;
        cur = (abs_x - (1-1/200.0)) * (ARRAY_COUNT(D_80108D78) * 200);
    } else if ( (1-1/20.0) <= abs_x) {
        table = D_80108C74;
        cur = (abs_x - (1-1/20.0)) * (ARRAY_COUNT(D_80108C74) * 20);
    } else {
        table = D_80108B70;
        cur = abs_x * ARRAY_COUNT(D_80108B70);
    }

    base = cur;
    next = base + 1;
    
    if (next > 64) {
        next = 64;
    }
    
    entry1 = table[base];
    entry2 = table[next];
    t = cur - base;

    return (((1.0f - t) * entry1) + (t * entry2)) * sign;
}

/**
 * @brief Calculates the angle s.t. sin(angle) = x.
 * @param x: The value to calculate the angle of.
 * 
 * @return: The angle s.t. sin(angle) = x.
 */
f32 AngleFromArcSin(f32 x) {
    return 90.0 - InterpolateAndClampArcSin(x);
}

/**
 * @brief Calculates the angle of a 2-dim vector.
 * @param x: The x component of the vector
 * @param y: The y component of the vector
 * 
 * @return The angle of the vector (probably in degrees)
 */
f32 CalculateAngleOfVector(f32 x, f32 y) {
    s32 pad[2];
    f32 angle;
    f32 frac;
    f32 lookupTwo;
    f32 lookupOne;
    f32 absY;
    f32 slope;
    f32 absX;
    f32 floorF;
    s32 next_index;
    s32 floor;
    u32 quadrant = 0;
    
    // No input vector
    if (x == 0.0 && y == 0.0) {
        return 0.0f;
    }
    
    /* quadrant is used to store the quadrant of the angle [0,3]
       and later stores the sgn */
    if (x < 0.0f) {
        quadrant = 1;
        absX = -x;
    } else {
        absX = x;
    }
    
    if (y < 0.0f) {
        quadrant += 2;
        absY = -y;
    } else {
        absY = y;
    }
    
    /* quadrant += 4 iff |x| < |y| */
    if (absX < absY) {
        quadrant += 4;
        slope = (absX / absY) * 64.0f;  // between 0 and 64 (inclusive)
        floor = (s32) slope;            // int of slope
        next_index = floor + 1;         // floor + 1
        floorF = (f32) floor;           // floor (as float)
        frac = slope - floorF;          // frac of slope
    } else {
        slope = (absY / absX) * 64.0f;
        floor = (s32) slope;       
        next_index = floor + 1;    
        floorF = (f32) floor;      
        frac = slope - floorF;     
    }
    
    /* clamp floor and next_index to [0,64] */
    if (next_index > 64) {
        next_index = 64;
    }
    
    /* angle lookup table is 65 entries long, but the last entry is the same as the first */
    lookupOne = D_80108E7C[floor];
    lookupTwo = D_80108E7C[next_index];
    
    /* Lerp between lookup angle results */
    switch (quadrant) {
    case 0:
        // Q1, |x| >= |y|
        angle = ((1.0f - frac) * lookupOne) + (frac * lookupTwo);
        break;
    case 1:
        // Q2, |x| >= |y|
        angle = 180.0 - (f64) (((1.0f - frac) * lookupOne) + (frac * lookupTwo));
        break;
    case 2:
        // Q3, |x| >= |y|
        angle = 360.0 - (f64) (((1.0f - frac) * lookupOne) + (frac * lookupTwo));
        break;
    case 3:
        // Q4, |x| >= |y|
        angle = ((1.0f - frac) * lookupOne) + (frac * lookupTwo) + 180.0;
        break;
    case 4:
        // Q1, |x| < |y|
        angle = 90.0 - (f64) (((1.0f - frac) * lookupOne) + (frac * lookupTwo));
        break;
    case 5:
        // Q2, |x| < |y|
        angle = ((1.0f - frac) * lookupOne) + (frac * lookupTwo) + 90.0;
        break;
    case 6:
        // Q3, |x| < |y|
        angle = ((1.0f - frac) * lookupOne) + (frac * lookupTwo) + 270.0;
        break;
    case 7:
        // Q4, |x| < |y|
        angle = 270.0 - (f64) (((1.0f - frac) * lookupOne) + (frac * lookupTwo));
        break;
    }
    return angle;
}