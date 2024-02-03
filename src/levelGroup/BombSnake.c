#include "common.h"
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

extern Mtx D_80129730_BombSnake; //head
extern Mtx D_80129770_BombSnake; //unkA
extern Mtx D_801297B0_BombSnake; //unkB
extern Mtx D_801297F0_BombSnake; //unkC
extern Mtx D_80129830_BombSnake; //unkD
extern Mtx D_80129870_BombSnake; //unkE

extern unsigned char Global_hexComb_PNG[];
extern unsigned char Global_fraMEd_PNG[];
extern unsigned char Global_hexCombFade_PNG[];


Mtx_f BombSnake_mtx_Mtx = {
#include "assets/levelGroup/BombSnake/mtx.mtx.inc.c"
};
unsigned char BombSnake_pointers_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/pointers.inc.c"
};
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
unsigned char BombSnake_map_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/map.inc.c"
};

#include "assets/levelGroup/BombSnake/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/scope.lvlScope.inc.c"

#include "assets/levelGroup/BombSnake/header.lvlHdr.inc.c"
unsigned char BombSnake_headerPad_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/headerPad.inc.c"
};
Mtx_f BombSnake_bsScope_Mtx = {
#include "assets/levelGroup/BombSnake/bsScope/bsScope.mtx.inc.c"
};
Lights1 BombSnake_bsScope_Light =
#include "assets/levelGroup/BombSnake/bsScope/bsScope.light.inc.c"
Vtx BombSnake_arenaWalls_Vtx[] = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.vtx.inc.c"
};
Mtx_f BombSnake_arenaWalls_Mtx = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.mtx.inc.c"
};
Gfx BombSnake_arenaWalls_Gfx[] = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.gfx.inc.c"
};
Vtx BombSnake_arenaFloor_Vtx[] = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.vtx.inc.c"
};
Mtx_f BombSnake_arenaFloor_Mtx = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.mtx.inc.c"
};
unsigned char BombSnake_Pad1[] = FILEPAD;
unsigned char BombSnake_arenaFloor_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/arenaFloor/arenaFloor.i4.png.inc.c"
};
Gfx BombSnake_arenaFloor_Gfx[] = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.gfx.inc.c"
};
Vec3f BombSnake_unk3_Verts[] = {
#include "assets/levelGroup/BombSnake/unk3/unk3.colV.inc.c"
};
Vec3s BombSnake_unk3_Tris[] = {
#include "assets/levelGroup/BombSnake/unk3/unk3.colT.inc.c"
};
Vec3f BombSnake_unk3_Settings[] = {
#include "assets/levelGroup/BombSnake/unk3/unk3.colS.inc.c"
};
CollisionData BombSnake_unk3_Header[] = {
#include "assets/levelGroup/BombSnake/unk3/unk3.colH.inc.c"
};
Vec3f BombSnake_unk4_Verts[] = {
#include "assets/levelGroup/BombSnake/unk4/unk4.colV.inc.c"
};
Vec3s BombSnake_unk4_Tris[] = {
#include "assets/levelGroup/BombSnake/unk4/unk4.colT.inc.c"
};
Vec3f BombSnake_unk4_Settings[] = {
#include "assets/levelGroup/BombSnake/unk4/unk4.colS.inc.c"
};
CollisionData BombSnake_unk4_Header[] = {
#include "assets/levelGroup/BombSnake/unk4/unk4.colH.inc.c"
};
Mtx_f BombSnake_unkMTX_Mtx = {
#include "assets/levelGroup/BombSnake/unkMTX.mtx.inc.c"
};

#include "assets/levelGroup/BombSnake/model/unk5/unk5.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk5/unk5.animArr.inc.c"

#include "assets/levelGroup/BombSnake/model/unk6/unk6.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk6/unk6.animArr.inc.c"

#include "assets/levelGroup/BombSnake/model/unk7/unk7.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk7/unk7.animArr.inc.c"

#include "assets/levelGroup/BombSnake/model/unk8/unk8.animH.inc.c"

