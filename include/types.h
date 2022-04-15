#ifndef _TYPES_H_
#define _TYPES_H_

#define NULL 0

typedef signed char             s8;
typedef unsigned char           u8;
typedef signed short int        s16;
typedef unsigned short int      u16;
typedef signed int              s32;
typedef unsigned int            u32;
typedef signed long long int    s64;
typedef unsigned long long int  u64;
typedef float                   f32;
typedef double                  f64;

typedef struct Vec2f {
               f32 x;
               f32 y;
} Vec2f;

typedef struct Vec2s {
               s32 x;
               s32 y;
} Vec2s;

typedef struct Vec3f {
               f32 x;
               f32 y;
               f32 z;
} Vec3f;

typedef struct Vec3s {
               s32 x;
               s32 y;
               s32 z;
} Vec3s;

typedef struct Vec4f {
               f32 x;
               f32 y;
               f32 z;
               f32 yaw;
} Vec4f;

#define PI 3.141592653589793
#define SQ(x) x*x

#endif
