#include "common.h"
//these are probably used in ram specifically so they can be animated
extern Mtx D_80129730_Black; //body
extern Mtx D_80129770_Black; //head
extern Mtx D_801297B0_Black; //backpack
extern Mtx D_801297F0_Black; //shoe
extern Mtx D_80129830_Black; //Lshoe
extern Mtx D_80129870_Black; //cuff
extern Mtx D_801298B0_Black; //Lcuff
extern Mtx D_801298F0_Black; //wrist
extern Mtx D_80129930_Black; //Lwrist
extern Mtx D_80129970_Black; //shoulder
extern Mtx D_801299B0_Black; //Lshoulder
extern Mtx D_801299F0_Black; //fist
extern Mtx D_80129A30_Black; //Lfist

#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to spit useless files
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

/*asset names need to follow the format D_<segmentID><distanceFromStart>_<groupName>
gfx generates symbols from addresses so for stuff DMA'd from rom with segment references
we have to work around that on c's*/

Lights1 D_0C000000_Black =
#include "assets/chameleons/Black/light.light.inc.c"

//#######BODY
Vtx D_0C000018_Black[] = {
#include "assets/chameleons/Black/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Black = IDENTITY;
unsigned char padding1_Black[] = FILEPAD;

unsigned char D_0C0001A0_Black[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Black/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Black[] = FILEPAD;
unsigned char D_0C0005A8_Black[] = {
#include "build/include/assets/chameleons/Black/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Black[] = FILEPAD;

unsigned char D_0C0007B0_Black[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Black/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Black[] = FILEPAD;
unsigned char D_0C0007D8_Black[] = {
#include "build/include/assets/chameleons/Black/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Black[] = FILEPAD;

unsigned char D_0C0009E0_Black[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Black/body/number.ci4.png.inc.c"
};
unsigned char padding6_Black[] = FILEPAD;
unsigned char D_0C000BE8_Black[] = {
#include "build/include/assets/chameleons/Black/body/number.ci4.pal.inc.c"
};

Gfx D_0C000DE8_Black[] = {
#include "assets/chameleons/Black/body/body.gfx.inc.c"
};
//#######

//#######BODYASSOCIATE
Mtx_f D_0C0011A0_Black = {
#include "assets/chameleons/Black/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx D_0C0011E0_Black[] = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Black/bodyAssociate/bodyAssociate.gfx.inc.c"
};
//#######

//#######HEAD
Vtx D_0C001200_Black[] = {
#include "assets/chameleons/Black/head/head.vtx.inc.c"
};
Mtx_f headMtx_Black = IDENTITY;
unsigned char padding7_Black[] = FILEPAD;
unsigned char D_0C0016F8_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Black[] = FILEPAD;
unsigned char D_0C001B00_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Black[] = FILEPAD;
unsigned char D_0C001D08_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Black[] = FILEPAD;
unsigned char D_0C002110_Black[] = {
#include "build/include/assets/chameleons/Black/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Black[] = FILEPAD;
unsigned char D_0C002318_Black[] = {
#include "build/include/assets/chameleons/Black/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Black[] = FILEPAD;
unsigned char D_0C002520_Black[] = {
#include "build/include/assets/chameleons/Black/head/cheek.ci4.pal.inc.c"
};

Gfx D_0C002720_Black[] = {
#include "assets/chameleons/Black/head/head.gfx.inc.c"
};
//#######

//#######BACKPACK
Vtx D_0C002CA0_Black[] = {
#include "assets/chameleons/Black/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Black = IDENTITY;
unsigned char paddingD_Black[] = FILEPAD;
unsigned char D_0C002D68_Black[] = {
#include "build/include/assets/chameleons/Black/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Black[] = FILEPAD;
unsigned char D_0C002D90_Black[] = {
#include "build/include/assets/chameleons/Black/backpack/backpack.ci8.pal.inc.c"
};

Gfx D_0C002F90_Black[] = {
#include "assets/chameleons/Black/backpack/backpack.gfx.inc.c"
};
//#######

//#######SHOE
Vtx D_0C003108_Black[] = {
#include "assets/chameleons/Black/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Black = IDENTITY;
unsigned char paddingF_Black[] = FILEPAD;
unsigned char D_0C0033E0_Black[] = {
#include "build/include/assets/chameleons/Black/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Black[] = FILEPAD;
unsigned char D_0C0037E8_Black[] = {
#include "build/include/assets/chameleons/Black/shoe/shoe.ci4.pal.inc.c"
};

Gfx D_0C0039E8_Black[] = {
#include "assets/chameleons/Black/shoe/shoe.gfx.inc.c"
};
//#######

//#######LSHOE
Vtx D_0C003CA8_Black[] = {
#include "assets/chameleons/Black/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Black = IDENTITY;
Gfx D_0C003FA8_Black[] = {
#include "assets/chameleons/Black/Lshoe/Lshoe.gfx.inc.c"
};
//#######

//#######CUFF
Vtx D_0C004268_Black[] = {
#include "assets/chameleons/Black/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Black = IDENTITY;
unsigned char padding11_Black[] = FILEPAD;
unsigned char D_0C0043A0_Black[] = {
#include "build/include/assets/chameleons/Black/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Black[] = FILEPAD;
unsigned char D_0C0043C8_Black[] = {
#include "build/include/assets/chameleons/Black/cuff/color.ci4.pal.inc.c"
};

Gfx D_0C0045C8_Black[] = {
#include "assets/chameleons/Black/cuff/cuff.gfx.inc.c"
};
//#######

//#######LCUFF
Vtx D_0C004880_Black[] = {
#include "assets/chameleons/Black/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Black = IDENTITY;
Gfx D_0C0049B0_Black[] = {
#include "assets/chameleons/Black/Lcuff/Lcuff.gfx.inc.c"
};
//#######

//#######WRIST
Vtx D_0C004C68_Black[] = {
#include "assets/chameleons/Black/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Black = IDENTITY;
unsigned char padding13_Black[] = FILEPAD;
unsigned char D_0C004E80_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Black[] = FILEPAD;
unsigned char D_0C004EA8_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Black[] = FILEPAD;
unsigned char D_0C0050B0_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Black[] = FILEPAD;
unsigned char D_0C0052B8_Black[] = {
#include "build/include/assets/chameleons/Black/wrist/wrist.ci4.pal.inc.c"
};
Gfx D_0C0054B8_Black[] = {
#include "assets/chameleons/Black/wrist/wrist.gfx.inc.c"
};
//#######

//#######LWRIST
Vtx D_0C0058D0_Black[] = {
#include "assets/chameleons/Black/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Black = IDENTITY;
Gfx D_0C005AE0_Black[] = {
#include "assets/chameleons/Black/Lwrist/Lwrist.gfx.inc.c"
};
//#######

//#######SHOULDER
Vtx D_0C005EF8_Black[] = {
#include "assets/chameleons/Black/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Black = IDENTITY;
Gfx D_0C005F98_Black[] = {
#include "assets/chameleons/Black/shoulder/shoulder.gfx.inc.c"
};
//#######

//#######LSHOULDER
Vtx D_0C0060F0_Black[] = {
#include "assets/chameleons/Black/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Black = IDENTITY;
Gfx D_0C006190_Black[] = {
#include "assets/chameleons/Black/Lshoulder/Lshoulder.gfx.inc.c"
};
//#######

//#######FIST
Vtx D_0C0062E8_Black[] = {
#include "assets/chameleons/Black/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Black = IDENTITY;
unsigned char padding17_Black[] = FILEPAD;
unsigned char D_0C0065C0_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Black[] = FILEPAD;
unsigned char D_0C0067C8_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Black[] = FILEPAD;
unsigned char D_0C0069D0_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Black[] = FILEPAD;
unsigned char D_0C006BD8_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Black[] = FILEPAD;
unsigned char D_0C006DE0_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Black[] = FILEPAD;
unsigned char D_0C006FE8_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Black[] = FILEPAD;
unsigned char D_0C0071F0_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Black[] = FILEPAD;
unsigned char D_0C0073F8_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Black[] = FILEPAD;
unsigned char D_0C007600_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Black[] = FILEPAD;
unsigned char D_0C007808_Black[] = {
#include "build/include/assets/chameleons/Black/fist/fist4.ci4.pal.inc.c"
};
Gfx D_0C007A08_Black[] = {
#include "assets/chameleons/Black/fist/fist.gfx.inc.c"
};
//#######

//#######LFIST
Vtx D_0C008120_Black[] = {
#include "assets/chameleons/Black/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Black = IDENTITY;
Gfx D_0C008410_Black[] = {
#include "assets/chameleons/Black/Lfist/Lfist.gfx.inc.c"
};
//#######

//#######RESTASSOCIATE
Mtx_f D_0C008B28_Black = {
#include "assets/chameleons/Black/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Black_Model[] = {
#include "assets/chameleons/Black/restAssociate/restAssociate.gfx.inc.c"
};
