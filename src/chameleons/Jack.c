#include "common.h"
#define FILEPAD {0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}


Lights1 D_08000000_Jack =
#include "assets/chameleons/Jack/light.light.inc.c"

//#######BODY
Vtx D_08000018_Jack[] = {
#include "assets/chameleons/Jack/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Jack = {
#include "assets/chameleons/Jack/body/body.mtx.inc.c"
};
unsigned char padding1_Jack[] = FILEPAD;

unsigned char D_080001A0_Jack[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Jack/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Jack[] = FILEPAD;
unsigned char D_080005A8_Jack[] = {
#include "build/include/assets/chameleons/Jack/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Jack[] = FILEPAD;

unsigned char D_080007B0_Jack[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Jack/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Jack[] = FILEPAD;
unsigned char D_080007D8_Jack[] = {
#include "build/include/assets/chameleons/Jack/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Jack[] = FILEPAD;

unsigned char D_080009E0_Jack[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Jack/body/number.ci4.png.inc.c"
};
unsigned char padding6_Jack[] = FILEPAD;
unsigned char D_08000BE8_Jack[] = {
#include "build/include/assets/chameleons/Jack/body/number.ci4.pal.inc.c"
};

//remove 'build/include/' to route it back to the repo assets
//change the end to '.gfx.inc.c' instead of 'GFX.inc.c'
//go into the yaml and remove 'GFX.ME' from the name and change the type from bin to gfxSeg (for better support of vtx's)
#include "build/include/assets/chameleons/Jack/body/bodyGFX.inc.c"
//#######

//#######BODYASSOCIATE
Mtx_f BodyAssociateMTX_Jack = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Jack/bodyAssociate/bodyAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/bodyAssociate/bodyAssociateGFX.inc.c"
//#######

//#######HEAD
Vtx head_Jack[] = {
#include "assets/chameleons/Jack/head/head.vtx.inc.c"
};
Mtx_f headMtx_Jack = {
#include "assets/chameleons/Jack/head/head.mtx.inc.c"
};
unsigned char padding7_Jack[] = FILEPAD;
unsigned char head_eyeL_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Jack[] = FILEPAD;
unsigned char head_eyeLPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Jack[] = FILEPAD;
unsigned char head_eyeR_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Jack[] = FILEPAD;
unsigned char head_eyeRPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Jack[] = FILEPAD;
unsigned char head_cheek_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Jack[] = FILEPAD;
unsigned char head_cheekPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/cheek.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Jack/head/headGFX.inc.c"
//#######

//#######BACKPACK
Vtx backpack_Jack[] = {
#include "assets/chameleons/Jack/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Jack = {
#include "assets/chameleons/Jack/backpack/backpack.mtx.inc.c"
};
unsigned char paddingD_Jack[] = FILEPAD;
unsigned char backpack_color_Jack[] = {
#include "build/include/assets/chameleons/Jack/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Jack[] = FILEPAD;
unsigned char backpack_colorPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/backpack/backpack.ci8.pal.inc.c"
};
#include "build/include/assets/chameleons/Jack/backpack/backpackGFX.inc.c"
//#######

//#######SHOE
Vtx shoe_Jack[] = {
#include "assets/chameleons/Jack/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Jack = {
#include "assets/chameleons/Jack/shoe/shoe.mtx.inc.c"
};
unsigned char paddingF_Jack[] = FILEPAD;
unsigned char shoe_color_Jack[] = {
#include "build/include/assets/chameleons/Jack/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Jack[] = FILEPAD;
unsigned char shoe_colorPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/shoe/shoe.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Jack/shoe/shoeGFX.inc.c"
//#######

//#######LSHOE
Vtx Lshoe_Jack[] = {
#include "assets/chameleons/Jack/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Jack = {
#include "assets/chameleons/Jack/Lshoe/Lshoe.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/Lshoe/LshoeGFX.inc.c"
//#######

//#######CUFF
Vtx cuff_Jack[] = {
#include "assets/chameleons/Jack/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Jack = {
#include "assets/chameleons/Jack/cuff/cuff.mtx.inc.c"
};
unsigned char padding11_Jack[] = FILEPAD;
unsigned char cuff_color_Jack[] = {
#include "build/include/assets/chameleons/Jack/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Jack[] = FILEPAD;
unsigned char cuff_colorPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/cuff/color.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Jack/cuff/cuffGFX.inc.c"
//#######

//#######LCUFF
Vtx Lcuff_Jack[] = {
#include "assets/chameleons/Jack/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Jack = {
#include "assets/chameleons/Jack/Lcuff/Lcuff.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/Lcuff/LcuffGFX.inc.c"
//#######

//#######WRIST
Vtx wrist_Jack[] = {
#include "assets/chameleons/Jack/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Jack = {
#include "assets/chameleons/Jack/wrist/wrist.mtx.inc.c"
};
unsigned char padding13_Jack[] = FILEPAD;
unsigned char wrist_color_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Jack[] = FILEPAD;
unsigned char wrist_colorPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Jack[] = FILEPAD;
unsigned char wrist_shape_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Jack[] = FILEPAD;
unsigned char wrist_shapePal_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wrist.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Jack/wrist/wristGFX.inc.c"
//#######

//#######LWRIST
Vtx Lwrist_Jack[] = {
#include "assets/chameleons/Jack/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Jack = {
#include "assets/chameleons/Jack/Lwrist/Lwrist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/Lwrist/LwristGFX.inc.c"
//#######

//#######SHOULDER
Vtx shoulder_Jack[] = {
#include "assets/chameleons/Jack/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Jack = {
#include "assets/chameleons/Jack/shoulder/shoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/shoulder/shoulderGFX.inc.c"
//#######

//#######LSHOULDER
Vtx Lshoulder_Jack[] = {
#include "assets/chameleons/Jack/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Jack = {
#include "assets/chameleons/Jack/Lshoulder/Lshoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/Lshoulder/LshoulderGFX.inc.c"
//#######

//#######FIST
Vtx fist_Jack[] = {
#include "assets/chameleons/Jack/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Jack = {
#include "assets/chameleons/Jack/fist/fist.mtx.inc.c"
};
unsigned char padding17_Jack[] = FILEPAD;
unsigned char fist_i1_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Jack[] = FILEPAD;
unsigned char fist_i1Pal_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Jack[] = FILEPAD;
unsigned char fist_i2_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Jack[] = FILEPAD;
unsigned char fist_i2Pal_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Jack[] = FILEPAD;
unsigned char fist_i3_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Jack[] = FILEPAD;
unsigned char fist_i3Pal_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Jack[] = FILEPAD;
unsigned char fist_diamond_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Jack[] = FILEPAD;
unsigned char fist_diamondPal_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Jack[] = FILEPAD;
unsigned char fist_i4_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Jack[] = FILEPAD;
unsigned char fist_i4Pal_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist4.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Jack/fist/fistGFX.inc.c"
//#######

//#######LFIST
Vtx Lfist_Jack[] = {
#include "assets/chameleons/Jack/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Jack = {
#include "assets/chameleons/Jack/Lfist/Lfist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/Lfist/LfistGFX.inc.c"
//#######

//#######RESTASSOCIATE
Mtx_f restAssociateMtx_Jack = {
#include "assets/chameleons/Jack/restAssociate/restAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Jack/restAssociate/restAssociateGFX.inc.c"
