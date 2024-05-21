#include "common.h"

extern unsigned char Global_hexComb_i4_PNG[];
extern unsigned char Global_fraMEd_ia4_PNG[];
extern unsigned char Global_hexCombFade_i8_PNG[];

extern Gfx Global_fallbackCube_Gfx[];
extern CollisionData Global_fallbackCube_ColH;
extern Gfx Global_exitShadowSouth_Gfx[];
extern CollisionData Global_exitShadowSouth_ColH;
extern Gfx Global_exitShadowNorth_Gfx[];
extern CollisionData Global_exitShadowNorth_ColH;
extern Gfx Global_exitShadowEast_Gfx[];
extern CollisionData Global_exitShadowEast_ColH;
extern Gfx Global_exitShadowWest_Gfx[];
extern CollisionData Global_exitShadowWest_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern CollisionData Global_ALBLExit_ColH;
extern Gfx Global_unk3_Gfx[];
extern CollisionData Global_unk3_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern CollisionData Global_BossBridge_ColH;
extern Gfx Global_ALPole_Gfx[];
extern CollisionData Global_ALPole_ColH;
extern Gfx Global_ALBLDoor_Gfx[];
extern CollisionData Global_ALBLDoor_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern CollisionData Global_ALSpinDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern CollisionData Global_BLLavaFloor_ColH;
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
extern Gfx Global_BLDestructableTop_Gfx[];
extern CollisionData Global_BLDestructableTop_ColH;
extern Gfx Global_BLMetalBridge_Gfx[];
extern CollisionData Global_BLMetalBridge_ColH;
extern Gfx Global_KLExit_Gfx[];
extern CollisionData Global_KLExit_ColH;
extern Gfx Global_KLDoor_Gfx[];
extern CollisionData Global_KLDoor_ColH;
extern Gfx Global_DCExit_Gfx[];
extern CollisionData Global_DCExit_ColH;
extern Gfx Global_TallExitShadow1_Gfx[];
extern CollisionData Global_TallExitShadow1_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern CollisionData Global_TallExitShadow2_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern CollisionData Global_GCExit1_ColH;
extern Gfx Global_GCExit2_Gfx[];
extern CollisionData Global_GCExit2_ColH;
extern Gfx Global_trainingRoomLight_Gfx[];
extern CollisionData Global_trainingRoomLight_ColH;
extern Gfx Global_JLCaveExit1_Gfx[];
extern CollisionData Global_JLCaveExit1_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern CollisionData Global_JLCaveExit2_ColH;
extern Gfx Global_JLCaveExit3_Gfx[];
extern CollisionData Global_JLCaveExit3_ColH;
extern Gfx Global_JLCaveExit4_Gfx[];
extern CollisionData Global_JLCaveExit4_ColH;
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern CollisionData Global_JLOutsideEntrance_ColH;
extern Gfx Global_JLFxCamPillar_Gfx[];
extern CollisionData Global_JLFxCamPillar_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern CollisionData Global_JLCaveDoor_ColH;
extern Gfx BombSnake_arenaWalls_Gfx[];
extern CollisionData BombSnake_arenaWalls_ColH;
extern Gfx BombSnake_arenaFloor_Gfx[];
extern CollisionData BombSnake_arenaFloor_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;

Mtx BombSnake_IMtx1 = IDENTITY;

#include "assets/levelGroup/BombSnake/pointers.lvp.inc.c"

#include "build/assets/levelGroup/BombSnake/rabObjects.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/room0_act1.roomAct.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/room0_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/room1_act1.roomAct.inc.c"

#include "assets/levelGroup/BombSnake/roomActors/roomActSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombSnake/spriteLib.sprLib.inc.c"

#include "assets/levelGroup/BombSnake/room0.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/room1.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/map.lvmM.inc.c"

#include "assets/levelGroup/BombSnake/map.lvmH.inc.c"

#include "assets/levelGroup/BombSnake/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/BombSnake/scope.lvlScope.inc.c"

#include "assets/levelGroup/BombSnake/header.lvlHdr.inc.c"
s32 bombSnake_alignement[2] = {0, 0};
Mtx BombSnake_IMtx2 = IDENTITY;

