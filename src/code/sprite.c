#include "common.h"
#include "sprite.h"

void DummiedPrintf2(char* arg0, ...) {

}

/**
 * @brief Sets the seed for generating randomness.
 * 
 * @param seed: seed for rng
 */
void Rand_SetSeed(s32 seed) {
    rngSeed = seed;
}

s32 Rand(void) {
    u32 y, z;
    y = rngSeed * 4 + 2;
    z = y + 1;
    y = y * z;
    return rngSeed = y / 4;
}

void func_80055C04(void) {
    s32 i;
    
    D_800F68A8 = 1;
    
    for (i = 0; i < MAXCONTROLLERS; i++) {
        gPrevButtons[i] = -1;
        gButtons[i] = -1;
    }
}

void DisableInput(void) {
    D_800F68A8 = 0;
}

void EnableInput(void) {
    D_800F68A8 = 1;
}

s32 func_80055C90(void) {
    return D_800F68A8;
}

/**
 * @brief Simplifies joystick movement to d-pad equivalent.
 * 
 * @param conts: controllers struct
 */
void Controller_ParseJoystick(ContMain* conts) {
    s32 i;
    f32 sqX,sqY;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        gPrevButtons[i] = gButtons[i];
        gButtons[i] = conts[i].buttons0;
        //NORM_2
        sqX=SQ(conts[i].stickX);
        sqY=SQ(conts[i].stickY);
        if (sqrtf(sqX + sqY) > 42.0) {
            if (conts[i].stickX < -30) {
                gButtons[i] |= CONT_LEFT;
            } else if (conts[i].stickX > 30) {
                gButtons[i] |= CONT_RIGHT;
            }
            if (conts[i].stickY < -30) {
                gButtons[i] |= CONT_DOWN;
            } else if (conts[i].stickY > 30) {
                gButtons[i] |= CONT_UP;
            }
        }

        if (D_800F68A8 == NULL) {                     // if player is allowed movement (?) | Possibly if the chameleon is loaded 
            if (((s32)gPlayerActors[i].active > 0)) { //cast required
                if (gPlayerActors[i].exists > 0) {
                    Controller_Zero(&conts[i]);
                }
            }
        }
    }
}
//used for Debug function controls
//https://decomp.me/scratch/rzD9G
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055E5C.s")

//takes button define
s32 func_80055EEC(s32 arg0) {
    return func_80055F10(0, arg0);
}

//https://decomp.me/scratch/Paab8
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055F10.s")

void func_80055FA4(void) {
    D_800F68C0 = - 1;
    D_800F68C4[0] = -1;
}

void func_80055FBC(s32 arg0) {
    D_800F68C0 = D_800F68C4[0];
    D_800F68C4[0] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056064.s")

/**
 * @brief Recursively calls until the angle is within the range of 0-360.
 * 
 * @param arg0 
 * @return f32 
 */
f32 WrapAngleRecursive(f32 arg0) {
    if (arg0 >= 360.0f) {
        arg0 = arg0 - 360.0f;
        arg0 = WrapAngleRecursive(arg0);
    }
    else if (arg0 < 0.0f) {
        arg0 = arg0 + 360.0f;
        arg0 = WrapAngleRecursive(arg0);
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005625C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056BFC.s")

void func_80056CA0(u8* arg0, u8* arg1) {
    while (*arg0 == 0) {
        *arg1 = 130;
        arg1 += 2;
        arg0 += 1;
        arg1[-1] = arg0[-1] + 31;
    }
}

//https://decomp.me/scratch/cUHtJ
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056CDC.s")

void func_80056D14(unkStruct02* arg0, s32 arg1, unkStruct02* arg2, unkStruct02* arg3) {
    arg0->flags = arg1;
    arg0->unk_04 = arg2;
    arg0->next = arg3;
    if (arg3 != NULL) {
        arg3->unk_04 = (void*)arg0;
    }
}


void* func_80056D30(s32 arg0) {
    unkStruct02* var_a2;
    unkStruct02* next;
    s32 flags;
    
    if (arg0 == 0) {
        return NULL;
    }
    
    var_a2 = D_80176F4C;
    
    while (1) {
        flags = var_a2->flags;
        if ((flags & 1) && ((u32) arg0 < (u32) flags)) {
            if ((u32)(flags & ~1) >= (u32) ALIGN_128(arg0) + 0x80) {
                next = var_a2->next;
                var_a2->flags = ALIGN_128(arg0);
                var_a2->next = (unkStruct02*)((s32)var_a2 + ALIGN_128(arg0) + 0x80);
                func_80056D14(var_a2->next, (flags & ~1) - ALIGN_128(arg0) - 0x80, var_a2, next);
                Memory_Free(var_a2->next + 1); //incorrect function name?
                return var_a2 + 1;
            }
            var_a2->flags = flags & ~1; //should be here but breaks tail merging
            if (((!var_a2) && (!var_a2)) && (!var_a2)){} //TODO: fake match
            return var_a2 + 1;
        }
         
        if (var_a2->next != NULL) {
            var_a2 = var_a2->next;
        } else {
            break;
        }
    }
    return NULL;
}

void func_80056DF4(unkStruct02* arg0, unkStruct02* arg1) {
    unkStruct02* temp_v0;

    arg0->flags += (arg1->flags & ~1) + 0x80;
    temp_v0 = arg1->next;
    arg0->next = temp_v0;
    if (temp_v0 != 0) {
        temp_v0->unk_04 = arg0;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Memory_Free.s")

void func_80056EB4(void) {
    func_80056CDC((s32) D_801191A0, (s32) D_801FFB78 - (s32) D_801191A0);
}


void* _malloc(s32 arg0) {
    void* temp_v0 = func_80056D30(arg0);
    
    if (temp_v0 == NULL) {
        DummiedPrintf2("mem err!\n");
    }

    return temp_v0;
}

s32 Free(void* arg0) {
    Memory_Free(arg0);
    return 0;
}

void func_80056F48(s32 arg0, Tongue* tongues, PlayerActor* players, Camera* cameras) {
    f32 xAt = D_801768A0.f5.x - D_801768A0.f4.x;
    f32 yAt = D_801768A0.f5.y - D_801768A0.f4.y + D_800FE014;
    f32 zAt = D_801768A0.f5.z - D_801768A0.f4.z;
    if (xAt != 0 || zAt != 0) {
        guLookAt(&D_80176860,
                 0.0f, 0.0f, 0.0f, // Eye
                 xAt, yAt, zAt, // At
                 0, 1, 0); // Up
    } else {
        guMtxIdent(&D_80176860);
    }
}

//could there be a file split here or close to here?

s32 LoadSprite(s32 arg0) {
    s32 dmaSize;
    s32 dmaResult;
    SpriteListing* temp_s1;

    temp_s1 = &gSpriteListings[arg0];
    if ((temp_s1->type == 8) || (arg0 < 0) || (arg0 >= 0xE6)) {
        return 0;
    }
    switch (temp_s1->type) {
    case 7:
        dmaSize = temp_s1->width * 4 * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 6:
        dmaSize = temp_s1->width * 2 * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 2:
    case 5:
        dmaSize = temp_s1->width * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 0:
    case 1:
    case 4:
        dmaSize = (s32) (temp_s1->width * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY) / 2;
        break;
    }
    
    if (temp_s1->bitmapRom == NULL) {
        temp_s1->bitmapRom = (s32)temp_s1->bitmapP;
    }
    
    if (temp_s1->paletteRom == NULL) {
        temp_s1->paletteRom = (s32)temp_s1->palletteP;
    }
    
    temp_s1->bitmapP = _malloc(dmaSize);
    
    if (temp_s1->bitmapP == NULL) {
        DummiedPrintf2(" sprite.c : sprite on mem err!(size=%d SPRITE3ID=%d)\n", dmaSize, arg0);
        return -1;
    }
    
    dmaResult = DMA_Copy(&D_8C26A0[temp_s1->bitmapRom & 0xFFFFFF], temp_s1->bitmapP, dmaSize);

    while (dmaResult < 0) {
        dmaResult = DMA_Copy(&D_8C26A0[temp_s1->bitmapRom & 0xFFFFFF], temp_s1->bitmapP, dmaSize);
    }
    
    while (func_800A72E8(dmaResult) == 0);
    
    if ((temp_s1->type == 4) || (temp_s1->type == 5)) {
        temp_s1->palletteP = _malloc(0x200);
        if (temp_s1->palletteP == NULL) {
            DummiedPrintf2(" sprite.c : sprite on mem err! (size = %d)\n", 0x200);
            Free(temp_s1->bitmapP);
            return -1;
        }
        
        dmaResult = DMA_Copy(&D_8C26A0[temp_s1->paletteRom & 0xFFFFFF], temp_s1->palletteP, 0x200);

        while (dmaResult < 0) {
            dmaResult = DMA_Copy(&D_8C26A0[temp_s1->paletteRom & 0xFFFFFF], temp_s1->palletteP, 0x200);
        }
        
        while (func_800A72E8(dmaResult) == 0);
    }
    return 0;
}

void FreeSprite(s32 arg0) {
    SpriteListing* sprite;

    sprite = &gSpriteListings[arg0];
    if (sprite->type != COLORMODE_BLANK && arg0 >= 0 && arg0 <= 229) {
        Free(sprite->bitmapP);
        if (sprite->type == COLORMODE_CI4 || sprite->type == COLORMODE_CI8) {
            Free(sprite->palletteP);
        }
    }
}

void printReset(void) {
    s32 i;

    if (D_800FE000 == 0) {
        D_800FDFFC = 0.0f;
        gPrimRed = -1;
        gPrimGreen = -1;
        gPrimBlue = -1;
        gPrimAlpha = -1;
        D_800FDFF0 = 1.0f;
        D_800FDFE8 = 0;
        D_800FDFEC = 1;
        D_800FDFE0 = 0;
        D_800FDFE4 = 0;
        D_800FE004 = 0.0f;
        D_800FE008 = 0.0f;
        D_800FE00C = 0.0f;
        D_800FE010 = 0.0f;

        for (i = 0; i < 16; i++) {
            gTextGradient[i] = -1;
        }
    }
}

void func_8005747C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    f32 sp6C, sp68;
    f32 sp54, sp50, sp4C;
    s32 sp48, sp44;    
    SpriteListing* tile;

    if (D_800FDFA8[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_80176F98[gSpriteFrameBuffer][D_800FDFA8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg6];
    D_800FDFA8[gSpriteFrameBuffer]++;

    guMtxXFML(&D_80176860, arg0 - D_801768A0.f4.x, arg1 - D_801768A0.f4.y, arg2 - D_801768A0.f4.z, &sp54, &sp50, &sp4C);

    if (arg5 >= 1.0 || arg5 == 0.0f) {
        tile->tileIndexX = arg5;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg5)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg5)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg3 == 0.0f && arg4 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg3 / 2;
        sp68 = arg4 / 2;
    }

    tile->quad[0].v.ob[0] = -sp6C + sp54;
    tile->quad[0].v.ob[1] = sp68 + sp50;
    tile->quad[0].v.ob[2] = sp4C;
    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[1].v.ob[0] = -sp6C + sp54;
    tile->quad[1].v.ob[1] = -sp68 * 1 + sp50;
    tile->quad[1].v.ob[2] = sp4C;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    tile->quad[2].v.ob[0] = sp6C * 1 + sp54;
    tile->quad[2].v.ob[1] = sp68 + sp50;
    tile->quad[2].v.ob[2] = sp4C;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[3].v.ob[0] = sp6C + sp54;
    tile->quad[3].v.ob[1] = -sp68 + sp50;
    tile->quad[3].v.ob[2] = sp4C;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    printReset();
}

void func_80057A68(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    f32 sp6C, sp68;
    f32 sp54, sp50, sp4C;
    s32 sp48, sp44;    
    SpriteListing* tile;

    if (D_800FDFA8[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_80176F98[gSpriteFrameBuffer][D_800FDFA8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg6];
    D_800FDFA8[gSpriteFrameBuffer]++;

    guMtxXFML(&D_80176860, arg0 - D_801768A0.f4.x, arg1 - D_801768A0.f4.y, arg2 - D_801768A0.f4.z, &sp54, &sp50, &sp4C);

    if (arg5 >= 1.0 || arg5 == 0.0f) {
        tile->tileIndexX = arg5;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg5)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg5)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg3 == 0.0f && arg4 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg3 / 2;
        sp68 = arg4 / 2;
    }

    tile->quad[0].v.ob[0] = -sp6C + sp54;
    tile->quad[0].v.ob[1] = sp68 * 2 + sp50;
    tile->quad[0].v.ob[2] = sp4C;
    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[1].v.ob[0] = -sp6C + sp54;
    tile->quad[1].v.ob[1] = sp50;
    tile->quad[1].v.ob[2] = sp4C;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    tile->quad[2].v.ob[0] = sp6C * 1 + sp54;
    tile->quad[2].v.ob[1] = sp68 * 2 + sp50;
    tile->quad[2].v.ob[2] = sp4C;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[3].v.ob[0] = sp6C + sp54;
    tile->quad[3].v.ob[1] = sp50;
    tile->quad[3].v.ob[2] = sp4C;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    printReset();
}

void func_80058044(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp6C, sp68;
    f32 sp54, sp50, sp4C;
    f32 angle;
    s32 sp48, sp44;
    SpriteListing* tile;    

    if (D_800FDFA8[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_80176F98[gSpriteFrameBuffer][D_800FDFA8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFA8[gSpriteFrameBuffer]++;

    sp54 = arg0 - D_80176B78->f4.x;
    sp50 = arg1 - D_80176B78->f4.y;
    sp4C = arg2 - D_80176B78->f4.z;

    angle = func_80056104(sp54, sp4C);

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)];
    }
    tile->tileIndexY = WrapAngleRecursive(angle + 180.0f + arg5 + tile->tileCountY / 360.0f) * tile->tileCountY * 2.0f / 360.0f;

    if (tile->tileIndexY >= tile->tileCountY) {
        tile->tileIndexY -= tile->tileCountY;
        tile->tileIndexX += tile->tileCountX / 2;
    }

    if (tile->tileIndexX >= tile->tileCountX) {
        tile->tileIndexX = tile->tileCountX - 1;
    }

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg3 == 0.0f && arg4 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg3 / 2;
        sp68 = arg4 / 2;
    }

    guMtxXFML(&D_80176860, arg0 - D_801768A0.f4.x, arg1 - D_801768A0.f4.y, arg2 - D_801768A0.f4.z, &sp54, &sp50, &sp4C);

    tile->quad[0].v.ob[0] = -sp6C + sp54;
    tile->quad[0].v.ob[1] = sp68 + sp50;
    tile->quad[0].v.ob[2] = sp4C;
    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[1].v.ob[0] = -sp6C + sp54;
    tile->quad[1].v.ob[1] = -sp68 * 1 + sp50;
    tile->quad[1].v.ob[2] = sp4C;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    tile->quad[2].v.ob[0] = sp6C * 1 + sp54;
    tile->quad[2].v.ob[1] = sp68 + sp50;
    tile->quad[2].v.ob[2] = sp4C;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[3].v.ob[0] = sp6C + sp54;
    tile->quad[3].v.ob[1] = -sp68 + sp50;
    tile->quad[3].v.ob[2] = sp4C;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    printReset();
}

void func_80058748(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, s32 argF) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;    

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[argF];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (argE >= 1.0 || argE == 0.0f) {
        tile->tileIndexX = argE;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * argE)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * argE)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    tile->quad[0].v.ob[0] = arg0;
    tile->quad[0].v.ob[1] = arg1;
    tile->quad[0].v.ob[2] = arg2;
    tile->quad[1].v.ob[0] = arg3;
    tile->quad[1].v.ob[1] = arg4;
    tile->quad[1].v.ob[2] = arg5;
    tile->quad[2].v.ob[0] = arg6;
    tile->quad[2].v.ob[1] = arg7;
    tile->quad[2].v.ob[2] = arg8;
    tile->quad[3].v.ob[0] = arg9;
    tile->quad[3].v.ob[1] = argA;
    tile->quad[3].v.ob[2] = argB;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    printReset();
}

void func_80058BE4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;    

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg6)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    sp3C = arg4 / 2;
    sp38 = arg5 / 2;

    sp54 = -sp3C;
    sp50 = 0.0f;
    sp4C = sp38;    
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[0].v.ob[0] = sp54 + arg1;
    tile->quad[0].v.ob[1] = sp50 + arg2;
    tile->quad[0].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C;
    sp50 = 0.0f;
    sp4C = -sp38 * 1;    
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[1].v.ob[0] = sp54 + arg1;
    tile->quad[1].v.ob[1] = sp50 + arg2;
    tile->quad[1].v.ob[2] = sp4C + arg3;

    sp54 = sp3C * 1;
    sp50 = 0.0f;
    sp4C = sp38;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[2].v.ob[0] = sp54 + arg1;
    tile->quad[2].v.ob[1] = sp50 + arg2;
    tile->quad[2].v.ob[2] = sp4C + arg3;

    sp54 = sp3C;
    sp50 = 0.0f;
    sp4C = -sp38;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[3].v.ob[0] = sp54 + arg1;
    tile->quad[3].v.ob[1] = sp50 + arg2;
    tile->quad[3].v.ob[2] = sp4C + arg3;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    printReset();
}

