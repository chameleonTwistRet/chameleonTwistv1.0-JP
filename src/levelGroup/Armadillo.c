#include "common.h"
extern unsigned char Global_sandAgain_ci4_PAL[];
extern unsigned char Global_sandAgain_ci4_PNG[];

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
extern Gfx Armadillo_model1_Gfx[];
extern ModelCollision Armadillo_unkCol1_ColH;
extern Gfx Armadillo_model2_Gfx[];
extern ModelCollision Armadillo_unkCol2_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;


Mtx Armadillo_IMtx1 = IDENTITY;

StageModel Armadillo_stageModels[40] = {
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
{&Armadillo_model1_Gfx[0], &Armadillo_unkCol1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Armadillo_model2_Gfx[0], &Armadillo_unkCol2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char Armadillo_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject Armadillo_roomMulti_objects[] = {
    {    {-0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0, 38, -1, 30, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,3300.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  3300.0, 0.0, 45, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,3100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  3100.0, 0.0, 40, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2900.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2900.0, 0.0, 35, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2700.0, 0.0, 30, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2500.0, 0.0, 25, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2300.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2300.0, 0.0, 20, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2100.0, 0.0, 15, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, 24, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,  3, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    { {-0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,    400.0,     0.0, 0.0,  3,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {-0.0,0.0,3600.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor Armadillo_room0_actors[] = {
    {  ARMADILLO, {-0.0,0.0,0.0}, 270.0, -2000.0, 2000.0, -10000.0f, 10000.0, -2000.0, 2000.0, 1, 48.0, 2.0, 100.0, 12.0, 600.0f, 10.0f, 512.0f, 800.0f, 4.0f, 30.0f, 5.0f, 5.0f},
    { ACTOR_NULL,  {0.0,0.0,0.0},   0.0,     0.0,    0.0,         0,     0.0,     0.0,    0.0, 0,  0.0, 0.0,   0.0,  0.0,      0,     0,      0,      0,    0,     0,    0,    0}
};

RoomActor Armadillo_room1_actors[] = {
    {  ARMADILLO, {-0.0,0.0,0.0}, 270.0, -2000.0, 2000.0, -10000.0f, 10000.0, -2000.0, 2000.0, 1, 60.0, 4.0, 150.0, 15.0, 600.0f, 0, 700.0f, 400.0f, 6.0f, 60.0f, 8.0f, 6.0f},
    { ACTOR_NULL,  {0.0,0.0,0.0},   0.0,     0.0,    0.0,         0,     0.0,     0.0,    0.0, 0,  0.0, 0.0,   0.0,  0.0,      0, 0,      0,      0,    0,     0,    0,    0}
};

s32 Armadillo_spriteLib_Sprlib[3][16] = {
{   44,
    45,
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
    0},
{   0,
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
    0},
{   0,
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
    0},
};

RoomInstance Armadillo_room_instances[] = {
    { Armadillo_roomMulti_objects, Armadillo_room0_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 0.0},
    { Armadillo_roomMulti_objects, Armadillo_room1_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 0.0},
    {                           0,                      0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0,    -1.0, 0.0}
};

//??
s32 Armadillo_rooms_map[1][7] = {
    {-1, 1, -2, -1, -2, 0, -1}
};

StageMapData Armadillo_map_data = {
    3, 3, Armadillo_room_instances, Armadillo_rooms_map,
};

RoomInstance Armadillo_ext_room_instances[] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope Armadillo_scope_Lvlscope = {
    0,
    0,
    0,
    255,
    25000,
    60,
};

StageData Armadillo_header_Lvlhdr = {
    &Armadillo_map_data,
    0,
    Armadillo_stageModels,
    40,
    0,
    Armadillo_rabObjects_Bin,
    131072,
    Armadillo_spriteLib_Sprlib,
    &Armadillo_scope_Lvlscope,
};
s32 armadillo_pad[3] = {0, 0, 0};
Mtx Armadillo_IMtx2 = IDENTITY;

Lights1 Armadillo_adScope1_Light =
    #include "assets/levelGroup/Armadillo/adScope1/adScope1.light.inc.c"

Vtx Armadillo_model1_Vtx[] = {
    #include "assets/levelGroup/Armadillo/model1/model1.vtx.inc.c"
};
Mtx Armadillo_IMtx3 = IDENTITY;

Gfx Armadillo_model1_Gfx[] = {
    #include "assets/levelGroup/Armadillo/model1/model1.gfx.inc.c"
};

Vtx Armadillo_model2_Vtx[] = {
    #include "assets/levelGroup/Armadillo/model2/model2.vtx.inc.c"
};
Mtx Armadillo_IMtx4 = IDENTITY;

Gfx Armadillo_model2_Gfx[] = {
    #include "assets/levelGroup/Armadillo/model2/model2.gfx.inc.c"
};

Vec3f Armadillo_unkCol1_ColV[] = {
    #include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colV.inc.c"
};

Vec3w Armadillo_unkCol1_ColT[] = {
    #include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colT.inc.c"
};

Rect3D Armadillo_unkCol1_ColS = {
    #include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colS.inc.c"
};

ModelCollision Armadillo_unkCol1_ColH = {
23, 34, Armadillo_unkCol1_ColV, Armadillo_unkCol1_ColT, &Armadillo_unkCol1_ColS
};

Vec3f Armadillo_unkCol2_ColV[] = {
    #include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colV.inc.c"
};

Vec3w Armadillo_unkCol2_ColT[] = {
    #include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colT.inc.c"
};

Rect3D Armadillo_unkCol2_ColS = {
    #include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colS.inc.c"
};

ModelCollision Armadillo_unkCol2_ColH = {
10, 12, Armadillo_unkCol2_ColV, Armadillo_unkCol2_ColT, &Armadillo_unkCol2_ColS
};
s32 armadillo_pad2[3] = {0, 0, 0};
Mtx Armadillo_IMtx5 = IDENTITY;

Lights1 Armadillo_adScope2_Light =
    #include "assets/levelGroup/Armadillo/adScope2/adScope2.light.inc.c"

Vtx Armadillo_a_model1_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model1/a_model1.vtx.inc.c"
};
Mtx Armadillo_IMtx6 = IDENTITY;
unsigned char Armadillo_Pad1[] = FILEPAD;
unsigned char Armadillo_skin_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/skin.ci8.png.inc.c"
};
unsigned char Armadillo_Pad2[] = FILEPAD;
unsigned char Armadillo_skin_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/skin.ci8.pal.inc.c"
};
unsigned char Armadillo_Pad3[] = FILEPAD;
unsigned char Armadillo_shell_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/shell.ci8.png.inc.c"
};
unsigned char Armadillo_Pad4[] = FILEPAD;
unsigned char Armadillo_shell_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/shell.ci8.pal.inc.c"
};

Gfx Armadillo_a_model1_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model1/a_model1.gfx.inc.c"
};

Vtx Armadillo_a_model2_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model2/a_model2.vtx.inc.c"
};
Mtx Armadillo_IMtx7 = IDENTITY;

Gfx Armadillo_a_model2_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model2/a_model2.gfx.inc.c"
};

