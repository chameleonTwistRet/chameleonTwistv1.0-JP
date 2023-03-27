#include "common.h"

extern f32 D_80108B70[64];
extern f32 D_80108C74[64];
extern f32 D_80108D78[64];
extern f32 D_80108E7C[];
extern s32 gFixedSeedIndex;

s32 Random(s32 arg0, s32 arg1) {
    s32 var_v1;
    f32 new_var2;
    f32 new_var;
    
    if (UseFixedRNGSeed != FALSE) {
        new_var2 = ((gFixedSeedIndex * 256) + gFixedSeedIndex) % 65535 / 65535.0f;
        new_var = arg1 - arg0 + 1;
        var_v1 = new_var * new_var2 + arg0;
    } else {
        new_var = guRandom() % 65535;
        var_v1 = (arg1 - arg0 + 1) * (new_var / 65535.0f) + arg0;
    }

    return var_v1;
}

f32 RandomF(void) {
    // Returns a random float between 0 and 1
    return Random(0, 0xFFFF) / 65535.0f;
}

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

f32 AngleFromArcSin(f32 x) {
    return 90.0 - InterpolateAndClampArcSin(x);
}

f32 CalculateAngleBetweenVectors(f32 x, f32 y) {
    s32 pad[2];
    f32 sp4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f2;
    f32 var_f6;
    s32 var_a1;
    s32 var_v1;
    u32 var_v0 = 0;
    
    if (x == 0.0 && y == 0.0) {
        return 0.0f;
    }
    
    if (x < 0.0f) {
        var_v0 = 1;
        var_f2 = -x;
    } else {
        var_f2 = x;
    }
    
    if (y < 0.0f) {
        var_v0 += 2;
        var_f12 = -y;
    } else {
        var_f12 = y;
    }
    
    if (var_f2 < var_f12) {
        var_v0 += 4;
        var_f14 = (var_f2 / var_f12) * 64.0f;
        var_v1 = (s32) var_f14;
        var_a1 = var_v1 + 1;
        var_f6 = (f32) var_v1;
        temp_f0 = var_f14 - var_f6;
    } else {
        var_f14 = (var_f12 / var_f2) * 64.0f;
        var_v1 = (s32) var_f14;
        var_a1 = var_v1 + 1;
        var_f6 = (f32) var_v1;
        temp_f0 = var_f14 - var_f6;
    }
    
    if (var_a1 > 64) {
        var_a1 = 64;
    }
    
    temp_f2 = D_80108E7C[var_v1];
    temp_f12 = D_80108E7C[var_a1];
    
    switch (var_v0) {
    case 0:
        sp4 = ((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12);
        break;
    case 1:
        sp4 = 180.0 - (f64) (((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12));
        break;
    case 2:
        sp4 = 360.0 - (f64) (((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12));
        break;
    case 3:
        sp4 = ((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12) + 180.0;
        break;
    case 4:
        sp4 = 90.0 - (f64) (((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12));
        break;
    case 5:
        sp4 = ((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12) + 90.0;
        break;
    case 6:
        sp4 = ((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12) + 270.0;
        break;
    case 7:
        sp4 = 270.0 - (f64) (((1.0f - temp_f0) * temp_f2) + (temp_f0 * temp_f12));
        break;
    }
    return sp4;
}