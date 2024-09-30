#include "common.h"
#include "controller.h"
#include "siint.h"

void __osPackEepWriteData(u8 address, u8 *buffer);
s32 osEepromWrite(OSMesgQueue *mq, u8 address, u8 *buffer)
{
    s32 ret = 0;
    s32 i;
    u8 *ptr = (u8 *)&__osEepPifRam.ramarray;
    __OSContEepromFormat eepromformat;
    OSContStatus sdata;
    
    if (address > 0x40) {
        return -1;
    }
    __osSiGetAccess();
    
    ret = __osEepStatus(mq, &sdata);
    
    if (ret != 0 || sdata.type != 0x8000) {
        return 8;
    }

    while (sdata.status & CONT_EEPROM_BUSY) {
        __osEepStatus(mq, &sdata);
    }
    
    __osPackEepWriteData(address, buffer);
    ret = __osSiRawStartDma(OS_WRITE, &__osEepPifRam); //send command to pif
    osRecvMesg(mq, NULL, OS_MESG_BLOCK);
    
    for (i = 0; i < 16; i++) {
        __osEepPifRam.ramarray[i] = 0xFF;
    }
    
    __osEepPifRam.pifstatus = 0;
    ret = __osSiRawStartDma(OS_READ, &__osEepPifRam); //recv response
    __osContLastCmd = CONT_CMD_WRITE_EEPROM;
    osRecvMesg(mq, NULL, OS_MESG_BLOCK);

	for (i = 0; i < MAXCONTROLLERS; i++) {
		//skip the first 4 bytes
		ptr++;
	}
    
    eepromformat = *(__OSContEepromFormat *)ptr;

    ret = CHNL_ERR(eepromformat);

    __osSiRelAccess();
    return ret;
}

void __osPackEepWriteData(u8 address, u8 *buffer) {
    u8 *ptr = (u8 *)&__osEepPifRam.ramarray;
    __OSContEepromFormat eepromformat;
    int i;
    
    for (i = 0; i < 16; i++) {
        __osEepPifRam.ramarray[i] = 0xFF;
    }
    __osEepPifRam.pifstatus = CONT_CMD_EXE;

    eepromformat.txsize = CONT_CMD_WRITE_EEPROM_TX;
    eepromformat.rxsize = CONT_CMD_WRITE_EEPROM_RX;
    eepromformat.cmd = CONT_CMD_WRITE_EEPROM;
    eepromformat.address = address;
    
    for (i = 0; i < ARRLEN(eepromformat.data); i++) {
        eepromformat.data[i] = *buffer++;
    }

    for (i = 0; i < MAXCONTROLLERS; i++) {
        *ptr++ = 0;
    }
    
    *(__OSContEepromFormat *)(ptr) = eepromformat;
    ptr += sizeof(__OSContEepromFormat);
    ptr[0] = CONT_CMD_END;
}

s32 __osEepStatus(OSMesgQueue *mq, OSContStatus *data) {
    s32 ret = 0;
    int i;
    u8 *ptr = (u8 *)__osEepPifRam.ramarray;
    __OSContRequesFormat requestformat;
    
    for (i = 0; i < ARRLEN(__osEepPifRam.ramarray) + 1; i++) {
        __osEepPifRam.ramarray[i] = 0;
    }

    __osEepPifRam.pifstatus = CONT_CMD_EXE;
    ptr = (u8 *)__osEepPifRam.ramarray;
    
    for (i = 0; i < MAXCONTROLLERS; i++) {
        *ptr++ = CONT_CMD_REQUEST_STATUS;
    }
    
    requestformat.dummy = CONT_CMD_NOP;
    requestformat.txsize = CONT_CMD_REQUEST_STATUS_TX;
    requestformat.rxsize = CONT_CMD_REQUEST_STATUS_RX;
    requestformat.cmd = CONT_CMD_REQUEST_STATUS;
    requestformat.typeh = CONT_CMD_NOP;
    requestformat.typel = CONT_CMD_NOP;
    requestformat.status = CONT_CMD_NOP;
    requestformat.dummy1 = CONT_CMD_NOP;
    *(__OSContRequesFormat *)ptr = requestformat;
    ptr += sizeof(__OSContRequesFormat);
    *ptr = CONT_CMD_END;

    ret = __osSiRawStartDma(OS_WRITE, &__osEepPifRam);
    osRecvMesg(mq, NULL, OS_MESG_BLOCK);
    __osContLastCmd = CONT_CMD_WRITE_EEPROM;
    ret = __osSiRawStartDma(OS_READ, &__osEepPifRam);
    osRecvMesg(mq, NULL, OS_MESG_BLOCK);

    if (ret != 0) {
        return ret;
    }

    ptr = (u8 *)&__osEepPifRam;
    
    for (i = 0; i < MAXCONTROLLERS; i++) {
        *ptr++ = 0;
    }

    requestformat = *(__OSContRequesFormat *)ptr;
    data->errno = CHNL_ERR(requestformat);
    data->type = (requestformat.typel << 8) | requestformat.typeh;
    data->status = requestformat.status;
    
    if (data->errno != 0) {
        return data->errno;
    }
    
    return 0;
}
