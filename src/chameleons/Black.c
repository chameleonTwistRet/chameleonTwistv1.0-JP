#include "common.h"
#define FILEPAD {0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}


Lights1 D_08000000_Black =
#include "assets/chameleons/Black/light.light.inc.c"

//#######BODY
Vtx D_08000018_Black[] = {
#include "assets/chameleons/Black/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Black = {
#include "assets/chameleons/Black/body/body.mtx.inc.c"
};
unsigned char padding1_Black[] = FILEPAD;

unsigned char D_080001A0_Black[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Black/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Black[] = FILEPAD;
unsigned char D_080005A8_Black[] = {
#include "build/include/assets/chameleons/Black/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Black[] = FILEPAD;

unsigned char D_080007B0_Black[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Black/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Black[] = FILEPAD;
unsigned char D_080007D8_Black[] = {
#include "build/include/assets/chameleons/Black/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Black[] = FILEPAD;

unsigned char D_080009E0_Black[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Black/body/number.ci4.png.inc.c"
};
unsigned char padding6_Black[] = FILEPAD;
unsigned char D_08000BE8_Black[] = {
#include "build/include/assets/chameleons/Black/body/number.ci4.pal.inc.c"
};

//remove 'build/include/' to route it back to the repo assets
//change the end to '.gfx.inc.c' instead of 'GFX.inc.c'
//go into the yaml and remove 'GFX.ME' from the name and change the type from bin to gfxSeg (for better support of vtx's)
#include "build/include/assets/chameleons/Black/body/bodyGFX.inc.c"
//#######

//#######BODYASSOCIATE
Mtx_f BodyAssociateMTX_Black = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Black/bodyAssociate/bodyAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/bodyAssociate/bodyAssociateGFX.inc.c"
//#######

//#######HEAD
Vtx head_Black[] = {
#include "assets/chameleons/Black/head/head.vtx.inc.c"
};
Mtx_f headMtx_Black = {
#include "assets/chameleons/Black/head/head.mtx.inc.c"
};
unsigned char padding7_Black[] = FILEPAD;
unsigned char head_eyeL_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Black[] = FILEPAD;
unsigned char head_eyeLPal_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Black[] = FILEPAD;
unsigned char head_eyeR_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Black[] = FILEPAD;
unsigned char head_eyeRPal_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Black[] = FILEPAD;
unsigned char head_cheek_Black[] = {
#include "build/include/assets/chameleons/Black/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Black[] = FILEPAD;
unsigned char head_cheekPal_Black[] = {
#include "build/include/assets/chameleons/Black/head/cheek.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Black/head/headGFX.inc.c"
//#######

//#######BACKPACK
Vtx backpack_Black[] = {
#include "assets/chameleons/Black/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Black = {
#include "assets/chameleons/Black/backpack/backpack.mtx.inc.c"
};
unsigned char paddingD_Black[] = FILEPAD;
unsigned char backpack_color_Black[] = {
#include "build/include/assets/chameleons/Black/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Black[] = FILEPAD;
unsigned char backpack_colorPal_Black[] = {
#include "build/include/assets/chameleons/Black/backpack/backpack.ci8.pal.inc.c"
};
#include "build/include/assets/chameleons/Black/backpack/backpackGFX.inc.c"
//#######

//#######SHOE
Vtx shoe_Black[] = {
#include "assets/chameleons/Black/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Black = {
#include "assets/chameleons/Black/shoe/shoe.mtx.inc.c"
};
unsigned char paddingF_Black[] = FILEPAD;
unsigned char shoe_color_Black[] = {
#include "build/include/assets/chameleons/Black/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Black[] = FILEPAD;
unsigned char shoe_colorPal_Black[] = {
#include "build/include/assets/chameleons/Black/shoe/shoe.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Black/shoe/shoeGFX.inc.c"
//#######

//#######LSHOE
Vtx Lshoe_Black[] = {
#include "assets/chameleons/Black/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Black = {
#include "assets/chameleons/Black/Lshoe/Lshoe.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/Lshoe/LshoeGFX.inc.c"
//#######

//#######CUFF
Vtx cuff_Black[] = {
#include "assets/chameleons/Black/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Black = {
#include "assets/chameleons/Black/cuff/cuff.mtx.inc.c"
};
unsigned char padding11_Black[] = FILEPAD;
unsigned char cuff_color_Black[] = {
#include "build/include/assets/chameleons/Black/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Black[] = FILEPAD;
unsigned char cuff_colorPal_Black[] = {
#include "build/include/assets/chameleons/Black/cuff/color.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Black/cuff/cuffGFX.inc.c"
//#######

//#######LCUFF
Vtx Lcuff_Black[] = {
#include "assets/chameleons/Black/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Black = {
#include "assets/chameleons/Black/Lcuff/Lcuff.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/Lcuff/LcuffGFX.inc.c"
//#######

//#######WRIST
Vtx wrist_Black[] = {
#include "assets/chameleons/Black/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Black = {
#include "assets/chameleons/Black/wrist/wrist.mtx.inc.c"
};
unsigned char padding13_Black[] = FILEPAD;
unsigned char wrist_color_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Black[] = FILEPAD;
unsigned char wrist_colorPal_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Black[] = FILEPAD;
unsigned char wrist_shape_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Black[] = FILEPAD;
unsigned char wrist_shapePal_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wrist.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Black/wrist/wristGFX.inc.c"
//#######

//#######LWRIST
Vtx Lwrist_Black[] = {
#include "assets/chameleons/Black/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Black = {
#include "assets/chameleons/Black/Lwrist/Lwrist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/Lwrist/LwristGFX.inc.c"
//#######

//#######SHOULDER
Vtx shoulder_Black[] = {
#include "assets/chameleons/Black/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Black = {
#include "assets/chameleons/Black/shoulder/shoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/shoulder/shoulderGFX.inc.c"
//#######

//#######LSHOULDER
Vtx Lshoulder_Black[] = {
#include "assets/chameleons/Black/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Black = {
#include "assets/chameleons/Black/Lshoulder/Lshoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/Lshoulder/LshoulderGFX.inc.c"
//#######

//#######FIST
Vtx fist_Black[] = {
#include "assets/chameleons/Black/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Black = {
#include "assets/chameleons/Black/fist/fist.mtx.inc.c"
};
unsigned char padding17_Black[] = FILEPAD;
unsigned char fist_i1_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Black[] = FILEPAD;
unsigned char fist_i1Pal_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Black[] = FILEPAD;
unsigned char fist_i2_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Black[] = FILEPAD;
unsigned char fist_i2Pal_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Black[] = FILEPAD;
unsigned char fist_i3_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Black[] = FILEPAD;
unsigned char fist_i3Pal_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Black[] = FILEPAD;
unsigned char fist_diamond_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Black[] = FILEPAD;
unsigned char fist_diamondPal_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Black[] = FILEPAD;
unsigned char fist_i4_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Black[] = FILEPAD;
unsigned char fist_i4Pal_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist4.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Black/fist/fistGFX.inc.c"
//#######

//#######LFIST
Vtx Lfist_Black[] = {
#include "assets/chameleons/Black/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Black = {
#include "assets/chameleons/Black/Lfist/Lfist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/Lfist/LfistGFX.inc.c"
//#######

//#######RESTASSOCIATE
Mtx_f restAssociateMtx_Black = {
#include "assets/chameleons/Black/restAssociate/restAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Black/restAssociate/restAssociateGFX.inc.c"
