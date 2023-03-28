#include "common.h"

typedef struct unk800F73C8 {
    char unk_00[4];
    void* vAddr; // "malloc'd" after size calc.
    s32 unk8;
    s32 type; // data type? image format?
    void* unk10;
    u8 unk14;
    u8 unk15; //these two are multi'd with height and width to get size
    u8 unk16;
    char unk17[3]; //align?
    u16 height; // entry 0 is 320
    u16 width; // entry 0 is 240
    u16 unk1E;
    char unk20[0x48];
    s32 romOffset; //devAddr-0x8c26a0
    s32 unk6C;
    s32 unk70;
    char unk_74[8];
} unk800F73C8; //sizeof 0x78

typedef struct unk80174880 {
/* 0x00 */ s32 unk_00[4];
/* 0x10 */ char unk_10[0x18];
/* 0x28 */ s32 unk_28[4];
/* 0x38 */ char unk_38[0x18];
/* 0x50 */ s32 unk_50[4];
/* 0x60 */ char unk_60[0x18];
/* 0x78 */ s32 unk_78;
/* 0x7C */ s32 unk_7C;
} unk80174880;

extern unk80174880 D_80174880[];
extern unk800F73C8 D_800F73C8[230];
extern char D_8010CA1C[];
extern char D_8010CA54[];
extern Addr D_8C26A0;
extern unkStruct02* D_80176F4C;

void DummiedPrintf2(char* arg0, ...) {

}

