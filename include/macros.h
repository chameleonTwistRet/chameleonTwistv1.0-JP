#ifndef MACROS_H
#define MACROS_H

// GENERAL MATHS //
#define PI 3.141592653589793
#define SQ(x) ((x)*(x))
#define SUM_OF_SQUARES(x,y) (SQ(x) + SQ(y))
#define sqrtf __sqrtf
#define sinf __sinf 
#define cosf __cosf 
#define DEGREES_TO_RADIANS(x) (x * 2 * PI / 360.0)
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

#endif