void func_80059254(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;    

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg6)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    sp3C = arg4 / 2;
    sp38 = arg5 / 2;

    sp54 = -sp3C;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[0].v.ob[0] = sp54 + arg1;
    tile->quad[0].v.ob[1] = sp50 + arg2;
    tile->quad[0].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C;
    sp50 = -sp38 * 1;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[1].v.ob[0] = sp54 + arg1;
    tile->quad[1].v.ob[1] = sp50 + arg2;
    tile->quad[1].v.ob[2] = sp4C + arg3;

    sp54 = sp3C * 1;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[2].v.ob[0] = sp54 + arg1;
    tile->quad[2].v.ob[1] = sp50 + arg2;
    tile->quad[2].v.ob[2] = sp4C + arg3;

    sp54 = sp3C;
    sp50 = -sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[3].v.ob[0] = sp54 + arg1;
    tile->quad[3].v.ob[1] = sp50 + arg2;
    tile->quad[3].v.ob[2] = sp4C + arg3;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    printReset();
}

void func_800598C4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;    

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg6)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    sp3C = arg4 / 2;
    sp38 = arg5 / 2;

    sp54 = sp3C;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[0].v.ob[0] = sp54 + arg1;
    tile->quad[0].v.ob[1] = sp50 + arg2;
    tile->quad[0].v.ob[2] = sp4C + arg3;

    sp54 = sp3C;
    sp50 = -sp38 * 1;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[1].v.ob[0] = sp54 + arg1;
    tile->quad[1].v.ob[1] = sp50 + arg2;
    tile->quad[1].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C * 1;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[2].v.ob[0] = sp54 + arg1;
    tile->quad[2].v.ob[1] = sp50 + arg2;
    tile->quad[2].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C;
    sp50 = -sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[3].v.ob[0] = sp54 + arg1;
    tile->quad[3].v.ob[1] = sp50 + arg2;
    tile->quad[3].v.ob[2] = sp4C + arg3;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    printReset();
}

void func_80059F28(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;

    if (D_800FDFC8[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_801A5D98[gSpriteFrameBuffer][D_800FDFC8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg8];
    D_800FDFC8[gSpriteFrameBuffer]++;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;

    if (arg7 >= 1.0 || arg7 == 0.0f) {
        tile->tileIndexX = arg7;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg7)] % tile->tileCountX;
    }
    tile->tileIndexY = D_800FDFE8;

    sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg5 == 0.0f && arg6 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg5 * arg4 / 2;
        sp68 = arg6 * arg4 / 2;
    }

    x1 = -160.0f + arg0 + sp6C;
    y1 = -arg1 + 120.0f - sp68;
    sp5C = -arg2 - D_800FDF9C;

    tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
    tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
    tile->quad[0].v.ob[2] = sp5C + D_800FE004;
    tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[0].v.cn[0] = gTextGradient[0];
    tile->quad[0].v.cn[1] = gTextGradient[1];
    tile->quad[0].v.cn[2] = gTextGradient[2];
    tile->quad[0].v.cn[3] = gTextGradient[3];

    tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
    tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
    tile->quad[1].v.ob[2] = sp5C + D_800FE008;
    tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[1].v.cn[0] = gTextGradient[4];
    tile->quad[1].v.cn[1] = gTextGradient[5];
    tile->quad[1].v.cn[2] = gTextGradient[6];
    tile->quad[1].v.cn[3] = gTextGradient[7];

    tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
    tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
    tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
    tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[2].v.cn[0] = gTextGradient[8];
    tile->quad[2].v.cn[1] = gTextGradient[9];
    tile->quad[2].v.cn[2] = gTextGradient[10];
    tile->quad[2].v.cn[3] = gTextGradient[11];

    tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
    tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
    tile->quad[3].v.ob[2] = sp5C + D_800FE010;
    tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.cn[0] = gTextGradient[12];
    tile->quad[3].v.cn[1] = gTextGradient[13];
    tile->quad[3].v.cn[2] = gTextGradient[14];
    tile->quad[3].v.cn[3] = gTextGradient[15];

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    printReset();
}

void func_8005A7CC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;
    s32 i, j;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;
    
    for (i = 0; i < gSpriteListings[arg7].tileCountX; i++) {
        for (j = 0; j < gSpriteListings[arg7].tileCountY; j++) {
            if (D_800FDFC8[gSpriteFrameBuffer] >= 200) {
                printReset();
                return;
            }

            tile = &D_801A5D98[gSpriteFrameBuffer][D_800FDFC8[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg7];
            D_800FDFC8[gSpriteFrameBuffer]++;

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
            sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

            if (arg5 == 0.0f && arg6 == 0.0f) {
                sp6C = tile->width * D_800FDFF0 / 2;
                sp68 = tile->height * D_800FDFF0 / 2;
            } else {
                sp6C = arg5 * arg4 / 2;
                sp68 = arg6 * arg4 / 2;
            }

            x1 = -160.0f + arg0 + i * tile->width + sp6C;
            y1 = 120.0f - arg1 - j * tile->height - sp68;
            sp5C = -D_800FDF9C - arg2;

            tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
            tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
            tile->quad[0].v.ob[2] = sp5C + D_800FE004;
            tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[0].v.cn[0] = gTextGradient[0];
            tile->quad[0].v.cn[1] = gTextGradient[1];
            tile->quad[0].v.cn[2] = gTextGradient[2];
            tile->quad[0].v.cn[3] = gTextGradient[3];

            tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
            tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
            tile->quad[1].v.ob[2] = sp5C + D_800FE008;
            tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[1].v.cn[0] = gTextGradient[4];
            tile->quad[1].v.cn[1] = gTextGradient[5];
            tile->quad[1].v.cn[2] = gTextGradient[6];
            tile->quad[1].v.cn[3] = gTextGradient[7];

            tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
            tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
            tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
            tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[2].v.cn[0] = gTextGradient[8];
            tile->quad[2].v.cn[1] = gTextGradient[9];
            tile->quad[2].v.cn[2] = gTextGradient[10];
            tile->quad[2].v.cn[3] = gTextGradient[11];

            tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
            tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
            tile->quad[3].v.ob[2] = sp5C + D_800FE010;
            tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.cn[0] = gTextGradient[12];
            tile->quad[3].v.cn[1] = gTextGradient[13];
            tile->quad[3].v.cn[2] = gTextGradient[14];
            tile->quad[3].v.cn[3] = gTextGradient[15];

            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
        }
    }
    printReset();
}

void func_8005AFA4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    printReset();
}

void printUISprite(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;

    if (D_800FDFB8[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_8018E698[gSpriteFrameBuffer][D_800FDFB8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg8];
    D_800FDFB8[gSpriteFrameBuffer]++;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;

    if (arg7 >= 1.0 || arg7 == 0.0f) {
        tile->tileIndexX = arg7;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg7)] % tile->tileCountX;
    }
    tile->tileIndexY = D_800FDFE8;

    sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg5 == 0.0f && arg6 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg5 * arg4 / 2;
        sp68 = arg6 * arg4 / 2;
    }

    x1 = -160.0f + arg0 + sp6C;
    y1 = -arg1 + 120.0f - sp68;
    sp5C = -arg2 - D_800FDF9C;

    tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
    tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
    tile->quad[0].v.ob[2] = sp5C + D_800FE004;
    tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[0].v.cn[0] = gTextGradient[0];
    tile->quad[0].v.cn[1] = gTextGradient[1];
    tile->quad[0].v.cn[2] = gTextGradient[2];
    tile->quad[0].v.cn[3] = gTextGradient[3];

    tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
    tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
    tile->quad[1].v.ob[2] = sp5C + D_800FE008;
    tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[1].v.cn[0] = gTextGradient[4];
    tile->quad[1].v.cn[1] = gTextGradient[5];
    tile->quad[1].v.cn[2] = gTextGradient[6];
    tile->quad[1].v.cn[3] = gTextGradient[7];

    tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
    tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
    tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
    tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[2].v.cn[0] = gTextGradient[8];
    tile->quad[2].v.cn[1] = gTextGradient[9];
    tile->quad[2].v.cn[2] = gTextGradient[10];
    tile->quad[2].v.cn[3] = gTextGradient[11];

    tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
    tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
    tile->quad[3].v.ob[2] = sp5C + D_800FE010;
    tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.cn[0] = gTextGradient[12];
    tile->quad[3].v.cn[1] = gTextGradient[13];
    tile->quad[3].v.cn[2] = gTextGradient[14];
    tile->quad[3].v.cn[3] = gTextGradient[15];

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    printReset();
}

void func_8005B874(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;
    s32 i, j;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;
    
    for (i = 0; i < gSpriteListings[arg7].tileCountX; i++) {
        for (j = 0; j < gSpriteListings[arg7].tileCountY; j++) {
            if (D_800FDFB8[gSpriteFrameBuffer] >= 200) {
                printReset();
                return;
            }

            tile = &D_8018E698[gSpriteFrameBuffer][D_800FDFB8[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg7];
            D_800FDFB8[gSpriteFrameBuffer]++;

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
            sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

            if (arg5 == 0.0f && arg6 == 0.0f) {
                sp6C = tile->width * D_800FDFF0 / 2;
                sp68 = tile->height * D_800FDFF0 / 2;
            } else {
                sp6C = arg5 * arg4 / 2;
                sp68 = arg6 * arg4 / 2;
            }

            x1 = -160.0f + arg0 + i * tile->width + sp6C;
            y1 = 120.0f - arg1 - j * tile->height - sp68;
            sp5C = -D_800FDF9C - arg2;

            tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
            tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
            tile->quad[0].v.ob[2] = sp5C + D_800FE004;
            tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[0].v.cn[0] = gTextGradient[0];
            tile->quad[0].v.cn[1] = gTextGradient[1];
            tile->quad[0].v.cn[2] = gTextGradient[2];
            tile->quad[0].v.cn[3] = gTextGradient[3];

            tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
            tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
            tile->quad[1].v.ob[2] = sp5C + D_800FE008;
            tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[1].v.cn[0] = gTextGradient[4];
            tile->quad[1].v.cn[1] = gTextGradient[5];
            tile->quad[1].v.cn[2] = gTextGradient[6];
            tile->quad[1].v.cn[3] = gTextGradient[7];

            tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
            tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
            tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
            tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[2].v.cn[0] = gTextGradient[8];
            tile->quad[2].v.cn[1] = gTextGradient[9];
            tile->quad[2].v.cn[2] = gTextGradient[10];
            tile->quad[2].v.cn[3] = gTextGradient[11];

            tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
            tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
            tile->quad[3].v.ob[2] = sp5C + D_800FE010;
            tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.cn[0] = gTextGradient[12];
            tile->quad[3].v.cn[1] = gTextGradient[13];
            tile->quad[3].v.cn[2] = gTextGradient[14];
            tile->quad[3].v.cn[3] = gTextGradient[15];

            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
        }
    }
    printReset();
}

#ifdef NON_MATCHING
void func_8005C04C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    SpriteListing* tile;

    if (D_800FDFC0[gSpriteFrameBuffer] >= 200) {
        printReset();
        return;
    }

    tile = &D_8019A218[gSpriteFrameBuffer][D_800FDFC0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg4];

    if (arg3 >= 1.0 || arg3 == 0.0f) {
        tile->tileIndexX = arg3;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg3)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg3)] / tile->tileCountX + D_800FDFE8;

    tile->quad[0].v.ob[0] = ((s16)arg0) * 4;
    tile->quad[0].v.ob[1] = ((s16)arg1) * 4;
    tile->quad[0].v.ob[2] = ((s16)arg2) * 4;

    tile->quad[1].v.ob[0] = (((s16)arg0) + tile->width) * 4;
    tile->quad[1].v.ob[1] = (((s16)arg1) + tile->height) * 4;
    tile->quad[1].v.ob[2] = ((s16)arg2) * 4;

    if (tile->quad[1].v.ob[0] < 0 || tile->quad[0].v.ob[0] > SCREEN_WIDTH * 4 ||
        tile->quad[1].v.ob[1] < 0 || tile->quad[0].v.ob[1] > SCREEN_HEIGHT * 4) {
        printReset();
        return;
    }

    tile->quad[0].v.tc[0] = ((s16)(tile->tileIndexX * tile->width)) << 5;
    tile->quad[0].v.tc[1] = ((s16)(tile->tileIndexY * tile->height)) << 5;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    D_800FDFC0[gSpriteFrameBuffer]++;
    printReset();
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C04C.s")
#endif

