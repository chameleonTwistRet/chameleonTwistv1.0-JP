#include "common.h"

void osMotorStop(OSPfs *pfs);
extern s32 D_80176960[];
extern OSPfs gRumblePfs[];
extern s32 gRumbleTime[];

typedef struct SpriteListing {
    char unk_00[4];
    void* bitmapP; // "malloc'd" after size calc.
    void* palletteP; //palette? both this and above start with devAddr+0XD73D960
    s32 type; // use "COLORMODE_*" enum
    void* unk10;
    u8 unk14;
    u8 tileCountX;
    u8 tileCountY;
    char unk17[3]; //align?
    u16 height; // height of each tile
    u16 width; // width of each tile
    u16 unk1E;
    char unk20[0x48]; //repeating substruct? has 5 feilds of color32
    s32 bitmapRom; //devAddr-0x8c26a0
    s32 paletteRom;
    s32 unk70;
    char unk_74[4];
} SpriteListing; //sizeof 0x78

extern SpriteListing gSpriteListings[230];
extern char D_8010CA1C[];
extern char D_8010CA54[];
extern Addr D_8C26A0;
extern unkStruct02* D_80176F4C;

void func_80055C04(void);
void func_80062D10(s32, s32, s32*, s32*, u32, s32);
void func_800634D4(s32, s32, s32*, s32*, s32, s32);
void func_8007AF80(void);
void resetEyeParams(void);
extern f32 D_800FEA18;
extern f32 D_800FEA1C;
extern u32 D_800FEDB4;
extern s32 D_800FEDB8;
extern Tongue* D_80176B70;
extern PlayerActor* D_80176B74;
extern Camera* D_80176B78;
extern s32 currentStageCrowns;
void Rumble_Tick(void);
void func_800615D4(s32*);
void func_80069734(void);
void func_8007CDEC(void);

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

void func_80055C74(void) {
    D_800F68A8 = 0;
}

