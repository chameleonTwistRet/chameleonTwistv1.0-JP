#include "common.h"

extern f32 D_80108B70;
extern f32 D_80108C74;
extern f32 D_80108D78;
extern f32 D_80108E7C[];
extern s32 D_801FCA10;

s32 Random(s32 arg0, s32 arg1) {
    s32 var_v1;
    f32 new_var2;
    f32 new_var;
    
    if (D_80100FD0 != 0) {
        new_var2 = ((D_801FCA10 * 256) + D_801FCA10) % 65535 / 65535.0f;
        new_var = arg1 - arg0 + 1;
        var_v1 = new_var * new_var2 + arg0;
    } else {
        new_var = guRandom() % 65535;
        var_v1 = (arg1 - arg0 + 1) * (new_var / 65535.0f) + arg0;
    }
    return var_v1;
}

f32 func_800C89E8(void) {
    return Random(0, 0xFFFF) / 65535.0f;    //Max 2bytes
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

f32 func_800C8A78(f32 arg0) {
    s32 var_a0;
    f32* var_v0;
    f32 var_f0;
    f32 var_f12;
    f64 var_f16;
    f32 var_f2;
    
    s32 temp_f8;
    f32 temp1;
    f32 temp2;

    if (arg0 >= 0.0f) {
        var_f0 = arg0;
        var_f12 = 1.0f;
    } else {
        var_f12 = -1.0f;
        var_f0 = -arg0;
    }
    
    var_f16 = var_f0;
    
    if (var_f16 > 1.0) {
        var_f0 = 1.0f;
        if (1){} //TODO: fake match
        var_f16 = var_f0; //?
    }
    
    if (0.994999999999999996 <= var_f16) {
        var_v0 = &D_80108D78;
        var_f2 = (f32) ((var_f16 - 0.994999999999999996) * 12800.0);
    } else if (0.949999999999999956 <= var_f16) {
        var_v0 = &D_80108C74;
        var_f2 = (f32) ((var_f16 - 0.949999999999999956) * 1280.0);
    } else {
        var_v0 = &D_80108B70;
        var_f2 = var_f0 * 64.0f;
    }
    
    temp_f8 = (s32) var_f2;
    var_a0 = temp_f8 + 1;
    
    if (var_a0 > 64) {
        var_a0 = 64;
    }
    
    temp1 = var_v0[temp_f8];
    temp2 = var_v0[var_a0];
    
    return (((1.0f - (var_f2 - (f32) temp_f8)) * temp1) + ((var_f2 - (f32) temp_f8) * temp2)) * var_f12;
}

f32 func_800C8BE4(f32 arg0) {
    return 90.0 - func_800C8A78(arg0);
}

f32 func_800C8C14(f32 arg0, f32 arg1) {
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
    
    if (arg0 == 0.0 && arg1 == 0.0) {
        return 0.0f;
    }
    
    if (arg0 < 0.0f) {
        var_v0 = 1;
        var_f2 = -arg0;
    } else {
        var_f2 = arg0;
    }
    
    if (arg1 < 0.0f) {
        var_v0 += 2;
        var_f12 = -arg1;
    } else {
        var_f12 = arg1;
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
    
    if (var_a1 >= 0x41) {
        var_a1 = 0x40;
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