void func_8005C454(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    s32 i, j;
    SpriteListing* tile;
    
    for (i = 0; i < gSpriteListings[arg3].tileCountX; i++) {
        for (j = 0; j < gSpriteListings[arg3].tileCountY; j++) {
            if (D_800FDFC0[gSpriteFrameBuffer] >= 200) {
                printReset();
                return;
            }

            tile = &D_8019A218[gSpriteFrameBuffer][D_800FDFC0[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg3];

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            tile->quad[0].v.ob[0] = ((s16)arg0 + i * tile->width) * 4;
            tile->quad[0].v.ob[1] = ((s16)arg1 + j * tile->height) * 4;
            tile->quad[0].v.ob[2] = (s16)arg2 * 4;

            tile->quad[1].v.ob[0] = ((s16)arg0 + i * tile->width + tile->width) * 4;
            tile->quad[1].v.ob[1] = ((s16)arg1 + j * tile->height + tile->height) * 4;            
            tile->quad[1].v.ob[2] = (s16)arg2 * 4;

            if (tile->quad[1].v.ob[0] < 0 || tile->quad[0].v.ob[0] > SCREEN_WIDTH * 4 ||
                tile->quad[1].v.ob[1] < 0 || tile->quad[0].v.ob[1] > SCREEN_HEIGHT * 4) {
                continue;
            }
            
            tile->quad[0].v.tc[0] = ((s16)(tile->tileIndexX * tile->width)) << 5;
            tile->quad[0].v.tc[1] = ((s16)(tile->tileIndexY * tile->height)) << 5;
            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
            D_800FDFC0[gSpriteFrameBuffer]++;
        }
    }
    printReset();
}

void func_8005C6FC(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    s32 i, j;
    SpriteListing* tile;
    
    for (i = 0; i < gSpriteListings[arg3].tileCountX; i++) {
        for (j = gSpriteListings[arg3].tileCountY / 2; j < gSpriteListings[arg3].tileCountY; j++) {
            if (D_800FDFC0[gSpriteFrameBuffer] >= 200) {
                printReset();
                return;
            }

            tile = &D_8019A218[gSpriteFrameBuffer][D_800FDFC0[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg3];

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            tile->quad[0].v.ob[0] = ((s16)arg0 + i * tile->width) * 4;
            tile->quad[0].v.ob[1] = ((s16)arg1 + j * tile->height) * 4;
            tile->quad[0].v.ob[2] = (s16)arg2 * 4;

            tile->quad[1].v.ob[0] = ((s16)arg0 + i * tile->width + tile->width) * 4;
            tile->quad[1].v.ob[1] = ((s16)arg1 + j * tile->height + tile->height) * 4;            
            tile->quad[1].v.ob[2] = (s16)arg2 * 4;

            if (tile->quad[1].v.ob[0] < 0 || tile->quad[0].v.ob[0] > SCREEN_WIDTH * 4 ||
                tile->quad[1].v.ob[1] < 0 || tile->quad[0].v.ob[1] > SCREEN_HEIGHT * 4) {
                continue;
            }
            
            tile->quad[0].v.tc[0] = ((s16)(tile->tileIndexX * tile->width)) << 5;
            tile->quad[0].v.tc[1] = ((s16)(tile->tileIndexY * tile->height)) << 5;
            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
            D_800FDFC0[gSpriteFrameBuffer]++;
        }
    }
    printReset();
}

void func_8005C9B8(void) {
    s32 i;
    for (i = 0; i < ARRAY_COUNT(gSpriteListings); i++) {
        gSpriteListings[i].unk70 = 0;
        if (gSpriteListings[i].bitmapRom != 0) {
            gSpriteListings[i].bitmapP = (void*)gSpriteListings[i].bitmapRom;
        }
        if (gSpriteListings[i].paletteRom != 0) {
            gSpriteListings[i].palletteP = (void*)gSpriteListings[i].paletteRom;
        }        
    }
    LoadSprite(SPRITE_CROWN);
    LoadSprite(SPRITE_HEARTRED);
    LoadSprite(SPRITE_HEARTORANGE);
    LoadSprite(SPRITE_HEARTYELLOW);
    LoadSprite(0x1A);
}

void func_8005CA38(void) {
    D_800FDFA0 = 0;
}

Gfx* func_8005CA44(Gfx* gfxPos) {
    s32 i;
    SpriteListing* tile;
    s32 ulx, uly;

    func_800610B8();
    gSPDisplayList(gfxPos++, D_10012A0);
    gSPMatrix(gfxPos++, &D_800F69D0, G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    tile = D_80176F98[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFA8[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        gSPDisplayList(gfxPos++, tile->unk_00);

        switch (tile->type) {
            case COLORMODE_BLANK:
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);

    tile = D_80182B18[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFB0[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gSPDisplayList(gfxPos++, tile->unk_00);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;            
            case COLORMODE_RGBA16:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    if (gGameModeCurrent != 2 && gCurrentStage == 4 && gCurrentZone == 15) {
        gSPDisplayList(gfxPos++, D_303AD50);
        gSPDisplayList(gfxPos++, D_303F300);
        gSPDisplayList(gfxPos++, D_303F1A0);
    }
    if (gGameModeCurrent != 2 && gCurrentStage == 4 && gCurrentZone == 10) {
        gSPDisplayList(gfxPos++, D_303D418);
    }
    gSPDisplayList(gfxPos++, D_10012A0);
    gSPMatrix(gfxPos++, &D_800F69D0, G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    tile = D_8018E698[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFB8[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gSPDisplayList(gfxPos++, D_1001370);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    gSpriteFrameBuffer ^= 1;
    D_800FDFA8[gSpriteFrameBuffer] = 0;
    D_800FDFB0[gSpriteFrameBuffer] = 0;
    D_800FDFB8[gSpriteFrameBuffer] = 0;    
    printReset();
    return gfxPos;
}

Gfx* func_8005F408(Gfx* gfxPos) {
    s32 i;
    SpriteListing* tile;
    s32 ulx, uly;

    func_800610B8();
    gSPDisplayList(gfxPos++, D_10012A0);
    gSPMatrix(gfxPos++, &D_800F69D0, G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, D_800FE080);
    gDPSetRenderMode(gfxPos++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
    gDPSetCombineLERP(gfxPos++, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0);

    tile = D_8019A218[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFC0[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gDPSetCombineMode(gfxPos++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPScisTextureRectangle(gfxPos++, tile->quad[0].v.ob[0], tile->quad[0].v.ob[1], tile->quad[1].v.ob[0], tile->quad[1].v.ob[1],
                                0, tile->quad[0].v.tc[0], tile->quad[0].v.tc[1], 0x400, 0x400);
    }

    gSPDisplayList(gfxPos++, D_800FE0F0);

    tile = D_801A5D98[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFC8[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gSPDisplayList(gfxPos++, D_1001370);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->bitmapP, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gSPDisplayList(gfxPos++, D_1001300);
                gDPLoadTLUT_pal256(gfxPos++, tile->palletteP);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->bitmapP, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    D_800FDFC0[gSpriteFrameBuffer] = 0;
    D_800FDFC8[gSpriteFrameBuffer] = 0;
    printReset();
    return gfxPos;
}


void func_800610A8(void) {
    D_800FE000 = 1;
}

void func_800610B8(void) {
    D_800FE000 = 0;
    printReset();
    func_8007E5E8();
}

void func_800610E4(f32 arg0, f32 arg1) {
    D_800FDFE0 = (u32) arg0;
    D_800FDFE4 = (u32) arg1;
}

void func_800611F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_800FE004 = arg0;
    D_800FE008 = arg1;
    D_800FE00C = arg2;
    D_800FE010 = arg3;
}

void func_8006122C(f32 arg0, f32 arg1) {
    D_800FDFF4 = arg0;
    D_800FDFF8 = arg1;
}

void func_80061240(void) {
    D_800FDFF4 = 0.0f;
    D_800FDFF8 = 0.0f;
}

void func_80061258(f32 arg0) {
    D_800FDFFC = arg0;
}

void func_80061264(f32 arg0) {
    D_800FDFFC = arg0;
}

void setPrimColor(u8 r, u8 g, u8 b, u8 a) {
    gPrimRed = r;
    gPrimGreen = g;
    gPrimBlue = b;
    gPrimAlpha = a;
}

void setPrimColorCopy(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    gPrimRed = arg0;
    gPrimGreen = arg1;
    gPrimBlue = arg2;
    gPrimAlpha = arg3;
}

void func_800612D8(f32 arg0) {
    D_800FDFF0 = arg0;
}

void func_800612E4(f32 arg0) {
    D_800FDFF0 = arg0;
}

void func_800612F0(s32 arg0) {
    D_800FDFE8 = arg0;
}

void func_800612FC(void) {
    D_800FDFEC = 0.0f;
}

void SetTextGradient(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, u8 argC, u8 argD, u8 argE, u8 argF) {
    gTextGradient[0] = arg0;
    gTextGradient[1] = arg1;
    gTextGradient[2] = arg2;
    gTextGradient[3] = arg3;
    gTextGradient[4] = arg4;
    gTextGradient[5] = arg5;
    gTextGradient[6] = arg6;
    gTextGradient[7] = arg7;
    gTextGradient[8] = arg8;
    gTextGradient[9] = arg9;
    gTextGradient[0xA] = argA;
    gTextGradient[0xB] = argB;
    gTextGradient[0xC] = argC;
    gTextGradient[0xD] = argD;
    gTextGradient[0xE] = argE;
    gTextGradient[0xF] = argF;
}

void func_80061394(void) {
    D_800FDFC0[0] = 0;
    D_800FDFC0[1] = 0;
    D_800FDFC8[0] = 0;
    D_800FDFC8[1] = 0;
    printReset();
}

void Effect_ResetListEntry(Effect* effect) {
    effect->numParts = 0;
    effect->parts = NULL;
    effect->previous = NULL;
    effect->next = NULL;
    effect->lifeTime = 0.0f;
}

Effect* Effect_Alloc(s32 numParts, s32 dataSize, void* fpUpdate) {
    Effect* effect;
    
    effect = _malloc(sizeof(Effect));
    
    if (effect == NULL) {
        return NULL;
    }
    
    if (numParts != 0) {
        effect->parts = _malloc(numParts * sizeof(EffectPart));
        if (effect->parts == NULL) {
            Free(effect);
            return NULL;
        }        
    } else {
        effect->parts = 0;
    }
    
    if (dataSize != 0) {
        effect->data = _malloc(dataSize);
        if (effect->data == NULL) {
            Free(effect);
            Free(effect->parts);
            return NULL;
        }        
    } else {
        effect->data = NULL;
    }
    
    if (gEffectListHead->next != NULL) {
        gEffectListHead->next->previous = effect;
    }
    
    effect->numParts = numParts;
    effect->lifeTime = 0.0f;
    effect->fpUpdate = fpUpdate;

    effect->previous = gEffectListHead;
    effect->next = gEffectListHead->next;
    gEffectListHead->next = effect;
    gEffectListHead = effect;

    gEffectListCount++;
    return effect;
}

void Effect_Free(Effect* effect) {
    Effect* previuos = effect->previous;
    if (previuos != NULL) {
        previuos->next = effect->next;
    }
    if (effect->next != NULL) {
        effect->next->previous = effect->previous;
    }
    if (effect == gEffectListHead) {
        gEffectListHead = effect->previous;
    }
    Free(effect->parts);
    Free(effect->data);
    Free(effect);
    gEffectListCount -= 1;
}

void Effect_Init(void) {
    gEffectListHead = &gEffectList;
    Effect_ResetListEntry(gEffectListHead);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_UpdateAll.s")

void Effect_TypeA_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    s32 i;
    s32 numAlive;
    u8 alpha;
    f32 size;

    for (i = 0, numAlive = 0; i < effect->numParts; i++) {
        if (parts[i].lifeTime == 0.0f) {
            continue;
        }
        numAlive++;

        alpha = (1.0f - parts[i].lifeTime) * 255.0f;
        if (i == 0) {
            setPrimColor(alpha, alpha, alpha, alpha);
        } else {
            setPrimColor(alpha / 50, 0, 0, alpha);
        }

        size = effect->duration - parts[i].lifeTime * effect->duration;
        func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, size * 2, size * 2, parts[i].lifeTime, 0x4A);

        if (D_800F687C > 0) {
            if ((i % 2)) {
                setPrimColor(alpha, 0, 0, 127);
                func_8005747C(effect->pos.x + RANDOM(-30, 30), effect->pos.y + RANDOM(-60, 60), effect->pos.z + RANDOM(-30, 30), size / 2, size / 2, parts[i].lifeTime, 0x4A);
            }

            parts[i].pos.x += parts[i].vel.x;
            parts[i].pos.y += parts[i].vel.y;
            parts[i].pos.z += parts[i].vel.z;

            parts[i].lifeTime += 1.0f / 30.0f;
            if (parts[i].lifeTime >= 1.0f) {
                parts[i].lifeTime = 0.0f;
            }
        }
    }

    if (numAlive == 0) {
        Effect_Free(effect);
    }
}

void Effect_TypeA_Init(f32 posX, f32 posY, f32 posZ, s32 numParts, s32 size) {
    Effect* effect;
    EffectPart* parts;
    s32 i;
    
    effect = Effect_Alloc(numParts, 0, &Effect_TypeA_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = size * 3;
    effect->unk8 = PLAYSFXAT(0xC3, effect->pos, 0, 0x20);

    for (parts = effect->parts, i = 0; i < numParts; i++) {
        parts[i].pos.x = posX + RANDOM(-size, size);
        parts[i].pos.y = posY + RANDOM(-size, size);
        parts[i].pos.z = posZ + RANDOM(-size, size);
        parts[i].vel.x = RANDOM(-size, size) / 10.0f;
        parts[i].vel.y = RANDOM(size, 2 * size) / 10.0f;
        parts[i].vel.z = RANDOM(-size, size) / 10.0f;
        parts[i].lifeTime = 1.0f / RANDOM(27, 60);
    }
}

void Effect_TypeA_Init2(f32 posX, f32 posY, f32 posZ, s32 numParts, s32 size) {
    Effect* effect;
    EffectPart* parts;
    s32 i;
    
    effect = Effect_Alloc(numParts, 0, &Effect_TypeA_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = size * 3;
    effect->unk8 = PLAYSFXAT(0xC3, effect->pos, 10, 0x20);

    for (parts = effect->parts, i = 0; i < numParts; i++) {
        parts[i].pos.x = posX + RANDOM(-size, size);
        parts[i].pos.y = posY + RANDOM(-size, size);
        parts[i].pos.z = posZ + RANDOM(-size, size);
        parts[i].vel.x = RANDOM(-size, size) / 10.0f;
        parts[i].vel.y = RANDOM(size, 2 * size) / 10.0f;
        parts[i].vel.z = RANDOM(-size, size) / 10.0f;
        parts[i].lifeTime = 1.0f / RANDOM(27, 60);
    }
}

void func_8006202C(void) {
    D_800FE160 = 0;
}

s32 func_80062038(void) {
    if (!gContMain->buttons0 && gContMain->stickX > -5 && gContMain->stickX < 5 && gContMain->stickY > -5 && gContMain->stickY < 5) {
        D_800FE160 = 0;
        return D_800FE160;
    } else if (D_800F687C > 0) {
        D_800FE160++;
        return D_800FE160;
    } else {
        D_800FE160 = 0;
        return D_800FE160;
    }
}

void Effect_TypeB_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    s32 i;
    s32 numAlive;

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime > 1.0f) { } // required for matching

        for (i = 0; i < effect->numParts; i++) {
            if (parts[i].lifeTime == 0.0f && effect->lifeTime < 1.0f) {
                parts[i].pos.x = effect->pos.x + sinf(effect->lifeTime * 6.28312 * 6.0) * effect->lifeTime * 150.0f;
                parts[i].pos.y = effect->pos.y;
                parts[i].pos.z = effect->pos.z - cosf(effect->lifeTime * 6.28312 * 6.0) * effect->lifeTime * 150.0f;

                parts[i].sizeX = 1;
                parts[i].sizeY = 1;

                parts[i].vel.x = RANDOM(-5, 5);
                parts[i].vel.y = RANDOM(-5, 5);
                parts[i].vel.z = RANDOM(-5, 5);

                parts[i].lifeTime = 1.0f / effect->numParts * 2;
                break;
            }
        }
    }

    for (i = 0, numAlive = 0; i < effect->numParts; i++) {
        if (parts[i].lifeTime > 0.0f) {
            numAlive++;

            setPrimColor(255, 255, 255, 200);
            func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, parts[i].sizeX * 1.5, parts[i].sizeY * 1.5, parts[i].lifeTime, 0x48);

            setPrimColor(200, 255, 0, 160);
            func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, parts[i].sizeX, parts[i].sizeY, parts[i].lifeTime, 0x49);

            if (D_800F687C > 0) {
                parts[i].vel.y -= 1.02;

                parts[i].sizeX = RANDOM(10, 50);
                parts[i].sizeY = RANDOM(10, 50);

                parts[i].pos.x += parts[i].vel.x;
                parts[i].pos.y += parts[i].vel.y;
                parts[i].pos.z += parts[i].vel.z;

                parts[i].lifeTime += 1.0f / effect->numParts * 4.0f;
                if (parts[i].lifeTime >= 1.0f) {
                    parts[i].lifeTime = 0.0f;
                }
            }
        }
    }

    if (numAlive == 0) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeB_Init(f32 posX, f32 posY, f32 posZ, s32 numParts) {
    Effect* effect;
    EffectPart* parts;
    s32 i;
    
    effect = Effect_Alloc(numParts, 0, &Effect_TypeB_Update);
    if (effect == NULL) {
        return effect;
    }
    
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = 30.0f;
    effect->lifeTime = 0.0f;
    effect->numParts = numParts; // unnecessary assignment

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].sizeX = 1.0f;
        parts[i].sizeY = 1.0f;

        parts[i].pos.x = 0.0f;
        parts[i].pos.y = 0.0f;
        parts[i].pos.z = 0.0f;

        parts[i].lifeTime = 0.0f;

        parts[i].vel.x = 0.0f;
        parts[i].vel.y = -10.0f;
        parts[i].vel.z = 0.0f;        
    }

    return effect;
}

void func_8006266C(Effect* effect) {
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;
 
    data->mode = 1;
    data->idleTime = 0.0f;
}

void func_80062684(Effect* effect) {
    EffectPart* parts = effect->parts;
    s32 i;

    for (i = 0; i < effect->numParts; i++) {
        switch(parts[i].unk_25) {
            case 0:
                if (((s32)(parts[i].lifeTime * 50.0f) % 2) || D_800F687C == 0) {
                    printUISprite(effect->pos.x + parts[i].pos.x, effect->pos.y + parts[i].pos.y, effect->pos.z + parts[i].pos.z, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0xF);
                }
                if (D_800F687C > 0) {
                    parts[i].lifeTime += 1.0f / 30.0f;
                }
                if (parts[i].lifeTime >= 1.0f) {
                    parts[i].lifeTime = 0.0f;
                    parts[i].unk_25 = 2;
                }
                break;
            case 1:
                if ((s32)(parts[i].lifeTime * 50.0f) % 2) {
                    printUISprite(effect->pos.x + parts[i].pos.x, effect->pos.y + parts[i].pos.y, effect->pos.z + parts[i].pos.z, (parts[i].lifeTime - 1.0f) * 6.28312, 0.5f, 0.0f, 0.0f, 0.0f, 0xF);
                }
                if (D_800F687C > 0) {
                    parts[i].lifeTime += 1.0f / 30.0f;
                }
                if (parts[i].lifeTime >= 1.0f) {
                    parts[i].lifeTime = 0.0f;
                    parts[i].unk_25 = 3;
                }
                break;
            case 2:
                printUISprite(effect->pos.x + parts[i].pos.x, effect->pos.y + parts[i].pos.y, effect->pos.z + parts[i].pos.z, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0xF);
                parts[i].lifeTime = 0.0f;
                break;
            case 3:
                parts[i].lifeTime = 0.0f;
                break;
        }
    }
}

void func_800629C4(void) {
    D_800FE164 = TRUE;
}

void func_800629D4(void) {
    D_800FE164 = FALSE;
}

void Effect_HealthBar_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;
    s32 i;

    if (D_800FE164 == TRUE || *data->curHPPtr <= 0) {
        return;
    }
    if (D_80176F58[0] == 1 && D_80176F58[1] == 1) {
        return;
    }

    if (*data->curHPPtr < 10) {
        data->idleTime = 0.0f;
        data->mode = 1;
    }
    
    for (i = data->lastHP; i < *data->curHPPtr; i++) {
        parts[i].unk_25 = 0;
        data->idleTime = 0.0f;
        data->mode = 1;
    }

    for (i = data->lastHP; i > *data->curHPPtr; i--) {
        parts[i - 1].unk_25 = 1;
        data->idleTime = 0.0f;
        data->mode = 1;
    }

    if (D_800F687C == 0) {
        data->idleTime = 0.0f;
        if (D_800F06E4 < 0) {
            data->mode = 1;
        } else {
            data->mode = 0;
        }
    }

    data->lastHP = *data->curHPPtr;

    switch (data->mode) {
        case 0:
            data->idleTime += 1.0f / 360.0f;
            if (func_80062038() > 0) {
                data->idleTime = 0.0f;
            }
            data->movePhase = 0.0f;
            if (data->idleTime >= 1.0f) {
                data->idleTime = 0.0f;
                data->mode = 1;
            }
            break;
        case 1:
            func_8006122C(0.0f, sinf(data->movePhase * 3.14156 / 2) * 50.0f - 50.0f);
            func_80062684(effect);
            func_80061240();
            data->movePhase += 1.0f / 8.0f;
            if (data->movePhase >= 1.0f) {
                data->movePhase = 1.0f;
                data->mode = 2;
            }
            break;
        case 2:
            func_80062684(effect);
            data->movePhase = 1.0f;
            if (func_80062038() > 30) {
                data->mode = 3;
            }
            break;
        case 3:
            func_8006122C(0.0f, sinf(data->movePhase * 3.14156 / 2) * 50.0f - 50.0f);
            func_80062684(effect);
            func_80061240();
            data->movePhase -= 1.0f / 15.0f;
            if (data->movePhase <= 0) {
                data->movePhase = 0.0f;
                data->mode = 0;
            }
            break;
    }
}

Effect* Effect_HealthBar_Init(s32 posX, s32 posY, s32* arg2, s32* arg3, u32 arg4, s32 arg5) {
    Effect* effect;
    EffectPart* parts;
    Effect_HealthBar_Data* data;
    s32 i;
    
    effect = Effect_Alloc(*arg2, sizeof(Effect_HealthBar_Data), &Effect_HealthBar_Update);
    if (effect == NULL) {
        return effect;
    }

    func_800629D4();

    data = (Effect_HealthBar_Data*)effect->data;
    data->mode = 0;
    data->curHPPtr = arg2;    
    data->movePhase = 0.0f;
    data->lastHP = *arg2;
    data->idleTime = 0.0f;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = 0.0f;
    effect->lifeTime = 0.0f;
    effect->duration = 15.0f;

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].unk_25 = 0;
        parts[i].lifeTime = 0;

        parts[i].pos.x = i * 14;
        parts[i].pos.y = 0.0f;
        parts[i].pos.z = 0.0f;      
    }

    return effect;
}

void func_80062E18(Effect* effect) {
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;

    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    printNumber(264.0f, 16.0f, 0.0f, 1.0f, (f32) *data->curHPPtr, 2, 0);

    printUISprite(232.0f, 16.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, 18);

    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    PrintText(254.0f, 20.0f, 0.0f, 1.0f, 8.0f, 8.0f, "Ｘ", 1);

    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    printNumber(264.0f, 36.0f, 0.0f, 1.0f, (f32) gTotalCarrots, 2, 0);

    printUISprite(232.0f, 36.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, 26);

    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    PrintText(254.0f, 40.0f, 0.0f, 1.0f, 8.0f, 8.0f, "Ｘ", 1);
}

#ifdef NON_MATCHING
void func_80063160(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;
    s32 i;

    if (D_800FE164 == TRUE || gCurrentStage == 8) {
        return;
    }
    if (gCurrentStage != 0 &&
        gCurrentStage != 1 &&
        gCurrentStage != 2 &&
        gCurrentStage != 3 &&
        gCurrentStage != 4 &&
        gCurrentStage != 5 &&
        gCurrentStage != 9 &&
        gCurrentStage != 10 &&
        gCurrentStage != 11 &&
        gCurrentStage != 12 &&
        gCurrentStage != 13 &&
        gCurrentStage != 14 &&
        D_80108790 != 0) {
        return;
        }

    if (D_80176F58[0] == 1 && D_80176F58[1] == 1) {
        return;
    }
    
    if (D_800F687C == 0) {
        data->idleTime = 0.0f;
        if (D_800F06E4 < 0) {
            data->mode = 1;
        } else {
            data->mode = 0;
        }
    }

    for (i = data->lastHP; i < *data->curHPPtr; i++) {
        data->idleTime = 0.0f;
        data->mode = 1;
    }

    if (gTotalCarrots > D_800FE188) {
        data->idleTime = 0.0f;
        data->mode = 1;
    }
    D_800FE188 = gTotalCarrots;

    data->lastHP = *data->curHPPtr;
    switch (data->mode) {
        case 0:
            data->idleTime += 1.0f / 180.0f;
            if (func_80062038() > 0) {
                data->idleTime = 0.0f;
            }
            data->movePhase = 0.0f;
            if (data->idleTime >= 1.0f) {
                data->idleTime = 0.0f;
                data->mode = 1;
            }
            break;
        case 1:
            func_8006122C(0.0f, sinf(data->movePhase * 3.14156 / 2) * 50.0f - 50.0f);
            func_80062E18(effect);
            func_80061240();
            data->movePhase += 1.0f / 8.0f;
            if (data->movePhase >= 1.0f) {
                func_8006202C();
                data->movePhase = 1.0f;
                data->mode = 2;
            }
            break;
        case 2:
            func_80062E18(effect);
            data->movePhase = 1.0f;
            if (func_80062038() > 30) {
                data->mode = 3;
            }
            break;
        case 3:
            func_8006122C(0.0f, sinf(data->movePhase * 3.14156 / 2) * 50.0f - 50.0f);
            func_80062E18(effect);
            func_80061240();
            data->movePhase -= 1.0f / 15.0f;
            if (data->movePhase <= 0) {
                data->movePhase = 0.0f;
                data->mode = 0;
            }
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80063160.s")
void func_80063160(Effect* effect, Gfx** pGfxPos);
#endif

Effect* func_800634D4(s32 posX, s32 posY, s32* arg2, s32* arg3, u32 arg4, s32 arg5) {
    Effect* effect;
    EffectPart* parts;
    Effect_HealthBar_Data* data;
    s32 i;
    
    effect = Effect_Alloc(*arg2, sizeof(Effect_HealthBar_Data), &func_80063160);
    if (effect == NULL) {
        return effect;
    }

    func_800629D4();

    data = (Effect_HealthBar_Data*)effect->data;
    data->mode = 0;
    data->curHPPtr = arg2;    
    data->movePhase = 0.0f;
    data->lastHP = *arg2;
    data->idleTime = 0.0f;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = 0.0f;
    effect->lifeTime = 0.0f;
    effect->duration = 15.0f;

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].unk_25 = 0;
        parts[i].lifeTime = 0;

        parts[i].pos.x = i * 14;
        parts[i].pos.y = 0.0f;
        parts[i].pos.z = 0.0f;      
    }

    return effect;
}

void Effect_TypeC_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeC_Data* data = (Effect_TypeC_Data*)effect->data;
    EffectPart* parts = effect->parts;
    s32 i;

    for (i = 0; i < effect->numParts; i++) {
        if (parts[i].lifeTime < 1.0f) {
            setPrimColor(data->color.r, data->color.g, data->color.b, data->color.a - parts[i].lifeTime * (data->color.a - 1));
            func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, data->sizeX / 3.0f, data->sizeY / 3.0f, effect->lifeTime, data->spriteID);

            if (D_800F687C > 0) {
                parts[i].vel.y += 1;

                parts[i].pos.x += parts[i].vel.x;
                parts[i].pos.y += parts[i].vel.y;
                parts[i].pos.z += parts[i].vel.z;

                parts[i].lifeTime += 100.0f / (effect->duration * RANDOM(60, 90));
            }
        }
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
    }
    if (effect->lifeTime >= 1.0f) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeC_Init(f32 posX, f32 posY, f32 posZ, f32 targetX, f32 targetY, f32 targetZ, u8 colorR, u8 colorG, u8 colorB, u8 colorA, s32 numParts, s32 spriteID) {
    Effect* effect;
    EffectPart* parts;
    Effect_TypeC_Data* data;
    s32 i;
    f32 dist;
    
    dist = NORM_3(posX - targetX, posY - targetY, posZ - targetZ);
    effect = Effect_Alloc(numParts, sizeof(Effect_TypeC_Data), &Effect_TypeC_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeC_Data*)effect->data;
    data->color.r = colorR;
    data->color.g = colorG;
    data->color.b = colorB;
    data->color.a = colorA;
    data->spriteID = spriteID;
    data->sizeX = dist;
    data->sizeY = dist;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = 15.0f;
    effect->lifeTime = 0.0f;

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].lifeTime = 0;

        parts[i].pos.x = posX;
        parts[i].pos.y = posY;
        parts[i].pos.z = posZ;

        parts[i].vel.x = (targetX - parts[i].pos.x + RANDOM(-dist / 2, dist / 2)) / effect->duration;
        parts[i].vel.y = (targetY - parts[i].pos.y + RANDOM(-dist / 2, dist / 2)) / effect->duration;
        parts[i].vel.z = (targetZ - parts[i].pos.z + RANDOM(-dist / 2, dist / 2)) / effect->duration;
    }

    return effect;
}

#ifdef NON_MATCHING
// float regalloc
void Effect_TypeD_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeD_Data* data = (Effect_TypeD_Data*)effect->data;
    EffectPart* parts = effect->parts;
    s32 i;

    switch (data->unk_04) {
        case 2:
            for (i = 0; i < effect->numParts; i++) {
                if (parts[i].lifeTime < 1.0f) {
                    setPrimColor(data->color.r, data->color.g, data->color.b, data->color.a - parts[i].lifeTime * (data->color.a - 1));
                    func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, data->sizeX / 3, data->sizeY / 3, effect->lifeTime, 0x4A);

                    if (D_800F687C > 0) {
                        parts[i].vel.y += 1;

                        parts[i].pos.x += parts[i].vel.x;
                        parts[i].pos.y += parts[i].vel.y;
                        parts[i].pos.z += parts[i].vel.z;

                        parts[i].lifeTime += 100.0f / (effect->duration * RANDOM(60, 90));
                    }
                }
            }
            break;
        case 0:
            for (i = 0; i < effect->numParts; i++) {
                if (parts[i].lifeTime < 1.0f) {
                    setPrimColor(parts[i].sizeX * data->color.r, parts[i].sizeY * data->color.g, (1.0f - parts[i].lifeTime) * data->color.b, (1.0f - parts[i].lifeTime) * data->color.a);
                    func_800612D8(sinf(parts[i].lifeTime * 6.28312 * 6) * 3.0f);
                    func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, RANDOM(10, 20), RANDOM(10, 20), parts[i].lifeTime, 0);
                }

                if (D_800F687C > 0) {
                    parts[i].pos.x += parts[i].vel.x;
                    parts[i].pos.y += parts[i].vel.y;
                    parts[i].pos.z += parts[i].vel.z;

                    parts[i].vel.y -= 1;

                    parts[i].lifeTime += 1.0f / effect->duration;
                }
            }
            break;
        case 1:
        default:
            if (effect->lifeTime != 0.0f && effect->lifeTime > 0.0f) {
                setPrimColor(255, 255, 255, 64 - effect->lifeTime * 64);
                printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, 0);
            }

            for (i = 0; i < effect->numParts; i++) {
                if (parts[i].lifeTime < 1.0f) {
                    setPrimColor((1.0f - parts[i].lifeTime) * data->color.r, (1.0f - parts[i].lifeTime) * data->color.g, (1.0f - parts[i].lifeTime) * data->color.b, (1.0f - parts[i].lifeTime) * data->color.a);
                    func_800612D8(sinf(parts[i].lifeTime * 6.28312 * 6) * 3.0f);
                    func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, 0.0f, 0.0f, parts[i].lifeTime, 0x4B);
                }

                if (D_800F687C > 0) {
                    parts[i].pos.x += parts[i].vel.x;
                    parts[i].pos.y += parts[i].vel.y;
                    parts[i].pos.z += parts[i].vel.z;

                    parts[i].lifeTime += 1.0f / effect->duration;
                }
            }
            break;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }    
}
#else
void Effect_TypeD_Update(Effect* effect, Gfx** pGfxPos);
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_TypeD_Update.s")
#endif

