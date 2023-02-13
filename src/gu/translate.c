#include "common.h"

void guTranslateF(float mf[4][4], f32 x, f32 y, f32 z) {
    guMtxIdentF(mf);
    mf[3][0] = x;
    mf[3][1] = y;
    mf[3][2] = z;
}

void guTranslate(Mtx* m, f32 x, f32 y, f32 z) {
    float mf[4][4];
    f32 sp58 = x;
    f32 sp5C = y;
    f32 sp60 = z;
    
    guMtxIdentF(mf);
    mf[3][0] = sp58;
    mf[3][1] = sp5C;
    mf[3][2] = sp60;
    guMtxF2L(mf, m);
}
