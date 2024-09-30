#include "common.h"

void* memcpy(void *s1, const void *s2, u32 n) {
    u8 *su1 = (u8 *)s1;
    const u8 *su2 = (const u8 *)s2;
    while (n > 0)
    {
        *su1++ = *su2++;
        n--;
    }
    return (void *)s1;
}

s32 strlen(const u8 *s) {
    const u8 *sc = s;
    while (*sc)
        sc++;
    return sc - s;
}

const char* strchr(const u8* str, s32 ch) {
    u8 c = ch;

    while (*str != c) {
        if (*str == 0) {
            return NULL;
        }
        str++;
    }
    return (char*)str;
}
