#include "common.h"
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny
#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to split useless files

extern Mtx D_80129730_BombSnake; //head
extern Mtx D_80129770_BombSnake; //unkA
extern Mtx D_801297B0_BombSnake; //unkB
extern Mtx D_801297F0_BombSnake; //unkC
extern Mtx D_80129830_BombSnake; //unkD
extern Mtx D_80129870_BombSnake; //unkE

extern unsigned char Global_hexComb_i4_PNG[];
extern unsigned char Global_fraMEd_ia4_PNG[];
extern unsigned char Global_hexCombFade_i8_PNG[];

extern Gfx Global_unk3_Gfx[];
extern CollisionData Global_unk3_ColH;
extern Gfx Global_unk4_Gfx[];
extern CollisionData Global_unk4_ColH;
extern Gfx Global_unk5_Gfx[];
extern CollisionData Global_unk5_ColH;
extern Gfx Global_unk6_Gfx[];
extern CollisionData Global_unk6_ColH;
extern Gfx Global_unk7_Gfx[];
extern CollisionData Global_unk7_ColH;
extern Gfx Global_unk8_Gfx[];
extern CollisionData Global_unk8_ColH;
extern Gfx Global_unk9_Gfx[];
extern CollisionData Global_unk9_ColH;
extern Gfx Global_unkA_Gfx[];
extern CollisionData Global_unkA_ColH;
extern Gfx Global_unkB_Gfx[];
extern CollisionData Global_unkB_ColH;
extern Gfx Global_unkC_Gfx[];
extern CollisionData Global_unkC_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern CollisionData Global_ALSpinDoor_ColH;
extern Gfx Global_unkD_Gfx[];
extern CollisionData Global_unkD_ColH;
extern Gfx Global_BLLava_Gfx[];
extern CollisionData Global_BLLava_ColH;
extern Gfx Global_BLLava2_Gfx[];
extern CollisionData Global_BLLava2_ColH;
extern Gfx Global_BLLava3_Gfx[];
extern CollisionData Global_BLLava3_ColH;
extern Gfx Global_BLLava4_Gfx[];
extern CollisionData Global_BLLava4_ColH;
extern Gfx Global_BLLava5_Gfx[];
extern CollisionData Global_BLLava5_ColH;
extern Gfx Global_BLLava6_Gfx[];
extern CollisionData Global_BLLava6_ColH;
extern Gfx Global_BLLava7_Gfx[];
extern CollisionData Global_BLLava7_ColH;
extern Gfx Global_BLLava8_Gfx[];
extern CollisionData Global_BLLava8_ColH;
extern Gfx Global_unkE_Gfx[];
extern CollisionData Global_unkE_ColH;
extern Gfx Global_unkF_Gfx[];
extern CollisionData Global_unkF_ColH;
extern Gfx Global_unk10_Gfx[];
extern CollisionData Global_unk10_ColH;
extern Gfx Global_Door1_Gfx[];
extern CollisionData Global_Door1_ColH;
extern Gfx Global_unk12_Gfx[];
extern CollisionData Global_unk12_ColH;
extern Gfx Global_unk13_Gfx[];
extern CollisionData Global_unk13_ColH;
extern Gfx Global_unk14_Gfx[];
extern CollisionData Global_unk14_ColH;
extern Gfx Global_unk15_Gfx[];
extern CollisionData Global_unk15_ColH;
extern Gfx Global_unk16_Gfx[];
extern CollisionData Global_unk16_ColH;
extern Gfx Global_unk17_Gfx[];
extern CollisionData Global_unk17_ColH;
extern Gfx Global_unk18_Gfx[];
extern CollisionData Global_unk18_ColH;
extern Gfx Global_unk19_Gfx[];
extern CollisionData Global_unk19_ColH;
extern Gfx Global_unk1A_Gfx[];
extern CollisionData Global_unk1A_ColH;
extern Gfx Global_unk1B_Gfx[];
extern CollisionData Global_unk1B_ColH;
extern Gfx Global_unk1C_Gfx[];
extern CollisionData Global_unk1C_ColH;
extern Gfx Global_unk1D_Gfx[];
extern CollisionData Global_unk1D_ColH;
extern Gfx Global_unk1E_Gfx[];
extern CollisionData Global_unk1E_ColH;
extern Gfx BombSnake_arenaWalls_Gfx[];
extern CollisionData BombSnake_unk3_ColH;
extern Gfx BombSnake_arenaFloor_Gfx[];
extern CollisionData BombSnake_unk4_ColH;
extern Gfx Global_unk_Gfx[];
extern CollisionData Global_unkCol2_ColH;

Mtx_f BombSnake_IMtx1 = IDENTITY;

#include "assets/levelGroup/BombSnake/pointers.lvp.inc.c"
unsigned char BombSnake_rabObjects_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/rabObjects.inc.c"
};

#include "assets/levelGroup/BombSnake/roomObjects/roomObj1.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj2.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj3.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj4.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj5.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj6.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj7.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj8.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj9.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj10.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj11.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObj12.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/roomObjN1.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/roomAct1.roomAct.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/roomActN1.roomAct.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/roomAct2.roomAct.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/roomActN2.roomAct.inc.c"
unsigned char BombSnake_spriteLib_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/spriteLib.inc.c"
};

