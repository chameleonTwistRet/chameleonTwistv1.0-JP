#include "common.h"

/* Migrated BSS */
Vec3f sViewOrigin;
f32 sViewDirX;
f32 sViewDirY;
f32 sViewDirZ;
f32 sViewAngleMin;
f32 sViewAngleMax;
s32 sViewAngleWraps; // 1 if min/max angle range wraps around 360
s32 sViewIsHorizontal; // 1 if camera is mostly horizontal (pitch < 45deg)
Rect3D sViewBoundingBox;
f32 sViewBoundingBoxRadius;

void SetViewAreaParam(Camera* cam, f32 fovDeg, f32 range) {
    Vec3f target;
    Vec3f eye;
    Vec3f toTarget;
    Vec3f toEye; // becomes a scaled view-dir after the second car2sph call
    f32 absCurr;
    Vec3f spherical;
    f32 absMax;
    f32 azimuth;

    target.x = cam->lookAt.x;
    target.y = cam->lookAt.y;
    target.z = cam->lookAt.z;
    
    eye.x = cam->eye.x;
    eye.y = cam->eye.y;
    eye.z = cam->eye.z;
    
    toTarget.x = target.x - eye.x;
    toTarget.y = target.y - eye.y;
    toTarget.z = target.z - eye.z;

    Vec3f_Normalize(&toTarget);
    
    if (toTarget.x == 0.0 && toTarget.y == 0.0 && toTarget.z == 0.0) {
        DummiedPrintf3("SetViewAreaParam(): target and eye are same point\n");
        return;
    }
    
    toEye.x = eye.x - target.x;
    toEye.y = eye.y - target.y; toEye.z = eye.z - target.z;
    
    CartesianToSpherical(toEye, &spherical.z, &spherical.y, &spherical.x);
    
    if (spherical.y < 45.0) {
        sViewIsHorizontal = 1;
    } else {
        sViewIsHorizontal = 0;
    }
    
    CartesianToSpherical(toTarget, &spherical.z, &spherical.y, &spherical.x);
    toEye = toTarget;

    toEye.x *= range;
    toEye.y *= range;
    toEye.z *= range;
    
    sViewOrigin.x = eye.x - toEye.x;
    sViewOrigin.y = eye.y - toEye.y;
    sViewOrigin.z = eye.z - toEye.z;
    azimuth = ArcTan2Deg(toTarget.z, toTarget.x);
    sViewAngleMin = (azimuth - fovDeg * 0.5);
    sViewAngleMax = (azimuth + fovDeg * 0.5);
    
    WrapAngle(&sViewAngleMin);
    WrapAngle(&sViewAngleMax);
    
    if (sViewAngleMax < sViewAngleMin) {
        sViewAngleWraps = 1;
    } else {
        sViewAngleWraps = 0;
    }

    if (toTarget.x < 0.0f) {
        absMax = -toTarget.x;
    } else {
        absMax = toTarget.x;
    }
    
    if (toTarget.y < 0.0f) {
        absCurr = -toTarget.y;
    } else {
        absCurr = toTarget.y;
    }
    
    if (absMax < absCurr) {
        if (toTarget.y < 0.0f) {
            absMax = -toTarget.y;
        } else {
            absMax = toTarget.y;
        }
    }
    
    if (toTarget.z < 0.0f) {
        absCurr = -toTarget.z;
    } else {
        absCurr = toTarget.z;
    }
    
    if (absMax < absCurr) {
        if (toTarget.z < 0.0f) {
            absMax = -toTarget.z;
        } else {
            absMax = toTarget.z;
        }
    }

    toTarget.x /= absMax;
    toTarget.y /= absMax;
    toTarget.z /= absMax;
    
    sViewDirX = toTarget.x;
    sViewDirY = toTarget.y;
    sViewDirZ = toTarget.z;
    sViewBoundingBoxRadius = -1.0f;
}

void SetViewArea(Camera* cam, f32 fovDeg) {              //refered to in US1.0 as "clip.c - SetViewArea"
    SetViewAreaParam(cam, (fovDeg + 20.0), 300.0f);
}

