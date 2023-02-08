#include "common.h"
#include "controller.h"
#include "siint.h"

void __osPackEepReadData(u8 address);
extern OSPifRam __osEepPifRam;

s32 osEepromRead(OSMesgQueue *mq, u8 address, u8 *buffer) {
	s32 ret = 0;
	int i = 0;
    u8 *ptr;
	OSContStatus sdata;
	__OSContEepromFormat eepromformat;
    
	ptr = (u8 *)&__osEepPifRam.ramarray;

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
	
	__osPackEepReadData(address);
	ret = __osSiRawStartDma(OS_WRITE, &__osEepPifRam); //send command to pif
	osRecvMesg(mq, NULL, OS_MESG_BLOCK);
    
    for (i = 0; i < 16; i++) {
        __osEepPifRam.ramarray[i] = 0xFF;
    }
    
    __osEepPifRam.pifstatus = 0;
	ret = __osSiRawStartDma(OS_READ, &__osEepPifRam); //recv response
	__osContLastCmd = CONT_CMD_READ_EEPROM;
	osRecvMesg(mq, NULL, OS_MESG_BLOCK);
	
	for (i = 0; i < MAXCONTROLLERS; i++) {
		//skip the first 4 bytes
		ptr++;
	}

	eepromformat = *(__OSContEepromFormat *)ptr;
	ret = CHNL_ERR(eepromformat);

	if (ret == 0) {
		for (i = 0; i < ARRLEN(eepromformat.data); i++) {
			*buffer++ = eepromformat.data[i];
		}
	}

	__osSiRelAccess();
	return ret;
}

void __osPackEepReadData(u8 address) {
	u8 *ptr = (u8 *)&__osEepPifRam.ramarray;
	__OSContEepromFormat eepromformat;
	int i;
    
    for (i = 0; i < 16; i++) {
        __osEepPifRam.ramarray[i] = 0xFF;
    }
	__osEepPifRam.pifstatus = CONT_CMD_EXE;

	eepromformat.txsize = CONT_CMD_READ_EEPROM_TX;
	eepromformat.rxsize = CONT_CMD_READ_EEPROM_RX;
	eepromformat.cmd = CONT_CMD_READ_EEPROM;
	eepromformat.address = address;
    for (i = 0; i < 8; i++) {
        eepromformat.data[i] = 0;
    }
	for (i = 0; i < MAXCONTROLLERS; i++) {
		*ptr++ = 0;
	}
	
	*(__OSContEepromFormat *)(ptr) = eepromformat;
	ptr += sizeof(__OSContEepromFormat);
	ptr[0] = CONT_CMD_END;
}
