#include "common.h"
extern Mtx D_80129730_Rabbit; // ear
extern Mtx D_80129770_Rabbit; // earL
extern Mtx D_801297B0_Rabbit; // head
extern Mtx D_801297F0_Rabbit; // foot
extern Mtx D_80129830_Rabbit; // footL
extern Mtx D_80129870_Rabbit; // leg
extern Mtx D_801298B0_Rabbit; // body
extern Mtx D_801298F0_Rabbit; // legL
extern Mtx D_80129930_Rabbit; // tail
extern Mtx D_80129970_Rabbit; // watch

#include "assets/img/Rabbit/groupMtx.mtx.inc.c"

#include "assets/img/Rabbit/grouplight.light.inc.c"

#include "assets/img/Rabbit/ear/ear.vtx.inc.c"
Mtx Rabbit_IMtx1 = IDENTITY;

#include "assets/img/Rabbit/ear/ear.gfx.inc.c"

#include "assets/img/Rabbit/earL/earL.vtx.inc.c"
Mtx Rabbit_IMtx2 = IDENTITY;

#include "assets/img/Rabbit/earL/earL.gfx.inc.c"

#include "assets/img/Rabbit/head/head.vtx.inc.c"
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

#include "assets/img/Rabbit/head/head.gfx.inc.c"

#include "assets/img/Rabbit/foot/foot.vtx.inc.c"
Mtx Rabbit_IMtx4 = IDENTITY;

#include "assets/img/Rabbit/foot/foot.gfx.inc.c"

#include "assets/img/Rabbit/footL/footL.vtx.inc.c"
Mtx Rabbit_IMtx5 = IDENTITY;

#include "assets/img/Rabbit/footL/footL.gfx.inc.c"

#include "assets/img/Rabbit/leg/leg.vtx.inc.c"
Mtx Rabbit_IMtx6 = IDENTITY;

#include "assets/img/Rabbit/leg/leg.gfx.inc.c"

#include "assets/img/Rabbit/body/body.vtx.inc.c"
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

#include "assets/img/Rabbit/body/body.gfx.inc.c"

#include "assets/img/Rabbit/legL/legL.vtx.inc.c"
Mtx Rabbit_IMtx8 = IDENTITY;

#include "assets/img/Rabbit/legL/legL.gfx.inc.c"

#include "assets/img/Rabbit/tail/tail.vtx.inc.c"
Mtx Rabbit_IMtx9 = IDENTITY;

#include "assets/img/Rabbit/tail/tail.gfx.inc.c"

#include "assets/img/Rabbit/watch/watch.vtx.inc.c"
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

#include "assets/img/Rabbit/watch/watch.gfx.inc.c"

#include "assets/img/Rabbit/restassociate/restassociate.mtx.inc.c"

#include "assets/img/Rabbit/restassociate/restassociate.gfx.inc.c"

#include "assets/img/Rabbit/anim/unk1Header.animH.inc.c"

#include "assets/img/Rabbit/anim/unk1.animArr.inc.c"

#include "assets/img/Rabbit/anim/unk1Pointers.animP.inc.c"
