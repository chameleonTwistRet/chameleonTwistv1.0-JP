#ifndef MACROS_H
#define MACROS_H
#include "variables.jp.h"
#include "common_structs.h"
//#include "include_asm.h"

// GENERAL MATHS //
#define PI 3.141592653589793
#define SQ(x) ((x)*(x))
#define SUM_OF_SQUARES(x,y) (SQ(x) + SQ(y))
#define sqrtf __sqrtf
#define sinf __sinf 
#define cosf __cosf 
#define DEGREES_TO_RADIANS(x) (x * 2 * PI / 360.0)
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define ROUND(d)	(int)(((d) >= 0.0) ? ((d) + 0.5) : ((d) - 0.5))
#define	ABS(d)		((d) > 0) ? (d) : -(d)
#define _ALIGN(val, alignment) ((((val) + ((alignment) - 1)) / (alignment)) * (alignment))

#define SEGMENT_MASK 0x0F000000
#define SEGMENT_SHIFT 24
#define IS_SEGMENTED(x)          (((u32)(x) & SEGMENT_MASK) != 0)
#define SEGMENT_INDEX(x)         (((u32)(x) & SEGMENT_MASK) >> SEGMENT_SHIFT)
#define SEGMENT_OFFSET_CUSTOM(x)        (((u32)(x) & ~SEGMENT_MASK))
#define SEGMENTED_TO_VIRTUAL(x)  (void*)(SEGMENT_OFFSET_CUSTOM(x) + D_80100F50[SEGMENT_INDEX(x)].base_address)

#endif
