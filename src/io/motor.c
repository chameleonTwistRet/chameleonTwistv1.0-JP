#include "common.h"

#include <os_internal.h>
#include "controller.h"
#include "siint.h"

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/func_800D9200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/osMotorInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/osMotorStart.s")
//s32 osMotorStart(OSPfs *pfs)
//{
//
//    int i;
//    s32 ret;
//    u8 *ptr;
//    __OSContRamReadFormat ramreadformat;
//
//    ptr = (u8 *)&__osPfsPifRam;
//
//    if (!__osMotorinitialized[pfs->channel])
//        return PFS_ERR_INVALID;
//
//    __osSiGetAccess();
//
//    __osContLastCmd = CONT_CMD_WRITE_MEMPACK;
//    __osSiRawStartDma(OS_WRITE, &_MotorStartData[pfs->channel]);
//    osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
//    ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
//    osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
//    ptr = (u8 *)&__osPfsPifRam;
//
//    if (pfs->channel != 0)
//        for (i = 0; i < pfs->channel; i++)
//            ptr++;
//
//    ramreadformat = *(__OSContRamReadFormat *)ptr;
//    ret = CHNL_ERR(ramreadformat);
//    if (ret == 0 && ramreadformat.datacrc != __osContDataCrc((u8*)&_motorstartbuf))
//    {
//        ret = PFS_ERR_CONTRFAIL;
//    }
//    __osSiRelAccess();
//    return ret;
//}

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/osMotorStop.s")
