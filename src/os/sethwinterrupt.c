#include "common.h"
#include "PR/os_internal.h"

struct __osHwInt {
    s32 (*handler)(void);
};

struct __osHwInt __osHwIntTable[5] = {0};

void __osSetHWIntrRoutine(OSHWIntr interrupt, s32 (*handler)(void)) {
    register u32 saveMask= __osDisableInt();

    __osHwIntTable[interrupt].handler = handler;
    __osRestoreInt(saveMask);
}
