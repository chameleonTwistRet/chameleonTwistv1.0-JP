#include "common.h"

#include "assets/img/Rabbit/groupMtx.mtx.inc.c"

Lights1 Rabbit_grouplight_Light = 
    #include "assets/img/Rabbit/grouplight.light.inc.c"

Vtx Rabbit_ear_Vtx[] = {
    #include "assets/img/Rabbit/ear/ear.vtx.inc.c"
};
Mtx Rabbit_IMtx1 = IDENTITY;

Gfx Rabbit_ear_Gfx[] = {
    #include "assets/img/Rabbit/ear/ear.gfx.inc.c"
};

Vtx Rabbit_earL_Vtx[] = {
    #include "assets/img/Rabbit/earL/earL.vtx.inc.c"
};
Mtx Rabbit_IMtx2 = IDENTITY;

Gfx Rabbit_earL_Gfx[] = {
    #include "assets/img/Rabbit/earL/earL.gfx.inc.c"
};

Vtx Rabbit_head_Vtx[] = {
    #include "assets/img/Rabbit/head/head.vtx.inc.c"
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

Gfx Rabbit_head_Gfx[] = {
    #include "assets/img/Rabbit/head/head.gfx.inc.c"
};

Vtx Rabbit_foot_Vtx[] = {
    #include "assets/img/Rabbit/foot/foot.vtx.inc.c"
};
Mtx Rabbit_IMtx4 = IDENTITY;

Gfx Rabbit_foot_Gfx[] = {
    #include "assets/img/Rabbit/foot/foot.gfx.inc.c"
};

Vtx Rabbit_footL_Vtx[] = {
    #include "assets/img/Rabbit/footL/footL.vtx.inc.c"
};
Mtx Rabbit_IMtx5 = IDENTITY;

Gfx Rabbit_footL_Gfx[] = {
    #include "assets/img/Rabbit/footL/footL.gfx.inc.c"
};

Vtx Rabbit_leg_Vtx[] = {
    #include "assets/img/Rabbit/leg/leg.vtx.inc.c"
};
Mtx Rabbit_IMtx6 = IDENTITY;

Gfx Rabbit_leg_Gfx[] = {
    #include "assets/img/Rabbit/leg/leg.gfx.inc.c"
};

Vtx Rabbit_body_Vtx[] = {
    #include "assets/img/Rabbit/body/body.vtx.inc.c"
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

Gfx Rabbit_body_Gfx[] = {
    #include "assets/img/Rabbit/body/body.gfx.inc.c"
};

Vtx Rabbit_legL_Vtx[] = {
    #include "assets/img/Rabbit/legL/legL.vtx.inc.c"
};
Mtx Rabbit_IMtx8 = IDENTITY;

Gfx Rabbit_legL_Gfx[] = {
    #include "assets/img/Rabbit/legL/legL.gfx.inc.c"
};

Vtx Rabbit_tail_Vtx[] = {
    #include "assets/img/Rabbit/tail/tail.vtx.inc.c"
};
Mtx Rabbit_IMtx9 = IDENTITY;

Gfx Rabbit_tail_Gfx[] = {
    #include "assets/img/Rabbit/tail/tail.gfx.inc.c"
};

Vtx Rabbit_watch_Vtx[] = {
    #include "assets/img/Rabbit/watch/watch.vtx.inc.c"
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

Gfx Rabbit_watch_Gfx[] = {
    #include "assets/img/Rabbit/watch/watch.gfx.inc.c"
};

#include "assets/img/Rabbit/restassociate/restassociate.mtx.inc.c"

Gfx Rabbit_restassociate_Gfx[] = {
    #include "assets/img/Rabbit/restassociate/restassociate.gfx.inc.c"
};

Anim Rabbit_unk1Header_Animh = {
    #include "assets/img/Rabbit/anim/unk1Header.animH.inc.c"
};

Mtx Rabbit_unk1_Animarr[15][10] = {
    #include "assets/img/Rabbit/anim/unk1.animArr.inc.c"
};

AnimPointer Rabbit_unk1Pointers_Animp[1] = {
{&Rabbit_unk1Header_Animh.frames, &Rabbit_unk1Header_Animh.objects, &Rabbit_unk1_Animarr[0][0]}
};
