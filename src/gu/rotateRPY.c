#include "common.h"
#include "guint.h"
//AOF=2

#pragma GLOBAL_ASM("asm/nonmatchings/gu/rotateRPY/guRotateRPYF.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gu/rotateRPY/guRotateRPY.s")

// void guRotateRPYF(float mf[4][4], f32 r, f32 p, f32 h) {
//     guMtxIdentF(mf);
//     mf[0][0] = r;
//     mf[1][1] = p;
//     mf[2][2] = h;
//     mf[3][3] = 1.0f;
// }

// void guRotateRPY(Mtx *m, float r, float p, float h)
// {
// 	Matrix	mf;

// 	guRotateRPYF(mf, r, p, h);

// 	guMtxF2L(mf, m);
// }

