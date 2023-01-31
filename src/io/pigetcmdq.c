#include "common.h"
#include "piint.h"
//AOF=1

OSMesgQueue *osPiGetCmdQueue(void) {
    if (!__osPiDevMgr.active) {
        return NULL;
    }
    
    return __osPiDevMgr.cmdQueue;
}
