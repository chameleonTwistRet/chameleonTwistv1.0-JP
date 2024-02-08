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


#include "assets/chameleons/Jack/light.light.inc.c"

#include "assets/chameleons/Jack/body/body.vtx.inc.c"
Mtx_f Jack_IMtx1 = IDENTITY;
unsigned char Jack_Pad1[] = FILEPAD;
unsigned char Jack_backpackStrap_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/body/backpackStrap.ci4.png.inc.c"
};
unsigned char Jack_Pad2[] = FILEPAD;
unsigned char Jack_backpackStrap_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char Jack_Pad3[] = FILEPAD;
unsigned char Jack_solidColor_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/body/solidColor.ci4.png.inc.c"
};
unsigned char Jack_Pad4[] = FILEPAD;
unsigned char Jack_solidColor_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/body/solidColor.ci4.pal.inc.c"
};
unsigned char Jack_Pad5[] = FILEPAD;
unsigned char Jack_number_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/body/number.ci4.png.inc.c"
};
unsigned char Jack_Pad6[] = FILEPAD;
unsigned char Jack_number_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/body/number.ci4.pal.inc.c"
};

#include "assets/chameleons/Jack/body/body.gfx.inc.c"

#include "assets/chameleons/Jack/bodyAssociate/bodyAssociate.mtx.inc.c"

#include "assets/chameleons/Jack/bodyAssociate/bodyAssociate.gfx.inc.c"

#include "assets/chameleons/Jack/head/head.vtx.inc.c"
Mtx_f Jack_IMtx2 = IDENTITY;
unsigned char Jack_Pad7[] = FILEPAD;
unsigned char Jack_eyeL_ci8_PNG[] = {
#include "build/include/assets/chameleons/Jack/head/eyeL.ci8.png.inc.c"
};
unsigned char Jack_Pad8[] = FILEPAD;
unsigned char Jack_eyeL_ci8_PAL[] = {
#include "build/include/assets/chameleons/Jack/head/eyeL.ci8.pal.inc.c"
};
unsigned char Jack_Pad9[] = FILEPAD;
unsigned char Jack_eyeR_ci8_PNG[] = {
#include "build/include/assets/chameleons/Jack/head/eyeR.ci8.png.inc.c"
};
unsigned char Jack_Pad10[] = FILEPAD;
unsigned char Jack_eyeR_ci8_PAL[] = {
#include "build/include/assets/chameleons/Jack/head/eyeR.ci8.pal.inc.c"
};
unsigned char Jack_Pad11[] = FILEPAD;
unsigned char Jack_cheek_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/head/cheek.ci4.png.inc.c"
};
unsigned char Jack_Pad12[] = FILEPAD;
unsigned char Jack_cheek_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/head/cheek.ci4.pal.inc.c"
};

#include "assets/chameleons/Jack/head/head.gfx.inc.c"

#include "assets/chameleons/Jack/backpack/backpack.vtx.inc.c"
Mtx_f Jack_IMtx3 = IDENTITY;
unsigned char Jack_Pad13[] = FILEPAD;
unsigned char Jack_backpack_ci8_PNG[] = {
#include "build/include/assets/chameleons/Jack/backpack/backpack.ci8.png.inc.c"
};
unsigned char Jack_Pad14[] = FILEPAD;
unsigned char Jack_backpack_ci8_PAL[] = {
#include "build/include/assets/chameleons/Jack/backpack/backpack.ci8.pal.inc.c"
};

#include "assets/chameleons/Jack/backpack/backpack.gfx.inc.c"

#include "assets/chameleons/Jack/shoe/shoe.vtx.inc.c"
Mtx_f Jack_IMtx4 = IDENTITY;
unsigned char Jack_Pad15[] = FILEPAD;
unsigned char Jack_shoe_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/shoe/shoe.ci4.png.inc.c"
};
unsigned char Jack_Pad16[] = FILEPAD;
unsigned char Jack_shoe_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/shoe/shoe.ci4.pal.inc.c"
};

#include "assets/chameleons/Jack/shoe/shoe.gfx.inc.c"

#include "assets/chameleons/Jack/Lshoe/Lshoe.vtx.inc.c"
Mtx_f Jack_IMtx5 = IDENTITY;

#include "assets/chameleons/Jack/Lshoe/Lshoe.gfx.inc.c"

