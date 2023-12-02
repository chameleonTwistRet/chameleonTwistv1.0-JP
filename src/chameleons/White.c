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

/*asset names need to follow the format D_<segmentID><distanceFromStart>_<groupName>
gfx generates symbols from addresses so for stuff DMA'd from rom with segment references
we have to work around that on c's*/

Lights1 D_0D000000_White =
#include "assets/chameleons/White/light.light.inc.c"

//#######BODY
Vtx D_0D000018_White[] = {
#include "assets/chameleons/White/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_White = IDENTITY;
unsigned char padding1_White[] = FILEPAD;

unsigned char D_0D0001A0_White[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/White/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_White[] = FILEPAD;
unsigned char D_0D0005A8_White[] = {
#include "build/include/assets/chameleons/White/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_White[] = FILEPAD;

unsigned char D_0D0007B0_White[] = { // the solid color used for the body
#include "build/include/assets/chameleons/White/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_White[] = FILEPAD;
unsigned char D_0D0007D8_White[] = {
#include "build/include/assets/chameleons/White/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_White[] = FILEPAD;

unsigned char D_0D0009E0_White[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/White/body/number.ci4.png.inc.c"
};
unsigned char padding6_White[] = FILEPAD;
unsigned char D_0D000BE8_White[] = {
#include "build/include/assets/chameleons/White/body/number.ci4.pal.inc.c"
};

Gfx D_0D000DE8_White[] = {
#include "assets/chameleons/White/body/body.gfx.inc.c"
};
//#######

//#######BODYASSOCIATE
Mtx_f D_0D0011A0_White = {
#include "assets/chameleons/White/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx D_0D0011E0_White[] = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/White/bodyAssociate/bodyAssociate.gfx.inc.c"
};
//#######

//#######HEAD
Vtx D_0D001200_White[] = {
#include "assets/chameleons/White/head/head.vtx.inc.c"
};
Mtx_f headMtx_White = IDENTITY;
unsigned char padding7_White[] = FILEPAD;
unsigned char D_0D0016B8_White[] = {
#include "build/include/assets/chameleons/White/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_White[] = FILEPAD;
unsigned char D_0D001AC0_White[] = {
#include "build/include/assets/chameleons/White/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_White[] = FILEPAD;
unsigned char D_0D001CC8_White[] = {
#include "build/include/assets/chameleons/White/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_White[] = FILEPAD;
unsigned char D_0D0020D0_White[] = {
#include "build/include/assets/chameleons/White/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_White[] = FILEPAD;
unsigned char D_0D0022D8_White[] = {
#include "build/include/assets/chameleons/White/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_White[] = FILEPAD;
unsigned char D_0D0024E0_White[] = {
#include "build/include/assets/chameleons/White/head/cheek.ci4.pal.inc.c"
};

Gfx D_0D0026E0_White[] = {
#include "assets/chameleons/White/head/head.gfx.inc.c"
};
//#######

//#######BACKPACK
Vtx D_0D002C60_White[] = {
#include "assets/chameleons/White/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_White = IDENTITY;
unsigned char paddingD_White[] = FILEPAD;
unsigned char D_0D002D28_White[] = {
#include "build/include/assets/chameleons/White/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_White[] = FILEPAD;
unsigned char D_0D002D50_White[] = {
#include "build/include/assets/chameleons/White/backpack/backpack.ci8.pal.inc.c"
};

Gfx D_0D002F50_White[] = {
#include "assets/chameleons/White/backpack/backpack.gfx.inc.c"
};
//#######

//#######SHOE
Vtx D_0D0030C8_White[] = {
#include "assets/chameleons/White/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_White = IDENTITY;
unsigned char paddingF_White[] = FILEPAD;
unsigned char D_0D0033D0_White[] = {
#include "build/include/assets/chameleons/White/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_White[] = FILEPAD;
unsigned char D_0D0037D8_White[] = {
#include "build/include/assets/chameleons/White/shoe/shoe.ci4.pal.inc.c"
};

Gfx D_0D0039D8_White[] = {
#include "assets/chameleons/White/shoe/shoe.gfx.inc.c"
};
//#######

//#######LSHOE
Vtx D_0D003C98_White[] = {
#include "assets/chameleons/White/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_White = IDENTITY;
Gfx D_0D003F98_White[] = {
#include "assets/chameleons/White/Lshoe/Lshoe.gfx.inc.c"
};
//#######

//#######CUFF
Vtx D_0D004258_White[] = {
#include "assets/chameleons/White/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_White = IDENTITY;
unsigned char padding11_White[] = FILEPAD;
unsigned char D_0D004390_White[] = {
#include "build/include/assets/chameleons/White/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_White[] = FILEPAD;
unsigned char D_0D0043B8_White[] = {
#include "build/include/assets/chameleons/White/cuff/color.ci4.pal.inc.c"
};

Gfx D_0D0045B8_White[] = {
#include "assets/chameleons/White/cuff/cuff.gfx.inc.c"
};
//#######

//#######LCUFF
Vtx D_0D004870_White[] = {
#include "assets/chameleons/White/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_White = IDENTITY;
Gfx D_0D0049A0_White[] = {
#include "assets/chameleons/White/Lcuff/Lcuff.gfx.inc.c"
};
//#######

//#######WRIST
Vtx D_0D004C58_White[] = {
#include "assets/chameleons/White/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_White = IDENTITY;
unsigned char padding13_White[] = FILEPAD;
unsigned char D_0D004E70_White[] = {
#include "build/include/assets/chameleons/White/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_White[] = FILEPAD;
unsigned char D_0D004E98_White[] = {
#include "build/include/assets/chameleons/White/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_White[] = FILEPAD;
unsigned char D_0D0050A0_White[] = {
#include "build/include/assets/chameleons/White/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_White[] = FILEPAD;
unsigned char D_0D0052A8_White[] = {
#include "build/include/assets/chameleons/White/wrist/wrist.ci4.pal.inc.c"
};
Gfx D_0D0054A8_White[] = {
#include "assets/chameleons/White/wrist/wrist.gfx.inc.c"
};
//#######

//#######LWRIST
Vtx D_0D0058C0_White[] = {
#include "assets/chameleons/White/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_White = IDENTITY;
Gfx D_0D005AD0_White[] = {
#include "assets/chameleons/White/Lwrist/Lwrist.gfx.inc.c"
};
//#######

//#######SHOULDER
Vtx D_0D005EE8_White[] = {
#include "assets/chameleons/White/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_White = IDENTITY;
Gfx D_0D005F88_White[] = {
#include "assets/chameleons/White/shoulder/shoulder.gfx.inc.c"
};
//#######

//#######LSHOULDER
Vtx D_0D0060E0_White[] = {
#include "assets/chameleons/White/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_White = IDENTITY;
Gfx D_0D006180_White[] = {
#include "assets/chameleons/White/Lshoulder/Lshoulder.gfx.inc.c"
};
//#######

//#######FIST
Vtx D_0D0062D8_White[] = {
#include "assets/chameleons/White/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_White = IDENTITY;
unsigned char padding17_White[] = FILEPAD;
unsigned char D_0D0065B0_White[] = {
#include "build/include/assets/chameleons/White/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_White[] = FILEPAD;
unsigned char D_0D0067B8_White[] = {
#include "build/include/assets/chameleons/White/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_White[] = FILEPAD;
unsigned char D_0D0069C0_White[] = {
#include "build/include/assets/chameleons/White/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_White[] = FILEPAD;
unsigned char D_0D006BC8_White[] = {
#include "build/include/assets/chameleons/White/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_White[] = FILEPAD;
unsigned char D_0D006DD0_White[] = {
#include "build/include/assets/chameleons/White/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_White[] = FILEPAD;
unsigned char D_0D006FD8_White[] = {
#include "build/include/assets/chameleons/White/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_White[] = FILEPAD;
unsigned char D_0D0071E0_White[] = {
#include "build/include/assets/chameleons/White/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_White[] = FILEPAD;
unsigned char D_0D0073E8_White[] = {
#include "build/include/assets/chameleons/White/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_White[] = FILEPAD;
unsigned char D_0D0075F0_White[] = {
#include "build/include/assets/chameleons/White/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_White[] = FILEPAD;
unsigned char D_0D0077F8_White[] = {
#include "build/include/assets/chameleons/White/fist/fist4.ci4.pal.inc.c"
};
Gfx D_0D0079F8_White[] = {
#include "assets/chameleons/White/fist/fist.gfx.inc.c"
};
//#######

//#######LFIST
Vtx D_0D008110_White[] = {
#include "assets/chameleons/White/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_White = IDENTITY;
Gfx D_0D008400_White[] = {
#include "assets/chameleons/White/Lfist/Lfist.gfx.inc.c"
};
//#######

//#######RESTASSOCIATE
Mtx_f D_0D008B18_White = {
#include "assets/chameleons/White/restAssociate/restAssociate.mtx.inc.c"
};
Gfx White_Model[] = {
#include "assets/chameleons/White/restAssociate/restAssociate.gfx.inc.c"
};
