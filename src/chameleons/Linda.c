#include "common.h"
//these are probably used in ram specifically so they can be animated
extern Mtx D_80129730_Linda; //body
extern Mtx D_80129770_Linda; //head
extern Mtx D_801297B0_Linda; //backpack
extern Mtx D_801297F0_Linda; //shoe
extern Mtx D_80129830_Linda; //Lshoe
extern Mtx D_80129870_Linda; //cuff
extern Mtx D_801298B0_Linda; //Lcuff
extern Mtx D_801298F0_Linda; //wrist
extern Mtx D_80129930_Linda; //Lwrist
extern Mtx D_80129970_Linda; //shoulder
extern Mtx D_801299B0_Linda; //Lshoulder
extern Mtx D_801299F0_Linda; //fist
extern Mtx D_80129A30_Linda; //Lfist

#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to spit useless files
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

/*asset names need to follow the format D_<segmentID><distanceFromStart>_<groupName>
gfx generates symbols from addresses so for stuff DMA'd from rom with segment references
we have to work around that on c's*/

Lights1 D_0B000000_Linda =
#include "assets/chameleons/Linda/light.light.inc.c"

//#######BODY
Vtx D_0B000018_Linda[] = {
#include "assets/chameleons/Linda/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Linda = IDENTITY;
unsigned char padding1_Linda[] = FILEPAD;

unsigned char D_0B0001A0_Linda[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Linda/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Linda[] = FILEPAD;
unsigned char D_0B0005A8_Linda[] = {
#include "build/include/assets/chameleons/Linda/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Linda[] = FILEPAD;

unsigned char D_0B0007B0_Linda[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Linda/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Linda[] = FILEPAD;
unsigned char D_0B0007D8_Linda[] = {
#include "build/include/assets/chameleons/Linda/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Linda[] = FILEPAD;

unsigned char D_0B0009E0_Linda[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Linda/body/number.ci4.png.inc.c"
};
unsigned char padding6_Linda[] = FILEPAD;
unsigned char D_0B000BE8_Linda[] = {
#include "build/include/assets/chameleons/Linda/body/number.ci4.pal.inc.c"
};

Gfx D_0B000DE8_Linda[] = {
#include "assets/chameleons/Linda/body/body.gfx.inc.c"
};
//#######

//#######BODYASSOCIATE
Mtx_f D_0B0011A0_Linda = {
#include "assets/chameleons/Linda/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx D_0B0011E0_Linda[] = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Linda/bodyAssociate/bodyAssociate.gfx.inc.c"
};
//#######

//#######HEAD
Vtx D_0B001200_Linda[] = {
#include "assets/chameleons/Linda/head/head.vtx.inc.c"
};
Mtx_f headMtx_Linda = IDENTITY;
unsigned char padding7_Linda[] = FILEPAD;
unsigned char D_0B001718_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Linda[] = FILEPAD;
unsigned char D_0B001B20_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeL.ci8.pal.inc.c"
};
unsigned char paddingBow_Linda[] = FILEPAD;
unsigned char D_0B001D28_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/bow.ci4.png.inc.c"
};
unsigned char paddingBow2_Linda[] = FILEPAD;
unsigned char D_0B002130_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/bow.ci4.pal.inc.c"
};
unsigned char padding9_Linda[] = FILEPAD;
unsigned char D_0B002338_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Linda[] = FILEPAD;
unsigned char D_0B002740_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Linda[] = FILEPAD;
unsigned char D_0B002948_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Linda[] = FILEPAD;
unsigned char D_0B002B50_Linda[] = {
#include "build/include/assets/chameleons/Linda/head/cheek.ci4.pal.inc.c"
};

Gfx D_0B002D50_Linda[] = {
#include "assets/chameleons/Linda/head/head.gfx.inc.c"
};
//#######

//#######BACKPACK
Vtx D_0B0033D0_Linda[] = {
#include "assets/chameleons/Linda/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Linda = IDENTITY;
unsigned char paddingD_Linda[] = FILEPAD;
unsigned char D_0B003498_Linda[] = {
#include "build/include/assets/chameleons/Linda/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Linda[] = FILEPAD;
unsigned char D_0B0034C0_Linda[] = {
#include "build/include/assets/chameleons/Linda/backpack/backpack.ci8.pal.inc.c"
};

Gfx D_0B0036C0_Linda[] = {
#include "assets/chameleons/Linda/backpack/backpack.gfx.inc.c"
};
//#######

//#######SHOE
Vtx D_0B003838_Linda[] = {
#include "assets/chameleons/Linda/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Linda = IDENTITY;
unsigned char paddingF_Linda[] = FILEPAD;
unsigned char D_0B003B60_Linda[] = {
#include "build/include/assets/chameleons/Linda/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Linda[] = FILEPAD;
unsigned char D_0B003F68_Linda[] = {
#include "build/include/assets/chameleons/Linda/shoe/shoe.ci4.pal.inc.c"
};

Gfx D_0B004168_Linda[] = {
#include "assets/chameleons/Linda/shoe/shoe.gfx.inc.c"
};
//#######

//#######LSHOE
Vtx D_0B004428_Linda[] = {
#include "assets/chameleons/Linda/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Linda = IDENTITY;
Gfx D_0B004728_Linda[] = {
#include "assets/chameleons/Linda/Lshoe/Lshoe.gfx.inc.c"
};
//#######

//#######CUFF
Vtx D_0B0049E8_Linda[] = {
#include "assets/chameleons/Linda/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Linda = IDENTITY;
unsigned char padding11_Linda[] = FILEPAD;
unsigned char D_0B004B20_Linda[] = {
#include "build/include/assets/chameleons/Linda/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Linda[] = FILEPAD;
unsigned char D_0B004B48_Linda[] = {
#include "build/include/assets/chameleons/Linda/cuff/color.ci4.pal.inc.c"
};

Gfx D_0B004D48_Linda[] = {
#include "assets/chameleons/Linda/cuff/cuff.gfx.inc.c"
};
//#######

//#######LCUFF
Vtx D_0B005000_Linda[] = {
#include "assets/chameleons/Linda/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Linda = IDENTITY;
Gfx D_0B005130_Linda[] = {
#include "assets/chameleons/Linda/Lcuff/Lcuff.gfx.inc.c"
};
//#######

//#######WRIST
Vtx D_0B0053E8_Linda[] = {
#include "assets/chameleons/Linda/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Linda = IDENTITY;
unsigned char padding13_Linda[] = FILEPAD;
unsigned char D_0B005600_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Linda[] = FILEPAD;
unsigned char D_0B005628_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Linda[] = FILEPAD;
unsigned char D_0B005830_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Linda[] = FILEPAD;
unsigned char D_0B005A38_Linda[] = {
#include "build/include/assets/chameleons/Linda/wrist/wrist.ci4.pal.inc.c"
};
Gfx D_0B005C38_Linda[] = {
#include "assets/chameleons/Linda/wrist/wrist.gfx.inc.c"
};
//#######

//#######LWRIST
Vtx D_0B006050_Linda[] = {
#include "assets/chameleons/Linda/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Linda = IDENTITY;
Gfx D_0B006260_Linda[] = {
#include "assets/chameleons/Linda/Lwrist/Lwrist.gfx.inc.c"
};
//#######

//#######SHOULDER
Vtx D_0B006678_Linda[] = {
#include "assets/chameleons/Linda/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Linda = IDENTITY;
Gfx D_0B006718_Linda[] = {
#include "assets/chameleons/Linda/shoulder/shoulder.gfx.inc.c"
};
//#######

//#######LSHOULDER
Vtx D_0B006870_Linda[] = {
#include "assets/chameleons/Linda/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Linda = IDENTITY;
Gfx D_0B006910_Linda[] = {
#include "assets/chameleons/Linda/Lshoulder/Lshoulder.gfx.inc.c"
};
//#######

//#######FIST
Vtx D_0B006A68_Linda[] = {
#include "assets/chameleons/Linda/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Linda = IDENTITY;
unsigned char padding17_Linda[] = FILEPAD;
unsigned char D_0B006D40_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Linda[] = FILEPAD;
unsigned char D_0B006F48_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Linda[] = FILEPAD;
unsigned char D_0B007150_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Linda[] = FILEPAD;
unsigned char D_0B007358_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Linda[] = FILEPAD;
unsigned char D_0B007560_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Linda[] = FILEPAD;
unsigned char D_0B007768_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Linda[] = FILEPAD;
unsigned char D_0B007970_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Linda[] = FILEPAD;
unsigned char D_0B007B78_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Linda[] = FILEPAD;
unsigned char D_0B007D80_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Linda[] = FILEPAD;
unsigned char D_0B007F88_Linda[] = {
#include "build/include/assets/chameleons/Linda/fist/fist4.ci4.pal.inc.c"
};
Gfx D_0B008188_Linda[] = {
#include "assets/chameleons/Linda/fist/fist.gfx.inc.c"
};
//#######

//#######LFIST
Vtx D_0B0088A0_Linda[] = {
#include "assets/chameleons/Linda/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Linda = IDENTITY;
Gfx D_0B008B90_Linda[] = {
#include "assets/chameleons/Linda/Lfist/Lfist.gfx.inc.c"
};
//#######

//#######RESTASSOCIATE
Mtx_f D_0B0092A8_Linda = {
#include "assets/chameleons/Linda/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Linda_Model[] = {
#include "assets/chameleons/Linda/restAssociate/restAssociate.gfx.inc.c"
};
