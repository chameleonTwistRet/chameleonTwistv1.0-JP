#include "common.h"

s32 func_800AF2A4(f32, f32, f32, f32, s32);
void func_800AEEC0(unk8016AA98*, f32, f32);
void func_800D8338(Vec3f arg0, f32* arg3, f32* arg4, f32* arg5);
void func_800D747C(f32*);

extern char D_8010F990[];
extern Vec3f D_802018B0;

extern f64 D_8010F9C8;
extern f32 D_802018BC;
extern f32 D_802018C0;
extern f32 D_802018C4;
extern f32 D_802018C8;
extern f32 D_802018CC;
extern s32 D_802018D0;
extern s32 D_802018D4;
extern f32 D_802018F0;

// https://decomp.me/scratch/p2Zlj
#ifdef NON_MATCHING
void func_800AEEC0(unk8016AA98* arg0, f32 arg1, f32 arg2) {
    Vec3f sp50;
    Vec3f sp5C;
    Vec3f sp44;
    Vec3f sp38;
    f32 var_f12;
    Vec3f sp28;

    f32 var_f2;
    f32 temp_f2_2;

    sp50.x = arg0->unk34.x;
    sp50.y = arg0->unk34.y;
    sp50.z = arg0->unk34.z;
    
    sp5C.x = arg0->unk28;
    sp5C.y = arg0->unk2C;
    sp5C.z = arg0->unk30;
    
    sp44.x = sp50.x - sp5C.x;
    sp44.y = sp50.y - sp5C.y;
    sp44.z = sp50.z - sp5C.z;

    func_800D81B0(&sp44);
    
    if (sp44.x == 0.0 && sp44.y == 0.0 && sp44.z == 0.0) {
        func_800D7460(D_8010F990);
        return;
    }
    sp38.x = sp5C.x - sp50.x;
    sp38.z = sp5C.z - sp50.z;
    sp38.y = sp5C.y - sp50.y;
    
    func_800D8338(sp38, &sp28.z, &sp28.y, &sp28.x);
    if (sp28.y < D_8010F9C8) { //D_8010F9C8 = 45.0
        D_802018D4 = 1;
    } else {
        D_802018D4 = 0;
    }
    
    func_800D8338(sp44, &sp28.z, &sp28.y, &sp28.x);
    sp38 = sp44;

    sp38.x = sp38.x * arg2;
    sp38.y = sp38.y * arg2;
    sp38.z = sp38.z * arg2;
    
    D_802018B0.x = sp5C.x - sp38.x;
    D_802018B0.y = sp5C.y - sp38.y;
    D_802018B0.z = sp5C.z - sp38.z;
    temp_f2_2 = func_800C8C14(sp44.z, sp44.x);
    D_802018C8 = (temp_f2_2 - arg1 * 0.5);
    D_802018CC = (temp_f2_2 + arg1 * 0.5);
    
    func_800D747C(&D_802018C8);
    func_800D747C(&D_802018CC);
    
    if (D_802018CC < D_802018C8) {
        D_802018D0 = 1;
    } else {
        D_802018D0 = 0;
    }
    
    if (sp44.x < 0.0f) {
        var_f2 = -sp44.x;
    } else {
        var_f2 = sp44.x;
    }
    
    if (sp44.y < 0.0f) {
        var_f12 = -sp44.y;
    } else {
        var_f12 = sp44.y;
    }
    
    if (var_f2 < var_f12) {
        if (sp44.y < 0.0f) {
            var_f2 = -sp44.y;
        } else {
            var_f2 = sp44.y;
        }
    }
    
    if (sp44.z < 0.0f) {
        var_f12 = -sp44.z;
    } else {
        var_f12 = sp44.z;
    }
    
    if (var_f2 < var_f12) {
        if (sp44.z < 0.0f) {
            var_f2 = -sp44.z;
        } else {
            var_f2 = sp44.z;
        }
    }
    
    D_802018BC = sp44.x / var_f2;
    D_802018C0 = sp44.y / var_f2;
    D_802018C4 = sp44.z / var_f2;
    D_802018F0 = -1.0f;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/8A2C0/func_800AEEC0.s")
#endif


void func_800AF260(unk8016AA98* arg0, f32 arg1) {
    func_800AEEC0(arg0, (arg1 + 20.0), 300.0f);
}

typedef struct unk802018D8 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk802018D8;

extern f32 D_802018BC;
extern f32 D_802018C0;
extern f32 D_802018C4;
extern f32 D_802018C8;
extern f32 D_802018CC;
extern s32 D_802018D0;
extern s32 D_802018D4;
extern unk802018D8 D_802018D8;
extern f32 D_802018F0;

s32 func_800AF2A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    f32 temp_f0_2;
    f64 temp_f0;

    if (arg3 != D_802018F0) {
        D_802018F0 = arg3;
        temp_f0 = (f64) (f32) ((f64) arg3 * 0.5);
        D_802018D8.unk_00 = (f32) (D_802018B0.x + ((D_802018BC - 1.0) * temp_f0));
        D_802018D8.unk_04 = (f32) (D_802018B0.y + ((D_802018C0 - 1.0) * temp_f0));
        D_802018D8.unk_08 = (f32) (D_802018B0.z + ((D_802018C4 - 1.0) * temp_f0));
        D_802018D8.unk_0C = (f32) (D_802018B0.x + ((D_802018BC + 1.0) * temp_f0));
        D_802018D8.unk_10 = (f32) (D_802018B0.y + ((D_802018C0 + 1.0) * temp_f0));
        D_802018D8.unk_14 = (f32) (D_802018B0.z + ((D_802018C4 + 1.0) * temp_f0));
    }
    
    if (D_802018D4 != 0) {
        if (arg0 < D_802018D8.unk_00) {
            return 0;
        }
        
        if (D_802018D8.unk_0C < arg0) {
            return 0;
        }
        
        if (arg4 == 0) {
            if (arg1 < D_802018D8.unk_04) {
                return 0;
            }
            if (D_802018D8.unk_10 < arg1) {
                return 0;
            }
        }

        if (arg2 < D_802018D8.unk_08) {
            return 0;
        }
        
        if (D_802018D8.unk_14 < arg2) {
            return 0;
        }
    } else {
        if (arg4 == 0) {
            if (arg1 < D_802018D8.unk_04) {
                return 0;
            }
            if (D_802018D8.unk_10 < arg1) {
                return 0;
            }
        }
        
        arg0 = arg0 - D_802018B0.x;
        arg2 = arg2 - D_802018B0.z;
        
        if ((arg3 * arg3) < ((arg2 * arg2) + (arg0 * arg0))) {
            return 0;
        }
        
        temp_f0_2 = func_800C8C14(arg2, arg0);
        
        if (D_802018D0 != 0) {
            if ((D_802018CC < temp_f0_2) && (temp_f0_2 < D_802018C8)) {
                return 0;
            }
        }
        
        else if (temp_f0_2 < D_802018C8) {
            return 0;
        }
        
        else if (D_802018CC < temp_f0_2) {
            return 0;
        }        
    }
    
    return 1;
}

s32 func_800AF604(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    return func_800AF2A4(arg0, arg1, arg2, arg3, 0);
}

s32 func_800AF62C(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    return func_800AF2A4(arg0, arg1, arg2, arg3, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8A2C0/func_800AF658.s")
