#include "common.h"
#include "controller.h"
#include "siint.h"

s32 osPfsInitPak(OSMesgQueue* queue, OSPfs* pfs, int channel) {
    s32 ret = 0;

    __osSiGetAccess();
    ret = __osPfsGetStatus(queue, channel);
    __osSiRelAccess();

    if (ret != 0) {
        return ret;
    }

    pfs->queue = queue;
    pfs->channel = channel;
    pfs->status = 0;
    //pfs->activebank = -1;
    ERRCK(__osGetId(pfs));

    ret = osPfsChecker(pfs);
    pfs->status |= PFS_INITIALIZED;
    return ret;
}

s32 __osPfsGetStatus(OSMesgQueue* queue, int channel) {
    s32 ret = 0;
    OSMesg msg;
    u8 bitpattern;
    OSContStatus contData[MAXCONTROLLERS];
    OSContStatus data;

    __osPfsRequestData(0);

    ret = __osSiRawStartDma(OS_WRITE, &__osPfsPifRam);
    osRecvMesg(queue, &msg, OS_MESG_BLOCK);
    ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
    osRecvMesg(queue, &msg, OS_MESG_BLOCK);
    __osPfsGetInitData(&bitpattern, &contData[0]);

    if (contData[channel].status & CONT_CARD_ON) {
        if (contData[channel].status & CONT_CARD_PULL) {
            return 2;
        }
    }

    if (contData[channel].errno != 0 || !(contData[channel].status & CONT_CARD_ON)) {
        return 1;
    } else if (contData[channel].status & CONT_ADDR_CRC_ER) {
        return 4;
    }

    return ret;
}
