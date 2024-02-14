#include "5FF30.h"

void videoproc(s32 arg0) {
    s32 var_s2;
    OSMesg sp58;

    var_s2 = 1;
    func_800A7844();
    osCreateMesgQueue(&D_801B3120, &D_801B30A0, 0x14);
    osSetEventMesg(0xEU, &D_801B3120, (void* )7);
    osSetEventMesg(9U, &D_801B3120, (void* )2);
    osSetEventMesg(4U, &D_801B3120, (void* )1);
    osViSetEvent(&D_801B3120, NULL, 2U);
    func_8008C610();

    while (1) {
        osRecvMesg(&D_801B3120, &sp58, 1);
        switch ((u32) sp58) {
        case 0:
            arg0 = var_s2 + 1;
            osSetTimer(&D_801B3148, 0x8F184, 0, &D_801B3120, (void*) 6);
            if (arg0 != 0) {
                if (osSendMesg(&D_801192E8, NULL, 0) == -1) {
                    DummiedPrintf("Gfx送信失敗\n");
                } else {
                    var_s2 ^= 1;
                }
            } else {
                var_s2 ^= 1;
            }
            func_800A78D0();
            continue;
        case 1:
            if (D_800FF5F0 == 2) {
                DummiedPrintf("Ae");
                func_8008C6D4();
                D_800FF5F0 = 0;
                osSendMesg(&D_801192B8, (void* )1, 0);
            } else if (D_800FF5F0 == (s16) 1) {
                DummiedPrintf("Gy");
                func_8008C464();
                D_800FF5EC = 0;
                osSendMesg(&D_801192B8, (void* )1, 0);
            } else {
                DummiedPrintf("Ge");
                func_8008C464();
                D_800FF5EC = 0;
            }
            if (D_800FF5C8 != 0) {
                osSendMesg(&D_801B3120, (void* )3, 0);
            }
            continue;
        case 2:
            DummiedPrintf("D");
            if (D_800FF5CC != 0) {
                D_800FF5CC -= 1;
                if (D_800FF5CC == 0) {
                    osViBlack(0U);
                }
            }
            if (D_800FF5D8 == (s16) 1) {
                D_800FF5D8 = 0;
            }
            osSendMesg(&D_801192D0, (void* )2, 0);
            func_8008C4E8();
            continue;
        case 3:
            if (D_800FF5C4 != 0) {
                DummiedPrintf("Res ");
            } else if (D_800FF5F0 != 0) {
                D_800FF5C8 = 1;
                DummiedPrintf("Sw ");
            } else {
                DummiedPrintf("Gs ");
                D_800FF5C8 = 0;
                osWritebackDCacheAll();
                osSpTaskLoad(D_801B3138);
                osSpTaskStartGo(D_801B3138);
                func_8008C440();
                D_800FF5EC = (s16) 1;
                D_800FF5D8 = (s16) 1;
            }
            continue;
        case 4:
            continue;
        case 5:
            if (D_800FF5C4 == 0) {
                osRecvMesg(&D_801192B8, NULL, 0);
                DummiedPrintf("As");
                D_800FF5F0 = 2;
                osWritebackDCacheAll();
                osSpTaskLoad((OSTask* ) D_801B3140);
                osSpTaskStartGo((OSTask* ) D_801B3140);
                func_8008C698();
            }
            continue;
        case 6:
            break;
        case 7:
            D_800FF5C4 = 1;
            osViBlack(1);
            osViSetYScale(1.0f);
            func_8007B174();
            Rumble_StopAll();
            continue;
        default:
            continue;
        }
        
        D_800FF5F0 = 1;
        if (osSendMesg(&D_801B35A0, NULL, 0) == -1) {
            DummiedPrintf("Audio送信失敗\n");
        }
        // continue;   
    }
}

void func_80084F80(OSTask* arg0, s32 arg1) {
    D_801B3138 = arg0;
    D_800FF5D0 = arg1;
    osSendMesg(&D_801B3120, (OSMesg)3, 0);
}

