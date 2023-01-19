#include "common.h"
#include <PR/os_internal.h>
#include <PR/rcp.h>
#include "siint.h"
//AOF=1

s32 __osSpRawReadIo(u32 devAddr, u32 *data) {
    if (__osSiDeviceBusy()) {
        return -1;
    }
    
    *data = IO_READ(devAddr);
    return 0;
}