Effect* Effect_TypeD_Init(f32 posX, f32 posY, f32 posZ, f32 targetX, f32 targetY, f32 targetZ, f32 arg6, u8 colorR, u8 colorG, u8 colorB, u8 colorA, s32 numParts, s32 argC) {
    Effect* effect;
    EffectPart* parts;
    Effect_TypeD_Data* data;
    s32 i;
    f32 dist;
    
    if (SQ(posX - targetX) + SQ(posY - targetY) + SQ(posZ - targetZ) > 0.0f) {
        dist = NORM_3(posX - targetX, posY - targetY, posZ - targetZ);
    } else {
        dist = 10.0f;
    }
    effect = Effect_Alloc(numParts, sizeof(Effect_TypeD_Data), &Effect_TypeD_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeD_Data*)effect->data;
    data->color.r = colorR;
    data->color.g = colorG;
    data->color.b = colorB;
    data->color.a = colorA;
    data->unk_04 = argC;
    data->sizeX = dist;
    data->sizeY = dist;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = 30.0f;
    effect->lifeTime = 0.0f;

    PLAYSFXAT(0xE0, effect->pos, 0, 0x20);

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].lifeTime = 0;

        if (!argC) {
            parts[i].pos.x = posX + RANDOM(-100, 100);
            parts[i].pos.y = posY + RANDOM(-100, 100);
            parts[i].pos.z = posZ + RANDOM(-100, 100);

            parts[i].sizeX = RANDOM(0, 255) / 255.0;
            parts[i].sizeY = RANDOM(0, 255) / 255.0;
        } else if (TRUE) { // required to match
            parts[i].pos.x = posX;
            parts[i].pos.y = posY;
            parts[i].pos.z = posZ;
        }

        parts[i].vel.x = (targetX - parts[i].pos.x + RANDOM(-dist * arg6 / 2, dist * arg6 / 2)) / effect->duration;
        parts[i].vel.y = (targetY - parts[i].pos.y + RANDOM(-dist * arg6 / 2, dist * arg6 / 2)) / effect->duration;
        parts[i].vel.z = (targetZ - parts[i].pos.z + RANDOM(-dist * arg6 / 2, dist * arg6 / 2)) / effect->duration;
    }

    return effect;
}

Effect* Effect_TypeD_Create(f32 posX, f32 posY, f32 posZ) {
    if (Timing_BusyTime > 0.85) {
        return NULL;
    }
    if (gGameModeCurrent == GAME_MODE_BATTLE_MENU) {
        return Effect_TypeD_Init(posX, posY, posZ, posX + 10.0f, posY + 400.0f, posZ + 10.0f, 2.0f, 255, 255, 0, 255, 2, 1);
    } else {
        return Effect_TypeD_Init(posX, posY, posZ, posX + 10.0f, posY + 400.0f, posZ + 10.0f, 2.0f, 255, 255, 0, 255, 10, 1);
    }
}

void Effect_TypeE_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeE_Data* data = (Effect_TypeE_Data*)effect->data;
    f32 alpha = 255.0f - effect->lifeTime * 254.0f;
    EffectPart* parts = effect->parts;
    
    if (alpha > 254.0) {
        alpha = 254.0f;
    }
    if (alpha < 0.0) {
        alpha = 0.0f;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }

    setPrimColor(data->colorR, data->colorG, data->colorB, alpha);
    if (data->dir.x == 0.0f && data->dir.y == 0.0f && data->dir.z == 0.0f) {
        func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, data->sizeX, data->sizeY, effect->lifeTime, effect->spriteID);
    } else {
        Mtx mtx;
        guAlign(&mtx, 0.0f, data->dir.x, data->dir.y, data->dir.z);
        func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, data->sizeX, data->sizeY, effect->lifeTime, effect->spriteID);
    }
}

