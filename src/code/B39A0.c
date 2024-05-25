#include "B39A0.h"

void func_800D85A0(Collider* arg0, s32 sfxID, s32 arg2) {
    if (((arg0->unk_00 + D_801749A0) % arg2) == 0) {
        func_80088698(PLAY_SFX_AT(sfxID, arg0->sfxPos, 0, 0));
    }
}

void func_800D8628(Collider* arg0, s32 sfxID, s32 arg2) {
    if ((arg0->unk_00 + D_801749A0) % arg2 == 0) {
        PLAY_SFX(sfxID, 0, 0x10);
    }
}

void func_800D86A4(Collider* arg0, s32 sfxID0, s32 sfxID1, s32 arg3) {
    if ((arg0->unk_B4 == 0) && (arg0->unk_BC == 1) && (arg0->unk_C0 == 0)) {
        func_80088698(PLAY_SFX_AT(sfxID0, arg0->sfxPos, 0, 0));
        return;
    }
    if ((arg0->unk_BC == 1) && (((arg0->unk_00 + D_801749A0) % arg3) == 0) && (sfxID1 >= 0)) {
        func_80088698(PLAY_SFX_AT(sfxID1, arg0->sfxPos, 0, 0));
    }
}

void func_800D87A4(Collider* arg0, s32 sfxID) {
    if (arg0->unk_B8 == 1) {
        func_80088698(PLAY_SFX_AT(sfxID, arg0->sfxPos, 0, 0));
    }
}

void func_800D87F8(Collider* arg0, s32 sfxID, s32 arg2) {
    if ((arg0->unk_BC >= 0) && (((D_801749A0 - arg0->unk_BC) % arg2) == 0)) {
        PLAY_SFX(sfxID, 0, 0x10);
    }
}

void func_800D887C(Collider* arg0, s32 sfxID, s32 arg2) {
    if ((arg0->unk_00 == gPlayerActors[0].surface) && ((arg0->unk_00 + D_801749A0) % arg2) == 0) {
        func_80088698(PLAY_SFX_AT(sfxID, arg0->sfxPos, 0, 0));
    }
}

void func_800D8918(Collider* arg0, s32 sfxID, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    f32 temp_f0_2;
    s32 var_v0;
    f32 xPos;
    f32 zPos;
    f32 temp_f0;
    s32 zero = 0; 
    f32 sp44;
    f32 var_f12;
    Vec3f sp34;

    if ((arg0->unk_00 + D_801749A0) % arg2 == 0) {
        zPos = gPlayerActors[0].pos.z - arg3;
        xPos = gPlayerActors[0].pos.x - arg4;
        var_v0 = 1;
        temp_f0 = (zPos - xPos) * SQROOT_2_DIV_2;
        
        if (temp_f0 < -(arg5 + arg7)) {
            var_v0 = 0;
        } else {
            if (temp_f0 < -arg5) {
                sp44 = -arg5;
            } else if (temp_f0 < arg5) {
                sp44 = temp_f0;
            } else if (temp_f0 < arg5 + arg7) {
                sp44 = arg5;
            } else {
                var_v0 = 0;
            }
        }
        
        temp_f0 = (zPos + xPos) * SQROOT_2_DIV_2;
        
        if (temp_f0 < -(arg6 + arg8)) {
            var_v0 = 0;
        } else if (temp_f0 < -arg6) {
            var_f12 = -arg6;
        } else if (temp_f0 < arg6) {
            var_f12 = temp_f0;
        } else if (temp_f0 < (arg6 + arg8)) {
            var_f12 = arg6;
        } else {
            var_v0 = 0;
        }

        if (var_v0 != 0) {
            sp34.z = (arg4 * 1.0f) + (var_f12 - sp44) * SQROOT_2_DIV_2;
            sp34.y = gPlayerActors[zero].pos.y; 
            sp34.x = (arg3 * 1.0f) + (sp44 + var_f12) * SQROOT_2_DIV_2;
            func_80088698(PlaySoundEffect(sfxID, &sp34.z, &sp34.y, &sp34.x, 8, 0));
        }
    }
}

