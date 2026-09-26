#include "common.h"

#include "assets/img/Rabbit/groupMtx.mtx.inc.c"

Lights1 Rabbit_grouplight_Light = 
    #include "assets/img/Rabbit/grouplight.light.inc.c"

Vtx Rabbit_R_Ear_Vtx[] = {
    #include "assets/img/Rabbit/R_Ear/R_Ear.vtx.inc.c"
};
Mtx Rabbit_IMtx1 = IDENTITY;

Gfx Rabbit_R_Ear_Gfx[] = {
    #include "assets/img/Rabbit/R_Ear/R_Ear.gfx.inc.c"
};

Vtx Rabbit_L_Ear_Vtx[] = {
    #include "assets/img/Rabbit/L_Ear/L_Ear.vtx.inc.c"
};
Mtx Rabbit_IMtx2 = IDENTITY;

Gfx Rabbit_L_Ear_Gfx[] = {
    #include "assets/img/Rabbit/L_Ear/L_Ear.gfx.inc.c"
};

Vtx Rabbit_Head_Vtx[] = {
    #include "assets/img/Rabbit/Head/Head.vtx.inc.c"
};
Mtx Rabbit_IMtx3 = IDENTITY;
unsigned char Rabbit_Pad1[] = FILEPAD;
unsigned char Rabbit_eye_ci4_PNG[] = {
#include "build/assets/img/Rabbit/head/eye.ci4.png.inc.c"
};
unsigned char Rabbit_Pad2[] = FILEPAD;
unsigned char Rabbit_eye_ci4_PAL[] = {
#include "build/assets/img/Rabbit/head/eye.ci4.pal.inc.c"
};
unsigned char Rabbit_Pad3[] = FILEPAD;
unsigned char Rabbit_mouth_ci4_PNG[] = {
#include "build/assets/img/Rabbit/head/mouth.ci4.png.inc.c"
};
unsigned char Rabbit_Pad4[] = FILEPAD;
unsigned char Rabbit_mouth_ci4_PAL[] = {
#include "build/assets/img/Rabbit/head/mouth.ci4.pal.inc.c"
};

Gfx Rabbit_Head_Gfx[] = {
    #include "assets/img/Rabbit/Head/Head.gfx.inc.c"
};

Vtx Rabbit_R_Foot_Vtx[] = {
    #include "assets/img/Rabbit/R_Foot/R_Foot.vtx.inc.c"
};
Mtx Rabbit_IMtx4 = IDENTITY;

Gfx Rabbit_R_Foot_Gfx[] = {
    #include "assets/img/Rabbit/R_Foot/R_Foot.gfx.inc.c"
};

Vtx Rabbit_L_Foot_Vtx[] = {
    #include "assets/img/Rabbit/L_Foot/L_Foot.vtx.inc.c"
};
Mtx Rabbit_IMtx5 = IDENTITY;

Gfx Rabbit_L_Foot_Gfx[] = {
    #include "assets/img/Rabbit/L_Foot/L_Foot.gfx.inc.c"
};

Vtx Rabbit_L_Leg_Vtx[] = {
    #include "assets/img/Rabbit/L_Leg/L_Leg.vtx.inc.c"
};
Mtx Rabbit_IMtx6 = IDENTITY;

Gfx Rabbit_L_Leg_Gfx[] = {
    #include "assets/img/Rabbit/L_Leg/L_Leg.gfx.inc.c"
};

Vtx Rabbit_Torso_Vtx[] = {
    #include "assets/img/Rabbit/Torso/Torso.vtx.inc.c"
};
Mtx Rabbit_IMtx7 = IDENTITY;
unsigned char Rabbit_Pad5[] = FILEPAD;
unsigned char Rabbit_tuxedo_ci4_PNG[] = {
#include "build/assets/img/Rabbit/body/tuxedo.ci4.png.inc.c"
};
unsigned char Rabbit_Pad6[] = FILEPAD;
unsigned char Rabbit_tuxedo_ci4_PAL[] = {
#include "build/assets/img/Rabbit/body/tuxedo.ci4.pal.inc.c"
};
unsigned char Rabbit_Pad7[] = FILEPAD;
unsigned char Rabbit_tuxedoTop_ci4_PNG[] = {
#include "build/assets/img/Rabbit/body/tuxedoTop.ci4.png.inc.c"
};
unsigned char Rabbit_Pad8[] = FILEPAD;
unsigned char Rabbit_tuxedoTop_ci4_PAL[] = {
#include "build/assets/img/Rabbit/body/tuxedoTop.ci4.pal.inc.c"
};

Gfx Rabbit_Torso_Gfx[] = {
    #include "assets/img/Rabbit/Torso/Torso.gfx.inc.c"
};

Vtx Rabbit_R_Leg_Vtx[] = {
    #include "assets/img/Rabbit/R_Leg/R_Leg.vtx.inc.c"
};
Mtx Rabbit_IMtx8 = IDENTITY;

Gfx Rabbit_R_Leg_Gfx[] = {
    #include "assets/img/Rabbit/R_Leg/R_Leg.gfx.inc.c"
};

Vtx Rabbit_Tail_Vtx[] = {
    #include "assets/img/Rabbit/Tail/Tail.vtx.inc.c"
};
Mtx Rabbit_IMtx9 = IDENTITY;

Gfx Rabbit_Tail_Gfx[] = {
    #include "assets/img/Rabbit/Tail/Tail.gfx.inc.c"
};

Vtx Rabbit_Watch_Vtx[] = {
    #include "assets/img/Rabbit/Watch/Watch.vtx.inc.c"
};
Mtx Rabbit_IMtx10 = IDENTITY;
unsigned char Rabbit_Pad9[] = FILEPAD;
unsigned char Rabbit_watch_ci4_PNG[] = {
#include "build/assets/img/Rabbit/watch/watch.ci4.png.inc.c"
};
unsigned char Rabbit_Pad10[] = FILEPAD;
unsigned char Rabbit_watch_ci4_PAL[] = {
#include "build/assets/img/Rabbit/watch/watch.ci4.pal.inc.c"
};
unsigned char Rabbit_Pad11[] = FILEPAD;
unsigned char Rabbit_watchColor_ci4_PNG[] = {
#include "build/assets/img/Rabbit/watch/watchColor.ci4.png.inc.c"
};
unsigned char Rabbit_Pad12[] = FILEPAD;
unsigned char Rabbit_watchColor_ci4_PAL[] = {
#include "build/assets/img/Rabbit/watch/watchColor.ci4.pal.inc.c"
};

Gfx Rabbit_Watch_Gfx[] = {
    #include "assets/img/Rabbit/Watch/Watch.gfx.inc.c"
};

#include "assets/img/Rabbit/Model/Model.mtx.inc.c"

Gfx Rabbit_Model_Gfx[] = {
    #include "assets/img/Rabbit/Model/Model.gfx.inc.c"
};

Anim Rabbit_HoppingHeader_Animh = {
    #include "assets/img/Rabbit/anim/HoppingHeader.animH.inc.c"
};

Mtx Rabbit_Hopping_Animarr[15][10] = {
    #include "assets/img/Rabbit/anim/Hopping.animArr.inc.c"
};

AnimPointer Rabbit_HoppingPointers_Animp[1] = {
{&Rabbit_HoppingHeader_Animh.frames, &Rabbit_HoppingHeader_Animh.objects, Rabbit_Hopping_Animarr[0]}
};
