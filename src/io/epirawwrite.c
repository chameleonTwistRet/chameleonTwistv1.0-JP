#include "common.h"
#include "piint.h"
#include "siint.h"
#include "PR/rcp.h"
//AOF=1

s32 __osEPiRawWriteIo(OSPiHandle* pihandle, u32 devAddr, u32 data) {
    register u32 stat = IO_READ(PI_STATUS_REG);
    
    while (stat & 3) {
        stat = IO_READ(PI_STATUS_REG);
    }
    IO_WRITE(pihandle->baseAddress | devAddr, data);

    return 0;
}
