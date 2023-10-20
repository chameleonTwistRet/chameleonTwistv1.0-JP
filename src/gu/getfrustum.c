#include "guint.h"

void guFrustumF(float mf[4][4], float l, float r, float b, float t, float n, float f, float scale) {
	int	i, j;
    f32 temp_f12, temp_f0, temp_f2;

	guMtxIdentF(mf);

    temp_f0 = r - l;
    temp_f2 = t - b;
    temp_f12 = f - n;

    mf[0][0] = 2/(temp_f0);
    mf[1][1] = 2/(temp_f2);
    mf[2][2] = -2/(temp_f12);
    
    mf[3][0] = -(r + l)/(temp_f0);
    mf[3][1] = -(t + b) / (temp_f2);
    mf[3][2] = -(f + n) / (temp_f12);
    mf[3][3] = 1;
    
	for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            mf[i][j] *= scale;
        }
    }
}

void guFrustum(Mtx *m, float l, float r, float b, float t, float n, float f, float scale) {
	Matrix	mf;

	guFrustumF(mf, l, r, b, t, n, f, scale);

	guMtxF2L(mf, m);
}
