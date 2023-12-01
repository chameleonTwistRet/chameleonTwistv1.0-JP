#include "common.h"
#define FILEPAD {0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}


Lights1 D_08000000_Fred =
#include "assets/chameleons/Fred/light.light.inc.c"

//#######BODY
Vtx D_08000018_Fred[] = {
#include "assets/chameleons/Fred/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Fred = {
#include "assets/chameleons/Fred/body/body.mtx.inc.c"
};
unsigned char padding1_Fred[] = FILEPAD;

unsigned char D_080001A0_Fred[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Fred/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Fred[] = FILEPAD;
unsigned char D_080005A8_Fred[] = {
#include "build/include/assets/chameleons/Fred/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Fred[] = FILEPAD;

unsigned char D_080007B0_Fred[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Fred/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Fred[] = FILEPAD;
unsigned char D_080007D8_Fred[] = {
#include "build/include/assets/chameleons/Fred/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Fred[] = FILEPAD;

unsigned char D_080009E0_Fred[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Fred/body/number.ci4.png.inc.c"
};
unsigned char padding6_Fred[] = FILEPAD;
unsigned char D_08000BE8_Fred[] = {
#include "build/include/assets/chameleons/Fred/body/number.ci4.pal.inc.c"
};

//remove 'build/include/' to route it back to the repo assets
//change the end to '.gfx.inc.c' instead of 'GFX.inc.c'
//go into the yaml and remove 'GFX.ME' from the name and change the type from bin to gfxSeg (for better support of vtx's)
#include "build/include/assets/chameleons/Fred/body/bodyGFX.inc.c"
//#######

//#######BODYASSOCIATE
Mtx_f BodyAssociateMTX_Fred = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Fred/bodyAssociate/bodyAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/bodyAssociate/bodyAssociateGFX.inc.c"
//#######

//#######HEAD
Vtx head_Fred[] = {
#include "assets/chameleons/Fred/head/head.vtx.inc.c"
};
Mtx_f headMtx_Fred = {
#include "assets/chameleons/Fred/head/head.mtx.inc.c"
};
unsigned char padding7_Fred[] = FILEPAD;
unsigned char head_eyeL_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Fred[] = FILEPAD;
unsigned char head_eyeLPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Fred[] = FILEPAD;
unsigned char head_eyeR_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Fred[] = FILEPAD;
unsigned char head_eyeRPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Fred[] = FILEPAD;
unsigned char head_cheek_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Fred[] = FILEPAD;
unsigned char head_cheekPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/cheek.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Fred/head/headGFX.inc.c"
//#######

//#######BACKPACK
Vtx backpack_Fred[] = {
#include "assets/chameleons/Fred/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Fred = {
#include "assets/chameleons/Fred/backpack/backpack.mtx.inc.c"
};
unsigned char paddingD_Fred[] = FILEPAD;
unsigned char backpack_color_Fred[] = {
#include "build/include/assets/chameleons/Fred/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Fred[] = FILEPAD;
unsigned char backpack_colorPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/backpack/backpack.ci8.pal.inc.c"
};
#include "build/include/assets/chameleons/Fred/backpack/backpackGFX.inc.c"
//#######

//#######SHOE
Vtx shoe_Fred[] = {
#include "assets/chameleons/Fred/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Fred = {
#include "assets/chameleons/Fred/shoe/shoe.mtx.inc.c"
};
unsigned char paddingF_Fred[] = FILEPAD;
unsigned char shoe_color_Fred[] = {
#include "build/include/assets/chameleons/Fred/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Fred[] = FILEPAD;
unsigned char shoe_colorPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/shoe/shoe.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Fred/shoe/shoeGFX.inc.c"
//#######

//#######LSHOE
Vtx Lshoe_Fred[] = {
#include "assets/chameleons/Fred/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Fred = {
#include "assets/chameleons/Fred/Lshoe/Lshoe.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/Lshoe/LshoeGFX.inc.c"
//#######

//#######CUFF
Vtx cuff_Fred[] = {
#include "assets/chameleons/Fred/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Fred = {
#include "assets/chameleons/Fred/cuff/cuff.mtx.inc.c"
};
unsigned char padding11_Fred[] = FILEPAD;
unsigned char cuff_color_Fred[] = {
#include "build/include/assets/chameleons/Fred/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Fred[] = FILEPAD;
unsigned char cuff_colorPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/cuff/color.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Fred/cuff/cuffGFX.inc.c"
//#######

//#######LCUFF
Vtx Lcuff_Fred[] = {
#include "assets/chameleons/Fred/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Fred = {
#include "assets/chameleons/Fred/Lcuff/Lcuff.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/Lcuff/LcuffGFX.inc.c"
//#######

//#######WRIST
Vtx wrist_Fred[] = {
#include "assets/chameleons/Fred/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Fred = {
#include "assets/chameleons/Fred/wrist/wrist.mtx.inc.c"
};
unsigned char padding13_Fred[] = FILEPAD;
unsigned char wrist_color_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Fred[] = FILEPAD;
unsigned char wrist_colorPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Fred[] = FILEPAD;
unsigned char wrist_shape_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Fred[] = FILEPAD;
unsigned char wrist_shapePal_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wrist.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Fred/wrist/wristGFX.inc.c"
//#######

//#######LWRIST
Vtx Lwrist_Fred[] = {
#include "assets/chameleons/Fred/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Fred = {
#include "assets/chameleons/Fred/Lwrist/Lwrist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/Lwrist/LwristGFX.inc.c"
//#######

//#######SHOULDER
Vtx shoulder_Fred[] = {
#include "assets/chameleons/Fred/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Fred = {
#include "assets/chameleons/Fred/shoulder/shoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/shoulder/shoulderGFX.inc.c"
//#######

//#######LSHOULDER
Vtx Lshoulder_Fred[] = {
#include "assets/chameleons/Fred/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Fred = {
#include "assets/chameleons/Fred/Lshoulder/Lshoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/Lshoulder/LshoulderGFX.inc.c"
//#######

//#######FIST
Vtx fist_Fred[] = {
#include "assets/chameleons/Fred/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Fred = {
#include "assets/chameleons/Fred/fist/fist.mtx.inc.c"
};
unsigned char padding17_Fred[] = FILEPAD;
unsigned char fist_i1_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Fred[] = FILEPAD;
unsigned char fist_i1Pal_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Fred[] = FILEPAD;
unsigned char fist_i2_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Fred[] = FILEPAD;
unsigned char fist_i2Pal_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Fred[] = FILEPAD;
unsigned char fist_i3_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Fred[] = FILEPAD;
unsigned char fist_i3Pal_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Fred[] = FILEPAD;
unsigned char fist_diamond_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Fred[] = FILEPAD;
unsigned char fist_diamondPal_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Fred[] = FILEPAD;
unsigned char fist_i4_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Fred[] = FILEPAD;
unsigned char fist_i4Pal_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist4.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Fred/fist/fistGFX.inc.c"
//#######

//#######LFIST
Vtx Lfist_Fred[] = {
#include "assets/chameleons/Fred/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Fred = {
#include "assets/chameleons/Fred/Lfist/Lfist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/Lfist/LfistGFX.inc.c"
//#######

//#######RESTASSOCIATE
Mtx_f restAssociateMtx_Fred = {
#include "assets/chameleons/Fred/restAssociate/restAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Fred/restAssociate/restAssociateGFX.inc.c"
