#include "common.h"
extern unsigned char Global_KLOrangeBrickFade_ci8_PNG[];
extern unsigned char Global_KLOrangeBrickFade_ci8_PAL[];
extern unsigned char Global_orangeBrick_ci4_PNG[];
extern unsigned char Global_orangeBrick_ci4_PAL[];
extern unsigned char Global_KLCrackerFade_ci8_PNG[];
extern unsigned char Global_KLCrackerFade_ci8_PAL[];
extern unsigned char Global_KLFloor_ci4_PNG[];
extern unsigned char Global_KLFloor_ci4_PAL[];

extern Gfx Global_fallbackCube_Gfx[];
extern ModelCollision Global_fallbackCube_ColH;
extern Gfx Global_exitShadowSouth_Gfx[];
extern ModelCollision Global_exitShadowSouth_ColH;
extern Gfx Global_exitShadowNorth_Gfx[];
extern ModelCollision Global_exitShadowNorth_ColH;
extern Gfx Global_exitShadowEast_Gfx[];
extern ModelCollision Global_exitShadowEast_ColH;
extern Gfx Global_exitShadowWest_Gfx[];
extern ModelCollision Global_exitShadowWest_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern ModelCollision Global_ALBLExit_ColH;
extern Gfx Global_sandPit_Gfx[];
extern ModelCollision Global_sandPit_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern ModelCollision Global_BossBridge_ColH;
extern Gfx Global_ALPole_Gfx[];
extern ModelCollision Global_ALPole_ColH;
extern Gfx Global_ALBLDoor_Gfx[];
extern ModelCollision Global_ALBLDoor_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern ModelCollision Global_ALSpinDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern ModelCollision Global_BLLavaFloor_ColH;
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava_ColH;
extern Gfx Global_BLLava2_Gfx[];
extern ModelCollision Global_BLLava2_ColH;
extern Gfx Global_BLLava3_Gfx[];
extern ModelCollision Global_BLLava3_ColH;
extern Gfx Global_BLLava4_Gfx[];
extern ModelCollision Global_BLLava4_ColH;
extern Gfx Global_BLLava5_Gfx[];
extern ModelCollision Global_BLLava5_ColH;
extern Gfx Global_BLLava6_Gfx[];
extern ModelCollision Global_BLLava6_ColH;
extern Gfx Global_BLLava7_Gfx[];
extern ModelCollision Global_BLLava7_ColH;
extern Gfx Global_BLLava8_Gfx[];
extern ModelCollision Global_BLLava8_ColH;
extern Gfx Global_BLDestructableTop_Gfx[];
extern ModelCollision Global_BLDestructableTop_ColH;
extern Gfx Global_BLMetalBridge_Gfx[];
extern ModelCollision Global_BLMetalBridge_ColH;
extern Gfx Global_KLExit_Gfx[];
extern ModelCollision Global_KLExit_ColH;
extern Gfx Global_KLDoor_Gfx[];
extern ModelCollision Global_KLDoor_ColH;
extern Gfx Global_DCExit_Gfx[];
extern ModelCollision Global_DCExit_ColH;
extern Gfx Global_TallExitShadow1_Gfx[];
extern ModelCollision Global_TallExitShadow1_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern ModelCollision Global_TallExitShadow2_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern ModelCollision Global_GCExit1_ColH;
extern Gfx Global_GCExit2_Gfx[];
extern ModelCollision Global_GCExit2_ColH;
extern Gfx Global_trainingRoomLight_Gfx[];
extern ModelCollision Global_trainingRoomLight_ColH;
extern Gfx Global_JLCaveExit1_Gfx[];
extern ModelCollision Global_JLCaveExit1_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern ModelCollision Global_JLCaveExit2_ColH;
extern Gfx Global_JLCaveExit3_Gfx[];
extern ModelCollision Global_JLCaveExit3_ColH;
extern Gfx Global_JLCaveExit4_Gfx[];
extern ModelCollision Global_JLCaveExit4_ColH;
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern ModelCollision Global_JLOutsideEntrance_ColH;
extern Gfx Global_JLFxCamPillar_Gfx[];
extern ModelCollision Global_JLFxCamPillar_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern ModelCollision Global_JLCaveDoor_ColH;
extern Gfx GiantCake_model1_Gfx[];
extern ModelCollision GiantCake_unkCol1_ColH;
extern Gfx GiantCake_model2_Gfx[];
extern ModelCollision GiantCake_unkCol2_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;


