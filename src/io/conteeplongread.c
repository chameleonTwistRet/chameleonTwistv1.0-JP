#include "common.h"
#include "controller.h"

#define UNK2(n) 12000 * (u64)(n) / 1000000

s32 osEepromLongRead(OSMesgQueue *mq, u8 address, u8 *buffer, int length) {
    s32 ret = 0;

    if ((u8)address > 0x40) {
        return -1;
    }
    
    while (length > 0) {
        ERRCK(osEepromRead(mq, address, buffer));
        length -= EEPROM_BLOCK_SIZE;
        address++;
        buffer += EEPROM_BLOCK_SIZE;
        osSetTimer(&__osEepromTimer, UNK2(osClockRate), 0, &__osEepromTimerQ, &__osEepromTimerMsg);
        osRecvMesg(&__osEepromTimerQ, NULL, OS_MESG_BLOCK);
    }
    
    return ret;
}
