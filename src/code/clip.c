#include "common.h"

void CartesianToSpherical(Vec3f arg0, f32* arg3, f32* arg4, f32* arg5);
void WrapAngle(f32*);

//bss externed
extern Vec3f D_802018B0;
extern f32 D_802018BC;
extern f32 D_802018C0;
extern f32 D_802018C4;
extern f32 D_802018C8;
extern f32 D_802018CC;
extern s32 D_802018D0;
extern s32 D_802018D4;
extern unk802018D8 D_802018D8;
extern f32 D_802018F0;

void SetViewAreaParam(Camera* cam, f32 arg1, f32 arg2) {
    Vec3f sp50;
    Vec3f sp5C;
    Vec3f cartesianVecTwo;   //sp44
    Vec3f cartesianVecOne;   //sp38
    f32 var_f12;
    Vec3f polarVec;          //sp28
    f32 var_f2;
    f32 temp_f2_2;

    sp50.x = cam->f5.x;
    sp50.y = cam->f5.y;
    sp50.z = cam->f5.z;
    
    sp5C.x = cam->f4.x;
    sp5C.y = cam->f4.y;
    sp5C.z = cam->f4.z;
    
    cartesianVecTwo.x = sp50.x - sp5C.x;
    cartesianVecTwo.y = sp50.y - sp5C.y;
    cartesianVecTwo.z = sp50.z - sp5C.z;

    Vec3f_Normalize(&cartesianVecTwo);
    
    if (cartesianVecTwo.x == 0.0 && cartesianVecTwo.y == 0.0 && cartesianVecTwo.z == 0.0) {
        DummiedPrintf3("SetViewAreaParam(): target and eye are same point\n");
        return;
    }
    
    cartesianVecOne.x = sp5C.x - sp50.x;
    //2 assignments on the same line required to match
    cartesianVecOne.y = sp5C.y - sp50.y; cartesianVecOne.z = sp5C.z - sp50.z;
    
    CartesianToSpherical(cartesianVecOne, &polarVec.z, &polarVec.y, &polarVec.x);
    
    if (polarVec.y < 45.0) {
        D_802018D4 = 1;
    } else {
        D_802018D4 = 0;
    }
    
    CartesianToSpherical(cartesianVecTwo, &polarVec.z, &polarVec.y, &polarVec.x);
    cartesianVecOne = cartesianVecTwo;

    cartesianVecOne.x *= arg2;
    cartesianVecOne.y *= arg2;
    cartesianVecOne.z *= arg2;
    
    D_802018B0.x = sp5C.x - cartesianVecOne.x;
    D_802018B0.y = sp5C.y - cartesianVecOne.y;
    D_802018B0.z = sp5C.z - cartesianVecOne.z;
    temp_f2_2 = CalculateAngleBetweenVectors(cartesianVecTwo.z, cartesianVecTwo.x);
    D_802018C8 = (temp_f2_2 - arg1 * 0.5);
    D_802018CC = (temp_f2_2 + arg1 * 0.5);
    
    WrapAngle(&D_802018C8);
    WrapAngle(&D_802018CC);
    
    if (D_802018CC < D_802018C8) {
        D_802018D0 = 1;
    } else {
        D_802018D0 = 0;
    }

    if (cartesianVecTwo.x < 0.0f) {
        var_f2 = -cartesianVecTwo.x;
    } else {
        var_f2 = cartesianVecTwo.x;
    }
    
    if (cartesianVecTwo.y < 0.0f) {
        var_f12 = -cartesianVecTwo.y;
    } else {
        var_f12 = cartesianVecTwo.y;
    }
    
    if (var_f2 < var_f12) {
        if (cartesianVecTwo.y < 0.0f) {
            var_f2 = -cartesianVecTwo.y;
        } else {
            var_f2 = cartesianVecTwo.y;
        }
    }
    
    if (cartesianVecTwo.z < 0.0f) {
        var_f12 = -cartesianVecTwo.z;
    } else {
        var_f12 = cartesianVecTwo.z;
    }
    
    if (var_f2 < var_f12) {
        if (cartesianVecTwo.z < 0.0f) {
            var_f2 = -cartesianVecTwo.z;
        } else {
            var_f2 = cartesianVecTwo.z;
        }
    }

    cartesianVecTwo.x /= var_f2;
    cartesianVecTwo.y /= var_f2;
    cartesianVecTwo.z /= var_f2;
    
    D_802018BC = cartesianVecTwo.x;
    D_802018C0 = cartesianVecTwo.y;
    D_802018C4 = cartesianVecTwo.z;
    D_802018F0 = -1.0f;
}