Vtx Armadillo_a_model3_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model3/a_model3.vtx.inc.c"
};
Mtx Armadillo_IMtx8 = IDENTITY;

Gfx Armadillo_a_model3_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model3/a_model3.gfx.inc.c"
};

Vtx Armadillo_a_model4_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model4/a_model4.vtx.inc.c"
};
Mtx Armadillo_IMtx9 = IDENTITY;

Gfx Armadillo_a_model4_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model4/a_model4.gfx.inc.c"
};

Vtx Armadillo_a_model5_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model5/a_model5.vtx.inc.c"
};
Mtx Armadillo_IMtx10 = IDENTITY;

Gfx Armadillo_a_model5_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model5/a_model5.gfx.inc.c"
};

Vtx Armadillo_a_model6_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model6/a_model6.vtx.inc.c"
};
Mtx Armadillo_IMtx11 = IDENTITY;

Gfx Armadillo_a_model6_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model6/a_model6.gfx.inc.c"
};

Vtx Armadillo_a_model7_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model7/a_model7.vtx.inc.c"
};
Mtx Armadillo_IMtx12 = IDENTITY;
unsigned char Armadillo_Pad5[] = FILEPAD;
unsigned char Armadillo_face_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/face.ci8.png.inc.c"
};
unsigned char Armadillo_Pad6[] = FILEPAD;
unsigned char Armadillo_face_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/face.ci8.pal.inc.c"
};
unsigned char Armadillo_Pad7[] = FILEPAD;
unsigned char Armadillo_skin2_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2.ci8.png.inc.c"
};
unsigned char Armadillo_Pad8[] = FILEPAD;
unsigned char Armadillo_skin2_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2.ci8.pal.inc.c"
};
unsigned char Armadillo_Pad9[] = FILEPAD;
unsigned char Armadillo_shineThing_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/shineThing.ci8.png.inc.c"
};
unsigned char Armadillo_Pad10[] = FILEPAD;
unsigned char Armadillo_shineThing_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/shineThing.ci8.pal.inc.c"
};

