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
extern ModelCollision BombSnake_arenaWalls_ColH;
extern Gfx BombSnake_arenaFloor_Gfx[];
extern ModelCollision BombSnake_arenaFloor_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;

Mtx BombSnake_IMtx1 = IDENTITY;

StageModel BombSnake_stageModels[40] = {
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
{&BombSnake_arenaWalls_Gfx[0], &BombSnake_arenaWalls_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BombSnake_arenaFloor_Gfx[0], &BombSnake_arenaFloor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char BombSnake_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x03, 0x00, 0x07, 0xEC, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x07, 0xE8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x02, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x07, 0xE8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0A, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x07, 0xEC, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x01, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x08, 0x84, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x08, 0xA4, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x08, 0x88, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x01, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x08, 0x98, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01
};

RoomObject BombSnake_room0_objects[13] = {
{{0.0,0.0,0.0}, {40.0,1.0,40.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 23, 0.0, 0.0, 0.0, 0.0, 50333868, 5, 6, 50365568, 50365968, 0, 11, -1, 30, -1, NULL, NULL, -2146718652, 0, 2, 4, 4, 0, -1, 0, 0},
{{-3300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -3300.0, -20000.0, 0.0, 0.0, 15, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-3100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -3100.0, -20000.0, 0.0, 0.0, 20, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2900.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2900.0, -20000.0, 0.0, 0.0, 25, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2700.0, -20000.0, 0.0, 0.0, 30, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2500.0, -20000.0, 0.0, 0.0, 35, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2300.0, -20000.0, 0.0, 0.0, 40, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 5, -2100.0, -20000.0, 0.0, 0.0, 45, 300, -2, 0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.10000000149011612, 1.2000000476837158, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 37, -1, -1, -1, &func_800B09C0, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{0.0,-100.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 38, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-3600.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-3600.0,0.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor BombSnake_room0_actors[2] = {
{BL_BOSS_SEGMENT, {-5000.0,0.0,-1800.0}, 270.0, -2000.0, 2000.0, 0, 50.0, -2000.0, 2000.0, 0, 13.0, 5.0, 100.0, 20.0, 1082130432, 1109393408, 1119092736, 1101004800, 0, -1082130432, 1120403456, 1114636288},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor BombSnake_room1_actors[2] = {
{BL_BOSS_SEGMENT, {-5000.0,0.0,-1800.0}, 270.0, -2000.0, 2000.0, 0, 50.0, -2000.0, 2000.0, 0, 20.0, 8.0, 120.0, 22.0, 1084227584, 1112014848, 1125515264, 1102053376, 0, -1082130432, 1114636288, 1113325568},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

s32 BombSnake_spriteLib_Sprlib[] = {
    211,
    36,
    43,
    32,
    33,
    34,
    35,
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

RoomInstance BombSnake_room_instances[3] = {
{BombSnake_room0_objects,BombSnake_room0_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 180.0},
{BombSnake_room0_objects,BombSnake_room1_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 180.0},
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

s32 BombSnake_rooms_map[3] = {
-1, 0, -1, 
};

StageMapData BombSnake_map_data = {
3, 1, BombSnake_room_instances, BombSnake_rooms_map, 
};

RoomInstance BombSnake_ext_room_instances[1] = {
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope BombSnake_scope_Lvlscope = {
    0,
    0,
    0,
    255,
    25000,
    60,
};

StageData BombSnake_header_Lvlhdr = {
    &BombSnake_map_data,
    0,
    &BombSnake_stageModels[0],
    40,
    0,
    BombSnake_rabObjects_Bin,
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

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colV.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colT.inc.c"

#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colS.inc.c"

ModelCollision BombSnake_arenaWalls_ColH = {
18, 24, &BombSnake_arenaWalls_ColV[0], &BombSnake_arenaWalls_ColT[0], &BombSnake_arenaWalls_ColS
};

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colV.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colT.inc.c"

#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colS.inc.c"

ModelCollision BombSnake_arenaFloor_ColH = {
12, 16, &BombSnake_arenaFloor_ColV[0], &BombSnake_arenaFloor_ColT[0], &BombSnake_arenaFloor_ColS
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

char SomeBSS[0x320];