//refered to in US1.0 as "clip.c - SetViewArea"
void SetViewArea(Camera* cam, f32 arg1) {
    SetViewAreaParam(cam, (arg1 + 20.0), 300.0f);
}

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
        
        temp_f0_2 = CalculateAngleBetweenVectors(arg2, arg0);
        
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

s32 check_collision_within_radius(unk802018D8 *arg0, f32 arg1) {
    s32 ret;
    f32 temp_f0_2;
    f32 temp_f12_2;
    f32 temp_f14_2;
    f32 var_f2;
    f32 temp_f0;
    Vec3f sp90[4];
    s32 i;
    f32 temp_fv0;
    f32 new_var;
    
    if (arg1 != D_802018F0) {
        D_802018F0 = arg1;
        temp_f0 = arg1 * 0.5;
        D_802018D8.unk_00 = (f32) (D_802018B0.x + ((D_802018BC - 1.0) * temp_f0));
        D_802018D8.unk_04 = (f32) (D_802018B0.y + ((D_802018C0 - 1.0) * temp_f0));
        D_802018D8.unk_08 = (f32) (D_802018B0.z + ((D_802018C4 - 1.0) * temp_f0));
        D_802018D8.unk_0C = (f32) (D_802018B0.x + ((D_802018BC + 1.0) * temp_f0));
        ret = 1;
        D_802018D8.unk_10 = (f32) (D_802018B0.y + ((D_802018C0 + 1.0) * temp_f0));
        D_802018D8.unk_14 = (f32) (D_802018B0.z + ((D_802018C4 + 1.0) * temp_f0));
    }
    
    if (D_802018D4 != 0) {
        ret = func_800AE8E4(arg0, &D_802018D8);
    } else {
        new_var = arg0->unk_0C - arg0->unk_00;
        var_f2 = new_var;
        temp_f12_2 = arg0->unk_10 - arg0->unk_04;
        temp_f14_2 = arg0->unk_14 - arg0->unk_08;
        
        if (var_f2 < temp_f12_2) {
            var_f2 = temp_f12_2;
        }
        
        if (var_f2 < temp_f14_2) {
            var_f2 = temp_f14_2;
        }
        
        if (1000.0 < var_f2) {
            ret = func_800AE8E4(arg0, &D_802018D8);
        } else {
            if (arg0->unk_10 < D_802018D8.unk_04) {
                ret = 0;
            } else {
                if (D_802018D8.unk_10 < arg0->unk_04) {
                    ret = 0;
                } else {
                    sp90[0].x = arg0->unk_00;
                    sp90[0].z = arg0->unk_08;
                    sp90[1].x = arg0->unk_00;
                    sp90[1].z = arg0->unk_14;
                    sp90[2].x = arg0->unk_0C;
                    sp90[2].z = arg0->unk_08;
                    sp90[3].x = arg0->unk_0C;
                    sp90[3].z = arg0->unk_14;
                    ret = 0;
                    for (i = 0; i < 4; i++) {
                        sp90[i].x -= D_802018B0.x;
                        sp90[i].z -= D_802018B0.z;
                        temp_fv0 = (sp90[i].z * sp90[i].z) + (sp90[i].x * sp90[i].x);
                        if ((arg1 * arg1) < temp_fv0) {
                        } else {
                            temp_f0_2 = CalculateAngleBetweenVectors(sp90[i].z, sp90[i].x);
                            if (D_802018D0 != 0) {
                                if ((D_802018CC < temp_f0_2) && (temp_f0_2 < D_802018C8)) {
                                    continue;
                                } else {
                                    goto label;
                                }
                            }
                            if ((D_802018C8 > temp_f0_2) || (D_802018CC < temp_f0_2)) {
                                continue;
                            } else {
                                label:
                                ret = 1;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }       
    return ret;
}