void func_80084FC0(s32 arg0) {
    D_801B3140 = arg0;
    osSendMesg(&D_801B3120, (OSMesg)5, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_DMACallback.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_Dma.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_InitOsc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_UpdateOsc.s")

void Audio_stopOsc(struct UnkList* arg0) {
    arg0->unk0 = D_80200060.unk0;
    D_80200060.unk0 = arg0;
}

void Audio_RomCopy(u32 devAddr, void* vAddr, u32 size) {
    osWritebackDCacheAll();
    osPiStartDma(&D_801FF7F0, 0, 0, devAddr, vAddr, size, &D_801FF750);
    osRecvMesg(&D_801FF750, NULL, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_Init.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/audioproc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_StartThread.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086C7C.s")

unk0* func_80086EB4(s32 arg0) {
    unk0* next;
    unk0* prev;

    prev = D_801FFB84->unk50;
    next = prev->unk50;
    
    while (next != NULL) {
        if (arg0 == prev->unk40) {
            return prev;
        }
        prev = next;
        next = next->unk50;
    }
    return 0;
}

s16 func_80086EFC(s32 arg0) {
    unk0* next;
    unk0* prev;

    prev = D_801FFB84->unk50;
    next = prev->unk50;
    
    while (next != NULL) {
        if (arg0 == prev->unk40) {
            return prev->unk42;
        }
        prev = next;
        next = next->unk50;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086F44.s")

void func_80087088(unk0* arg0) {
    unk0* temp_v0;
    unk0* temp_v1_2;
    s16 temp = arg0->unk22;
    
    if (D_801FFB88[temp].unk0 > 0) {
        D_801FFB88[temp].unk0--;
    }
    if (arg0->unk20 != 0) {
        temp_v0 = arg0->unk54;
        if (temp_v0 != NULL) {
            temp_v1_2 = arg0->unk50;
            if (temp_v1_2 != NULL) {
                if ((arg0->unk48 >= 0) && (arg0->unk48 < 0x10)) {
                    DummiedPrintf("音鳴ってます (%d)\n", arg0->unk48);
                    return;
                }
                temp_v1_2->unk54 = temp_v0;
                temp_v0->unk50 = temp_v1_2;
                arg0->unk48 = -1;
                arg0->unk20 = 0;
                arg0->unk0 = 0;
                arg0->unk4 = 0;
                arg0->unk8 = 0;                
            }
        }
    }
}

s32 func_80087130(unk0* arg0, unk0* arg1) {
    unk0* temp_v1;

    temp_v1 = arg1->unk50;
    arg1->unk50 = arg0;
    arg0->unk54 = arg1;
    arg0->unk50 = temp_v1;
    temp_v1->unk54 = arg0;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008714C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087290.s")

s32 func_80087358(s32 arg0) {
    unk0* temp_v0 = func_80086EB4(arg0);

    if (temp_v0 == NULL) {
        return -1;
    }

    return func_80087290(temp_v0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008746C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800874E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008788C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/addSoundEffect.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/playSoundEffect.s")

void func_80087FA4(u32 arg0) {
    D_800FF5E8 = arg0;
    D_800FF5E4 = arg0;
    
    if (arg0 == 0) {
        D_801FCA00 = 0.0;
        return;
    }
    
    D_801FCA00 = 1.0 / arg0;
}

void func_8008800C(s32 arg0) {
    D_800FF5E8 = arg0;
    D_800FF5E4 = arg0;
    D_801FCA00 = 0.0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800882D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088528.s")

s32 func_800885EC(s32 arg0, s32 arg1) {
    s32 v1;
    unk0 *temp_v0;
    
    temp_v0 = func_80086EB4(arg0);
    if (temp_v0 == 0) {
        return -1;
    }
    
    if (arg1 < 0) {
        arg1 = 0;
    } else {
        if (arg1 < 0x7F) {
            v1 = arg1;
        } else {
            v1 = 0x7F;
        }
        arg1 = v1;
    }
    
    if (arg1 == temp_v0->unk3D) {
        return 0;
    } else {
        temp_v0->unk3D = arg1;
        if ((temp_v0->unk48 >= 0) && (temp_v0->unk48 < 0x10)) {
            alSndpSetSound(gSFXPlayerP, temp_v0->unk48);
            alSndpSetFXMix(gSFXPlayerP, arg1);
        }
    }
    
    return 0;
}

s32 func_80088698(s32 arg0) {
    unk0* temp_v0 = func_80086EB4(arg0);

    if (temp_v0 == 0) {
        return -1;
    }

    temp_v0->unk20 |= 0x20;
    return 0;
}

s32 func_800886D8(s32 arg0, s16 arg1, s16 arg2) {
    unk0* temp_v0;

    temp_v0 = func_80086EB4(arg0);
    if (temp_v0 == NULL) {
        return -1;
    }
    
    temp_v0->unk30 = arg1;
    temp_v0->unk2C = (f32)(arg1 - temp_v0->unk32) / arg2;
    return 0;
}

s32 func_8008873C(s32 arg0, s32 arg1, s32 arg2) {
    if (++D_800FF64C >= 0x80) {
        D_800FF64C = 0;
    }
    
    if (D_800FF64C == D_800FF650 ) {
        return 0;
    }
    //"TALK = %d\n"
    DummiedPrintf("TALK = %d\n", D_80200A98[D_800FF64C]);
    return addSoundEffect(D_80200A98[D_800FF64C], arg0, arg1, arg2, 0, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800887F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800893C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D8AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D8BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D8D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010D8E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089E24.s")

void func_8008A208(void) {
    if (D_80236974 == 0) {
        if (D_8020005A == 1) {
            playBGM(BGM_JUNGLE1);
        }
    } else if (((s32) D_8017499C % 300) == 0x12B) {
        PLAYSFX(Random(0, 5) + 0x4F, 1, 0x10);
    }
    D_8020005A = D_80236974;
}

void func_8008A2B0(void) {
    if ((gameModeCurrent == GAME_MODE_OVERWORLD) && (gCurrentStage == 0)) {
        func_8008A208();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008A2EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008AD30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008B458.s")

s32 BGMLoad(void) {
    //possibly a struct on the stack?
    s32 sp24;
    s32 sp28; //unused
    s32 devAddr;
    s32 temp_t4; //unused
    s32 temp_v0;
    s32 var_v0; //unused
    s32 var_v1; //unused
    unk801FCA20* temp_t2;
    s32 anotherTemp;

    if ((gameModeCurrent == GAME_MODE_DEMO) || (gameModeCurrent == GAME_MODE_DEMO_2)) {
        return 0;
    }

    if ((gIsPaused != 0) && (D_800FF604 == 0)) {
        if (alCSPGetState(gBGMPlayerP) == AL_PLAYING) {
            alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, 0);
            alCSPStop(gBGMPlayerP);
            D_800FF608 = 1;
        } else {
            D_800FF608 = 0;
        }
        D_800FF604 = gIsPaused;
        return 0;
    }

    if ((gIsPaused == 0) && (D_800FF604 != 0)) {
        if ((alCSPGetState(gBGMPlayerP) != AL_PLAYING) || (D_800FF608 != 0)) {
            if ((gameModeCurrent != GAME_MODE_DEMO) && (gameModeCurrent != GAME_MODE_DEMO_2)) {
                alCSPPlay(gBGMPlayerP);
            }
            alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, D_801FCA22);
        }
        D_800FF604 = gIsPaused;
        return 0;
    }
    
    if (gIsPaused != 0) {
        return 0;
    }
    
    if (D_801FC9A0 != 0) {
        if (D_801FCA20.unk_00 > 0) {
            D_801FCA20.unk_00 = D_801FCA20.unk_00 - D_801FC9A0;
            if (D_801FCA20.unk_00 < 0) {
                D_801FCA20.unk_00 = 0;
            }
            alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, D_801FCA20.unk_00);
        } 
    }
    
    if (D_801FC9B4 != 0) {
        alCSPSetTempo(gBGMPlayerP, D_801FC9A8);
    } else {
        D_801FC9B0 = alCSPGetTempo(gBGMPlayerP);
    }
    
    temp_v0 = alCSPGetState(gBGMPlayerP);
    
    if (D_800FF620 == -1) {
        if ((temp_v0 == AL_STOPPED) && (D_801FCA24 != 0)) {
            D_800FF620 = D_800FF624.unk_00;
        } else {
            return 0;
        }
    }
    else if (temp_v0 != AL_STOPPED) {
        return 0;
    }
    
    D_800FF624.unk_00 = D_800FF620;
    sp24 = gBGMALSeqFileP->seqArray[D_800FF624.unk_00].len; 
    devAddr = (s32)gBGMALSeqFileP->seqArray[D_800FF624.unk_00].offset;
    
    if (sp24 & 1) {
        sp24 += 1;
    }
    
    osInvalDCache(D_801FD550, sp24);
    Audio_RomCopy(devAddr, D_801FD550, sp24);
    alCSeqNew(gBGMSeqP, (u8*)D_801FD550);
    alCSPSetSeq(gBGMPlayerP, gBGMSeqP);
    D_801FCA20 = D_800FF4D0[D_800FF624.unk_00];
    alCSPPlay(gBGMPlayerP);
    alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, D_801FCA22);
    D_800FF620 = -1;
    D_801FC9B4 = 0;
    D_801FC9A8 = 0;
    D_801FC9B0 = 0;
    return 1;
}
//uses "BGM_*" #defines
s32 playBGM(s32 arg0) {
    if ((arg0 >= gBGMALSeqFileP->seqCount) || (arg0 < 0)) {
        return -1;
    }
    if (gBGMPlayerP->state == AL_PLAYING) {
        alCSPStop(gBGMPlayerP);
    }
    D_800FF620 = arg0;
    D_801FC9A0 = 0;
    return 0;
}

s32 func_8008BE14(void) {
    D_801FCA24 = 0;
    if (gBGMPlayerP->state == AL_PLAYING) {
        alCSPStop(gBGMPlayerP);
    }
    func_80088198();
    D_800FF5E4 = 0;
    D_800FF5E8 = 0;
    D_801FCA00 = 0.0;
    D_800FF5F4 = 0;
    gIsPaused = 0;
    D_800FF604 = 0;
    D_800FF608 = 0;
    D_800FF64C = 0;
    D_800FF650 = 0;
    D_801FC9B4 = 0;
    D_801FC9A8 = 0;
    D_801FC9A0 = 0;
    D_800FF620 = -1;
    D_801FCA48 = 1;
    return 0;
}

s32 BGMStop(void) {
    D_801FCA24 = 0;
    if (gBGMPlayerP->state == AL_PLAYING) {
        alCSPStop(gBGMPlayerP);
    }
    return 0;
}

s32 func_8008BF20(void) {
    D_801FCA20 = D_800FF4D0[D_800FF624.unk_00];
    if ((gBGMPlayerP->state != AL_PLAYING) && (gameModeCurrent != GAME_MODE_DEMO) && (gameModeCurrent != GAME_MODE_DEMO_2)) {
        alCSPPlay(gBGMPlayerP);
    }
    return 0;
}
s32 func_8008BFA8(s32 vol) {
    alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, vol);
    D_801FCA20.unk_00 = vol;
    return 0;
}

s32 func_8008BFE0(s32 arg0) {
    D_801FC9A0 = (s32) ((f32)D_801FCA20.unk_00 / (f32)arg0) + 1;
    return 0;
}

s32 func_8008C01C(void) {
    return alCSPGetTempo(gBGMPlayerP);
}

s32 func_8008C040(s32 arg0) {
    if (arg0 > 0) {
        D_801FC9A8 = arg0;
        D_801FC9B4 = 1;
    } else {
        D_801FC9B4 = 0;
    }
    return 0;
}

void func_8008C070(s32 arg0) {
    if (arg0 != 0) {
        gIsStero = 1;
        return;
    }
    gIsStero = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C094.s")

void func_8008C1C8(s32* arg0) {
    s32 sp4C = *arg0;

    if ((gSelectedCharacters[0] == CHARA_WHITE) && (gameModeCurrent == 0)) {
        if ((D_80176F58 == 0) && (gOneRun != 0)) {
            if ((gNoHit != 0) && (gCurrentStage != STAGE_TRAINING)) {
                SetTextGradient(255, 255, 0, 255, 255, 0, 0, 255, 255, 255, 0, 255, 255, 0, 0, 255);
                printUISprite(276.0f, 204.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, 75);
            }
        }
    }

    func_8008AD30();
    func_8008C094();
    func_8008A2EC();
    func_8008A2B0();
    func_8008D060();
    func_8008C438();
    *arg0 = sp4C;
}

void PlayStageBGM(s32 arg0) {
    playBGM(sStageBGMs[arg0]);
}

void func_8008C35C(s32 arg0) {

}

s32 Actor_PlaySound(Actor* arg0, s32 sfxID, s32 arg2, s32 arg3) {
    s32 ret;

    if (gameModeCurrent == GAME_MODE_BATTLE_MENU) {
        ret = PLAYSFX(sfxID, 1, 0x10);
    } else {
        ret = PLAYSFXAT(sfxID, arg0->pos, 0, 0);
    }
    return ret;
}

void func_8008C3F0(Actor* arg0, s32 sfxID, s32 arg2) {
    PLAYSFXAT(sfxID, arg0->pos, 1, 0);
}

s32 func_8008C438(void) {
    return 0;
}

void func_8008C440(void) {
    D_800FF89C = (u32) osGetTime();
}

void func_8008C464(void) {
    D_800FF898 = osGetTime() - D_800FF89C;
}

void func_8008C494(void) {
    D_800FF8A8 = (u32) osGetTime();
}

void func_8008C4B8(void) {
    D_800FF8A4 = osGetTime() - D_800FF8A8;
}

void func_8008C4E8(void) {
    D_800FF8A0 = osGetTime() - D_800FF89C;
    D_801B316C = (f32) (D_800FF8A0 / 1563000.0);
}

void func_8008C554(void) {
    D_800FF8AC = osGetTime() - D_800FF8A8;
}

void func_8008C584(void) {
    OSMesg sp2C;

    while (1) {
        if (osRecvMesg(&D_801B3120, &sp2C, 0) == -1) {
            continue;
        }
        if (sp2C == NULL) {
            //"/* Ｖ割り込みだったらブレイク */\n"("Break if V interrupt")
            DummiedPrintf("/* Ｖ割り込みだったらブレイク */\n", sp2C);
            break;
        } else {
            //"%d\n"
            DummiedPrintf("%d\n", sp2C);
        }
    }
}

void func_8008C610(void) {
    while (1) {
        if (osRecvMesg(&D_801B3120, NULL, 0) == -1) {
            break;
        }
    }
    func_8008C584();
    D_800FF884 = osGetTime();
    func_8008C584();
    D_800FF884 = osGetTime() - D_800FF884;
    //"１フレーム時間 %d\n" ("1 frame time %d")
    DummiedPrintf("１フレーム時間 %d\n", D_800FF884);
}

void func_8008C698(void) {
    D_800FF88C = osGetCount();
    D_800FF888 = D_800FF88C - D_800FF8A8;
}

void func_8008C6D4(void) {
    D_800FF890[D_800FF8BC] = osGetCount() - D_800FF88C;
}

void func_8008C714(void) {
    D_800FF8B8 = osGetTime();
    D_801B3168 = D_800FF8B8 - D_800FF8A8;
}

void func_8008C750(void) {
    D_800FF8B4 = osGetTime() - D_800FF8B8;
}

s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2) {
    Mtx* sp64;
    Gfx* sp60;
    s32 var_s2;
    Gfx* var_v1;
    s32 temp_t9;

    sp64 = *arg0;
    var_s2 = 1;
    sp60 = *arg1;
    
    DummiedPrintf("S_PutDList In\n");
    DummiedPrintf("%X\n", arg2);
    while (1) {
        if (!IS_SEGMENTED(arg2)) {
            var_v1 = arg2;
        } else {
            var_v1 = SEGMENTED_TO_VIRTUAL(arg2);
        }

        switch (var_v1->words.w0 >> 0x18) {
            default:
                var_s2 = 0;
                gSPDisplayList(sp60++, arg2);
                break;
            case 1:
                temp_t9 = (var_v1->words.w1 - (u32)D_80129730) / sizeof(Mtx);
                if ((temp_t9 >= 0) && (((temp_t9 < 0x28)))) {
                    gSPMatrix(sp60++, sp64, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                    sp64++;
                } else {
                    gSPMatrix(sp60++, var_v1->words.w1, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                }
                break;
            case 6:
                PutDList(&sp64, &sp60, (Gfx*)var_v1->words.w1);
                break;
        }
        arg2++;
        if (var_s2 == 0) {
            break;
        }
    }
    *arg1 = sp60;
    *arg0 = sp64;
    DummiedPrintf("S_PutDList Out\n");
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C940.s")

void strcpy(u8* arg0, u8* arg1) {
    while ((*arg0++ = *arg1++)) {}
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Task_Run.s")

void Task_Unlink(CTTask* arg0) {
    CTTask* v0 = arg0->next;
    CTTask* v1 = arg0->unk_10;

    v0->unk_10 = v1;
    v1->next = v0;
    arg0->unk_00 = 0;
}

void Task_Clear(void) {
    CTTask* prev;
    CTTask* cur = gCTTaskHead->next;
    
    while (cur->next != 0) {
        prev = cur;
        Task_Unlink(cur);
        cur = cur->next;
        free(prev);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Task_ClearMost.s")

void TaskInit(void) {
    gCTTaskHead = mallloc(sizeof(CTTask));
    gCTTaskTail = mallloc(sizeof(CTTask));
    if (gCTTaskHead == NULL) {
        DummiedPrintf("TaskInit()メモリ足りません\n", &gCTTaskTail);
    }
    if (gCTTaskTail == NULL) {
        DummiedPrintf("TaskInit()メモリ足りません\n", &gCTTaskTail);
    }
    gCTTaskHead->unk_02 = 0;
    gCTTaskHead->next = gCTTaskTail;
    gCTTaskHead->unk_10 = NULL;
    gCTTaskTail->unk_02 = 0xFF;
    gCTTaskTail->next = NULL;
    gCTTaskTail->unk_10 = gCTTaskHead;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DA14.s")

void func_8008CE94(unk_func_8008CE94* arg0) {
    unk_func_8008CE94* temp_v0;
    unk_func_8008CE94* temp_v1;

    temp_v0 = arg0->unkC;
    temp_v1 = arg0->unk10;
    temp_v0->unk10 = temp_v1;
    temp_v1->unkC = temp_v0;
    arg0->unk0 = 0;
    free(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/bzero32.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Task_Alloc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D6B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D6E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D7B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D7FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008DAB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008DB24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008DB90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/setFrustum.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E7B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E9AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EA60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EB08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EBCC.s")

s32 func_8008EC90(void) {
    if (D_801B3540 == 1) {
        return FALSE;
    }
    return TRUE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008ECB8.s")

void func_8008EF78(CTTask* arg0) {
    func_8008ECB8();
    Task_Unlink(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F050.s")

void func_8008F114(void){
    if(MQ_IS_FULL(&D_801192E8)){
        osRecvMesg(&D_801192E8,NULL,1);
    }
    osRecvMesg(&D_801192E8,NULL,1);
    func_8008C494();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F16C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F7A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/ParseIntToBase10.s")
//parse int to hex string
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/parseIntToHex.s")

s32 func_8008FB4C(s32 arg0) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;
    case 7:
        return 7;
    case 8:
        return 8;
    case 9:
        return 9;
    default:
        return 0;
    }
}

s32 getBaseStage(u32 arg0) {
    s32 ret;

    switch (arg0) {
    case 0:
    case 9:
        ret = 0;
        break;
    case 1:
    case 10:
        ret = 1;
        break;
    case 2:
    case 11:
        ret = 2;
        break;
    case 3:
    case 12:
        ret = 3;
        break;
    case 4:
    case 13:
        ret = 4;
        break;
    case 5:
    case 14:
        ret = 5;
        break;
    case 15:
        ret = 6;
        break;
    default:
        return -1;
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MemsizeCheck.s")

//Uses "GameModes" enum
void SetProcessType(s32 arg0) {
    DummiedPrintf(" 元%d %d\n", gameModeCurrent, gGameModeState);
    gGameModeState = 0;
    gameModeCurrent = arg0;
    DummiedPrintf(" 後%d %d\n", gameModeCurrent, gGameModeState);
}

void func_8008FD68(void) {
    DMAStruct_Print();
    D_80174878++;
    if (D_800F06EC >= 0) {
        D_80174878 = D_800F06EC;
    }
    D_80174878 = loadStageByIndex(D_80174878);
    func_8002E0CC();
    InitField();
    func_80056EB4();
    aa1_InitHead();
    func_8005C9B8();
    func_80084788();
    TaskInit();
}

void func_8008FDF8(void) {
}

void func_8008FE00(void) {
    loadPlayerEyes(*gSelectedCharacters);
    setPlayerContextEyes(*gSelectedCharacters, 0, 0);
    freePlayerEyes(*gSelectedCharacters);
    loadPlayerEyes(*gSelectedCharacters);
}

void func_8008FE50(void) {
    s32 i;
    
    for (i = 0; i < 6; i++) {
        loadPlayerEyes(i);
        setPlayerContextEyes(i, 0, 0);
        freePlayerEyes(i);
    }
}

void func_8008FEA8(s32 arg0, s32 arg1) {
    s32* var_a0; //unknown what this is
    Vec3f* var_a0_2;

    if (arg1 == 0) {
        if ((arg0 != 1) && (arg0 != 2) && (arg0 != 4)) {
            if (arg0 != 5) {
                return;
            }
        }
        if (!IS_SEGMENTED(gStageLoadData[arg0].name)) {
            var_a0 = (s32*)gStageLoadData[arg0].name;
        } else {
            //why was the macro not used?
            var_a0 = (s32*)(D_80100F50[((u32)(gStageLoadData[arg0].name) & SEGMENT_MASK) >> SEGMENT_SHIFT].base_address + ((u32)(gStageLoadData[arg0].name) & ~SEGMENT_MASK));
        }
        
        if (!IS_SEGMENTED(var_a0[7])) {
            var_a0_2 = (Vec3f*)var_a0[7];
        } else {
            var_a0_2 = SEGMENTED_TO_VIRTUAL(var_a0[7]);
        }
        
        gPlayerActors->pos.x = var_a0_2->x;
        gPlayerActors->pos.y = var_a0_2->y;
        gPlayerActors->pos.z = var_a0_2->z;
    }
}

//needs bss support https://decomp.me/scratch/hFrp7
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Porocess_Mode0.s")

#ifndef MOD
void MainLoop(void) {
    func_8002D080();
    if (sGameModeStart != -1) {
        gameModeCurrent = sGameModeStart;
    }
    gGameModeState = 0;
    osRecvMesg(&D_801192E8, NULL, 1);
    SaveData_LoadRecords(gGameRecords.flags);
    if (SaveData_RecordChecksum() != gGameRecords.flags[0]) {
        SaveData_ClearRecords();
    }
    gIsStero = gGameRecords.flags[1] & 1;
    osRecvMesg(&D_801192E8, NULL, 1);
    gameModeLoop:
    switch (gameModeCurrent) {
    case GAME_MODE_OVERWORLD:
        Porocess_Mode0();
        goto gameModeLoop;
    case 1:
        Process_StageSelect();
        goto gameModeLoop;
    case 2:
        FileWork();
        goto gameModeLoop;
    case 3:
        func_8009C904();
        goto gameModeLoop;
    case 4:
        func_800A9F84();
        goto gameModeLoop;
    case 5:
        func_800AA3F0();
        goto gameModeLoop;
    case 20:
        func_800ADE70();
        goto gameModeLoop;
    case 21:
        func_800AE4AC();
        goto gameModeLoop;
    case 6:
        func_800A2BDC();
        goto gameModeLoop;
    case 7:
        Process_BattleMenu();
        goto gameModeLoop;
    case 8:
        func_800A4320();
        goto gameModeLoop;
    case 9:
        Process_GameOver();
        goto gameModeLoop;
    case 10:
        Process_JSSLogo();
        goto gameModeLoop;
    case 11:
        Process_PreCredits();
        goto gameModeLoop;
    case 12:
        func_800A1D38();
        goto gameModeLoop;
    case 13:
        func_800A6DD8();
        goto gameModeLoop;
    case 14:
        func_800A07E0();
        goto gameModeLoop;
    case 16:
        Process_Ranking();
        goto gameModeLoop;
    case 17:
        func_800557F8();
        goto gameModeLoop;
    case 18:
        Process_Boot();
        goto gameModeLoop;
    case 19:
        Process_SunsoftLogo();
        goto gameModeLoop;
    }
    DummiedPrintf("No Process = %d\n", gameModeCurrent);
    goto gameModeLoop;
}

#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MainLoop.s")
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800908C0.s")

s32 func_80090B10(s32 time, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 ret = 0;
    
    temp_v0 = getBaseStage(arg1);
    
    if (temp_v0 < 0) {
        return 0;
    }
    if (time == 0) {
        return 0;
    }
    
    time /= 30;
    temp_v0_2 = RecordTime_ParseToSecs((s32*)gGameState.stageTimes[temp_v0]);
    
    if ((time < temp_v0_2) || (temp_v0_2 == 0)) {
        RecordTime_SetTo(time, gGameState.stageTimes[temp_v0]);
        ret = 1;
    }
    
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800910E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800911D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009131C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800914CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800915C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800917A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800919D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092254.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092324.s")
void func_80092324(s32 arg0) {              // Cy
    if (func_8008EC90() != 0) {
        SetProcessType(1);
        return;
    }
    DummiedPrintf("フェード待ち\n");
    func_80091A38(arg0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009236C.s")

void func_8009244C(Unk_func_80094DBC_1* arg0) {
    if (arg0->unk60 != 0) {
        arg0->unk60 -= 1;
    } else {
        arg0->unk8 = &func_80092474;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800925A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009273C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800927A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800927E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009288C.s")

void func_800928F0(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800928F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092A64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092F44.s")

void func_80092FB8(Unk_func_80094DBC_1* arg0) {
  Unk_func_80094DBC_1* sp1C;

    sp1C = arg0->unk58;
  
    if (func_8008D7FC() != 0) {
        sp1C->unk54 = 6;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009319C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009336C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800933CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093500.s")

void func_800935F8(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800937FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009384C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800938B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800938E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800939B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093CD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009403C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800940B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800941C0.s")

void func_80094220(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009430C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800944C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094540.s")

void func_800945E4(CTTask* arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800945EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800946F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800947B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009483C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009489C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800949D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094ABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094D64.s")

void func_80094DBC(Unk_func_80094DBC_1* arg0) {
    s16 temp_v0;
    Unk_func_80094DBC_1* temp;
    
    func_8008D7FC();
     if (arg0->unk5C != 0) {
        arg0->unk5C--;
        return;
    }
    temp = arg0->unk58;
    temp->unk54 = 7;
    arg0->unk8 = &func_80094E0C;
}

void func_80094E0C(CTTask* arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800950C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Process_PreCredits.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095E44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DCB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DCC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DCD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DCF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DCFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DD38.s")

s32 func_8009603C(s32 segmentID, s32 arg1) {
    s32 temp_s0;
    s32 size;
    unk80100F50* temp_s3;
    segTableEntry* segment;

    segment = &gSegTable[segmentID];                            
    temp_s3 = &D_80100F50[segmentID];                            
    size = (u32) segment->ramAddrEnd - (u32) segment->ramAddrStart;
    temp_s3->base_address = arg1 - size;
    temp_s3->unk4 = (u32) arg1;
    temp_s0 = dma_copy(segment->romAddrStart, (void* ) temp_s3->base_address, size);
    temp_s3->unk4 = temp_s3->base_address + size;
    if (temp_s0 < 0) {
        DummiedPrintf("エラー %d\n", temp_s0);
        return 0;
    }
    while (func_800A72E8(temp_s0) == 0) {}
    DummiedPrintf("%sセグメント(%dk)読み込み(%X)\n", segment->name, (u32) size / 1024, size);
    return (s32) temp_s3->base_address;
}

u32 func_80096128(s32 stageToLoad, s32 inpAddr) {
    segTableEntry* segData = &gStageLoadData[stageToLoad];
    s32 size = (u32) segData->ramAddrStart - (u32) segData->romAddrEnd;
    s32 dmaResult;
    
    D_80100F50[0x3].base_address = inpAddr - size;
    D_80100F50[0x3].unk4 = D_80100F50[0x3].base_address + size;
    dmaResult = dma_copy(segData->romAddrStart, (void*)D_80100F50[0x3].base_address, size);
    if (dmaResult < 0) {
        DummiedPrintf("エラー %d\n", dmaResult);    //Error
        return 0;
    } else {
        while (func_800A72E8(dmaResult) == 0);
        DummiedPrintf("マップデータ(%dk)読み込み(%X)\n", (u32)size / 1024, size);
        // Map data(%dk),  read(%X)
        return D_80100F50[3].base_address;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/loadStageByIndex.s")

void func_800966E0(void) {
    D_80100F50[1].base_address = (u32)&D_803B5000 - _ALIGN((u32)&D_1045C00 - (u32)&D_1000000, 16);
    D_80100F50[1].unk4 = (u32)&D_803B5000;
    D_801FFB78 = func_8009603C(gSelectedCharacters[0] + 8, D_80100F50[1].base_address);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096748.s")

s32 CanAccessStage(s32 stageIndex) {
    s32 trueBits;
    u8 temp_v0;
    s32 var;
    
    temp_v0 = D_8010026E[stageIndex].temp0;
    if (stageIndex == 0) {
        return 1;
    }

    if (temp_v0 == 0) {
        int i = 0;
        trueBits = 0;
        for (i = 0; i < 6; i++) {
            if (D_80200B68 & (1 << i)) {
                trueBits++;
            }
        }
        if (trueBits >= 6) {
            return TRUE;
        }
        if (sDebugLevelAccess >= 0) {
            return TRUE;
        }
        return FALSE;
    }
    
    if (gGameState.stageAccess & temp_v0) {
        return TRUE;
    }
    return FALSE;
}

f32 func_80096898(u16 arg0) {
    f32 floatVar = 0.0f;
    switch (arg0) {
        default:
            break;
        case 0x800:
            floatVar = 180.0f;
            break;
        case 0x900:
            floatVar = 135.0f;
            break;
        case 0x100:
            floatVar = 90.0f;
            break;
        case 0xC00:
            floatVar = 45.0f;
            break;
        case 0x600:
            floatVar = -45.0f;
            break;
        case 0x200:
            floatVar = -90.0f;
            break;
        case 0xA00:
            floatVar = -135.0f;
        case 0x400:
            break;
    }
    return floatVar;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DEA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DEC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DEEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DF08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DF20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DF3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010DF50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Process_StageSelect.s")

void func_80097CF8(unkStruct1* arg0) {
    unkStruct2* temp = arg0->unk58;
    func_80096D40(temp->unk7A);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E0CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E0D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E0DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E0E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E0EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E0FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E10C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E138.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E154.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E1A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E1B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E1BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E1CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E1DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E1E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097D1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800983C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80098684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80098F50.s")

void func_80099570(CTTask* arg0) {
    func_800983C8();
    func_80098F50(arg0);
}

void func_80099598(CTTask* arg0) {
    _bzero(&gSaveFiles[arg0->unk_62], sizeof(SaveFile));
    SaveData_LoadFile(arg0->unk_62, &gSaveFiles[arg0->unk_62]);
    arg0->function = Task_LoadSaveFileAt;
}

void func_8009960C(CTTask* arg0) {
    arg0->function = &Task_LoadSaveFileAt;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Task_LoadSaveFileAt.s")

void func_8009984C(CTTask* arg0) {
    arg0->unk_68 = 0xFF;
    func_80099570(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80099870.s")

void func_800998CC(CTTask* arg0) {
    arg0->function = &func_8009984C;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800998DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80099AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A57C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MakeSaveMaster.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009ABF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AC74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009ACC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AD74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009ADDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AF98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AFFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B08C.s")

void func_8009B120(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/FileWork.s")

void func_8009B45C(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MakeLoadMaster.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BA38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BAF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BB54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BBD8.s")

// Save Wrapper? [arg0 probably used somehow]
void func_8009BC30(s32 arg0) {
    SaveData_UpdateRecords();
    gGameModeState += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BC98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BCF0.s")

void func_8009BDA8(CTTask* arg0) {
    arg0->unk_68 = 4;
    arg0->function = &func_8009BDE4;
}

void func_8009BDC0(CTTask* arg0) {
    if (arg0->unk_68--) {
        return;
    }
    arg0->function = &func_8009BDA8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BDE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BFA0.s")

void func_8009BFF8(CTTask* arg0) {
    func_80099AF4();
    SaveData_ClearRecords();
    arg0->function = &func_8009C038;
    arg0->unk_68 = 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C19C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C278.s")

void func_8009C2FC(CTTask* arg0) {
    if (arg0->unk54 == 0xF) {
        arg0->function = &func_8009C33C;
        return;
    }
    if (arg0->unk54 == 0xE) {
        arg0->unk54 = 4;
        arg0->function = &func_8009BA38;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C33C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C4E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C6AC.s")

void func_8009C644 (CTTask*);

void func_8009C700(Unk_func_80094DBC_1* arg0) {
    if (arg0->unk68--) {
        return;
    } else {
        DummiedPrintf("元に戻る\n", arg0);
        arg0->unk8 = &func_8009C644;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009CB14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009CBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009CFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E60C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E63C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D0EC.s")

void func_8009D19C(s32 arg0) {
    if (func_8008EC90()) {
        SetProcessType(GAME_MODE_TITLE_SCREEN);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D1CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D954.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DA20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DB98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DC40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DDEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DE1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E2B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E6D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E82C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009EE44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F0C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F5B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F7F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E76C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E7A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E7B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E7C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E7E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E7EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A02C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A03B8.s")

void func_800A07E0(void) {
    func_8008F16C();
    gameModeCurrent = 7;
    gGameModeState = 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Process_BattleMenu.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0EE8.s")

void func_800A10E8(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E88C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E894.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E89C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E8E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A10F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A18C8.s")

void func_800A191C(CTTask* arg0) {
    CTTask* nextThing = arg0->unk58;
    
    if (!(arg0->unk60-- > 0)) {
        nextThing->unk54 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1B34.s")

void func_800A1CCC(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        if (arg0->unk60 == 1) {
            D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 0xFF;
        }
        gSelectedCharacters[0] = arg0->unk5E;
        SetProcessType(arg0->unk60);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1EC4.s")

void PrintPerfectCode(s32 arg0) {
    char sp50[38];

    SetTextGradient(0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF);
    PrintText(144.0f, 24.0f, 0.0f, 0.7f, 0.0f, 0.0f, "ＰＥＲＦＥＣＴ  ＣＯＤＥ", 1);
    SetTextGradient(0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF);
    PrintText(160.0f, 40.0f, 0.0f, 0.7f, 0.0f, 0.0f, parseIntToHex(perfectCode, 8, sp50), 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A20CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A22D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E9A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E9A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E9B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E9B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010E9C8.s")

void func_800A250C(unkarg0* arg0) {
    if (arg0->unk6A > 0) {
        SetTextGradient(0x6EU, 0xD2U, 0xFF, 0xFF, 0, 0xDE, 0, 0xFF, 0x6E, 0xD2, 0xFF, 0xFF, 0, 0xDE, 0, 0xFF);
        PrintTextWrapper(72.0f, 176.0f, 0.0f, 1.0f, "ＰＲＥＳＳ  ＳＴＡＲＴ", 1);
    }
    
    arg0->unk6A++;
    
    if (arg0->unk6A >= 0x11) {
        arg0->unk6A = -0xA;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A25F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A272C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A27B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A28B8.s")

void func_800A2B9C(s32 arg0) {
    func_800A25F0(arg0, 162.0f);
    if (func_8008EC90() != 0) {
        gGameModeState += 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EA24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EA3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EA54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EA6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EA94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2EF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A38B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A39EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/PrintDataClearConfirm.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A41C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4320.s")

CTTask* func_800A4484(void) {
    CTTask* task = Task_Alloc(1, 100, NULL);
    
    if (task == NULL) {
        DummiedPrintf("エラー\n");
        while (1) {}
    }
    task->function = &GameOverMaster;
    return task;
}

void func_800A44D8(CTTask* arg0) {
    f32 temp_f22;
    f32 temp_f24;
    s32 i;

    if (arg0->unk60 < 0xFF) {
        arg0->unk60++;
    }
    
    setPrimColor(0, 0, 0, arg0->unk60);
    
    for (i = 0; D_80100DF0[i].unk_04 != 0; i++) {
        temp_f22 = D_80100DF0[i].unk_00;
        temp_f24 = D_80100DF0[i].unk_02;
        if (i == arg0->unk66) {
            SetTextGradient(0xA, 0xFF, 0xA, 0xFF, 0xC8, 0xC8, 0, 0xFF, 0xA, 0xFF, 0xA, 0xFF, 0xC8, 0xC8, 0, 0xFF);
        } else {
            SetTextGradient(0xA0, 0xA0, 0xA0, 0xCC, 0x28, 0x28, 0x28, 0xCC, 0xA0, 0xA0, 0xA0, 0xCC, 0x28, 0x28, 0x28, 0xCC);
        }
        func_80080864(temp_f22, temp_f24, 0.0f, 1.0f, 0.0f, 0.0f, D_80100DF0[i].unk_04, 1);        
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EB40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EB54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/GameOverMaster.s")

void func_800A4820(CTTask* arg0) {
    arg0->unk_5C -= 1;
    if (arg0->unk_5C == 0) {
        arg0->function = &func_800A4868;
        arg0->unk_5C = 30;
        func_800A4BCC();
    }
}

void func_800A4868(CTTask* arg0) {
    arg0->unk_5C -= 1;
    if (arg0->unk_5C == 0) {
        arg0->function = &func_800A4904;
        arg0->unk60 = 0;
        func_8008EB08(32, 0, 0, 0, &arg0->unk_64, 10.0f, 120.0f, 168.0f, 55.0f, 0xF0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A49B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/task_GameOverLetter.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4D58.s")

void Process_GameOver(void) {
    switch (gGameModeState) {
        case 0:
            func_80061394();
            SaveData_WriteFile(&gSaveFile);
            D_800FFDF4 = 1;
            D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 0;
            DummiedPrintf("ゲームオーバープロセス\n");
            DMAStruct_Print();
            func_800A0D90();
            TaskInit();
            loadSprite(0x5E);
            D_80168DA0 = 4;
            gGameModeState++;
            UseFixedRNGSeed = 0;
            D_800FFDF0 = 3;
            func_8008BE14();
            func_80088198();
            D_801FC9AC = 0;
            func_8008F114();
            func_8008FE00();
            loadPlayerEyes(*gSelectedCharacters);
            setPlayerContextEyes(*gSelectedCharacters, 2, 0);
            break;
        case 1:
            func_800A4484();
            gGameModeState++;
            func_8008F114();
            break;
        case 2:
            gGameModeState++;
            func_8008F114();
            break;
        case 3:
            func_8008F16C();
            D_8017499C++;
            break;
    }

    func_8008C094();
}

CTTask* func_800A5060(void){
    CTTask* t = Task_Alloc(1, 100, NULL);

    if(!t){
        DummiedPrintf("エラー\n");
        while(1){;}
    }
    t->function = func_800A50B4;
    return t;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A50B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A51DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5444.s")

void func_800A5488(Unk_func_80094DBC_1* arg0) {
    if (arg0->unk62 != -1) {
        arg0->unk64 = 0;
        func_8008E9AC(0x20, 0, 0, 0, &arg0->unk64);
        arg0->unk8 = &func_800A54F4;
        arg0->unk54 = 2;
    }
}

void func_800A54EC(CTTask* arg0) { //probably CTTask*

}

void func_800A54F4(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        SetProcessType(arg0->unk_62);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5524.s")

void Process_JSSLogo(void) {
    switch (gGameModeState) {
    case 0:
        D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 0;
        func_80061394();
        D_800FFDF4 = 1;
        DummiedPrintf("ロゴプロセス\n"); //Logo process
        DMAStruct_Print();
        func_800A1EC4();
        loadSprite(0x5C);
        loadSprite(0x5D);
        TaskInit();
        D_80168DA0 = 4;
        UseFixedRNGSeed = 0;
        D_800FFDF0 = 3;
        func_8008BE14();
        func_80088198();
        D_801FC9AC = 0;
        func_8008F114();
        gGameModeState++;
        break;
    case 1:
        func_800A5060();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        gGameModeState++;
        func_8008F114();
        break;
    case 3:
        func_8008F16C();
        D_8017499C++;
        break;
    }
    func_8008C094();
}

void func_800A56D4(void) {
    D_80100F50[1].base_address = (u32)&D_803B5000 - _ALIGN((u32)&D_1045C00 - (u32)&D_1000000, 16);
    D_80100F50[1].unk4 = (u32)&D_803B5000;
    D_801FFB78 = D_80100F50[1].base_address;
    func_80056EB4();
    func_8005C9B8();
    aa1_InitHead();
    func_80084788();
    loadSprite(D_80100EB4[D_801B317C]);
    loadSprite(0x4D);
    loadSprite(0x4E);
}

s32 func_800A5778(s32 arg0) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 15:
        return 6;
    default:
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EBFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EC0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EC18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EC24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010EC30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/printSelectedStageInfo.s")

void func_800A6B34(void) {
    CTTask* task;

    task = Task_Alloc(1, 100, 0);
    if (task == NULL) {
        DummiedPrintf("エラー\n");
        while (1) {}
    }
    task->function = &func_800A6B80;
}

void func_800A6B80(CTTask* arg0) {
    arg0->unk_04 = 0;
    arg0->function = func_800A6C04;
    arg0->unk_62 = D_800FF8E8;
    arg0->unk_5C = 1;
    arg0->unk_64 = 0;
    
    func_8008EA60(0x20, 0, 0, 0, &arg0->unk_64);
    Task_Alloc(1, 0x62, 0)->function = printSelectedStageInfo;
}

void func_800A6C04(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        if ((D_801FC9BC[arg0->unk_62].unk_00 & 0x1000) || (D_801FC9BC[arg0->unk_62].unk_00 & 0x8000)) {
            func_8008E9AC(0x20, 0, 0, 0, &arg0->unk_64);
            arg0->function = &func_800A6CF4;
        } else if (arg0->unk_5C != 0) {
            arg0->unk_5C--;
            if (arg0->unk_5C == 0) {
                gCurrentDemoTimer = D_801FCA08;

            } else {
                return;
            }
        }
        if (gCurrentDemoTimer < 3) {
            arg0->unk_64 = 0;
            func_8008E9AC(0x20, 0, 0, 0, &arg0->unk_64);
            arg0->function = &func_800A6CF4;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6DD8.s")

s32 func_800A72E8(s32 arg0) {
    s32 i, j;
    //needed for reg alloc
    s32 zero = 0;

    if (arg0 < 0) {
        DummiedPrintf("無効ＩＤ(%d)\n", arg0); //無効ＩＤ(%d)\n    //invalid ID (%d)\n
        return -1;
    }

    j = 0;
    for (i = zero; i < 50; i++) {
        if (arg0 == D_801FCFD8[i].index) {
            j++;
            if (osRecvMesg(&D_801FCA50[i], NULL, 0) != -1) {
                j--;
                D_801FCFD8[i].index = -1;
            }
        }
    }
    
    DummiedPrintf("Id(%d)残り %d\n", arg0, j); //Id(%d)残り %d\n     //Id(%d)%d\n remaining
    
    if (j > 0) {
        return 0;
    }
    
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A73EC.s")

s32 dma_copy(void* arg0, void* arg1, s32 size) {
    s32 dmaSizeCalc;
    s32 j;
    s32 i;
    s32 temp_v0;

    dmaSizeCalc = (size / 20480) + 1;
    //"ピース %d\n"("piece %d")
    DummiedPrintf("ピース %d\n", dmaSizeCalc );
    for (i = 0, j = 0; i < ARRAY_COUNT(D_801FCFD8); i++) {
        if (D_801FCFD8[i].index < 0) {
            j++;
            if (!(j < dmaSizeCalc )) {
                break;
            }
        }
    }
    
    if (i >= ARRAY_COUNT(D_801FCFD8)) {
        //"満タン\n"("full tank"?)
        DummiedPrintf("満タン\n");
        return -1;
    }
    
    osInvalICache(arg1, size);
    osInvalDCache(arg1, size);
    
    temp_v0 = func_800A73EC(arg0, arg1, size, dmaSizeCalc);

    if (temp_v0 < 0) {
        //"ＤＭＡ生成エラー\n"("DMA generation error")
        DummiedPrintf("ＤＭＡ生成エラー\n");
        //"満kkkkタン\n"("full kkkk tank"?)
        DummiedPrintf("満kkkkタン\n");
    } else {
        //"読み(%X)書き(%X)サイズ(%d)\n"("read (%X) write (%X) size (%d)")
        DummiedPrintf("読み(%X)書き(%X)サイズ(%d)\n", arg0, arg1, size);
        //"書き終わり(%X)\n"("end of write (%x)")
        DummiedPrintf("書き終わり(%X)\n", ((s32)arg1 + size));
        //"%d\n"
        DummiedPrintf("%d\n", temp_v0);
    }
    return temp_v0;
}

s32 func_800A772C(void* arg0, void* arg1, s32 size) {
    s32 dmaSizeCalc;
    s32 j;
    s32 i;
    s32 temp_v0;

    dmaSizeCalc = (size / 20480) + 1;
    //"ピース %d\n"("piece %d")
    DummiedPrintf("ピース %d\n", dmaSizeCalc );
    for (i = 0, j = 0; i < ARRAY_COUNT(D_801FCFD8); i++) {
        if (D_801FCFD8[i].index < 0) {
            j++;
            if (!(j < dmaSizeCalc )) {
                break;
            }
        }
    }
    
    if (i >= ARRAY_COUNT(D_801FCFD8)) {
        return -1;
    }
    //"読み(%X)書き(%X)サイズ(%d)\n"("read (%X) write (%X) size (%d)")
    DummiedPrintf("読み(%X)書き(%X)サイズ(%d)\n", arg0, arg1, size);
    //"書き終わり(%X)\n"("end of write (%x)")
    DummiedPrintf("書き終わり(%X)\n", (s32)arg1 + size);    
    osInvalICache(arg1, size);
    osInvalDCache(arg1, size);
    
    temp_v0 = func_800A73EC(arg0, arg1, size, dmaSizeCalc );

    if (temp_v0 < 0) {
        //"ＤＭＡ生成エラー\n"("DMA generation error")
        DummiedPrintf("ＤＭＡ生成エラー\n");
    }
    return temp_v0;
}

void func_800A7844(void) {
    s32 i;
    D_801FD558 = 0;
    
    for (i = 0; i < ARRAY_COUNT(D_801FCA50); i++) {
        osCreateMesgQueue(&D_801FCA50[i], &D_801FCF08[i], 1);
        D_801FCFD8[i].index = -1;
    }
}

s32 func_800A78D0(void) {
    s32 i;
    s32 j = 0;
    
    for (i = 0; i < ARRAY_COUNT(D_801FCA50); i++) {
        if (D_801FCFD8[i].index >= 0) {
            if (osRecvMesg(&D_801FCA50[i], NULL, 0) != -1) {
                D_801FCFD8[i].index = -1;
                //TODO fake match
                do {
                    j++;
                } while (0);
            }
        }
    }

    return j;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/DMAStruct_Print.s")
//the following three programs are used in generating the "Perfect Code"
s32 func_800A7A18(u32 arg0) {
    s32 i;
    s32 j;

    for (i = 0, j = 0; i < 32; i++) {
        if (((i < 7) || (i >= 0xF)) && ((arg0 >> i) & 1)) {
            j++;
        }
    }
    return j;
}

//this takes (u32)osGetTime() as the arg
s32 GeneratePerfectCode(u32 time) {
    s32 temp_v0;
    s32 i;
    s32 perfectCode;

    time |= 0x01400000;
    temp_v0 = func_800A7A18(time);
    
    for (i = 0, perfectCode = 0; i < 32; i++) {
        if ((i >= 7) && (i < 0xF)) {
            if (temp_v0 << 7 >> i & 1) {
                perfectCode |= 1 << i;
            }
        } else if (time >> i & 1) {
            perfectCode |= 1 << i;
        }
    }
    return perfectCode;
}

s32 func_800A7C58(u32 time) {
    s32 perfectCode;
    s32 temp_a0;
    s32 i;

    temp_a0 = func_800A7A18(time) << 7;
    if (temp_a0 == 0) {
        return -1;
    }

    for (i = 0, perfectCode = 0; i < 32; i++) {
        if (((i >= 7) && (i < 0xF)) && (((temp_a0 >> i) & 1) != ((time >> i) & 1))) {
            perfectCode = -1;
        }
    }
    return perfectCode;
}

//parses record time, returns minutes and seconds.
s32 RecordTime_GetMinsSecs(s32* record, s32* mins, s32* secs) {
    s32 time;

    time = RecordTime_ParseToSecs(record);
    *secs = time % 60;
    *mins = time / 60;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/RecordTime_GetByStageRank.s")

//parses time kept on record.
s32 RecordTime_ParseToSecs(s32* arg0) {
    s32 time = ((u8*)arg0)[0] & 15;
    time <<= 8;
    time += ((u8*)arg0)[1];
    time <<= 8;
    time += ((u8*)arg0)[2];
    return time;
}

//sets record time arg1 to time arg0
void RecordTime_SetTo(s32 arg0, u8* arg1) {
    u8 temp;

    arg1[2] = arg0;
    temp = arg1[0] & 0xF0;
    arg1[1] = (u16)(arg0 & 0xFF00) >> 8;
    arg1[0] = (arg0 & 0xFF0000) >> 16;
    arg1[0] = temp | arg1[0];
}

//file split? following functions deal with save data.
//TODO: fake match

/**
 * @brief Generates an 8-bit checksum for the save data by summing the bytes together.
 * 
 * @param saveData: Passed as a u8* to be iterated over
 * @return (s32) Checksum value
 */
s32 SaveData_FileChecksum(u8 *saveData) {
    s32 checksum;
    int one;
    s32 hasNoNonZeroBytes;
    u8 *tempSaveData;
    s32 hasNoNonFFBytes;
    s32 i;
    
    checksum = 0;
    one = 1;                            // set to 1, (skips the checksum var in the struct)
    hasNoNonZeroBytes = 1;
    hasNoNonFFBytes = 1;
    tempSaveData = saveData;
    
    // Iterate through the save data (excluding the old checksum), adding each byte to the new checksum
    for (i = 1; i < sizeof(SaveFile); i++) {
        checksum += saveData[i];
        checksum &= 0xff;               // keep checksum in the byte range
        
        // 0x00 or 0xFF checks
        do { 
            if (tempSaveData[i] != 0) { 
                hasNoNonZeroBytes = 0; 
            } 
        } while (0);
        
        if (tempSaveData[i] != 0xFF) {
            hasNoNonFFBytes = 0;
        }
    }
    
    // If all bytes are 0 or 0xFF, return the checksum + 5 so the checksum is different
    if ((hasNoNonZeroBytes == one) || (hasNoNonFFBytes == one)) {
        DummiedPrintf(" SaveData FILLER\n", &saveData[i], checksum, tempSaveData);
        return ((*saveData) + 5) & 0xFF;
    }
    
    return checksum;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_RecordChecksum.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_Wait.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_VerifyFile.s")

s32 SaveData_Compare(u8 *arg0, u8 *arg1) {
    s32 i;
    s32 var_s7 = 0;
    u8 *new_var;
    new_var = arg1;
    
    for (i = 0; i < 128; i++) {
        if (arg0){}
        if (arg0[i] != new_var[i]) {
            var_s7 = 1;
            do {
                //"%dバイト目違う [%X][%X}\n"("%d bytes wrong [%X][%X}\n")(sic) 
                DummiedPrintf("%dバイト目違う [%X][%X}\n", i, arg0[i], arg1[i]); 
            } while (0);
        }
    }
    
    return var_s7;
}

void SaveData_LoadFile(s32 arg0, SaveFile* arg1) {
    osRecvMesg(&gEepromMsgQ, NULL, 0);
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    
    DummiedPrintf("ロード開始\n");
    
    if (osEepromLongRead(&gEepromMsgQ, ((arg0 * 0x60) / 8) & 0xFF, (u8*)arg1, 0x60) != 0) {
        DummiedPrintf("ＥＥＰロム読み込みエラー %d ブロック目から %d バイトを読めません\n", arg0, 0x60);
    }
    
    SaveData_Wait();
}

void SaveData_LoadAllFiles(u8* arg0) {
    osRecvMesg(&gEepromMsgQ, NULL, 0);
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    
    DummiedPrintf("ロード開始\n");
    
    if (osEepromLongRead(&gEepromMsgQ, 0, arg0, 0x180) != 0) {
        DummiedPrintf("ＥＥＰロム読み込みエラー %d ブロック目から %d バイトを読めません\n", 0, 0x180);
    }
    
    SaveData_Wait();
}

void SaveData_LoadRecords(u8* arg0) {
    osRecvMesg(&gEepromMsgQ, NULL, 0);
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    //"メインロード開始" ("main road start"?)
    DummiedPrintf("メインロード開始\n");
    
    if (osEepromLongRead(&gEepromMsgQ, 0x30U, arg0, sizeof(SaveRecord)) != 0) {
        //"ＥＥＰロム読み込みエラー 共通部分(Main)から %d バイトを読めません"
        //("EEP ROM read error Cannot read %d bytes from common part (Main)")
        DummiedPrintf("ＥＥＰロム読み込みエラー 共通部分(Main)から %d バイトを読めません\n", sizeof(SaveRecord));
    }
    
    SaveData_Wait();
}

/**
 * @brief Save a given SaveFile to the EEPROM.
 * 
 * @param saveIndex: File number minus one 
 * @param saveFile: SaveFile to be saved 
 */
void SaveData_SaveFile(s32 saveIndex, SaveFile* saveFile) { 
    //"%d 番目のファイルにセーブ  %dバイト目\n"("saving to %d-th file, %d bytes"?)
    DummiedPrintf("%d 番目のファイルにセーブ  %dバイト目\n", saveIndex, (s32) (saveIndex * 0x60) / 8);
    osRecvMesg(&gEepromMsgQ, NULL, 0);
    
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        //"ＥＥＰロムエラー \n"("EEP rom error")
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    //"セーブ開始\n" ("start save")
    DummiedPrintf("セーブ開始\n");
    
    if (osEepromLongWrite(&gEepromMsgQ, (saveIndex * 0x60) / 8, (u8*)saveFile, 0x60) != 0) {
        //"ＥＥＰロム書き込みエラー \n"("EEProm write error")
        DummiedPrintf("ＥＥＰロム書き込みエラー \n");
    }
    
    SaveData_Wait();
    SaveData_Wait();
}

/**
 * @brief Attempt to update a save file, comparing the file being saved with the file when reloaded.
 * 
 * @param saveIndex: Index to save file to
 * @param saveFile: SaveFile to be updated 
 * @return (s32) 0 for success, 1 for error 
 */
s32 SaveData_UpdateFile(s32 saveIndex, SaveFile* saveFile) {
    s32 i;
    SaveFile newFile;

    i = 0;

    // Attempt update 3 times before returning error
    while (1) {
        SaveData_SaveFile(saveIndex, saveFile);
        SaveData_LoadFile(saveIndex, &newFile);
        if (SaveData_VerifyFile((u8*)saveFile, &newFile) == 0) {
            return 0;   // no error
        }

        i++;

        if (i == 3) {
            return 1;   // error
        }
    }
}

void SaveData_SaveRecords(void) {
    gGameRecords.flags[0] = SaveData_RecordChecksum();
    
    osRecvMesg(&gEepromMsgQ, NULL, 0);
    
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    
    DummiedPrintf("セーブ開始\n");
    
    if (osEepromLongWrite(&gEepromMsgQ, 0x30, &gGameRecords.flags[0], 0x80) != 0) {
        //"ＥＥＰロム書き込みエラー \n"("EEPRom write error")
        DummiedPrintf("ＥＥＰロム書き込みエラー \n");
    }
    
    SaveData_Wait();
    SaveData_Wait();
}

/**
 * @brief Attempt to update game records, comparing the records being saved with the records when reloaded.
 * 
 * @return (s32) 0 for success, 1 for error 
 */
s32 SaveData_UpdateRecords(void) {
    s32 i;
    unkStruct09 sp28;

    for (i = 0; i < 3; i++) {
        SaveData_SaveRecords();
        SaveData_LoadRecords((u8*)&sp28);
        if (SaveData_Compare((u8*)&gGameRecords, (u8*)&sp28) == 0) {
            return 0;
        }
    }
    return 1;
}

void func_800A878C(SaveFile* arg0) {
    _bzero(arg0, sizeof(SaveFile));
    //"ファイルクリア"("file clear")
    DummiedPrintf("ファイルクリア\n");
    RecordTime_SetTo(300, (u8*)&arg0->stageTimes[6]);
    arg0->carrotBitfield = 0;
}

void func_800A87D4(s32 arg0) {
    SaveFile sp18;

    //"ファイルクリア"("file clear")
    DummiedPrintf("ファイルクリア\n");
    func_800A878C(&sp18);
    sp18.checksum = SaveData_FileChecksum((u8*)&sp18);
    SaveData_UpdateFile(arg0, &sp18);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_ResetRecords.s")

/**
 * @brief Clear all records data. 
 */
void SaveData_ClearRecords(void) {
    DummiedPrintf("ファイルクリア\n");
    _bzero(&gGameRecords, 0x60);
    SaveData_ResetRecords();
    SaveData_UpdateRecords();
}

//SaveData_WriteFile(SaveFile*)
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_WriteFile.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_ReadFile.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SetLevelBitfield.s")


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A903C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F02C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F03C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F04C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F054.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F05C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/D_8010F06C.s")

void func_800A93AC(contMain* arg0) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (gPlayerActors[i].active == 0) {
            continue;
        }
        DummiedPrintf("{0x%04X,%d,%d},\n", D_80175650[i].button, D_80175650[i].stick_x, D_80175650[i].stick_y);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9450.s")

void func_800A9690(void) {
    CTTask* temp_v0 = Task_Alloc(1, 100, NULL);

    if (temp_v0 == NULL) {
        //"エラー\n"("error")
        DummiedPrintf("エラー\n");
        while (1);
    }
    temp_v0->function = &func_800A96DC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A96DC.s")

void func_800A9728(CTTask* arg0) {
    if (arg0->unk_5C != 0) {
        arg0->unk_5C--;
        if (arg0->unk_5C != 0) {
            return;
        }
        gCurrentDemoTimer = D_801FCA08;
    }
    
    if ((D_80100D64[D_801FCA18] + 0xA) >= gCurrentDemoTimer) {
        arg0->unk_64 = 0;
        if (gameModeCurrent != GAME_MODE_DEMO_2) {
            func_8008E9AC(0x20, 0, 0, 0, &arg0->unk_64);
        }
        arg0->function = &func_800A97E4;
    }
}

void func_800A97E4(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        setPrimColor(0U, 0U, 0U, 0xFFU);
        printUISprite(2.0f, 2.0f, 0.0f, 0.0f, 1.0f, 316.0f, 236.0f, 0.0f, 0);
        if (D_800F0704 != 0) {
            gGameModeState = 3;
            return;
        }
        gGameModeState = 5;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A988C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/IniDemo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA3F0.s")

/**
 * @brief 
 * 
 * @param zone: room number 
 */
void func_800AA844(s32 arg0) {
    gCurrentZone = arg0;
    func_800C29D8(gCurrentZone);
}

void func_800AA86C(void) {
    if (D_80101048.unk_00 == gCurrentDemoTimer) {
        func_800AA844(0);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 600.0f;
    }
    if (D_80101048.unk_04 == gCurrentDemoTimer) {
        func_800AA844(1);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = -1400.0f;
    }
    if (D_80101048.unk_08 == gCurrentDemoTimer) {
        func_800AA844(0xA);
        gPlayerActors->pos.x = 20.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 620.0f;
    }
    if (D_80101048.unk_0C == gCurrentDemoTimer) {
        func_800AA844(0xF);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 700.0f;
    }
    if (D_80101048.unk_10 == gCurrentDemoTimer) {
        func_800AA844(0x14);
        gPlayerActors->pos.x = 2700.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 0.0f;
    }
    if (D_80101048.unk_14 == gCurrentDemoTimer) {
        func_800AA844(0x17);
        gPlayerActors->pos.x = 1700.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 0.0f;
    }
    if (D_80101048.unk_18 == gCurrentDemoTimer) {
        func_800AA844(0x1A);
        gPlayerActors->pos.x = 2700.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 0.0f;
    }
    if (D_80101048.unk_1C == gCurrentDemoTimer) {
        func_800AA844(0x1D);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 2700.0f;
    }
    if (D_80101048.unk_20 == gCurrentDemoTimer) {
        func_800AA844(0x20);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 2700.0f;
    }
}

void func_800AAAC8(void) {
    func_800AA844(0);
    gPlayerActors->pos.x = 0.0f;
    gPlayerActors->pos.y = 100.0f;
    gPlayerActors->pos.z = 600.0f;
}

void func_800AAB0C(s32 arg0) {
    s32 dmaResult;
    s32 dmaSize;
    s32 i;
    DMAStruct_Print();
    loadStageByIndex(arg0);
    DMAStruct_Print();
    _bzero(gPlayerActors, sizeof(gPlayerActors));
    _bzero(&gCamera[0], sizeof(Camera));
    D_80168DA0 = 1;
    *(u32*)&gPlayerActors[0].active = 1; //required u32 here but usually requires s32?
    gPlayerActors[1].active = 0;
    gPlayerActors[2].active = 0;
    gPlayerActors[3].active = 0;
    D_80175668[0] = 0;
    func_8002E0CC();
    InitField();
    func_80056EB4();
    aa1_InitHead();
    func_8005C9B8();
    func_80084788();
    func_80055FA4();

    for (i = 0; i < 4; i++) {
        D_801756C0[i] = 0;
        D_80175678[i] = 0;
    }

    gCurrentDemoTimer = 0x10A9;
    dmaSize = D_F0042B0 - D_F000000;
    UseFixedRNGSeed = TRUE;
    D_80200C8C = mallloc(dmaSize);
    if (D_80200C8C == NULL) {
        //"バッファがない\n"("no buffer")
        osSyncPrintf("バッファがない\n", D_80200C8C);
    } else {
        dmaResult = dma_copy(&D_AB10B0, D_80200C8C, dmaSize);
        if (dmaResult < 0) {
            //"データ読み込み失敗\n" ("data read failure")
            osSyncPrintf("データ読み込み失敗\n");
        } else {
            while (func_800A72E8(dmaResult) == 0) {}
        }
    }
    //TODO fake match
    if (gPlayerActors){}
    DMAStruct_Print();
    D_80200C94 = D_80200C8C;
    D_80200C84.unk0 = 0;
    D_80200C84.unk2 = 0xFFFF;
    D_80200C84.unk4 = 0;
    D_80200C84.unk5 = 0;
    D_8017499C = 0;
    D_80174998 = 0;
    func_800AAAC8();
    gPlayerActors->yAngle = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AACFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB0B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/PlayerInits_Copy.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB734.s")

s32 func_800AD980(void) {
    gPlayerActors->pos.x = D_80108760;
    gPlayerActors->pos.y = D_80108764 + 5000.0f;
    gPlayerActors->pos.z = D_80108768;
    Controller_StartRead();
    func_8002CB6C(gMainGfxPos, &gGraphicsList[gFramebufferIndex], gFramebufferIndex);
    func_8004E784(gContMain, gControllerNo, 0, 0);
    gMainGfxPos = func_8002C900(&gGraphicsList[1 - gFramebufferIndex], 1 - gFramebufferIndex);
    func_8002CBE8(gFramebufferIndex);
    gFramebufferIndex = 1 - gFramebufferIndex;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADA84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADC50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADE24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADE70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE4AC.s")

/**
 * @brief Compute the bounding box that encompasses both input rectangles.
 * The resulting bounding box is stored in the provided output rectangle.
 *
 * @param[in] rectA Pointer to the first input rectangle.
 * @param[in] rectB Pointer to the second input rectangle.
 * @param[out] boundingBox Pointer to the output rectangle representing the computed bounding box.
 *
 * @note The function considers the minimum and maximum coordinates along the x, y, and z axes
 *       to determine the bounding box.
 */
void ComputeBoundingBoxFromRects(Rect3D* rectA, Rect3D* rectB, Rect3D* rectOut) {
    if (rectA->min.x < rectB->min.x) {
        rectOut->min.x = rectA->min.x;
    } else {
        rectOut->min.x = rectB->min.x;
    }

    if (rectB->max.x < rectA->max.x) {
        rectOut->max.x = rectA->max.x;
    } else {
        rectOut->max.x = rectB->max.x;
    }

    if (rectA->min.y < rectB->min.y) {
        rectOut->min.y = rectA->min.y;
    } else {
        rectOut->min.y = rectB->min.y;
    }

    if (rectB->max.y < rectA->max.y) {
        rectOut->max.y = rectA->max.y;
    } else {
        rectOut->max.y = rectB->max.y;
    }

    if (rectA->min.z < rectB->min.z) {
        rectOut->min.z = rectA->min.z;
    } else {
        rectOut->min.z = rectB->min.z;
    }

    if (rectB->max.z < rectA->max.z) {
        rectOut->max.z = rectA->max.z;
        return;
    }
    
    rectOut->max.z = rectB->max.z;
}

/**
 * @brief Adjusts the boundaries of a 3D rectangle in order to include the coordinates of the provided 3D vector.
 *
 * @param[in,out] r Pointer to the 3D rectangle to be adjusted.
 * @param[in] vec The 3D vector whose coordinates are included in the rectangle boundaries.
 */
void AdjustRectToVec3(Rect3D* r, Vec3f vec) {
    if (vec.x < r->min.x) {
        r->min.x = vec.x;
    } else if (r->max.x < vec.x) {
        r->max.x = vec.x;
    }
    if (vec.y < r->min.y) {
        r->min.y = vec.y;
    } else if (r->max.y < vec.y) {
        r->max.y = vec.y;
    }
    if (vec.z < r->min.z) {
        r->min.z = vec.z;
        return;
    }
    else if (r->max.z < vec.z) {
        r->max.z = vec.z;
    }
}

/**
 * @brief Expands the input rectangle by a given amount.
 * 
 * @param r: Pointer to the rectangle to be expanded
 * @param s: Amount to expand the rectangle by 
 */
void Rect_Expand(Rect3D* r, f32 s){
    r->min.x -= s;
    r->min.y -= s;
    r->min.z -= s;
    r->max.x += s;
    r->max.y += s;
    r->max.z += s;
}


/**
 * @brief Adjust the bounds of a rectangle to ensure that the minimum values are less than the maximum values.
 * 
 * @param[in,out] rect: Pointer to rectangle to adjust
 */
void OrderRectBounds(Rect3D *rect) {
    f32 prevMaxX;
    f32 prevMaxY;
    f32 prevMaxZ;
    
    if (rect->max.x < rect->min.x) {
        prevMaxX = rect->max.x;
        rect->max.x = rect->min.x;
        rect->min.x = prevMaxX;
    }
    
    if (rect->max.y < rect->min.y) {
        prevMaxY = rect->max.y;
        rect->max.y = rect->min.y;
        rect->min.y = prevMaxY;
    }
    
    prevMaxZ = rect->max.z;
    
    if (prevMaxZ < rect->min.z) {
        rect->max.z = rect->min.z;
        rect->min.z = prevMaxZ;
    }
}

/**
 * @brief Compares two given rectangles to determine if they intersect.
 *      
 * @param[in,out] rectA: first rectangle
 * @param[in,out] rectB: second rectangle
 * 
 * @return (s32) 1 if the two rectangles intersect, 0 otherwise
 */
s32 IfRectsIntersect(Rect3D* rectA, Rect3D* rectB) {
    if ((f64) rectB->max.x < (f64) rectA->min.x) {
        return 0;
    }
    if ((f64) rectA->max.x < (f64) rectB->min.x) {
        return 0;
    }
    if ((f64) rectB->max.y < (f64) rectA->min.y) {
        return 0;
    }
    if ((f64) rectA->max.y < (f64) rectB->min.y) {
        return 0;
    }
    if ((f64) rectB->max.z < (f64) rectA->min.z) {
        return 0;
    }
    if ((f64) rectA->max.z < (f64) rectB->min.z) {
        return 0;
    }
    return 1;
}

/**
 * @brief Determines if a point (vec3f) is within a given rectangle.
 * 
 * @param point: Point to check 
 * @param rect: Pointer to rectangle to check against
 * @return (s32) 1 if point is in rectangle, 0 otherwise 
 */
s32 IsPointInRect(Vec3f point, Rect3D* rect) {
    if (point.x < rect->min.x) {
        return 0;
    }
    if (rect->max.x < point.x) {
        return 0;
    }
    if (point.y < rect->min.y) {
        return 0;
    }
    if (rect->max.y < point.y) {
        return 0;
    }
    if (point.z < rect->min.z) {
        return 0;
    }
    if (rect->max.z < point.z) {
        return 0;
    }
    return 1;
}

/**
 * @brief Create a bounding box from two given vectors.
 * 
 * @param vecA: First vector
 * @param vecB: Second vector
 * @param rect: Pointer to rectangle to store bounding box in 
 */
void CalculateBoundingRectFromVectors(Vec3f vecA, Vec3f vecB, Rect3D* rect) {
    if (vecA.x < vecB.x) {
        rect->min.x = vecA.x;
        rect->max.x = vecB.x;
    } else {
        rect->min.x = vecB.x;
        rect->max.x = vecA.x;
    }
    if (vecA.y < vecB.y) {
        rect->min.y = vecA.y;
        rect->max.y = vecB.y;
    } else {
        rect->min.y = vecB.y;
        rect->max.y = vecA.y;
    }
    if (vecA.z < vecB.z) {
        rect->min.z = vecA.z;
        rect->max.z = vecB.z;
        return;
    }
    rect->min.z = vecB.z;
    rect->max.z = vecA.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEB48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEDB4.s")
