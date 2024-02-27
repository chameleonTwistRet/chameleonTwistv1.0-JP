#include "298D0.h"

//these seem to solely be controller-based functions

/* Migrated BSS */
OSMesgQueue gEepromMsgQ;
OSMesg D_80175638;
OSContStatus D_80175640[MAXCONTROLLERS];
OSContPad D_80175650[MAXCONTROLLERS];
s32 D_80175668[MAXCONTROLLERS];       
u16 D_80175678[MAXCONTROLLERS];       
ContMain gContMain[MAXCONTROLLERS];   
u16 D_801756C0[MAXCONTROLLERS];       
OSPfs gRumblePfs[MAXCONTROLLERS];     

/* mainproc() */
s32 Controller_Init(void) {
    OSMesgQueue siQueue;
    OSMesg mesgBuf;
    s32 retPfs;         // return value from osPfsInitPak
    s32 retRumble;      // return value from osMotorInit
    u8 contPat;         // controller pattern
    s32 i;
    s32 contNo;         // number of controllers

    osCreateMesgQueue(&siQueue, &mesgBuf, 1);
    osSetEventMesg(OS_EVENT_SI, &siQueue, (OSMesg)1);
    osContInit(&siQueue, &contPat, D_80175640);
    osCreateMesgQueue(&gEepromMsgQ, &D_80175638, 1);
    osSetEventMesg(OS_EVENT_SI, &gEepromMsgQ, NULL);

    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80175668[i] = -1;
        //chain assignment required?
        D_80175678[i] = D_801756C0[i] = 0;
    }

    /* Confirm if controller [i] is inserted */
    for (i = 0, contNo = 0; i < MAXCONTROLLERS; i++) {
        if (contPat & (1 << i)) {
            if (!(D_80175640[i].errno & CONT_NO_RESPONSE_ERROR)) {  // if controller responds
                D_80175668[i] = i;
                contNo++;
            }
        }
    }

    // Check for Controller Pak (Pfs) and Rumble Pak (Motor) on each controller
    // D_80176960[i] = 1 if Controller Pak is present, 0 otherwise, used in displaying error screen?
    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80176960[i] = 0;
        if (((contPat >> i) & 1) && (D_80175640[i].type & CONT_JOYPORT) && (D_80175640[i].status & CONT_CARD_ON)) {
            retPfs = osPfsInitPak(&gEepromMsgQ, &gRumblePfs[i], i);
            if (retPfs == PFS_ERR_ID_FATAL || retPfs == PFS_ERR_DEVICE) {
                retRumble = osMotorInit(&gEepromMsgQ, &gRumblePfs[i], i);
                switch (retRumble) {
                default:
                    D_80176960[i] = 1;
                    break;
                case PFS_ERR_NOPACK:
                    D_80176960[i] = 0;
                    break;
                case PFS_ERR_CONTRFAIL:
                    D_80176960[i] = 0;
                    RumblePakError = 1;
                    break;
                case PFS_ERR_DEVICE:
                    D_80176960[i] = 0;
                    RumblePakError = 1;
                    break;
                }
            }
        }
    }
    return contNo;
}

void Controller_StartRead(void) {
    osContStartReadData(&gEepromMsgQ);
}

void Controller_Zero(ContMain* cont) {
    cont->buttons0 = cont->buttons1 = cont->buttons2 = 0;
    cont->stickX = cont->stickY = 0;
    cont->stickAngle = 0.0f;
}

/*
 * @param[in,out] arg0: ContMain array (usually the same as arg3)
 * @param arg1: number of controllers

 */
// arg2: 80168D78 = [0,1,2,3]
void func_8004E784(ContMain* arg0, s32 arg1, s32* arg2, ContMain* arg3) {
    ContMain* var_s0;
    ContMain* var_s1;
    s32 i;

    osRecvMesg(&gEepromMsgQ, NULL, 1);
    osContGetReadData(&D_80175650[0]);

    // for each controller
    for (i = 0; i < arg1; i++) {
        if ((arg2 == NULL) || (arg2[i] == 0)) {
            if (D_80175668[i] == -1) {
                Controller_Zero(&gContMain[i]);
                continue;
            }
            gContMain[i].buttons0 = D_80175650[D_80175668[i]].button;
            gContMain[i].stickX = D_80175650[D_80175668[i]].stick_x;
            gContMain[i].stickY = D_80175650[D_80175668[i]].stick_y;
        } else {
            gContMain[i].buttons0 = arg3[i].buttons0;
            gContMain[i].stickX = arg3[i].stickX;
            gContMain[i].stickY = arg3[i].stickY;
        }

        gContMain[i].stickAngle = CalculateAngleOfVector((f32) gContMain[i].stickX, (f32) gContMain[i].stickY);
        gContMain[i].buttons1 = (gContMain[i].buttons0 ^ D_80175678[i]) & gContMain[i].buttons0;
        gContMain[i].buttons2 = (gContMain[i].buttons0 ^ D_801756C0[i]) & gContMain[i].buttons0;
        D_801756C0[i] = gContMain[i].buttons0;
        if ((gContMain[i].stickX >= -6) && (gContMain[i].stickX < 7)) {
            gContMain[i].stickX = 0;
        }
        
        if ((gContMain[i].stickY >= -6) && (gContMain[i].stickY < 7)) {
            gContMain[i].stickY = 0;
        }

        arg0[i] = gContMain[i];
    }
}

void func_8004E9AC(void) {
    s32 i;
    for (i = 0; i < MAXCONTROLLERS; i++) {D_80175678[i] = gContMain[i].buttons0;}
}