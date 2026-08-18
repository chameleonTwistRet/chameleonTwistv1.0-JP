#include "B39A0.h"

void PlaySfxPositionalPeriodic(FieldObject* fieldObject, s32 sfxID, s32 interval) {
    if (((fieldObject->unk_00 + gFieldFramesElapsed) % interval) == 0) {
        func_80088698(PLAY_SFX_AT(sfxID, fieldObject->sfxPos, 0, 0));
    }
}

void PlaySfxPeriodic(FieldObject* fieldObject, s32 sfxID, s32 interval) {
    if ((fieldObject->unk_00 + gFieldFramesElapsed) % interval == 0) {
        PLAY_SFX(sfxID, 0, 0x10);
    }
}

void PlaySfxOnContactAndPeriodic(FieldObject* fieldObject, s32 contactSfxID, s32 periodicSfxID, s32 interval) {
    if ((fieldObject->unk_B4 == 0) && (fieldObject->unk_BC == 1) && (fieldObject->unk_C0 == 0)) {
        func_80088698(PLAY_SFX_AT(contactSfxID, fieldObject->sfxPos, 0, 0));
        return;
    }
    if ((fieldObject->unk_BC == 1) && (((fieldObject->unk_00 + gFieldFramesElapsed) % interval) == 0) && (periodicSfxID >= 0)) {
        func_80088698(PLAY_SFX_AT(periodicSfxID, fieldObject->sfxPos, 0, 0));
    }
}

void PlaySfxPositionalOnFlag(FieldObject* fieldObject, s32 sfxID) {
    if (fieldObject->unk_B8 == 1) {
        func_80088698(PLAY_SFX_AT(sfxID, fieldObject->sfxPos, 0, 0));
    }
}

void PlaySfxPeriodicGlobal(FieldObject* fieldObject, s32 sfxID, s32 interval) {
    if ((fieldObject->unk_BC >= 0) && (((gFieldFramesElapsed - fieldObject->unk_BC) % interval) == 0)) {
        PLAY_SFX(sfxID, 0, 0x10);
    }
}

void PlaySfxPositionalPeriodicOnSurface(FieldObject* fieldObject, s32 sfxID, s32 interval) {
    if ((fieldObject->unk_00 == gPlayerActors[0].surface) && ((fieldObject->unk_00 + gFieldFramesElapsed) % interval) == 0) {
        func_80088698(PLAY_SFX_AT(sfxID, fieldObject->sfxPos, 0, 0));
    }
}

// Periodically plays a sound at a set coordinate after passing a collision rect, 45deg from coordinate axis.
// The u axis is (z - x) / sqrt(2) and the v axis is (z + x) / sqrt(2), both relative to the center.
void PlaySfxInZoneDiagonal(FieldObject* fieldObject, s32 sfxID, s32 interval, f32 centerZ, f32 centerX, f32 innerHalfU, f32 innerHalfV, f32 fadeU, f32 fadeV) {
    f32 temp_f0_2;
    s32 inZone;
    f32 xPos;
    f32 zPos;
    f32 temp_f0;
    s32 zero = 0;
    f32 clampedU;
    f32 clampedV;
    Vec3f sfxPos;

    if ((fieldObject->unk_00 + gFieldFramesElapsed) % interval == 0) {
        zPos = gPlayerActors[0].pos.z - centerZ;
        xPos = gPlayerActors[0].pos.x - centerX;
        inZone = 1;
        temp_f0 = (zPos - xPos) * SQROOT_2_DIV_2;

        if (temp_f0 < -(innerHalfU + fadeU)) {
            inZone = 0;
        } else {
            if (temp_f0 < -innerHalfU) {
                clampedU = -innerHalfU;
            } else if (temp_f0 < innerHalfU) {
                clampedU = temp_f0;
            } else if (temp_f0 < innerHalfU + fadeU) {
                clampedU = innerHalfU;
            } else {
                inZone = 0;
            }
        }

        temp_f0 = (zPos + xPos) * SQROOT_2_DIV_2;

        if (temp_f0 < -(innerHalfV + fadeV)) {
            inZone = 0;
        } else if (temp_f0 < -innerHalfV) {
            clampedV = -innerHalfV;
        } else if (temp_f0 < innerHalfV) {
            clampedV = temp_f0;
        } else if (temp_f0 < (innerHalfV + fadeV)) {
            clampedV = innerHalfV;
        } else {
            inZone = 0;
        }

        if (inZone != 0) {
            sfxPos.z = (centerX * 1.0f) + (clampedV - clampedU) * SQROOT_2_DIV_2;
            sfxPos.y = gPlayerActors[zero].pos.y;
            sfxPos.x = (centerZ * 1.0f) + (clampedU + clampedV) * SQROOT_2_DIV_2;
            func_80088698(PlaySoundEffect(sfxID, &sfxPos.z, &sfxPos.y, &sfxPos.x, 8, 0));
        }
    }
}

