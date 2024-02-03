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
#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to spit useless files

#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

Lights1 White_light_Light =
#include "assets/chameleons/White/light.light.inc.c"
Vtx White_body_Vtx[] = {
#include "assets/chameleons/White/body/body.vtx.inc.c"
};
Mtx_f White_IMtx1 = IDENTITY;
unsigned char White_Pad1[] = FILEPAD;
unsigned char White_backpackStrap_PNG[] = {
#include "build/include/assets/chameleons/White/body/backpackStrap.ci4.png.inc.c"
};
unsigned char White_Pad2[] = FILEPAD;
unsigned char White_backpackStrap_PAL[] = {
#include "build/include/assets/chameleons/White/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char White_Pad3[] = FILEPAD;
unsigned char White_solidColor_PNG[] = {
#include "build/include/assets/chameleons/White/body/solidColor.ci4.png.inc.c"
};
unsigned char White_Pad4[] = FILEPAD;
unsigned char White_solidColor_PAL[] = {
#include "build/include/assets/chameleons/White/body/solidColor.ci4.pal.inc.c"
};
unsigned char White_Pad5[] = FILEPAD;
unsigned char White_number_PNG[] = {
#include "build/include/assets/chameleons/White/body/number.ci4.png.inc.c"
};
unsigned char White_Pad6[] = FILEPAD;
unsigned char White_number_PAL[] = {
#include "build/include/assets/chameleons/White/body/number.ci4.pal.inc.c"
};
Gfx White_body_Gfx[] = {
#include "assets/chameleons/White/body/body.gfx.inc.c"
};
Mtx_f White_bodyAssociate_Mtx = {
#include "assets/chameleons/White/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx White_bodyAssociate_Gfx[] = {
#include "assets/chameleons/White/bodyAssociate/bodyAssociate.gfx.inc.c"
};
Vtx White_head_Vtx[] = {
#include "assets/chameleons/White/head/head.vtx.inc.c"
};
Mtx_f White_IMtx2 = IDENTITY;
unsigned char White_Pad7[] = FILEPAD;
unsigned char White_eyeL_PNG[] = {
#include "build/include/assets/chameleons/White/head/eyeL.ci8.png.inc.c"
};
unsigned char White_Pad8[] = FILEPAD;
unsigned char White_eyeL_PAL[] = {
#include "build/include/assets/chameleons/White/head/eyeL.ci8.pal.inc.c"
};
unsigned char White_Pad9[] = FILEPAD;
unsigned char White_eyeR_PNG[] = {
#include "build/include/assets/chameleons/White/head/eyeR.ci8.png.inc.c"
};
unsigned char White_Pad10[] = FILEPAD;
unsigned char White_eyeR_PAL[] = {
#include "build/include/assets/chameleons/White/head/eyeR.ci8.pal.inc.c"
};
unsigned char White_Pad11[] = FILEPAD;
unsigned char White_cheek_PNG[] = {
#include "build/include/assets/chameleons/White/head/cheek.ci4.png.inc.c"
};
unsigned char White_Pad12[] = FILEPAD;
unsigned char White_cheek_PAL[] = {
#include "build/include/assets/chameleons/White/head/cheek.ci4.pal.inc.c"
};
Gfx White_head_Gfx[] = {
#include "assets/chameleons/White/head/head.gfx.inc.c"
};
Vtx White_backpack_Vtx[] = {
#include "assets/chameleons/White/backpack/backpack.vtx.inc.c"
};
Mtx_f White_IMtx3 = IDENTITY;
unsigned char White_Pad13[] = FILEPAD;
unsigned char White_backpack_PNG[] = {
#include "build/include/assets/chameleons/White/backpack/backpack.ci8.png.inc.c"
};
unsigned char White_Pad14[] = FILEPAD;
unsigned char White_backpack_PAL[] = {
#include "build/include/assets/chameleons/White/backpack/backpack.ci8.pal.inc.c"
};
Gfx White_backpack_Gfx[] = {
#include "assets/chameleons/White/backpack/backpack.gfx.inc.c"
};
Vtx White_shoe_Vtx[] = {
#include "assets/chameleons/White/shoe/shoe.vtx.inc.c"
};
Mtx_f White_IMtx4 = IDENTITY;
unsigned char White_Pad15[] = FILEPAD;
unsigned char White_shoe_PNG[] = {
#include "build/include/assets/chameleons/White/shoe/shoe.ci4.png.inc.c"
};
unsigned char White_Pad16[] = FILEPAD;
unsigned char White_shoe_PAL[] = {
#include "build/include/assets/chameleons/White/shoe/shoe.ci4.pal.inc.c"
};
Gfx White_shoe_Gfx[] = {
#include "assets/chameleons/White/shoe/shoe.gfx.inc.c"
};
Vtx White_Lshoe_Vtx[] = {
#include "assets/chameleons/White/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f White_IMtx5 = IDENTITY;
Gfx White_Lshoe_Gfx[] = {
#include "assets/chameleons/White/Lshoe/Lshoe.gfx.inc.c"
};
Vtx White_cuff_Vtx[] = {
#include "assets/chameleons/White/cuff/cuff.vtx.inc.c"
};
Mtx_f White_IMtx6 = IDENTITY;
unsigned char White_Pad17[] = FILEPAD;
unsigned char White_color_PNG[] = {
#include "build/include/assets/chameleons/White/cuff/color.ci4.png.inc.c"
};
unsigned char White_Pad18[] = FILEPAD;
unsigned char White_color_PAL[] = {
#include "build/include/assets/chameleons/White/cuff/color.ci4.pal.inc.c"
};
Gfx White_cuff_Gfx[] = {
#include "assets/chameleons/White/cuff/cuff.gfx.inc.c"
};
Vtx White_Lcuff_Vtx[] = {
#include "assets/chameleons/White/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f White_IMtx7 = IDENTITY;
Gfx White_Lcuff_Gfx[] = {
#include "assets/chameleons/White/Lcuff/Lcuff.gfx.inc.c"
};
Vtx White_wrist_Vtx[] = {
#include "assets/chameleons/White/wrist/wrist.vtx.inc.c"
};
Mtx_f White_IMtx8 = IDENTITY;
unsigned char White_Pad19[] = FILEPAD;
unsigned char White_wristColor_PNG[] = {
#include "build/include/assets/chameleons/White/wrist/wristColor.ci4.png.inc.c"
};
unsigned char White_Pad20[] = FILEPAD;
unsigned char White_wristColor_PAL[] = {
#include "build/include/assets/chameleons/White/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char White_Pad21[] = FILEPAD;
unsigned char White_wrist_PNG[] = {
#include "build/include/assets/chameleons/White/wrist/wrist.ci4.png.inc.c"
};
unsigned char White_Pad22[] = FILEPAD;
unsigned char White_wrist_PAL[] = {
#include "build/include/assets/chameleons/White/wrist/wrist.ci4.pal.inc.c"
};
Gfx White_wrist_Gfx[] = {
#include "assets/chameleons/White/wrist/wrist.gfx.inc.c"
};
Vtx White_Lwrist_Vtx[] = {
#include "assets/chameleons/White/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f White_IMtx9 = IDENTITY;
Gfx White_Lwrist_Gfx[] = {
#include "assets/chameleons/White/Lwrist/Lwrist.gfx.inc.c"
};
Vtx White_shoulder_Vtx[] = {
#include "assets/chameleons/White/shoulder/shoulder.vtx.inc.c"
};
Mtx_f White_IMtx10 = IDENTITY;
Gfx White_shoulder_Gfx[] = {
#include "assets/chameleons/White/shoulder/shoulder.gfx.inc.c"
};
Vtx White_Lshoulder_Vtx[] = {
#include "assets/chameleons/White/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f White_IMtx11 = IDENTITY;
Gfx White_Lshoulder_Gfx[] = {
#include "assets/chameleons/White/Lshoulder/Lshoulder.gfx.inc.c"
};
Vtx White_fist_Vtx[] = {
#include "assets/chameleons/White/fist/fist.vtx.inc.c"
};
Mtx_f White_IMtx12 = IDENTITY;
unsigned char White_Pad23[] = FILEPAD;
unsigned char White_fist1_PNG[] = {
#include "build/include/assets/chameleons/White/fist/fist1.ci4.png.inc.c"
};
unsigned char White_Pad24[] = FILEPAD;
unsigned char White_fist1_PAL[] = {
#include "build/include/assets/chameleons/White/fist/fist1.ci4.pal.inc.c"
};
unsigned char White_Pad25[] = FILEPAD;
unsigned char White_fist2_PNG[] = {
#include "build/include/assets/chameleons/White/fist/fist2.ci4.png.inc.c"
};
unsigned char White_Pad26[] = FILEPAD;
unsigned char White_fist2_PAL[] = {
#include "build/include/assets/chameleons/White/fist/fist2.ci4.pal.inc.c"
};
unsigned char White_Pad27[] = FILEPAD;
unsigned char White_fist3_PNG[] = {
#include "build/include/assets/chameleons/White/fist/fist3.ci4.png.inc.c"
};
unsigned char White_Pad28[] = FILEPAD;
unsigned char White_fist3_PAL[] = {
#include "build/include/assets/chameleons/White/fist/fist3.ci4.pal.inc.c"
};
unsigned char White_Pad29[] = FILEPAD;
unsigned char White_fistDiamond_PNG[] = {
#include "build/include/assets/chameleons/White/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char White_Pad30[] = FILEPAD;
unsigned char White_fistDiamond_PAL[] = {
#include "build/include/assets/chameleons/White/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char White_Pad31[] = FILEPAD;
unsigned char White_fist4_PNG[] = {
#include "build/include/assets/chameleons/White/fist/fist4.ci4.png.inc.c"
};
unsigned char White_Pad32[] = FILEPAD;
unsigned char White_fist4_PAL[] = {
#include "build/include/assets/chameleons/White/fist/fist4.ci4.pal.inc.c"
};
Gfx White_fist_Gfx[] = {
#include "assets/chameleons/White/fist/fist.gfx.inc.c"
};
Vtx White_Lfist_Vtx[] = {
#include "assets/chameleons/White/Lfist/Lfist.vtx.inc.c"
};
Mtx_f White_IMtx13 = IDENTITY;
Gfx White_Lfist_Gfx[] = {
#include "assets/chameleons/White/Lfist/Lfist.gfx.inc.c"
};
Mtx_f White_restAssociate_Mtx = {
#include "assets/chameleons/White/restAssociate/restAssociate.mtx.inc.c"
};
Gfx White_restAssociate_Gfx[] = {
#include "assets/chameleons/White/restAssociate/restAssociate.gfx.inc.c"
};
