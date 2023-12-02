#include "common.h"
//these are probably used in ram specifically so they can be animated
extern Mtx D_80129730_Jack; //body
extern Mtx D_80129770_Jack; //head
extern Mtx D_801297B0_Jack; //backpack
extern Mtx D_801297F0_Jack; //shoe
extern Mtx D_80129830_Jack; //Lshoe
extern Mtx D_80129870_Jack; //cuff
extern Mtx D_801298B0_Jack; //Lcuff
extern Mtx D_801298F0_Jack; //wrist
extern Mtx D_80129930_Jack; //Lwrist
extern Mtx D_80129970_Jack; //shoulder
extern Mtx D_801299B0_Jack; //Lshoulder
extern Mtx D_801299F0_Jack; //fist
extern Mtx D_80129A30_Jack; //Lfist

#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to spit useless files
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

/*asset names need to follow the format D_<segmentID><distanceFromStart>_<groupName>
gfx generates symbols from addresses so for stuff DMA'd from rom with segment references
we have to work around that on c's*/

Lights1 D_09000000_Jack =
#include "assets/chameleons/Jack/light.light.inc.c"

//#######BODY
Vtx D_09000018_Jack[] = {
#include "assets/chameleons/Jack/body/body.vtx.inc.c"
};
Mtx_f BodyMTX_Jack = IDENTITY;
unsigned char padding1_Jack[] = FILEPAD;

unsigned char D_090001A0_Jack[] = { // the body markings and backpack straps on the body
#include "build/include/assets/chameleons/Jack/body/backpackStrap.ci4.png.inc.c"
};
unsigned char padding2_Jack[] = FILEPAD;
unsigned char D_090005A8_Jack[] = {
#include "build/include/assets/chameleons/Jack/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char padding3_Jack[] = FILEPAD;

unsigned char D_090007B0_Jack[] = { // the solid color used for the body
#include "build/include/assets/chameleons/Jack/body/solidColor.ci4.png.inc.c"
};
unsigned char padding4_Jack[] = FILEPAD;
unsigned char D_090007D8_Jack[] = {
#include "build/include/assets/chameleons/Jack/body/solidColor.ci4.pal.inc.c"
};
unsigned char padding5_Jack[] = FILEPAD;

unsigned char D_090009E0_Jack[] = { // the number on the front of the chameleon
#include "build/include/assets/chameleons/Jack/body/number.ci4.png.inc.c"
};
unsigned char padding6_Jack[] = FILEPAD;
unsigned char D_09000BE8_Jack[] = {
#include "build/include/assets/chameleons/Jack/body/number.ci4.pal.inc.c"
};

Gfx D_09000DE8_Jack[] = {
#include "assets/chameleons/Jack/body/body.gfx.inc.c"
};
//#######

//#######BODYASSOCIATE
Mtx_f D_090011A0_Jack = {
#include "assets/chameleons/Jack/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx D_090011E0_Jack[] = { // i believe this is used for anchoring the limbs against the body? more research needed
#include "assets/chameleons/Jack/bodyAssociate/bodyAssociate.gfx.inc.c"
};
//#######

//#######HEAD
Vtx D_09001200_Jack[] = {
#include "assets/chameleons/Jack/head/head.vtx.inc.c"
};
Mtx_f headMtx_Jack = IDENTITY;
unsigned char padding7_Jack[] = FILEPAD;
unsigned char D_090016F8_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeL.ci8.png.inc.c"
};
unsigned char padding8_Jack[] = FILEPAD;
unsigned char D_09001B00_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeL.ci8.pal.inc.c"
};
unsigned char padding9_Jack[] = FILEPAD;
unsigned char D_09001D08_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeR.ci8.png.inc.c"
};
unsigned char paddingA_Jack[] = FILEPAD;
unsigned char D_09002110_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/eyeR.ci8.pal.inc.c"
};
unsigned char paddingB_Jack[] = FILEPAD;
unsigned char D_09002318_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/cheek.ci4.png.inc.c"
};
unsigned char paddingC_Jack[] = FILEPAD;
unsigned char D_09002520_Jack[] = {
#include "build/include/assets/chameleons/Jack/head/cheek.ci4.pal.inc.c"
};

Gfx D_09002720_Jack[] = {
#include "assets/chameleons/Jack/head/head.gfx.inc.c"
};
//#######

//#######BACKPACK
Vtx D_09002CA0_Jack[] = {
#include "assets/chameleons/Jack/backpack/backpack.vtx.inc.c"
};
Mtx_f backpackMtx_Jack = IDENTITY;
unsigned char paddingD_Jack[] = FILEPAD;
unsigned char D_09002D68_Jack[] = {
#include "build/include/assets/chameleons/Jack/backpack/backpack.ci8.png.inc.c"
};
unsigned char paddingE_Jack[] = FILEPAD;
unsigned char D_09002D90_Jack[] = {
#include "build/include/assets/chameleons/Jack/backpack/backpack.ci8.pal.inc.c"
};

Gfx D_09002F90_Jack[] = {
#include "assets/chameleons/Jack/backpack/backpack.gfx.inc.c"
};
//#######

//#######SHOE
Vtx D_09003108_Jack[] = {
#include "assets/chameleons/Jack/shoe/shoe.vtx.inc.c"
};
Mtx_f shoeMtx_Jack = IDENTITY;
unsigned char paddingF_Jack[] = FILEPAD;
unsigned char D_09003410_Jack[] = {
#include "build/include/assets/chameleons/Jack/shoe/shoe.ci4.png.inc.c"
};
unsigned char padding10_Jack[] = FILEPAD;
unsigned char D_09003818_Jack[] = {
#include "build/include/assets/chameleons/Jack/shoe/shoe.ci4.pal.inc.c"
};