#include "assets/levelGroup/BombSnake/room1.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/room2.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/nullRoom.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/map.lvmM.inc.c"

#include "assets/levelGroup/BombSnake/map.lvmH.inc.c"

#include "assets/levelGroup/BombSnake/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/scope.lvlScope.inc.c"

#include "assets/levelGroup/BombSnake/header.lvlHdr.inc.c"
unsigned char BombSnake_headerPad_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/headerPad.inc.c"
};
Mtx_f BombSnake_IMtx2 = IDENTITY;

#include "assets/levelGroup/BombSnake/bsScope/bsScope.light.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.vtx.inc.c"
Mtx_f BombSnake_IMtx3 = IDENTITY;

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.gfx.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.vtx.inc.c"
Mtx_f BombSnake_IMtx4 = IDENTITY;
unsigned char BombSnake_Pad1[] = FILEPAD;
unsigned char BombSnake_arenaFloor_i4_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/arenaFloor/arenaFloor.i4.png.inc.c"
};

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unk3/unk3.colV.inc.c"

#include "assets/levelGroup/BombSnake/unk3/unk3.colT.inc.c"

#include "assets/levelGroup/BombSnake/unk3/unk3.colS.inc.c"

#include "assets/levelGroup/BombSnake/unk3/unk3.colH.inc.c"

#include "assets/levelGroup/BombSnake/unk4/unk4.colV.inc.c"

#include "assets/levelGroup/BombSnake/unk4/unk4.colT.inc.c"

#include "assets/levelGroup/BombSnake/unk4/unk4.colS.inc.c"

#include "assets/levelGroup/BombSnake/unk4/unk4.colH.inc.c"
Mtx_f BombSnake_IMtx5 = IDENTITY;

#include "assets/levelGroup/BombSnake/model/unk5/unk5.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk5/unk5.animArr.inc.c"

#include "assets/levelGroup/BombSnake/model/unk6/unk6.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk6/unk6.animArr.inc.c"

#include "assets/levelGroup/BombSnake/model/unk7/unk7.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk7/unk7.animArr.inc.c"

#include "assets/levelGroup/BombSnake/model/unk8/unk8.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk8/unk8.animArr.inc.c"

#include "assets/levelGroup/BombSnake/bsScope2/bsScope2.light.inc.c"

#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.vtx.inc.c"
Mtx_f BombSnake_IMtx6 = IDENTITY;
unsigned char BombSnake_Pad2[] = FILEPAD;
unsigned char BombSnake_cannonClone_ci4_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/cannonClone.ci4.png.inc.c"
};
unsigned char BombSnake_Pad3[] = FILEPAD;
unsigned char BombSnake_cannonClone_ci4_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/cannonClone.ci4.pal.inc.c"
};
unsigned char BombSnake_Pad4[] = FILEPAD;
unsigned char BombSnake_color_ci4_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/color.ci4.png.inc.c"
};
unsigned char BombSnake_Pad5[] = FILEPAD;
unsigned char BombSnake_color_ci4_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/color.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unkA/unkA.vtx.inc.c"
Mtx_f BombSnake_IMtx7 = IDENTITY;
unsigned char BombSnake_Pad6[] = FILEPAD;
unsigned char BombSnake_cannonCloneRed_ci4_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/unkA/cannonCloneRed.ci4.png.inc.c"
};
unsigned char BombSnake_Pad7[] = FILEPAD;
unsigned char BombSnake_cannonCloneRed_ci4_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/unkA/cannonCloneRed.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombSnake/unkA/unkA.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unkB/unkB.vtx.inc.c"
Mtx_f BombSnake_IMtx8 = IDENTITY;
unsigned char BombSnake_Pad8[] = FILEPAD;
unsigned char BombSnake_gem_ci8_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/unkB/gem.ci8.png.inc.c"
};
unsigned char BombSnake_Pad9[] = FILEPAD;
unsigned char BombSnake_gem_ci8_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/unkB/gem.ci8.pal.inc.c"
};

#include "assets/levelGroup/BombSnake/unkB/unkB.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unkC/unkC.vtx.inc.c"
Mtx_f BombSnake_IMtx9 = IDENTITY;
unsigned char BombSnake_Pad10[] = FILEPAD;
unsigned char BombSnake_speaker_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/unkC/speaker.rgba16.png.inc.c"
};

#include "assets/levelGroup/BombSnake/unkC/unkC.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unkD/unkD.vtx.inc.c"
Mtx_f BombSnake_IMtx10 = IDENTITY;

#include "assets/levelGroup/BombSnake/unkD/unkD.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unkE/unkE.vtx.inc.c"
Mtx_f BombSnake_IMtx11 = IDENTITY;

#include "assets/levelGroup/BombSnake/unkE/unkE.gfx.inc.c"
Mtx_f BombSnake_IMtx12 = IDENTITY;

#include "assets/levelGroup/BombSnake/unkF/unkF.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unk10/unk10.vtx.inc.c"
Mtx_f BombSnake_IMtx13 = IDENTITY;

#include "assets/levelGroup/BombSnake/unk10/unk10.gfx.inc.c"
Mtx_f BombSnake_IMtx14 = IDENTITY;

#include "assets/levelGroup/BombSnake/unk11/unk11.gfx.inc.c"
unsigned char BombSnake_animPointers_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/animPointers.inc.c"
};
