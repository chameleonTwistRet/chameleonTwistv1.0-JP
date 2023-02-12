#include "common.h"
//AOF=1

void guNormalize(f32* x, f32* y, f32* z) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    
    temp_f0 = *z;
    temp_f2 = *x;
    temp_f14 = *y;
    temp_f2_2 = 1.0f / __sqrtf(SQ(temp_f0) + (SQ(temp_f2) + SQ(temp_f14)));
    *x *= temp_f2_2;
    *y *= temp_f2_2;
    *z *= temp_f2_2;
}
