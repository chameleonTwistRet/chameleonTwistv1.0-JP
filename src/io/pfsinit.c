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

#pragma GLOBAL_ASM("asm/nonmatchings/io/pfsinit/__osPfsGetStatus.s")