Effect* Effect_TypeE_Init(f32 posX, f32 posY, f32 posZ, f32 dirX, f32 dirY, f32 dirZ, f32 sizeX, f32 sizeY, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeE_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeE_Data), &Effect_TypeE_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeE_Data*)effect->data;
    data->sizeX = sizeX;
    data->sizeY = sizeY;
    data->dir.x = dirX;
    data->dir.y = dirY;
    data->dir.z = dirZ;
    data->colorR = D_800FE18C;
    data->colorG = D_800FE190;
    data->colorB = D_800FE194;
    data->colorA = D_800FE198;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = 0.0f;
    effect->vel.y = 0.0f;
    effect->vel.z = 0.0f;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeF_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeF_Data* data = (Effect_TypeF_Data*)effect->data;
    f32 alpha = 255.0f * sinf(effect->lifeTime * 1.57078);
    EffectPart* parts = effect->parts;
    
    if (alpha > 254.0) {
        alpha = 254.0f;
    }
    if (alpha < 0.0) {
        alpha = 0.0f;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }

    setPrimColor(data->colorR, data->colorG, data->colorB, alpha);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, data->sizeX, data->sizeY, effect->lifeTime, effect->spriteID);
}

Effect* Effect_TypeF_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 sizeX, f32 sizeY, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeF_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeF_Data), &Effect_TypeF_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeF_Data*)effect->data;
    data->sizeX = sizeX;
    data->sizeY = sizeY;
    data->colorR = D_800FE18C;
    data->colorG = D_800FE190;
    data->colorB = D_800FE194;
    data->colorA = D_800FE198;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeG_Update(Effect* effect, Gfx** pGfxPos) {
    Gfx* gfxPos = *pGfxPos;
    Effect_TypeG_Data* data = (Effect_TypeG_Data*)effect->data;
    Mtx mtxTranslate;

    guScale(&data->mtx, data->scale.x, effect->lifeTime * data->scale.y, data->scale.z);
    guTranslate(&mtxTranslate, effect->pos.x, effect->pos.y + 10.0f, effect->pos.z);
    guMtxCatL(&data->mtx, &mtxTranslate, &data->mtx);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);


    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }

    *pGfxPos = gfxPos;
}

Effect* Effect_TypeG_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 scaleX, f32 scaleY, f32 scaleZ, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeG_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeG_Data), &Effect_TypeG_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeG_Data*)effect->data;
    data->scale.x = scaleX;
    data->scale.y = scaleY;
    data->scale.z = scaleZ;
    data->dlist = D_1013F78;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeH_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeH_Data* data = (Effect_TypeH_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;
    Mtx mtxRotate;

    if (effect->unk5) {
        Effect_Free(effect);
        return;
    }

    guScale(&data->mtx[data->mtxIndex], effect->lifeTime * data->scale.x, effect->lifeTime * data->scale.y, effect->lifeTime * data->scale.z);
    guRotate(&mtxRotate, data->angle, 0.0f, 1.0f, 0.0f);
    guMtxCatL(&data->mtx[data->mtxIndex], &mtxRotate, &data->mtx[data->mtxIndex]);
    guTranslate(&mtxRotate, effect->pos.x, effect->pos.y + sinf(effect->lifeTime * 3.14156) * 30.0f * data->scale.y, effect->pos.z);
    guMtxCatL(&data->mtx[data->mtxIndex], &mtxRotate, &data->mtx[data->mtxIndex]);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx[data->mtxIndex]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);


    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            effect->unk5 = TRUE;
        }
    }

    *pGfxPos = gfxPos;
    data->mtxIndex ^= 1;
}

Effect* Effect_TypeH_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 scaleX, f32 scaleY, f32 scaleZ, f32 angle, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeH_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeH_Data), &Effect_TypeH_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeH_Data*)effect->data;
    data->scale.x = scaleX;
    data->scale.y = scaleY;
    data->scale.z = scaleZ;
    data->dlist = D_10149D0;
    data->angle = angle;
    data->mtxIndex = 0;

    effect->unk5 = FALSE;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeI_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeI_Data* data = (Effect_TypeI_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;

    if (D_800F687C > 0) {
        if (effect->lifeTime == 0.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 30.0f, 10, 0);
        } else if (effect->lifeTime == 5.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 60.0f, 11, 0);
        } else if (effect->lifeTime == 10.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        } else if (effect->lifeTime == 15.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        } else if (effect->lifeTime == 20.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        } else if (effect->lifeTime == 25.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        }

        effect->lifeTime += 1.0f;
        if (effect->lifeTime >= 90.0f) {
            Effect_Free(effect);
        }
    }

    *pGfxPos = gfxPos;
}

Effect* Effect_TypeI_Init(f32* ptrPosX, f32* ptrPosY, f32* ptrPosZ, f32 scale) {
    Effect* effect;
    Effect_TypeI_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeI_Data), &Effect_TypeI_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeI_Data*)effect->data;
    data->ptrPosX = ptrPosX;
    data->ptrPosY = ptrPosY;
    data->ptrPosZ = ptrPosZ;
    data->scale = scale;

    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeJ_Update(Effect* effect, Gfx** pGfxPos) {
    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            effect->lifeTime = 1.0f;
            Effect_Free(effect);
        }
    }

    func_8007B518((effect->lifeTime * 0.5 * 320.0 + 0.5) / 240.0);
}

Effect* Effect_TypeJ_Init(f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeJ_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->lifeTime = 0.0f;
    effect->duration = duration;
    return effect;
}

void Effect_TypeK_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;

    func_8007B4CC(-parts->pos.x, parts->pos.y, 0.0f, -parts->pos.x, parts->pos.y, 0.0f);
    func_8006122C(parts->pos.x, parts->pos.y);

    setPrimColor(0, 0, 0, 255);
    printUISprite(-160.0f, -120.0f, 0.0f, 0.0f, 1, 640.0f, 120.0f, 0.0f, 0);
    setPrimColor(0, 0, 0, 255);
    printUISprite(-160.0f, 240.0f, 0.0f, 0.0f, 1, 640.0f, 120.0f, 0.0f, 0);
    setPrimColor(0, 0, 0, 255);
    printUISprite(-160.0f, 0.0f, 0.0f, 0.0f, 1, 160.0f, 240.0f, 0.0f, 0);
    setPrimColor(0, 0, 0, 255);
    printUISprite(320.0f, 0.0f, 0.0f, 0.0f, 1, 160.0f, 240.0f, 0.0f, 0);
    
    func_80061240();

    effect->lifeTime += 1.0f / effect->duration;
    parts->lifeTime += 15.0f / effect->duration;
    if (parts->lifeTime >= 1.0f) {
        parts->lifeTime = 1;
    } else {
        parts->pos.x += parts->vel.x;
        parts->pos.y += parts->vel.y;
    }

    if (effect->lifeTime >= 1.0f) {
        Effect_TypeJ_Init(10.0f);
        Effect_Free(effect);
    }
}

