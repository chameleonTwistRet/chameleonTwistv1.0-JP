#include "common.h"


extern unsigned char Global_JLCaveFadeTop_ci8_PAL[];
extern unsigned char Global_JLCaveFadeTop_ci8_PNG[];
extern unsigned char Global_JLCaveFade_ci8_PAL[];
extern unsigned char Global_JLCaveFade_ci8_PNG[];
extern unsigned char Global_jlText5_ci4_PAL[];
extern unsigned char Global_jlText5_ci4_PNG[];

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
extern Gfx LizardKong_model1_Gfx[];
extern ModelCollision LizardKong_unkCol1_ColH;
extern Gfx LizardKong_model2_Gfx[];
extern ModelCollision LizardKong_unkCol2_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;

Mtx LizardKong_IMtx1 = IDENTITY;

StageModel LizardKong_stageModels[40] = {
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
{&LizardKong_model1_Gfx[0], &LizardKong_unkCol1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&LizardKong_model2_Gfx[0], &LizardKong_unkCol2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char LizardKong_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject LizardKong_room0_objects[9] = {
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 38, -1, 30, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-200.0,-50.0,-200.0}, {1.5,2.0,2.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 35, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{200.0,0.0,200.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 32, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{200.0,0.0,200.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 3, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{200.0,0.0,200.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{200.0,0.0,200.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{200.0,400.0,30.0}, {1.0,1.3333333730697632,0.10000000149011612}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 11, 200.0, 0.0, 30.0, 0.0, 2, 20, -1, 40, 0, 0, 36, -1, -1, 30, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor LizardKong_room0_actors[4] = {
{LIZARD_KONG, {0.0,0.0,0.0}, 263.0, -10000.0, 10000.0, -971227136, 10000.0, -10000.0, 10000.0, 1, 0.6000000238418579, 15.0, 2000.0, 80.0, 1077936128, 1110704128, 1161527296, 1061997773, 1106247680, 1065353216, 1065353216, 0},
{LIZARD_KONG_BUTTERFLY_SPAWNER, {500.0,-100.0,-3200.0}, 0.0, -50000.0, 50000.0, -951889920, 50000.0, -50000.0, 50000.0, 0, 8.0, 4.0, 10.0, 1.0, 1077936128, 0, 0, 0, 1135869952, 1086324736, 1106247680, 0},
{LIZARD_KONG_BUTTERFLY_SPAWNER, {-500.0,-100.0,-3200.0}, 0.0, -50000.0, 50000.0, -951889920, 50000.0, -50000.0, 50000.0, 0, 8.0, 4.0, 10.0, 1.0, 1077936128, 0, 0, 0, 1135869952, 1086324736, 1106247680, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor LizardKong_room1_actors[4] = {
{LIZARD_KONG, {0.0,0.0,0.0}, 263.0, -10000.0, 10000.0, -971227136, 10000.0, -10000.0, 10000.0, 1, 2.0, 30.0, 2000.0, 20.0, 1106247680, 1110704128, 1161527296, 1058642330, 1084227584, 1077936128, 1073741824, 0},
{LIZARD_KONG_BUTTERFLY_SPAWNER, {500.0,-100.0,-3200.0}, 0.0, -50000.0, 50000.0, -951889920, 50000.0, -50000.0, 50000.0, 0, 10.0, 4.0, 10.0, 1.0, 1077936128, 0, 0, 0, 1135869952, 1111490560, 1106247680, 0},
{LIZARD_KONG_BUTTERFLY_SPAWNER, {-500.0,-100.0,-3200.0}, 0.0, -50000.0, 50000.0, -951889920, 50000.0, -50000.0, 50000.0, 0, 20.0, 4.0, 10.0, 1.0, 1077936128, 0, 0, 0, 1135869952, 1111490560, 1106247680, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

s32 LizardKong_spriteLib_Sprlib[] = {
    56,
    57,
    58,
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
    0,
    0,
    0,
    0,
    0,
};

RoomInstance LizardKong_room_instances[3] = {
{LizardKong_room0_objects,LizardKong_room0_actors, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 10, -200.0, 800.0, -200.0, 0.0, 0.0, 0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
{LizardKong_room0_objects,LizardKong_room1_actors, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 10, -200.0, 800.0, -200.0, 0.0, 0.0, 0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

s32 LizardKong_rooms_map[4][3] = {
    {-1,  1, -1},
    {-1, -1, -1},
    {-1,  0, -1},
    {-1, -1, -1}
};

StageMapData LizardKong_map_data = {
3, 4, LizardKong_room_instances, LizardKong_rooms_map, 
};

LevelScope LizardKong_scope_Lvlscope = {
    0,
    0,
    0,
    -1,
    25000,
    60,
};

StageData LizardKong_header_Lvlhdr = {
    &LizardKong_map_data,
    0,
    &LizardKong_stageModels[0],
    40,
    0,
    LizardKong_rabObjects_Bin,
    131072,
    &LizardKong_spriteLib_Sprlib[0],
    &LizardKong_scope_Lvlscope,
};
Mtx LizardKong_IMtx2 = IDENTITY;

#include "assets/levelGroup/LizardKong/lkScope/lkScope.light.inc.c"

#include "assets/levelGroup/LizardKong/model1/model1.vtx.inc.c"
Mtx LizardKong_IMtx3 = IDENTITY;
unsigned char LizardKong_Pad1[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.png.inc.c"
};
unsigned char LizardKong_Pad2[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/model1/model1.gfx.inc.c"

#include "assets/levelGroup/LizardKong/model2/model2.vtx.inc.c"
Mtx LizardKong_IMtx4 = IDENTITY;

#include "assets/levelGroup/LizardKong/model2/model2.gfx.inc.c"

#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colS.inc.c"

ModelCollision LizardKong_unkCol1_ColH = {
27, 33, &LizardKong_unkCol1_ColV[0], &LizardKong_unkCol1_ColT[0], &LizardKong_unkCol1_ColS
};

#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colS.inc.c"

ModelCollision LizardKong_unkCol2_ColH = {
14, 16, &LizardKong_unkCol2_ColV[0], &LizardKong_unkCol2_ColT[0], &LizardKong_unkCol2_ColS
};
Mtx LizardKong_IMtx5 = IDENTITY;

#include "assets/levelGroup/LizardKong/lkScope2/lkScope2.light.inc.c"

#include "assets/levelGroup/LizardKong/a_model1/a_model1.vtx.inc.c"
Mtx LizardKong_IMtx6 = IDENTITY;
unsigned char LizardKong_Pad3[] = FILEPAD;
unsigned char LizardKong_hair1_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/hair1.ci8.png.inc.c"
};
unsigned char LizardKong_Pad4[] = FILEPAD;
unsigned char LizardKong_hair1_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/hair1.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad5[] = FILEPAD;
unsigned char LizardKong_color_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/color.ci4.png.inc.c"
};
unsigned char LizardKong_Pad6[] = FILEPAD;
unsigned char LizardKong_color_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/color.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad7[] = FILEPAD;
unsigned char LizardKong_ear_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/ear.ci4.png.inc.c"
};
unsigned char LizardKong_Pad8[] = FILEPAD;
unsigned char LizardKong_ear_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/ear.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad9[] = FILEPAD;
unsigned char LizardKong_hair2_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/hair2.ci8.png.inc.c"
};
unsigned char LizardKong_Pad10[] = FILEPAD;
unsigned char LizardKong_hair2_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/hair2.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad11[] = FILEPAD;
unsigned char LizardKong_face_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/face.ci4.png.inc.c"
};
unsigned char LizardKong_Pad12[] = FILEPAD;
unsigned char LizardKong_face_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/face.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model1/a_model1.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model2/a_model2.vtx.inc.c"
Mtx LizardKong_IMtx7 = IDENTITY;
unsigned char LizardKong_Pad13[] = FILEPAD;
unsigned char LizardKong_fur_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fur.ci4.png.inc.c"
};
unsigned char LizardKong_Pad14[] = FILEPAD;
unsigned char LizardKong_fur_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fur.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad15[] = FILEPAD;
unsigned char LizardKong_arm_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/arm.ci4.png.inc.c"
};
unsigned char LizardKong_Pad16[] = FILEPAD;
unsigned char LizardKong_arm_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/arm.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model2/a_model2.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model3/a_model3.vtx.inc.c"
Mtx LizardKong_IMtx8 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model3/a_model3.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model4/a_model4.vtx.inc.c"
Mtx LizardKong_IMtx9 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model4/a_model4.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model5/a_model5.vtx.inc.c"
Mtx LizardKong_IMtx10 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model5/a_model5.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model6/a_model6.vtx.inc.c"
Mtx LizardKong_IMtx11 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model6/a_model6.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model7/a_model7.vtx.inc.c"
Mtx LizardKong_IMtx12 = IDENTITY;
unsigned char LizardKong_Pad17[] = FILEPAD;
unsigned char LizardKong_fist1_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist1.ci4.png.inc.c"
};
unsigned char LizardKong_Pad18[] = FILEPAD;
unsigned char LizardKong_fist1_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist1.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad19[] = FILEPAD;
unsigned char LizardKong_fist2_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist2.ci4.png.inc.c"
};
unsigned char LizardKong_Pad20[] = FILEPAD;
unsigned char LizardKong_fist2_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist2.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad21[] = FILEPAD;
unsigned char LizardKong_fist3_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist3.ci4.png.inc.c"
};
unsigned char LizardKong_Pad22[] = FILEPAD;
unsigned char LizardKong_fist3_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist3.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad23[] = FILEPAD;
unsigned char LizardKong_fist4_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist4.ci4.png.inc.c"
};
unsigned char LizardKong_Pad24[] = FILEPAD;
unsigned char LizardKong_fist4_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist4.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model7/a_model7.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model8/a_model8.vtx.inc.c"
Mtx LizardKong_IMtx13 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model8/a_model8.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model9/a_model9.vtx.inc.c"
Mtx LizardKong_IMtx14 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model9/a_model9.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model10/a_model10.vtx.inc.c"
Mtx LizardKong_IMtx15 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model10/a_model10.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model11/a_model11.vtx.inc.c"
Mtx LizardKong_IMtx16 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model11/a_model11.gfx.inc.c"
Mtx LizardKong_IMtx17 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model12/a_model12.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model13/a_model13.vtx.inc.c"
Mtx LizardKong_IMtx18 = IDENTITY;
unsigned char LizardKong_Pad25[] = FILEPAD;
unsigned char LizardKong_boulder_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder.ci8.png.inc.c"
};
unsigned char LizardKong_Pad26[] = FILEPAD;
unsigned char LizardKong_boulder_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad27[] = FILEPAD;
unsigned char LizardKong_boulder2_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder2.ci8.png.inc.c"
};
unsigned char LizardKong_Pad28[] = FILEPAD;
unsigned char LizardKong_boulder2_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder2.ci8.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model13/a_model13.gfx.inc.c"
Mtx LizardKong_IMtx19 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model14/a_model14.gfx.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk4Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk5Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk5.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk5Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk6Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk6.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk6Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk7Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk7.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk7Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk8Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk8.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk8Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk9Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk9.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk9Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk10Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk10.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk10Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk11Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk11.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk11Pointers.animP.inc.c"
