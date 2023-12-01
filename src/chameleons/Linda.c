#include "common.h"
#define FILEPAD {0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}


Lights1 D_08000000_Linda =
#include "assets/chameleons/Linda/light.light.inc.c"

//#######BODY
Vtx D_08000018_Linda[] = {
#include "assets/chameleons/Linda/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Linda = {
#include "assets/chameleons/Linda/body/body.mtx.inc.c"
};
unsigned char padding1_Linda[] = FILEPAD;

unsigned char D_080001A0_Linda[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Linda/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Linda[] = FILEPAD;
unsigned char D_080005A8_Linda[] = {
#include "build/include/assets/chameleons/Linda/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Linda[] = FILEPAD;

unsigned char D_080007B0_Linda[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Linda/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Linda[] = FILEPAD;
unsigned char D_080007D8_Linda[] = {
#include "build/include/assets/chameleons/Linda/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Linda[] = FILEPAD;

unsigned char D_080009E0_Linda[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Linda/body/number.ci4.png.inc.c"
};
unsigned char padding6_Linda[] = FILEPAD;
unsigned char D_08000BE8_Linda[] = {
#include "build/include/assets/chameleons/Linda/body/number.ci4.pal.inc.c"
};

//remove 'build/include/' to route it back to the repo assets
//change the end to '.gfx.inc.c' instead of 'GFX.inc.c'
//go into the yaml and remove 'GFX.ME' from the name and change the type from bin to gfxSeg (for better support of vtx's)
#include "build/include/assets/chameleons/Linda/body/bodyGFX.inc.c"
//#######

//#######BODYASSOCIATE
Mtx_f BodyAssociateMTX_Linda = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Linda/bodyAssociate/bodyAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/bodyAssociate/bodyAssociateGFX.inc.c"
//#######

//#######HEAD
Vtx head_Linda[] = {
#include "assets/chameleons/Linda/head/head.vtx.inc.c"
};
Mtx_f headMtx_Linda = {
#include "assets/chameleons/Linda/head/head.mtx.inc.c"
};
unsigned char padding7_Linda[] = FILEPAD;
unsigned char head_eyeL_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Linda[] = FILEPAD;
unsigned char head_eyeLPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeL.ci8.pal.inc.c"
};

unsigned char paddingBowA_Linda[] = FILEPAD;
unsigned char head_bow_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/bow.ci4.png.inc.c"
};
unsigned char paddingBowB_Linda[] = FILEPAD;
unsigned char head_bowPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/bow.ci4.pal.inc.c"
};

unsigned char padding9_Linda[] = FILEPAD;
unsigned char head_eyeR_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Linda[] = FILEPAD;
unsigned char head_eyeRPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Linda[] = FILEPAD;
unsigned char head_cheek_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Linda[] = FILEPAD;
unsigned char head_cheekPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/cheek.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Linda/head/headGFX.inc.c"
//#######

//#######BACKPACK
Vtx backpack_Linda[] = {
#include "assets/chameleons/Linda/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Linda = {
#include "assets/chameleons/Linda/backpack/backpack.mtx.inc.c"
};
unsigned char paddingD_Linda[] = FILEPAD;
unsigned char backpack_color_Linda[] = {
#include "build/include/assets/chameleons/Linda/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Linda[] = FILEPAD;
unsigned char backpack_colorPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/backpack/backpack.ci8.pal.inc.c"
};
#include "build/include/assets/chameleons/Linda/backpack/backpackGFX.inc.c"
//#######

//#######SHOE
Vtx shoe_Linda[] = {
#include "assets/chameleons/Linda/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Linda = {
#include "assets/chameleons/Linda/shoe/shoe.mtx.inc.c"
};
unsigned char paddingF_Linda[] = FILEPAD;
unsigned char shoe_color_Linda[] = {
#include "build/include/assets/chameleons/Linda/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Linda[] = FILEPAD;
unsigned char shoe_colorPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/shoe/shoe.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Linda/shoe/shoeGFX.inc.c"
//#######

//#######LSHOE
Vtx Lshoe_Linda[] = {
#include "assets/chameleons/Linda/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Linda = {
#include "assets/chameleons/Linda/Lshoe/Lshoe.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/Lshoe/LshoeGFX.inc.c"
//#######

//#######CUFF
Vtx cuff_Linda[] = {
#include "assets/chameleons/Linda/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Linda = {
#include "assets/chameleons/Linda/cuff/cuff.mtx.inc.c"
};
unsigned char padding11_Linda[] = FILEPAD;
unsigned char cuff_color_Linda[] = {
#include "build/include/assets/chameleons/Linda/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Linda[] = FILEPAD;
unsigned char cuff_colorPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/cuff/color.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Linda/cuff/cuffGFX.inc.c"
//#######

//#######LCUFF
Vtx Lcuff_Linda[] = {
#include "assets/chameleons/Linda/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Linda = {
#include "assets/chameleons/Linda/Lcuff/Lcuff.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/Lcuff/LcuffGFX.inc.c"
//#######

//#######WRIST
Vtx wrist_Linda[] = {
#include "assets/chameleons/Linda/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Linda = {
#include "assets/chameleons/Linda/wrist/wrist.mtx.inc.c"
};
unsigned char padding13_Linda[] = FILEPAD;
unsigned char wrist_color_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Linda[] = FILEPAD;
unsigned char wrist_colorPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Linda[] = FILEPAD;
unsigned char wrist_shape_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Linda[] = FILEPAD;
unsigned char wrist_shapePal_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wrist.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Linda/wrist/wristGFX.inc.c"
//#######

//#######LWRIST
Vtx Lwrist_Linda[] = {
#include "assets/chameleons/Linda/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Linda = {
#include "assets/chameleons/Linda/Lwrist/Lwrist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/Lwrist/LwristGFX.inc.c"
//#######

//#######SHOULDER
Vtx shoulder_Linda[] = {
#include "assets/chameleons/Linda/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Linda = {
#include "assets/chameleons/Linda/shoulder/shoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/shoulder/shoulderGFX.inc.c"
//#######

//#######LSHOULDER
Vtx Lshoulder_Linda[] = {
#include "assets/chameleons/Linda/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Linda = {
#include "assets/chameleons/Linda/Lshoulder/Lshoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/Lshoulder/LshoulderGFX.inc.c"
//#######

//#######FIST
Vtx fist_Linda[] = {
#include "assets/chameleons/Linda/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Linda = {
#include "assets/chameleons/Linda/fist/fist.mtx.inc.c"
};
unsigned char padding17_Linda[] = FILEPAD;
unsigned char fist_i1_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Linda[] = FILEPAD;
unsigned char fist_i1Pal_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Linda[] = FILEPAD;
unsigned char fist_i2_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Linda[] = FILEPAD;
unsigned char fist_i2Pal_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Linda[] = FILEPAD;
unsigned char fist_i3_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Linda[] = FILEPAD;
unsigned char fist_i3Pal_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Linda[] = FILEPAD;
unsigned char fist_diamond_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Linda[] = FILEPAD;
unsigned char fist_diamondPal_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Linda[] = FILEPAD;
unsigned char fist_i4_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Linda[] = FILEPAD;
unsigned char fist_i4Pal_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist4.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Linda/fist/fistGFX.inc.c"
//#######

//#######LFIST
Vtx Lfist_Linda[] = {
#include "assets/chameleons/Linda/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Linda = {
#include "assets/chameleons/Linda/Lfist/Lfist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/Lfist/LfistGFX.inc.c"
//#######

//#######RESTASSOCIATE
Mtx_f restAssociateMtx_Linda = {
#include "assets/chameleons/Linda/restAssociate/restAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Linda/restAssociate/restAssociateGFX.inc.c"
