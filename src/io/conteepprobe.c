#include "common.h"
#include "controller.h"
#include "siint.h"
//AOF=1

s32 osEepromProbe(OSMesgQueue *mq) {
    s32 ret = 0;
    OSContStatus sdata;
    
    __osSiGetAccess();
    ret = __osEepStatus(mq, &sdata);
    if (ret == 0 && sdata.type & 0x8000) {
        ret = 1;
    } else {
        ret = 0;
    }
    __osSiRelAccess(); 
    return ret;
}
