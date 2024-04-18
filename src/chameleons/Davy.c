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

#include "assets/chameleons/Davy/light.light.inc.c"

#include "assets/chameleons/Davy/body/body.vtx.inc.c"
Mtx_f Davy_IMtx1 = IDENTITY;
unsigned char Davy_Pad1[] = FILEPAD;
unsigned char Davy_backpackStrap_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/body/backpackStrap.ci4.png.inc.c"
};
unsigned char Davy_Pad2[] = FILEPAD;
unsigned char Davy_backpackStrap_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char Davy_Pad3[] = FILEPAD;
unsigned char Davy_solidColor_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/body/solidColor.ci4.png.inc.c"
};
unsigned char Davy_Pad4[] = FILEPAD;
unsigned char Davy_solidColor_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/body/solidColor.ci4.pal.inc.c"
};
unsigned char Davy_Pad5[] = FILEPAD;
unsigned char Davy_number_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/body/number.ci4.png.inc.c"
};
unsigned char Davy_Pad6[] = FILEPAD;
unsigned char Davy_number_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/body/number.ci4.pal.inc.c"
};

#include "assets/chameleons/Davy/body/body.gfx.inc.c"

#include "assets/chameleons/Davy/bodyAssociate/bodyAssociate.mtx.inc.c"

#include "assets/chameleons/Davy/bodyAssociate/bodyAssociate.gfx.inc.c"

#include "assets/chameleons/Davy/head/head.vtx.inc.c"
Mtx_f Davy_IMtx2 = IDENTITY;
unsigned char Davy_Pad7[] = FILEPAD;
unsigned char Davy_eyeL_ci8_PNG[] = {
#include "build/assets/chameleons/Davy/head/eyeL.ci8.png.inc.c"
};
unsigned char Davy_Pad8[] = FILEPAD;
unsigned char Davy_eyeL_ci8_PAL[] = {
#include "build/assets/chameleons/Davy/head/eyeL.ci8.pal.inc.c"
};
unsigned char Davy_Pad9[] = FILEPAD;
unsigned char Davy_eyeR_ci8_PNG[] = {
#include "build/assets/chameleons/Davy/head/eyeR.ci8.png.inc.c"
};
unsigned char Davy_Pad10[] = FILEPAD;
unsigned char Davy_eyeR_ci8_PAL[] = {
#include "build/assets/chameleons/Davy/head/eyeR.ci8.pal.inc.c"
};
unsigned char Davy_Pad11[] = FILEPAD;
unsigned char Davy_cheek_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/head/cheek.ci4.png.inc.c"
};
unsigned char Davy_Pad12[] = FILEPAD;
unsigned char Davy_cheek_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/head/cheek.ci4.pal.inc.c"
};

#include "assets/chameleons/Davy/head/head.gfx.inc.c"

#include "assets/chameleons/Davy/backpack/backpack.vtx.inc.c"
Mtx_f Davy_IMtx3 = IDENTITY;
unsigned char Davy_Pad13[] = FILEPAD;
unsigned char Davy_backpack_ci8_PNG[] = {
#include "build/assets/chameleons/Davy/backpack/backpack.ci8.png.inc.c"
};
unsigned char Davy_Pad14[] = FILEPAD;
unsigned char Davy_backpack_ci8_PAL[] = {
#include "build/assets/chameleons/Davy/backpack/backpack.ci8.pal.inc.c"
};

#include "assets/chameleons/Davy/backpack/backpack.gfx.inc.c"

#include "assets/chameleons/Davy/shoe/shoe.vtx.inc.c"
Mtx_f Davy_IMtx4 = IDENTITY;
unsigned char Davy_Pad15[] = FILEPAD;
unsigned char Davy_shoe_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/shoe/shoe.ci4.png.inc.c"
};
unsigned char Davy_Pad16[] = FILEPAD;
unsigned char Davy_shoe_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/shoe/shoe.ci4.pal.inc.c"
};

#include "assets/chameleons/Davy/shoe/shoe.gfx.inc.c"

#include "assets/chameleons/Davy/Lshoe/Lshoe.vtx.inc.c"
Mtx_f Davy_IMtx5 = IDENTITY;

#include "assets/chameleons/Davy/Lshoe/Lshoe.gfx.inc.c"

