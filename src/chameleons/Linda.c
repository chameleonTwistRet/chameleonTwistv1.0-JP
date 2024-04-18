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

#include "assets/chameleons/Linda/light.light.inc.c"

#include "assets/chameleons/Linda/body/body.vtx.inc.c"
Mtx_f Linda_IMtx1 = IDENTITY;
unsigned char Linda_Pad1[] = FILEPAD;
unsigned char Linda_backpackStrap_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/body/backpackStrap.ci4.png.inc.c"
};
unsigned char Linda_Pad2[] = FILEPAD;
unsigned char Linda_backpackStrap_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char Linda_Pad3[] = FILEPAD;
unsigned char Linda_solidColor_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/body/solidColor.ci4.png.inc.c"
};
unsigned char Linda_Pad4[] = FILEPAD;
unsigned char Linda_solidColor_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/body/solidColor.ci4.pal.inc.c"
};
unsigned char Linda_Pad5[] = FILEPAD;
unsigned char Linda_number_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/body/number.ci4.png.inc.c"
};
unsigned char Linda_Pad6[] = FILEPAD;
unsigned char Linda_number_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/body/number.ci4.pal.inc.c"
};

#include "assets/chameleons/Linda/body/body.gfx.inc.c"

#include "assets/chameleons/Linda/bodyAssociate/bodyAssociate.mtx.inc.c"

#include "assets/chameleons/Linda/bodyAssociate/bodyAssociate.gfx.inc.c"

#include "assets/chameleons/Linda/head/head.vtx.inc.c"
Mtx_f Linda_IMtx2 = IDENTITY;
unsigned char Linda_Pad7[] = FILEPAD;
unsigned char Linda_eyeL_ci8_PNG[] = {
#include "build/assets/chameleons/Linda/head/eyeL.ci8.png.inc.c"
};
unsigned char Linda_Pad8[] = FILEPAD;
unsigned char Linda_eyeL_ci8_PAL[] = {
#include "build/assets/chameleons/Linda/head/eyeL.ci8.pal.inc.c"
};
unsigned char Linda_Pad9[] = FILEPAD;
unsigned char Linda_bow_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/head/bow.ci4.png.inc.c"
};
unsigned char Linda_Pad10[] = FILEPAD;
unsigned char Linda_bow_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/head/bow.ci4.pal.inc.c"
};
unsigned char Linda_Pad11[] = FILEPAD;
unsigned char Linda_eyeR_ci8_PNG[] = {
#include "build/assets/chameleons/Linda/head/eyeR.ci8.png.inc.c"
};
unsigned char Linda_Pad12[] = FILEPAD;
unsigned char Linda_eyeR_ci8_PAL[] = {
#include "build/assets/chameleons/Linda/head/eyeR.ci8.pal.inc.c"
};
unsigned char Linda_Pad13[] = FILEPAD;
unsigned char Linda_cheek_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/head/cheek.ci4.png.inc.c"
};
unsigned char Linda_Pad14[] = FILEPAD;
unsigned char Linda_cheek_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/head/cheek.ci4.pal.inc.c"
};

#include "assets/chameleons/Linda/head/head.gfx.inc.c"

#include "assets/chameleons/Linda/backpack/backpack.vtx.inc.c"
Mtx_f Linda_IMtx3 = IDENTITY;
unsigned char Linda_Pad15[] = FILEPAD;
unsigned char Linda_backpack_ci8_PNG[] = {
#include "build/assets/chameleons/Linda/backpack/backpack.ci8.png.inc.c"
};
unsigned char Linda_Pad16[] = FILEPAD;
unsigned char Linda_backpack_ci8_PAL[] = {
#include "build/assets/chameleons/Linda/backpack/backpack.ci8.pal.inc.c"
};

#include "assets/chameleons/Linda/backpack/backpack.gfx.inc.c"

#include "assets/chameleons/Linda/shoe/shoe.vtx.inc.c"
Mtx_f Linda_IMtx4 = IDENTITY;
unsigned char Linda_Pad17[] = FILEPAD;
unsigned char Linda_shoe_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/shoe/shoe.ci4.png.inc.c"
};
unsigned char Linda_Pad18[] = FILEPAD;
unsigned char Linda_shoe_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/shoe/shoe.ci4.pal.inc.c"
};

#include "assets/chameleons/Linda/shoe/shoe.gfx.inc.c"

#include "assets/chameleons/Linda/Lshoe/Lshoe.vtx.inc.c"
Mtx_f Linda_IMtx5 = IDENTITY;

