#include "common.h"
#include "guint.h"


#pragma GLOBAL_ASM("asm/nonmatchings/gu/align/guAlignF.s")
/*
void guAlignF(float mf[4][4], float a, float x, float y, float z)
{
	static float	dtor = 3.1415926 / 180.0;
	float	s, c, h, hinv;

	guNormalize(&x, &y, &z);

	a *= dtor;
	s = sinf (a);
	c = cosf (a);
	h = sqrtf (x*x + z*z);

	guMtxIdentF(mf);

	if (h != 0) {
		hinv = 1 / h;

		mf[0][0] = (-z*c - s*y*x) * hinv;
		mf[1][0] = (z*s - c*y*x) * hinv;
		mf[2][0] = -x;
		mf[3][0] = 0;

		mf[0][1] = s*h;
		mf[1][1] = c*h;
		mf[2][1] = -y;
		mf[3][1] = 0;

		mf[0][2] = (c*x - s*y*z) * hinv;
		mf[1][2] = (-s*x - c*y*z) * hinv;
		mf[2][2] = -z;
		mf[3][2] = 0;

		mf[0][3] = 0;
		mf[1][3] = 0;
		mf[2][3] = 0;
		mf[3][3] = 1;
	} else {
		// XXX: should do this right
	}
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/gu/align/guAlign.s")


/*
void guAlign(Mtx *m, f32 a, f32 x, f32 y, f32 z)
{
	Matrix	mf;
	guAlignF(mf, a, x, y, z);
	guMtxF2L(mf, m);
}
*/