Gfx Armadillo_a_model7_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model7/a_model7.gfx.inc.c"
};

Vtx Armadillo_a_model8_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model8/a_model8.vtx.inc.c"
};
Mtx Armadillo_IMtx13 = IDENTITY;
unsigned char Armadillo_Pad11[] = FILEPAD;
unsigned char Armadillo_foot_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/foot.ci8.png.inc.c"
};
unsigned char Armadillo_Pad12[] = FILEPAD;
unsigned char Armadillo_foot_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/foot.ci8.pal.inc.c"
};

Gfx Armadillo_a_model8_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model8/a_model8.gfx.inc.c"
};

Vtx Armadillo_a_model9_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model9/a_model9.vtx.inc.c"
};
Mtx Armadillo_IMtx14 = IDENTITY;
unsigned char Armadillo_Pad13[] = FILEPAD;
unsigned char Armadillo_skin2Compressed_ci4_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2Compressed.ci4.png.inc.c"
};
unsigned char Armadillo_Pad14[] = FILEPAD;
unsigned char Armadillo_skin2Compressed_ci4_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2Compressed.ci4.pal.inc.c"
};

Gfx Armadillo_a_model9_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model9/a_model9.gfx.inc.c"
};

Vtx Armadillo_a_model10_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model10/a_model10.vtx.inc.c"
};
Mtx Armadillo_IMtx15 = IDENTITY;

Gfx Armadillo_a_model10_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model10/a_model10.gfx.inc.c"
};

Vtx Armadillo_a_model11_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model11/a_model11.vtx.inc.c"
};
Mtx Armadillo_IMtx16 = IDENTITY;

Gfx Armadillo_a_model11_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model11/a_model11.gfx.inc.c"
};

Vtx Armadillo_a_model12_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model12/a_model12.vtx.inc.c"
};
Mtx Armadillo_IMtx17 = IDENTITY;

Gfx Armadillo_a_model12_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model12/a_model12.gfx.inc.c"
};

Vtx Armadillo_a_model13_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model13/a_model13.vtx.inc.c"
};
Mtx Armadillo_IMtx18 = IDENTITY;

Gfx Armadillo_a_model13_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model13/a_model13.gfx.inc.c"
};

Vtx Armadillo_a_model14_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model14/a_model14.vtx.inc.c"
};
Mtx Armadillo_IMtx19 = IDENTITY;

Gfx Armadillo_a_model14_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model14/a_model14.gfx.inc.c"
};

Vtx Armadillo_a_model15_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model15/a_model15.vtx.inc.c"
};
Mtx Armadillo_IMtx20 = IDENTITY;

Gfx Armadillo_a_model15_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model15/a_model15.gfx.inc.c"
};

Vtx Armadillo_a_model16_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model16/a_model16.vtx.inc.c"
};
Mtx Armadillo_IMtx21 = IDENTITY;

Gfx Armadillo_a_model16_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model16/a_model16.gfx.inc.c"
};

Vtx Armadillo_a_model17_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model17/a_model17.vtx.inc.c"
};
Mtx Armadillo_IMtx22 = IDENTITY;

Gfx Armadillo_a_model17_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model17/a_model17.gfx.inc.c"
};

Vtx Armadillo_a_model18_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model18/a_model18.vtx.inc.c"
};
Mtx Armadillo_IMtx23 = IDENTITY;

