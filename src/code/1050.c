#include "1050.h"
#include "battle.h"
#include "sprite.h"

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

#ifdef NON_MATCHING
void func_80025EF0(PlayerActor* arg0, Tongue* arg1, s32 arg2) {
    s32 sp124;
    s32 sp120 = arg0->globalTimer * 0.8f;
    s32 sp11C;
    s32 sp118;
    Mtx* sp114 = NULL;
    Mtx* sp110 = D_800FF8D4;

    func_8007AC2C(&sp120);

    if (arg0->playerHURTSTATE == 3 && gTimer % 2 != 0) {
        return;
    }

    if (D_80174980 == 5) {
        func_80027240(&D_800FF8D4, gSpriteListings[207].bitmapP, gTimer / 2, gSpriteListings[207].tileCountY);
        if (gTimer == 20) {
            Effect_TypeT_Init(22.0f, 154.0f, 60, D_800F686C);
        }
        if (gTimer == 120) {
            Effect_TypeT_Init(22.0f, 154.0f, 60, D_800F6870);
        }
    } else if (arg0->playerHURTSTATE == 4) {
        func_80027138(&D_1045BF4, &sp11C, &sp118, &sp114);
        sp124 = arg0->playerHURTTIMER;
        if (sp124 >= sp118) {
            sp124 = sp118 - 1;
        }
        func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
    } else if (arg0->amountLeftToShoot != 0) {
        func_80027138(&D_1045BAC, &sp11C, &sp118, &sp114);
        sp124 = arg0->amountLeftToShoot;
        if (sp124 >= sp118) {
            sp124 = sp118 - 1;
        }
        func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
    } else if (arg0->vaultFall != 0) {
        func_80027138(&D_1045BB8, &sp11C, &sp118, &sp114);
        func_80027240(&D_800FF8D4, sp114, sp118 - arg0->vaultFall, sp11C);
    } else if (arg0->playerHURTSTATE == 1) {
        sp124 = arg0->playerHURTTIMER - 10;
        func_80027138(&D_1045BDC, &sp11C, &sp118, &sp114);
        if (sp124 < 0) {
            sp124 = 0;
        } else if (sp124 >= sp118) {
            sp124 = sp118 - 1;
        }
        func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
    } else if (arg0->playerHURTSTATE == 2) {
        if (arg0->hp > 0) {
            sp124 = arg0->playerHURTTIMER;
        } else {
            sp124 = arg0->playerHURTTIMER / 3;
        }       
        func_80027138(&D_1045BE8, &sp11C, &sp118, &sp114);
        if (sp124 >= sp118) {
            sp124 = sp118 - 1;
        }
        func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
    } else if (arg1->tongueMode != 0) {
        switch (arg1->tongueMode) {
            case 1:
            case 2:
            case 3:
                sp124 = arg1->segments;
                if (sp124 > 3) {
                    sp124 = 3;
                }
                func_80027138(&D_1045BAC, &sp11C, &sp118, &sp114);
                func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
                break;
            case 4:
                sp124 = arg1->timer % 2 + 4;
                func_80027138(&D_1045BAC, &sp11C, &sp118, &sp114);
                func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
                break;
            case 5:
                sp124 = arg1->poleSegmentAt % 6 + 6;
                func_80027138(&D_1045BAC, &sp11C, &sp118, &sp114);
                func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
                break;
            case 6:
            case 7:
                func_80027138(&D_1045BAC, &sp11C, &sp118, &sp114);
                func_80027240(&D_800FF8D4, sp114, arg1->timer + 12, sp11C);
                break;
            case 8:
            case 9:
                func_80027138(&D_1045BB8, &sp11C, &sp118, &sp114);
                func_80027240(&D_800FF8D4, sp114, arg1->segments, sp11C);
                break;
            case 11:
                sp124 = arg1->timer;
                if (sp124 >= 7) {
                    sp124 = (sp124 - 7) % 7 + 7;
                }
                if (arg0->unkBC > 0) {
                    func_80027138(&D_1045BD0, &sp11C, &sp118, &sp114);
                    if (sp124 >= sp118) {
                        sp124 = sp118 - 1;
                    }
                    func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
                } else {
                    func_80027138(&D_1045BC4, &sp11C, &sp118, &sp114);
                    if (sp124 >= sp118) {
                        sp124 = sp118 - 1;
                    }
                    func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
                }
                break;
            default:
                func_80027138(&D_1045B70, &sp11C, &sp118, &sp114);
                func_80027240(&D_800FF8D4, sp114, (s32)arg0->globalTimer % sp118, sp11C);
                break;
        }
    } else if (arg0->canJump != 0) {
        if (arg0->vel.y > 0.0f) {
            func_80027138(&D_1045BA0, &sp11C, &sp118, &sp114);
            func_80027240(&D_800FF8D4, sp114, 0, sp11C);
        } else {
            func_80027138(&D_1045BA0, &sp11C, &sp118, &sp114);
            if (-arg0->vel.y * 8.0f < arg0->pos.y - arg0->yCounter) {
                arg0->jumpAnimFrame %= 10;
                sp124 = arg0->jumpAnimFrame / 2 + 4;
            } else {
                if (arg0->jumpAnimFrame < 9) {
                    arg0->jumpAnimFrame = 9;
                }
                sp124 = arg0->jumpAnimFrame;
                if (sp124 >= sp118) {
                    sp124 = sp118 - 1;
                }
            }
            func_80027240(&D_800FF8D4, sp114, sp124, sp11C);
        }
    } else if (arg0->groundMovement == 0) {
        func_80027138(&D_1045B70, &sp11C, &sp118, &sp114);
        func_80027240(&D_800FF8D4, sp114, (s32)arg0->globalTimer % sp118, sp11C);
    } else if (arg0->groundMovement == 1) {
        func_80027138(&D_1045B7C, &sp11C, &sp118, &sp114);
        func_80027240(&D_800FF8D4, sp114, sp120 % sp118, sp11C);
        if (D_800F0560 == 0 && sp120 % sp118 >= 3 && sp120 % sp118 <= 12) {
            if (arg0->inWater == 1) {
                PLAYSFXAT(2, arg0->pos, 0, 0);
            } else {
                PLAYSFXAT(0, arg0->pos, 0, 0);
            }
            D_800F0560 = 1;
        } else if (D_800F0560 == 1 && sp120 % sp118 > 12) {
            if (arg0->inWater == 1) {
                PLAYSFXAT(3, arg0->pos, 0, 0);
            } else {
                PLAYSFXAT(1, arg0->pos, 0, 0);
            }
            D_800F0560 = 0;
        }
    } else {
        func_80027138(&D_1045B88, &sp11C, &sp118, &sp114);
        func_80027240(&D_800FF8D4, sp114, sp120 % sp118, sp11C);
        if (D_800F0560 == 0 && sp120 % sp118 >= 0 && sp120 % sp118 <= 9) {
            if (arg0->inWater == 1) {
                PLAYSFXAT(2, arg0->pos, 0, 0);
            } else {
                PLAYSFXAT(0, arg0->pos, 0, 0);
            }
            D_800F0560 = 1;
        } else if (D_800F0560 == 1 && sp120 % sp118 > 9) {
            if (arg0->inWater == 1) {
                PLAYSFXAT(3, arg0->pos, 0, 0);
            } else {
                PLAYSFXAT(1, arg0->pos, 0, 0);
            }
            D_800F0560 = 0;
        }
    }

    if (arg0->power == 1 && (arg0->powerTimer >= 30 && arg0->powerTimer <= arg0->powerTimerTill - 30 || !(gTimer % 2))) {
        Mtx spD0;
        guMtxIdent(&spD0);
        guScale(&spD0, 2.0f, 2.0f, 2.0f);
        guMtxCatL(&spD0, &sp110[4], &sp110[4]);
        guMtxCatL(&spD0, &sp110[3], &sp110[3]);
    }

    if (arg0->power == 2 && (arg0->powerTimer >= 30 && arg0->powerTimer <= arg0->powerTimerTill - 30 || !(gTimer % 2))) {
        Mtx sp90;
        guMtxIdent(&sp90);
        guScale(&sp90, 2.0f, 2.0f, 2.0f);
        guMtxCatL(&sp90, &sp110[1], &sp110[1]);
    }

    if (arg0->playerID == 0) {
        f32 sp8C, sp88, sp84;
        Mtx sp40;
        guRotate(&sp40, arg0->yAngle, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp110[1], &sp40, &sp40);
        guMtxXFML(&sp40, 0, 0, 0, &sp8C, &sp88, &sp84);
        D_80168D88 = arg0->pos.x + sp8C;
        D_80168D8C = arg0->pos.y + sp88;
        D_80168D90 = arg0->pos.z + sp84;
        if (D_80174980 == 4) {
            Effect_TypeAF_Init(&D_80168D88, &D_80168D8C, &D_80168D90, 50.0f, 20.0f, 10.0f, 5, 180, 75);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80025EF0.s")
void func_80025EF0(PlayerActor* arg0, Tongue* arg1, s32 arg2);
#endif

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

void func_80027138(void* arg0, s32* arg1, s32* arg2, Mtx** arg3) {
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
        *arg3 = (Mtx*)var_v1[2];
    } else {
        *arg3 = (Mtx*)SEGMENTED_TO_VIRTUAL(var_v1[2]);
    }
}

void func_80027240(Mtx** arg0, Mtx* arg1, s32 arg2, s32 arg3) {
    Mtx* mtxPtr = *arg0;
    s32 i;

    for (i = 0; i < arg3; i++) {
        *mtxPtr++ = arg1[arg2 * arg3 + i];
    }

    *arg0 = mtxPtr;
}

void func_800273F8(s32 actorIndex) {
    s32 i; 
    for (i = 0; i < gActors[actorIndex].tongueCollision; i++) {
        func_80080C28(gActors[actorIndex].pos.x + gActors[actorIndex].unknownPositionThings[i].unk_00,
                      gActors[actorIndex].pos.y + gActors[actorIndex].unknownPositionThings[i].unk_04 + gActors[actorIndex].unknownPositionThings[i].unk_10 / 2,
                      gActors[actorIndex].pos.z + gActors[actorIndex].unknownPositionThings[i].unk_08,
                      gActors[actorIndex].unknownPositionThings[i].unk_0C,
                      gActors[actorIndex].unknownPositionThings[i].unk_10 / 2,
                      gActors[actorIndex].unknownPositionThings[i].unk_0C,
                      100, 100, 100, 100);
    }
}

void func_800274F0(Actor* actor) {
    s32 unused;
    f32 sp38 = (f32)(gTimer % 31) / 32;
    f32 sp34 = actor->unknownPositionThings[0].unk_10;
    unkStruct* sp30 = &D_80172E88[actor->userVariables[0]];    

    func_80058044(actor->pos.x, actor->pos.y + sp34 / 2, actor->pos.z,
                  sp34 * 3 / 2, sp34 * 3 / 2,
                  -actor->unk_90, sp38, 7);
    func_8005747C(sp30->unk_08[actor->userVariables[1]],
                  sp30->unk_48[actor->userVariables[1]] + sp34 / 2,
                  sp30->unk_88[actor->userVariables[1]],
                  sp34, sp34, sp38, 8);
    func_8005747C(sp30->unk_08[actor->userVariables[2]],
                  sp30->unk_48[actor->userVariables[2]] + sp34 / 2,
                  sp30->unk_88[actor->userVariables[2]],
                  sp34, sp34, sp38, 8);
}

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
Gfx* func_8002A190(graphicStruct* arg0, Gfx* gfxPos, PlayerActor* player, Tongue* tongue, s32 playerIndex) {
    f32 scaleX = 1.4f;
    f32 scaleY = player->yScale * 1.4f;    
    f32 scaleZ = 1.4f;
    f32 sp28 = 25.0f;

    if (player->power == 3 && (player->powerTimer >= 20 && player->powerTimer <= player->powerTimerTill - 20 || !(gTimer % 2))) {
        scaleX /= 2.0f;
        scaleY /= 2.0f;
        scaleZ /= 2.0f;
        sp28 /= 2.0f;
    }

    guTranslate(&arg0->playerTranslate[playerIndex], player->pos.x, player->pos.y - sp28 * player->yScale, player->pos.z);
    guRotate(&arg0->playerRotate[playerIndex], player->yAngle + 90.0f, 0.0f, 1.0f, 0.0f);
    if (tongue->amountInMouth < 6) {
        scaleX *= 1.0f + tongue->amountInMouth / 6.0f;
        scaleZ *= 1.0f + tongue->amountInMouth / 6.0f * 0.5f;
    } else {
        scaleX *= 2.0f;
        scaleZ *= 1.5f;
    }

    if (gGameModeCurrent == GAME_MODE_CREDITS) {
        guScale(&arg0->playerScale[playerIndex], scaleX * 0.9f, scaleY * 0.9f, scaleZ * 0.9f);
    } else {
        guScale(&arg0->playerScale[playerIndex], scaleX, scaleY, scaleZ);
    }

    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->playerTranslate[playerIndex]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->playerRotate[playerIndex]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->playerScale[playerIndex]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    if (player->playerHURTSTATE != 3 || gTimer % 2 == 0) {
        Gfx* dlist = D_8008B58;
        if (gSelectedCharacters[playerIndex] <= CHARA_WHITE) {
            if (Battle_GameType == BATTLE_TYPE_UNK_0) {
                dlist = D_800F0638[gSelectedCharacters[playerIndex]];
            } else {
                dlist = D_800F0650[gSelectedCharacters[playerIndex]];
            }
        }
        PutDList(&D_800FF8D4, &gfxPos, dlist);
    }
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    return gfxPos;
}

Gfx* func_8002A4C4(graphicStruct* arg0, Gfx* gfxPos, PlayerActor* player, Tongue* tongue, s32 playerIndex) {
    s32 i;
    
    for (i = 0; i < 6; i++) {
        Mtx sp100, spC0;
        f32 f20 = (player->reticleSize - 1.0f) * 0.5f;
        f32 scale = 1.0f;

        if (gTimer % 2 == i % 2) {
            continue;
        }
        
        guTranslate(&arg0->reticuleTranslate[playerIndex][i], player->unk_DC[i], player->pos.y + player->tongueYOffset, player->unk_F4[i]);
        guRotate(&sp100, player->yAngle + 90.0f, 0.0f, 1.0f, 0.0f);
        guRotate(&spC0, gTimer * f20 * 30.0f + 45.0f, 0.0f, 0.0f, 1.0f);
        guMtxCatL(&spC0, &sp100, &arg0->reticuleRotate[playerIndex][i]);
        scale += f20 * 1.5f + sinf((gTimer % 8) * PI_2 / 8) * f20 * 0.5f;
        scale *= 0.8f;
        guScale(&arg0->reticuleScale[playerIndex][i], scale, scale, scale);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->reticuleTranslate[playerIndex][i]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->reticuleRotate[playerIndex][i]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->reticuleScale[playerIndex][i]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        if (tongue->amountInMouth != 0) {
            gDPSetPrimColor(gfxPos++, 0, 0, 255, 255, 0, 255);
        } else {
            gDPSetPrimColor(gfxPos++, 0, 0, 0, 255, 255, 255);
        }
        gSPDisplayList(gfxPos++, D_1015CB0);
        gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    }

    return gfxPos;
}

Gfx* func_8002A824(graphicStruct* arg0, Gfx* gfxPos, PlayerActor* player, Tongue* tongue, s32 playerIndex) {
    s32 i;
    s32 sp160 = FALSE;
    f32 f28 = 1.0f;
    Mtx sp118, spD8;    

    if (player->power == 3) {
        f28 = 0.5f;
    }
    if (tongue->tongueMode == 4 || tongue->tongueMode == 5 || tongue->tongueMode == 11) {
        sp160 = TRUE;
    }

    for (i = tongue->poleSegmentAt; i < tongue->segments; i++) {
        guTranslate(&arg0->tongueTranslate[playerIndex][i], 
                    tongue->tongueXs[i] + player->pos.x,
                    tongue->tongueYs[i] + player->pos.y + player->tongueYOffset,
                    tongue->tongueZs[i] + player->pos.z);
        if (tongue->vaulting == 1) {
            
            guRotate(&sp118, tongue->angleOfVault - 90.0f, 0.0f, 1.0f, 0.0f);
            guRotate(&spD8, 90.0f - tongue->reset1[i], 1.0f, 0.0f, 0.0f);
            guMtxCatL(&spD8, &sp118, &arg0->tongueRotate[playerIndex][i]);
        } else {
            guRotate(&arg0->tongueRotate[playerIndex][i], tongue->tongueAngles[i] + 90.0f, 0.0f, 1.0f, 0.0f);
        }
        if (sp160 && i == tongue->segments - 1) {
            guScale(&arg0->tongueScale[playerIndex][i], 0.06f * f28, 0.06f * f28, tongue->lastTongueOffset);
        } else {
            guScale(&arg0->tongueScale[playerIndex][i], 0.06f * f28, 0.06f * f28, f28);
        }
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->tongueTranslate[playerIndex][i]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->tongueRotate[playerIndex][i]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->tongueScale[playerIndex][i]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

        if (i < 16) {
            s32 v1 = i * 220;
            if (tongue->wallTime != 0 && gTimer % 2) {
                gDPSetPrimColor(gfxPos++, 0, 0, 255, 35 + v1 / 16, 0, 255);
            } else {
                gDPSetPrimColor(gfxPos++, 0, 0, 35 + v1 / 16, 0, 0, 255);
            }
        } else {
            s32 v1 = (i - 16) * 255;
            if (tongue->wallTime != 0 && gTimer % 2) {
                gDPSetPrimColor(gfxPos++, 0, 0, 255, 255, v1 / 16, 255);
            } else {
                gDPSetPrimColor(gfxPos++, 0, 0, 255, v1 / 16, 0, 255);
            }
        }

        gSPDisplayList(gfxPos++, D_1015BD0);
        gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    }

    if (sp160) {
        guTranslate(&arg0->tongueTranslate[playerIndex][32], 
                    tongue->tongueXs[32] + player->pos.x,
                    tongue->tongueYs[32] + player->pos.y + player->tongueYOffset,
                    tongue->tongueZs[32] + player->pos.z);
        guRotate(&arg0->tongueRotate[playerIndex][32], tongue->tongueAngles[32] + 90.0f, 0.0f, 1.0f, 0.0f);
        guScale(&arg0->tongueScale[playerIndex][32], 0.12f, 0.12f, 0.12f);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->tongueTranslate[playerIndex][32]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->tongueRotate[playerIndex][32]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->tongueScale[playerIndex][32]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPDisplayList(gfxPos++, D_2006160);
        gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    }

    return gfxPos;
}

void func_8002AE3C(void) {
    s32 i;
    f32 scale;
    s32 s1;
    s32 a1;
    s32 temp = 15;

    for (i = 0; i < MAX_ACTORS; i++) {
        scale = 2.0f;
        a1 = FALSE;

        if (gActors[i].actorState == 2) {
            continue;
        }        

        if (func_80026C78(&gActors[i])) {
            continue;
        }

        if (gActors[i].actorID >= BIG_FEET_POWER_UP &&
            gActors[i].actorID <= SHRINK_ENEMY_POWER_UP &&
            gActors[i].userVariables[1] > gActors[i].unk_124 - 30 &&
            gActors[i].globalTimer % 2 != 0) {
            continue;
        }

        switch(gActors[i].actorID) {
            case R_HEART:
            case FALLING_R_HEART:
                s1 = 19;
                break;
            case O_HEART:
                s1 = 20;
                scale = 2.2f;
                break;
            case Y_HEART:
                s1 = 21;
                scale = 2.4f;
                break;
            case CROWN:
                s1 = 18;
                scale = 2.5f;
                break;
            case CARROT:
                s1 = 26;
                break;
            case UNK_65:
                s1 = 26;
                break;
            case TIME_STOP_POWER_UP:
                s1 = 27;
                scale = 2.2f;
                break;
            case BIG_FEET_POWER_UP:
                s1 = 22;
                scale = 2.5f;
                break;
            case BIG_HEAD_POWER_UP:
                s1 = 23;
                scale = 2.5f;
                break;
            case SHRINK_POWER_UP:
                s1 = 24;
                scale = 2.5f;
                break;
            case SHRINK_ENEMY_POWER_UP:
                s1 = 25;
                scale = 2.5f;
                break;
            case BL_BOSS_SEGMENT:
                if (gActors[i].globalTimer < 100) {
                    continue;
                }
                if (gActors[i].userVariables[3] > 0 && gActors[i].userVariables[3] <= 10) {
                    f32 f16 = temp * (1 - gActors[i].userVariables[3]) + 150;
                    func_8005747C(gActors[i].pos.x, 
                                  gActors[i].pos.y + (gActors[i].unknownPositionThings[0].unk_10 + f16) * 0.5f,
                                  gActors[i].pos.z,
                                  f16 + 2.0f * gActors[i].unknownPositionThings[0].unk_0C,
                                  f16 + 2.0f * gActors[i].unknownPositionThings[0].unk_0C,
                                  (f32)(gTimer % 32) / 32,
                                  gActors[i].userVariables[3] >= 3 && gActors[i].userVariables[3] < 10 ? 0xD3 : 0x2B);
                }
                a1 = TRUE;
                break;
            default:
                continue;
        }
        if (!a1) {
            func_8005747C(gActors[i].pos.x, 
                          gActors[i].pos.y + gActors[i].unknownPositionThings[0].unk_10 * 0.5f,
                          gActors[i].pos.z,
                          scale * gActors[i].unknownPositionThings[0].unk_0C,
                          scale * gActors[i].unknownPositionThings[0].unk_0C,
                          (f32)(gTimer % 31) / 32,
                          s1);
        }
    }

}

Gfx* func_8002B118(graphicStruct* arg0, Gfx* gfxPos, Gfx* dlist, Actor* actor, f32 scale, s32 arg5, s32* mtxIndex) {
    Mtx sp300, sp2C0, sp280, sp240;
    Mtx sp200, sp1C0;
    Mtx sp180, sp140;
    Mtx sp100, spC0;
    Mtx sp80, sp40;

    scale *= actor->sizeScalar;
    actor->unk_E8 *= actor->sizeScalar;
    guTranslate(&arg0->actorTranslate[*mtxIndex], actor->pos.x, actor->pos.y + actor->unk_E8, actor->pos.z);
    if (actor->actorID == YELLOW_ANT && actor->userVariables[0] > 0) {
        guRotate(&sp300, actor->unk_90 - actor->unk_134[2], 0.0f, 1.0f, 0.0f);
        guRotate(&sp2C0, actor->unk_134[1], 1.0f, 0.0f, 0.0f);
        guRotate(&sp280, actor->unk_134[0] + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp300, &sp2C0, &sp240);
        guMtxCatL(&sp240, &sp280, &arg0->actorRotate[*mtxIndex]);
    } else if (actor->actorID == ANT_QUEEN && (actor->userVariables[1] == 10 || actor->userVariables[1] == 11 || actor->userVariables[1] == 12 || actor->userVariables[1] == 14)) {
        guRotate(&sp1C0, actor->unk_134[1], 0.0f, 0.0f, 1.0f);
        guRotate(&sp200, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp1C0, &sp200, &arg0->actorRotate[*mtxIndex]);
    } else if (actor->actorID == ARMADILLO || actor->actorID == BOULDER || actor->actorID == LIZARD_KONG_BOULDER) {
        if (actor->actorID == BOULDER && actor->userVariables[0] == 0) {
            return gfxPos;
        }
        guRotate(&sp140, actor->unk_134[3], 1.0f, 0.0f, 0.0f);
        guRotate(&sp180, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp140, &sp180, &arg0->actorRotate[*mtxIndex]);
    } else if (actor->actorID == FISH) {
        if (arg5 == 0) {
            guRotate(&arg0->actorRotate[*mtxIndex], actor->unk_134[2] + actor->unk_C0 + 90.0f, 0.0f, 1.0f, 0.0f);
        } else {
            guRotate(&arg0->actorRotate[*mtxIndex], actor->unk_134[3] + actor->unk_C0 + 90.0f, 0.0f, 1.0f, 0.0f);
        }
    } else if (actor->actorID == PILE_OF_BOOKS) {
        if (actor->userVariables[2] >= 9 && actor->userVariables[2] <= 11) {
            guRotate(&spC0, actor->unk_134[4], 1.0f, 0.0f, 0.0f);
        } else {
            guRotate(&spC0, 0.0f, 1.0f, 0.0f, 0.0f);
        }
        guRotate(&sp100, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&spC0, &sp100, &arg0->actorRotate[*mtxIndex]);
    } else if (actor->actorID == CAKE_BOSS && arg5 == 1) {
        guRotate(&arg0->actorRotate[*mtxIndex], actor->unk_134[3], 0.0f, 1.0f, 0.0f);
    } else if (actor->actorID == CAKE_BOSS_STRAWBERRY) {
        guRotate(&sp40, actor->unk_134[0], 1.0f, 0.0f, 0.0f);
        guRotate(&sp80, actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
        guMtxCatL(&sp40, &sp80, &arg0->actorRotate[*mtxIndex]);
    } else {
        guRotate(&arg0->actorRotate[*mtxIndex], actor->unk_C0 + actor->unk_90 + 90.0f, 0.0f, 1.0f, 0.0f);
    }

    guScale(&arg0->actorScale[*mtxIndex], scale, scale, scale);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorTranslate[*mtxIndex]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorRotate[*mtxIndex]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorScale[*mtxIndex]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    PutDList(&D_800FF8D4, &gfxPos, dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    (*mtxIndex)++;
    return gfxPos;
}

Gfx* func_8002B7BC(graphicStruct* arg0, Gfx* gfxPos) {
    s32 i;
    s32 sp178 = 0;
    f32 scale1;
    Gfx* gfx1;

    for (i = 0; i < MAX_ACTORS; i++) {
        if (gActors[i].actorID == ACTOR_NULL) {
            continue;
        }

        if (gActors[i].actorState == 2 || gActors[i].actorState == 4 && (gActors[i].unk_C8 & 1) && D_80174980 != 3 || func_80026C78(&gActors[i])) {
            continue;
        }
        
        switch (gActors[i].actorID) {
            case YELLOW_ANT:
                gActors[i].unk_E8 = gActors[i].unk_134[5] - 40.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3057250, &gActors[i], 3.0f, 0, &sp178);
                break;
            case ANT_QUEEN:
                gActors[i].unk_E8 = gActors[i].unk_134[5];
                gfxPos = func_8002B118(arg0, gfxPos, D_300EFC0, &gActors[i], 4.0f, 0, &sp178);
                break;
            case BL_BOSS_SEGMENT:
                if (gActors[i].globalTimer >= 100) {
                    if (gActors[i].userVariables[3] == 0) {
                        gActors[i].unk_E8 = 0.0f;
                        gfxPos = func_8002B118(arg0, gfxPos, D_3007EA0, &gActors[i], 10.0f, 0, &sp178);
                    } else if (gActors[i].userVariables[3] == 10) {
                        gActors[i].unk_E8 = 0;
                        gfxPos = func_8002B118(arg0, gfxPos, D_3008428, &gActors[i], 10.0f, 0, &sp178);
                    }
                }
                break;
            case CANNON:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3043F60, &gActors[i], 4.0f, 0, &sp178);
                break;
            case UNK_1F:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3012460, &gActors[i], 2.0f, 0, &sp178);
                break;
            case POGO:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3053ED0, &gActors[i], 3.0f, 0, &sp178);
                break;
            case CAKE_BOSS:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_30081F8, &gActors[i], 8.0f, 0, &sp178);
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_30093A8, &gActors[i], 8.0f, 1, &sp178);
                break;
            case CAKE_BOSS_STRAWBERRY:
                if (gActors[i].unk_128 == 6) {
                    scale1 = 16.0f;
                } else {
                    scale1 = 8.0f;
                }
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_300A9E0, &gActors[i], scale1, 0, &sp178);
                break;
            case BOWLING_PINS:
                if (D_800FE400 == 0) {
                    gfx1 = D_30545C8;
                } else {
                    gfx1 = D_3056428;
                }
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, gfx1, &gActors[i], 3.0f, 0, &sp178);
                break;
            case ARROWS:
                gActors[i].unk_E8 = 50.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3044498, &gActors[i], 3.0f, 0, &sp178);
                break;
            case CHOMPER:
                scale1 = gActors[i].unk_164 * 6.0f;
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_30466C8, &gActors[i], scale1, 0, &sp178);
                break;
            case BOULDER:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3049EB0, &gActors[i], 2.0f, 0, &sp178);
                break;
            case ARMADILLO:
                gActors[i].unk_E8 = gActors[i].unk_134[4];
                gfxPos = func_8002B118(arg0, gfxPos, D_300CED0, &gActors[i], 3.0f, 0, &sp178);
                break;
            case SANDAL:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_306DDC0, &gActors[i], 2.0f, 0, &sp178);
                break;
            case METAL_SHEET:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_306F3C8, &gActors[i], 2.0f, 0, &sp178);
                break;
            case SCROLL:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_30708F0, &gActors[i], 3.0f, 0, &sp178);
                break;
            case FIRE_SPITTER:
                gActors[i].unk_E8 = gActors[i].unknownPositionThings[0].unk_10 / 2;
                gfxPos = func_8002B118(arg0, gfxPos, D_30740B0, &gActors[i], 2.0f, 0, &sp178);
                break;
            case PILE_OF_BOOKS:
                gActors[i].unk_E8 = -60.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3010220, &gActors[i], 6.0f, 0, &sp178);
                break;
            case PILE_OF_BOOKS_ARM_SPITTER:
                gActors[i].unk_E8 = gActors[i].unknownPositionThings[0].unk_10 / 2;
                gfxPos = func_8002B118(arg0, gfxPos, D_3013390, &gActors[i], 3.0f, 0, &sp178);
                break;
            case GOLEM:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3058750, &gActors[i], 4.0f, 0, &sp178);
                break;
            case SPIDER_SPAWNER:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_30595A8, &gActors[i], 2.0f, 0, &sp178);
                break;
            case FISH:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_305A738, &gActors[i], 1.4f, 0, &sp178);
                gfxPos = func_8002B118(arg0, gfxPos, D_305B528, &gActors[i], 1.4f, 1, &sp178);
                break;
            case LIZARD_KONG_BOULDER:
                gActors[i].unk_E8 = gActors[i].unknownPositionThings[0].unk_10 / 2;
                gfxPos = func_8002B118(arg0, gfxPos, D_3011318, &gActors[i], 2.0f, 0, &sp178);
                break;
            case LIZARD_KONG:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_300DB48, &gActors[i], 3.0f, 0, &sp178);
                if (gActors[i].unk_EC == 1 && gActors[i].unk_F0 > 25 && gActors[i].unk_F0 < 62) {
                    s32 unused;
                    Mtx* sp168;
                    Mtx sp128;
                    Mtx spE8;
                    Mtx spA8;
                    s32 spA4;
                    s32 spA0;
                    f32 sp9C, sp98, sp94;
                    f32 sp90, sp8C, sp88;

                    sp168 = NULL;
                    guRotate(&spE8, gActors[i].unk_90 + 90.0f, 0, 1.0f, 0);
                    func_80027138(&D_3025DA8, &spA4, &spA0, &sp168);

                    sp128 = sp168[6 + (gActors[i].unk_F0 / 2) * spA4];
                    guMtxCatL(&sp128, &spE8, &spA8);
                    guMtxXFML(&spA8, -120.0f, 0.0f, 0.0f, &sp9C, &sp98, &sp94);

                    sp128 = sp168[8 + (gActors[i].unk_F0 / 2) * spA4];
                    guMtxCatL(&sp128, &spE8, &spA8);
                    guMtxXFML(&spA8, 120.0f, 0.0f, 0.0f, &sp90, &sp8C, &sp88);
                    guTranslate(&arg0->actorTranslate[sp178], gActors[i].pos.x + 3.0f * ((sp9C + sp90) * 0.5f),
                                                              gActors[i].pos.y + 3.0f * ((sp98 + sp8C) * 0.5f),
                                                              gActors[i].pos.z + 3.0f * ((sp94 + sp88) * 0.5f));
                    guRotate(&arg0->actorRotate[sp178], gActors[i].unk_90 + 90.0f, 0, 1.0f, 0);
                    guScale(&arg0->actorScale[sp178], 2.0f, 2.0f, 2.0f);
                    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorTranslate[sp178]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorRotate[sp178]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&arg0->actorScale[sp178]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                    PutDList(&D_800FF8D4, &gfxPos, D_3011318);
                    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
                }
                break;
            case POPCORN_BUCKET:
                gActors[i].unk_E8 = 0.0f;
                gfxPos = func_8002B118(arg0, gfxPos, D_3012460, &gActors[i], 2.0f, 0, &sp178);
                break;
        }
    }

    return gfxPos;
}

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

    gSPSegment(gfxPos++, 0x00, 0);
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

    gdl = func_8002C4E8(arg0->dlist, arg1, 1);
    gDPFullSync(gdl++);
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

