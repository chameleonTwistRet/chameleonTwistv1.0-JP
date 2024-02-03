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

Lights1 Black_light_Light =
#include "assets/chameleons/Black/light.light.inc.c"
Vtx Black_body_Vtx[] = {
#include "assets/chameleons/Black/body/body.vtx.inc.c"
};
Mtx_f Black_IMtx1 = IDENTITY;
unsigned char Black_Pad1[] = FILEPAD;
unsigned char Black_backpackStrap_PNG[] = {
#include "build/include/assets/chameleons/Black/body/backpackStrap.ci4.png.inc.c"
};
unsigned char Black_Pad2[] = FILEPAD;
unsigned char Black_backpackStrap_PAL[] = {
#include "build/include/assets/chameleons/Black/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char Black_Pad3[] = FILEPAD;
unsigned char Black_solidColor_PNG[] = {
#include "build/include/assets/chameleons/Black/body/solidColor.ci4.png.inc.c"
};
unsigned char Black_Pad4[] = FILEPAD;
unsigned char Black_solidColor_PAL[] = {
#include "build/include/assets/chameleons/Black/body/solidColor.ci4.pal.inc.c"
};
unsigned char Black_Pad5[] = FILEPAD;
unsigned char Black_number_PNG[] = {
#include "build/include/assets/chameleons/Black/body/number.ci4.png.inc.c"
};
unsigned char Black_Pad6[] = FILEPAD;
unsigned char Black_number_PAL[] = {
#include "build/include/assets/chameleons/Black/body/number.ci4.pal.inc.c"
};
Gfx Black_body_Gfx[] = {
#include "assets/chameleons/Black/body/body.gfx.inc.c"
};
Mtx_f Black_bodyAssociate_Mtx = {
#include "assets/chameleons/Black/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx Black_bodyAssociate_Gfx[] = {
#include "assets/chameleons/Black/bodyAssociate/bodyAssociate.gfx.inc.c"
};
Vtx Black_head_Vtx[] = {
#include "assets/chameleons/Black/head/head.vtx.inc.c"
};
Mtx_f Black_IMtx2 = IDENTITY;
unsigned char Black_Pad7[] = FILEPAD;
unsigned char Black_eyeL_PNG[] = {
#include "build/include/assets/chameleons/Black/head/eyeL.ci8.png.inc.c"
};
unsigned char Black_Pad8[] = FILEPAD;
unsigned char Black_eyeL_PAL[] = {
#include "build/include/assets/chameleons/Black/head/eyeL.ci8.pal.inc.c"
};
unsigned char Black_Pad9[] = FILEPAD;
unsigned char Black_eyeR_PNG[] = {
#include "build/include/assets/chameleons/Black/head/eyeR.ci8.png.inc.c"
};
unsigned char Black_Pad10[] = FILEPAD;
unsigned char Black_eyeR_PAL[] = {
#include "build/include/assets/chameleons/Black/head/eyeR.ci8.pal.inc.c"
};
unsigned char Black_Pad11[] = FILEPAD;
unsigned char Black_cheek_PNG[] = {
#include "build/include/assets/chameleons/Black/head/cheek.ci4.png.inc.c"
};
unsigned char Black_Pad12[] = FILEPAD;
unsigned char Black_cheek_PAL[] = {
#include "build/include/assets/chameleons/Black/head/cheek.ci4.pal.inc.c"
};
Gfx Black_head_Gfx[] = {
#include "assets/chameleons/Black/head/head.gfx.inc.c"
};
Vtx Black_backpack_Vtx[] = {
#include "assets/chameleons/Black/backpack/backpack.vtx.inc.c"
};
Mtx_f Black_IMtx3 = IDENTITY;
unsigned char Black_Pad13[] = FILEPAD;
unsigned char Black_backpack_PNG[] = {
#include "build/include/assets/chameleons/Black/backpack/backpack.ci8.png.inc.c"
};
unsigned char Black_Pad14[] = FILEPAD;
unsigned char Black_backpack_PAL[] = {
#include "build/include/assets/chameleons/Black/backpack/backpack.ci8.pal.inc.c"
};
Gfx Black_backpack_Gfx[] = {
#include "assets/chameleons/Black/backpack/backpack.gfx.inc.c"
};
Vtx Black_shoe_Vtx[] = {
#include "assets/chameleons/Black/shoe/shoe.vtx.inc.c"
};
Mtx_f Black_IMtx4 = IDENTITY;
unsigned char Black_Pad15[] = FILEPAD;
unsigned char Black_shoe_PNG[] = {
#include "build/include/assets/chameleons/Black/shoe/shoe.ci4.png.inc.c"
};
unsigned char Black_Pad16[] = FILEPAD;
unsigned char Black_shoe_PAL[] = {
#include "build/include/assets/chameleons/Black/shoe/shoe.ci4.pal.inc.c"
};
Gfx Black_shoe_Gfx[] = {
#include "assets/chameleons/Black/shoe/shoe.gfx.inc.c"
};
Vtx Black_Lshoe_Vtx[] = {
#include "assets/chameleons/Black/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f Black_IMtx5 = IDENTITY;
Gfx Black_Lshoe_Gfx[] = {
#include "assets/chameleons/Black/Lshoe/Lshoe.gfx.inc.c"
};
Vtx Black_cuff_Vtx[] = {
#include "assets/chameleons/Black/cuff/cuff.vtx.inc.c"
};
Mtx_f Black_IMtx6 = IDENTITY;
unsigned char Black_Pad17[] = FILEPAD;
unsigned char Black_color_PNG[] = {
#include "build/include/assets/chameleons/Black/cuff/color.ci4.png.inc.c"
};
unsigned char Black_Pad18[] = FILEPAD;
unsigned char Black_color_PAL[] = {
#include "build/include/assets/chameleons/Black/cuff/color.ci4.pal.inc.c"
};
Gfx Black_cuff_Gfx[] = {
#include "assets/chameleons/Black/cuff/cuff.gfx.inc.c"
};
Vtx Black_Lcuff_Vtx[] = {
#include "assets/chameleons/Black/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f Black_IMtx7 = IDENTITY;
Gfx Black_Lcuff_Gfx[] = {
#include "assets/chameleons/Black/Lcuff/Lcuff.gfx.inc.c"
};
Vtx Black_wrist_Vtx[] = {
#include "assets/chameleons/Black/wrist/wrist.vtx.inc.c"
};
Mtx_f Black_IMtx8 = IDENTITY;
unsigned char Black_Pad19[] = FILEPAD;
unsigned char Black_wristColor_PNG[] = {
#include "build/include/assets/chameleons/Black/wrist/wristColor.ci4.png.inc.c"
};
unsigned char Black_Pad20[] = FILEPAD;
unsigned char Black_wristColor_PAL[] = {
#include "build/include/assets/chameleons/Black/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char Black_Pad21[] = FILEPAD;
unsigned char Black_wrist_PNG[] = {
#include "build/include/assets/chameleons/Black/wrist/wrist.ci4.png.inc.c"
};
unsigned char Black_Pad22[] = FILEPAD;
unsigned char Black_wrist_PAL[] = {
#include "build/include/assets/chameleons/Black/wrist/wrist.ci4.pal.inc.c"
};
Gfx Black_wrist_Gfx[] = {
#include "assets/chameleons/Black/wrist/wrist.gfx.inc.c"
};
Vtx Black_Lwrist_Vtx[] = {
#include "assets/chameleons/Black/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f Black_IMtx9 = IDENTITY;
Gfx Black_Lwrist_Gfx[] = {
#include "assets/chameleons/Black/Lwrist/Lwrist.gfx.inc.c"
};
Vtx Black_shoulder_Vtx[] = {
#include "assets/chameleons/Black/shoulder/shoulder.vtx.inc.c"
};
Mtx_f Black_IMtx10 = IDENTITY;
Gfx Black_shoulder_Gfx[] = {
#include "assets/chameleons/Black/shoulder/shoulder.gfx.inc.c"
};
Vtx Black_Lshoulder_Vtx[] = {
#include "assets/chameleons/Black/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f Black_IMtx11 = IDENTITY;
Gfx Black_Lshoulder_Gfx[] = {
#include "assets/chameleons/Black/Lshoulder/Lshoulder.gfx.inc.c"
};
Vtx Black_fist_Vtx[] = {
#include "assets/chameleons/Black/fist/fist.vtx.inc.c"
};
Mtx_f Black_IMtx12 = IDENTITY;
unsigned char Black_Pad23[] = FILEPAD;
unsigned char Black_fist1_PNG[] = {
#include "build/include/assets/chameleons/Black/fist/fist1.ci4.png.inc.c"
};
unsigned char Black_Pad24[] = FILEPAD;
unsigned char Black_fist1_PAL[] = {
#include "build/include/assets/chameleons/Black/fist/fist1.ci4.pal.inc.c"
};
unsigned char Black_Pad25[] = FILEPAD;
unsigned char Black_fist2_PNG[] = {
#include "build/include/assets/chameleons/Black/fist/fist2.ci4.png.inc.c"
};
unsigned char Black_Pad26[] = FILEPAD;
unsigned char Black_fist2_PAL[] = {
#include "build/include/assets/chameleons/Black/fist/fist2.ci4.pal.inc.c"
};
unsigned char Black_Pad27[] = FILEPAD;
unsigned char Black_fist3_PNG[] = {
#include "build/include/assets/chameleons/Black/fist/fist3.ci4.png.inc.c"
};
unsigned char Black_Pad28[] = FILEPAD;
unsigned char Black_fist3_PAL[] = {
#include "build/include/assets/chameleons/Black/fist/fist3.ci4.pal.inc.c"
};
unsigned char Black_Pad29[] = FILEPAD;
unsigned char Black_fistDiamond_PNG[] = {
#include "build/include/assets/chameleons/Black/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char Black_Pad30[] = FILEPAD;
unsigned char Black_fistDiamond_PAL[] = {
#include "build/include/assets/chameleons/Black/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char Black_Pad31[] = FILEPAD;
unsigned char Black_fist4_PNG[] = {
#include "build/include/assets/chameleons/Black/fist/fist4.ci4.png.inc.c"
};
unsigned char Black_Pad32[] = FILEPAD;
unsigned char Black_fist4_PAL[] = {
#include "build/include/assets/chameleons/Black/fist/fist4.ci4.pal.inc.c"
};
Gfx Black_fist_Gfx[] = {
#include "assets/chameleons/Black/fist/fist.gfx.inc.c"
};
Vtx Black_Lfist_Vtx[] = {
#include "assets/chameleons/Black/Lfist/Lfist.vtx.inc.c"
};
Mtx_f Black_IMtx13 = IDENTITY;
Gfx Black_Lfist_Gfx[] = {
#include "assets/chameleons/Black/Lfist/Lfist.gfx.inc.c"
};
Mtx_f Black_restAssociate_Mtx = {
#include "assets/chameleons/Black/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Black_restAssociate_Gfx[] = {
#include "assets/chameleons/Black/restAssociate/restAssociate.gfx.inc.c"
};
