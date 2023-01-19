#include "common.h"
#include "PR/os_internal.h"
//AOF=1

struct __osHwInt {
    s32 (*handler)(void);
};

extern struct __osHwInt __osHwIntTable[];

void __osSetHWIntrRoutine(OSHWIntr interrupt, s32 (*handler)(void)) {
    register u32 saveMask= __osDisableInt();

    __osHwIntTable[interrupt].handler = handler;
    __osRestoreInt(saveMask);
}
