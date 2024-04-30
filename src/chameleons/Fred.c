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


#include "assets/chameleons/Fred/light.light.inc.c"

#include "assets/chameleons/Fred/body/body.vtx.inc.c"
Mtx Fred_IMtx1 = IDENTITY;
unsigned char Fred_Pad1[] = FILEPAD;
unsigned char Fred_backpackStrap_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/body/backpackStrap.ci4.png.inc.c"
};
unsigned char Fred_Pad2[] = FILEPAD;
unsigned char Fred_backpackStrap_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/body/backpackStrap.ci4.pal.inc.c"
};
unsigned char Fred_Pad3[] = FILEPAD;
unsigned char Fred_solidColor_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/body/solidColor.ci4.png.inc.c"
};
unsigned char Fred_Pad4[] = FILEPAD;
unsigned char Fred_solidColor_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/body/solidColor.ci4.pal.inc.c"
};
unsigned char Fred_Pad5[] = FILEPAD;
unsigned char Fred_number_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/body/number.ci4.png.inc.c"
};
unsigned char Fred_Pad6[] = FILEPAD;
unsigned char Fred_number_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/body/number.ci4.pal.inc.c"
};

#include "assets/chameleons/Fred/body/body.gfx.inc.c"

#include "assets/chameleons/Fred/bodyAssociate/bodyAssociate.mtx.inc.c"

#include "assets/chameleons/Fred/bodyAssociate/bodyAssociate.gfx.inc.c"

#include "assets/chameleons/Fred/head/head.vtx.inc.c"
Mtx Fred_IMtx2 = IDENTITY;
unsigned char Fred_Pad7[] = FILEPAD;
unsigned char Fred_eyeL_ci8_PNG[] = {
#include "build/assets/chameleons/Fred/head/eyeL.ci8.png.inc.c"
};
unsigned char Fred_Pad8[] = FILEPAD;
unsigned char Fred_eyeL_ci8_PAL[] = {
#include "build/assets/chameleons/Fred/head/eyeL.ci8.pal.inc.c"
};
unsigned char Fred_Pad9[] = FILEPAD;
unsigned char Fred_eyeR_ci8_PNG[] = {
#include "build/assets/chameleons/Fred/head/eyeR.ci8.png.inc.c"
};
unsigned char Fred_Pad10[] = FILEPAD;
unsigned char Fred_eyeR_ci8_PAL[] = {
#include "build/assets/chameleons/Fred/head/eyeR.ci8.pal.inc.c"
};
unsigned char Fred_Pad11[] = FILEPAD;
unsigned char Fred_cheek_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/head/cheek.ci4.png.inc.c"
};
unsigned char Fred_Pad12[] = FILEPAD;
unsigned char Fred_cheek_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/head/cheek.ci4.pal.inc.c"
};

#include "assets/chameleons/Fred/head/head.gfx.inc.c"

#include "assets/chameleons/Fred/backpack/backpack.vtx.inc.c"
Mtx Fred_IMtx3 = IDENTITY;
unsigned char Fred_Pad13[] = FILEPAD;
unsigned char Fred_backpack_ci8_PNG[] = {
#include "build/assets/chameleons/Fred/backpack/backpack.ci8.png.inc.c"
};
unsigned char Fred_Pad14[] = FILEPAD;
unsigned char Fred_backpack_ci8_PAL[] = {
#include "build/assets/chameleons/Fred/backpack/backpack.ci8.pal.inc.c"
};

#include "assets/chameleons/Fred/backpack/backpack.gfx.inc.c"

#include "assets/chameleons/Fred/shoe/shoe.vtx.inc.c"
Mtx Fred_IMtx4 = IDENTITY;
unsigned char Fred_Pad15[] = FILEPAD;
unsigned char Fred_shoe_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/shoe/shoe.ci4.png.inc.c"
};
unsigned char Fred_Pad16[] = FILEPAD;
unsigned char Fred_shoe_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/shoe/shoe.ci4.pal.inc.c"
};

#include "assets/chameleons/Fred/shoe/shoe.gfx.inc.c"

#include "assets/chameleons/Fred/Lshoe/Lshoe.vtx.inc.c"
Mtx Fred_IMtx5 = IDENTITY;

#include "assets/chameleons/Fred/Lshoe/Lshoe.gfx.inc.c"

