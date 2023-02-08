#include "common.h"
#include "controller.h"
//AOF=8

u16 __osSumcalc(u8 *ptr, int length) {
    int i;
    u32 sum = 0;
    u8 *tmp = ptr;

    for (i = 0; i < length; i++) {
        sum += *tmp++;
        sum = sum & 0xFFFF;
    }

    return sum;
}

s32 __osIdCheckSum(u16 *ptr, u16 *csum, u16 *icsum) {
    u16 data = 0;
    u32 j;
    
    *icsum = 0;
    *csum = *icsum;

    for (j = 0; j < ((sizeof(__OSPackId) - sizeof(u32)) / sizeof(u8)); j += 2) {
        data = *(u16 *)((u8 *)ptr + j);
        *csum += data;
        *icsum += ~data;
    }

    return 0;
}

s32 __osRepairPackId(OSPfs *pfs, __OSPackId *badid, __OSPackId *newid) {
    s32 ret = 0;
    u8 temp[BLOCKSIZE];
    u8 comp[BLOCKSIZE];
    u8 mask = 0;
    int i;
    int j;
    u16 index[4];
    
    if (pfs->activebank != 0) {
        pfs->activebank = 0;
        ERRCK(__osPfsSelectBank(pfs));
    }
    
    newid->repaired = -1;
    newid->random = osGetCount();
    newid->serial_mid = badid->serial_mid;
    newid->serial_low = badid->serial_low;
    
    j = 0;
    do {
        pfs->activebank = j;
        ERRCK(__osPfsSelectBank(pfs));
        ERRCK(__osContRamRead(pfs->queue, pfs->channel, 0, temp));
        
        temp[0] = j | 0x80;

        for (i = 1; i < BLOCKSIZE; i++) {
            temp[i] = ~temp[i];
        }

        ERRCK(__osContRamWrite(pfs->queue, pfs->channel, 0, temp, FALSE));
        ERRCK(__osContRamRead(pfs->queue, pfs->channel, 0, comp));

        for (i = 0; i < BLOCKSIZE; i++) {
            if (comp[i] != temp[i]) {
                break;
            }
        }

        if (i != BLOCKSIZE) {
            break;
        }

        if (j > 0) {
            pfs->activebank = 0;
            ERRCK(__osPfsSelectBank(pfs));
            ERRCK(__osContRamRead(pfs->queue, pfs->channel, 0, (u8*)temp));
            
            if (temp[0] != 0x80) {
                break;
            }
        }

        j++;
    } while (j < PFS_MAX_BANKS);
    
    pfs->activebank = 0;
    ERRCK(__osPfsSelectBank(pfs))
    
    if (j > 0) {
        mask = 1;
    } else {
        mask = 0;
    }

    newid->deviceid = (badid->deviceid & (u16)~1) | mask;
    newid->banks = j;
    newid->version = badid->version;
    __osIdCheckSum((u16*)newid, &newid->checksum, &newid->inverted_checksum);
    index[0] = PFS_ID_0AREA;
    index[1] = PFS_ID_1AREA;
    index[2] = PFS_ID_2AREA;
    index[3] = PFS_ID_3AREA;

    for (i = 0; i < ARRLEN(index); i++) {
        ERRCK(__osContRamWrite(pfs->queue, pfs->channel, index[i], (u8*)newid, TRUE));
    }
    
    ERRCK(__osContRamRead(pfs->queue, pfs->channel, PFS_ID_0AREA, (u8*)temp));
    
    for (i = 0; i < BLOCKSIZE; i++) {
        if (temp[i] != ((u8 *)newid)[i]) {
            return PFS_ERR_ID_FATAL;
        }
    }
    return 0;
}

s32 __osCheckPackId(OSPfs *pfs, __OSPackId *temp) {
    u16 index[4];
    s32 ret = 0;
    u16 sum;
    u16 isum;
    int i;
    int j;
    
    if (pfs->activebank != 0) {
        pfs->activebank = 0;
        ERRCK(__osPfsSelectBank(pfs));
    }
    
    index[0] = PFS_ID_0AREA;
    index[1] = PFS_ID_1AREA;
    index[2] = PFS_ID_2AREA;
    index[3] = PFS_ID_3AREA;
    for (i = 1; i < ARRLEN(index); i++) {
        ERRCK(__osContRamRead(pfs->queue, pfs->channel, index[i], (u8*)temp));
        __osIdCheckSum((u16 *)temp, &sum, &isum);
        if (temp->checksum == sum && temp->inverted_checksum == isum) {
            break;
        }
    }

    if (i == ARRLEN(index)) {
        return PFS_ERR_ID_FATAL;
    }

    for (j = 0; j < ARRLEN(index); j++) {
        if (j != i) {
            ERRCK(__osContRamWrite(pfs->queue, pfs->channel, index[j], (u8*)temp, TRUE));
        }
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/io/contpfs/__osGetId.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/contpfs/func_800E4860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/contpfs/func_800E495C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/io/contpfs/__osPfsSelectBank.s")
