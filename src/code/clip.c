#include "common.h"

void CartesianToSpherical(Vec3f arg0, f32* arg3, f32* arg4, f32* arg5);
void WrapAngle(f32*);

/* Migrated BSS */
Vec3f D_802018B0;
f32 D_802018BC;
f32 D_802018C0;
f32 D_802018C4;
f32 D_802018C8;
f32 D_802018CC;
s32 D_802018D0;
s32 D_802018D4;
Rect3D D_802018D8;
f32 D_802018F0;

void SetViewAreaParam(Camera* cam, f32 arg1, f32 arg2) {
    Vec3f sp50;
    Vec3f sp5C;
    Vec3f sp44;
    Vec3f sp38;
    f32 var_f12;
    Vec3f sp28;
    f32 var_f2;
    f32 temp_f2_2;

    sp50.x = cam->f5.x;
    sp50.y = cam->f5.y;
    sp50.z = cam->f5.z;
    
    sp5C.x = cam->f4.x;
    sp5C.y = cam->f4.y;
    sp5C.z = cam->f4.z;
    
    sp44.x = sp50.x - sp5C.x;
    sp44.y = sp50.y - sp5C.y;
    sp44.z = sp50.z - sp5C.z;

    Vec3f_Normalize(&sp44);
    
    if (sp44.x == 0.0 && sp44.y == 0.0 && sp44.z == 0.0) {
        DummiedPrintf3("SetViewAreaParam(): target and eye are same point\n");
        return;
    }
    
    sp38.x = sp5C.x - sp50.x;
    //2 assignments on the same line required to match
    sp38.y = sp5C.y - sp50.y; sp38.z = sp5C.z - sp50.z;
    
    CartesianToSpherical(sp38, &sp28.z, &sp28.y, &sp28.x);
    
    if (sp28.y < 45.0) {
        D_802018D4 = 1;
    } else {
        D_802018D4 = 0;
    }
    
    CartesianToSpherical(sp44, &sp28.z, &sp28.y, &sp28.x);
    sp38 = sp44;

    sp38.x *= arg2;
    sp38.y *= arg2;
    sp38.z *= arg2;
    
    D_802018B0.x = sp5C.x - sp38.x;
    D_802018B0.y = sp5C.y - sp38.y;
    D_802018B0.z = sp5C.z - sp38.z;
    temp_f2_2 = CalculateAngleOfVector(sp44.z, sp44.x);
    D_802018C8 = (temp_f2_2 - arg1 * 0.5);
    D_802018CC = (temp_f2_2 + arg1 * 0.5);
    
    WrapAngle(&D_802018C8);
    WrapAngle(&D_802018CC);
    
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

    sp44.x /= var_f2;
    sp44.y /= var_f2;
    sp44.z /= var_f2;
    
    D_802018BC = sp44.x;
    D_802018C0 = sp44.y;
    D_802018C4 = sp44.z;
    D_802018F0 = -1.0f;
}

void SetViewArea(Camera* cam, f32 arg1) {              //refered to in US1.0 as "clip.c - SetViewArea"
    SetViewAreaParam(cam, (arg1 + 20.0), 300.0f);
}

