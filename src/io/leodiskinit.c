#include "common.h"

#define FLASH_CMD_PROGRAM_PAGE  0xA5000000

extern OSPiHandle __CartRomHandle;  //bss
extern OSPiHandle* __osDiskHandle;

#ifdef NON_MATCHING
OSPiHandle* osLeoDiskInit(void) {
    u32 saveMask;

    __CartRomHandle.type = DEVICE_TYPE_64DD;
    __CartRomHandle.baseAddress = FLASH_CMD_PROGRAM_PAGE;
    __CartRomHandle.latency = 3;
    __CartRomHandle.pulse = 6;
    __CartRomHandle.pageSize = 6;
    __CartRomHandle.relDuration = 2;

    IO_WRITE(PI_BSD_DOM2_LAT_REG, 3);
    IO_WRITE(PI_BSD_DOM2_PWD_REG, __CartRomHandle.pulse);
    IO_WRITE(PI_BSD_DOM2_PGS_REG, __CartRomHandle.pageSize);
    IO_WRITE(PI_BSD_DOM2_RLS_REG, __CartRomHandle.relDuration);
	_bzero(&__CartRomHandle.transferInfo, sizeof(__OSTranxInfo));


	saveMask = __osDisableInt();
	__CartRomHandle.next = __osPiTable;
	__osPiTable = &__CartRomHandle;
    __osDiskHandle = &__CartRomHandle;
	__osRestoreInt(saveMask);
	
	return &__CartRomHandle;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/io/leodiskinit/osLeoDiskInit.s")
#endif
