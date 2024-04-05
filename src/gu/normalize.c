#include "common.h"

void guNormalize(f32* x, f32* y, f32* z) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    f32 len;
    
    temp_f0 = *z;
    temp_f2 = *x;
    temp_f14 = *y;
    len = 1.0f / sqrtf(SQ(temp_f0) + SUM_OF_SQUARES(temp_f2, temp_f14));
    *x *= len;
    *y *= len;
    *z *= len;
}
