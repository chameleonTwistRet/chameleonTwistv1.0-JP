#include "298D0.h"

//these seem to solely be controller-based functions

/* Migrated BSS */
OSMesgQueue gSiMesgQ;
OSMesg gSiMesg;
OSContStatus gContStatus[MAXCONTROLLERS];
OSContPad gContPads[MAXCONTROLLERS];
s32 gContPortMap[MAXCONTROLLERS];
u16 gContSnapshotButtons[MAXCONTROLLERS];
ContMain gContMain[MAXCONTROLLERS];
u16 gContLastButtons[MAXCONTROLLERS];
OSPfs gRumblePfs[MAXCONTROLLERS];

/* mainproc() */
/**
 * @brief Initialises the SI event queue and detects controllers and paks.
 *
 * Sets up the message queue used for all serial interface traffic, queries
 * which controllers respond, builds the port map, and probes each port for a
 * Controller Pak or Rumble Pak, flagging pak presence and rumble errors.
 *
 * @return (s32) The number of responding controllers.
 */
s32 Controller_Init(void) {
    OSMesgQueue siQueue;
    OSMesg mesgBuf;
    s32 retPfs;         // return value from osPfsInitPak
    s32 retRumble;      // return value from osMotorInit
    u8 contPat;         // controller pattern
    s32 i;
    s32 contCount;      // number of controllers

    osCreateMesgQueue(&siQueue, &mesgBuf, 1);
    osSetEventMesg(OS_EVENT_SI, &siQueue, (OSMesg)1);
    osContInit(&siQueue, &contPat, gContStatus);
    osCreateMesgQueue(&gSiMesgQ, &gSiMesg, 1);
    osSetEventMesg(OS_EVENT_SI, &gSiMesgQ, NULL);

    for (i = 0; i < MAXCONTROLLERS; i++) {
        gContPortMap[i] = -1;
        gContSnapshotButtons[i] = gContLastButtons[i] = 0; //chain assignment required for match
    }

    /* Confirm if controller [i] is inserted */
    for (i = 0, contCount = 0; i < MAXCONTROLLERS; i++) {
        if (contPat & (1 << i)) {
            if (!(gContStatus[i].errno & CONT_NO_RESPONSE_ERROR)) {  // if controller responds
                gContPortMap[i] = i;
                contCount++;
            }
        }
    }

    // Check for Controller Pak (Pfs) and Rumble Pak (Motor) on each controller
    // gContPakPresent[i] = 1 if Controller Pak is present, 0 otherwise, used in displaying error screen?
    for (i = 0; i < MAXCONTROLLERS; i++) {
        gContPakPresent[i] = 0;
        if (((contPat >> i) & 1) && (gContStatus[i].type & CONT_JOYPORT) && (gContStatus[i].status & CONT_CARD_ON)) {
            retPfs = osPfsInitPak(&gSiMesgQ, &gRumblePfs[i], i);
            if (retPfs == PFS_ERR_ID_FATAL || retPfs == PFS_ERR_DEVICE) {
                retRumble = osMotorInit(&gSiMesgQ, &gRumblePfs[i], i);
                switch (retRumble) {
                default:
                    gContPakPresent[i] = 1;
                    break;
                case PFS_ERR_NOPACK:
                    gContPakPresent[i] = 0;
                    break;
                case PFS_ERR_CONTRFAIL:
                    gContPakPresent[i] = 0;
                    RumblePakError = 1;
                    break;
                case PFS_ERR_DEVICE:
                    gContPakPresent[i] = 0;
                    RumblePakError = 1;
                    break;
                }
            }
        }
    }
    return contCount;
}

/**
 * @brief Starts an asynchronous read of all controller pads.
 */
void Controller_StartRead(void) {
    osContStartReadData(&gSiMesgQ);
}

/**
 * @brief Clears a controller's buttons, stick, and stick angle.
 *
 * @param [out] cont The controller to clear.
 */
void Controller_Zero(ContMain* cont) {
    cont->buttons0 = cont->buttons1 = cont->buttons2 = 0;
    cont->stickX = cont->stickY = 0;
    cont->stickAngle = 0.0f;
}

/**
 * @brief Collects this frame's input for every controller slot.
 *
 * Receives the pad data started by `Controller_StartRead`. Slots flagged as
 * computer controlled take their input from `cpuInputs` instead of a real
 * pad. Each slot then gets its stick angle, its pressed-since-snapshot
 * buttons, its pressed-this-frame buttons, and a stick dead zone of -6 to 6.
 *
 * @param [out] dest Where each slot's final input is written.
 * @param contCount The number of controller slots to update.
 * @param cpuFlags Per-slot flags marking computer controlled slots; may be NULL.
 * @param cpuInputs The computer players' synthesized controllers.
 */
void Controller_UpdateAll(ContMain* dest, s32 contCount, s32* cpuFlags, ContMain* cpuInputs) {
    s32 i;

    osRecvMesg(&gSiMesgQ, NULL, 1);
    osContGetReadData(gContPads);

    // for each controller
    for (i = 0; i < contCount; i++) {
        if ((cpuFlags == NULL) || (cpuFlags[i] == 0)) {
            if (gContPortMap[i] == -1) {
                Controller_Zero(&gContMain[i]);
                continue;
            }
            gContMain[i].buttons0 = gContPads[gContPortMap[i]].button;
            gContMain[i].stickX = gContPads[gContPortMap[i]].stick_x;
            gContMain[i].stickY = gContPads[gContPortMap[i]].stick_y;
        } else {
            gContMain[i].buttons0 = cpuInputs[i].buttons0;
            gContMain[i].stickX = cpuInputs[i].stickX;
            gContMain[i].stickY = cpuInputs[i].stickY;
        }

        gContMain[i].stickAngle = ArcTan2Deg((f32) gContMain[i].stickX, (f32) gContMain[i].stickY);
        gContMain[i].buttons1 = (gContMain[i].buttons0 ^ gContSnapshotButtons[i]) & gContMain[i].buttons0;
        gContMain[i].buttons2 = (gContMain[i].buttons0 ^ gContLastButtons[i]) & gContMain[i].buttons0;
        gContLastButtons[i] = gContMain[i].buttons0;
        if ((gContMain[i].stickX >= -6) && (gContMain[i].stickX < 7)) {
            gContMain[i].stickX = 0;
        }

        if ((gContMain[i].stickY >= -6) && (gContMain[i].stickY < 7)) {
            gContMain[i].stickY = 0;
        }

        dest[i] = gContMain[i];
    }
}

/**
 * @brief Snapshots every controller's held buttons.
 *
 * Marks the current buttons as seen, so `buttons1` only reports presses made
 * after this call.
 */
void Controller_SnapshotButtons(void) {
    s32 i;
    for (i = 0; i < MAXCONTROLLERS; i++) {gContSnapshotButtons[i] = gContMain[i].buttons0;}
}