#include "assets/chameleons/Fred/cuff/cuff.vtx.inc.c"
Mtx Fred_IMtx6 = IDENTITY;
unsigned char Fred_Pad17[] = FILEPAD;
unsigned char Fred_color_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/cuff/color.ci4.png.inc.c"
};
unsigned char Fred_Pad18[] = FILEPAD;
unsigned char Fred_color_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/cuff/color.ci4.pal.inc.c"
};

#include "assets/chameleons/Fred/cuff/cuff.gfx.inc.c"

#include "assets/chameleons/Fred/Lcuff/Lcuff.vtx.inc.c"
Mtx Fred_IMtx7 = IDENTITY;

#include "assets/chameleons/Fred/Lcuff/Lcuff.gfx.inc.c"

#include "assets/chameleons/Fred/wrist/wrist.vtx.inc.c"
Mtx Fred_IMtx8 = IDENTITY;
unsigned char Fred_Pad19[] = FILEPAD;
unsigned char Fred_wristColor_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/wrist/wristColor.ci4.png.inc.c"
};
unsigned char Fred_Pad20[] = FILEPAD;
unsigned char Fred_wristColor_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/wrist/wristColor.ci4.pal.inc.c"
};
unsigned char Fred_Pad21[] = FILEPAD;
unsigned char Fred_wrist_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/wrist/wrist.ci4.png.inc.c"
};
unsigned char Fred_Pad22[] = FILEPAD;
unsigned char Fred_wrist_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/wrist/wrist.ci4.pal.inc.c"
};

#include "assets/chameleons/Fred/wrist/wrist.gfx.inc.c"

#include "assets/chameleons/Fred/Lwrist/Lwrist.vtx.inc.c"
Mtx Fred_IMtx9 = IDENTITY;

#include "assets/chameleons/Fred/Lwrist/Lwrist.gfx.inc.c"

#include "assets/chameleons/Fred/shoulder/shoulder.vtx.inc.c"
Mtx Fred_IMtx10 = IDENTITY;

#include "assets/chameleons/Fred/shoulder/shoulder.gfx.inc.c"

#include "assets/chameleons/Fred/Lshoulder/Lshoulder.vtx.inc.c"
Mtx Fred_IMtx11 = IDENTITY;

#include "assets/chameleons/Fred/Lshoulder/Lshoulder.gfx.inc.c"

#include "assets/chameleons/Fred/fist/fist.vtx.inc.c"
Mtx Fred_IMtx12 = IDENTITY;
unsigned char Fred_Pad23[] = FILEPAD;
unsigned char Fred_fist1_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/fist/fist1.ci4.png.inc.c"
};
unsigned char Fred_Pad24[] = FILEPAD;
unsigned char Fred_fist1_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/fist/fist1.ci4.pal.inc.c"
};
unsigned char Fred_Pad25[] = FILEPAD;
unsigned char Fred_fist2_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/fist/fist2.ci4.png.inc.c"
};
unsigned char Fred_Pad26[] = FILEPAD;
unsigned char Fred_fist2_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/fist/fist2.ci4.pal.inc.c"
};
unsigned char Fred_Pad27[] = FILEPAD;
unsigned char Fred_fist3_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/fist/fist3.ci4.png.inc.c"
};
unsigned char Fred_Pad28[] = FILEPAD;
unsigned char Fred_fist3_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/fist/fist3.ci4.pal.inc.c"
};
unsigned char Fred_Pad29[] = FILEPAD;
unsigned char Fred_fistDiamond_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/fist/fistDiamond.ci4.png.inc.c"
};
unsigned char Fred_Pad30[] = FILEPAD;
unsigned char Fred_fistDiamond_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/fist/fistDiamond.ci4.pal.inc.c"
};
unsigned char Fred_Pad31[] = FILEPAD;
unsigned char Fred_fist4_ci4_PNG[] = {
#include "build/assets/chameleons/Fred/fist/fist4.ci4.png.inc.c"
};
unsigned char Fred_Pad32[] = FILEPAD;
unsigned char Fred_fist4_ci4_PAL[] = {
#include "build/assets/chameleons/Fred/fist/fist4.ci4.pal.inc.c"
};

#include "assets/chameleons/Fred/fist/fist.gfx.inc.c"

#include "assets/chameleons/Fred/Lfist/Lfist.vtx.inc.c"
Mtx Fred_IMtx13 = IDENTITY;

#include "assets/chameleons/Fred/Lfist/Lfist.gfx.inc.c"

#include "assets/chameleons/Fred/restAssociate/restAssociate.mtx.inc.c"

#include "assets/chameleons/Fred/restAssociate/restAssociate.gfx.inc.c"