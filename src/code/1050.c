#include "common.h"


Gfx* func_8002C4E8(graphicStruct*, s32, s32);

void func_8002CB6C(Gfx*, graphicStruct*, s32);
void func_8002CBE8(s32);
void func_8002CDBC(contMain*);
void func_8004BC48(contMain*);
void func_8004CD9C(s32, void*);
void func_8004DDE0(void);
void func_8004E784(contMain*, u32, s32*, contMain*);
void func_80054864(void);

extern graphicStruct gGraphicsList[2];

extern s32 gFramebufferIndex;
extern s32 D_800F066C;
extern s32 sDebugMultiplayer;
extern s8 D_800FF8DC;
extern u8 D_800FF8E0[];
extern u8 D_800FF8E4[];
extern s32 D_80174980;
extern s32 D_801749AC;

extern OSTask D_800F04E0[2];

extern OSMesgQueue D_801192D0;
extern OSMesgQueue D_801192E8;


void func_80059254(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_800598C4(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_8005747C(f32, f32, f32, f32, f32, f32, s32);
void func_8008C494(void);
void func_8008C4B8(void);
void func_8008C554(void);
void osViSwapBuffer(void* frameBufPtr);
s32 Controller_Init(void);
void Video_StartThread(void);
void Audio_StartThread(void);
s32 func_800AF604(f32, f32, f32, f32);
void __osInitialize_common(void);

void bootproc(void) {
    __osInitialize_common();
    gControllerNo = 1;                            //gIdleThreadStack[1024]
    osCreateThread(&gIdleThread, 1, idleproc, 0, &gMainThread, 10);
    osStartThread(&gIdleThread);
}

void idleproc(void *arg0) {
    osCreateViManager(OS_PRIORITY_VIMGR);
    osViSetMode(&osViModeTable[2]);
    osViBlack(1);
    osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON);
    osViSetSpecialFeatures(OS_VI_DIVOT_OFF);
    osCreatePiManager(OS_PRIORITY_PIMGR, &gPiManMgsQ, gPiManMsgs, 50);
    osCreateThread(&gMainThread, 3, mainproc, arg0, &D_80117FF0, 10);
    osStartThread(&gMainThread);                  //gMainThreadStack[1024]
    osSetThreadPri(0, 0);

    while (TRUE) {};
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/mainproc.s")

// func_80025EF0(PlayerActor*, Tongue*, s32)
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80025EF0.s")

s32 func_80026C78(Actor* actor) {
    return 1 - func_800AF604(actor->pos.x, actor->pos.y, actor->pos.z, 8000.0f);
}


//adjustment for BL_Boss_Segment
void func_80026CA8(graphicStruct *arg0, Mtx *arg1, u32 arg2, f32 arg3, s32 arg4) {
    f32 xPos = 0.0f;
    f32 yPos = 0.0f;
    f32 zPos = 0.0f;
    
    func_800849DC(0, gTongues, &gPlayerActors[0], gCamera);
    guMtxXFML(&arg0->actorRotate[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);         // 4x4 fp matrix
    guMtxXFML(&arg0->actorScale[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxCatL(arg1, &arg0->actorRotate[arg2], arg1);
    guMtxCatL(arg1, &arg0->actorScale[arg2], arg1);
    func_80059254(arg1, gActors[arg2].pos.x + xPos, gActors[arg2].pos.y + yPos, gActors[arg2].pos.z + zPos, arg3, arg3, 0.0f, arg4);
}

void func_80026E30(graphicStruct *arg0, Mtx *arg1, u32 arg2, f32 arg3, s32 arg4) {
    f32 xPos = 0.0f;
    f32 yPos = 0.0f;
    f32 zPos = 0.0f;
    
    func_800849DC(0, gTongues, &gPlayerActors[0], gCamera);
    guMtxXFML(&arg0->actorRotate[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxXFML(&arg0->actorScale[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxCatL(arg1, &arg0->actorRotate[arg2], arg1);
    guMtxCatL(arg1, &arg0->actorScale[arg2], arg1);
    func_800598C4(arg1, gActors[arg2].pos.x + xPos, gActors[arg2].pos.y + yPos, gActors[arg2].pos.z + zPos, arg3, arg3, 0.0f, arg4);
}

void func_80026FB8(graphicStruct *arg0, Mtx *arg1, u32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    f32 xPos, yPos, zPos;
    zPos = yPos = xPos = 0.0f;
    
    func_800849DC(0, gTongues, &gPlayerActors[0], gCamera);
    guMtxXFML(arg1, xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxXFML(&arg0->actorRotate[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxXFML(&arg0->actorScale[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    func_8005747C(gActors[arg2].pos.x + xPos, gActors[arg2].pos.y + yPos + arg4, gActors[arg2].pos.z + zPos, arg3, arg3, 0.0f, arg5);
}

void func_80027138(void* arg0, s32* arg1, s32* arg2, s32* arg3) {
    void* var_a2;
    s32* var_v1;

    //this is required to be 1 line or codegen breaks
    if (!IS_SEGMENTED(arg0)) {var_v1 = arg0;} else {var_v1 = SEGMENTED_TO_VIRTUAL(arg0);}
    
    if (!IS_SEGMENTED(var_v1[1])) {
        var_a2 = (s32*)var_v1[1];
    } else {
        var_a2 = SEGMENTED_TO_VIRTUAL(var_v1[1]);
    }
    
    *arg1 = *(s32*)var_a2;
    
    if (!IS_SEGMENTED(var_v1[0])) {
        var_a2 = (s32*)var_v1[0];
    } else {
        var_a2 = SEGMENTED_TO_VIRTUAL(var_v1[0]);
    }

    *arg2 = *(s32*)var_a2;
    
    if (!IS_SEGMENTED(var_v1[2])) {
        *arg3 = var_v1[2];
    } else {
        *arg3 = (s32)SEGMENTED_TO_VIRTUAL(var_v1[2]);
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80027240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_800273F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_800274F0.s")

/**
 * @brief Returns the index of the first active player actor, or 0 if none are active signalling single player.
 * 
 * @return (s32) The highest index of an active player actor. 
 */
s32 func_80027650(void) {       // GetHighestActivePlayerIndex
    s32 i;
    
    for (i = 3; i >= 0; i--) {
        if (gPlayerActors[i].active != 0 && gPlayerActors[i].exists) {
            break;
        }
    }
    
    if (i < 0) {
        i = 0;
    }
    
    return i;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80027694.s")

//draw player
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002AE3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002B118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002B7BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C4E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C900.s")

void* func_8002CAC8(graphicStruct* arg0, s32 arg1) {
    Gfx* gdl;

    gdl = func_8002C4E8(arg0, arg1, 1);    //Sets up the display list (?)
    gDPFullSync(gdl++);                    //Signals the end of a frame
    gSPEndDisplayList(gdl++);
    return gdl;
}

void Video_SetTask(graphicStruct* arg0, Gfx* arg1, s32 arg2) {
    OSTask_t* task = &D_800F04E0[arg2].t;
    task->ucode_boot = (u64*)rspbootTextStart;
    task->ucode_boot_size =  ((s32)rspbootTextEnd - (s32)rspbootTextStart);
    //TODO: fix &rspbootTextStart[208 / 8]
    task->ucode = (u64*)&rspbootTextStart[208 / 8]; //?
    task->ucode_data = (u64*)gspFast3DDataStart;
    task->output_buff_size = (u64*)D_80129720;
    task->data_ptr = (u64*)arg0;
    task->data_size = (((s32)arg1 - (s32)arg0) >> 3) << 3;
}

void func_8002CB6C(Gfx* arg0, graphicStruct* arg1, s32 arg2) {

    if (D_80174998 < 3) {
        arg0 = func_8002CAC8(arg1, arg2);
    }
    
    Video_SetTask(arg1, arg0, arg2);
    osWritebackDCache(arg1, sizeof(graphicStruct));
    func_80084F80(&D_800F04E0[arg2], arg2);
}

void func_8002CBE8(s32 arg0) {
    func_8008C4B8();
    osRecvMesg(&D_801192D0, NULL, 1);
    osViSwapBuffer(&D_803B5000[arg0].data);
    osViSetSpecialFeatures(OS_VI_GAMMA_ON|OS_VI_GAMMA_DITHER_ON);
    
    if (MQ_IS_FULL(&D_801192E8)) {
        osRecvMesg(&D_801192E8, NULL, 1);
    }
    
    func_8008C554();
    osRecvMesg(&D_801192E8, NULL, 1);
    func_8008C494();
}

//update framebuffer
Gfx* func_8002CCA0(void* arg0, s32 arg1) {
    Gfx* sp1C;

    if (D_80174998 > 2) {
        sp1C = func_8002C900(arg0, arg1);
    }

    return sp1C;
}

void func_8002CCDC(void) {
    BGMStop();
    func_80088198();
}

void func_8002CD04(void) {
    DMAStruct_Print();
    D_80174878++;

    if (D_800F06EC >= 0) {
        D_80174878 = D_800F06EC;
    }

    D_80174878 = loadStageByIndex(D_80174878);
    func_8002E0CC();
    InitField();
    func_8002CCDC();
    func_80056EB4();
    aa1_InitHead();
    func_8005C9B8();
    func_80084788();
}

void func_8002CD94(s32 arg0) {
    if (arg0 == 2) {
        osViBlack(0);
    }
}

void func_8002CDBC(contMain* controllers) {
    s32 i;

    if (gCurrentStage != STAGE_VS) {
        D_80168D78[0] = 0;
        return;
    }

    for (i = 0; i < 4; i++) {
        if (D_80168D78[i] != 0) {
            D_80168D78[i] = 1;
            func_8004CD9C(i, &controllers[i].buttons0);
        }
    }
}

void func_8002CE54(void) {
    s32 var;
    s32 i;
    contMain sp28[4];
    
    D_800F066C++;
    func_8002CD94(D_800F066C);
    Controller_StartRead();
    func_8002CB6C(0, &gGraphicsList[gFramebufferIndex], gFramebufferIndex);
    
    for (i = 0; i < 4; i++) {
        Controller_Zero(&sp28[i]);
    }
    
    if (D_80174980 == 5) {
        D_80168D78[0] = 1;
        func_8004BC48(&sp28[0]);
        func_8004E784(sp28, D_80168DA0, D_80168D78, sp28);
        D_800FF8DC = 0;
        D_800FF8E0[0] = 0;
        D_800FF8E4[0] = 0;
    } else {
        if (D_801749AC != 0) {
            if (sDebugMultiplayer != 0) {
                D_80168D78[1] = 1;
                func_8004CD9C(1, &sp28[1]);
                D_80168D78[2] = 2;
                func_8004CD9C(2, &sp28[2]);
                D_80168D78[3] = 3;
                func_8004CD9C(3, &sp28[3]);
            } else {
                func_8002CDBC(&sp28[0]);
            }
        } else if (D_801749B0.unk_00 != 0) {
            D_80168D78[1] = 1;
            func_8004CD9C(1, &sp28[1]);
        } else {
            D_80168D78[0] = 0;
        }
        func_8004E784(sp28, 4, D_80168D78, sp28);
    }
    
    func_8004DDE0();
    func_80054864();
    var = 1 - gFramebufferIndex;
    func_8002CCA0(&gGraphicsList[var], var);
    func_8002CBE8(gFramebufferIndex);
    gFramebufferIndex = 1 - gFramebufferIndex;
}

void func_8002D080(void) {
    D_80174878 = -1;
    gControllerNo = Controller_Init();   // @returned: number of controllers
    gPlayerActors[0].active = 1;
    gPlayerActors[1].active = 0;
    gPlayerActors[2].active = 0;
    gPlayerActors[3].active = 0;
    Audio_StartThread();
    Video_StartThread();
}