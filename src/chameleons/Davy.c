#include "common.h"
extern Mtx D_80129730_Davy;
#define FILEPAD {0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
//asset names need to follow the format D_08


Lights1 D_08000000_Davy =
#include "assets/chameleons/Davy/light.light.inc.c"


Vtx D_08000018_Davy[] = {
#include "assets/chameleons/Davy/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Davy = {
#include "assets/chameleons/Davy/body/body.mtx.inc.c"
};
unsigned char padding1[] = FILEPAD;

unsigned char D_080001A0_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2[] = FILEPAD;
unsigned char D_080005A8_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3[] = FILEPAD;

unsigned char D_080007B0_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4[] = FILEPAD;
unsigned char D_080007D8_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5[] = FILEPAD;

unsigned char D_080009E0_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/number.ci4.png.inc.c"
};
unsigned char padding6[] = FILEPAD;
unsigned char D_08000BE8_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/number.ci4.pal.inc.c"
};


//remove 'build/include/' to route it back to the repo assets
//change the end to '.gfx.inc.c' instead of 'GFX.inc.c'
//go into the yaml and remove 'GFX.ME' from the name and change the type from bin to gfxSeg (for better support of vtx's)
#include "build/include/assets/chameleons/Davy/body/bodyGFX.inc.c"


#include "assets/chameleons/Davy/bodyAssociate/bodyAssociate.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/bodyAssociate/bodyAssociateGFX.inc.c"
#include "assets/chameleons/Davy/head/head.vtx.inc.c"
#include "assets/chameleons/Davy/head/head.mtx.inc.c"
unsigned char padding7[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/head/eyeL.ci8.png.inc.c"
unsigned char padding8[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/head/eyeL.ci8.pal.inc.c"
unsigned char padding9[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/head/eyeR.ci8.png.inc.c"
unsigned char paddingA[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/head/eyeR.ci8.pal.inc.c"
unsigned char paddingB[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/head/cheek.ci4.png.inc.c"
unsigned char paddingC[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/head/cheek.ci4.pal.inc.c"
#include "build/include/assets/chameleons/Davy/head/headGFX.inc.c"
#include "assets/chameleons/Davy/backpack/backpack.vtx.inc.c"
#include "assets/chameleons/Davy/backpack/backpack.mtx.inc.c"
unsigned char paddingD[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/backpack/backpack.ci8.png.inc.c"
unsigned char paddingE[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/backpack/backpack.ci8.pal.inc.c"
#include "build/include/assets/chameleons/Davy/backpack/backpackGFX.inc.c"
#include "assets/chameleons/Davy/shoe/shoe.vtx.inc.c"
#include "assets/chameleons/Davy/shoe/shoe.mtx.inc.c"
unsigned char paddingF[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/shoe/shoe.ci4.png.inc.c"
unsigned char padding10[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/shoe/shoe.ci4.pal.inc.c"
#include "build/include/assets/chameleons/Davy/shoe/shoeGFX.inc.c"
#include "assets/chameleons/Davy/Lshoe/Lshoe.vtx.inc.c"
#include "assets/chameleons/Davy/Lshoe/Lshoe.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/Lshoe/LshoeGFX.inc.c"
#include "assets/chameleons/Davy/cuff/cuff.vtx.inc.c"
#include "assets/chameleons/Davy/cuff/cuff.mtx.inc.c"
unsigned char padding11[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/cuff/color.ci4.png.inc.c"
unsigned char padding12[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/cuff/color.ci4.pal.inc.c"
#include "build/include/assets/chameleons/Davy/cuff/cuffGFX.inc.c"
#include "assets/chameleons/Davy/Lcuff/Lcuff.vtx.inc.c"
#include "assets/chameleons/Davy/Lcuff/Lcuff.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/Lcuff/LcuffGFX.inc.c"
#include "assets/chameleons/Davy/wrist/wrist.vtx.inc.c"
#include "assets/chameleons/Davy/wrist/wrist.mtx.inc.c"
unsigned char padding13[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/wrist/wristColor.ci4.png.inc.c"
unsigned char padding14[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/wrist/wristColor.ci4.pal.inc.c"
unsigned char padding15[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/wrist/wrist.ci4.png.inc.c"
unsigned char padding16[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/wrist/wrist.ci4.pal.inc.c"
#include "build/include/assets/chameleons/Davy/wrist/wristGFX.inc.c"
#include "assets/chameleons/Davy/Lwrist/Lwrist.vtx.inc.c"
#include "assets/chameleons/Davy/Lwrist/Lwrist.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/Lwrist/LwristGFX.inc.c"
#include "assets/chameleons/Davy/shoulder/shoulder.vtx.inc.c"
#include "assets/chameleons/Davy/shoulder/shoulder.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/shoulder/shoulderGFX.inc.c"
#include "assets/chameleons/Davy/Lshoulder/Lshoulder.vtx.inc.c"
#include "assets/chameleons/Davy/Lshoulder/Lshoulder.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/Lshoulder/LshoulderGFX.inc.c"
#include "assets/chameleons/Davy/fist/fist.vtx.inc.c"
#include "assets/chameleons/Davy/fist/fist.mtx.inc.c"
unsigned char padding17[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist1.ci4.png.inc.c"
unsigned char padding18[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist1.ci4.pal.inc.c"
unsigned char padding19[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist2.ci4.png.inc.c"
unsigned char padding1A[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist2.ci4.pal.inc.c"
unsigned char padding1B[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist3.ci4.png.inc.c"
unsigned char padding1C[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist3.ci4.pal.inc.c"
unsigned char padding1D[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fistDiamond.ci4.png.inc.c"
unsigned char padding1E[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fistDiamond.ci4.pal.inc.c"
unsigned char padding1F[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist4.ci4.png.inc.c"
unsigned char padding20[] = FILEPAD;
#include "build/include/assets/chameleons/Davy/fist/fist4.ci4.pal.inc.c"
#include "build/include/assets/chameleons/Davy/fist/fistGFX.inc.c"
#include "assets/chameleons/Davy/Lfist/Lfist.vtx.inc.c"
#include "assets/chameleons/Davy/Lfist/Lfist.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/Lfist/LfistGFX.inc.c"
#include "assets/chameleons/Davy/restAssociate/restAssociate.mtx.inc.c"
#include "build/include/assets/chameleons/Davy/restAssociate/restAssociateGFX.inc.c"