Effect* Effect_TypeK_Init(f32 duration, f32 arg1, f32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(1, 0, &Effect_TypeK_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->lifeTime = 0.0f;
    effect->duration = duration;

    effect->parts->lifeTime = 0.0f;
    effect->parts->pos.x = 0.0f;
    effect->parts->pos.y = 0.0f;
    effect->parts->vel.x = 15.0f * arg1 / duration;
    effect->parts->vel.y = 15.0f * arg2 / duration;
    return effect;
}

void Effect_TypeL_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;

    func_8007B4CC(-parts->pos.x, parts->pos.y, 0.0f, -parts->pos.x, parts->pos.y, 0.0f);
    func_800610B8();
    func_8006122C(parts->pos.x, parts->pos.y);

    setPrimColor(0, 0, 0, 255);
    printUISprite(-320.0f, 0.0f, 0.0f, 0.0f, 1, 322.0f, 480.0f, 0.0f, 0);
    setPrimColor(0, 0, 0, 255);
    printUISprite(0.0f, 240.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, 0);
    
    func_80061240();

    effect->lifeTime += 1.0f / effect->duration;
    parts->pos.x += parts->vel.x * 2;
    parts->pos.y += parts->vel.y * 2;

    if (effect->lifeTime >= 1.0f) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeL_Init(f32 duration, f32 arg1, f32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(1, 0, &Effect_TypeL_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->lifeTime = 0.0f;
    effect->duration = duration;

    effect->parts->lifeTime = 0.0f;
    effect->parts->pos.x = 0.0f;
    effect->parts->pos.y = 0.0f;
    effect->parts->vel.x = arg1 / duration;
    effect->parts->vel.y = arg2 / duration;
    return effect;
}

void Effect_TypeM_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeM_Data* data = (Effect_TypeM_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;

    if (D_800F687C > 0) {
        if (*data->finish) {
            Effect_Free(effect);
            return;
        }
    }

    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);

    *pGfxPos = gfxPos;
}

Effect* Effect_TypeM_Init(f32 posX, f32 posY, f32 posZ, s32* finishPtr, Gfx* dlist) {
    Effect_TypeM_Data* data;
    Effect* effect;    

    effect = Effect_Alloc(0, sizeof(Effect_TypeM_Data), &Effect_TypeM_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeM_Data*)effect->data;
    guTranslate(&data->mtx, posX, posY, posZ);
    data->dlist = dlist;
    data->finish = finishPtr;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;

    return effect;
}

Effect* Effect_TypeM_Init2(f32 posX, f32 posY, f32 posZ, f32 scaleX, f32 scaleY, f32 scaleZ, f32 rotX, f32 rotY, f32 rotZ, s32* finishPtr, Gfx* dlist) {
    Effect_TypeM_Data* data;
    Effect* effect;    
    Mtx mtx;

    effect = Effect_Alloc(0, sizeof(Effect_TypeM_Data), &Effect_TypeM_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeM_Data*)effect->data;
    guMtxIdent(&data->mtx);

    guScale(&mtx, scaleX, scaleY, scaleZ);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guRotate(&mtx, rotY, 0.0f, 1.0f, 0.0f);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guRotate(&mtx, rotX, 1.0f, 0.0f, 0.0f);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guRotate(&mtx, rotZ, 0.0f, 0.0f, 1.0f);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guTranslate(&mtx, posX, posY, posZ);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    data->dlist = dlist;
    data->finish = finishPtr;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;

    return effect;
}

//https://decomp.me/scratch/xl76w
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800664E8.s")

//https://decomp.me/scratch/Jy8t4
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800665F0.s")

void func_800667A8(void) {
    D_800FE19C = 0;
}

void func_800667B4(Effect* arg0) {
    arg0->vel.x = 1.0f;
}

void func_800667C4(Effect*arg0, s32 arg1) {
    arg0->unk5 = (s8) arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800667CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800674B8.s")

void Effect_TypeO_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = 255.0f - effect->lifeTime * 254.0f;
    effect->vel.x += 1.0f / effect->vel.y;
    if (effect->vel.x >= 1.0f) {
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, 0);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeO_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;    

    effect = Effect_Alloc(0, 0, &Effect_TypeO_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeP_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = effect->lifeTime * 254.0f + 1;
    effect->vel.x += 1.0f / effect->vel.y;
    if (effect->vel.x >= 1.0f) {
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, 0);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeP_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;    

    effect = Effect_Alloc(0, 0, &Effect_TypeP_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeQ_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = 255.0f - effect->lifeTime * 254.0f;

    if (D_800F687C > 0) {
        effect->vel.x += 1.0f / effect->vel.y;
    }
    if (effect->vel.x >= 1.0f) {
        func_800610B8();
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 32.0f, 0.0f, 0.0f, 1, 320.0f, 176.0f, 0.0f, 0);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeQ_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;    

    effect = Effect_Alloc(0, 0, &Effect_TypeQ_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeR_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = effect->lifeTime * 254.0f;

    if (D_800F687C > 0) {
        effect->vel.x += 1.0f / effect->vel.y;
    }
    if (effect->vel.x >= 1.0f) {
        func_800610B8();
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 32.0f, 0.0f, 0.0f, 1, 320.0f, 176.0f, 0.0f, 0);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeR_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;    

    effect = Effect_Alloc(0, 0, &Effect_TypeR_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeS_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = effect->lifeTime * 255.0f;

    if (D_800F687C > 0) {
        effect->vel.x += 1.0f / effect->vel.y;
    }
    if (effect->vel.x >= 1.0f) {
        setPrimColor(effect->lifeTime * 255.0f, 255, 0, 255); // green to yellow
        if (D_80176B78->unk0 == 1) {
            printUISprite(32.0f, 200.0f, 0.0f, 0.0f, 1, 24.0f, 16.0f, 1, 204);
        } else {
            printUISprite(32.0f, 200.0f, 0.0f, 0.0f, 1, 24.0f, 16.0f, 0.0f, 204);
        }
        
        if (D_800F687C > 0) {
            effect->lifeTime += 1.0f / effect->duration;
            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 1.0f;
            }
            if (effect->lifeTime < 0.0f) {
                effect->lifeTime = 0.0f;
            }
        }
    }
}

Effect* Effect_TypeS_Init(f32 delay, f32 duration) {
    if (D_800FE1A0 == NULL) {
        D_800FE1A0 = Effect_Alloc(0, 0, &Effect_TypeS_Update);
        if (D_800FE1A0 == NULL) {
            return D_800FE1A0;
        }
        D_800FE1A0->lifeTime = 0.0f;
    }

    D_800FE1A0->duration = duration;
    D_800FE1A0->vel.y = delay;
    D_800FE1A0->vel.x = 0.0f;

    return D_800FE1A0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80069734.s")

void Effect_TypeT_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeT_Data* data = effect->data;

    if (func_800836FC(data->unk0, data->unk4, data->unk8, data->unkC) == 1) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeT_Init(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
    Effect* effect;
    Effect_TypeT_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeT_Data), &Effect_TypeT_Update);
    if (effect == NULL) {
        return effect;
    }

    data = effect->data;
    data->unk0 = arg0;
    data->unk4 = arg1;
    data->unk8 = arg2;
    data->unkC = arg3;

    return effect;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80069918.s")

void Effect_TypeU_Update(Effect* effect, Gfx** pGfxPos) {

    func_800610B8();
    switch(effect->spriteID) {
        case 0:
            setPrimColor(255, 255, 150, 80.0f * sinf(effect->lifeTime * 3.14156));
            break;
        case 1:
            setPrimColor(150, 255, 255, 80.0f * sinf(effect->lifeTime * 3.14156));
            break;
        case 2:
            setPrimColor(255, 200, 255, 80.0f * sinf(effect->lifeTime * 3.14156));
            break;
        case 3:
            setPrimColor(255, 220, 200, 80.0f * sinf(effect->lifeTime * 3.14156));
            break;
        case 4:
            setPrimColor(200, 255, 220, 80.0f * sinf(effect->lifeTime * 3.14156));
            break;
        case 5:
            setPrimColor(200, 255, 255, 140);
            break;
        case 6:
            setPrimColor(200, 200, 255, 140);
            break;
        case 7:
            setPrimColor(255, 200, 255, 140);
            break;
        case 8:
            setPrimColor(255, 255, 200, 140);
            break;
        default:
            setPrimColor(200, 255, 200, 140);
            break;
    }

    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, effect->sizeX, effect->sizeY, effect->lifeTime, 215);
    effect->pos.x += effect->vel.x;
    effect->pos.y += effect->vel.y;
    effect->pos.z += effect->vel.z;
    effect->lifeTime += 1.0f / effect->duration;
    if (effect->lifeTime >= 1) {
        Effect_Free(effect);
    }
}

void Effect_TypeU_Init(f32 posX, f32 posY, f32 posZ, f32 targetX, f32 targetY, f32 targetZ, f32 duration, s32 colorMode, f32 sizeX, f32 sizeY) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeU_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = (targetX - posX) / duration;
    effect->vel.y = (targetY - posY) / duration;
    effect->vel.z = (targetZ - posZ) / duration;
    effect->spriteID = colorMode;
    effect->sizeX = sizeX;
    effect->sizeY = sizeY;
    effect->duration = duration;
    effect->lifeTime = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_ResetScore.s")

void Bowling_CountPins(s32* pinsRemaining) {
    s32 i;
    s32 pinCount;
    
    for (i = 0, pinCount = 0; i < ARRAY_COUNT(gActors); i++){
        if (gActors[i].actorID == BOWLING_PINS) {
            pinCount++;
        }
    }
    *pinsRemaining = 10 - pinCount;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_UpdateScore.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printBowlingScore.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_DrawScoreCard.s")

void aa1_Bowling(f32 arg0, s32 arg1, s32 arg2) {
    Effect* temp_v0 = Effect_Alloc(0, 8, Bowling_DrawScoreCard);
    UnkBowlingStruct* temp_v1;
    if (temp_v0 != 0) {
        temp_v1 = temp_v0->data;
        temp_v0->lifeTime = 0.0f;
        temp_v0->duration = arg0;
        temp_v1->unk_00 = arg1;
        temp_v1->unk_04 = arg2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/ResetEyeParams.s")

void LockEyeChange(void) {
    gDontChangeEyes = 1;
}

void UnlockEyeChange(void) {
    gDontChangeEyes = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BA30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BD58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BE4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C0D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C368.s")

void Effect_TypeV_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 size, s32 duration, u8 isMain, u8 opacity);

void Effect_TypeV_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    Effect_TypeV_Data* data = (Effect_TypeV_Data*)effect->data;
    f32 dirX = sinf(effect->lifeTime * 720.0f * (3.1415926535892 / 180)) * 1000.0f;
    f32 dirZ = cosf(effect->lifeTime * 720.0f * (3.1415926535892 / 180)) * 1000.0f;
    f32 spawnX, spawnY, spawnZ;
    f32 alpha;

    if (effect->numParts == 0) {
        alpha = 255.0f;
    } else {
        alpha = effect->numParts * (1 - effect->lifeTime);
    }

    if (D_800F687C > 0) {
        data->color.r = RANDOM(100, 255);
        data->color.g = RANDOM(100, 255);
        data->color.b = RANDOM(100, 255);
    }
    setPrimColor(data->color.r, data->color.g, data->color.b, alpha);
    guAlign(&mtx, 0.0f, dirX, 100000000.0f, dirZ);
    func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, effect->sizeX, effect->sizeX, 0.0f, 72);

    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        spawnX = effect->pos.x + RANDOM(-20, 20);
        spawnY = effect->pos.y + RANDOM(-20, 20);
        spawnZ = effect->pos.z + RANDOM(-20, 20);
        if (effect->unk5 == TRUE && (gTimer % 4) == 0) {
            Effect_TypeV_Init(spawnX, spawnY, spawnZ, 0.0f, 0.0f, 0.0f, 32.0f, 10, FALSE, 144);
        }

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeV_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 size, s32 duration, u8 isMain, u8 opacity) {
    Effect* effect;
    Effect_TypeV_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeV_Data), &Effect_TypeV_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeV_Data*)effect->data;
    data->color.r = data->color.g = data->color.b = data->color.a = 100;

    effect->sizeX = size;
    effect->numParts = opacity;
    effect->unk5 = isMain;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeW_Update(Effect* effect, Gfx** pGfxPos) {
    s32 i;

    if (D_800F687C > 0) {
        if (effect->unk5 == FALSE) {
            for (i = 0; i < effect->spriteID; i++) {
                f32 velX = RANDOM(-5, 5);
                f32 velY = RANDOM(-5, 5);
                f32 velZ = RANDOM(-5, 5);
                Effect_TypeV_Init(effect->pos.x, effect->pos.y, effect->pos.z, velX, velY, velZ, effect->sizeX, effect->sizeY, TRUE, 0);
            }
            effect->unk5 = TRUE;
        }        

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            FreeSprite(0x48);
            Effect_Free(effect);
        }
    }

}

void Effect_TypeW_Init(f32 posX, f32 posY, f32 posZ, f32 size, s32 duration, s32 arg5) {
    Effect* effect;
    Effect_TypeV_Data* data;

    effect = Effect_Alloc(0, 0, &Effect_TypeW_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = arg5;
    effect->unk5 = FALSE;    
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->sizeX = size;
    effect->sizeY = duration;    
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / (duration + 20);
    LoadSprite(0x48);
}

void LoadPlayerEyes(s32 arg0) {
    s32 i;
    s32 var_s0 = (arg0 * 10) + 114;
    
    for(i = 0; i != 10; i++){
        gLockContextEyes = LoadSprite(var_s0);
        if ((gLockContextEyes) > 0) {
            break;
        }
        var_s0 += 1;
    }
}

void FreePlayerEyes(s32 arg0) {
    s32 i;
    s32 var_s0 = (arg0 * 10) + 114;

    for(i = 0; i != 10; i++){
        FreeSprite(var_s0);
        var_s0 += 1;
    }
    gLockContextEyes = 255;
}

void SetEyeTexture(u8* dest, u8* src, s32 size) {
    u8* destP;
    s32 i;

    if (!IS_SEGMENTED(dest)) {
        destP = dest;
    } else {
        destP = SEGMENTED_TO_VIRTUAL(dest);
    }

    for (i = 0; i < size; i++) {
        *destP++ = *src++;
    }
}

void SetPlayerEyes(s32 arg0, s32 arg1, s32 arg2) {
    SpriteListing* sprite;
    struct_800FE4EC* s1;
    s32 size;

    switch (arg1) {
        case 0:
            sprite = &gSpriteListings[arg0];
            s1 = &D_800FE4EC[arg2];
            size = sprite->width * sprite->height * sprite->tileCountX * sprite->tileCountY;
            SetEyeTexture(s1->unk_00, sprite->bitmapP, size);
            SetEyeTexture(s1->unk_08, sprite->palletteP, 0x200);
            size = sprite[5].height * sprite[5].tileCountX * sprite[5].tileCountY * sprite[5].width;
            SetEyeTexture(s1->unk_04, sprite[5].bitmapP, size);
            SetEyeTexture(s1->unk_0C, sprite[5].palletteP, 0x200);
            break;
        case 1:
            sprite = &gSpriteListings[arg0];
            s1 = &D_800FE4EC[arg2];
            size = sprite->width * sprite->height * sprite->tileCountX * sprite->tileCountY;
            SetEyeTexture(s1->unk_00, sprite->bitmapP, size);
            SetEyeTexture(s1->unk_08, sprite->palletteP, 0x200);
            break;
        case 2:
            sprite = &gSpriteListings[arg0];
            s1 = &D_800FE4EC[arg2];
            size = sprite[5].height * sprite[5].tileCountX * sprite[5].tileCountY * sprite[5].width;
            SetEyeTexture(s1->unk_04, sprite[5].bitmapP, size);
            SetEyeTexture(s1->unk_0C, sprite[5].palletteP, 0x200);
            break;
    }
}

void Effect_PlayerEyes_Update(Effect* effect, Gfx** pGfxPos) {

    if (gDontChangeEyes == 1) {
        Effect_Free(effect);
        return;
    }

    if (D_800FE704[effect->unk8] == 1) {
        effect->pos.x = 2.0f;
        effect->lifeTime = 0.0f;
        effect->duration = D_800FE6F4[effect->unk8];
        D_800FE704[effect->unk8] = 0;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;

        switch ((s32)effect->pos.x) {
            case 0:
                if (effect->lifeTime > 0.0f && effect->lifeTime <= 0.5f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                } else if (effect->lifeTime > 0.5f && effect->lifeTime <= 0.7f) {
                    SetPlayerEyes(effect->spriteID + 1, effect->pos.y, effect->pos.z);
                } else if (effect->lifeTime > 0.7f && effect->lifeTime <= 0.8f) {
                    SetPlayerEyes(effect->spriteID + 2, effect->pos.y, effect->pos.z);
                } else if (effect->lifeTime > 0.8f && effect->lifeTime <= 1.0f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                }
                break;
            case 1:
                if (effect->lifeTime >= 1.0f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                } else {
                    SetPlayerEyes(effect->spriteID + 3, effect->pos.y, effect->pos.z);
                }
                break;
            case 2:
                if (effect->lifeTime >= 1.0f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                } else {
                    SetPlayerEyes(effect->spriteID + 4, effect->pos.y, effect->pos.z);
                }
                break;
        }

        if (effect->lifeTime >= 1.0f) {
            if ((s32)effect->pos.y == 0) {
                D_800FE4E4[effect->unk8].unk_00 = 0;
                D_800FE4E4[effect->unk8].unk_01 = 0;
            } else if ((s32)effect->pos.y == 1) {
                D_800FE4E4[effect->unk8].unk_00 = 0;
            } else if ((s32)effect->pos.y == 2) {
                D_800FE4E4[effect->unk8].unk_01 = 0;
            }
            Effect_Free(effect);
        }
    }
}

u32 Effect_PlayerEyes_Init(s32 charID, s32 arg1, f32 duration, s32 arg3) {
    s32 arg0;
    Effect* effect;    

    if (gDontChangeEyes == TRUE) {
        return FALSE;
    }
    if (gLockContextEyes) {
        return FALSE;
    }

    if (Battle_GameType == 0) {
        arg0 = 0;
    } else {
        arg0 = charID;
    }

    if (arg3 == 0 && (D_800FE4E4[arg0].unk_00 == 1 || D_800FE4E4[charID].unk_01 == 1)) {
        if (arg1 == 2) {
            D_800FE6F4[arg0] = 1.0f / duration;
            D_800FE704[arg0] = 1;
        }
        return FALSE;
    }
    else if (arg3 == 1 && D_800FE4E4[arg0].unk_00 == 1) {
        if (arg1 == 2) {
            D_800FE6F4[arg0] = 1.0f / duration;
            D_800FE704[arg0] = 1;
        }
        return FALSE;
    }
    else if (arg3 == 2 && D_800FE4E4[arg0].unk_01 == 1) {
        if (arg1 == 2) {
            D_800FE6F4[arg0] = 1.0f / duration;
            D_800FE704[arg0] = 1;
        }
        return FALSE;
    }

    effect = Effect_Alloc(0, 0, &Effect_PlayerEyes_Update);
    if (effect == NULL && arg0 < 4) {
        return FALSE;
    }

    if (arg3 == 0) {
        D_800FE4E4[arg0].unk_00 = 1;
        D_800FE4E4[arg0].unk_01 = 1;
    } else if (arg3 == 1) {
        D_800FE4E4[arg0].unk_00 = 1;
    } else if (arg3 == 2) {
        D_800FE4E4[arg0].unk_01 = 1;
    } 

    if (TRUE) { // TODO fake match ??
        effect->spriteID = 114 + charID * 10;
        effect->unk8 = arg0;    
        effect->pos.x = arg1;
        effect->pos.y = arg3;
        effect->pos.z = charID;        
        effect->lifeTime = 0.0f;    
        effect->duration = 1.0f / duration;
    }
    return TRUE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/SetPlayerContextEyes.s")

void SetBossDeadEyes(s32);

void Effect_BossDeadEyes_Update(Effect* effect, Gfx** pGfxPos) {
    SetBossDeadEyes(effect->spriteID);
    switch(effect->spriteID) {
        case 75:
            FreeSprite(202);
            break;
        case 7:
            FreeSprite(201);
            break;        
        case 30:
            FreeSprite(203);
            break;        
    }
    Effect_Free(effect);
}

void Effect_BossDeadEyes_Init(s32 arg0) {
    Effect* effect;
    s32 ret;

    switch(arg0) {
        case 75:
            ret = LoadSprite(202);
            break;
        case 7:
            ret = LoadSprite(201);
            break;        
        case 30:
            ret = LoadSprite(203);
            break;
        default:
            return;
    }
    if (ret == 0) {
        effect = Effect_Alloc(0, 0, &Effect_BossDeadEyes_Update);
        if (effect == NULL) {
            return;
        }

        effect->spriteID = arg0;
    }
}

#ifdef NON_MATCHING
void SetBossDeadEyes(s32 arg0) {
    s32 sp28;
    s32 sp24;
    s32 size;
    SpriteListing* sp1C;
    struct_800FE54C* sp18;
    s32 sp20 = 1;    

    switch(arg0) {
        case 75:
            sp24 = 202;
            sp20 = 2;
            sp28 = 0;
            break;
        case 7:
            sp24 = 201;
            sp28 = 1;            
            break;       
        case 30:
            sp24 = 203;
            sp28 = 2;
            break;
    }

    sp1C = &gSpriteListings[sp24];
    sp18 = &D_800FE54C[sp28];
    size = sp1C->width * sp1C->height * sp1C->tileCountX * sp1C->tileCountY / sp20;
    SetEyeTexture(sp18->unk_00, sp1C->bitmapP, size);
    SetEyeTexture(sp18->unk_04, sp1C->palletteP, 0x200);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/SetBossDeadEyes.s")
#endif

void Effect_TypeX_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeX_Data* data = (Effect_TypeX_Data*)effect->data;
    f32 f2;
    f32 sp34;
    f32 sinAngle;
    f32 q;    
    f32 unused2[2];
    u8 temp;
    

    sp34 = cosf(effect->lifeTime * 1.57078);
    sinAngle = sinf(effect->lifeTime * 1.57078);
    q = 128.0f * sinAngle;
    if (D_800F687C > 0) {
        data->unk_00.x = effect->pos.x + effect->vel.x * sinAngle;
        data->unk_00.y = effect->pos.y + effect->vel.y * sinAngle;
        data->unk_00.z = effect->pos.z + effect->vel.z * sinAngle;

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }
    f2 = ABS2(effect->lifeTime - 0.5f);
    temp = f2 * 255.0f;
    setPrimColor(255.0f * sp34, 255.0f * sp34, 255.0f * sp34, 255 - temp);
    func_8005747C(data->unk_00.x, data->unk_00.y, data->unk_00.z, q, q, 0.0f, 0x4A);
}

void Effect_TypeX_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 duration) {
    Effect* effect;
    Effect_TypeX_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeX_Data), &Effect_TypeX_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeX_Data*)effect->data;
    data->unk_00.x = posX;
    data->unk_00.y = posY;
    data->unk_00.z = posZ;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeX_Create(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    f32 unused;
    f32 angle;
    s32 i;

    for (angle = 0.0f, i = 0; i < arg4; angle += 360.0f / arg4, i++) {
        f32 x1 = sinf(angle * 0.01745329251994) * arg3;
        f32 z1 = cosf(angle * 0.01745329251994) * arg3;
        Effect_TypeX_Init(arg0, arg1, arg2, x1, -20.0f, z1, RANDOM(10, 15));
    }
}

void Effect_TypeY_Update(Effect* effect, Gfx** pGfxPos) {
    f32 nv;
    f32 scaleY = effect->vel.y;

    if (D_800F687C > 0 && (gTimer % 5) == 0) {        
        f32 f2 = ABS2(effect->lifeTime - 0.5f);
        nv = f2 * scaleY + effect->vel.y;
        Effect_TypeH_Init(effect->pos.x, effect->pos.y, effect->pos.z, 0.0f, 0.0f, 0.0f, effect->vel.x, nv, effect->vel.z, 90.0f, 12, 0);
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
        effect->lifeTime += effect->duration;
    }
}

void Effect_TypeY_Init(f32 posX, f32 posY, f32 posZ, f32 scaleX, f32 scaleY, f32 scaleZ, f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeY_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = scaleX;
    effect->vel.y = scaleY;
    effect->vel.z = scaleZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeZ_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    Effect_TypeZ_Data* data = (Effect_TypeZ_Data*)effect->data;
    f32 sp40 = 255.0f;
    f32 f0;

    f0 = sinf(effect->lifeTime * 1.57078);

    if (D_800F687C > 0) {
        data->angle += 30;
        data->pos.x = effect->pos.x + effect->vel.x * effect->lifeTime;
        data->pos.y = effect->pos.y + effect->vel.y * f0;
        data->pos.z = effect->pos.z + effect->vel.z * effect->lifeTime;

        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 0.65f) {
            sp40 = (gTimer % 2) * 255;
        }

        if (data->angle >= 360) {
            data->angle -= 360;
        }

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    setPrimColor(data->color.r, data->color.g, data->color.b, sp40);
    guRotate(&mtx, data->angle, 1.0f, 1.0f, 1.0f);
    func_80058BE4(&mtx, data->pos.x, data->pos.y, data->pos.z, data->scale, data->scale, 0.0f, 0);
}

void Effect_TypeZ_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 duration, s32 arg8, u8 arg9, u8 argA, u8 argB) {
    Effect* effect;
    Effect_TypeZ_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeZ_Data), &Effect_TypeZ_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeZ_Data*)effect->data;
    data->pos.x = posX;
    data->pos.y = posY;
    data->pos.z = posZ;
    data->angle = 0;
    data->scale = arg6;
    data->color.r = arg9;
    data->color.g = argA;
    data->color.b = argB;

    effect->spriteID = arg8;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;    
    effect->vel.x = arg3;
    effect->vel.y = arg4;
    effect->vel.z = arg5;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeZ_Create(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, s32 arg5) {
    f32 angle;
    s32 i;
    f32 delta;
    f32 x1, y1, z1;
    u8 r,g,b;    

    if (Battle_GameType != 0 || gCurrentStage == 8) {
        return;
    }   

    delta = 360.0f / arg5;
    for (angle = 0.0f, i = 0; i < arg5; angle += delta, i++) {
        switch(i % 4) {
            case 0:
                r = 255;
                g = 20;
                b = 20;
                break;
            case 1:
                r = 20;
                g = 128;
                b = 255;
                break;
            case 2:
                r = 0;
                g = 255;
                b = 100;
                break;
            case 3:
                r = 255;
                g = 255;
                b = 255;
                break;
        }

        x1 = sinf(angle * 0.01745329251994) * arg3;
        y1 = RANDOM(100, 250);
        z1 = cosf(angle * 0.01745329251994) * arg3;
        Effect_TypeZ_Init(posX, posY, posZ, x1, y1, z1, 16.0f, arg4, 0, r, g, b);
    }
}