void func_800D8B28(Collider* arg0, s32 sfxID, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    f32 temp_f12;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f2;
    s32 var_v0;
    f32 sp40;
    f32 sp3C;
    Vec3f sp30;
    s32 zero = 0;

    if (((arg0->unk_00 + D_801749A0) % arg2) == 0) {
        temp_f12 = arg5 + arg7;
        var_v0 = 1;
        temp_f16 = gPlayerActors->pos.z - arg3;
        temp_f0 = gPlayerActors->pos.x - arg4;
        if (temp_f0 < -(temp_f12)) {
            var_v0 = 0;
        } else {
            if (temp_f0 < -arg5) {
                sp40 = -arg5;
            } else if (temp_f0 < arg5) {
                sp40 = temp_f0;
            } else if (temp_f0 < temp_f12) {
                sp40 = arg5;
            } else {
                var_v0 = 0;
            }            
        }
        
        temp_f2 = arg6 + arg8;
        
        if (temp_f16 < -temp_f2) {
            var_v0 = 0;
        } else {
            if (temp_f16 < -arg6) {
                sp3C = -arg6;
            } else if (temp_f16 < arg6) {
                sp3C = temp_f16;
            } else if (temp_f16 < temp_f2) {
                sp3C = arg6;
            } else {
                var_v0 = 0;
            }
        }

        if (var_v0 != 0) {
            sp30.z = arg4 + sp40;
            sp30.y = gPlayerActors[zero].pos.y;
            //sp30.y = D_80168DB0;
            sp30.x = arg3 + sp3C;
            func_80088698(PlaySoundEffect(sfxID, &sp30.z, &sp30.y, &sp30.x, 0, 0));
        }
    }
}

void func_800D8CF0(Collider* arg0, s32 sfxID) {
    if ((func_800B34D0(arg0->unk_AC) != 0) && (arg0->unk_B0 != 0)) {
        func_80088698(PLAY_SFX_AT(sfxID, arg0->sfxPos,0, 0));
        arg0->unk_B0 = 0;
    }
}

void func_800D8D58(Collider* arg0) {func_800D8918(arg0, SFX_55_unkSnd, 0x1E, -12800.0f, 19600.0f, 700.0f, 1500.0f, 1000.0f, 2000.0f);}

void func_800D8DBC(Collider* arg0) {
    func_800D8628(arg0, 0x59, 0x2D);
}

void func_800D8DE0(Collider* arg0) {
    func_800D8628(arg0, 0x5B, 0x69);
}

void func_800D8E04(Collider* arg0) {
    func_800D85A0(arg0, 0x5B, 0x78);
}

void func_800D8E28(Collider* arg0) {
    func_800D8628(arg0, 0x5C, 0x1B);
}

void func_800D8E4C(Collider* arg0) {
    func_800D8628(arg0, 0x89, 0x1E);
}

void func_800D8E70(Collider* arg0) {func_800D8918(arg0, SFX_89_unkSnd, 0x1E, 6000.0f, 6000.0f, 600.0f, 1500.0f, 500.0f, 2000.0f);}

void func_800D8ED4(Collider* arg0) { func_800D8918(arg0, SFX_89_unkSnd, 0x1E, 2200.0f, 1400.0f, 700.0f, 1000.0f, 500.0f, 2000.0f);}

void func_800D8F3C(Collider* arg0) {func_800D8918(arg0, SFX_89_unkSnd, 0x1E, -8500.0f, 24000.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D8F9C(Collider* arg0) {func_800D8B28(arg0, SFX_89_unkSnd, 0x1E, -5100.0f, 25300.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D8FFC(Collider* arg0) {func_800D8B28(arg0, SFX_89_unkSnd, 0x1E, 0, 25300.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D9058(Collider* arg0) {func_800D8918(arg0, SFX_89_unkSnd, 0x1E, 5100.0f, 23600.0f, 3000.0f, 600.0f, 1000.0f, 1000.0f);}

void func_800D90B8(Collider* arg0) {
    func_800D86A4(arg0, 0xA0, -1, 0x1E);
}

void func_800D90E0(Collider* arg0) {
    func_800D85A0(arg0, 0xD7, 0x1E);
}

void func_800D9104(Collider* arg0) {
    func_800D85A0(arg0, 0xAC, 0x2D);
}

void func_800D9128(Collider* arg0) {
    func_800D8628(arg0, 0xB0, 0x2D);
}

void func_800D914C(Collider* arg0) {
    func_800D8628(arg0, 0xB1, 0x27);
}

void func_800D9170(Collider* arg0) {
    func_800D87A4(arg0, 194);
}

void func_800D9190(Collider* arg0) {
    func_800D87F8(arg0, 0xAD, 0x27);
}

void func_800D91B4(Collider* arg0) {
    func_800D887C(arg0, 0xAE, 0x24);
}

void func_800D91D8(Collider* arg0) {
    func_800D8CF0(arg0, 0x3B);
}