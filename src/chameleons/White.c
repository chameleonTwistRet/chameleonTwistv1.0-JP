#include "common.h"
#define FILEPAD {0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}


Lights1 D_08000000_White =
#include "assets/chameleons/White/light.light.inc.c"

//#######BODY
Vtx D_08000018_White[] = {
#include "assets/chameleons/White/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_White = {
#include "assets/chameleons/White/body/body.mtx.inc.c"
};
unsigned char padding1_White[] = FILEPAD;

unsigned char D_080001A0_White[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/White/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_White[] = FILEPAD;
unsigned char D_080005A8_White[] = {
#include "build/include/assets/chameleons/White/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_White[] = FILEPAD;

unsigned char D_080007B0_White[] = { // the solid color used for the body
#include "build/include/assets/chameleons/White/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_White[] = FILEPAD;
unsigned char D_080007D8_White[] = {
#include "build/include/assets/chameleons/White/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_White[] = FILEPAD;

unsigned char D_080009E0_White[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/White/body/number.ci4.png.inc.c"
};
unsigned char padding6_White[] = FILEPAD;
unsigned char D_08000BE8_White[] = {
#include "build/include/assets/chameleons/White/body/number.ci4.pal.inc.c"
};

//remove 'build/include/' to route it back to the repo assets
//change the end to '.gfx.inc.c' instead of 'GFX.inc.c'
//go into the yaml and remove 'GFX.ME' from the name and change the type from bin to gfxSeg (for better support of vtx's)
#include "build/include/assets/chameleons/White/body/bodyGFX.inc.c"
//#######

//#######BODYASSOCIATE
Mtx_f BodyAssociateMTX_White = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/White/bodyAssociate/bodyAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/bodyAssociate/bodyAssociateGFX.inc.c"
//#######

//#######HEAD
Vtx head_White[] = {
#include "assets/chameleons/White/head/head.vtx.inc.c"
};
Mtx_f headMtx_White = {
#include "assets/chameleons/White/head/head.mtx.inc.c"
};
unsigned char padding7_White[] = FILEPAD;
unsigned char head_eyeL_White[] = {
#include "build/include/assets/chameleons/White/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_White[] = FILEPAD;
unsigned char head_eyeLPal_White[] = {
#include "build/include/assets/chameleons/White/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_White[] = FILEPAD;
unsigned char head_eyeR_White[] = {
#include "build/include/assets/chameleons/White/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_White[] = FILEPAD;
unsigned char head_eyeRPal_White[] = {
#include "build/include/assets/chameleons/White/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_White[] = FILEPAD;
unsigned char head_cheek_White[] = {
#include "build/include/assets/chameleons/White/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_White[] = FILEPAD;
unsigned char head_cheekPal_White[] = {
#include "build/include/assets/chameleons/White/head/cheek.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/White/head/headGFX.inc.c"
//#######

//#######BACKPACK
Vtx backpack_White[] = {
#include "assets/chameleons/White/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_White = {
#include "assets/chameleons/White/backpack/backpack.mtx.inc.c"
};
unsigned char paddingD_White[] = FILEPAD;
unsigned char backpack_color_White[] = {
#include "build/include/assets/chameleons/White/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_White[] = FILEPAD;
unsigned char backpack_colorPal_White[] = {
#include "build/include/assets/chameleons/White/backpack/backpack.ci8.pal.inc.c"
};
#include "build/include/assets/chameleons/White/backpack/backpackGFX.inc.c"
//#######

//#######SHOE
Vtx shoe_White[] = {
#include "assets/chameleons/White/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_White = {
#include "assets/chameleons/White/shoe/shoe.mtx.inc.c"
};
unsigned char paddingF_White[] = FILEPAD;
unsigned char shoe_color_White[] = {
#include "build/include/assets/chameleons/White/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_White[] = FILEPAD;
unsigned char shoe_colorPal_White[] = {
#include "build/include/assets/chameleons/White/shoe/shoe.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/White/shoe/shoeGFX.inc.c"
//#######

//#######LSHOE
Vtx Lshoe_White[] = {
#include "assets/chameleons/White/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_White = {
#include "assets/chameleons/White/Lshoe/Lshoe.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/Lshoe/LshoeGFX.inc.c"
//#######

//#######CUFF
Vtx cuff_White[] = {
#include "assets/chameleons/White/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_White = {
#include "assets/chameleons/White/cuff/cuff.mtx.inc.c"
};
unsigned char padding11_White[] = FILEPAD;
unsigned char cuff_color_White[] = {
#include "build/include/assets/chameleons/White/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_White[] = FILEPAD;
unsigned char cuff_colorPal_White[] = {
#include "build/include/assets/chameleons/White/cuff/color.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/White/cuff/cuffGFX.inc.c"
//#######

//#######LCUFF
Vtx Lcuff_White[] = {
#include "assets/chameleons/White/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_White = {
#include "assets/chameleons/White/Lcuff/Lcuff.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/Lcuff/LcuffGFX.inc.c"
//#######

//#######WRIST
Vtx wrist_White[] = {
#include "assets/chameleons/White/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_White = {
#include "assets/chameleons/White/wrist/wrist.mtx.inc.c"
};
unsigned char padding13_White[] = FILEPAD;
unsigned char wrist_color_White[] = {
#include "build/include/assets/chameleons/White/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_White[] = FILEPAD;
unsigned char wrist_colorPal_White[] = {
#include "build/include/assets/chameleons/White/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_White[] = FILEPAD;
unsigned char wrist_shape_White[] = {
#include "build/include/assets/chameleons/White/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_White[] = FILEPAD;
unsigned char wrist_shapePal_White[] = {
#include "build/include/assets/chameleons/White/wrist/wrist.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/White/wrist/wristGFX.inc.c"
//#######

//#######LWRIST
Vtx Lwrist_White[] = {
#include "assets/chameleons/White/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_White = {
#include "assets/chameleons/White/Lwrist/Lwrist.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/Lwrist/LwristGFX.inc.c"
//#######

//#######SHOULDER
Vtx shoulder_White[] = {
#include "assets/chameleons/White/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_White = {
#include "assets/chameleons/White/shoulder/shoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/shoulder/shoulderGFX.inc.c"
//#######

//#######LSHOULDER
Vtx Lshoulder_White[] = {
#include "assets/chameleons/White/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_White = {
#include "assets/chameleons/White/Lshoulder/Lshoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/Lshoulder/LshoulderGFX.inc.c"
//#######

//#######FIST
Vtx fist_White[] = {
#include "assets/chameleons/White/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_White = {
#include "assets/chameleons/White/fist/fist.mtx.inc.c"
};
unsigned char padding17_White[] = FILEPAD;
unsigned char fist_i1_White[] = {
#include "build/include/assets/chameleons/White/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_White[] = FILEPAD;
unsigned char fist_i1Pal_White[] = {
#include "build/include/assets/chameleons/White/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_White[] = FILEPAD;
unsigned char fist_i2_White[] = {
#include "build/include/assets/chameleons/White/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_White[] = FILEPAD;
unsigned char fist_i2Pal_White[] = {
#include "build/include/assets/chameleons/White/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_White[] = FILEPAD;
unsigned char fist_i3_White[] = {
#include "build/include/assets/chameleons/White/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_White[] = FILEPAD;
unsigned char fist_i3Pal_White[] = {
#include "build/include/assets/chameleons/White/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_White[] = FILEPAD;
unsigned char fist_diamond_White[] = {
#include "build/include/assets/chameleons/White/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_White[] = FILEPAD;
unsigned char fist_diamondPal_White[] = {
#include "build/include/assets/chameleons/White/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_White[] = FILEPAD;
unsigned char fist_i4_White[] = {
#include "build/include/assets/chameleons/White/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_White[] = FILEPAD;
unsigned char fist_i4Pal_White[] = {
#include "build/include/assets/chameleons/White/fist/fist4.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/White/fist/fistGFX.inc.c"
//#######

//#######LFIST
Vtx Lfist_White[] = {
#include "assets/chameleons/White/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_White = {
#include "assets/chameleons/White/Lfist/Lfist.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/Lfist/LfistGFX.inc.c"
//#######

//#######RESTASSOCIATE
Mtx_f restAssociateMtx_White = {
#include "assets/chameleons/White/restAssociate/restAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/White/restAssociate/restAssociateGFX.inc.c"