Gfx D_09003A18_Jack[] = {
#include "assets/chameleons/Jack/shoe/shoe.gfx.inc.c"
};
//#######

//#######LSHOE
Vtx D_09003CD8_Jack[] = {
#include "assets/chameleons/Jack/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f LshoeMtx_Jack = IDENTITY;
Gfx D_09003FD8_Jack[] = {
#include "assets/chameleons/Jack/Lshoe/Lshoe.gfx.inc.c"
};
//#######

//#######CUFF
Vtx D_09004298_Jack[] = {
#include "assets/chameleons/Jack/cuff/cuff.vtx.inc.c"
};
Mtx_f cuffMtx_Jack = IDENTITY;
unsigned char padding11_Jack[] = FILEPAD;
unsigned char D_090043D0_Jack[] = {
#include "build/include/assets/chameleons/Jack/cuff/color.ci4.png.inc.c"
};
unsigned char padding12_Jack[] = FILEPAD;
unsigned char D_090043F8_Jack[] = {
#include "build/include/assets/chameleons/Jack/cuff/color.ci4.pal.inc.c"
};

Gfx D_090045F8_Jack[] = {
#include "assets/chameleons/Jack/cuff/cuff.gfx.inc.c"
};
//#######

//#######LCUFF
Vtx D_090048B0_Jack[] = {
#include "assets/chameleons/Jack/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f LcuffMtx_Jack = IDENTITY;
Gfx D_090049E0_Jack[] = {
#include "assets/chameleons/Jack/Lcuff/Lcuff.gfx.inc.c"
};
//#######

//#######WRIST
Vtx D_09004C98_Jack[] = {
#include "assets/chameleons/Jack/wrist/wrist.vtx.inc.c"
};
Mtx_f wristMtx_Jack = IDENTITY;
unsigned char padding13_Jack[] = FILEPAD;
unsigned char D_09004EB0_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wristColor.ci4.png.inc.c"
};
unsigned char padding14_Jack[] = FILEPAD;
unsigned char D_09004ED8_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char padding15_Jack[] = FILEPAD;
unsigned char D_090050E0_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wrist.ci4.png.inc.c"
};
unsigned char padding16_Jack[] = FILEPAD;
unsigned char D_090052E8_Jack[] = {
#include "build/include/assets/chameleons/Jack/wrist/wrist.ci4.pal.inc.c"
};
Gfx D_090054E8_Jack[] = {
#include "assets/chameleons/Jack/wrist/wrist.gfx.inc.c"
};
//#######

//#######LWRIST
Vtx D_09005900_Jack[] = {
#include "assets/chameleons/Jack/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f LwristMtx_Jack = IDENTITY;
Gfx D_09005B10_Jack[] = {
#include "assets/chameleons/Jack/Lwrist/Lwrist.gfx.inc.c"
};
//#######

//#######SHOULDER
Vtx D_09005F28_Jack[] = {
#include "assets/chameleons/Jack/shoulder/shoulder.vtx.inc.c"
};
Mtx_f shoulderMtx_Jack = IDENTITY;
Gfx D_09005FC8_Jack[] = {
#include "assets/chameleons/Jack/shoulder/shoulder.gfx.inc.c"
};
//#######

//#######LSHOULDER
Vtx D_09006120_Jack[] = {
#include "assets/chameleons/Jack/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f LshoulderMtx_Jack = IDENTITY;
Gfx D_090061C0_Jack[] = {
#include "assets/chameleons/Jack/Lshoulder/Lshoulder.gfx.inc.c"
};
//#######

//#######FIST
Vtx D_09006318_Jack[] = {
#include "assets/chameleons/Jack/fist/fist.vtx.inc.c"
};
Mtx_f fistMtx_Jack = IDENTITY;
unsigned char padding17_Jack[] = FILEPAD;
unsigned char D_090065F0_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist1.ci4.png.inc.c"
};
unsigned char padding18_Jack[] = FILEPAD;
unsigned char D_090067F8_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist1.ci4.pal.inc.c"
};
unsigned char padding19_Jack[] = FILEPAD;
unsigned char D_09006A00_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist2.ci4.png.inc.c"
};
unsigned char padding1A_Jack[] = FILEPAD;
unsigned char D_09006C08_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist2.ci4.pal.inc.c"
};
unsigned char padding1B_Jack[] = FILEPAD;
unsigned char D_09006E10_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist3.ci4.png.inc.c"
};
unsigned char padding1C_Jack[] = FILEPAD;
unsigned char D_09007018_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist3.ci4.pal.inc.c"
};
unsigned char padding1D_Jack[] = FILEPAD;
unsigned char D_09007220_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char padding1E_Jack[] = FILEPAD;
unsigned char D_09007428_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char padding1F_Jack[] = FILEPAD;
unsigned char D_09007630_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist4.ci4.png.inc.c"
};
unsigned char padding20_Jack[] = FILEPAD;
unsigned char D_09007838_Jack[] = {
#include "build/include/assets/chameleons/Jack/fist/fist4.ci4.pal.inc.c"
};
Gfx D_09007A38_Jack[] = {
#include "assets/chameleons/Jack/fist/fist.gfx.inc.c"
};
//#######

//#######LFIST
Vtx D_09008150_Jack[] = {
#include "assets/chameleons/Jack/Lfist/Lfist.vtx.inc.c"
};
Mtx_f LfistMtx_Jack = IDENTITY;
Gfx D_09008440_Jack[] = {
#include "assets/chameleons/Jack/Lfist/Lfist.gfx.inc.c"
};
//#######

//#######RESTASSOCIATE
Mtx_f D_09008B58_Jack = {
#include "assets/chameleons/Jack/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Jack_Model[] = {
#include "assets/chameleons/Jack/restAssociate/restAssociate.gfx.inc.c"
};
