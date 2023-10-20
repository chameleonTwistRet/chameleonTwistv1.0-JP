#ifndef _XSTDIO_H
#define _XSTDIO_H
#include "PR/ultratypes.h"

typedef char* va_list;
#define _FP 1
#define _INT 0
#define _STRUCT 2


#define _VA_FP_SAVE_AREA 0x10
#define _VA_ALIGN(p, a) (((u32)(((char*)p) + ((a) > 4 ? (a) : 4) - 1)) & -((a) > 4 ? (a) : 4))
#define va_start(vp, parmN) (vp = ((va_list)&parmN + sizeof(parmN)))

#define __va_stack_arg(list, mode)                          \
    (                                                       \
        ((list) = (char*)_VA_ALIGN(list, __builtin_alignof(mode)) + \
                  _VA_ALIGN(sizeof(mode), 4)),              \
        (((char*)list) - (_VA_ALIGN(sizeof(mode), 4) - sizeof(mode))))

#define __va_double_arg(list, mode)                                                                    \
    (                                                                                                  \
        (((s32)list & 0x1) /* 1 byte aligned? */                                                      \
             ? (list = (char*)((s32)list + 7), (char*)((s32)list - 6 - _VA_FP_SAVE_AREA))          \
             : (((s32)list & 0x2) /* 2 byte aligned? */                                               \
                    ? (list = (char*)((s32)list + 10), (char*)((s32)list - 24 - _VA_FP_SAVE_AREA)) \
                    : __va_stack_arg(list, mode))))

#define va_arg(list, mode) ((mode*)(((__builtin_classof(mode) == _FP &&          \
                                       __builtin_alignof(mode) == sizeof(f64)) \
                                          ? __va_double_arg(list, mode)           \
                                          : __va_stack_arg(list, mode))))[-1]
#define va_end(__list)

typedef struct {
    /* 0x0 */ union {
        /* 0x0 */ long long ll;
        /* 0x0 */ double ld;
    } v;
    /* 0x8 */ unsigned char* s;
    /* 0xC */ int n0;
    /* 0x10 */ int nz0;
    /* 0x14 */ int n1;
    /* 0x18 */ int nz1;
    /* 0x1C */ int n2;
    /* 0x20 */ int nz2;
    /* 0x24 */ int prec;
    /* 0x28 */ int width;
    /* 0x2C */ u32 nchar;
    /* 0x30 */ unsigned int flags;
    /* 0x34 */ char qual;
} _Pft;

typedef struct {
    int quot;			/* Quotient.  */
    int rem;			/* Remainder.  */
} div_t;

typedef struct {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
} ldiv_t;

typedef struct {
    long long int quot;		/* Quotient.  */
    long long int rem;		/* Remainder.  */
} lldiv_t;

lldiv_t lldiv(long long num, long long denom);
ldiv_t ldiv(long num, long denom);
void *memcpy(void *s1, const void *s2, u32 n);
s32 strlen(const u8 *s);
const char* strchr(const char* str, s32 ch);

#define FLAGS_SPACE 1
#define FLAGS_PLUS 2
#define FLAGS_MINUS 4
#define FLAGS_HASH 8
#define FLAGS_ZERO 16

#define TRUE    1
#define NULL    0

#define isdigit(x) ((x >= '0' && x <= '9'))
#define LDSIGN(x) (((unsigned short *)&(x))[0] & 0x8000)

#define ATOI(dst, src)                   \
    for (dst = 0; isdigit(*src); ++src)  \
    {                                    \
        if (dst < 999)                   \
            dst = dst * 10 + *src - '0'; \
    }

#define MAX_PAD ((33 - 1))
#define PAD(s, n)                                             \
    if (0 < (n))                                              \
    {                                                         \
        int i, j = (n);                                       \
        for (; 0 < j; j -= i)                                 \
        {                                                     \
            i = MAX_PAD < (unsigned int)j ? (int)MAX_PAD : j; \
            PUT(s, i);                                        \
        }                                                     \
    }
#define PUT(s, n)                                \
    if (0 < (n))                                 \
    {                                            \
        if ((arg = (*prout)(arg, s, n)) != NULL) \
            x.nchar += (n);                      \
        else                                     \
            return x.nchar;                      \
    }

typedef char *outfun(char*,const char*,u32);

int _Printf(outfun prout, char *arg, const char *fmt, va_list args);
void _Litob(_Pft *args, u8 type);
void _Ldtob(_Pft* args, u8 type);

#endif
