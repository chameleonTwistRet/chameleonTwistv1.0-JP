#include "PR/os_internal.h"
#include "PR/rcp.h"
#include "controller.h"
#include "siint.h"

#define READFORMAT(ptr) ((__OSContRamReadFormat*)(ptr))

static void __osPackRamReadData(int channel, u16 address);

s32 __osContRamRead(OSMesgQueue* mq, int channel, u16 address, u8* buffer) {
    s32 ret = 0;
    int i;
    u8* ptr = (u8*)&__osPfsPifRam;
    __OSContRamReadFormat ramreadformat;
    int retry = 2;

    __osSiGetAccess();
    __osContLastCmd = CONT_CMD_READ_PAK;
    __osPackRamReadData(channel, address);
    ret = __osSiRawStartDma(OS_WRITE, &__osPfsPifRam);
    osRecvMesg(mq, NULL, OS_MESG_BLOCK);
    
    do {
        for (i = 0; i < ARRLEN(__osContPifRam.ramarray) + 1; i++) {
            __osPfsPifRam.ramarray[i] = 0xFF;
        }
        __osPfsPifRam.pifstatus = 0;
        ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
        osRecvMesg(mq, NULL, OS_MESG_BLOCK);
        ptr = (u8*)&__osPfsPifRam;

        if (channel != 0) {
            for (i = 0; i < channel; i++) {
                ptr++;
            }
        }

        ramreadformat = *READFORMAT(ptr);

        ret = CHNL_ERR(ramreadformat);
        if (ret == 0) {
            u8 c = __osContDataCrc((u8*)&ramreadformat.data);
            if (c != ramreadformat.datacrc) {
                ret = __osPfsGetStatus(mq, channel);
                
                if (ret != 0) {
                    __osSiRelAccess();
                    return ret;
                }
                
                ret = PFS_ERR_CONTRFAIL;
            } else  {
                for (i = 0; i < ARRLEN(ramreadformat.data); i++) {
                    *buffer++ = ramreadformat.data[i];
                }
                continue;
            }
        }
    } while ((ret == PFS_ERR_CONTRFAIL) && retry-- >= 0);

    __osSiRelAccess();

    return ret;
}

static void __osPackRamReadData(int channel, u16 address) {
    u8 *ptr;
    __OSContRamReadFormat ramreadformat;
    int i;

    ptr = (u8 *)__osPfsPifRam.ramarray;
    
    for (i = 0; i < ARRLEN(__osContPifRam.ramarray) + 1; i++) {
        __osPfsPifRam.ramarray[i] = 0;
    }
    __osPfsPifRam.pifstatus = CONT_CMD_EXE;
    ramreadformat.dummy = CONT_CMD_NOP;
    ramreadformat.txsize = CONT_CMD_READ_PAK_TX;
    ramreadformat.rxsize = CONT_CMD_READ_PAK_RX;
    ramreadformat.cmd = CONT_CMD_READ_PAK;
    ramreadformat.address = (address << 0x5) | __osContAddressCrc(address);
    ramreadformat.datacrc = CONT_CMD_NOP;
    
    for (i = 0; i < ARRLEN(ramreadformat.data); i++) {
        ramreadformat.data[i] = CONT_CMD_NOP;
    }
    
    if (channel != 0) {
        for (i = 0; i < channel; i++) {
            *ptr++ = CONT_CMD_REQUEST_STATUS;
        }
    }
    
    *(__OSContRamReadFormat *)ptr = ramreadformat;
    ptr += sizeof(__OSContRamReadFormat);
    ptr[0] = CONT_CMD_END;
}
