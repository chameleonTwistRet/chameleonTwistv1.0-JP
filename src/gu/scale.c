#include "guint.h"

void guScaleF(float mf[4][4], f32 r, f32 p, f32 h) {
    guMtxIdentF(mf);
    mf[0][0] = r;
    mf[1][1] = p;
    mf[2][2] = h;
    mf[3][3] = 1.0f;
}

void guScale(Mtx *m, float r, float p, float h) {
	Matrix	mf;

	guScaleF(mf, r, p, h);
	guMtxF2L(mf, m);
}
