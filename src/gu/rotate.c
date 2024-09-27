#include "guint.h"

f32 __sinf(f32);
f32 __sqrtf(f32);
f32 __cosf(f32);

void guRotateF(float mf[4][4], float a, float x, float y, float z)
{
	static float	dtor = 3.1415926 / 180.0;
	float	sine;
	float	cosine;
	float	ab, bc, ca, t;

	guNormalize(&x, &y, &z);
	a *= dtor;
	sine = __sinf(a);
	cosine = __cosf(a);
	t = (1-cosine);
	ab = x*y*t;
	bc = y*z*t;
	ca = z*x*t;

	guMtxIdentF(mf);

	t = x*x;
	mf[0][0] = t+cosine*(1-t);
	mf[2][1] = bc-(x * sine);
	mf[1][2] = bc+(x * sine);

	t = y*y;
	mf[1][1] = t+cosine*(1-t);
	mf[2][0] = ca+(y * sine);
	mf[0][2] = ca-(y * sine);

	t = z*z;
	mf[2][2] = t+cosine*(1-t);
	mf[1][0] = ab-(z * sine);
	mf[0][1] = ab+(z * sine);
}

void guRotate(Mtx *m, float a, float x, float y, float z)
{
	Matrix	mf;

	guRotateF(mf, a, x, y, z);

	guMtxF2L(mf, m);
}