Gfx Armadillo_a_model18_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model18/a_model18.gfx.inc.c"
};

Vtx Armadillo_a_model19_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model19/a_model19.vtx.inc.c"
};
Mtx Armadillo_IMtx24 = IDENTITY;

Gfx Armadillo_a_model19_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model19/a_model19.gfx.inc.c"
};

Vtx Armadillo_a_model20_Vtx[] = {
    #include "assets/levelGroup/Armadillo/a_model20/a_model20.vtx.inc.c"
};
Mtx Armadillo_IMtx25 = IDENTITY;

Gfx Armadillo_a_model20_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model20/a_model20.gfx.inc.c"
};
Mtx Armadillo_IMtx26 = IDENTITY;

Gfx Armadillo_a_model21_Gfx[] = {
    #include "assets/levelGroup/Armadillo/a_model21/a_model21.gfx.inc.c"
};

Anim Armadillo_unk1Header_Animh = {
    #include "assets/levelGroup/Armadillo/anim/unk1Header.animH.inc.c"
};

Mtx Armadillo_unk1_Animarr[25][20] = {
    #include "assets/levelGroup/Armadillo/anim/unk1.animArr.inc.c"
};

Anim Armadillo_unk2Header_Animh = {
    #include "assets/levelGroup/Armadillo/anim/unk2Header.animH.inc.c"
};

Mtx Armadillo_unk2_Animarr[21][20] = {
    #include "assets/levelGroup/Armadillo/anim/unk2.animArr.inc.c"
};

AnimPointer Armadillo_unk1Pointers_Animp[1] = {
{&Armadillo_unk1Header_Animh.frames, &Armadillo_unk1Header_Animh.objects, &Armadillo_unk1_Animarr[0][0]}
};

AnimPointer Armadillo_unk2Pointers_Animp[1] = {
{&Armadillo_unk2Header_Animh.frames, &Armadillo_unk2Header_Animh.objects, &Armadillo_unk2_Animarr[0][0]}
};

Anim Armadillo_unk3Header_Animh = {
    #include "assets/levelGroup/Armadillo/anim/unk3Header.animH.inc.c"
};

Mtx Armadillo_unk3_Animarr[10][20] = {
    #include "assets/levelGroup/Armadillo/anim/unk3.animArr.inc.c"
};

AnimPointer Armadillo_unk3Pointers_Animp[1] = {
{&Armadillo_unk3Header_Animh.frames, &Armadillo_unk3Header_Animh.objects, &Armadillo_unk3_Animarr[0][0]}
};

Anim Armadillo_unk4Header_Animh = {
    #include "assets/levelGroup/Armadillo/anim/unk4Header.animH.inc.c"
};

Mtx Armadillo_unk4_Animarr[10][20] = {
    #include "assets/levelGroup/Armadillo/anim/unk4.animArr.inc.c"
};

AnimPointer Armadillo_unk4Pointers_Animp[1] = {
{&Armadillo_unk4Header_Animh.frames, &Armadillo_unk4Header_Animh.objects, &Armadillo_unk4_Animarr[0][0]}
};

Anim Armadillo_unk5Header_Animh = {
    #include "assets/levelGroup/Armadillo/anim/unk5Header.animH.inc.c"
};

Mtx Armadillo_unk5_Animarr[15][20] = {
    #include "assets/levelGroup/Armadillo/anim/unk5.animArr.inc.c"
};

AnimPointer Armadillo_unk5Pointers_Animp[1] = {
{&Armadillo_unk5Header_Animh.frames, &Armadillo_unk5Header_Animh.objects, &Armadillo_unk5_Animarr[0][0]}
};

Anim Armadillo_unk6Header_Animh = {
    #include "assets/levelGroup/Armadillo/anim/unk6Header.animH.inc.c"
};

Mtx Armadillo_unk6_Animarr[15][20] = {
    #include "assets/levelGroup/Armadillo/anim/unk6.animArr.inc.c"
};

AnimPointer Armadillo_unk6Pointers_Animp[1] = {
{&Armadillo_unk6Header_Animh.frames, &Armadillo_unk6Header_Animh.objects, &Armadillo_unk6_Animarr[0][0]}
};
