#include "1050.h"

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

void func_80025EF0(PlayerActor*, Tongue*, s32);
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80025EF0.s")

s32 func_80026C78(Actor* actor) {
    return 1 - func_800AF604(actor->pos.x, actor->pos.y, actor->pos.z, 8000.0f);
}


//adjustment for BL_BOSS_SEGMENT
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
void func_80027694(graphicStruct* arg0);

//draw player
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002AE3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002B118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002B7BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C280.s")
Gfx* func_8002C280(graphicStruct*, Gfx*);

#ifdef NON_MATCHING
Gfx* func_8002C4E8(Gfx* gfxPos, s32 arg1, s32 arg2) {
    s32 i;

    gSPSegment(gfxPos++, 0x00, NULL);
    gSPSegment(gfxPos++, 0x01, OS_K0_TO_PHYSICAL(_ALIGN((u32)D_803B5000 - (u32)D_1045C00 + (u32)D_1000000, 0x10)));

    for (i = 2; i < 16; i++) {
        if (D_80100F50[i].base_address != NULL) {
            gSPSegment(gfxPos++, i, OS_K0_TO_PHYSICAL(D_80100F50[i].base_address));
        }
    }

    if (D_800FFEC0 != 0) {
        gSPDisplayList(gfxPos++, D_1015AE8);
    } else {
        gSPDisplayList(gfxPos++, D_1015AB8);
    }
    gSPDisplayList(gfxPos++, D_1015A70);

    if (D_800FFEC0 != 0) {
        gDPSetCycleType(gfxPos++, G_CYC_FILL);
        gDPSetRenderMode(gfxPos++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(gfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, OS_K0_TO_PHYSICAL(&D_803B5000[arg1]));
        gDPSetFillColor(gfxPos++, PACK_FILL_COLOR(0, 0, 0, 1));
        gDPFillRectangle(gfxPos++, 0, 0, 319, 239);
        gDPPipeSync(gfxPos++);
    } else {
        gDPSetCycleType(gfxPos++, G_CYC_FILL);
        gDPSetRenderMode(gfxPos++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(gfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, OS_K0_TO_PHYSICAL(&D_803B5000[arg1]));
        gDPSetFillColor(gfxPos++, PACK_FILL_COLOR(D_800FF8DC, D_800FF8E0, D_800FF8E4, 1));
        gDPFillRectangle(gfxPos++, 18, 16, 301, 223);
        gDPPipeSync(gfxPos++);
    }

    if (D_800FFEC0 != 0){
        D_800FFEC0--;
    }
    return gfxPos;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C4E8.s")
Gfx* func_8002C4E8(Gfx* gfxPos, s32 arg1, s32 arg2);
#endif

Gfx* func_8002C900(graphicStruct* arg0, s32 arg1) {
    Gfx* gfxPos = arg0->dlist;
    s32 i;

    gfxPos = func_8002C4E8(arg0->dlist, arg1, 0);
    gSPDisplayList(gfxPos++, D_1015B18);
    gDPSetColorImage(gfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, OS_K0_TO_PHYSICAL(&D_803B5000[arg1]));
    gfxPos = func_8002C280(arg0, gfxPos);
    D_800FF8D4 = arg0->unk1e880;

    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (!gPlayerActors[i].exists) {
            continue;
        }
        func_80025EF0(&gPlayerActors[i], &gTongues[i], i);
    }

    func_80027694(arg0);
    func_80084A04();
    func_8005CA38();
    gfxPos = func_8007A2D8(gfxPos, gCamera);
    func_8008C1C8(&gfxPos);
    gfxPos = func_8005CA44(gfxPos);
    func_8007AC60(gCamera, gPlayerActors);
    func_8008C35C(&gfxPos);
    gDPFullSync(gfxPos++);
    gSPEndDisplayList(gfxPos++);
    return gfxPos;
}

Gfx* func_8002CAC8(graphicStruct* arg0, s32 arg1) {
    Gfx* gdl;

    gdl = func_8002C4E8(arg0->dlist, arg1, 1);    //Sets up the display list (?)
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
    StopBGM();
    func_80088198();
}

void func_8002CD04(void) {
    DMAStruct_Print();
    D_80174878++;

    if (D_800F06EC >= 0) {
        D_80174878 = D_800F06EC;
    }

    D_80174878 = LoadStageByIndex(D_80174878);
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

void func_8002CDBC(ContMain* controllers) {
    s32 i;

    if (gCurrentStage != STAGE_VS) {
        D_80168D78[0] = 0;
        return;
    }

    for (i = 0; i < MAXCONTROLLERS; i++) {
        if (D_80168D78[i] != 0) {
            D_80168D78[i] = 1;
            func_8004CD9C(i, &controllers[i].buttons0);
        }
    }
}

void func_8002CE54(void) {
    s32 var;
    s32 i;
    ContMain sp28[4];
    
    D_800F066C++;
    func_8002CD94(D_800F066C);
    Controller_StartRead();
    func_8002CB6C(0, &gGraphicsList[gFramebufferIndex], gFramebufferIndex);
    
    for (i = 0; i < MAXCONTROLLERS; i++) {
        Controller_Zero(&sp28[i]);
    }
    
    if (D_80174980 == 5) {
        D_80168D78[0] = 1;
        func_8004BC48(&sp28[0]);
        func_8004E784(sp28, D_80168DA0, D_80168D78, sp28);
        D_800FF8DC = 0;
        D_800FF8E0 = 0;
        D_800FF8E4 = 0;
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