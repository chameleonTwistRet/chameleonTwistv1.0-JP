#include "common.h"
#include "PR/os_internal.h"
#include "osint.h"
//AOF=1

void osYieldThread(void) {
    register u32 saveMask = __osDisableInt();
    
    __osRunningThread->state = OS_STATE_RUNNABLE;
    __osEnqueueAndYield(&__osRunQueue);
    __osRestoreInt(saveMask);
}
