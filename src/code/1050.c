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
Gfx* func_8002A190(graphicStruct*, Gfx*, PlayerActor*, Tongue*, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A4C4.s")
Gfx* func_8002A4C4(graphicStruct*, Gfx*, PlayerActor*, Tongue*, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A824.s")
Gfx* func_8002A824(graphicStruct*, Gfx*, PlayerActor*, Tongue*, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002AE3C.s")
void func_8002AE3C(void);

Gfx* func_8002B118(graphicStruct* arg0, Gfx* gfxPos, Gfx* arg2, Actor* actor, f32 arg4, s32 arg5, s32* arg6) {
    Mtx sp300, sp2C0, sp280, sp240;
    Mtx sp200, sp1C0;
    Mtx sp180, sp140;
    Mtx sp100, spC0;
    Mtx sp80, sp40;

    arg4 *= actor->sizeScalar;
    actor->unk_E8 *= actor->sizeScalar;
    guTranslate(&arg0->actorTranslate[*arg6], actor->pos.x, actor->pos.y + actor->unk_E8, actor->pos.z);
    if (actor->actorID == YELLOW_ANT && actor->userVariables[0] > 0) {
        guRotate(&sp300, actor->unk_90 - actor->unk_134[2], 0.0f, 1.0f, 0.0f);
        guRotate(&sp2C0, actor->unk_134[1], 1.0f, 0.0f, 0.0f);
        guRotate(&sp280, actor->unk_134[0] + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp300, &sp2C0, &sp240);
        guMtxCatL(&sp240, &sp280, &arg0->actorRotate[*arg6]);
    } else if (actor->actorID == ANT_QUEEN && (actor->userVariables[1] == 10 || actor->userVariables[1] == 11 || actor->userVariables[1] == 12 || actor->userVariables[1] == 14)) {
        guRotate(&sp1C0, actor->unk_134[1], 0.0f, 0.0f, 1.0f);
        guRotate(&sp200, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp1C0, &sp200, &arg0->actorRotate[*arg6]);
    } else if (actor->actorID == ARMADILLO || actor->actorID == BOULDER || actor->actorID == LIZARD_KONG_BOULDER) {
        if (actor->actorID == BOULDER && actor->userVariables[0] == 0) {
            return gfxPos;
        }
        guRotate(&sp140, actor->unk_134[3], 1.0f, 0.0f, 0.0f);
        guRotate(&sp180, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp140, &sp180, &arg0->actorRotate[*arg6]);
    } else if (actor->actorID == FISH) {
        if (arg5 == 0) {
            guRotate(&arg0->actorRotate[*arg6], actor->unk_134[2] + actor->unk_C0 + 90.0f, 0.0f, 1.0f, 0.0f);
        } else {
            guRotate(&arg0->actorRotate[*arg6], actor->unk_134[3] + actor->unk_C0 + 90.0f, 0.0f, 1.0f, 0.0f);
        }
    } else if (actor->actorID == PILE_OF_BOOKS) {
        if (actor->userVariables[2] >= 9 && actor->userVariables[2] <= 11) {
            guRotate(&spC0, actor->unk_134[4], 1.0f, 0.0f, 0.0f);
        } else {
            guRotate(&spC0, 0.0f, 1.0f, 0.0f, 0.0f);
        }
        guRotate(&sp100, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&spC0, &sp100, &arg0->actorRotate[*arg6]);
    } else if (actor->actorID == CAKE_BOSS && arg5 == 1) {
        guRotate(&arg0->actorRotate[*arg6], actor->unk_134[3], 0.0f, 1.0f, 0.0f);
    } else if (actor->actorID == CAKE_BOSS_STRAWBERRY) {
        guRotate(&sp40, actor->unk_134[0], 1.0f, 0.0f, 0.0f);
        guRotate(&sp80, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp40, &sp80, &arg0->actorRotate[*arg6]);
    } else {
        guRotate(&arg0->actorRotate[*arg6], actor->unk_C0 + actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
    }

    guScale(&arg0->actorScale[*arg6], arg4, arg4, arg4);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorTranslate[*arg6]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorRotate[*arg6]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorScale[*arg6]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    PutDList(&D_800FF8D4, &gfxPos, arg2);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    (*arg6)++;
    return gfxPos;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002B7BC.s")
Gfx* func_8002B7BC(graphicStruct* arg0, Gfx* gfxPos);

#ifdef NON_MATCHING
Gfx* func_8002C280(graphicStruct* arg0, Gfx* gfxPos) {
    s32 i;

    gfxPos = func_8007B524(arg0, gfxPos, gCamera);
    D_800FF8D4 = arg0->unk1e880;
    gfxPos = func_8005F408(gfxPos);

    for (i = 0; i < 4; i++) {
        if (!gPlayerActors[i].exists) {
            continue;
        }
        gfxPos = func_8002A190(arg0, gfxPos, &gPlayerActors[i], &gTongues[i], i);
        gfxPos = func_8002A824(arg0, gfxPos, &gPlayerActors[i], &gTongues[i], i);
    }
    gfxPos = func_8002B7BC(arg0, gfxPos);
    gfxPos = func_800C3B50(arg0, gfxPos);
    for (i = 0; i < 4; i++) {
        if (!gPlayerActors[i].exists) {
            continue;
        }
        func_800849DC(i, &gTongues[i], &gPlayerActors[i], gCamera);
        gfxPos = func_800849D4(gfxPos);
    }

    func_800849DC(0, &gTongues[0], &gPlayerActors[0], gCamera);
    gfxPos = func_80084884(gfxPos);
    gfxPos = func_8007ABDC(gfxPos);

    func_8002AE3C();
    debugMain();

    gfxPos = Shadows_Draw(arg0, gfxPos);

    if (D_80176F58 == 0) {
        for (i = 0; i < 4; i++) {
            if (!gPlayerActors[i].exists) {
                continue;
            }
            if (gGameModeCurrent == 20 || D_80174980 == 3) {
                continue;
            }
            if (gTongues[i].amountInMouth != 0 && gTongues[i].tongueMode == 0 || gPlayerActors[i].locked != 0 || gPlayerActors[i].amountLeftToShoot != 0) {
                gfxPos = func_8002A4C4(arg0, gfxPos, &gPlayerActors[i], &gTongues[i], i);
            }
        }
    }

    return gfxPos;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C280.s")
Gfx* func_8002C280(graphicStruct* arg0, Gfx* gfxPos);
#endif

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
        if (Battle_GameType != 0) {
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
        } else if (D_801749B0 != 0) {
            D_80168D78[1] = 1;
            func_8004CD9C(1, &sp28[1]);
        } else {
            D_80168D78[0] = 0;
        }
        func_8004E784(sp28, 4, D_80168D78, sp28);
    }
    
    func_8004DDE0();
    Battle_Update();
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