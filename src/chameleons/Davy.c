#include "common.h"
//these are probably used in ram specifically so they can be animated
extern Mtx D_80129730_Davy; //body
extern Mtx D_80129770_Davy; //head
extern Mtx D_801297B0_Davy; //backpack
extern Mtx D_801297F0_Davy; //shoe
extern Mtx D_80129830_Davy; //Lshoe
extern Mtx D_80129870_Davy; //cuff
extern Mtx D_801298B0_Davy; //Lcuff
extern Mtx D_801298F0_Davy; //wrist
extern Mtx D_80129930_Davy; //Lwrist
extern Mtx D_80129970_Davy; //shoulder
extern Mtx D_801299B0_Davy; //Lshoulder
extern Mtx D_801299F0_Davy; //fist
extern Mtx D_80129A30_Davy; //Lfist

#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to spit useless files
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

/*asset names need to follow the format D_<segmentID><distanceFromStart>_<groupName>
gfx generates symbols from addresses so for stuff DMA'd from rom with segment references
we have to work around that on c's*/

Lights1 Davy_Body_Lights1 =
#include "assets/chameleons/Davy/light.light.inc.c"

//#######BODY
Vtx Davy_Body_Vtx[] = {
#include "assets/chameleons/Davy/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Davy = IDENTITY;
unsigned char padding1_Davy[] = FILEPAD;

unsigned char Davy_Body_BackpackStrapPNG[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Davy/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Davy[] = FILEPAD;
unsigned char Davy_Body_BackpackStrapPAL[] = {
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

Gfx Davy_Body[] = {
#include "assets/chameleons/Davy/body/body.gfx.inc.c"
};
//#######

//#######BODYASSOCIATE
Mtx_f D_080011A0_Davy = {
#include "assets/chameleons/Davy/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx D_080011E0_Davy[] = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Davy/bodyAssociate/bodyAssociate.gfx.inc.c"
};
//#######

//#######HEAD
Vtx D_08001200_Davy[] = {
#include "assets/chameleons/Davy/head/head.vtx.inc.c"
};
Mtx_f headMtx_Davy = IDENTITY;
unsigned char padding7_Davy[] = FILEPAD;
unsigned char D_080016B8_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Davy[] = FILEPAD;
unsigned char D_08001AC0_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Davy[] = FILEPAD;
unsigned char D_08001CC8_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Davy[] = FILEPAD;
unsigned char D_080020D0_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Davy[] = FILEPAD;
unsigned char D_080022D8_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Davy[] = FILEPAD;
unsigned char D_080024E0_Davy[] = {
#include "build/include/assets/chameleons/Davy/head/cheek.ci4.pal.inc.c"
};

Gfx D_080026E0_Davy[] = {
#include "assets/chameleons/Davy/head/head.gfx.inc.c"
};
//#######

//#######BACKPACK
Vtx D_08002C60_Davy[] = {
#include "assets/chameleons/Davy/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Davy = IDENTITY;
unsigned char paddingD_Davy[] = FILEPAD;
unsigned char D_08002D28_Davy[] = {
#include "build/include/assets/chameleons/Davy/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Davy[] = FILEPAD;
unsigned char D_08002D50_Davy[] = {
#include "build/include/assets/chameleons/Davy/backpack/backpack.ci8.pal.inc.c"
};

Gfx D_08002F50_Davy[] = {
#include "assets/chameleons/Davy/backpack/backpack.gfx.inc.c"
};
//#######

//#######SHOE
Vtx D_080030C8_Davy[] = {
#include "assets/chameleons/Davy/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Davy = IDENTITY;
unsigned char paddingF_Davy[] = FILEPAD;
unsigned char D_080033D0_Davy[] = {
#include "build/include/assets/chameleons/Davy/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Davy[] = FILEPAD;
unsigned char D_080037D8_Davy[] = {
#include "build/include/assets/chameleons/Davy/shoe/shoe.ci4.pal.inc.c"
};

Gfx D_080039D8_Davy[] = {
#include "assets/chameleons/Davy/shoe/shoe.gfx.inc.c"
};
//#######

//#######LSHOE
Vtx D_08003C98_Davy[] = {
#include "assets/chameleons/Davy/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Davy = IDENTITY;
Gfx D_08003F98_Davy[] = {
#include "assets/chameleons/Davy/Lshoe/Lshoe.gfx.inc.c"
};
//#######

//#######CUFF
Vtx D_08004258_Davy[] = {
#include "assets/chameleons/Davy/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Davy = IDENTITY;
unsigned char padding11_Davy[] = FILEPAD;
unsigned char D_08004390_Davy[] = {
#include "build/include/assets/chameleons/Davy/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Davy[] = FILEPAD;
unsigned char D_080043B8_Davy[] = {
#include "build/include/assets/chameleons/Davy/cuff/color.ci4.pal.inc.c"
};

Gfx D_080045B8_Davy[] = {
#include "assets/chameleons/Davy/cuff/cuff.gfx.inc.c"
};
//#######

//#######LCUFF
Vtx D_08004870_Davy[] = {
#include "assets/chameleons/Davy/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Davy = IDENTITY;
Gfx D_080049A0_Davy[] = {
#include "assets/chameleons/Davy/Lcuff/Lcuff.gfx.inc.c"
};
//#######

//#######WRIST
Vtx D_08004C58_Davy[] = {
#include "assets/chameleons/Davy/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Davy = IDENTITY;
unsigned char padding13_Davy[] = FILEPAD;
unsigned char D_08004E70_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Davy[] = FILEPAD;
unsigned char D_08004E98_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Davy[] = FILEPAD;
unsigned char D_080050A0_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Davy[] = FILEPAD;
unsigned char D_080052A8_Davy[] = {
#include "build/include/assets/chameleons/Davy/wrist/wrist.ci4.pal.inc.c"
};
Gfx D_080054A8_Davy[] = {
#include "assets/chameleons/Davy/wrist/wrist.gfx.inc.c"
};
//#######

//#######LWRIST
Vtx D_080058C0_Davy[] = {
#include "assets/chameleons/Davy/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Davy = IDENTITY;
Gfx D_08005AD0_Davy[] = {
#include "assets/chameleons/Davy/Lwrist/Lwrist.gfx.inc.c"
};
//#######

//#######SHOULDER
Vtx D_08005EE8_Davy[] = {
#include "assets/chameleons/Davy/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Davy = IDENTITY;
Gfx D_08005F88_Davy[] = {
#include "assets/chameleons/Davy/shoulder/shoulder.gfx.inc.c"
};
//#######

//#######LSHOULDER
Vtx D_080060E0_Davy[] = {
#include "assets/chameleons/Davy/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Davy = IDENTITY;
Gfx D_08006180_Davy[] = {
#include "assets/chameleons/Davy/Lshoulder/Lshoulder.gfx.inc.c"
};
//#######

//#######FIST
Vtx D_080062D8_Davy[] = {
#include "assets/chameleons/Davy/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Davy = IDENTITY;
unsigned char padding17_Davy[] = FILEPAD;
unsigned char D_080065B0_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Davy[] = FILEPAD;
unsigned char D_080067B8_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Davy[] = FILEPAD;
unsigned char D_080069C0_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Davy[] = FILEPAD;
unsigned char D_08006BC8_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Davy[] = FILEPAD;
unsigned char D_08006DD0_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Davy[] = FILEPAD;
unsigned char D_08006FD8_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Davy[] = FILEPAD;
unsigned char D_080071E0_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Davy[] = FILEPAD;
unsigned char D_080073E8_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Davy[] = FILEPAD;
unsigned char D_080075F0_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Davy[] = FILEPAD;
unsigned char D_080077F8_Davy[] = {
#include "build/include/assets/chameleons/Davy/fist/fist4.ci4.pal.inc.c"
};
Gfx D_080079F8_Davy[] = {
#include "assets/chameleons/Davy/fist/fist.gfx.inc.c"
};
//#######

//#######LFIST
Vtx D_08008110_Davy[] = {
#include "assets/chameleons/Davy/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Davy = IDENTITY;
Gfx D_08008400_Davy[] = {
#include "assets/chameleons/Davy/Lfist/Lfist.gfx.inc.c"
};
//#######

//#######RESTASSOCIATE
Mtx_f D_08008B18_Davy = {
#include "assets/chameleons/Davy/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Davy_Model[] = {
#include "assets/chameleons/Davy/restAssociate/restAssociate.gfx.inc.c"
};
