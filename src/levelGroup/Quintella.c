#include "common.h"

extern unsigned char Global_antMural4_i4_PNG[];
extern unsigned char Global_yellowBrickWall_ci4_PAL[];
extern unsigned char Global_yellowBrickWall_ci4_PNG[];
extern unsigned char Global_antMural3_i4_PNG[];
extern unsigned char Global_antMural2_i4_PNG[];
extern unsigned char Global_bigBrickWall_i4_PNG[];
extern unsigned char Global_antMural1_i4_PNG[];

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
extern Gfx Quintella_model1_Gfx[];
extern ModelCollision Quintella_unkCol1_ColH;
extern Gfx Quintella_model2_Gfx[];
extern ModelCollision Quintella_unkCol2_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;


Mtx Quintella_IMtx1 = IDENTITY;

StageModel Quintella_stageModels[40] = {
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
{&Quintella_model1_Gfx[0], &Quintella_unkCol1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Quintella_model2_Gfx[0], &Quintella_unkCol2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char Quintella_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

s32 Quintella_spriteLib_Sprlib[] = {
    14,
    226,
    227,
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
    14,
    226,
    227,
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

Collectable Quintella_roomUnk_collectables[7] = {
{R_HEART, {150.0,0.0,-1405.0}, 4294967295, 0, 0, 0},
{R_HEART, {-150.0,0.0,-1405.0}, 4294967295, 0, 0, 0},
{R_HEART, {-1304.0,0.0,-304.0}, 4294967295, 0, 0, 0},
{R_HEART, {-100.0,0.0,1384.0}, 4294967295, 0, 0, 0},
{R_HEART, {100.0,0.0,1384.0}, 4294967295, 0, 0, 0},
{R_HEART, {1385.0,0.0,29.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject Quintella_roomMulti_objects[14] = {
{{0.0,0.0,-2800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, -20000.0, -2400.0, 0.0, 15, 300, -2, 0, 0, 0, 7, -1, -1, 16, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, -20000.0, -2400.0, 0.0, 20, 300, -2, 0, 0, 0, 7, -1, -1, 16, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,-2400.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, -20000.0, -2400.0, 0.0, 25, 300, -2, 0, 0, 0, 7, -1, -1, 16, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,-2200.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, -20000.0, -2200.0, 0.0, 30, 300, -2, 0, 0, 0, 7, -1, -1, 16, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,-2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, -20000.0, -2000.0, 0.0, 35, 300, -2, 0, 0, 0, 7, -1, -1, 16, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,-1800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, -20000.0, -1800.0, 0.0, 40, 300, -2, 0, 0, 0, 7, -1, -1, 16, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, -20000.0, -1600.0, 0.0, 45, 300, -2, 0, 0, 0, 7, -1, -1, 16, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 38, -1, 16, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{0.0,-6000.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, 0.0, 0.0, 0.0, 0.0, 0, 300, -1, 0, 0, 0, 8, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
{{0.0,0.0,-3100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
{{0.0,0.0,-3100.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor Quintella_room0_actors[2] = {
{ANT_QUEEN, {0.0,0.0,400.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 0, 0.0, 0.0, 0.0, 10.0, 2.0f, 0, 0, 0, 12.0f, 5.0f, 5.0f, 8.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor Quintella_room1_actors[2] = {
{ANT_QUEEN, {0.0,0.0,400.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 0, 0.20000000298023224, 0.0, 0.0, 14.0, 3.0f, 0, 0, 0, 60.0f, 5.0f, 5.0f, 4.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomInstance Quintella_room_instances[3] = {
{Quintella_roomMulti_objects,Quintella_room0_actors, 0, 0, 1, 1, 0, 7, 31, 0, 0.0, 5, 1500.0, 800.0, -1500.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
{Quintella_roomMulti_objects,Quintella_room1_actors, 0, 0, 1, 1, 0, 7, 31, 0, 0.0, 5, 1500.0, 800.0, -1500.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

s32 Quintella_rooms_map[1][3] = {
    {-1, 0, -1}, 
};

StageMapData Quintella_map_data = {
3, 1, Quintella_room_instances, Quintella_rooms_map, 
};

RoomInstance Quintella_ext_room_instances[1] = {
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope Quintella_scope_Lvlscope = {
    0,
    0,
    0,
    -1,
    25000,
    60,
};

StageData Quintella_header_Lvlhdr = {
    &Quintella_map_data,
    0,
    &Quintella_stageModels[0],
    40,
    0,
    Quintella_rabObjects_Bin,
    131072,
    &Quintella_spriteLib_Sprlib[0],
    &Quintella_scope_Lvlscope,
};
s32 alignment_Quintella[2] = {0, 0};
Mtx Quintella_IMtx2 = IDENTITY;

#include "assets/levelGroup/Quintella/qtScope/qtScope.light.inc.c"

#include "assets/levelGroup/Quintella/model1/model1.vtx.inc.c"
Mtx Quintella_IMtx3 = IDENTITY;
unsigned char Quintella_Pad1[] = FILEPAD;
unsigned char Quintella_mural_i4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/mural.i4.png.inc.c"
};
unsigned char Quintella_Pad2[] = FILEPAD;
unsigned char Quintella_wallFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/wallFade.ci8.png.inc.c"
};
unsigned char Quintella_Pad3[] = FILEPAD;
unsigned char Quintella_wallFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/wallFade.ci8.pal.inc.c"
};

#include "assets/levelGroup/Quintella/model1/model1.gfx.inc.c"

#include "assets/levelGroup/Quintella/model2/model2.vtx.inc.c"
Mtx Quintella_IMtx4 = IDENTITY;

#include "assets/levelGroup/Quintella/model2/model2.gfx.inc.c"

#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colS.inc.c"

ModelCollision Quintella_unkCol1_ColH = {
34, 60, &Quintella_unkCol1_ColV[0], &Quintella_unkCol1_ColT[0], &Quintella_unkCol1_ColS
};

#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colS.inc.c"

ModelCollision Quintella_unkCol2_ColH = {
17, 24, &Quintella_unkCol2_ColV[0], &Quintella_unkCol2_ColT[0], &Quintella_unkCol2_ColS
};
Mtx Quintella_IMtx5 = IDENTITY;

#include "assets/levelGroup/Quintella/qtScope2/qtScope2.light.inc.c"

#include "assets/levelGroup/Quintella/a_model1/a_model1.vtx.inc.c"
Mtx Quintella_IMtx6 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model1/a_model1.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model2/a_model2.vtx.inc.c"
Mtx Quintella_IMtx7 = IDENTITY;
unsigned char Quintella_Pad4[] = FILEPAD;
unsigned char Quintella_color_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color.ci4.png.inc.c"
};
unsigned char Quintella_Pad5[] = FILEPAD;
unsigned char Quintella_color_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color.ci4.pal.inc.c"
};
unsigned char Quintella_Pad6[] = FILEPAD;
unsigned char Quintella_color2_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color2.ci4.png.inc.c"
};
unsigned char Quintella_Pad7[] = FILEPAD;
unsigned char Quintella_color2_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color2.ci4.pal.inc.c"
};
unsigned char Quintella_Pad8[] = FILEPAD;
unsigned char Quintella_gaster_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/gaster.ci4.png.inc.c"
};
unsigned char Quintella_Pad9[] = FILEPAD;
unsigned char Quintella_gaster_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/gaster.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model2/a_model2.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model3/a_model3.vtx.inc.c"
Mtx Quintella_IMtx8 = IDENTITY;
unsigned char Quintella_Pad10[] = FILEPAD;
unsigned char Quintella_eye_ci8_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/eye.ci8.png.inc.c"
};
unsigned char Quintella_Pad11[] = FILEPAD;
unsigned char Quintella_eye_ci8_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/eye.ci8.pal.inc.c"
};
unsigned char Quintella_Pad12[] = FILEPAD;
unsigned char Quintella_color3_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color3.ci4.png.inc.c"
};
unsigned char Quintella_Pad13[] = FILEPAD;
unsigned char Quintella_color3_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color3.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model3/a_model3.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model4/a_model4.vtx.inc.c"
Mtx Quintella_IMtx9 = IDENTITY;
unsigned char Quintella_Pad14[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.png.inc.c"
};
unsigned char Quintella_Pad15[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model4/a_model4.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model5/a_model5.vtx.inc.c"
Mtx Quintella_IMtx10 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model5/a_model5.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model6/a_model6.vtx.inc.c"
Mtx Quintella_IMtx11 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model6/a_model6.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model7/a_model7.vtx.inc.c"
Mtx Quintella_IMtx12 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model7/a_model7.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model8/a_model8.vtx.inc.c"
Mtx Quintella_IMtx13 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model8/a_model8.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model9/a_model9.vtx.inc.c"
Mtx Quintella_IMtx14 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model9/a_model9.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model10/a_model10.vtx.inc.c"
Mtx Quintella_IMtx15 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model10/a_model10.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model11/a_model11.vtx.inc.c"
Mtx Quintella_IMtx16 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model11/a_model11.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model12/a_model12.vtx.inc.c"
Mtx Quintella_IMtx17 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model12/a_model12.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model13/a_model13.vtx.inc.c"
Mtx Quintella_IMtx18 = IDENTITY;
unsigned char Quintella_Pad16[] = FILEPAD;
unsigned char Quintella_dressTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dressTop.ci4.png.inc.c"
};
unsigned char Quintella_Pad17[] = FILEPAD;
unsigned char Quintella_dressTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/dressTop.ci4.pal.inc.c"
};
unsigned char Quintella_Pad18[] = FILEPAD;
unsigned char Quintella_dressUncompressed_rgba16_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dressUncompressed.rgba16.png.inc.c"
};
unsigned char Quintella_Pad19[] = FILEPAD;
unsigned char Quintella_dress_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dress.ci4.png.inc.c"
};
unsigned char Quintella_Pad20[] = FILEPAD;
unsigned char Quintella_dress_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/dress.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model13/a_model13.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model14/a_model14.vtx.inc.c"
Mtx Quintella_IMtx19 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model14/a_model14.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model15/a_model15.vtx.inc.c"
Mtx Quintella_IMtx20 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model15/a_model15.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model16/a_model16.vtx.inc.c"
Mtx Quintella_IMtx21 = IDENTITY;
unsigned char Quintella_Pad21[] = FILEPAD;
unsigned char Quintella_fan_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.png.inc.c"
};
unsigned char Quintella_Pad22[] = FILEPAD;
unsigned char Quintella_fan_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model16/a_model16.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model17/a_model17.vtx.inc.c"
Mtx Quintella_IMtx22 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model17/a_model17.gfx.inc.c"
Mtx Quintella_IMtx23 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model18/a_model18.gfx.inc.c"

#include "assets/levelGroup/Quintella/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk5Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk5.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk6Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk6.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk7Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk7.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk8Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk8.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk9Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk9.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk10Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk10.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk11Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk11.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk4Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk5Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk6Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk7Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk8Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk9Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk10Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk11Pointers.animP.inc.c"