void DemoGfx_DrawFrame(Gfx* arg0, graphicStruct* arg1, s32 fbIndex) {

    if (D_80174998 < 3) {
        arg0 = func_8002CAC8(arg1, fbIndex);
    }
    
    Video_SetTask(arg1, arg0, fbIndex);
    osWritebackDCache(arg1, sizeof(graphicStruct));
    Sched_SetGfxTask(&D_800F04E0[fbIndex], fbIndex);
}

void DemoGfx_SwapFB(s32 fbIndex) {
    Timing_StopProcess();
    osRecvMesg(&gFrameDrawnMessageQueue, NULL, OS_MESG_BLOCK);
    osViSwapBuffer(&D_803B5000[fbIndex].data);
    osViSetSpecialFeatures(OS_VI_GAMMA_ON|OS_VI_GAMMA_DITHER_ON);
    
    if (MQ_IS_FULL(&gSyncMessageQueue)) {
        osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    }
    
    func_8008C554();
    osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    Timing_StartProcess();
}

//update framebuffer
Gfx* func_8002CCA0(graphicStruct* arg0, s32 arg1) {
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
    Effect_Init();
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
    DemoGfx_DrawFrame(0, &gGraphicsList[gFramebufferIndex], gFramebufferIndex);
    
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
    DemoGfx_SwapFB(gFramebufferIndex);
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
    Sched_StartThread();
}