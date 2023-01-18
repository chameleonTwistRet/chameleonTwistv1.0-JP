#include "common.h"
#include "PR/os_internal.h"

//AOF=1

void __osResetGlobalIntMask(OSHWIntr mask) {
    register u32 saveMask = __osDisableInt();

    __OSGlobalIntMask &= ~(mask & ~OS_IM_RCP);

    __osRestoreInt(saveMask);
}