#ifdef NON_MATCHING
void Effect_TypeAA_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAA_Data* data = (Effect_TypeAA_Data*)effect->data;
    f32 x, y, z, t; // sp84, sp80, sp7C
    f32 sp74;
    f32 angleX, angleY, angleZ; // sp70, sp6C, sp68    
    s32 i;

    if (effect->unk5 == 0) {
        if (effect->numParts == 0) {
            effect->numParts = 1;

            angleX = effect->vel.x * 0.01745329251994;
            angleY = effect->vel.y * 0.01745329251994;
            angleZ = effect->vel.z * 0.01745329251994;

            x = 0.0f;
            y = cosf(angleX) * effect->sizeX;
            z = sinf(angleX) * -effect->sizeX;

            t = -sinf(angleY) * z;
            z = cosf(angleY) * z;
            
            x = cosf(angleZ) * t - sinf(angleZ) * y;
            y = sinf(angleZ) * t + cosf(angleZ) * y;

            data[effect->unk8].pos.x = effect->pos.x + x;
            data[effect->unk8].pos.y = effect->pos.y + y;
            data[effect->unk8].pos.z = effect->pos.z + z;

            data[effect->unk8].color.r = RANDOM(100, 255);
            data[effect->unk8].color.g = RANDOM(100, 255);
            data[effect->unk8].color.b = RANDOM(100, 255);
            data[effect->unk8].color.a = 0;

            sp74 = effect->sizeY / 2;

            effect->vel.x += RANDOM(-sp74, sp74);
            effect->vel.y += RANDOM(-sp74, sp74);
            effect->vel.z += RANDOM(-sp74, sp74);

            WrapDegrees(&effect->vel.x);
            WrapDegrees(&effect->vel.y);
            WrapDegrees(&effect->vel.z);

            effect->unk8++;
            if (effect->unk8 == effect->spriteID) {
                effect->unk5 = 1;
            }
        }

        if (effect->lifeTime >= 1.0f) {
            effect->numParts = 0;
            effect->lifeTime = 0.0f;
        }
        effect->lifeTime += effect->duration;
    }

    if (effect->unk8 > 0) {
        for (i = 0; i < effect->unk8 - 1; i++) {
            if (data[i].color.a <= 0x60) {
                data[i].color.a += 8;
            }
            setPrimColor(data[i].color.r, data[i].color.g, data[i].color.b, data[i].color.a);
            func_80058748(effect->pos.x, effect->pos.y, effect->pos.z,
                          effect->pos.x, effect->pos.y, effect->pos.z,
                          data[i].pos.x, data[i].pos.y, data[i].pos.z,
                          data[i+1].pos.x, data[i+1].pos.y, data[i+1].pos.z,
                          1.0f, 1.0f, 0.0f, 0);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_TypeAA_Update.s")
void Effect_TypeAA_Update(Effect* effect, Gfx** pGfxPos);
#endif

void Effect_TypeAA_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 duration, s32 arg9) {
    Effect* effect;
    Effect_TypeAA_Data* data;
    s32 i;

    effect = Effect_Alloc(0, arg9 * sizeof(Effect_TypeAA_Data), &Effect_TypeAA_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAA_Data*)effect->data;
    for (i = 0; i < arg9; i++) {
        data[i].pos.x = data[i].pos.y = data[i].pos.z = 0.0f;
    }

    effect->spriteID = arg9;
    effect->unk8 = 0;
    effect->unk5 = 0;
    effect->numParts = 0;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;    
    effect->vel.x = arg4;
    effect->vel.y = arg5;
    effect->vel.z = arg6;
    effect->sizeX = arg3;
    effect->sizeY = arg7;
    effect->lifeTime = 1.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeAB_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAB_Data* data = (Effect_TypeAB_Data*)effect->data;
    f32 x, y, z;
    f32 size;
    u8 alpha;

    size = sinf(effect->lifeTime * 1.57078);
    if (effect->lifeTime < 0.6f) {
        alpha = 255;
    } else {
        alpha = (1.0 - (effect->lifeTime - 0.6) / 0.4f) * 255.0;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        x = effect->pos.x + effect->vel.x * size;
        y = effect->pos.y + effect->vel.y * size;
        z = effect->pos.z + effect->vel.z * size;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    setPrimColor(data->color.r, data->color.g, data->color.b, alpha);
    func_8005747C(x, y, z, data->size, data->size, 0.0f, effect->spriteID);
}

void Effect_TypeAB_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 duration, u8 arg8, u8 arg9, u8 argA, f32 argB) {
    Effect* effect;
    Effect_TypeAB_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAB_Data), &Effect_TypeAB_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAB_Data*)effect->data;
    data->size = arg6;
    data->color.r = arg8;
    data->color.g = arg9;
    data->color.b = argA;

    effect->spriteID = argB;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;    
    effect->vel.x = arg3;
    effect->vel.y = arg4;
    effect->vel.z = arg5;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeAB_TypeAC_Create(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, s32 arg5) {
    s32 i;
    u8 colorR, colorG, colorB;
    f32 unk0, unk1, unk2;
    f32 size;

    for (i = 0; i < arg5; i++) {
        switch (Rand() % 5) {
            case 0:
                colorR = 238;
                colorG = 51;
                colorB = 71;
                break;
            case 1:
                colorR = 32;
                colorG = 212;
                colorB = 52;
                break;
            case 2:
                colorR = 96;
                colorG = 153;
                colorB = 255;
                break;
            case 3:
                colorR = 255;
                colorG = 255;
                colorB = 0;
                break;
            case 4:
                colorR = 255;
                colorG = 255;
                colorB = 255;
                break;
        }
        size = arg3 * 0.5f;
        unk0 = RANDOM(-size, size);
        unk1 = RANDOM(-size, size);
        unk2 = RANDOM(-size, size);
        Effect_TypeAB_Init(posX, posY, posZ,
                           unk0, unk1, unk2,
                           32.0f, arg4 + 4.0f,
                           colorR, colorG, colorB, 75);
    }
    Effect_TypeAC_Init(posX, posY, posZ, arg3, arg4);
}

void Effect_TypeAC_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAC_Data* data = (Effect_TypeAC_Data*)effect->data;
    f32 size;

    size = effect->lifeTime * effect->vel.x;

    if (D_80174980 == 3 && gCurrentStage == STAGE_GHOSTBOSS && D_800FFEBC == 0) {
        Effect_Free(effect);
        return;
    }

    if (D_800F687C > 0) {
        if (effect->lifeTime < 0.5f) {
            data->color.a = 255;
        } else {
            data->color.a = (1.0f - (effect->lifeTime - 0.5f) / 0.5f) * 255.0f;
        }

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    setPrimColor(data->color.r, data->color.g, data->color.b, data->color.a);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, size, size, 0.0f, 219);
}

void Effect_TypeAC_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 duration) {
    Effect* effect;
    Effect_TypeAC_Data* data;
    s32 type = Rand() % 5;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAC_Data), &Effect_TypeAC_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAC_Data*)effect->data;
    data->color.a = 255;
    switch (type) {
        case 0:
            data->color.r = 238;
            data->color.g = 51;
            data->color.b = 71;
            break;
        case 1:
            data->color.r = 32;
            data->color.g = 212;
            data->color.b = 52;
            break;
        case 2:
            data->color.r = 96;
            data->color.g = 153;
            data->color.b = 255;
            break;
        case 3:
            data->color.r = 255;
            data->color.g = 255;
            data->color.b = 0;
            break;
        case 4:
            data->color.r = 255;
            data->color.g = 255;
            data->color.b = 255;
            break;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;    
    effect->vel.x = arg3;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F43C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F8D8.s")

void Effect_TypeAD_Update(Effect* effect, Gfx** pGfxPos) {
    f32 sp54 = Rand() % 360;
    f32 sp50;

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f;
        if (effect->lifeTime >= 30.0f) {
            Effect_Free(effect);
        }
    }

    // BUG effect used after freeing
    
    if (effect->lifeTime > effect->duration) {
        sp50 = sinf(sp54 * 0.01745329251994);
        effect->pos.x = effect->vel.x + RANDOM(effect->vel.y - 100.0f, effect->vel.y) * sp50;
        sp50 = cosf(sp54 * 0.01745329251994);
        effect->pos.z = effect->vel.z + RANDOM(effect->vel.y - 100.0f, effect->vel.y) * sp50;
        effect->duration = effect->lifeTime + RANDOM(1, 3);
        func_80079150(effect->pos.x, effect->pos.y + 100.0f, effect->pos.z, 1.0f, sp54, RANDOM(5, 30), 400.0f, RANDOM(12, 24), 214, 181, 143);
    }
}

void Effect_TypeAD_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5) {
    Effect* effect;

    effect = Effect_Alloc(1, 0, &Effect_TypeAD_Update);
    if (effect == NULL) {
        return;
    }

    arg3 -= 90.0f;
    effect->pos.x = 0.0f;
    effect->pos.y = posY;
    effect->pos.z = 0.0f;    
    effect->vel.x = posX + sinf(arg3 * 0.01745329251994) * arg4;
    effect->vel.y = arg5 * 0.7f;
    effect->vel.z = posZ + cosf(arg3 * 0.01745329251994) * arg4;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f;    
}

void func_8006FD14(f32 posX, f32 posY, f32 posZ) {
    f32 angle = Rand() % 360;

    func_80079150(posX, posY, posZ, 0.8f, angle,          8.0f, 200.0f, 20.0f, 255, 255, 255);
    func_80079150(posX, posY, posZ, 0.8f, angle + 120.0f, 8.0f, 200.0f, 20.0f, 255, 255, 255);
    func_80079150(posX, posY, posZ, 0.8f, angle - 120.0f, 8.0f, 200.0f, 20.0f, 255, 255, 255);
}

void Effect_TypeAE_Update(Effect* effect, Gfx** pGfxPos) {
    f32 sp34 = 1.0f - effect->lifeTime;
    f32 sp30 = effect->sizeX * sp34;

    setPrimColor(255, 255, sp34 * 255.0f, 255);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, sp30, sp30, 0.0f, 0x71);
    if (D_800F687C > 0) {
        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y * sp34;
        effect->pos.z += effect->vel.z;

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeAE_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 duration, f32 arg6) {
    Effect* effect;
    f32 sinAngle, cosAngle;

    effect = Effect_Alloc(0, 0, &Effect_TypeAE_Update);
    if (effect == NULL) {
        return;
    }

    arg3 += 90.0f;
    sinAngle = sinf(arg3 * 0.01745329251994);
    cosAngle = cosf(arg3 * 0.01745329251994);

    effect->sizeX = arg6;
    effect->pos.x = posX + sinAngle * -80.0f;
    effect->pos.y = posY + 100.0f;
    effect->pos.z = posZ + cosAngle * -80.0f;
    effect->vel.x = -sinAngle * arg4 * 0.8f;
    effect->vel.y = 10.0f;
    effect->vel.z = -cosAngle * arg4 * 0.8f;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeAF_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    Effect_TypeAF_Data* data = (Effect_TypeAF_Data*)effect->data;
    f32 f28 = data->unk_24 - sinf(data->unk_20 * 0.01745329251994) * data->unk_24 / 4;
    s32 i;
    f32 angle;    
    f32 temp;

    if (D_800F687C > 0) {
        angle = data->unk_1C;
        effect->vel.z += 20.0f;
        data->unk_14 = sinf((temp = effect->vel.z) * 0.01745329251994) * 100.0f; // TODO fake match
        data->unk_18 = cosf(effect->vel.z * 0.01745329251994) * 100.0f;

        if (gPlayerActors[0].canJump == 0) {
            for (i = 0; i < data->unk_28; i++) {
                data->unk_0C = sinf(angle * 0.01745329251994) * effect->vel.x;
                data->unk_10 = cosf(angle * 0.01745329251994) * effect->vel.x;
                data->unk_20 += 5.0f;
                angle += 360.0f / data->unk_28;

                setPrimColor(255, 255, 0, 255);
                guAlign(&mtx, 0.0f, data->unk_14, -100000000.0f, data->unk_18);
                func_80058BE4(&mtx, *data->pPosX + data->unk_0C + 30.0f, *data->pPosY + 120.0f, *data->pPosZ + data->unk_10, f28, f28, 0.0f, effect->spriteID);
            }
        }

        data->unk_1C += effect->vel.y;
        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeAF_Init(f32* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 duration, s32 arg8) {
    Effect* effect;
    Effect_TypeAF_Data* data;

    if (D_800FE6F0 == 1) {
        return;
    }
    D_800FE6F0 = 1;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAF_Data), &Effect_TypeAF_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAF_Data*)effect->data;
    data->pPosX = arg0;
    data->pPosY = arg1;
    data->pPosZ = arg2;
    data->unk_0C = 0.0f;
    data->unk_10 = 0.0f;
    data->unk_14 = 0.0f;
    data->unk_18 = 0.0f;
    data->unk_1C = 0.0f;
    data->unk_20 = 0.0f;
    data->unk_24 = arg4;
    data->unk_28 = arg6;

    effect->spriteID = arg8;
    effect->vel.x = arg3;
    effect->vel.y = arg5;
    effect->vel.z = 0.0f;    
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;    
}

void Effect_TypeAG_Update(Effect* effect, Gfx** pGfxPos) {
    switch ((s32)effect->pos.z) {
        case 0:
            effect->lifeTime += effect->pos.x;
            func_80088474(effect->spriteID, effect->lifeTime * effect->duration);
            break;
        case 1:
            effect->lifeTime += effect->pos.y;
            func_80088474(effect->spriteID, (1.0f - effect->lifeTime) * effect->duration);
            break;
        case 2:
            StopSoundEffect(effect->spriteID);
            Effect_Free(effect);
            break;
    }

    if (effect->lifeTime >= 1.0f) {
        effect->lifeTime = 0.0f;
        effect->pos.z += 1;
    }
}

void Effect_TypeAG_Init(f32 arg0, f32 arg1, s32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAG_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = PLAYSFX(0x3F, 0, 0x10);
    func_800882D0(effect->spriteID, 11);
    func_80088474(effect->spriteID, 0);
    effect->pos.x = 1.0f / arg0;
    effect->pos.y = 1.0f / arg1;
    effect->pos.z = 0;    
    effect->lifeTime = 0.0f;
    effect->duration = arg2;
}

void Effect_TypeAH_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAH_Data* data = (Effect_TypeAH_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;
    Mtx mtx;
    u8 frameIndex;
    s32 sp48;
    s32 sp44;
    Mtx* sp40;
    Mtx* mtxPos;
    

    guMtxIdent(&data->mtx[data->unk_A9C]);
    guScale(&mtx, 1.4f, 1.4f, 1.4f);
    guMtxCatL(&data->mtx[data->unk_A9C], &mtx, &data->mtx[data->unk_A9C]);
    guRotate(&mtx, data->yaw, 0.0f, 1.0f, 0.0f);
    guMtxCatL(&data->mtx[data->unk_A9C], &mtx, &data->mtx[data->unk_A9C]);
    guTranslate(&mtx, effect->pos.x, effect->pos.y, effect->pos.z);
    guMtxCatL(&data->mtx[data->unk_A9C], &mtx, &data->mtx[data->unk_A9C]);

    mtxPos = data->animArray[data->unk_A9C];
    if (data->unk_A94 == 2) {
        func_80027138(data->unk_A8C, &sp48, &sp44, &sp40);
    } else {
        func_80027138(data->unk_A88, &sp48, &sp44, &sp40);
    }

    switch (data->unk_A94) {
        case 0:
            frameIndex = data->unk_AA4[data->unk_A98 % effect->unk5];
            break;
        case 1:
            frameIndex = data->unk_A98;
            if (frameIndex >= sp44 - 1) {
                data->unk_AA8--;
                if (data->unk_AA8 > 0) {
                    data->unk_A98 = -1;
                } else {
                    data->unk_A94 = 2;
                    data->unk_A98 = -1;
                }
            }
            break;
        case 2:
            if (data->unk_A98 >= sp44 - 1) {
                data->unk_A98 = sp44 - 1;
            }
            frameIndex = data->unk_A98;
            break;
    }
    func_80027240(&mtxPos, sp40, frameIndex, sp48);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx[data->unk_A9C]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    mtxPos = data->animArray[data->unk_A9C];
    PutDList(&mtxPos, &gfxPos, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    data->unk_A98++;
    data->unk_A9C ^= 1;

    *pGfxPos = gfxPos;
    if (*data->unk_AA0 == 0) {
        Effect_Free(effect);
    }
}

void Effect_TypeAH_Init(u8* arg0, f32 posX, f32 posY, f32 posZ, f32 arg4, Effect_TypeAH_Arg5* arg5, s32 arg6, s32 arg7, u8 arg8) {
    Effect* effect;
    Effect_TypeAH_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAH_Data), &Effect_TypeAH_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAH_Data*)effect->data;
    data->dlist = D_800F0638[arg6];
    data->unk_A88 = arg5->unk_00;
    data->unk_A8C = arg5->unk_04;
    data->yaw = arg4;
    data->unk_A94 = arg7;
    data->unk_A98 = 0;
    data->unk_A9C = 0;
    data->unk_AA0 = arg0;
    data->unk_AA4 = arg5->unk_08;
    data->unk_AA8 = arg8;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;
    effect->unk5 = arg5->unk_0C;
    effect->vel.x = 0.0f;
}