Mtx GiantCake_IMtx1 = IDENTITY;

StageModel GiantCake_stageModels[40] = {
{&Global_fallbackCube_Gfx[0], &Global_fallbackCube_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_exitShadowSouth_Gfx[0], &Global_exitShadowSouth_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_exitShadowNorth_Gfx[0], &Global_exitShadowNorth_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_exitShadowEast_Gfx[0], &Global_exitShadowEast_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_exitShadowWest_Gfx[0], &Global_exitShadowWest_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_ALBLExit_Gfx[0], &Global_ALBLExit_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_sandPit_Gfx[0], &Global_sandPit_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BossBridge_Gfx[0], &Global_BossBridge_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_ALPole_Gfx[0], &Global_ALPole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_ALBLDoor_Gfx[0], &Global_ALBLDoor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_ALSpinDoor_Gfx[0], &Global_ALSpinDoor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLavaFloor_Gfx[0], &Global_BLLavaFloor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava_Gfx[0], &Global_BLLava_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava2_Gfx[0], &Global_BLLava2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava3_Gfx[0], &Global_BLLava3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava4_Gfx[0], &Global_BLLava4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava5_Gfx[0], &Global_BLLava5_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava6_Gfx[0], &Global_BLLava6_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava7_Gfx[0], &Global_BLLava7_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLLava8_Gfx[0], &Global_BLLava8_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLDestructableTop_Gfx[0], &Global_BLDestructableTop_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_BLMetalBridge_Gfx[0], &Global_BLMetalBridge_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_KLExit_Gfx[0], &Global_KLExit_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_KLDoor_Gfx[0], &Global_KLDoor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_DCExit_Gfx[0], &Global_DCExit_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_TallExitShadow1_Gfx[0], &Global_TallExitShadow1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_TallExitShadow2_Gfx[0], &Global_TallExitShadow2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_GCExit1_Gfx[0], &Global_GCExit1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_GCExit2_Gfx[0], &Global_GCExit2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_trainingRoomLight_Gfx[0], &Global_trainingRoomLight_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_JLCaveExit1_Gfx[0], &Global_JLCaveExit1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_JLCaveExit2_Gfx[0], &Global_JLCaveExit2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_JLCaveExit3_Gfx[0], &Global_JLCaveExit3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_JLCaveExit4_Gfx[0], &Global_JLCaveExit4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_JLOutsideEntrance_Gfx[0], &Global_JLOutsideEntrance_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_JLFxCamPillar_Gfx[0], &Global_JLFxCamPillar_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_JLCaveDoor_Gfx[0], &Global_JLCaveDoor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GiantCake_model1_Gfx[0], &GiantCake_unkCol1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GiantCake_model2_Gfx[0], &GiantCake_unkCol2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char GiantCake_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject GiantCake_roomMulti_objects[13] = {
{{-3300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -3300.0, -20000.0, 0.0, 0.0, 15, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-3100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -3100.0, -20000.0, 0.0, 0.0, 20, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2900.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2900.0, -20000.0, 0.0, 0.0, 25, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2700.0, -20000.0, 0.0, 0.0, 30, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2500.0, -20000.0, 0.0, 0.0, 35, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2300.0, -20000.0, 0.0, 0.0, 40, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2100.0, -20000.0, 0.0, 0.0, 45, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 38, -1, 30, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-3450.0,-400.0,0.0}, {1.0,1.0,0.125}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 11, -3450.0, -400.0, 0.0, 0.0, 2, 20, -1, 40, 0, 0, 23, -1, -1, 24, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-3600.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-3600.0,0.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GiantCake_room0_actors[2] = {
{CAKE_BOSS, {0.0,0.0,0.0}, 0.0, -5000.0, 5000.0, -5000.0f, 5000.0, -5000.0, 5000.0, 0, 32.0, 6.0, 24.0, 5.0, -3.0f, 500.0f, 0, 2000.0f, 180.0f, 180.0f, 8.0f, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GiantCake_room1_actors[2] = {
{CAKE_BOSS, {0.0,0.0,0.0}, 0.0, -5000.0, 5000.0, -5000.0f, 5000.0, -5000.0, 5000.0, 0, 64.0, 4.5, 30.0, 8.0, -6.0f, 500.0f, 0, 2000.0f, 300.0f, 70.0f, 2.0f, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

s32 GiantCake_spriteLib_Sprlib[] = {
    37,
    38,
    39,
    40,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    37,
    38,
    39,
    40,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

RoomInstance GiantCake_room_instances[3] = {
{GiantCake_roomMulti_objects,GiantCake_room0_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 15, 0.0, 0.0, 0.0, 0.0, 0.0, 65.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
{GiantCake_roomMulti_objects,GiantCake_room1_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 15, 0.0, 0.0, 0.0, 0.0, 0.0, 65.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

s32 GiantCake_rooms_map[3][3] = {
{-1, -1, -1},
{-1,  0, -1},
{-1, -1, -1}, 
};

StageMapData GiantCake_map_data = {
3, 3, GiantCake_room_instances, GiantCake_rooms_map, 
};

RoomInstance GiantCake_ext_room_instances[1] = {
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope GiantCake_scope_Lvlscope = {
    0,
    0,
    0,
    255,
    25000,
    60,
};

StageData GiantCake_header_Lvlhdr = {
    &GiantCake_map_data,
    0,
    &GiantCake_stageModels[0],
    40,
    0,
    GiantCake_rabObjects_Bin,
    131072,
    &GiantCake_spriteLib_Sprlib[0],
    &GiantCake_scope_Lvlscope,
};
Mtx GiantCake_IMtx2 = IDENTITY;

#include "assets/levelGroup/GiantCake/gicScope/gicScope.light.inc.c"

#include "assets/levelGroup/GiantCake/model1/model1.vtx.inc.c"
Mtx GiantCake_IMtx3 = IDENTITY;

#include "assets/levelGroup/GiantCake/model1/model1.gfx.inc.c"

#include "assets/levelGroup/GiantCake/model2/model2.vtx.inc.c"
Mtx GiantCake_IMtx4 = IDENTITY;

#include "assets/levelGroup/GiantCake/model2/model2.gfx.inc.c"

#include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colS.inc.c"

ModelCollision GiantCake_unkCol1_ColH = {
16, 22, &GiantCake_unkCol1_ColV[0], &GiantCake_unkCol1_ColT[0], &GiantCake_unkCol1_ColS
};

#include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colS.inc.c"

ModelCollision GiantCake_unkCol2_ColH = {
8, 10, &GiantCake_unkCol2_ColV[0], &GiantCake_unkCol2_ColT[0], &GiantCake_unkCol2_ColS
};
Mtx GiantCake_IMtx5 = IDENTITY;

#include "assets/levelGroup/GiantCake/gicScope2/gicScope2.light.inc.c"

#include "assets/levelGroup/GiantCake/a_model1/a_model1.vtx.inc.c"
Mtx GiantCake_IMtx6 = IDENTITY;
unsigned char GiantCake_Pad1[] = FILEPAD;
unsigned char GiantCake_frosting_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting.ci8.png.inc.c"
};
unsigned char GiantCake_Pad2[] = FILEPAD;
unsigned char GiantCake_frosting_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting.ci8.pal.inc.c"
};

#include "assets/levelGroup/GiantCake/a_model1/a_model1.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model2/a_model2.vtx.inc.c"
Mtx GiantCake_IMtx7 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model2/a_model2.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model3/a_model3.vtx.inc.c"
Mtx GiantCake_IMtx8 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model3/a_model3.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model4/a_model4.vtx.inc.c"
Mtx GiantCake_IMtx9 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model4/a_model4.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model5/a_model5.vtx.inc.c"
Mtx GiantCake_IMtx10 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model5/a_model5.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model6/a_model6.vtx.inc.c"
Mtx GiantCake_IMtx11 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model6/a_model6.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model7/a_model7.vtx.inc.c"
Mtx GiantCake_IMtx12 = IDENTITY;
unsigned char GiantCake_Pad3[] = FILEPAD;
unsigned char GiantCake_frosting2_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting2.ci8.png.inc.c"
};
unsigned char GiantCake_Pad4[] = FILEPAD;
unsigned char GiantCake_frosting2_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting2.ci8.pal.inc.c"
};
unsigned char GiantCake_Pad5[] = FILEPAD;
unsigned char GiantCake_frosting3_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting3.ci8.png.inc.c"
};
unsigned char GiantCake_Pad6[] = FILEPAD;
unsigned char GiantCake_frosting3_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting3.ci8.pal.inc.c"
};

#include "assets/levelGroup/GiantCake/a_model7/a_model7.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model8/a_model8.vtx.inc.c"
Mtx GiantCake_IMtx13 = IDENTITY;
unsigned char GiantCake_Pad7[] = FILEPAD;
unsigned char GiantCake_base_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/base.ci8.png.inc.c"
};
unsigned char GiantCake_Pad8[] = FILEPAD;
unsigned char GiantCake_base_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/base.ci8.pal.inc.c"
};

#include "assets/levelGroup/GiantCake/a_model8/a_model8.gfx.inc.c"
Mtx GiantCake_IMtx14 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model9/a_model9.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model10/a_model10.vtx.inc.c"
Mtx GiantCake_IMtx15 = IDENTITY;
unsigned char GiantCake_Pad9[] = FILEPAD;
unsigned char GiantCake_crank_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/crank.ci8.png.inc.c"
};
unsigned char GiantCake_Pad10[] = FILEPAD;
unsigned char GiantCake_crank_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/crank.ci8.pal.inc.c"
};

#include "assets/levelGroup/GiantCake/a_model10/a_model10.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model11/a_model11.vtx.inc.c"
Mtx GiantCake_IMtx16 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model11/a_model11.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model12/a_model12.vtx.inc.c"
Mtx GiantCake_IMtx17 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model12/a_model12.gfx.inc.c"
Mtx GiantCake_IMtx18 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model13/a_model13.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model14/a_model14.vtx.inc.c"
Mtx GiantCake_IMtx19 = IDENTITY;
unsigned char GiantCake_Pad11[] = FILEPAD;
unsigned char GiantCake_strawberry_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/strawberry.ci8.png.inc.c"
};
unsigned char GiantCake_Pad12[] = FILEPAD;
unsigned char GiantCake_strawberry_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/strawberry.ci8.pal.inc.c"
};

#include "assets/levelGroup/GiantCake/a_model14/a_model14.gfx.inc.c"
Mtx GiantCake_IMtx20 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model15/a_model15.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model16/a_model16.vtx.inc.c"
Mtx GiantCake_IMtx21 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model16/a_model16.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model17/a_model17.vtx.inc.c"
Mtx GiantCake_IMtx22 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model17/a_model17.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model18/a_model18.vtx.inc.c"
Mtx GiantCake_IMtx23 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model18/a_model18.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model19/a_model19.vtx.inc.c"
Mtx GiantCake_IMtx24 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model19/a_model19.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model20/a_model20.vtx.inc.c"
Mtx GiantCake_IMtx25 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model20/a_model20.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model21/a_model21.vtx.inc.c"
Mtx GiantCake_IMtx26 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model21/a_model21.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model22/a_model22.vtx.inc.c"
Mtx GiantCake_IMtx27 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model22/a_model22.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model23/a_model23.vtx.inc.c"
Mtx GiantCake_IMtx28 = IDENTITY;
unsigned char GiantCake_Pad13[] = FILEPAD;
unsigned char GiantCake_color_ci4_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/color.ci4.png.inc.c"
};
unsigned char GiantCake_Pad14[] = FILEPAD;
unsigned char GiantCake_color_ci4_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/color.ci4.pal.inc.c"
};

