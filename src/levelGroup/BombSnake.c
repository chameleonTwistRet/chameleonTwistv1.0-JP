#include "common.h"

extern unsigned char Global_hexComb_i4_PNG[];
extern unsigned char Global_fraMEd_ia4_PNG[];
extern unsigned char Global_hexCombFade_i8_PNG[];

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
extern Gfx BombSnake_arenaWalls_Gfx[];
extern ModelCollision BombSnakeBossStage_walls_collision;
extern Gfx BombSnake_arenaFloor_Gfx[];
extern ModelCollision BombSnakeBossStage_floor_collision;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;

Mtx BombSnake_IMtx1 = IDENTITY;

enum BombSnakeBossStageModels {
    G_FALLBACK_CUBE_MODEL = 0,
    G_EXIT_SHADOW_SOUTH_MODEL = 1,
    G_EXIT_SHADOW_NORTH_MODEL = 2,
    G_EXIT_SHADOW_EAST_MODEL = 3,
    G_EXIT_SHADOW_WEST_MODEL = 4,
    G_BL_EXIT_MODEL = 5,
    G_SANDPIT_MODEL = 6,
    G_BOSS_BRIDGE_MODEL = 7,
    G_POLE_MODEL = 8,
    G_BL_DOOR_MODEL = 9,
    G_SPIN_DOOR_MODEL = 10,
    G_BL_LAVA_FLOOR_MODEL = 11,
    G_BL_LAVA_MODEL = 12,
    G_BL_LAVA2_MODEL = 13,
    G_BL_LAVA3_MODEL = 14,
    G_BL_LAVA4_MODEL = 15,
    G_BL_LAVA5_MODEL = 16,
    G_BL_LAVA6_MODEL = 17,
    G_BL_LAVA7_MODEL = 18,
    G_BL_LAVA8_MODEL = 19,
    G_BL_DESTRUCTABLE_TOP_MODEL = 20,
    G_BL_METAL_BRIDGE_MODEL = 21,
    G_KL_EXIT_MODEL = 22,
    G_KL_DOOR_MODEL = 23,
    G_DC_EXIT_MODEL = 24,
    G_TALL_EXIT_SHADOW1_MODEL = 25,
    G_TALL_EXIT_SHADOW2_MODEL = 26,
    G_GC_EXIT1_MODEL = 27,
    G_GC_EXIT2_MODEL = 28,
    G_TRAINING_ROOM_LIGHT_MODEL = 29,
    G_JL_CAVE_EXIT1_MODEL = 30,
    G_JL_CAVE_EXIT2_MODEL = 31,
    G_JL_CAVE_EXIT3_MODEL = 32,
    G_JL_CAVE_EXIT4_MODEL = 33,
    G_JL_OUTSIDE_ENTRANCE_MODEL = 34,
    G_JL_FX_CAM_PILLAR_MODEL = 35,
    G_JL_CAVE_DOOR_MODEL = 36,
    BS_WALLS_MODEL = 37,
    BS_FLOOR_MODEL = 38,
    BS_POLE_MODEL = 39
};

