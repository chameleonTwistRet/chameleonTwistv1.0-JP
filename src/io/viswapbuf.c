#include "common.h"
#include <PR/os_internal.h>
#include "viint.h"
//AOF=1

void osViSwapBuffer(void* frameBufPtr) {
    u32 saveMask = __osDisableInt();

    __osViNext->framep = frameBufPtr;
    __osViNext->state |= VI_STATE_BUFFER_UPDATED;
    __osRestoreInt(saveMask);
}