#include "assets/levelGroup/GiantCake/a_model23/a_model23.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model24/a_model24.vtx.inc.c"
Mtx GiantCake_IMtx29 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model24/a_model24.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model25/a_model25.vtx.inc.c"
Mtx GiantCake_IMtx30 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model25/a_model25.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model26/a_model26.vtx.inc.c"
Mtx GiantCake_IMtx31 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model26/a_model26.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model27/a_model27.vtx.inc.c"
Mtx GiantCake_IMtx32 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model27/a_model27.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model28/a_model28.vtx.inc.c"
Mtx GiantCake_IMtx33 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model28/a_model28.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model29/a_model29.vtx.inc.c"
Mtx GiantCake_IMtx34 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model29/a_model29.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model30/a_model30.vtx.inc.c"
Mtx GiantCake_IMtx35 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model30/a_model30.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model31/a_model31.vtx.inc.c"
Mtx GiantCake_IMtx36 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model31/a_model31.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model32/a_model32.vtx.inc.c"
Mtx GiantCake_IMtx37 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model32/a_model32.gfx.inc.c"
Mtx GiantCake_IMtx38 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model33/a_model33.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model34/a_model34.vtx.inc.c"
Mtx GiantCake_IMtx39 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model34/a_model34.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model35/a_model35.vtx.inc.c"
Mtx GiantCake_IMtx40 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model35/a_model35.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model36/a_model36.vtx.inc.c"
Mtx GiantCake_IMtx41 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model36/a_model36.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model37/a_model37.vtx.inc.c"
Mtx GiantCake_IMtx42 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model37/a_model37.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model38/a_model38.vtx.inc.c"
Mtx GiantCake_IMtx43 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model38/a_model38.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model39/a_model39.vtx.inc.c"
Mtx GiantCake_IMtx44 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model39/a_model39.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model40/a_model40.vtx.inc.c"
Mtx GiantCake_IMtx45 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model40/a_model40.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model41/a_model41.vtx.inc.c"
Mtx GiantCake_IMtx46 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model41/a_model41.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model42/a_model42.vtx.inc.c"
Mtx GiantCake_IMtx47 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model42/a_model42.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model43/a_model43.vtx.inc.c"
Mtx GiantCake_IMtx48 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model43/a_model43.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model44/a_model44.vtx.inc.c"
Mtx GiantCake_IMtx49 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model44/a_model44.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model45/a_model45.vtx.inc.c"
Mtx GiantCake_IMtx50 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model45/a_model45.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model46/a_model46.vtx.inc.c"
Mtx GiantCake_IMtx51 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model46/a_model46.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model47/a_model47.vtx.inc.c"
Mtx GiantCake_IMtx52 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model47/a_model47.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model48/a_model48.vtx.inc.c"
Mtx GiantCake_IMtx53 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model48/a_model48.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model49/a_model49.vtx.inc.c"
Mtx GiantCake_IMtx54 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model49/a_model49.gfx.inc.c"

#include "assets/levelGroup/GiantCake/a_model50/a_model50.vtx.inc.c"
Mtx GiantCake_IMtx55 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model50/a_model50.gfx.inc.c"
Mtx GiantCake_IMtx56 = IDENTITY;

#include "assets/levelGroup/GiantCake/a_model51/a_model51.gfx.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk4Pointers.animP.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk5Header.animH.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk5.animArr.inc.c"

#include "assets/levelGroup/GiantCake/anim/unk5Pointers.animP.inc.c"
