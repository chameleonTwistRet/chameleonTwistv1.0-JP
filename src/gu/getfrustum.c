#include "common.h"
#include "guint.h"
//AOF=2

//needs -O3
#pragma GLOBAL_ASM("asm/nonmatchings/gu/getfrustum/guFrustumF.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gu/getfrustum/guFrustum.s")

// void guFrustum(Mtx *m, float l, float r, float b, float t, float n, float f, float scale) {
// 	Matrix	mf;

// 	guFrustumF(mf, l, r, b, t, n, f, scale);

// 	guMtxF2L(mf, m);
// }
