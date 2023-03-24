#include "common.h"

//these seem to solely be controller-based functions

u16 D_80175678[MAXCONTROLLERS];
contMain gContMain[MAXCONTROLLERS];

extern s32 D_800F0690;
extern void* D_80175638;
extern OSContStatus D_80175640[MAXCONTROLLERS];
extern OSContPad D_80175650[MAXCONTROLLERS];
extern OSPfs gRumblePfs[MAXCONTROLLERS];
extern s32 D_80176960[];
extern s32 D_80175668[];

s32 func_8004E4D0(void) {
    OSMesgQueue siQueue;
    OSMesg mesgBuf;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 controllerBits;
    s32 i;
    s32 j;

    osCreateMesgQueue(&siQueue, &mesgBuf, 1);
    osSetEventMesg(OS_EVENT_SI, &siQueue, (OSMesg)1);
    osContInit(&siQueue, &controllerBits, D_80175640);
    osCreateMesgQueue(&D_80175620, &D_80175638, 1);
    osSetEventMesg(OS_EVENT_SI, &D_80175620, NULL);

    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80175668[i] = -1;
        //chain assignment required?
        D_80175678[i] = D_801756C0[i] = 0;
    }

    for (i = 0, j = 0; i < MAXCONTROLLERS; i++) {
        if (controllerBits & (1 << i)) {
            if (!(D_80175640[i].errno & CONT_NO_RESPONSE_ERROR)) {
                D_80175668[i] = i; //should be D_80175668[i] = i; ?
                j++;
            }
        }
    }

    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80176960[i] = 0;
        if (((controllerBits >> i) & 1) && (D_80175640[i].type & CONT_JOYPORT) && (D_80175640[i].status & CONT_CARD_ON)) {
            temp_v0_2 = osPfsInitPak(&D_80175620, &gRumblePfs[i], i);
            if (temp_v0_2 == PFS_ERR_ID_FATAL || temp_v0_2 == PFS_ERR_DEVICE) {
                temp_v0_3 = osMotorInit(&D_80175620, &gRumblePfs[i], i);
                switch (temp_v0_3) {
                default:
                    D_80176960[i] = 1;
                    break;
                case PFS_ERR_NOPACK:
                    D_80176960[i] = 0;
                    break;
                case PFS_ERR_CONTRFAIL:
                    D_80176960[i] = 0;
                    D_800F0690 = 1;
                    break;
                case PFS_ERR_DEVICE:
                    D_80176960[i] = 0;
                    D_800F0690 = 1;
                    break;
                }
            }
        }
    }
    return j;
}

void Controller_StartRead(void) {
    osContStartReadData(&D_80175620);
}

void Controller_Zero(contMain* arg0) {
    arg0->sticky = 0;
    arg0->buttons2 = 0;
    arg0->buttons1 = 0;
    arg0->buttons0 = 0;
    arg0->stickx = arg0->sticky;
    arg0->stickAngle = 0.0f;
}

void func_8004E784(contMain* arg0, s32 arg1, s32* arg2, contMain* arg3) {
    contMain* var_s0;
    contMain* temp_v0_2;
    s32 i;

    osRecvMesg(&D_80175620, NULL, 1);
    osContGetReadData(&D_80175650[0]);

    for (i = 0; i < arg1; i++) {
        if ((arg2 == NULL) || (arg2[i] == 0)) {
            if (D_80175668[i] == -1) {
                Controller_Zero(&gContMain[i]);
                continue;
            }
            gContMain[i].buttons0 = D_80175650[D_80175668[i]].button;
            gContMain[i].stickx = D_80175650[D_80175668[i]].stick_x;
            gContMain[i].sticky = D_80175650[D_80175668[i]].stick_y;
        } else {
            gContMain[i].buttons0 = arg3[i].buttons0;
            gContMain[i].stickx = arg3[i].stickx;
            gContMain[i].sticky = arg3[i].sticky;
        }

        gContMain[i].stickAngle = CalculateAngleBetweenVectors((f32) gContMain[i].stickx, (f32) gContMain[i].sticky);
        gContMain[i].buttons1 = (gContMain[i].buttons0 ^ D_80175678[i]) & gContMain[i].buttons0;
        gContMain[i].buttons2 = (gContMain[i].buttons0 ^ D_801756C0[i]) & gContMain[i].buttons0;
        D_801756C0[i] = gContMain[i].buttons0;
        if ((gContMain[i].stickx >= -6) && (gContMain[i].stickx < 7)) {
            gContMain[i].stickx = 0;
        }
        
        if ((gContMain[i].sticky >= -6) && (gContMain[i].sticky < 7)) {
            gContMain[i].sticky = 0;
        }

        arg0[i] = gContMain[i];
    }
}

void func_8004E9AC(void) {
    s32 i = 0;
    for (i = 0; i < 4; i++) {D_80175678[i] = gContMain[i].buttons0;}
}