// the zone has a hard inner region where sound plays at full volume, then a fade region beyond it where the sound position gets clamped to the edge
void PlaySfxInZoneAxisAligned(FieldObject* fieldObject, s32 sfxID, s32 interval, f32 centerZ, f32 centerX, f32 innerHalfX, f32 innerHalfZ, f32 fadeX, f32 fadeZ) {
    f32 temp_f12;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f2;
    s32 inZone;
    f32 clampedX;
    f32 clampedZ;
    Vec3f sfxPos;
    s32 zero = 0;

    if (((fieldObject->unk_00 + gFieldFramesElapsed) % interval) == 0) {
        temp_f12 = innerHalfX + fadeX;
        inZone = 1;
        temp_f16 = gPlayerActors->pos.z - centerZ;
        temp_f0 = gPlayerActors->pos.x - centerX;
        if (temp_f0 < -(temp_f12)) {
            inZone = 0;
        } else {
            if (temp_f0 < -innerHalfX) {
                clampedX = -innerHalfX;
            } else if (temp_f0 < innerHalfX) {
                clampedX = temp_f0;
            } else if (temp_f0 < temp_f12) {
                clampedX = innerHalfX;
            } else {
                inZone = 0;
            }
        }

        temp_f2 = innerHalfZ + fadeZ;

        if (temp_f16 < -temp_f2) {
            inZone = 0;
        } else {
            if (temp_f16 < -innerHalfZ) {
                clampedZ = -innerHalfZ;
            } else if (temp_f16 < innerHalfZ) {
                clampedZ = temp_f16;
            } else if (temp_f16 < temp_f2) {
                clampedZ = innerHalfZ;
            } else {
                inZone = 0;
            }
        }

        if (inZone != 0) {
            sfxPos.z = centerX + clampedX;
            sfxPos.y = gPlayerActors[zero].pos.y;
            //sfxPos.y = D_80168DB0;
            sfxPos.x = centerZ + clampedZ;
            func_80088698(PlaySoundEffect(sfxID, &sfxPos.z, &sfxPos.y, &sfxPos.x, 0, 0));
        }
    }
}

void PlaySfxOnTrigger(FieldObject* fieldObject, s32 sfxID) {
    if ((func_800B34D0(fieldObject->unk_AC) != 0) && (fieldObject->unk_B0 != 0)) {
        func_80088698(PLAY_SFX_AT(sfxID, fieldObject->sfxPos,0, 0));
        fieldObject->unk_B0 = 0;
    }
}

// these zone wrappers keep their bodies on one line: splitting the lines changes codegen
void func_800D8D58(FieldObject* arg0) {PlaySfxInZoneDiagonal(arg0, SFX_55_unkSnd, 30, -12800.0f, 19600.0f, 700.0f, 1500.0f, 1000.0f, 2000.0f);}

void func_800D8DBC(FieldObject* arg0) {
    PlaySfxPeriodic(arg0, SFX_59_unkSnd, 45);
}

void func_800D8DE0(FieldObject* arg0) {
    PlaySfxPeriodic(arg0, SFX_5B_unkSnd, 105);
}

void func_800D8E04(FieldObject* arg0) {
    PlaySfxPositionalPeriodic(arg0, SFX_5B_unkSnd, 120);
}

void func_800D8E28(FieldObject* arg0) {
    PlaySfxPeriodic(arg0, SFX_5C_unkSnd, 27);
}

void func_800D8E4C(FieldObject* arg0) {
    PlaySfxPeriodic(arg0, SFX_89_unkSnd, 30);
}

void func_800D8E70(FieldObject* arg0) {PlaySfxInZoneDiagonal(arg0, SFX_89_unkSnd, 30, 6000.0f, 6000.0f, 600.0f, 1500.0f, 500.0f, 2000.0f);}

void func_800D8ED4(FieldObject* arg0) {PlaySfxInZoneDiagonal(arg0, SFX_89_unkSnd, 30, 2200.0f, 1400.0f, 700.0f, 1000.0f, 500.0f, 2000.0f);}

void func_800D8F3C(FieldObject* arg0) {PlaySfxInZoneDiagonal(arg0, SFX_89_unkSnd, 30, -8500.0f, 24000.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D8F9C(FieldObject* arg0) {PlaySfxInZoneAxisAligned(arg0, SFX_89_unkSnd, 30, -5100.0f, 25300.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D8FFC(FieldObject* arg0) {PlaySfxInZoneAxisAligned(arg0, SFX_89_unkSnd, 30, 0, 25300.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D9058(FieldObject* arg0) {PlaySfxInZoneDiagonal(arg0, SFX_89_unkSnd, 30, 5100.0f, 23600.0f, 3000.0f, 600.0f, 1000.0f, 1000.0f);}

void func_800D90B8(FieldObject* arg0) {
    PlaySfxOnContactAndPeriodic(arg0, SFX_A0_unkSnd, -1, 30);
}

void func_800D90E0(FieldObject* arg0) {
    PlaySfxPositionalPeriodic(arg0, 0xD7, 30);
}

void func_800D9104(FieldObject* arg0) {
    PlaySfxPositionalPeriodic(arg0, SFX_AC_unkSnd, 45);
}

void func_800D9128(FieldObject* arg0) {
    PlaySfxPeriodic(arg0, 0xB0, 45);
}

void func_800D914C(FieldObject* arg0) {
    PlaySfxPeriodic(arg0, 0xB1, 39);
}

void func_800D9170(FieldObject* arg0) {
    PlaySfxPositionalOnFlag(arg0, SFX_C2_unkSnd);
}

void func_800D9190(FieldObject* arg0) {
    PlaySfxPeriodicGlobal(arg0, 0xAD, 39);
}

void func_800D91B4(FieldObject* arg0) {
    PlaySfxPositionalPeriodicOnSurface(arg0, 0xAE, 36);
}

void func_800D91D8(FieldObject* arg0) {
    PlaySfxOnTrigger(arg0, SFX_3B_unkSnd);
}