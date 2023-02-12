#include "common.h"
//AOF=2

//guMtxXFML should be in a new file, mtxxfml.c
void guMtxXFML(Mtx *m, float x, float y, float z, float *ox, float *oy, float *oz) {
	float	mf[4][4];

	guMtxL2F(mf, m);

	guMtxXFMF(mf, x, y, z, ox, oy, oz);
}

void guMtxCatL(Mtx *m, Mtx *n, Mtx *res)
{
	float	mf[4][4], nf[4][4], resf[4][4];

	guMtxL2F(mf, m);
	guMtxL2F(nf, n);

	guMtxCatF(mf, nf, resf);

	guMtxF2L(resf, res);
}