s32 func_800AF2A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    f32 temp_f0_2;
    f64 temp_f0;

    if (arg3 != D_802018F0) {
        D_802018F0 = arg3;
        temp_f0 = (f64) (f32) ((f64) arg3 * 0.5);
        D_802018D8.min.x = (f32) (D_802018B0.x + ((D_802018BC - 1.0) * temp_f0));
        D_802018D8.min.y = (f32) (D_802018B0.y + ((D_802018C0 - 1.0) * temp_f0));
        D_802018D8.min.z = (f32) (D_802018B0.z + ((D_802018C4 - 1.0) * temp_f0));
        D_802018D8.max.x = (f32) (D_802018B0.x + ((D_802018BC + 1.0) * temp_f0));
        D_802018D8.max.y = (f32) (D_802018B0.y + ((D_802018C0 + 1.0) * temp_f0));
        D_802018D8.max.z = (f32) (D_802018B0.z + ((D_802018C4 + 1.0) * temp_f0));
    }
    
    if (D_802018D4 != 0) {
        if (arg0 < D_802018D8.min.x) {
            return 0;
        }
        
        if (D_802018D8.max.x < arg0) {
            return 0;
        }
        
        if (arg4 == 0) {
            if (arg1 < D_802018D8.min.y) {
                return 0;
            }
            if (D_802018D8.max.y < arg1) {
                return 0;
            }
        }

        if (arg2 < D_802018D8.min.z) {
            return 0;
        }
        
        if (D_802018D8.max.z < arg2) {
            return 0;
        }
    } else {
        if (arg4 == 0) {
            if (arg1 < D_802018D8.min.y) {
                return 0;
            }
            if (D_802018D8.max.y < arg1) {
                return 0;
            }
        }
        
        arg0 = arg0 - D_802018B0.x;
        arg2 = arg2 - D_802018B0.z;
        
        if ((arg3 * arg3) < ((arg2 * arg2) + (arg0 * arg0))) {
            return 0;
        }
        
        temp_f0_2 = CalculateAngleOfVector(arg2, arg0);
        
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

/*
 * @return 0 if no collision, 1 if collision
 */

s32 check_collision_within_radius(Rect3D *rect, f32 radius) {
    s32 ret;
    f32 angle_xz;
    f32 y_length;
    f32 z_length;
    f32 max_side_length;
    f32 half_radius;
    Vec3f sp90[4];
    s32 i;
    f32 temp_fv0;
    f32 x_length;
    
    // Resize the rectangle if the radius has changed since the last call
    if (radius != D_802018F0) {
        D_802018F0 = radius;        // prev radius
        half_radius = radius * 0.5;
        D_802018D8.min.x = (f32) (D_802018B0.x + ((D_802018BC - 1.0) * half_radius));
        D_802018D8.min.y = (f32) (D_802018B0.y + ((D_802018C0 - 1.0) * half_radius));
        D_802018D8.min.z = (f32) (D_802018B0.z + ((D_802018C4 - 1.0) * half_radius));
        D_802018D8.max.x = (f32) (D_802018B0.x + ((D_802018BC + 1.0) * half_radius));
        ret = 1;
        D_802018D8.max.y = (f32) (D_802018B0.y + ((D_802018C0 + 1.0) * half_radius));
        D_802018D8.max.z = (f32) (D_802018B0.z + ((D_802018C4 + 1.0) * half_radius));
    }
    
    // Collision check
    if (D_802018D4 != 0) {
        ret = IfRectsIntersect(rect, &D_802018D8);
    } else {
        x_length = rect->max.x - rect->min.x;
        max_side_length = x_length;
        y_length = rect->max.y - rect->min.y;
        z_length = rect->max.z - rect->min.z;
        
        if (max_side_length < y_length) {
            max_side_length = y_length;
        }
        
        if (max_side_length < z_length) {
            max_side_length = z_length;
        }
        
        if (1000.0 < max_side_length) {
            ret = IfRectsIntersect(rect, &D_802018D8);
        } else {
            if (rect->max.y < D_802018D8.min.y) {
                ret = 0;
            } else {
                if (D_802018D8.max.y < rect->min.y) {
                    ret = 0;
                } else {
                    sp90[0].x = rect->min.x;
                    sp90[0].z = rect->min.z;
                    sp90[1].x = rect->min.x;
                    sp90[1].z = rect->max.z;
                    sp90[2].x = rect->max.x;
                    sp90[2].z = rect->min.z;
                    sp90[3].x = rect->max.x;
                    sp90[3].z = rect->max.z;
                    ret = 0;
                    for (i = 0; i < 4; i++) { //TODO: unhardcode this for loop
                        sp90[i].x -= D_802018B0.x;
                        sp90[i].z -= D_802018B0.z;
                        temp_fv0 = SUM_OF_SQUARES(sp90[i].z, sp90[i].x);
                        if (SQ(radius) < temp_fv0) {  //empty if
                        } else {
                            angle_xz = CalculateAngleOfVector(sp90[i].z, sp90[i].x);
                            if (D_802018D0 != 0) {
                                if ((D_802018CC < angle_xz) && (angle_xz < D_802018C8)) {
                                    continue;
                                } else {
                                    goto label;
                                }
                            }
                            if ((D_802018C8 > angle_xz) || (D_802018CC < angle_xz)) {
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