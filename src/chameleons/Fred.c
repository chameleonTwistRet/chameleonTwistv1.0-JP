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

Lights1 Fred_light_Light =
#include "assets/chameleons/Fred/light.light.inc.c"
Vtx Fred_body_Vtx[] = {
#include "assets/chameleons/Fred/body/body.vtx.inc.c"
};
Mtx_f Fred_IMtx1 = IDENTITY;
unsigned char Fred_Pad1[] = FILEPAD;
unsigned char Fred_backpackStrap_PNG[] = {
#include "build/include/assets/chameleons/Fred/body/backpackStrap.ci4.png.inc.c"
};
unsigned char Fred_Pad2[] = FILEPAD;
unsigned char Fred_backpackStrap_PAL[] = {
#include "build/include/assets/chameleons/Fred/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char Fred_Pad3[] = FILEPAD;
unsigned char Fred_solidColor_PNG[] = {
#include "build/include/assets/chameleons/Fred/body/solidColor.ci4.png.inc.c"
};
unsigned char Fred_Pad4[] = FILEPAD;
unsigned char Fred_solidColor_PAL[] = {
#include "build/include/assets/chameleons/Fred/body/solidColor.ci4.pal.inc.c"
};
unsigned char Fred_Pad5[] = FILEPAD;
unsigned char Fred_number_PNG[] = {
#include "build/include/assets/chameleons/Fred/body/number.ci4.png.inc.c"
};
unsigned char Fred_Pad6[] = FILEPAD;
unsigned char Fred_number_PAL[] = {
#include "build/include/assets/chameleons/Fred/body/number.ci4.pal.inc.c"
};
Gfx Fred_body_Gfx[] = {
#include "assets/chameleons/Fred/body/body.gfx.inc.c"
};
Mtx_f Fred_bodyAssociate_Mtx = {
#include "assets/chameleons/Fred/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx Fred_bodyAssociate_Gfx[] = {
#include "assets/chameleons/Fred/bodyAssociate/bodyAssociate.gfx.inc.c"
};
Vtx Fred_head_Vtx[] = {
#include "assets/chameleons/Fred/head/head.vtx.inc.c"
};
Mtx_f Fred_IMtx2 = IDENTITY;
unsigned char Fred_Pad7[] = FILEPAD;
unsigned char Fred_eyeL_PNG[] = {
#include "build/include/assets/chameleons/Fred/head/eyeL.ci8.png.inc.c"
};
unsigned char Fred_Pad8[] = FILEPAD;
unsigned char Fred_eyeL_PAL[] = {
#include "build/include/assets/chameleons/Fred/head/eyeL.ci8.pal.inc.c"
};
unsigned char Fred_Pad9[] = FILEPAD;
unsigned char Fred_eyeR_PNG[] = {
#include "build/include/assets/chameleons/Fred/head/eyeR.ci8.png.inc.c"
};
unsigned char Fred_Pad10[] = FILEPAD;
unsigned char Fred_eyeR_PAL[] = {
#include "build/include/assets/chameleons/Fred/head/eyeR.ci8.pal.inc.c"
};
unsigned char Fred_Pad11[] = FILEPAD;
unsigned char Fred_cheek_PNG[] = {
#include "build/include/assets/chameleons/Fred/head/cheek.ci4.png.inc.c"
};
unsigned char Fred_Pad12[] = FILEPAD;
unsigned char Fred_cheek_PAL[] = {
#include "build/include/assets/chameleons/Fred/head/cheek.ci4.pal.inc.c"
};
Gfx Fred_head_Gfx[] = {
#include "assets/chameleons/Fred/head/head.gfx.inc.c"
};
Vtx Fred_backpack_Vtx[] = {
#include "assets/chameleons/Fred/backpack/backpack.vtx.inc.c"
};
Mtx_f Fred_IMtx3 = IDENTITY;
unsigned char Fred_Pad13[] = FILEPAD;
unsigned char Fred_backpack_PNG[] = {
#include "build/include/assets/chameleons/Fred/backpack/backpack.ci8.png.inc.c"
};
unsigned char Fred_Pad14[] = FILEPAD;
unsigned char Fred_backpack_PAL[] = {
#include "build/include/assets/chameleons/Fred/backpack/backpack.ci8.pal.inc.c"
};
Gfx Fred_backpack_Gfx[] = {
#include "assets/chameleons/Fred/backpack/backpack.gfx.inc.c"
};
Vtx Fred_shoe_Vtx[] = {
#include "assets/chameleons/Fred/shoe/shoe.vtx.inc.c"
};
Mtx_f Fred_IMtx4 = IDENTITY;
unsigned char Fred_Pad15[] = FILEPAD;
unsigned char Fred_shoe_PNG[] = {
#include "build/include/assets/chameleons/Fred/shoe/shoe.ci4.png.inc.c"
};
unsigned char Fred_Pad16[] = FILEPAD;
unsigned char Fred_shoe_PAL[] = {
#include "build/include/assets/chameleons/Fred/shoe/shoe.ci4.pal.inc.c"
};
Gfx Fred_shoe_Gfx[] = {
#include "assets/chameleons/Fred/shoe/shoe.gfx.inc.c"
};
Vtx Fred_Lshoe_Vtx[] = {
#include "assets/chameleons/Fred/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f Fred_IMtx5 = IDENTITY;
Gfx Fred_Lshoe_Gfx[] = {
#include "assets/chameleons/Fred/Lshoe/Lshoe.gfx.inc.c"
};
Vtx Fred_cuff_Vtx[] = {
#include "assets/chameleons/Fred/cuff/cuff.vtx.inc.c"
};
Mtx_f Fred_IMtx6 = IDENTITY;
unsigned char Fred_Pad17[] = FILEPAD;
unsigned char Fred_color_PNG[] = {
#include "build/include/assets/chameleons/Fred/cuff/color.ci4.png.inc.c"
};
unsigned char Fred_Pad18[] = FILEPAD;
unsigned char Fred_color_PAL[] = {
#include "build/include/assets/chameleons/Fred/cuff/color.ci4.pal.inc.c"
};
Gfx Fred_cuff_Gfx[] = {
#include "assets/chameleons/Fred/cuff/cuff.gfx.inc.c"
};
Vtx Fred_Lcuff_Vtx[] = {
#include "assets/chameleons/Fred/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f Fred_IMtx7 = IDENTITY;
Gfx Fred_Lcuff_Gfx[] = {
#include "assets/chameleons/Fred/Lcuff/Lcuff.gfx.inc.c"
};
Vtx Fred_wrist_Vtx[] = {
#include "assets/chameleons/Fred/wrist/wrist.vtx.inc.c"
};
Mtx_f Fred_IMtx8 = IDENTITY;
unsigned char Fred_Pad19[] = FILEPAD;
unsigned char Fred_wristColor_PNG[] = {
#include "build/include/assets/chameleons/Fred/wrist/wristColor.ci4.png.inc.c"
};
unsigned char Fred_Pad20[] = FILEPAD;
unsigned char Fred_wristColor_PAL[] = {
#include "build/include/assets/chameleons/Fred/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char Fred_Pad21[] = FILEPAD;
unsigned char Fred_wrist_PNG[] = {
#include "build/include/assets/chameleons/Fred/wrist/wrist.ci4.png.inc.c"
};
unsigned char Fred_Pad22[] = FILEPAD;
unsigned char Fred_wrist_PAL[] = {
#include "build/include/assets/chameleons/Fred/wrist/wrist.ci4.pal.inc.c"
};
Gfx Fred_wrist_Gfx[] = {
#include "assets/chameleons/Fred/wrist/wrist.gfx.inc.c"
};
Vtx Fred_Lwrist_Vtx[] = {
#include "assets/chameleons/Fred/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f Fred_IMtx9 = IDENTITY;
Gfx Fred_Lwrist_Gfx[] = {
#include "assets/chameleons/Fred/Lwrist/Lwrist.gfx.inc.c"
};
Vtx Fred_shoulder_Vtx[] = {
#include "assets/chameleons/Fred/shoulder/shoulder.vtx.inc.c"
};
Mtx_f Fred_IMtx10 = IDENTITY;
Gfx Fred_shoulder_Gfx[] = {
#include "assets/chameleons/Fred/shoulder/shoulder.gfx.inc.c"
};
Vtx Fred_Lshoulder_Vtx[] = {
#include "assets/chameleons/Fred/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f Fred_IMtx11 = IDENTITY;
Gfx Fred_Lshoulder_Gfx[] = {
#include "assets/chameleons/Fred/Lshoulder/Lshoulder.gfx.inc.c"
};
Vtx Fred_fist_Vtx[] = {
#include "assets/chameleons/Fred/fist/fist.vtx.inc.c"
};
Mtx_f Fred_IMtx12 = IDENTITY;
unsigned char Fred_Pad23[] = FILEPAD;
unsigned char Fred_fist1_PNG[] = {
#include "build/include/assets/chameleons/Fred/fist/fist1.ci4.png.inc.c"
};
unsigned char Fred_Pad24[] = FILEPAD;
unsigned char Fred_fist1_PAL[] = {
#include "build/include/assets/chameleons/Fred/fist/fist1.ci4.pal.inc.c"
};
unsigned char Fred_Pad25[] = FILEPAD;
unsigned char Fred_fist2_PNG[] = {
#include "build/include/assets/chameleons/Fred/fist/fist2.ci4.png.inc.c"
};
unsigned char Fred_Pad26[] = FILEPAD;
unsigned char Fred_fist2_PAL[] = {
#include "build/include/assets/chameleons/Fred/fist/fist2.ci4.pal.inc.c"
};
unsigned char Fred_Pad27[] = FILEPAD;
unsigned char Fred_fist3_PNG[] = {
#include "build/include/assets/chameleons/Fred/fist/fist3.ci4.png.inc.c"
};
unsigned char Fred_Pad28[] = FILEPAD;
unsigned char Fred_fist3_PAL[] = {
#include "build/include/assets/chameleons/Fred/fist/fist3.ci4.pal.inc.c"
};
unsigned char Fred_Pad29[] = FILEPAD;
unsigned char Fred_fistDiamond_PNG[] = {
#include "build/include/assets/chameleons/Fred/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char Fred_Pad30[] = FILEPAD;
unsigned char Fred_fistDiamond_PAL[] = {
#include "build/include/assets/chameleons/Fred/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char Fred_Pad31[] = FILEPAD;
unsigned char Fred_fist4_PNG[] = {
#include "build/include/assets/chameleons/Fred/fist/fist4.ci4.png.inc.c"
};
unsigned char Fred_Pad32[] = FILEPAD;
unsigned char Fred_fist4_PAL[] = {
#include "build/include/assets/chameleons/Fred/fist/fist4.ci4.pal.inc.c"
};
Gfx Fred_fist_Gfx[] = {
#include "assets/chameleons/Fred/fist/fist.gfx.inc.c"
};
Vtx Fred_Lfist_Vtx[] = {
#include "assets/chameleons/Fred/Lfist/Lfist.vtx.inc.c"
};
Mtx_f Fred_IMtx13 = IDENTITY;
Gfx Fred_Lfist_Gfx[] = {
#include "assets/chameleons/Fred/Lfist/Lfist.gfx.inc.c"
};
Mtx_f Fred_restAssociate_Mtx = {
#include "assets/chameleons/Fred/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Fred_restAssociate_Gfx[] = {
#include "assets/chameleons/Fred/restAssociate/restAssociate.gfx.inc.c"
};
