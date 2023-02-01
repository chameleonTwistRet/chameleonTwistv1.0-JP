#include "common.h"
//AOF=1

void osViSetEvent(OSMesgQueue *mq, OSMesg m, u32 retraceCount) {
    register u32 saveMask = __osDisableInt();

    __osViNext->msgq = mq;
    __osViNext->msg = m;
    __osViNext->retraceCount = retraceCount;
    __osRestoreInt(saveMask);
}