void func_80055C80(void) {
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
void Controller_ParseJoystick(contMain* conts) {
    s32 i;
    f32 sqX,sqY;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        gPrevButtons[i] = gButtons[i];
        gButtons[i] = conts[i].buttons0;
        sqX=SQ(conts[i].stickx);
        sqY=SQ(conts[i].sticky);
        if (__sqrtf(sqX + sqY) > 42.0) {
            if (conts[i].stickx < -30) {
                gButtons[i] |= CONT_LEFT;
            } else if (conts[i].stickx > 30) {
                gButtons[i] |= CONT_RIGHT;
            }
            if (conts[i].sticky < -30) {
                gButtons[i] |= CONT_DOWN;
            } else if (conts[i].sticky > 30) {
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
void func_80055EEC(s32 arg0) {
    func_80055F10(0, arg0);
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


void* mallloc(s32 arg0) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056F48.s")

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
        dmaSize = temp_s1->height * 4 * temp_s1->width * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 6:
        dmaSize = temp_s1->height * 2 * temp_s1->width * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 2:
    case 5:
        dmaSize = temp_s1->height * temp_s1->width * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 0:
    case 1:
    case 4:
        dmaSize = (s32) (temp_s1->height * temp_s1->width * temp_s1->tileCountX * temp_s1->tileCountY) / 2;
        break;
    }
    
    if (temp_s1->bitmapRom == NULL) {
        temp_s1->bitmapRom = (s32)temp_s1->bitmapP;
    }
    
    if (temp_s1->paletteRom == NULL) {
        temp_s1->paletteRom = (s32)temp_s1->palletteP;
    }
    
    temp_s1->bitmapP = mallloc(dmaSize);
    
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
        temp_s1->palletteP = mallloc(0x200);
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/freeSprite.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005747C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80057A68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80058044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80058748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80058BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80059254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800598C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80059F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005A7CC.s")

void func_8005AFA4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    printReset();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printUISprite.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005B874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C04C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C6FC.s")

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

//jumptable
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005CA44.s")
//jumptable
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005F408.s")

void func_800610A8(void) {
    D_800FE000 = 1;
}

void func_800610B8(void) {
    D_800FE000 = 0;
    printReset();
    func_8007E5E8();
}

void func_800610E4(f32 arg0, f32 arg1) {
    D_800FDFE0 = (s8) (u32) arg0;
    D_800FDFE4 = (s8) (u32) arg1;
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
    gTextGradient[4] = arg4;
    gTextGradient[5] = arg5;
    gTextGradient[0] = arg0;
    gTextGradient[1] = arg1;
    gTextGradient[2] = arg2;
    gTextGradient[3] = arg3;
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
//start of functions using "aa1" struct.
void func_800613D0(aa1* arg0) {
    arg0->unk4 = 0;
    arg0->unk_3C = NULL;
    arg0->previous = NULL;
    arg0->next = NULL;
    arg0->unkC = 0.0f;
}

aa1* aa1_Alloc(s32 arg0, s32 arg1, void* arg2) {
    aa1* var_a1;
    aa1* temp_v0;
    
    temp_v0 = mallloc(0x48);
    var_a1 = temp_v0;
    
    if (temp_v0 == NULL) {
        return NULL;
    }
    
    if (arg0 != 0) {
        var_a1->unk_3C = mallloc(arg0 * 0x28);
        if (var_a1->unk_3C == NULL) {
            Free(var_a1);
            return NULL;
        }        
    } else {
        temp_v0->unk_3C = 0;
    }
    
    if (arg1 != 0) {
        var_a1->unk_38 = mallloc(arg1);
        if (var_a1->unk_38 == NULL) {
            Free(var_a1);
            Free(var_a1->unk_3C);
            return NULL;
        }        
    } else {
        var_a1->unk_38 = NULL;
    }
    
    if (g_aa1_head->next != NULL) {
        g_aa1_head->next->previous = var_a1;
    }
    
    var_a1->unk4 = arg0;
    var_a1->unkC = 0.0f;
    var_a1->unk34 = arg2;
    var_a1->previous = g_aa1_head;
    var_a1->next = g_aa1_head->next;
    g_aa1_head->next = var_a1;
    g_aa1_head = var_a1;
    g_aa1_Count++;
    return var_a1;
}

void aa1_Free(aa1* arg0) {
    aa1* temp_v0 = arg0->previous;
    if (temp_v0 != NULL) {
        temp_v0->next = arg0->next;
    }
    if (arg0->next != NULL) {
        arg0->next->previous = arg0->previous;
    }
    if (arg0 == g_aa1_head) {
        g_aa1_head = arg0->previous;
    }
    Free(arg0->unk_3C);
    Free(arg0->unk_38);
    Free(arg0);
    g_aa1_Count -= 1;
}

void aa1_InitHead(void) {
    g_aa1_head = &D_80176F00;
    func_800613D0(g_aa1_head);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800615D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80061640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800619F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80061D10.s")

void func_8006202C(void) {
    D_800FE160 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80062038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800620C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80062588.s")

typedef struct unkStructTemp {
    char unk_00[4];
    s32 unk4;
    char unk_08[4];
    f32 unkC;
} unkStructTemp;

void func_8006266C(d8006266c* arg0) {
    unkStructTemp* temp_v0;
    
    temp_v0 = (unkStructTemp*)arg0->unk_38;
    temp_v0->unk4 = 1;
    temp_v0->unkC = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80062684.s")

void func_800629C4(void) {
    D_800FE164 = 1;
}

void func_800629D4(void) {
    D_800FE164 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/aa1_HealthBar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80062D10.s")

extern char D_8010CA80[];
extern char D_8010CA84[];

void func_80062E18(aa1* arg0) {
    s32** temp_t7;

    temp_t7 = arg0->unk_38;
    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    printNumber(264.0f, 16.0f, 0.0f, 1.0f, (f32) **temp_t7, 2, 0);
    printUISprite(232.0f, 16.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, 18);
    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    PrintText(254.0f, 20.0f, 0.0f, 1.0f, 8.0f, 8.0f, "Ｘ", 1);
    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    printNumber(264.0f, 36.0f, 0.0f, 1.0f, (f32) gTotalCarrots, 2, 0);
    printUISprite(232.0f, 36.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, 26);
    SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
    PrintText(254.0f, 40.0f, 0.0f, 1.0f, 8.0f, 8.0f, "Ｘ", 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80063160.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800634D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800635DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800638AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80063B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800647B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80064BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80064D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80064F94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065088.s")

aa1* func_8006526C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9) {
    aa1* temp_v0;
    d8006266c* temp_v1;

    temp_v0 = aa1_Alloc(0, 24, &func_80065088);
    if (temp_v0 == NULL) {
        return temp_v0;
    }
    temp_v1 = temp_v0->unk_38;
    temp_v1->unk0 = arg6;
    temp_v1->unk4 = arg7;
    temp_v1->unk8 = (s32) D_800FE18C;
    temp_v1->unkC = (s32) D_800FE190;
    temp_v1->unk_10 = (s32) D_800FE194;
    temp_v1->unk_14 = (s32) D_800FE198;
    temp_v0->unk_10 = arg0;
    temp_v0->unk_14 = arg1;
    temp_v0->unk_18 = arg2;
    temp_v0->unk_1C = arg3;
    temp_v0->unk_20 = arg4;
    temp_v0->unk_24 = arg5;
    temp_v0->unk0 = arg9;
    temp_v0->unk_30 = (f32) arg8;
    temp_v0->unkC = 0.0f;
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800654B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006578C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065B84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065C00.s")

aa1* func_80065CAC(f32 arg0) {
    aa1* temp_v0 = aa1_Alloc(0, 0, &func_80065C00);

    if (temp_v0 == NULL) {
        return temp_v0;
    }

    temp_v0->unkC = 0.0f;
    temp_v0->unk_30 = arg0;
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80065F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80066020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800661A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006623C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800662D4.s")

//https://decomp.me/scratch/eFSCQ
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80066374.s")

//https://decomp.me/scratch/xl76w
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800664E8.s")

//https://decomp.me/scratch/Jy8t4
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800665F0.s")

void func_800667A8(void) {
    D_800FE19C = 0;
}

void func_800667B4(aa1* arg0) {
    arg0->unk_1C = 1.0f;
}

void func_800667C4(aa1*arg0, s32 arg1) {
    arg0->unk5 = (s8) arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800667CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800674B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800675D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800678EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800679DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80067CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80067DE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006854C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006863C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80069734.s")

void func_80069858(aa1* arg0, s32 arg1) {
    func_80069858_temp_v0* temp_v0 = arg0->unk_38;
    if (func_800836FC(temp_v0->unk0, temp_v0->unk4, temp_v0->unk8, temp_v0->unkC) == 1) {
        aa1_Free(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800698A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80069918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006A134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006A69C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_ResetScore.s")

void Bowling_CountPins(s32* pinsRemaining) {
    s32 i;
    s32 pinCount;
    
    for (i = 0, pinCount = 0; i < ACTORS_MAX; i++){
        if (gActors[i].actorID == BOWLING_PINS) {
            pinCount++;
        }
    }
    *pinsRemaining = 10 - pinCount;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_UpdateScore.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printBowlingScore.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_DrawScoreCard.s")

typedef struct UnkBowlingStruct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ char unk_08[0x04];
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28*/ s32 UNK_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ void* unk34;
    /* 0x38 */ void* unk_38; // this struct varies widely
    /* 0x3C */ d8006266c* unk_3C;
    /* 0x40 */ struct aa1* previous;
    /* 0x44 */ struct aa1* next;
} UnkBowlingStruct; //sizeof 0x48

void aa1_Bowling(f32 arg0, s32 arg1, s32 arg2) {
    aa1* temp_v0 = aa1_Alloc(0, 8, Bowling_DrawScoreCard);
    UnkBowlingStruct* temp_v1;
    if (temp_v0 != 0) {
        temp_v1 = temp_v0->unk_38;
        temp_v0->unkC = 0.0f;
        temp_v0->unk_30 = arg0;
        temp_v1->unk_00 = arg1;
        temp_v1->unk_04 = arg2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/resetEyeParams.s")

void lockEyeChange(void) {
    gDontChangeEyes = 1;
}

void unlockEyeChange(void) {
    gDontChangeEyes = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BA30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BD58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BE4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C0D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C7F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C8C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006CA88.s")

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
        freeSprite(var_s0);
        var_s0 += 1;
    }
    gLockContextEyes = 255;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/setEyeTexture.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/setPlayerEyes.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/aa1_PlayerEyeControl.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/initPlayerEyeController.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/SetPlayerContextEyes.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/aa1_BossDeadEyes.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/loadBossDeadEyes.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/setBossDeadEyes.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006D844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006DAE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006DB80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006DCC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006DDCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006DE58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006E0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006E16C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006E3A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006E888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006E9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006EBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006EC84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006EF24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F43C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F9B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006FC30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006FD14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006FE7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80070014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80070134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800703C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800704A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800705C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007068C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80070970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80070A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80070C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80070D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80070F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007101C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007120C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80071420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CAF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CB14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CB20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CB48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/D_8010CB64.s")

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
    aa1* temp_v0;
    temp_v0 = aa1_Alloc(0, 0, &func_80072B1C);
    if (temp_v0 != NULL) {
        temp_v0->unk0 = 1;
        temp_v0->unkC = 0.0f;
        temp_v0->unk_30 = 0.0f;
        PlayBGM(BGM_TRAINING);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80072D80.s")

void func_80073090(void) {
    aa1* temp_v0 = aa1_Alloc(0, 0, &func_80072D80);
    u8 s = 0xFF; 
    if (temp_v0 != 0) {
        D_800F0B54 = s;
        temp_v0->unk0 = -1;
        temp_v0->unk_18 = 0.0f;
        temp_v0->unkC = 0.0f;
        temp_v0->unk_30 = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800730E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/aa1_checkControllerRumble.s")

void checkControllerRumble(void) {
    aa1* temp_v0;
    aa1* var_v1;

    temp_v0 = aa1_Alloc(0, 0, &aa1_checkControllerRumble);
    var_v1 = temp_v0;
    if (temp_v0 == NULL) {
        SetProcessType(GAME_MODE_BOOT);
        var_v1 = temp_v0;
    }
    var_v1->unk0 = 0;
    var_v1->unk5 = 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800735F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80073C3C.s")

void func_80073FD8(void) {
    aa1* temp_v0 = aa1_Alloc(0, 0, &func_80073C3C);
    if (temp_v0 != 0) {
        temp_v0->unk0 = 0;
        temp_v0->unk_10 = 0.0f;
        temp_v0->unk_14 = 0.0f;
        temp_v0->unk_18 = 0.0f;
        temp_v0->unkC = 0;
        temp_v0->unk_1C = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007402C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800743BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800745F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800747E0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/DrawTranslucentRectangle.s")

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
    aa1* temp_v0;

    temp_v0 = aa1_Alloc(0, 0, &func_80079FC4);
    if (temp_v0 != NULL) {
        temp_v0->unk_10 = arg0;
        temp_v0->unk_14 = arg1;
        temp_v0->unk_18 = arg2;
        temp_v0->unk_1C = arg3;
        temp_v0->unkC = 0.0f;
        temp_v0->unk_30 = (f32) (1.0f / arg4);
    }
}

//jumptable
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007A2D8.s")

s32 func_8007ABDC(s32 arg0) {
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
    freeSprite(207);
    func_8007ADDC(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007AF80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Rumble_Tick.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007B174.s")

extern s32 D_80176960[];
extern s32 D_80176980[];
extern OSPfs gRumblePfs[];
extern s32 gUnkRumbleArray[];
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
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printNumberWR.s")

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
    if ((gameModeCurrent == 0) && (D_80168DA0 == 1)) {
        func_80062D10(0x10, 0x10, &gPlayerActors[0].hp, &D_800FEDB8, gPlayerActors[0].hp, 0);
        func_800634D4(0xF0, 0x10, &currentStageCrowns, &D_800FEDB8, 2, 0);
    }
    D_800FEDB4 = 1;
    resetEyeParams();
    func_800667A8();
}

s32 func_80084884(s32 arg0) {
    if (gCurrentStage == 8) {
        func_8007CDEC();
    }
    if ((D_80168DA0 == 1) && (D_800FEDB4 == 1) && (D_80236974 == 0) && (gameModeCurrent == 0)) {
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
    func_800615D4(&arg0);
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
