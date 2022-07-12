#include "common.h"
//AOF=1

#pragma GLOBAL_ASM("asm/nonmatchings/io/pirawread/osPiRawReadIo.s")
/*
#include <os_internal.h>
#include "piint.h"
s32 osPiRawReadIo(u32 devAddr, u32 *data)
{
    register u32 stat;
    WAIT_ON_IOBUSY(stat);
    *data = IO_READ((u32)osRomBase | devAddr);
    return 0;
}
*/