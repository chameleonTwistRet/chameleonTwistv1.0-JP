#ifndef MACROS_H
#define MACROS_H
#include "variables.jp.h"
#include "common_structs.h"

#define MAX_ACTORS 64

// GENERAL MATHS //
#define PI_SHORT 3.14156 //for unknown reasons, less digits are randomly required
#define PI 3.141592653589793
#define TAU 6.283185307179586
#define PI_HALF 1.57078
#define SQ(x) ((x)*(x))
#define SUM_OF_SQUARES(x,y) (SQ(x) + SQ(y))
#define NORM_2(x,y) (sqrtf(SQ(x) + SQ(y)))
#define NORM_3(x,y,z) (sqrtf(SQ(x) + SQ(y) + SQ(z)))
#define sqrtf __sqrtf
#define sinf __sinf
#define cosf __cosf
#define DEGREES_TO_RADIANS_2PI(x) ((x) * 2 * PI / 360.0)
#define DEGREES_TO_RADIANS_PI(x) (x * PI / 180.0)
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define ROUND(d)	(int)(((d) >= 0.0) ? ((d) + 0.5) : ((d) - 0.5))
#define	ABS(d)		((d) > 0) ? (d) : -(d)
#define	ABS2(d)		(((d) < 0) ? -(d) : (d))
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

#define PACK_FILL_COLOR(r, g, b, a) (GPACK_RGBA5551(r, g, b, a) << 0x10) | GPACK_RGBA5551(r, g, b, a)
#define PACK_FILL_DEPTH(z,dz) (GPACK_ZDZ(z, dz) << 0x10) | GPACK_ZDZ(z, dz)

//macros for simplifying the "play sound effect" calls
#define PLAY_SFX(id,arg4,flag) PlaySoundEffect(id,NULL,NULL,NULL,arg4,flag)
#define PLAY_SFX_AT(id,pos,arg4,flag) PlaySoundEffect(id,&pos.x,&pos.y,&pos.z,arg4,flag)

#define flabs(A) (((A) < 0.0f) ? (-A) : (A))
#define RANDOM(min, max)  ((min) + (Rand() % (s32)((max) - (min) + 1)))

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

//asset file related macros so we dont have to split useless files
//identity matrix
#define IDENTITY {0x00010000, 0, 1, 0, 0, 0x00010000, 0, 1,    0, 0, 0, 0, 0, 0, 0, 0}
#define ZERO_MTX {0, 0, 0, 0, 0, 0, 0, 0,    0, 0, 0, 0, 0, 0, 0, 0}
//basic file padding
#define FILEPAD {0xB8,0,0,0,0,0,0,0}

#define LIST_END -1


#endif
