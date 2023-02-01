#include "common.h"
#include "xstdio.h"
//AOF=2

s32 __osSyncVPrintf(const char *fmt, va_list args, s32 arg2) {
    return 1;
}

void osSyncPrintf(const char *fmt, ...) {
    int ans;
    va_list ap;
    va_start(ap, fmt);
    
    _Printf((void*)&__osSyncVPrintf, NULL, fmt, ap);
}
