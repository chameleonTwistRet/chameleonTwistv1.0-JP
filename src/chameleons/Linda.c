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

Lights1 Linda_light_Light =
#include "assets/chameleons/Linda/light.light.inc.c"
Vtx Linda_body_Vtx[] = {
#include "assets/chameleons/Linda/body/body.vtx.inc.c"
};
Mtx_f Linda_IMtx1 = IDENTITY;
unsigned char Linda_Pad1[] = FILEPAD;
unsigned char Linda_backpackStrap_PNG[] = {
#include "build/include/assets/chameleons/Linda/body/backpackStrap.ci4.png.inc.c"
};
unsigned char Linda_Pad2[] = FILEPAD;
unsigned char Linda_backpackStrap_PAL[] = {
#include "build/include/assets/chameleons/Linda/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char Linda_Pad3[] = FILEPAD;
unsigned char Linda_solidColor_PNG[] = {
#include "build/include/assets/chameleons/Linda/body/solidColor.ci4.png.inc.c"
};
unsigned char Linda_Pad4[] = FILEPAD;
unsigned char Linda_solidColor_PAL[] = {
#include "build/include/assets/chameleons/Linda/body/solidColor.ci4.pal.inc.c"
};
unsigned char Linda_Pad5[] = FILEPAD;
unsigned char Linda_number_PNG[] = {
#include "build/include/assets/chameleons/Linda/body/number.ci4.png.inc.c"
};
unsigned char Linda_Pad6[] = FILEPAD;
unsigned char Linda_number_PAL[] = {
#include "build/include/assets/chameleons/Linda/body/number.ci4.pal.inc.c"
};
Gfx Linda_body_Gfx[] = {
#include "assets/chameleons/Linda/body/body.gfx.inc.c"
};
Mtx_f Linda_bodyAssociate_Mtx = {
#include "assets/chameleons/Linda/bodyAssociate/bodyAssociate.mtx.inc.c"
};
Gfx Linda_bodyAssociate_Gfx[] = {
#include "assets/chameleons/Linda/bodyAssociate/bodyAssociate.gfx.inc.c"
};
Vtx Linda_head_Vtx[] = {
#include "assets/chameleons/Linda/head/head.vtx.inc.c"
};
Mtx_f Linda_IMtx2 = IDENTITY;
unsigned char Linda_Pad7[] = FILEPAD;
unsigned char Linda_eyeL_PNG[] = {
#include "build/include/assets/chameleons/Linda/head/eyeL.ci8.png.inc.c"
};
unsigned char Linda_Pad8[] = FILEPAD;
unsigned char Linda_eyeL_PAL[] = {
#include "build/include/assets/chameleons/Linda/head/eyeL.ci8.pal.inc.c"
};
unsigned char Linda_Pad9[] = FILEPAD;
unsigned char Linda_bow_PNG[] = {
#include "build/include/assets/chameleons/Linda/head/bow.ci4.png.inc.c"
};
unsigned char Linda_Pad10[] = FILEPAD;
unsigned char Linda_bow_PAL[] = {
#include "build/include/assets/chameleons/Linda/head/bow.ci4.pal.inc.c"
};
unsigned char Linda_Pad11[] = FILEPAD;
unsigned char Linda_eyeR_PNG[] = {
#include "build/include/assets/chameleons/Linda/head/eyeR.ci8.png.inc.c"
};
unsigned char Linda_Pad12[] = FILEPAD;
unsigned char Linda_eyeR_PAL[] = {
#include "build/include/assets/chameleons/Linda/head/eyeR.ci8.pal.inc.c"
};
unsigned char Linda_Pad13[] = FILEPAD;
unsigned char Linda_cheek_PNG[] = {
#include "build/include/assets/chameleons/Linda/head/cheek.ci4.png.inc.c"
};
unsigned char Linda_Pad14[] = FILEPAD;
unsigned char Linda_cheek_PAL[] = {
#include "build/include/assets/chameleons/Linda/head/cheek.ci4.pal.inc.c"
};
Gfx Linda_head_Gfx[] = {
#include "assets/chameleons/Linda/head/head.gfx.inc.c"
};
Vtx Linda_backpack_Vtx[] = {
#include "assets/chameleons/Linda/backpack/backpack.vtx.inc.c"
};
Mtx_f Linda_IMtx3 = IDENTITY;
unsigned char Linda_Pad15[] = FILEPAD;
unsigned char Linda_backpack_PNG[] = {
#include "build/include/assets/chameleons/Linda/backpack/backpack.ci8.png.inc.c"
};
unsigned char Linda_Pad16[] = FILEPAD;
unsigned char Linda_backpack_PAL[] = {
#include "build/include/assets/chameleons/Linda/backpack/backpack.ci8.pal.inc.c"
};
Gfx Linda_backpack_Gfx[] = {
#include "assets/chameleons/Linda/backpack/backpack.gfx.inc.c"
};
Vtx Linda_shoe_Vtx[] = {
#include "assets/chameleons/Linda/shoe/shoe.vtx.inc.c"
};
Mtx_f Linda_IMtx4 = IDENTITY;
unsigned char Linda_Pad17[] = FILEPAD;
unsigned char Linda_shoe_PNG[] = {
#include "build/include/assets/chameleons/Linda/shoe/shoe.ci4.png.inc.c"
};
unsigned char Linda_Pad18[] = FILEPAD;
unsigned char Linda_shoe_PAL[] = {
#include "build/include/assets/chameleons/Linda/shoe/shoe.ci4.pal.inc.c"
};
Gfx Linda_shoe_Gfx[] = {
#include "assets/chameleons/Linda/shoe/shoe.gfx.inc.c"
};
Vtx Linda_Lshoe_Vtx[] = {
#include "assets/chameleons/Linda/Lshoe/Lshoe.vtx.inc.c"
};
Mtx_f Linda_IMtx5 = IDENTITY;
Gfx Linda_Lshoe_Gfx[] = {
#include "assets/chameleons/Linda/Lshoe/Lshoe.gfx.inc.c"
};
Vtx Linda_cuff_Vtx[] = {
#include "assets/chameleons/Linda/cuff/cuff.vtx.inc.c"
};
Mtx_f Linda_IMtx6 = IDENTITY;
unsigned char Linda_Pad19[] = FILEPAD;
unsigned char Linda_color_PNG[] = {
#include "build/include/assets/chameleons/Linda/cuff/color.ci4.png.inc.c"
};
unsigned char Linda_Pad20[] = FILEPAD;
unsigned char Linda_color_PAL[] = {
#include "build/include/assets/chameleons/Linda/cuff/color.ci4.pal.inc.c"
};
Gfx Linda_cuff_Gfx[] = {
#include "assets/chameleons/Linda/cuff/cuff.gfx.inc.c"
};
Vtx Linda_Lcuff_Vtx[] = {
#include "assets/chameleons/Linda/Lcuff/Lcuff.vtx.inc.c"
};
Mtx_f Linda_IMtx7 = IDENTITY;
Gfx Linda_Lcuff_Gfx[] = {
#include "assets/chameleons/Linda/Lcuff/Lcuff.gfx.inc.c"
};
Vtx Linda_wrist_Vtx[] = {
#include "assets/chameleons/Linda/wrist/wrist.vtx.inc.c"
};
Mtx_f Linda_IMtx8 = IDENTITY;
unsigned char Linda_Pad21[] = FILEPAD;
unsigned char Linda_wristColor_PNG[] = {
#include "build/include/assets/chameleons/Linda/wrist/wristColor.ci4.png.inc.c"
};
unsigned char Linda_Pad22[] = FILEPAD;
unsigned char Linda_wristColor_PAL[] = {
#include "build/include/assets/chameleons/Linda/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char Linda_Pad23[] = FILEPAD;
unsigned char Linda_wrist_PNG[] = {
#include "build/include/assets/chameleons/Linda/wrist/wrist.ci4.png.inc.c"
};
unsigned char Linda_Pad24[] = FILEPAD;
unsigned char Linda_wrist_PAL[] = {
#include "build/include/assets/chameleons/Linda/wrist/wrist.ci4.pal.inc.c"
};
Gfx Linda_wrist_Gfx[] = {
#include "assets/chameleons/Linda/wrist/wrist.gfx.inc.c"
};
Vtx Linda_Lwrist_Vtx[] = {
#include "assets/chameleons/Linda/Lwrist/Lwrist.vtx.inc.c"
};
Mtx_f Linda_IMtx9 = IDENTITY;
Gfx Linda_Lwrist_Gfx[] = {
#include "assets/chameleons/Linda/Lwrist/Lwrist.gfx.inc.c"
};
Vtx Linda_shoulder_Vtx[] = {
#include "assets/chameleons/Linda/shoulder/shoulder.vtx.inc.c"
};
Mtx_f Linda_IMtx10 = IDENTITY;
Gfx Linda_shoulder_Gfx[] = {
#include "assets/chameleons/Linda/shoulder/shoulder.gfx.inc.c"
};
Vtx Linda_Lshoulder_Vtx[] = {
#include "assets/chameleons/Linda/Lshoulder/Lshoulder.vtx.inc.c"
};
Mtx_f Linda_IMtx11 = IDENTITY;
Gfx Linda_Lshoulder_Gfx[] = {
#include "assets/chameleons/Linda/Lshoulder/Lshoulder.gfx.inc.c"
};
Vtx Linda_fist_Vtx[] = {
#include "assets/chameleons/Linda/fist/fist.vtx.inc.c"
};
Mtx_f Linda_IMtx12 = IDENTITY;
unsigned char Linda_Pad25[] = FILEPAD;
unsigned char Linda_fist1_PNG[] = {
#include "build/include/assets/chameleons/Linda/fist/fist1.ci4.png.inc.c"
};
unsigned char Linda_Pad26[] = FILEPAD;
unsigned char Linda_fist1_PAL[] = {
#include "build/include/assets/chameleons/Linda/fist/fist1.ci4.pal.inc.c"
};
unsigned char Linda_Pad27[] = FILEPAD;
unsigned char Linda_fist2_PNG[] = {
#include "build/include/assets/chameleons/Linda/fist/fist2.ci4.png.inc.c"
};
unsigned char Linda_Pad28[] = FILEPAD;
unsigned char Linda_fist2_PAL[] = {
#include "build/include/assets/chameleons/Linda/fist/fist2.ci4.pal.inc.c"
};
unsigned char Linda_Pad29[] = FILEPAD;
unsigned char Linda_fist3_PNG[] = {
#include "build/include/assets/chameleons/Linda/fist/fist3.ci4.png.inc.c"
};
unsigned char Linda_Pad30[] = FILEPAD;
unsigned char Linda_fist3_PAL[] = {
#include "build/include/assets/chameleons/Linda/fist/fist3.ci4.pal.inc.c"
};
unsigned char Linda_Pad31[] = FILEPAD;
unsigned char Linda_fistDiamond_PNG[] = {
#include "build/include/assets/chameleons/Linda/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char Linda_Pad32[] = FILEPAD;
unsigned char Linda_fistDiamond_PAL[] = {
#include "build/include/assets/chameleons/Linda/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char Linda_Pad33[] = FILEPAD;
unsigned char Linda_fist4_PNG[] = {
#include "build/include/assets/chameleons/Linda/fist/fist4.ci4.png.inc.c"
};
unsigned char Linda_Pad34[] = FILEPAD;
unsigned char Linda_fist4_PAL[] = {
#include "build/include/assets/chameleons/Linda/fist/fist4.ci4.pal.inc.c"
};
Gfx Linda_fist_Gfx[] = {
#include "assets/chameleons/Linda/fist/fist.gfx.inc.c"
};
Vtx Linda_Lfist_Vtx[] = {
#include "assets/chameleons/Linda/Lfist/Lfist.vtx.inc.c"
};
Mtx_f Linda_IMtx13 = IDENTITY;
Gfx Linda_Lfist_Gfx[] = {
#include "assets/chameleons/Linda/Lfist/Lfist.gfx.inc.c"
};
Mtx_f Linda_restAssociate_Mtx = {
#include "assets/chameleons/Linda/restAssociate/restAssociate.mtx.inc.c"
};
Gfx Linda_restAssociate_Gfx[] = {
#include "assets/chameleons/Linda/restAssociate/restAssociate.gfx.inc.c"
};