#include "assets/levelGroup/BombSnake/bsScope/bsScope.light.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.vtx.inc.c"
Mtx BombSnake_IMtx3 = IDENTITY;

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.gfx.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.vtx.inc.c"
Mtx BombSnake_IMtx4 = IDENTITY;
unsigned char BombSnake_Pad1[] = FILEPAD;
unsigned char BombSnake_arenaFloor_i4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/arenaFloor.i4.png.inc.c"
};

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.gfx.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colV.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colT.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colS.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colH.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colV.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colT.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colS.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colH.inc.c"
Mtx BombSnake_IMtx5 = IDENTITY;

#include "assets/levelGroup/BombSnake/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/BombSnake/bsScope2/bsScope2.light.inc.c"

#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.vtx.inc.c"
Mtx BombSnake_IMtx6 = IDENTITY;
unsigned char BombSnake_Pad2[] = FILEPAD;
unsigned char BombSnake_cannonClone_ci4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/cannonClone.ci4.png.inc.c"
};
unsigned char BombSnake_Pad3[] = FILEPAD;
unsigned char BombSnake_cannonClone_ci4_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/cannonClone.ci4.pal.inc.c"
};
unsigned char BombSnake_Pad4[] = FILEPAD;
unsigned char BombSnake_color_ci4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/color.ci4.png.inc.c"
};
unsigned char BombSnake_Pad5[] = FILEPAD;
unsigned char BombSnake_color_ci4_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/color.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.gfx.inc.c"

#include "assets/levelGroup/BombSnake/bombSnakeHeadSpike/bombSnakeHeadSpike.vtx.inc.c"
Mtx BombSnake_IMtx7 = IDENTITY;
unsigned char BombSnake_Pad6[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadSpike_ci4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadSpike.ci4.png.inc.c"
};
unsigned char BombSnake_Pad7[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadSpike_ci4_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadSpike.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombSnake/bombSnakeHeadSpike/bombSnakeHeadSpike.gfx.inc.c"

#include "assets/levelGroup/BombSnake/bombSnakeHeadGem/bombSnakeHeadGem.vtx.inc.c"
Mtx BombSnake_IMtx8 = IDENTITY;
unsigned char BombSnake_Pad8[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadGem_ci8_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadGem.ci8.png.inc.c"
};
unsigned char BombSnake_Pad9[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadGem_ci8_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadGem.ci8.pal.inc.c"
};

#include "assets/levelGroup/BombSnake/bombSnakeHeadGem/bombSnakeHeadGem.gfx.inc.c"

#include "assets/levelGroup/BombSnake/bombSnakeEars/bombSnakeEars.vtx.inc.c"
Mtx BombSnake_IMtx9 = IDENTITY;
unsigned char BombSnake_Pad10[] = FILEPAD;
unsigned char BombSnake_bombSnakeEars_rgba16_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeEars.rgba16.png.inc.c"
};

#include "assets/levelGroup/BombSnake/bombSnakeEars/bombSnakeEars.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unkD/unkD.vtx.inc.c"
Mtx BombSnake_IMtx10 = IDENTITY;

#include "assets/levelGroup/BombSnake/unkD/unkD.gfx.inc.c"

#include "assets/levelGroup/BombSnake/unkE/unkE.vtx.inc.c"
Mtx BombSnake_IMtx11 = IDENTITY;

#include "assets/levelGroup/BombSnake/unkE/unkE.gfx.inc.c"
Mtx BombSnake_IMtx12 = IDENTITY;

#include "assets/levelGroup/BombSnake/unkF/unkF.gfx.inc.c"

#include "assets/levelGroup/BombSnake/bombSnakeTail/bombSnakeTail.vtx.inc.c"
Mtx BombSnake_IMtx13 = IDENTITY;

#include "assets/levelGroup/BombSnake/bombSnakeTail/bombSnakeTail.gfx.inc.c"
Mtx BombSnake_IMtx14 = IDENTITY;

#include "assets/levelGroup/BombSnake/unk11/unk11.gfx.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/BombSnake/anim/unk4Pointers.animP.inc.c"