#include "assets/chameleons/Davy/cuff/cuff.vtx.inc.c"
Mtx_f Davy_IMtx6 = IDENTITY;
unsigned char Davy_Pad17[] = FILEPAD;
unsigned char Davy_color_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/cuff/color.ci4.png.inc.c"
};
unsigned char Davy_Pad18[] = FILEPAD;
unsigned char Davy_color_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/cuff/color.ci4.pal.inc.c"
};

#include "assets/chameleons/Davy/cuff/cuff.gfx.inc.c"

#include "assets/chameleons/Davy/Lcuff/Lcuff.vtx.inc.c"
Mtx_f Davy_IMtx7 = IDENTITY;

#include "assets/chameleons/Davy/Lcuff/Lcuff.gfx.inc.c"

#include "assets/chameleons/Davy/wrist/wrist.vtx.inc.c"
Mtx_f Davy_IMtx8 = IDENTITY;
unsigned char Davy_Pad19[] = FILEPAD;
unsigned char Davy_wristColor_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/wrist/wristColor.ci4.png.inc.c"
};
unsigned char Davy_Pad20[] = FILEPAD;
unsigned char Davy_wristColor_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char Davy_Pad21[] = FILEPAD;
unsigned char Davy_wrist_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/wrist/wrist.ci4.png.inc.c"
};
unsigned char Davy_Pad22[] = FILEPAD;
unsigned char Davy_wrist_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/wrist/wrist.ci4.pal.inc.c"
};

#include "assets/chameleons/Davy/wrist/wrist.gfx.inc.c"

#include "assets/chameleons/Davy/Lwrist/Lwrist.vtx.inc.c"
Mtx_f Davy_IMtx9 = IDENTITY;

#include "assets/chameleons/Davy/Lwrist/Lwrist.gfx.inc.c"

#include "assets/chameleons/Davy/shoulder/shoulder.vtx.inc.c"
Mtx_f Davy_IMtx10 = IDENTITY;

#include "assets/chameleons/Davy/shoulder/shoulder.gfx.inc.c"

#include "assets/chameleons/Davy/Lshoulder/Lshoulder.vtx.inc.c"
Mtx_f Davy_IMtx11 = IDENTITY;

#include "assets/chameleons/Davy/Lshoulder/Lshoulder.gfx.inc.c"

#include "assets/chameleons/Davy/fist/fist.vtx.inc.c"
Mtx_f Davy_IMtx12 = IDENTITY;
unsigned char Davy_Pad23[] = FILEPAD;
unsigned char Davy_fist1_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/fist/fist1.ci4.png.inc.c"
};
unsigned char Davy_Pad24[] = FILEPAD;
unsigned char Davy_fist1_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/fist/fist1.ci4.pal.inc.c"
};
unsigned char Davy_Pad25[] = FILEPAD;
unsigned char Davy_fist2_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/fist/fist2.ci4.png.inc.c"
};
unsigned char Davy_Pad26[] = FILEPAD;
unsigned char Davy_fist2_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/fist/fist2.ci4.pal.inc.c"
};
unsigned char Davy_Pad27[] = FILEPAD;
unsigned char Davy_fist3_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/fist/fist3.ci4.png.inc.c"
};
unsigned char Davy_Pad28[] = FILEPAD;
unsigned char Davy_fist3_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/fist/fist3.ci4.pal.inc.c"
};
unsigned char Davy_Pad29[] = FILEPAD;
unsigned char Davy_fistDiamond_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char Davy_Pad30[] = FILEPAD;
unsigned char Davy_fistDiamond_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char Davy_Pad31[] = FILEPAD;
unsigned char Davy_fist4_ci4_PNG[] = {
#include "build/assets/chameleons/Davy/fist/fist4.ci4.png.inc.c"
};
unsigned char Davy_Pad32[] = FILEPAD;
unsigned char Davy_fist4_ci4_PAL[] = {
#include "build/assets/chameleons/Davy/fist/fist4.ci4.pal.inc.c"
};

#include "assets/chameleons/Davy/fist/fist.gfx.inc.c"

#include "assets/chameleons/Davy/Lfist/Lfist.vtx.inc.c"
Mtx_f Davy_IMtx13 = IDENTITY;

#include "assets/chameleons/Davy/Lfist/Lfist.gfx.inc.c"

#include "assets/chameleons/Davy/restAssociate/restAssociate.mtx.inc.c"

#include "assets/chameleons/Davy/restAssociate/restAssociate.gfx.inc.c"