#include "assets/levelGroup/BombSnake/model/unk8/unk8.animArr.inc.c"
Lights1 BombSnake_bsScope2_Light =
#include "assets/levelGroup/BombSnake/bsScope2/bsScope2.light.inc.c"
Vtx BombSnake_bombSnakeHead_Vtx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.vtx.inc.c"
};
Mtx_f BombSnake_bombSnakeHead_Mtx = {
#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.mtx.inc.c"
};
unsigned char BombSnake_Pad2[] = FILEPAD;
unsigned char BombSnake_cannonClone_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/cannonClone.ci4.png.inc.c"
};
unsigned char BombSnake_Pad3[] = FILEPAD;
unsigned char BombSnake_cannonClone_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/cannonClone.ci4.pal.inc.c"
};
unsigned char BombSnake_Pad4[] = FILEPAD;
unsigned char BombSnake_color_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/color.ci4.png.inc.c"
};
unsigned char BombSnake_Pad5[] = FILEPAD;
unsigned char BombSnake_color_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/bombSnakeHead/color.ci4.pal.inc.c"
};
Gfx BombSnake_bombSnakeHead_Gfx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.gfx.inc.c"
};
Vtx BombSnake_unkA_Vtx[] = {
#include "assets/levelGroup/BombSnake/unkA/unkA.vtx.inc.c"
};
Mtx_f BombSnake_unkA_Mtx = {
#include "assets/levelGroup/BombSnake/unkA/unkA.mtx.inc.c"
};
unsigned char BombSnake_Pad6[] = FILEPAD;
unsigned char BombSnake_cannonCloneRed_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/unkA/cannonCloneRed.ci4.png.inc.c"
};
unsigned char BombSnake_Pad7[] = FILEPAD;
unsigned char BombSnake_cannonCloneRed_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/unkA/cannonCloneRed.ci4.pal.inc.c"
};
Gfx BombSnake_unkA_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkA/unkA.gfx.inc.c"
};
Vtx BombSnake_unkB_Vtx[] = {
#include "assets/levelGroup/BombSnake/unkB/unkB.vtx.inc.c"
};
Mtx_f BombSnake_unkB_Mtx = {
#include "assets/levelGroup/BombSnake/unkB/unkB.mtx.inc.c"
};
unsigned char BombSnake_Pad8[] = FILEPAD;
unsigned char BombSnake_gem_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/unkB/gem.ci8.png.inc.c"
};
unsigned char BombSnake_Pad9[] = FILEPAD;
unsigned char BombSnake_gem_PAL[] = {
#include "build/include/assets/levelGroup/BombSnake/unkB/gem.ci8.pal.inc.c"
};
Gfx BombSnake_unkB_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkB/unkB.gfx.inc.c"
};
Vtx BombSnake_unkC_Vtx[] = {
#include "assets/levelGroup/BombSnake/unkC/unkC.vtx.inc.c"
};
Mtx_f BombSnake_unkC_Mtx = {
#include "assets/levelGroup/BombSnake/unkC/unkC.mtx.inc.c"
};
unsigned char BombSnake_Pad10[] = FILEPAD;
unsigned char BombSnake_speaker_PNG[] = {
#include "build/include/assets/levelGroup/BombSnake/unkC/speaker.rgba16.png.inc.c"
};
Gfx BombSnake_unkC_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkC/unkC.gfx.inc.c"
};
Vtx BombSnake_unkD_Vtx[] = {
#include "assets/levelGroup/BombSnake/unkD/unkD.vtx.inc.c"
};
Mtx_f BombSnake_unkD_Mtx = {
#include "assets/levelGroup/BombSnake/unkD/unkD.mtx.inc.c"
};
Gfx BombSnake_unkD_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkD/unkD.gfx.inc.c"
};
Vtx BombSnake_unkE_Vtx[] = {
#include "assets/levelGroup/BombSnake/unkE/unkE.vtx.inc.c"
};
Mtx_f BombSnake_unkE_Mtx = {
#include "assets/levelGroup/BombSnake/unkE/unkE.mtx.inc.c"
};
Gfx BombSnake_unkE_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkE/unkE.gfx.inc.c"
};
Mtx_f BombSnake_unkF_Mtx = {
#include "assets/levelGroup/BombSnake/unkF/unkF.mtx.inc.c"
};
Gfx BombSnake_unkF_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkF/unkF.gfx.inc.c"
};
Vtx BombSnake_unk10_Vtx[] = {
#include "assets/levelGroup/BombSnake/unk10/unk10.vtx.inc.c"
};
Mtx_f BombSnake_unk10_Mtx = {
#include "assets/levelGroup/BombSnake/unk10/unk10.mtx.inc.c"
};
Gfx BombSnake_unk10_Gfx[] = {
#include "assets/levelGroup/BombSnake/unk10/unk10.gfx.inc.c"
};
Mtx_f BombSnake_unk11_Mtx = {
#include "assets/levelGroup/BombSnake/unk11/unk11.mtx.inc.c"
};
Gfx BombSnake_unk11_Gfx[] = {
#include "assets/levelGroup/BombSnake/unk11/unk11.gfx.inc.c"
};
unsigned char BombSnake_animPointers_Bin[] = {
#include "build/include/assets/levelGroup/BombSnake/animPointers.inc.c"
};
