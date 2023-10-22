#include "PR/os_internal.h"
#include "PR/os_version.h"
#include "controller.h"
#include "siint.h"

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/__osMakeMotorData.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/osMotorInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/osMotorStart.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/motor/osMotorStop.s")
//close but this doesn't quite match?
// extern OSPifRam __MotorDataBuf[MAXCONTROLLERS];
// #define READFORMAT(ptr) ((__OSContRamReadFormat*)(ptr))

// extern OSPifRam _MotorStopData[MAXCONTROLLERS];
// extern OSPifRam _MotorStartData[MAXCONTROLLERS];
// extern u8 _motorstopbuf[32];
// extern u8 _motorstartbuf[32];
// // u32 __osMotorinitialized[MAXCONTROLLERS] = {0, 0, 0, 0};

// s32 osMotorStop(OSPfs *pfs) {
//     int i;
//     s32 ret;
//     u8 *ptr;
//     __OSContRamReadFormat ramreadformat;

//     ptr = (u8 *)&__osPfsPifRam;

//     __osSiGetAccess();

//     __osContLastCmd = CONT_CMD_WRITE_PAK;
//     __osSiRawStartDma(OS_WRITE, &_MotorStopData[pfs->channel]);
//     osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
//     ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
//     osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
//     ptr = (u8 *)&__osPfsPifRam;

//     if (pfs->channel != 0) {
//         for (i = 0; i < pfs->channel; i++) {
//             ptr++;
//         }
//     }

//     ramreadformat = *(__OSContRamReadFormat *)ptr;
//     ret = CHNL_ERR(ramreadformat);

//     if (ret == 0 && ramreadformat.datacrc != 0) {
//         ret = PFS_ERR_CONTRFAIL;
//     }

//     __osSiRelAccess();
//     return ret;
// }

// s32 osMotorStart(OSPfs *pfs) {

//     int i;
//     s32 ret;
//     u8 *ptr;
//     __OSContRamReadFormat ramreadformat;

//     ptr = (u8 *)&__osPfsPifRam;

//     __osSiGetAccess();

//     __osContLastCmd = CONT_CMD_WRITE_PAK;
//     __osSiRawStartDma(OS_WRITE, &_MotorStartData[pfs->channel]);
//     osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
//     ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
//     osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
//     ptr = (u8 *)&__osPfsPifRam;

//     if (pfs->channel != 0) {
//         for (i = 0; i < pfs->channel; i++) {
//             ptr++;
//         }
//     }

//     ramreadformat = *(__OSContRamReadFormat *)ptr;
//     ret = CHNL_ERR(ramreadformat);

//     if (ret == 0 && ramreadformat.datacrc != 0xEB) {
//         ret = PFS_ERR_CONTRFAIL;
//     }

//     __osSiRelAccess();
//     return ret;
// }

// static void _MakeMotorData(int channel, OSPifRam *mdata) {
//     u8 *ptr = (u8*) mdata->ramarray;
//     __OSContRamReadFormat ramreadformat;
//     int i;

//     ramreadformat.dummy = CONT_CMD_NOP;
//     ramreadformat.txsize = CONT_CMD_WRITE_PAK_TX;
//     ramreadformat.rxsize = CONT_CMD_WRITE_PAK_RX;
//     ramreadformat.cmd = CONT_CMD_WRITE_PAK;
//     ramreadformat.address = CONT_BLOCK_RUMBLE >> 3;
//     ramreadformat.address = (u8)(__osContAddressCrc(CONT_BLOCK_RUMBLE) | (CONT_BLOCK_RUMBLE << 5));

//     if (channel != 0) {
//         for (i = 0; i < channel; i++) {
//             *ptr++ = CONT_CMD_REQUEST_STATUS;
//         }
//     }

//     *READFORMAT(ptr) = ramreadformat;
//     ptr += sizeof(__OSContRamReadFormat);
//     ptr[0] = CONT_CMD_END;
// }

// s32 osMotorInit(OSMesgQueue *mq, OSPfs *pfs, int channel) {
//     s32 ret;
//     u8 temp[32];

//     pfs->queue = mq;
//     pfs->channel = channel;
//     pfs->activebank = 0xFF;
//     pfs->status = 0;

//     ret = __osPfsSelectBank(pfs);

//     if (ret == PFS_ERR_NEW_PACK) {
//         ret = __osPfsSelectBank(pfs);
//     }

//     if (ret != 0) {
//         return ret;
//     }

//     ret = __osContRamRead(mq, channel, CONT_BLOCK_DETECT, temp);

//     if (ret == PFS_ERR_NEW_PACK) {
//         ret = PFS_ERR_CONTRFAIL;
//     }

//     if (ret != 0) {
//         return ret;
//     }

//     if (temp[31] == 254) {
//         return PFS_ERR_DEVICE;
//     }

//     ret = __osPfsSelectBank(pfs);
//     if (ret == PFS_ERR_NEW_PACK) {
//         ret = PFS_ERR_CONTRFAIL;
//     }

//     if (ret != 0) {
//         return ret;
//     }

//     ret = __osContRamRead(mq, channel, CONT_BLOCK_DETECT, temp);
//     if (ret == PFS_ERR_NEW_PACK) {
//         ret = PFS_ERR_CONTRFAIL;
//     }

//     if (ret != 0) {
//         return ret;
//     }

//     if (temp[31] != 0x80) {
//         return PFS_ERR_DEVICE;
//     }

//     if (!(pfs->status & PFS_MOTOR_INITIALIZED)) {
//         _MakeMotorData(channel, &_motorstartbuf[channel]);
//     }

//     pfs->status = PFS_MOTOR_INITIALIZED;
//     return 0;
// }