void Effect_TypeAI_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha;

    effect->lifeTime += effect->duration;
    if (effect->lifeTime <= 1.0f) {
        alpha = sinf(effect->lifeTime * 1.57078);
    } else {
        alpha = 1.0f;

        effect->pos.x += effect->pos.y;
        if (effect->pos.x > 1.0f) {
            Effect_Free(effect);
            if (effect->spriteID == 0) {
                gGameModeState = 3;
            }
            return;
        }
    }

    effect->unk5 *= alpha;
    setPrimColor(effect->unk5, effect->unk5, effect->unk5, 255.0f * alpha);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, 0);
}

void Effect_TypeAI_Init(u8 arg0, f32 arg1, f32 arg2, s32 arg3) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAI_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = arg3;
    effect->unk5 = arg0;
    effect->pos.x = 0.0f;
    effect->pos.y = 1.0f / arg2;
    effect->lifeTime = 0.0f;    
    effect->duration = 1.0f / arg1;
}

void Effect_TypeAJ_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha;

    effect->pos.y += effect->pos.z;
    if (effect->pos.y <= 1.0f) {
        alpha = 1.0f;
    } else {
        effect->lifeTime += effect->duration;
        alpha = cosf(effect->lifeTime * 1.57078);
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    effect->unk5 *= effect->lifeTime;
    setPrimColor(effect->unk5, effect->unk5, effect->unk5, 255.0f * alpha);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, 0);
}

void Effect_TypeAJ_Init(u8 arg0, f32 arg1, f32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAJ_Update);
    if (effect == NULL) {
        return;
    }

    effect->unk5 = arg0;
    effect->pos.y = 0.0f;
    effect->pos.z = 1.0f / arg1;
    effect->lifeTime = 0.0f;    
    effect->duration = 1.0f / arg2;
    setPrimColor(arg0, arg0, arg0, 255);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, 0);
}

s32 func_8007101C(void) {
    s32 i;

    if (func_80055EEC(0x800) % 20 == 1) {
        PLAYSFX(0x2A, 0, 0x10);
        if (D_800FE708 == 0) {
            D_800FE708 = 5;
        } else {
            D_800FE708--;
        }
    }
    if (func_80055EEC(0x400) % 20 == 1) {
        PLAYSFX(0x2A, 0, 0x10);
        if (D_800FE708 == 5) {
            D_800FE708 = 0;
        } else {
            D_800FE708++;
        }
    }

    for (i = 0; i < 6; i++) {
        if (i == D_800FE708) {
            SetTextGradientFromPalette(2);
        } else {
            SetTextGradientFromPalette(3);
        }
        func_80059F28(188.0f, 96 + i * 20, 0.0f, 0.0f, 1.0f, 104.0f, 16.0f, 0.0f, 189 + i);
    }
    return D_800FE708;
}

void Effect_TypeAK_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha;
    f32 sp38;    

    switch (effect->unk5) {
        case 0:
            effect->lifeTime += effect->duration;
            if (!(effect->lifeTime <= 1.0f)) {
                effect->unk5 = 1;
                effect->lifeTime = 0.0f;
            }
            // don't draw anything
            return;
        case 1:
            effect->lifeTime += effect->vel.x;
            alpha = sinf(effect->lifeTime * 1.57078);
            sp38 = alpha * 104.0f;
            if (effect->lifeTime >= 1.0f) {
                sp38 = 104.0f;
                alpha = 1.0f;
                effect->unk5 = 2;
                effect->lifeTime = 0.0f;
            }
            break;
        case 2:
            alpha = 1.0f;
            sp38 = 104.0f;
            effect->lifeTime += effect->vel.y;
            if (effect->lifeTime >= 1.0f) {
                effect->unk5 = 3;
                effect->lifeTime = 0.0f;
            }
            break;
        case 3:
            sp38 = 104.0f;
            alpha = cosf(effect->lifeTime * 1.57078);
            effect->lifeTime += effect->vel.z;
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
                return;
            }
            break;
    }
    SetTextGradientFromPaletteAlpha(17, alpha);
    printUISprite(effect->pos.x, effect->pos.y, 0, 0, 1, sp38, 16.0f, 0, effect->spriteID);
}

void Effect_TypeAK_Init(f32 posX, f32 posY, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAK_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = 0xBD + arg6;
    effect->unk5 = 0;
    effect->pos.x = posX;    
    effect->pos.y = posY;
    effect->vel.x = 1.0f / arg3;
    effect->vel.y = 1.0f / arg4;
    effect->vel.z = 1.0f / (arg5 - arg3 - arg4);
    effect->duration = 1.0f / arg2;
    effect->lifeTime = 0.0f;
}

//battle pause? is it both of them??
const char D_8010CABC[] = "ＰＡＵＳＥ！";
const char D_8010CACC[] = "ＣＡＮＣＥＬ";
const char D_8010CADC[] = "ＳＴＡＧＥ　ＳＥＬＥＣＴ";
const char D_8010CAF8[] = "ＣＯＬＯＲ　ＳＥＬＥＣＴ";
const char D_8010CB14[] = "ＥＸＩＴ";
const char D_8010CB20[] = "ＲＥＴＲＹ";
const char D_8010CB2C[] = "ＳＴＡＧＥ　ＣＨＡＮＧＥ";
const char D_8010CB48[] = "ＣＯＬＯＲ　ＣＨＡＮＧＥ";
const char D_8010CB64[] = "ＥＸＩＴ";

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800714C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/aa1_DrawGameResults.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80071A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80071A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80072310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800723B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007294C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printStageRecordTimes.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80072B1C.s")

void func_80072D34(void) {
    Effect* temp_v0;
    temp_v0 = Effect_Alloc(0, 0, &func_80072B1C);
    if (temp_v0 != NULL) {
        temp_v0->spriteID = 1;
        temp_v0->lifeTime = 0.0f;
        temp_v0->duration = 0.0f;
        PlayBGM(BGM_TRAINING);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80072D80.s")

void func_80073090(void) {
    Effect* temp_v0 = Effect_Alloc(0, 0, &func_80072D80);
    u8 s = 0xFF; 
    if (temp_v0 != 0) {
        D_800F0B54[0] = s;
        temp_v0->spriteID = -1;
        temp_v0->pos.z = 0.0f;
        temp_v0->lifeTime = 0.0f;
        temp_v0->duration = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800730E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/aa1_checkControllerRumble.s")

void checkControllerRumble(void) {
    Effect* temp_v0;
    Effect* var_v1;

    temp_v0 = Effect_Alloc(0, 0, &aa1_checkControllerRumble);
    var_v1 = temp_v0;
    if (temp_v0 == NULL) {
        SetProcessType(GAME_MODE_BOOT);
        var_v1 = temp_v0;
    }
    var_v1->spriteID = 0;
    var_v1->unk5 = 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800735F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80073C3C.s")

void func_80073FD8(void) {
    Effect* temp_v0 = Effect_Alloc(0, 0, &func_80073C3C);
    if (temp_v0 != 0) {
        temp_v0->spriteID = 0;
        temp_v0->pos.x = 0.0f;
        temp_v0->pos.y = 0.0f;
        temp_v0->pos.z = 0.0f;
        temp_v0->lifeTime = 0;
        temp_v0->vel.x = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007402C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800743BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800745F8.s")

void func_800747E0(f32 arg0, f32 arg1, u32 arg2, f32 arg3, f32 arg4, f32 arg5, u32 arg6, u32 arg7, s32 arg8, u32* arg9) {
    Effect* effect;
    f32 var_f0;
    s32 i;
    u8* var_v0;
    Effect_TypeE_Data* data;

    var_v0 = arg7;
    i = 0;
    while (var_v0[0] != 0){
        var_v0 += 2;
        i++;
    }
    if (i != 0) {
        effect = Effect_Alloc(0, 0x24, func_800745F8);
        if (effect != NULL) {
            if (arg2 == 0) {
                var_f0 = -16 - ((f32) i * 16);
            } else {
                var_f0 = 330;
            }
            *arg9 = 1;
            data = effect->data;
            data->dir.x = 1 / arg3;
            data->dir.y = 1 / arg4;
            data->dir.z = (f32) (1 / arg5);
            //cant really match by dereferencing???
            data->colorG = arg9;
            data->colorR = arg6;
            data->colorA = arg7;
            effect->spriteID = arg8;
            effect->unk5 = 0;
            effect->numParts = arg2;
            effect->pos.x = arg0;
            effect->pos.y = arg1;
            effect->vel.x = var_f0;
            effect->vel.z = 1;
            effect->lifeTime = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80074908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80074C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80075414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800755DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80075688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80075918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800759CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80075BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80075CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80075E74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80075F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800762C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007633C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/SetTextGradientFromPaletteAlpha.s")

void SetTextGradientFromPalette(s32 arg0) {
    SetTextGradientFromPaletteAlpha(arg0, 1.0f);
}

void DrawTranslucentRectangle(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4) {
    setPrimColor(0U, 0U, 0U, arg4);
    printUISprite(arg0, arg1, 0.0f, 0.0f, 1.0f, arg2, arg3, 0.0f, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007691C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80076EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800771DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800772E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80077688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/aa1_StageRecordTime.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printStageRecordTime.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80077F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800781A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800786D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078AD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078B5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80078F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80079150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007924C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007941C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800794F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80079820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80079930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80079F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80079FC4.s")

void func_8007A25C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Effect* temp_v0;

    temp_v0 = Effect_Alloc(0, 0, &func_80079FC4);
    if (temp_v0 != NULL) {
        temp_v0->pos.x = arg0;
        temp_v0->pos.y = arg1;
        temp_v0->pos.z = arg2;
        temp_v0->vel.x = arg3;
        temp_v0->lifeTime = 0.0f;
        temp_v0->duration = (f32) (1.0f / arg4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007A2D8.s")

Gfx* func_8007ABDC(Gfx* arg0) {
    return arg0;
}

void func_8007ABE4(void) {
    D_800FEA30 = 0;
    D_800FEA34 = 0;
}

void func_8007ABF8(bf8* arg0) {
    if ((D_800FEA30 > 0) && (D_800FEA30 < 3)) {
        arg0->unk0 = 0;
        arg0->unk2 = 0;
        arg0->unk4 = 0;
        arg0->unk6 = 0;
        arg0->unk8 = 0;
    }
}

void func_8007AC2C(s32* arg0) {
    if ((D_800FEA30 > 0) && (D_800FEA30 < 3)) {
        gPlayerActors->groundMovement = 1;
        *arg0 += 10;
    }
}

// func_8007AC60(Camera* PlayerActor*)
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007AC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007ADDC.s")

void func_8007AF30(void) {
    func_8007ADDC(0);
    LoadSprite(207);
}

void func_8007AF58(void) {
    FreeSprite(207);
    func_8007ADDC(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007AF80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Rumble_Tick.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007B174.s")

void Rumble_StopAll(void) {
    OSPfs* gRumblePfsTemp = gRumblePfs;
    s32 i;
    
    for (i = 0; i < MAXCONTROLLERS; i++) {
        if (D_80176960[i] == 0) {
            continue;
        }

        osMotorStop(&gRumblePfs[i]);
        gUnkRumbleArray[i] = 0;
        D_80176980[i] = 0;
    }
}

void Rumble_AddTime(s32 arg0, s32 arg1) {
    if (D_80176960[arg0] != 0) {
        if (arg1 < 0) {
            osMotorStop(&gRumblePfs[arg0]);
            return;
        }
        gRumbleTime[arg0] += arg1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007B38C.s")

void func_8007B434(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_800FE018 = arg0;
    D_800FE01C = arg1;
    D_800FE020 = arg2;
    D_800FE024 = arg3;
    D_800FE028 = arg4;
    D_800FE02C = arg5;
}

void func_8007B480(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_800FE030 = arg0;
    D_800FE034 = arg1;
    D_800FE038 = arg2;
    D_800FE03C = arg3;
    D_800FE040 = arg4;
    D_800FE044 = arg5;
}

void func_8007B4CC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_800FE048 = arg0;
    D_800FE04C = arg1;
    D_800FE050 = arg2;
    D_800FE054 = arg3;
    D_800FE058 = arg4;
    D_800FE05C = arg5;
}

void func_8007B518(f32 arg0) {
    D_800FE060 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007B524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007BCE0.s")

void func_8007C494(void) {
    gTrainingState = 0;
    gTrainingRoomTimer = 0;
    gTrainingStateTmer = 0;
    D_800FEB98 = 1;
    D_800FEB9C = -1;
}

void func_8007C4C8(void) {
    gTrainingState = 5;
    gTrainingRoomTimer = 0;
    gTrainingStateTmer = 0;
    D_800FEB98 = 1;
    D_800FEB9C = -1;
}

s32 func_8007C500(void) {
    if (gTrainingState == 1) {
        return 1;
    }
    else if (gTrainingState >= 2) {
        return 2;
    }
    else {
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/PrintTimer.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007C7FC.s")

void func_8007CDBC(void) {
    levelFlags[1] = 0;
    levelFlags[2] = 0;
    PlayBGM(BGM_TRAINING);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007CDEC.s")

void func_8007DFDC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {

}
//prints textbox. arg2= char[3][60]*
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printTextbox.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007E5E8.s")

void func_8007E684(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    D_800FEBD4.x = arg0;
    D_800FEBD4.y = arg1;
    D_800FEBD4.z = arg2;
    D_800FEBD4.yaw = arg3;
    D_80176F50 = arg4;
}

void func_8007E6BC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5, u8 arg6) {
    D_800FEBB4 = arg0;
    D_800FEBB8 = arg1;
    D_800FEBBC = arg2;
    D_800FEBC0 = arg3;
    D_800FEBC4 = arg4;
    D_800FEBC8 = arg5;
    D_800FEBCC = arg6;
}

void func_8007E714(f32 arg0) {
    D_800FEBD0 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007E720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printNumber.s")

//prints number at (x,y) on screen, turns red if negative.
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/PrintNumberWR.s")

//another "print number on screen" func,exclusive to bowling score card
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/PrintNumberBowling.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007FB60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080318.s")

void PrintTextWrapper(f32 arg0, f32 arg1, f32 arg2, f32 arg3, char* txt, s32 font) {
    PrintText(arg0, arg1, arg2, arg3, 0.0f, 0.0f, txt, font);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/PrintText.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8008265C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80082714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800836FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80083B28.s")

void func_80083F08(void) {
}

void func_80083F10(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80083F18.s")

void func_80084788(void) {
    D_800F6880 = 0;
    func_80055C04();
    func_8007AF80();
    func_8007C494();
    D_800FEA18 = 0.0f;
    D_800FEA1C = 0.0f;
    D_80176B70 = gTongues;
    D_80176B74 = gPlayerActors;
    D_80176B78 = gCamera;
    if ((gGameModeCurrent == 0) && (D_80168DA0 == 1)) {
        Effect_HealthBar_Init(0x10, 0x10, &gPlayerActors[0].hp, &D_800FEDB8, gPlayerActors[0].hp, 0);
        func_800634D4(0xF0, 0x10, &currentStageCrowns, &D_800FEDB8, 2, 0);
    }
    D_800FEDB4 = 1;
    ResetEyeParams();
    func_800667A8();
}

Gfx* func_80084884(Gfx* arg0) {
    if (gCurrentStage == 8) {
        func_8007CDEC();
    }
    if ((D_80168DA0 == 1) && (D_800FEDB4 == 1) && (D_80236974 == 0) && (gGameModeCurrent == 0)) {
        if ((u32)D_80176B78->unk0 == 1) {
            func_800612F0(1);
            printUISprite(24.0f, 208.0f, 0.0f, 0.0f, 1.0f, 24.0f, 16.0f, 0.0f, 0xCC);
        } else {
            func_800612F0(0);
            printUISprite(24.0f, 208.0f, 0.0f, 0.0f, 1.0f, 24.0f, 16.0f, 0.0f, 0xCC);
        }
    }
    func_80069734();
    Rumble_Tick();
    Effect_UpdateAll(&arg0);
    return arg0;
}

Gfx* func_800849D4(Gfx* arg0) {
    return arg0;
}

void func_800849DC(s32 arg0, Tongue* playerTongue, PlayerActor* player, Camera* cam) {
    func_80056F48(arg0, playerTongue, player, cam);
    D_800F6880 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80084A04.s")
