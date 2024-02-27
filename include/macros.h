#ifndef MACROS_H
#define MACROS_H
#include "variables.jp.h"
#include "common_structs.h"

#define MAX_ACTORS 64

// GENERAL MATHS //
#define PI 3.141592653589793
#define SQ(x) ((x)*(x))
#define SUM_OF_SQUARES(x,y) (SQ(x) + SQ(y))
#define NORM_2(x,y) (sqrtf(SQ(x) + SQ(y)))
#define NORM_3(x,y,z) (sqrtf(SQ(x) + SQ(y) + SQ(z)))
#define sqrtf __sqrtf
#define sinf __sinf 
#define cosf __cosf 
#define DEGREES_TO_RADIANS_2PI(x) (x * 2 * PI / 360.0)
#define DEGREES_TO_RADIANS_PI(x) (x * PI / 180.0)
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define ROUND(d)	(int)(((d) >= 0.0) ? ((d) + 0.5) : ((d) - 0.5))
#define	ABS(d)		((d) > 0) ? (d) : -(d)
#define	ABS2(d)		((d) < 0) ? -(d) : (d)
#define _ALIGN(val, alignment) ((((val) + ((alignment) - 1)) / (alignment)) * (alignment))
#define ALIGN_128(val) ((val + 0x7F) & ~0x7F)
#define SQROOT_2_DIV_2 0.70710678f

#define SEGMENT_MASK 0x0F000000
#define SEGMENT_SHIFT 24
#define IS_SEGMENTED(x)          (((u32)(x) & SEGMENT_MASK) != 0)
#define SEGMENT_INDEX(x)         (((u32)(x) & SEGMENT_MASK) >> SEGMENT_SHIFT)
#define SEGMENT_OFFSET_CUSTOM(x)        (((u32)(x) & ~SEGMENT_MASK))
#define SEGMENTED_TO_VIRTUAL(x)  (void*)(SEGMENT_OFFSET_CUSTOM(x) + D_80100F50[SEGMENT_INDEX(x)].base_address)
#define SEGMENTED_TO_VIRTUAL2(x) (void*)(D_80100F50[SEGMENT_INDEX(x)].base_address + SEGMENT_OFFSET_CUSTOM(x))

//macros for simplifying the "play sound effect" calls
#define PLAYSFX(id,arg4,flag) playSoundEffect(id,NULL,NULL,NULL,arg4,flag)
#define PLAYSFXAT(id,pos,arg4,flag) playSoundEffect(id,&pos.x,&pos.y,&pos.z,arg4,flag)
#define flabs(A) (((A) < 0.0f) ? (-A) : (A))

#endif