#include "assets/chameleons/Jack/cuff/cuff.vtx.inc.c"
Mtx_f Jack_IMtx6 = IDENTITY;
unsigned char Jack_Pad17[] = FILEPAD;
unsigned char Jack_color_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/cuff/color.ci4.png.inc.c"
};
unsigned char Jack_Pad18[] = FILEPAD;
unsigned char Jack_color_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/cuff/color.ci4.pal.inc.c"
};

#include "assets/chameleons/Jack/cuff/cuff.gfx.inc.c"

#include "assets/chameleons/Jack/Lcuff/Lcuff.vtx.inc.c"
Mtx_f Jack_IMtx7 = IDENTITY;

#include "assets/chameleons/Jack/Lcuff/Lcuff.gfx.inc.c"

#include "assets/chameleons/Jack/wrist/wrist.vtx.inc.c"
Mtx_f Jack_IMtx8 = IDENTITY;
unsigned char Jack_Pad19[] = FILEPAD;
unsigned char Jack_wristColor_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/wrist/wristColor.ci4.png.inc.c"
};
unsigned char Jack_Pad20[] = FILEPAD;
unsigned char Jack_wristColor_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char Jack_Pad21[] = FILEPAD;
unsigned char Jack_wrist_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/wrist/wrist.ci4.png.inc.c"
};
unsigned char Jack_Pad22[] = FILEPAD;
unsigned char Jack_wrist_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/wrist/wrist.ci4.pal.inc.c"
};

#include "assets/chameleons/Jack/wrist/wrist.gfx.inc.c"

#include "assets/chameleons/Jack/Lwrist/Lwrist.vtx.inc.c"
Mtx_f Jack_IMtx9 = IDENTITY;

#include "assets/chameleons/Jack/Lwrist/Lwrist.gfx.inc.c"

#include "assets/chameleons/Jack/shoulder/shoulder.vtx.inc.c"
Mtx_f Jack_IMtx10 = IDENTITY;

#include "assets/chameleons/Jack/shoulder/shoulder.gfx.inc.c"

#include "assets/chameleons/Jack/Lshoulder/Lshoulder.vtx.inc.c"
Mtx_f Jack_IMtx11 = IDENTITY;

#include "assets/chameleons/Jack/Lshoulder/Lshoulder.gfx.inc.c"

#include "assets/chameleons/Jack/fist/fist.vtx.inc.c"
Mtx_f Jack_IMtx12 = IDENTITY;
unsigned char Jack_Pad23[] = FILEPAD;
unsigned char Jack_fist1_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/fist/fist1.ci4.png.inc.c"
};
unsigned char Jack_Pad24[] = FILEPAD;
unsigned char Jack_fist1_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/fist/fist1.ci4.pal.inc.c"
};
unsigned char Jack_Pad25[] = FILEPAD;
unsigned char Jack_fist2_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/fist/fist2.ci4.png.inc.c"
};
unsigned char Jack_Pad26[] = FILEPAD;
unsigned char Jack_fist2_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/fist/fist2.ci4.pal.inc.c"
};
unsigned char Jack_Pad27[] = FILEPAD;
unsigned char Jack_fist3_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/fist/fist3.ci4.png.inc.c"
};
unsigned char Jack_Pad28[] = FILEPAD;
unsigned char Jack_fist3_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/fist/fist3.ci4.pal.inc.c"
};
unsigned char Jack_Pad29[] = FILEPAD;
unsigned char Jack_fistDiamond_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char Jack_Pad30[] = FILEPAD;
unsigned char Jack_fistDiamond_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char Jack_Pad31[] = FILEPAD;
unsigned char Jack_fist4_ci4_PNG[] = {
#include "build/include/assets/chameleons/Jack/fist/fist4.ci4.png.inc.c"
};
unsigned char Jack_Pad32[] = FILEPAD;
unsigned char Jack_fist4_ci4_PAL[] = {
#include "build/include/assets/chameleons/Jack/fist/fist4.ci4.pal.inc.c"
};

#include "assets/chameleons/Jack/fist/fist.gfx.inc.c"

#include "assets/chameleons/Jack/Lfist/Lfist.vtx.inc.c"
Mtx_f Jack_IMtx13 = IDENTITY;

#include "assets/chameleons/Jack/Lfist/Lfist.gfx.inc.c"

#include "assets/chameleons/Jack/restAssociate/restAssociate.mtx.inc.c"

#include "assets/chameleons/Jack/restAssociate/restAssociate.gfx.inc.c"