s32 IsPointInViewArea(f32 x, f32 y, f32 z, f32 radius, s32 ignoreY) {
    f32 angleXZ;
    f64 halfRadius;

    if (radius != sViewBoundingBoxRadius) {
        sViewBoundingBoxRadius = radius;
        halfRadius = (f64) (f32) ((f64) radius * 0.5);
        sViewBoundingBox.min.x = (f32) (sViewOrigin.x + ((sViewDirX - 1.0) * halfRadius));
        sViewBoundingBox.min.y = (f32) (sViewOrigin.y + ((sViewDirY - 1.0) * halfRadius));
        sViewBoundingBox.min.z = (f32) (sViewOrigin.z + ((sViewDirZ - 1.0) * halfRadius));
        sViewBoundingBox.max.x = (f32) (sViewOrigin.x + ((sViewDirX + 1.0) * halfRadius));
        sViewBoundingBox.max.y = (f32) (sViewOrigin.y + ((sViewDirY + 1.0) * halfRadius));
        sViewBoundingBox.max.z = (f32) (sViewOrigin.z + ((sViewDirZ + 1.0) * halfRadius));
    }
    
    if (sViewIsHorizontal != 0) {
        if (x < sViewBoundingBox.min.x) {
            return 0;
        }
        
        if (sViewBoundingBox.max.x < x) {
            return 0;
        }
        
        if (ignoreY == 0) {
            if (y < sViewBoundingBox.min.y) {
                return 0;
            }
            if (sViewBoundingBox.max.y < y) {
                return 0;
            }
        }

        if (z < sViewBoundingBox.min.z) {
            return 0;
        }
        
        if (sViewBoundingBox.max.z < z) {
            return 0;
        }
    } else {
        if (ignoreY == 0) {
            if (y < sViewBoundingBox.min.y) {
                return 0;
            }
            if (sViewBoundingBox.max.y < y) {
                return 0;
            }
        }
        
        x = x - sViewOrigin.x;
        z = z - sViewOrigin.z;
        
        if ((radius * radius) < ((z * z) + (x * x))) {
            return 0;
        }
        
        angleXZ = ArcTan2Deg(z, x);
        
        if (sViewAngleWraps != 0) {
            if ((sViewAngleMax < angleXZ) && (angleXZ < sViewAngleMin)) {
                return 0;
            }
        }
        
        else if (angleXZ < sViewAngleMin) {
            return 0;
        }
        
        else if (sViewAngleMax < angleXZ) {
            return 0;
        }        
    }
    
    return 1;
}

s32 IsPointInViewAreaFull(f32 x, f32 y, f32 z, f32 radius) {
    return IsPointInViewArea(x, y, z, radius, 0);
}

s32 IsPointInViewAreaIgnoreY(f32 x, f32 y, f32 z, f32 radius)  {
    return IsPointInViewArea(x, y, z, radius, 1);
}


s32 IsRectInViewArea(Rect3D *rect, f32 radius) {
    s32 ret;
    f32 angle_xz;
    f32 y_length;
    f32 z_length;
    f32 max_side_length;
    f32 half_radius;
    Vec3f corners[4];
    s32 i;
    f32 distSq;
    f32 x_length;
    
    // Resize the rectangle if the radius has changed since the last call
    if (radius != sViewBoundingBoxRadius) {
        sViewBoundingBoxRadius = radius;        // prev radius
        half_radius = radius * 0.5;
        sViewBoundingBox.min.x = (f32) (sViewOrigin.x + ((sViewDirX - 1.0) * half_radius));
        sViewBoundingBox.min.y = (f32) (sViewOrigin.y + ((sViewDirY - 1.0) * half_radius));
        sViewBoundingBox.min.z = (f32) (sViewOrigin.z + ((sViewDirZ - 1.0) * half_radius));
        sViewBoundingBox.max.x = (f32) (sViewOrigin.x + ((sViewDirX + 1.0) * half_radius));
        ret = 1;
        sViewBoundingBox.max.y = (f32) (sViewOrigin.y + ((sViewDirY + 1.0) * half_radius));
        sViewBoundingBox.max.z = (f32) (sViewOrigin.z + ((sViewDirZ + 1.0) * half_radius));
    }
    
    // Collision check
    if (sViewIsHorizontal != 0) {
        ret = IfRectsIntersect(rect, &sViewBoundingBox);
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
            ret = IfRectsIntersect(rect, &sViewBoundingBox);
        } else {
            if (rect->max.y < sViewBoundingBox.min.y) {
                ret = 0;
            } else {
                if (sViewBoundingBox.max.y < rect->min.y) {
                    ret = 0;
                } else {
                    corners[0].x = rect->min.x;
                    corners[0].z = rect->min.z;
                    corners[1].x = rect->min.x;
                    corners[1].z = rect->max.z;
                    corners[2].x = rect->max.x;
                    corners[2].z = rect->min.z;
                    corners[3].x = rect->max.x;
                    corners[3].z = rect->max.z;
                    ret = 0;
                    for (i = 0; i < 4; i++) { //TODO: unhardcode this for loop
                        corners[i].x -= sViewOrigin.x;
                        corners[i].z -= sViewOrigin.z;
                        distSq = SUM_OF_SQUARES(corners[i].z, corners[i].x);
                        if (SQ(radius) < distSq) {  //empty if
                        } else {
                            angle_xz = ArcTan2Deg(corners[i].z, corners[i].x);
                            if (sViewAngleWraps != 0) {
                                if ((sViewAngleMax < angle_xz) && (angle_xz < sViewAngleMin)) {
                                    continue;
                                } else {
                                    goto label;
                                }
                            }
                            if ((sViewAngleMin > angle_xz) || (sViewAngleMax < angle_xz)) {
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