#include "common.h"
extern Mtx D_80129730_Davy;
#define FILEPAD {0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
/*asset names need to follow the format D_<segmentID><distanceFromStart>_<groupName>
gfx generates symbols from addresses so for stuff DMA'd from rom with segment references
we have to work around that on c's*/

Lights1 D_08000000_Davy =
#include "assets/chameleons/Davy/light.light.inc.c"

//#######BODY
Vtx D_08000018_Davy[] = {
#include "assets/chameleons/Davy/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Davy = {
#include "assets/chameleons/Davy/body/body.mtx.inc.c"
};
unsigned char padding1_Davy[] = FILEPAD;

unsigned char D_080001A0_Davy[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Davy/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Davy[] = FILEPAD;
unsigned char D_080005A8_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Davy[] = FILEPAD;

unsigned char D_080007B0_Davy[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Davy/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Davy[] = FILEPAD;
unsigned char D_080007D8_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Davy[] = FILEPAD;

unsigned char D_080009E0_Davy[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Davy/body/number.ci4.png.inc.c"
};
unsigned char padding6_Davy[] = FILEPAD;
unsigned char D_08000BE8_Davy[] = {
#include "build/include/assets/chameleons/Davy/body/number.ci4.pal.inc.c"
};

//remove 'build/include/' to route it back to the repo assets
//change the end to '.gfx.inc.c' instead of 'GFX.inc.c'
//go into the yaml and remove 'GFX.ME' from the name and change the type from bin to gfxSeg (for better support of vtx's)
#include "assets/chameleons/Davy/body/body.gfx.inc.c"
//#######

//#######BODYASSOCIATE
Mtx_f BodyAssociateMTX_Davy = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Davy/bodyAssociate/bodyAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/bodyAssociate/bodyAssociateGFX.inc.c"
//#######

//#######HEAD
Vtx head_Davy[] = {
#include "assets/chameleons/Davy/head/head.vtx.inc.c"
};
Mtx_f headMtx_Davy = {
#include "assets/chameleons/Davy/head/head.mtx.inc.c"
};
unsigned char padding7_Davy[] = FILEPAD;
unsigned char head_eyeL_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Davy[] = FILEPAD;
unsigned char head_eyeLPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Davy[] = FILEPAD;
unsigned char head_eyeR_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Davy[] = FILEPAD;
unsigned char head_eyeRPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Davy[] = FILEPAD;
unsigned char head_cheek_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Davy[] = FILEPAD;
unsigned char head_cheekPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/cheek.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Davy/head/headGFX.inc.c"
//#######

//#######BACKPACK
Vtx backpack_Davy[] = {
#include "assets/chameleons/Davy/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Davy = {
#include "assets/chameleons/Davy/backpack/backpack.mtx.inc.c"
};
unsigned char paddingD_Davy[] = FILEPAD;
unsigned char backpack_color_Davy[] = {
#include "build/include/assets/chameleons/Davy/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Davy[] = FILEPAD;
unsigned char backpack_colorPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/backpack/backpack.ci8.pal.inc.c"
};
#include "build/include/assets/chameleons/Davy/backpack/backpackGFX.inc.c"
//#######

//#######SHOE
Vtx shoe_Davy[] = {
#include "assets/chameleons/Davy/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Davy = {
#include "assets/chameleons/Davy/shoe/shoe.mtx.inc.c"
};
unsigned char paddingF_Davy[] = FILEPAD;
unsigned char shoe_color_Davy[] = {
#include "build/include/assets/chameleons/Davy/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Davy[] = FILEPAD;
unsigned char shoe_colorPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/shoe/shoe.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Davy/shoe/shoeGFX.inc.c"
//#######

//#######LSHOE
Vtx Lshoe_Davy[] = {
#include "assets/chameleons/Davy/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Davy = {
#include "assets/chameleons/Davy/Lshoe/Lshoe.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/Lshoe/LshoeGFX.inc.c"
//#######

//#######CUFF
Vtx cuff_Davy[] = {
#include "assets/chameleons/Davy/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Davy = {
#include "assets/chameleons/Davy/cuff/cuff.mtx.inc.c"
};
unsigned char padding11_Davy[] = FILEPAD;
unsigned char cuff_color_Davy[] = {
#include "build/include/assets/chameleons/Davy/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Davy[] = FILEPAD;
unsigned char cuff_colorPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/cuff/color.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Davy/cuff/cuffGFX.inc.c"
//#######

//#######LCUFF
Vtx Lcuff_Davy[] = {
#include "assets/chameleons/Davy/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Davy = {
#include "assets/chameleons/Davy/Lcuff/Lcuff.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/Lcuff/LcuffGFX.inc.c"
//#######

//#######WRIST
Vtx wrist_Davy[] = {
#include "assets/chameleons/Davy/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Davy = {
#include "assets/chameleons/Davy/wrist/wrist.mtx.inc.c"
};
unsigned char padding13_Davy[] = FILEPAD;
unsigned char wrist_color_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Davy[] = FILEPAD;
unsigned char wrist_colorPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Davy[] = FILEPAD;
unsigned char wrist_shape_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Davy[] = FILEPAD;
unsigned char wrist_shapePal_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wrist.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Davy/wrist/wristGFX.inc.c"
//#######

//#######LWRIST
Vtx Lwrist_Davy[] = {
#include "assets/chameleons/Davy/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Davy = {
#include "assets/chameleons/Davy/Lwrist/Lwrist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/Lwrist/LwristGFX.inc.c"
//#######

//#######SHOULDER
Vtx shoulder_Davy[] = {
#include "assets/chameleons/Davy/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Davy = {
#include "assets/chameleons/Davy/shoulder/shoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/shoulder/shoulderGFX.inc.c"
//#######

//#######LSHOULDER
Vtx Lshoulder_Davy[] = {
#include "assets/chameleons/Davy/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Davy = {
#include "assets/chameleons/Davy/Lshoulder/Lshoulder.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/Lshoulder/LshoulderGFX.inc.c"
//#######

//#######FIST
Vtx fist_Davy[] = {
#include "assets/chameleons/Davy/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Davy = {
#include "assets/chameleons/Davy/fist/fist.mtx.inc.c"
};
unsigned char padding17_Davy[] = FILEPAD;
unsigned char fist_i1_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Davy[] = FILEPAD;
unsigned char fist_i1Pal_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Davy[] = FILEPAD;
unsigned char fist_i2_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Davy[] = FILEPAD;
unsigned char fist_i2Pal_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Davy[] = FILEPAD;
unsigned char fist_i3_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Davy[] = FILEPAD;
unsigned char fist_i3Pal_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Davy[] = FILEPAD;
unsigned char fist_diamond_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Davy[] = FILEPAD;
unsigned char fist_diamondPal_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Davy[] = FILEPAD;
unsigned char fist_i4_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Davy[] = FILEPAD;
unsigned char fist_i4Pal_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist4.ci4.pal.inc.c"
};
#include "build/include/assets/chameleons/Davy/fist/fistGFX.inc.c"
//#######

//#######LFIST
Vtx Lfist_Davy[] = {
#include "assets/chameleons/Davy/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Davy = {
#include "assets/chameleons/Davy/Lfist/Lfist.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/Lfist/LfistGFX.inc.c"
//#######

//#######RESTASSOCIATE
Mtx_f restAssociateMtx_Davy = {
#include "assets/chameleons/Davy/restAssociate/restAssociate.mtx.inc.c"
};
#include "build/include/assets/chameleons/Davy/restAssociate/restAssociateGFX.inc.c"