#include "assets/chameleons/Linda/Lshoe/Lshoe.gfx.inc.c"

#include "assets/chameleons/Linda/cuff/cuff.vtx.inc.c"
Mtx_f Linda_IMtx6 = IDENTITY;
unsigned char Linda_Pad19[] = FILEPAD;
unsigned char Linda_color_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/cuff/color.ci4.png.inc.c"
};
unsigned char Linda_Pad20[] = FILEPAD;
unsigned char Linda_color_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/cuff/color.ci4.pal.inc.c"
};

#include "assets/chameleons/Linda/cuff/cuff.gfx.inc.c"

#include "assets/chameleons/Linda/Lcuff/Lcuff.vtx.inc.c"
Mtx_f Linda_IMtx7 = IDENTITY;

#include "assets/chameleons/Linda/Lcuff/Lcuff.gfx.inc.c"

#include "assets/chameleons/Linda/wrist/wrist.vtx.inc.c"
Mtx_f Linda_IMtx8 = IDENTITY;
unsigned char Linda_Pad21[] = FILEPAD;
unsigned char Linda_wristColor_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/wrist/wristColor.ci4.png.inc.c"
};
unsigned char Linda_Pad22[] = FILEPAD;
unsigned char Linda_wristColor_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char Linda_Pad23[] = FILEPAD;
unsigned char Linda_wrist_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/wrist/wrist.ci4.png.inc.c"
};
unsigned char Linda_Pad24[] = FILEPAD;
unsigned char Linda_wrist_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/wrist/wrist.ci4.pal.inc.c"
};

#include "assets/chameleons/Linda/wrist/wrist.gfx.inc.c"

#include "assets/chameleons/Linda/Lwrist/Lwrist.vtx.inc.c"
Mtx_f Linda_IMtx9 = IDENTITY;

#include "assets/chameleons/Linda/Lwrist/Lwrist.gfx.inc.c"

#include "assets/chameleons/Linda/shoulder/shoulder.vtx.inc.c"
Mtx_f Linda_IMtx10 = IDENTITY;

#include "assets/chameleons/Linda/shoulder/shoulder.gfx.inc.c"

#include "assets/chameleons/Linda/Lshoulder/Lshoulder.vtx.inc.c"
Mtx_f Linda_IMtx11 = IDENTITY;

#include "assets/chameleons/Linda/Lshoulder/Lshoulder.gfx.inc.c"

#include "assets/chameleons/Linda/fist/fist.vtx.inc.c"
Mtx_f Linda_IMtx12 = IDENTITY;
unsigned char Linda_Pad25[] = FILEPAD;
unsigned char Linda_fist1_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/fist/fist1.ci4.png.inc.c"
};
unsigned char Linda_Pad26[] = FILEPAD;
unsigned char Linda_fist1_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/fist/fist1.ci4.pal.inc.c"
};
unsigned char Linda_Pad27[] = FILEPAD;
unsigned char Linda_fist2_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/fist/fist2.ci4.png.inc.c"
};
unsigned char Linda_Pad28[] = FILEPAD;
unsigned char Linda_fist2_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/fist/fist2.ci4.pal.inc.c"
};
unsigned char Linda_Pad29[] = FILEPAD;
unsigned char Linda_fist3_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/fist/fist3.ci4.png.inc.c"
};
unsigned char Linda_Pad30[] = FILEPAD;
unsigned char Linda_fist3_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/fist/fist3.ci4.pal.inc.c"
};
unsigned char Linda_Pad31[] = FILEPAD;
unsigned char Linda_fistDiamond_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char Linda_Pad32[] = FILEPAD;
unsigned char Linda_fistDiamond_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char Linda_Pad33[] = FILEPAD;
unsigned char Linda_fist4_ci4_PNG[] = {
#include "build/assets/chameleons/Linda/fist/fist4.ci4.png.inc.c"
};
unsigned char Linda_Pad34[] = FILEPAD;
unsigned char Linda_fist4_ci4_PAL[] = {
#include "build/assets/chameleons/Linda/fist/fist4.ci4.pal.inc.c"
};

#include "assets/chameleons/Linda/fist/fist.gfx.inc.c"

#include "assets/chameleons/Linda/Lfist/Lfist.vtx.inc.c"
Mtx_f Linda_IMtx13 = IDENTITY;

#include "assets/chameleons/Linda/Lfist/Lfist.gfx.inc.c"

#include "assets/chameleons/Linda/restAssociate/restAssociate.mtx.inc.c"

#include "assets/chameleons/Linda/restAssociate/restAssociate.gfx.inc.c"