void Rand_SetSeed(s32 arg0) {
    rngSeed = arg0;
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
    
    for (i = 0; i < 4; i++) {
        D_800F6888[i] = -1;
        D_800F6898[i] = -1;
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
// simplify joystick movement to d-pad equivalent
void Controller_ParseJoystick(contMain* arg0) {
    s32 i;
    f32 f0,f1;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_800F6888[i] = D_800F6898[i];
        D_800F6898[i] = arg0[i].buttons0;
        f0=SQ(arg0[i].stickx);
        f1=SQ(arg0[i].sticky);
        if (__sqrtf(f0 + f1) > 42.0) {
            if (arg0[i].stickx < -30) {
                D_800F6898[i] |= CONT_LEFT;
            } else if (arg0[i].stickx > 30) {
                D_800F6898[i] |= CONT_RIGHT;
            }
            if (arg0[i].sticky < -30) {
                D_800F6898[i] |= CONT_DOWN;
            } else if (arg0[i].sticky > 30) {
                D_800F6898[i] |= CONT_UP;
            }
        }

        if (D_800F68A8 == NULL) {
            if (((s32)gPlayerActors[i].active > 0)) { //cast required
                if (gPlayerActors[i].exists > 0) {
                    Controller_Zero(&arg0[i]);
                }
            }
        }
    }
}

//https://decomp.me/scratch/rzD9G
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055E5C.s")

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

//https://decomp.me/scratch/R8dqR
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055FD8.s")


#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056064.s")

//angle wrapper
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005609C.s")

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
                leoDrive_reset(var_a2->next + 1); //incorrect function name?
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

// Seems incorrectly named
// s32 leoDrive_reset(void);
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/leoDrive_reset.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056EB4.s")
// void func_80056EB4(void) {
//     func_80056CDC(D_801191A0, (D_801FFB78 - D_801191A0));
// }

//likely Malloc or equivalent
void* func_80056EE4(s32 arg0) {
    void* temp_v0 = func_80056D30(arg0);
    
    if (temp_v0 == NULL) {
        DummiedPrintf2(D_8010CA10);
    }

    return temp_v0;
}
//likely Free or equivalent
s32 func_80056F24(void* arg0) {
    leoDrive_reset(arg0);
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056F48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80057010.s")
// s32 func_80057010(s32 arg0) {
//     s32 dmaSize;
//     s32 dmaResult;
//     unk800F73C8* temp_s1;

//     temp_s1 = &D_800F73C8[arg0];
//     if ((temp_s1->unkC == 8) || (arg0 < 0) || (arg0 >= 0xE6)) {
//         return 0;
//     }
//     switch (temp_s1->unkC) {
//     case 7:
//         dmaSize = temp_s1->unk1A * 4 * temp_s1->unk1C * temp_s1->unk15 * temp_s1->unk16;
//         break;
//     case 6:
//         dmaSize = temp_s1->unk1A * 2 * temp_s1->unk1C * temp_s1->unk15 * temp_s1->unk16;
//         break;
//     case 2:
//     case 5:
//         dmaSize = temp_s1->unk1A * temp_s1->unk1C * temp_s1->unk15 * temp_s1->unk16;
//         break;
//     case 0:
//     case 1:
//     case 4:
//         dmaSize = (s32) (temp_s1->unk1A * temp_s1->unk1C * temp_s1->unk15 * temp_s1->unk16) / 2;
//         break;
//     }
    
//     if (temp_s1->unk68 == NULL) {
//         temp_s1->unk68 = (void* ) temp_s1->unk4;
//     }
    
//     if (temp_s1->unk6C == NULL) {
//         temp_s1->unk6C = (void* ) temp_s1->unk8;
//     }
    
//     temp_s1->unk4 = func_80056EE4(dmaSize);
    
//     if (temp_s1->unk4 == NULL) {
//         DummiedPrintf2(D_8010CA1C, dmaSize, arg0);
//         return -1;
//     }
    
//     dmaResult = dma_copy(&D_8C26A0[temp_s1->unk68 & 0xFFFFFF], temp_s1->unk4, dmaSize);

//     while (dmaResult < 0) {
//         dmaResult = dma_copy(&D_8C26A0[temp_s1->unk68 & 0xFFFFFF], temp_s1->unk4, dmaSize);
//     }
    
//     while (func_800A72E8(dmaResult) == 0);
    
//     if ((temp_s1->unkC == 4) || (temp_s1->unkC == 5)) {
//         temp_s1->unk8 = func_80056EE4(0x200);
//         if (temp_s1->unk8 == NULL) {
//             DummiedPrintf2(D_8010CA54, 0x200);
//             func_80056F24(temp_s1->unk4);
//             return -1;
//         }
        
//         dmaResult = dma_copy(&D_8C26A0[temp_s1->unk6C & 0xFFFFFF], temp_s1->unk8, 0x200);

//         while (dmaResult < 0) {
//             dmaResult = dma_copy(&D_8C26A0[temp_s1->unk6C & 0xFFFFFF], temp_s1->unk8, 0x200);
//         }
        
//         while (func_800A72E8(dmaResult) == 0);
//     }
//     return 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80057334.s")

void func_800573BC(void) {
    s32 i;

    if (D_800FE000 == 0) {
        D_800FDFFC = 0.0f;
        D_800FDFD0 = -1;
        D_800FDFD4 = -1;
        D_800FDFD8 = -1;
        D_800FDFDC = -1;
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
            D_80176850[i] = -1;
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
    func_800573BC();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005AFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005B874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C04C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C6FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C9B8.s")

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
    func_800573BC();
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

void func_80061270(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_800FDFD0 = arg0;
    D_800FDFD4 = arg1;
    D_800FDFD8 = arg2;
    D_800FDFDC = arg3;
}

void func_800612A4(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    D_800FDFD0 = arg0;
    D_800FDFD4 = arg1;
    D_800FDFD8 = arg2;
    D_800FDFDC = arg3;
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

void func_80061308(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, u8 argC, u8 argD, u8 argE, u8 argF) {
    D_80176850[4] = arg4;
    D_80176850[5] = arg5;
    D_80176850[0] = arg0;
    D_80176850[1] = arg1;
    D_80176850[2] = arg2;
    D_80176850[3] = arg3;
    D_80176850[6] = arg6;
    D_80176850[7] = arg7;
    D_80176850[8] = arg8;
    D_80176850[9] = arg9;
    D_80176850[0xA] = argA;
    D_80176850[0xB] = argB;
    D_80176850[0xC] = argC;
    D_80176850[0xD] = argD;
    D_80176850[0xE] = argE;
    D_80176850[0xF] = argF;
}

void func_80061394(void) {
    D_800FDFC0[0] = 0;
    D_800FDFC0[1] = 0;
    D_800FDFC8[0] = 0;
    D_800FDFC8[1] = 0;
    func_800573BC();
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
    
    temp_v0 = func_80056EE4(0x48);
    var_a1 = temp_v0;
    
    if (temp_v0 == NULL) {
        return NULL;
    }
    
    if (arg0 != 0) {
        var_a1->unk_3C = func_80056EE4(arg0 * 0x28);
        if (var_a1->unk_3C == NULL) {
            func_80056F24(var_a1);
            return NULL;
        }        
    } else {
        temp_v0->unk_3C = 0;
    }
    
    if (arg1 != 0) {
        var_a1->unk_38 = func_80056EE4(arg1);
        if (var_a1->unk_38 == NULL) {
            func_80056F24(var_a1);
            func_80056F24(var_a1->unk_3C);
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
    func_80056F24(arg0->unk_3C);
    func_80056F24(arg0->unk_38);
    func_80056F24(arg0);
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

void func_8006266C(d8006266c* arg0) {
    d8006266c* temp_v0;
    
    temp_v0 = arg0->unk_38;
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800629E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80062D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80062E18.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006526C.s")
/*
aa1* func_8006526C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9) {
    aa1* temp_v0;
    d8006266c* temp_v1;

    temp_v0 = aa1_Alloc(0, 24, &func_80065088);
    if (temp_v0 == NULL) {
        return temp_v0;
    }
    temp_v1 = temp_v0->unk38;
    temp_v1->unk0 = arg6;
    temp_v1->unk4 = arg7;
    temp_v1->unk8 = (s32) D_800FE18C;
    temp_v1->unkC = (s32) D_800FE190;
    temp_v1->unk10 = (s32) D_800FE194;
    temp_v1->unk14 = (s32) D_800FE198;
    temp_v0->unk_10 = arg0;
    temp_v0->unk_14 = arg1;
    temp_v0->unk_18 = arg2;
    temp_v0->unk_1C = arg3;
    temp_v0->unk_20 = arg4;
    temp_v0->unk_24 = arg5;
    temp_v0->unk0 = arg9;
    temp_v0->unk30 = (f32) arg8;
    temp_v0->unkC = 0.0f;
    return temp_v0;
}*/

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

void func_800667C4(s8 arg0[5], s32 arg1) {
    arg0[5] = (s8) arg1;
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006A74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006A7B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006A824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006AA3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006AD34.s")

void func_8006B96C(f32 arg0, s32 arg1, s32 arg2) {
    aa1* temp_v0 = aa1_Alloc(0, 8, func_8006AD34);
    d8006266c* temp_v1;
    if (temp_v0 != 0) {
        temp_v1 = temp_v0->unk_38;
        temp_v0->unkC = 0.0f;
        temp_v0->unk_30 = arg0;
        temp_v1->unk0 = arg1;
        temp_v1->unk4 = arg2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006B9D0.s")

void func_8006BA14(void) {
    D_800FE4DC = 1;
}

void func_8006BA24(void) {
    D_800FE4DC = 0;
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

void func_8006CB34(s32 arg0) {
    s32 i;
    s32 var_s0 = (arg0 * 10) + 114;
    
    for(i = 0; i != 10; i++){
        D_800FE6EC = func_80057010(var_s0);
        if ((D_800FE6EC) > 0) {
            break;
        }
        var_s0 += 1;
    }
}

void func_8006CBA8(s32 arg0) {
    s32 i;
    s32 var_s0 = (arg0 * 10) + 114;

    for(i = 0; i != 10; i++){
        func_80057334(var_s0);
        var_s0 += 1;
    }
    D_800FE6EC = 255;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006CC0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006CCB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006CEEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006D2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006D598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006D60C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006D688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006D70C.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800714C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80071968.s")

//prints perfect code
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80071A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80071A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80072310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800723B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007294C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800729E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80072B1C.s")

void func_80072D34(void) {
    aa1* temp_v0;
    temp_v0 = aa1_Alloc(0, 0, &func_80072B1C);
    if (temp_v0 != NULL) {
        temp_v0->unk0 = 1;
        temp_v0->unkC = 0.0f;
        temp_v0->unk_30 = 0.0f;
        playBGM(23);
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007320C.s")

void func_800735A8(void) {
    aa1* temp_v0;
    aa1* var_v1;

    temp_v0 = aa1_Alloc(0, 0, &func_8007320C);
    var_v1 = temp_v0;
    if (temp_v0 == NULL) {
        func_8008FD04(0x12);
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80076548.s")

void func_80076884(s32 arg0) {
    func_80076548(arg0, 1.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800768A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007691C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80076EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800771DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800772E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80077688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80077A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80077CAC.s")

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
        D_80168E5C = 1;
        *arg0 += 10;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007AC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007ADDC.s")

void func_8007AF30(void) {
    func_8007ADDC(0);
    func_80057010(207);
}

void func_8007AF58(void) {
    func_80057334(207);
    func_8007ADDC(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007AF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Rumble_Tick.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007B174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Rumble_StopAll.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Rumble_AddTime.s")

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
    D_800FEA4C = 0;
    D_800FEB90 = 0;
    D_800FEB94 = 0;
    D_800FEB98 = 1;
    D_800FEB9C = -1;
}

void func_8007C4C8(void) {
    D_800FEA4C = 5;
    D_800FEB90 = 0;
    D_800FEB94 = 0;
    D_800FEB98 = 1;
    D_800FEB9C = -1;
}

s32 func_8007C500(void) {
    if (D_800FEA4C == 1) {
        return 1;
    }
    else if (D_800FEA4C >= 2) {
        return 2;
    }
    else {
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007C538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007C7FC.s")

void func_8007CDBC(void) {
    D_80174880->unk_00[1] = 0;
    D_80174880->unk_00[2] = 0;
    playBGM(23);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007CDEC.s")

void func_8007DFDC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007DFF0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007EBE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007F0D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007F974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007FB60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080318.s")

void PrintTextWrapper(f32 arg0, f32 arg1, f32 arg2, f32 arg3, char* arg4, s32 arg5) {
    PrintText(arg0, arg1, arg2, arg3, 0.0f, 0.0f, arg4, arg5);
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

//https://decomp.me/scratch/s5GL7
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80084788.s")

//https://decomp.me/scratch/tLaoO
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80084884.s")

s32 func_800849D4(s32 arg0) {
    return arg0;
}

void func_800849DC(s32 arg0, Tongue* playerTongue, playerActor* player, Camera* cam) {
    func_80056F48(arg0, playerTongue, player, cam);
    D_800F6880 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80084A04.s")
