#include "common.h"
//these are probably used in ram specifically so they can be animated
extern Mtx D_80129730_White; //body
extern Mtx D_80129770_White; //head
extern Mtx D_801297B0_White; //backpack
extern Mtx D_801297F0_White; //shoe
extern Mtx D_80129830_White; //Lshoe
extern Mtx D_80129870_White; //cuff
extern Mtx D_801298B0_White; //Lcuff
extern Mtx D_801298F0_White; //wrist
extern Mtx D_80129930_White; //Lwrist
extern Mtx D_80129970_White; //shoulder
extern Mtx D_801299B0_White; //Lshoulder
extern Mtx D_801299F0_White; //fist
extern Mtx D_80129A30_White; //Lfist

#include "assets/chameleons/White/light.light.inc.c"

#include "assets/chameleons/White/body/body.vtx.inc.c"
Mtx_f White_IMtx1 = IDENTITY;
unsigned char White_Pad1[] = FILEPAD;
unsigned char White_backpackStrap_ci4_PNG[] = {
#include "build/assets/chameleons/White/body/backpackStrap.ci4.png.inc.c"
};
unsigned char White_Pad2[] = FILEPAD;
unsigned char White_backpackStrap_ci4_PAL[] = {
#include "build/assets/chameleons/White/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char White_Pad3[] = FILEPAD;
unsigned char White_solidColor_ci4_PNG[] = {
#include "build/assets/chameleons/White/body/solidColor.ci4.png.inc.c"
};
unsigned char White_Pad4[] = FILEPAD;
unsigned char White_solidColor_ci4_PAL[] = {
#include "build/assets/chameleons/White/body/solidColor.ci4.pal.inc.c"
};
unsigned char White_Pad5[] = FILEPAD;
unsigned char White_number_ci4_PNG[] = {
#include "build/assets/chameleons/White/body/number.ci4.png.inc.c"
};
unsigned char White_Pad6[] = FILEPAD;
unsigned char White_number_ci4_PAL[] = {
#include "build/assets/chameleons/White/body/number.ci4.pal.inc.c"
};

#include "assets/chameleons/White/body/body.gfx.inc.c"

#include "assets/chameleons/White/bodyAssociate/bodyAssociate.mtx.inc.c"

#include "assets/chameleons/White/bodyAssociate/bodyAssociate.gfx.inc.c"

#include "assets/chameleons/White/head/head.vtx.inc.c"
Mtx_f White_IMtx2 = IDENTITY;
unsigned char White_Pad7[] = FILEPAD;
unsigned char White_eyeL_ci8_PNG[] = {
#include "build/assets/chameleons/White/head/eyeL.ci8.png.inc.c"
};
unsigned char White_Pad8[] = FILEPAD;
unsigned char White_eyeL_ci8_PAL[] = {
#include "build/assets/chameleons/White/head/eyeL.ci8.pal.inc.c"
};
unsigned char White_Pad9[] = FILEPAD;
unsigned char White_eyeR_ci8_PNG[] = {
#include "build/assets/chameleons/White/head/eyeR.ci8.png.inc.c"
};
unsigned char White_Pad10[] = FILEPAD;
unsigned char White_eyeR_ci8_PAL[] = {
#include "build/assets/chameleons/White/head/eyeR.ci8.pal.inc.c"
};
unsigned char White_Pad11[] = FILEPAD;
unsigned char White_cheek_ci4_PNG[] = {
#include "build/assets/chameleons/White/head/cheek.ci4.png.inc.c"
};
unsigned char White_Pad12[] = FILEPAD;
unsigned char White_cheek_ci4_PAL[] = {
#include "build/assets/chameleons/White/head/cheek.ci4.pal.inc.c"
};

#include "assets/chameleons/White/head/head.gfx.inc.c"

#include "assets/chameleons/White/backpack/backpack.vtx.inc.c"
Mtx_f White_IMtx3 = IDENTITY;
unsigned char White_Pad13[] = FILEPAD;
unsigned char White_backpack_ci8_PNG[] = {
#include "build/assets/chameleons/White/backpack/backpack.ci8.png.inc.c"
};
unsigned char White_Pad14[] = FILEPAD;
unsigned char White_backpack_ci8_PAL[] = {
#include "build/assets/chameleons/White/backpack/backpack.ci8.pal.inc.c"
};

#include "assets/chameleons/White/backpack/backpack.gfx.inc.c"

#include "assets/chameleons/White/shoe/shoe.vtx.inc.c"
Mtx_f White_IMtx4 = IDENTITY;
unsigned char White_Pad15[] = FILEPAD;
unsigned char White_shoe_ci4_PNG[] = {
#include "build/assets/chameleons/White/shoe/shoe.ci4.png.inc.c"
};
unsigned char White_Pad16[] = FILEPAD;
unsigned char White_shoe_ci4_PAL[] = {
#include "build/assets/chameleons/White/shoe/shoe.ci4.pal.inc.c"
};

#include "assets/chameleons/White/shoe/shoe.gfx.inc.c"

#include "assets/chameleons/White/Lshoe/Lshoe.vtx.inc.c"
Mtx_f White_IMtx5 = IDENTITY;

#include "assets/chameleons/White/Lshoe/Lshoe.gfx.inc.c"

#include "assets/chameleons/White/cuff/cuff.vtx.inc.c"
Mtx_f White_IMtx6 = IDENTITY;
unsigned char White_Pad17[] = FILEPAD;
unsigned char White_color_ci4_PNG[] = {
#include "build/assets/chameleons/White/cuff/color.ci4.png.inc.c"
};
unsigned char White_Pad18[] = FILEPAD;
unsigned char White_color_ci4_PAL[] = {
#include "build/assets/chameleons/White/cuff/color.ci4.pal.inc.c"
};

#include "assets/chameleons/White/cuff/cuff.gfx.inc.c"

#include "assets/chameleons/White/Lcuff/Lcuff.vtx.inc.c"
Mtx_f White_IMtx7 = IDENTITY;

#include "assets/chameleons/White/Lcuff/Lcuff.gfx.inc.c"

#include "assets/chameleons/White/wrist/wrist.vtx.inc.c"
Mtx_f White_IMtx8 = IDENTITY;
unsigned char White_Pad19[] = FILEPAD;
unsigned char White_wristColor_ci4_PNG[] = {
#include "build/assets/chameleons/White/wrist/wristColor.ci4.png.inc.c"
};
unsigned char White_Pad20[] = FILEPAD;
unsigned char White_wristColor_ci4_PAL[] = {
#include "build/assets/chameleons/White/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char White_Pad21[] = FILEPAD;
unsigned char White_wrist_ci4_PNG[] = {
#include "build/assets/chameleons/White/wrist/wrist.ci4.png.inc.c"
};
unsigned char White_Pad22[] = FILEPAD;
unsigned char White_wrist_ci4_PAL[] = {
#include "build/assets/chameleons/White/wrist/wrist.ci4.pal.inc.c"
};

#include "assets/chameleons/White/wrist/wrist.gfx.inc.c"

#include "assets/chameleons/White/Lwrist/Lwrist.vtx.inc.c"
Mtx_f White_IMtx9 = IDENTITY;

#include "assets/chameleons/White/Lwrist/Lwrist.gfx.inc.c"

#include "assets/chameleons/White/shoulder/shoulder.vtx.inc.c"
Mtx_f White_IMtx10 = IDENTITY;

#include "assets/chameleons/White/shoulder/shoulder.gfx.inc.c"

#include "assets/chameleons/White/Lshoulder/Lshoulder.vtx.inc.c"
Mtx_f White_IMtx11 = IDENTITY;

#include "assets/chameleons/White/Lshoulder/Lshoulder.gfx.inc.c"

#include "assets/chameleons/White/fist/fist.vtx.inc.c"
Mtx_f White_IMtx12 = IDENTITY;
unsigned char White_Pad23[] = FILEPAD;
unsigned char White_fist1_ci4_PNG[] = {
#include "build/assets/chameleons/White/fist/fist1.ci4.png.inc.c"
};
unsigned char White_Pad24[] = FILEPAD;
unsigned char White_fist1_ci4_PAL[] = {
#include "build/assets/chameleons/White/fist/fist1.ci4.pal.inc.c"
};
unsigned char White_Pad25[] = FILEPAD;
unsigned char White_fist2_ci4_PNG[] = {
#include "build/assets/chameleons/White/fist/fist2.ci4.png.inc.c"
};
unsigned char White_Pad26[] = FILEPAD;
unsigned char White_fist2_ci4_PAL[] = {
#include "build/assets/chameleons/White/fist/fist2.ci4.pal.inc.c"
};
unsigned char White_Pad27[] = FILEPAD;
unsigned char White_fist3_ci4_PNG[] = {
#include "build/assets/chameleons/White/fist/fist3.ci4.png.inc.c"
};
unsigned char White_Pad28[] = FILEPAD;
unsigned char White_fist3_ci4_PAL[] = {
#include "build/assets/chameleons/White/fist/fist3.ci4.pal.inc.c"
};
unsigned char White_Pad29[] = FILEPAD;
unsigned char White_fistDiamond_ci4_PNG[] = {
#include "build/assets/chameleons/White/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char White_Pad30[] = FILEPAD;
unsigned char White_fistDiamond_ci4_PAL[] = {
#include "build/assets/chameleons/White/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char White_Pad31[] = FILEPAD;
unsigned char White_fist4_ci4_PNG[] = {
#include "build/assets/chameleons/White/fist/fist4.ci4.png.inc.c"
};
unsigned char White_Pad32[] = FILEPAD;
unsigned char White_fist4_ci4_PAL[] = {
#include "build/assets/chameleons/White/fist/fist4.ci4.pal.inc.c"
};

#include "assets/chameleons/White/fist/fist.gfx.inc.c"

#include "assets/chameleons/White/Lfist/Lfist.vtx.inc.c"
Mtx_f White_IMtx13 = IDENTITY;

#include "assets/chameleons/White/Lfist/Lfist.gfx.inc.c"

#include "assets/chameleons/White/restAssociate/restAssociate.mtx.inc.c"



#include "assets/chameleons/White/restAssociate/restAssociate.gfx.inc.c"