#include "common.h"
//these are probably used in ram specifically so they can be animated
extern Mtx D_80129730_Fred; //body
extern Mtx D_80129770_Fred; //head
extern Mtx D_801297B0_Fred; //backpack
extern Mtx D_801297F0_Fred; //shoe
extern Mtx D_80129830_Fred; //Lshoe
extern Mtx D_80129870_Fred; //cuff
extern Mtx D_801298B0_Fred; //Lcuff
extern Mtx D_801298F0_Fred; //wrist
extern Mtx D_80129930_Fred; //Lwrist
extern Mtx D_80129970_Fred; //shoulder
extern Mtx D_801299B0_Fred; //Lshoulder
extern Mtx D_801299F0_Fred; //fist
extern Mtx D_80129A30_Fred; //Lfist

#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to spit useless files
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

/*asset names need to follow the format D_<segmentID><distanceFromStart>_<groupName>
gfx generates symbols from addresses so for stuff DMA'd from rom with segment references
we have to work around that on c's*/

Lights1 D_0A000000_Fred =
#include "assets/chameleons/Fred/light.light.inc.c"

//#######BODY
Vtx D_0A000018_Fred[] = {
#include "assets/chameleons/Fred/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Fred = IDENTITY;
unsigned char padding1_Fred[] = FILEPAD;

unsigned char D_0A0001A0_Fred[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Fred/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Fred[] = FILEPAD;
unsigned char D_0A0005A8_Fred[] = {
#include "build/include/assets/chameleons/Fred/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Fred[] = FILEPAD;

unsigned char D_0A0007B0_Fred[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Fred/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Fred[] = FILEPAD;
unsigned char D_0A0007D8_Fred[] = {
#include "build/include/assets/chameleons/Fred/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Fred[] = FILEPAD;

unsigned char D_0A0009E0_Fred[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Fred/body/number.ci4.png.inc.c"
};
unsigned char padding6_Fred[] = FILEPAD;
unsigned char D_0A000BE8_Fred[] = {
#include "build/include/assets/chameleons/Fred/body/number.ci4.pal.inc.c"
};

Gfx D_0A000DE8_Fred[] = {
#include "assets/chameleons/Fred/body/body.gfx.inc.c"
};
//#######

//#######BODYASSOCIATE
Mtx_f D_0A0011A0_Fred = {
#include "assets/chameleons/Fred/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx D_0A0011E0_Fred[] = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Fred/bodyAssociate/bodyAssociate.gfx.inc.c"
};
//#######

//#######HEAD
Vtx D_0A001200_Fred[] = {
#include "assets/chameleons/Fred/head/head.vtx.inc.c"
};
Mtx_f headMtx_Fred = IDENTITY;
unsigned char padding7_Fred[] = FILEPAD;
unsigned char D_0A0016B8_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Fred[] = FILEPAD;
unsigned char D_0A001AC0_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Fred[] = FILEPAD;
unsigned char D_0A001CC8_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Fred[] = FILEPAD;
unsigned char D_0A0020D0_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Fred[] = FILEPAD;
unsigned char D_0A0022D8_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Fred[] = FILEPAD;
unsigned char D_0A0024E0_Fred[] = {
#include "build/include/assets/chameleons/Fred/head/cheek.ci4.pal.inc.c"
};

Gfx D_0A0026E0_Fred[] = {
#include "assets/chameleons/Fred/head/head.gfx.inc.c"
};
//#######

//#######BACKPACK
Vtx D_0A002C60_Fred[] = {
#include "assets/chameleons/Fred/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Fred = IDENTITY;
unsigned char paddingD_Fred[] = FILEPAD;
unsigned char D_0A002D28_Fred[] = {
#include "build/include/assets/chameleons/Fred/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Fred[] = FILEPAD;
unsigned char D_0A002D50_Fred[] = {
#include "build/include/assets/chameleons/Fred/backpack/backpack.ci8.pal.inc.c"
};

Gfx D_0A002F50_Fred[] = {
#include "assets/chameleons/Fred/backpack/backpack.gfx.inc.c"
};
//#######

//#######SHOE
Vtx D_0A0030C8_Fred[] = {
#include "assets/chameleons/Fred/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Fred = IDENTITY;
unsigned char paddingF_Fred[] = FILEPAD;
unsigned char D_0A0033D0_Fred[] = {
#include "build/include/assets/chameleons/Fred/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Fred[] = FILEPAD;
unsigned char D_0A0037D8_Fred[] = {
#include "build/include/assets/chameleons/Fred/shoe/shoe.ci4.pal.inc.c"
};

Gfx D_0A0039D8_Fred[] = {
#include "assets/chameleons/Fred/shoe/shoe.gfx.inc.c"
};
//#######

//#######LSHOE
Vtx D_0A003C98_Fred[] = {
#include "assets/chameleons/Fred/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Fred = IDENTITY;
Gfx D_0A003F98_Fred[] = {
#include "assets/chameleons/Fred/Lshoe/Lshoe.gfx.inc.c"
};
//#######

//#######CUFF
Vtx D_0A004258_Fred[] = {
#include "assets/chameleons/Fred/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Fred = IDENTITY;
unsigned char padding11_Fred[] = FILEPAD;
unsigned char D_0A004390_Fred[] = {
#include "build/include/assets/chameleons/Fred/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Fred[] = FILEPAD;
unsigned char D_0A0043B8_Fred[] = {
#include "build/include/assets/chameleons/Fred/cuff/color.ci4.pal.inc.c"
};

Gfx D_0A0045B8_Fred[] = {
#include "assets/chameleons/Fred/cuff/cuff.gfx.inc.c"
};
//#######

//#######LCUFF
Vtx D_0A004870_Fred[] = {
#include "assets/chameleons/Fred/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Fred = IDENTITY;
Gfx D_0A0049A0_Fred[] = {
#include "assets/chameleons/Fred/Lcuff/Lcuff.gfx.inc.c"
};
//#######

//#######WRIST
Vtx D_0A004C58_Fred[] = {
#include "assets/chameleons/Fred/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Fred = IDENTITY;
unsigned char padding13_Fred[] = FILEPAD;
unsigned char D_0A004E70_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Fred[] = FILEPAD;
unsigned char D_0A004E98_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Fred[] = FILEPAD;
unsigned char D_0A0050A0_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Fred[] = FILEPAD;
unsigned char D_0A0052A8_Fred[] = {
#include "build/include/assets/chameleons/Fred/wrist/wrist.ci4.pal.inc.c"
};
Gfx D_0A0054A8_Fred[] = {
#include "assets/chameleons/Fred/wrist/wrist.gfx.inc.c"
};
//#######

//#######LWRIST
Vtx D_0A0058C0_Fred[] = {
#include "assets/chameleons/Fred/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Fred = IDENTITY;
Gfx D_0A005AD0_Fred[] = {
#include "assets/chameleons/Fred/Lwrist/Lwrist.gfx.inc.c"
};
//#######

//#######SHOULDER
Vtx D_0A005EE8_Fred[] = {
#include "assets/chameleons/Fred/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Fred = IDENTITY;
Gfx D_0A005F88_Fred[] = {
#include "assets/chameleons/Fred/shoulder/shoulder.gfx.inc.c"
};
//#######

//#######LSHOULDER
Vtx D_0A0060E0_Fred[] = {
#include "assets/chameleons/Fred/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Fred = IDENTITY;
Gfx D_0A006180_Fred[] = {
#include "assets/chameleons/Fred/Lshoulder/Lshoulder.gfx.inc.c"
};
//#######

//#######FIST
Vtx D_0A0062D8_Fred[] = {
#include "assets/chameleons/Fred/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Fred = IDENTITY;
unsigned char padding17_Fred[] = FILEPAD;
unsigned char D_0A0065B0_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Fred[] = FILEPAD;
unsigned char D_0A0067B8_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Fred[] = FILEPAD;
unsigned char D_0A0069C0_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Fred[] = FILEPAD;
unsigned char D_0A006BC8_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Fred[] = FILEPAD;
unsigned char D_0A006DD0_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Fred[] = FILEPAD;
unsigned char D_0A006FD8_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Fred[] = FILEPAD;
unsigned char D_0A0071E0_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Fred[] = FILEPAD;
unsigned char D_0A0073E8_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Fred[] = FILEPAD;
unsigned char D_0A0075F0_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Fred[] = FILEPAD;
unsigned char D_0A0077F8_Fred[] = {
#include "build/include/assets/chameleons/Fred/fist/fist4.ci4.pal.inc.c"
};
Gfx D_0A0079F8_Fred[] = {
#include "assets/chameleons/Fred/fist/fist.gfx.inc.c"
};
//#######

//#######LFIST
Vtx D_0A008110_Fred[] = {
#include "assets/chameleons/Fred/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Fred = IDENTITY;
Gfx D_0A008400_Fred[] = {
#include "assets/chameleons/Fred/Lfist/Lfist.gfx.inc.c"
};
//#######

//#######RESTASSOCIATE
Mtx_f D_0A008B18_Fred = {
#include "assets/chameleons/Fred/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Fred_Model[] = {
#include "assets/chameleons/Fred/restAssociate/restAssociate.gfx.inc.c"
};
