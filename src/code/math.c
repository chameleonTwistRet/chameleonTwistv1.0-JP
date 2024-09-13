#include "common.h"

extern s32 gCurrentDemoTimer;

//data
//lookup tables
//0-90
f32 D_80108B70[64] = {
    0,
    0.8952829838,
    1.790784955,
    2.686723948,
    3.583322048,
    4.480799198,
    5.379378796,
    6.279287815,
    7.180756092,
    8.084013939,

    8.98929882,
    9.896853447,
    10.80692291,
    11.71975994,
    12.63562489,
    13.55478382,
    14.47751236,
    15.40409374,
    16.33482361,
    17.27000427,

    18.20995712,
    19.15501022,
    20.10551071,
    21.06181717,
    22.02431297,
    22.99339485,
    23.96948242,
    24.9530201,
    25.9444809,
    26.94435883,

    27.95318794,
    28.97153282,
    30,
    31.03923988,
    32.08995056,
    33.15288925,
    34.22886658,
    35.31877136,
    36.42357254,
    37.54432678,

    38.68218613,
    39.83843994,
    41.01449966,
    42.21194458,
    43.43253708,
    44.67826462,
    45.95137405,
    47.25443268,
    48.59037781,
    49.96262741,

    51.37516785,
    52.83271408,
    54.34091187,
    55.90660858,
    57.53825378,
    59.24647903,
    61.04497528,
    62.95188904,
    64.99216461,
    67.20175171,

    69.63586426,
    72.38755798,
    75.63848877,
    79.8582077,
};
f32 D_80108C70 = 90;
//71.8-90
f32 D_80108C74[64] = {
    71.80513,
    71.94903564,
    72.09405518,
    72.24021912,
    72.38755798,
    72.53610229,
    72.68588257,
    72.83692932,
    72.98927307,
    73.14295197,
    73.29800415,
    73.4544754,
    73.61238861,
    73.77179718,
    73.93274689,
    74.09528351,
    74.25945282,
    74.42530823,
    74.59290314,
    74.76229858,
    74.93354797,
    75.1067276,
    75.28189087,
    75.4591217,
    75.63848877,
    75.82007599,
    76.00397491,
    76.19026947,
    76.37905884,
    76.57045746,
    76.76456451,
    76.96151733,
    77.16143036,
    77.36445618,
    77.57073975,
    77.78045654,
    77.99377441,
    78.21089172,
    78.43202972,
    78.6574173,
    78.88730621,
    79.12200165,
    79.36180115,
    79.60707092,
    79.8582077,
    80.11564636,
    80.37991333,
    80.65156555,
    80.93128204,
    81.21982574,
    81.51809692,
    81.82717133,
    82.1483078,
    82.48307037,
    82.83335876,
    83.2015686,
    83.59079742,
    84.00512695,
    84.45018768,
    84.9340744,
    85.4691925,
    86.07646179,
    86.79665375,
    87.73503876,
};
f32 D_80108D74 = 90;
//84.26-90
f32 D_80108D78[64] = {
    84.26802826,
    84.31302643,
    84.35837555,
    84.40409851,
    84.45018768,
    84.49666595,
    84.54354095,
    84.59082031,
    84.63851166,
    84.68663788,
    84.73519135,
    84.78420258,
    84.8336792,
    84.88362885,
    84.9340744,
    84.98501587,
    85.03649139,
    85.08849335,
    85.14105988,
    85.19419098,
    85.2479248,
    85.30226135,
    85.35723877,
    85.41287231,
    85.4691925,
    85.5262146,
    85.58396912,
    85.6424942,
    85.70181274,
    85.76195526,
    85.8229599,
    85.88487244,
    85.94773102,
    86.01157379,
    86.07646179,
    86.14243317,
    86.20954895,
    86.27787781,
    86.34748077,
    86.41843414,
    86.49081421,
    86.56472778,
    86.64025879,
    86.71752167,
    86.79665375,
    86.87778473,
    86.96107483,
    87.04671478,
    87.13491058,
    87.22590637,
    87.31999207,
    87.41749573,
    87.51882935,
    87.62447357,
    87.73503876,
    87.85128021,
    87.97418213,
    88.10503387,
    88.2456131,
    88.39848328,
    88.56756592,
    88.75948334,
    88.98712921,
    89.28379822,
};
f32 D_80108E78 = 90;
//0-45
f32 D_80108E7C[64] = {
    0,
    0.8951740265,
    1.789911032,
    2.683774948,
    3.576334,
    4.467158794,
    5.355824947,
    6.241913795,
    7.125016212,
    8.004729271,
    8.880659103,
    9.752425194,
    10.61965466,
    11.48199081,
    12.33908653,
    13.19061089,
    14.03624344,
    14.87568188,
    15.70863819,
    16.53483772,
    17.35402489,
    18.1659565,
    18.97040749,
    19.76716995,
    20.55604553,
    21.33685875,
    22.10944748,
    22.87366486,
    23.62937737,
    24.37646866,
    25.11483574,
    25.84438705,
    26.56505013,
    27.27676392,
    27.97947311,
    28.6731472,
    29.35775375,
    30.03327942,
    30.69972229,
    31.35708427,
    32.00538254,
    32.64464188,
    33.27488708,
    33.89616776,
    34.50852203,
    35.11201096,
    35.70669174,
    36.29262924,
    36.86989975,
    37.43857193,
    37.99873352,
    38.55046463,
    39.09386063,
    39.62900543,
    40.15599823,
    40.6749382,
    41.18592453,
    41.68906021,
    42.18444443,
    42.67218399,
    43.15238953,
    43.62516403,
    44.09061813,
    44.54886246,
};
f32 D_80108F7C = 45;

u32 gShadowFlagsSet = 0;
s32 D_80108F84[] = {4, 21, 4};
f32 D_80108F90[] = {0, 0.9800000191, 1};
Vec3f D_80108F9C = {0, 0, 0};
Vec3f D_80108FA8 = {0, 0, 0};
Vec3f D_80108FB4 = {0, 0, 0};
Vec3f D_80108FC0 = {0, 0, 0};

f32 D_80108FCC = 0;
s32 D_80108FD0 = 0;
s32 D_80108FD4 = 0;
f32 D_80108FD8 = 0;
f32 D_80108FDC = 0;
s32 D_80108FE0 = 0;
f32 D_80108FE4 = 0;
s32 D_80108FE8 = 0;
s32 D_80108FEC = 0;
s32 D_80108FF0 = 0;
f32 D_80108FF4 = 0;
f32 D_80108FF8 = 0;
f32 D_80108FFC = 0;
s32 D_80109000 = 0;
f32 D_80109004 = 0;
f32 D_80109008[] = {0, 0};
//


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
        randFloat = ((gCurrentDemoTimer * 256) + gCurrentDemoTimer) % 65535 / 65535.0f;
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