StageModel  BombSnakeBossStage_stageModels[] = {
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
    {&BombSnake_arenaWalls_Gfx[0], &BombSnakeBossStage_walls_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombSnake_arenaFloor_Gfx[0], &BombSnakeBossStage_floor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

#include "build/assets/levelGroup/BombSnake/rabObjects.inc.c"

RoomObject BombSnakeBossStage_room0_objects[13] = {
    {{0.0,0.0,0.0}, {40.0,1.0,40.0}, 0, 0, 7, 23, 0.0, 0.0, 0.0, 0.0, 50333868, 5, 6, 50365568, 50365968, 0, G_BL_LAVA_FLOOR_MODEL, -1, 30, -1, NULL, NULL, -2146718652, 0, 2, 4, 4, 0, -1, 0, 0},
    {{-3300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 5, -3300.0, -20000.0, 0.0, 0.0, 15, 300, -2, 0, 0, 0, G_BL_METAL_BRIDGE_MODEL, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-3100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 5, -3100.0, -20000.0, 0.0, 0.0, 20, 300, -2, 0, 0, 0, G_BL_METAL_BRIDGE_MODEL, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-2900.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 5, -2900.0, -20000.0, 0.0, 0.0, 25, 300, -2, 0, 0, 0, G_BL_METAL_BRIDGE_MODEL, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 5, -2700.0, -20000.0, 0.0, 0.0, 30, 300, -2, 0, 0, 0, G_BL_METAL_BRIDGE_MODEL, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-2500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 5, -2500.0, -20000.0, 0.0, 0.0, 35, 300, -2, 0, 0, 0, G_BL_METAL_BRIDGE_MODEL, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-2300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 5, -2300.0, -20000.0, 0.0, 0.0, 40, 300, -2, 0, 0, 0, G_BL_METAL_BRIDGE_MODEL, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-2100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 5, -2100.0, -20000.0, 0.0, 0.0, 45, 300, -2, 0, 0, 0, G_BL_METAL_BRIDGE_MODEL, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.1, 1.2, 0.0, 0.0, 0, 0, 0, 0, 0, 0, BS_WALLS_MODEL, -1, -1, -1, &func_800B09C0, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{0.0,-100.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, BS_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-3600.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, G_FALLBACK_CUBE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {{-3600.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_FALLBACK_CUBE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_FALLBACK_CUBE_MODEL, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor BombSnakeBossStage_room0_actors[2] = {
    {BL_BOSS_SEGMENT, {-5000.0,0.0,-1800.0}, 270.0, -2000.0, 2000.0, 0, 50.0, -2000.0, 2000.0, 0, 13.0, 5.0, 100.0, 20.0, 1082130432, 1109393408, 1119092736, 1101004800, 0, -1082130432, 1120403456, 1114636288},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor BombSnakeBossStage_room1_actors[2] = {
    {BL_BOSS_SEGMENT, {-5000.0,0.0,-1800.0}, 270.0, -2000.0, 2000.0, 0, 50.0, -2000.0, 2000.0, 0, 20.0, 8.0, 120.0, 22.0, 1084227584, 1112014848, 1125515264, 1102053376, 0, -1082130432, 1114636288, 1113325568},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

#include "assets/levelGroup/BombSnake/spriteLib.sprLib.inc.c"

RoomInstance BombSnakeBossStage_rooms[] = {
    {BombSnakeBossStage_room0_objects, BombSnakeBossStage_room0_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 180.0},
    {BombSnakeBossStage_room0_objects, BombSnakeBossStage_room1_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 180.0},
    {0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
};

s32 BombSnakeBossStage_rooms_map[1][3] = {
    -1, 0, -1, 
};

StageMapData BombSnakeBossStage_map_data = {
    3, 1, BombSnakeBossStage_rooms, BombSnakeBossStage_rooms_map, 
};

#include "assets/levelGroup/BombSnake/nullOWRoom.rmSet.inc.c"

LevelScope BombSnake_scope_Lvlscope = {
    0,
    0,
    0,
    255,
    25000,
    60,
};

StageData BombSnakeBossStage_stageData = {
    &BombSnakeBossStage_map_data,
    0,
    BombSnakeBossStage_stageModels,
    40,         // Number of models             
    0,
    50333632,
    131072,
    &BombSnake_spriteLib_Sprlib[0],
    &BombSnake_scope_Lvlscope,
};

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

Vec3f BombSnakeBossStage_walls_collision_verts[] = {
    {-3400.0, 150.0, 3400.0},
    {-3400.0, 150.0, 200.0},
    {-3400.0, 1000.0, -3400.0},
    {-3400.0, 1000.0, 3400.0},
    {-3400.0, 300.0, 200.0},
    {-3400.0, 150.0, -3400.0},
    {-3400.0, 150.0, -200.0},
    {-3400.0, 300.0, -200.0},
    {3400.0, -400.0, -3400.0},
    {3400.0, 1000.0, -3400.0},
    {3400.0, 0.0, -3400.0},
    {-3400.0, -400.0, -3400.0},
    {3400.0, -400.0, 3400.0},
    {-3400.0, -400.0, 3400.0},
    {3400.0, 1000.0, 3400.0},
    {3400.0, 0.0, 3400.0},
    {-3400.0, 0.0, -200.0},
    {-3400.0, 0.0, 200.0},
};

Vec3w BombSnakeBossStage_walls_collision_tris[] = {
    {3, 0, 4},
    {1, 4, 0},
    {2, 7, 5},
    {2, 3, 7},
    {4, 7, 3},
    {7, 6, 5},
    {2, 5, 9},
    {8, 10, 11},
    {10, 9, 5},
    {5, 11, 10},
    {3, 14, 0},
    {15, 12, 0},
    {13, 0, 12},
    {15, 0, 14},
    {8, 12, 10},
    {10, 15, 9},
    {15, 10, 12},
    {14, 9, 15},
    {5, 16, 11},
    {6, 16, 5},
    {13, 11, 17},
    {16, 17, 11},
    {17, 1, 0},
    {0, 13, 17},
};

Rect3D BombSnakeBossStage_walls_collision_bounds = {
    {-3400.0, -400.0, -3400.0},
    {3400.0, 1000.0, 3400.0}
};

ModelCollision BombSnakeBossStage_walls_collision = {
    18, 24, BombSnakeBossStage_walls_collision_verts, BombSnakeBossStage_walls_collision_tris, &BombSnakeBossStage_walls_collision_bounds
};

Vec3f BombSnakeBossStage_floor_collision_verts[] = {
    {-200.0, -10.0, 200.0},
    {-200.0, -10.0, -200.0},
    {-210.0, 0.0, 210.0},
    {-200.0, 10.0, 200.0},
    {-210.0, 0.0, -210.0},
    {-200.0, 10.0, -200.0},
    {200.0, 10.0, -200.0},
    {210.0, 0.0, -210.0},
    {200.0, -10.0, -200.0},
    {210.0, 0.0, 210.0},
    {200.0, -10.0, 200.0},
    {200.0, 10.0, 200.0},
};

Vec3w BombSnakeBossStage_floor_collision_tris[] = {
    {0, 2, 1},
    {4, 1, 2},
    {2, 3, 4},
    {5, 4, 3},
    {7, 5, 6},
    {4, 5, 7},
    {7, 8, 4},
    {1, 4, 8},
    {9, 11, 2},
    {9, 2, 10},
    {0, 10, 2},
    {3, 2, 11},
    {6, 11, 7},
    {9, 7, 11},
    {7, 9, 8},
    {10, 8, 9},
};

Rect3D BombSnakeBossStage_floor_collision_bounds = {
    {-210.0, -10.0, -210.0},{210.0, 10.0, 210.0}
};

ModelCollision BombSnakeBossStage_floor_collision = {
    12, 16, BombSnakeBossStage_floor_collision_verts, BombSnakeBossStage_floor_collision_tris, &BombSnakeBossStage_floor_collision_bounds
};


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

//Unsure on this, but the VRAM_END of this segment suggest this is correct
char SomeBSS[0x320];
