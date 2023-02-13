#include "common.h"
#include "guint.h"

//needs -O3
#pragma GLOBAL_ASM("asm/nonmatchings/gu/lookatstereo/guLookAtStereoF.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gu/lookatstereo/guLookAtStereo.s")

// void guLookAtStereoF(float mf[4][4], float xEye, float yEye, float zEye,
// 	       float xAt,  float yAt,  float zAt,
// 	       float xUp,  float yUp,  float zUp)
// {
// 	float	len, xLook, yLook, zLook, xRight, yRight, zRight;

// 	guMtxIdentF(mf);

// 	xLook = xAt - xEye;
// 	yLook = yAt - yEye;
// 	zLook = zAt - zEye;

// 	/* Negate because positive Z is behind us: */
// 	len = -1.0 / __sqrtf (xLook*xLook + yLook*yLook + zLook*zLook);
// 	xLook *= len;
// 	yLook *= len;
// 	zLook *= len;

// 	/* Right = Up x Look */

// 	xRight = yUp * zLook - zUp * yLook;
// 	yRight = zUp * xLook - xUp * zLook;
// 	zRight = xUp * yLook - yUp * xLook;
// 	len = 1.0 / __sqrtf (xRight*xRight + yRight*yRight + zRight*zRight);
// 	xRight *= len;
// 	yRight *= len;
// 	zRight *= len;


// 	/* Up = Look x Right */

// 	xUp = yLook * zRight - zLook * yRight;
// 	yUp = zLook * xRight - xLook * zRight;
// 	zUp = xLook * yRight - yLook * xRight;
// 	len = 1.0 / __sqrtf (xUp*xUp + yUp*yUp + zUp*zUp);
// 	xUp *= len;
// 	yUp *= len;
// 	zUp *= len;

// 	mf[0][0] = xRight;
// 	mf[1][0] = yRight;
// 	mf[2][0] = zRight;
// 	mf[3][0] = -(xEye * xRight + yEye * yRight + zEye * zRight);

// 	mf[0][1] = xUp;
// 	mf[1][1] = yUp;
// 	mf[2][1] = zUp;
// 	mf[3][1] = -(xEye * xUp + yEye * yUp + zEye * zUp);

// 	mf[0][2] = xLook;
// 	mf[1][2] = yLook;
// 	mf[2][2] = zLook;
// 	mf[3][2] = -(xEye * xLook + yEye * yLook + zEye * zLook);

// 	mf[0][3] = 0;
// 	mf[1][3] = 0;
// 	mf[2][3] = 0;
// 	mf[3][3] = 1;
// }


// void guLookAtStereo (Mtx *m, float xEye, float yEye, float zEye,
// 	       float xAt,  float yAt,  float zAt,
// 	       float xUp,  float yUp,  float zUp, float eyedist)
// {
// 	Matrix	mf;

// 	guLookAtStereoF(mf, xEye, yEye, zEye, xAt, yAt, zAt, 
// 				xUp, yUp, zUp);

// 	guMtxF2L(mf, m);
// }
