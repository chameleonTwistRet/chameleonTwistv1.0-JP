#include "common.h"
#include "siint.h"
//AOF=1

s32 __osSiRawStartDma(s32 direction, void *dramAddr) {
    if (__osSiDeviceBusy() != 0) {
        return -1;
    }
    if (direction == 1) {
        osWritebackDCache(dramAddr, 0x40);
    }
    
    IO_WRITE(SI_DRAM_ADDR_REG, osVirtualToPhysical(dramAddr));

    if (direction == OS_READ) {
        IO_WRITE(SI_PIF_ADDR_RD64B_REG, PIF_RAM_START);
    } else {
        IO_WRITE(SI_PIF_ADDR_WR64B_REG, PIF_RAM_START);
    }
    
    if (direction == 0) {
        osInvalDCache(dramAddr, 0x40);
    }
    return 0;
}
