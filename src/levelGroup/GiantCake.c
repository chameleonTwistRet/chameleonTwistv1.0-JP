#include "GiantCake.h"

Mtx GiantCake_IMtx1 = IDENTITY;

StageModel GiantCake_stageModels[] = {
#include "global_models.inc.c"
{GiantCake_model1_Gfx, &GiantCake_unkCol1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GiantCake_model2_Gfx, &GiantCake_unkCol2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char GiantCake_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject GiantCake_roomMulti_objects[] = {
    {    {-3300.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  5, -3300.0, -20000.0,     0.0, 0.0, 15, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {-3100.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  5, -3100.0, -20000.0,     0.0, 0.0, 20, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {-2900.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  5, -2900.0, -20000.0,     0.0, 0.0, 25, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {-2700.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  5, -2700.0, -20000.0,     0.0, 0.0, 30, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {-2500.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  5, -2500.0, -20000.0,     0.0, 0.0, 35, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {-2300.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  5, -2300.0, -20000.0,     0.0, 0.0, 40, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {-2100.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  5, -2100.0, -20000.0,     0.0, 0.0, 45, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0, 38, -1, 30, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-3450.0,-400.0,0.0}, {1.0,1.0,0.125}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 11, -3450.0,   -400.0,     0.0, 0.0,  2,  20, -1,   40, 0, 0, 23, -1, -1, 24, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {-3600.0,0.0,0.0},   {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,    400.0,     0.0, 0.0,  4,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {    {-3600.0,0.0,0.0},   {4.0,4.0,4.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},   {0.0,0.0,0.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   0,  0,     0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor GiantCake_room0_actors[] = {
    {  CAKE_BOSS, {0.0,0.0,0.0}, 0.0, -5000.0, 5000.0, -5000.0f, 5000.0, -5000.0, 5000.0, 0, 32.0, 6.0, 24.0, 5.0, -3.0f, 500.0f, 0, 2000.0f, 180.0f, 180.0f, 8.0f, 0},
    { ACTOR_NULL, {0.0,0.0,0.0}, 0.0,     0.0,    0.0,        0,    0.0,     0.0,    0.0, 0,  0.0, 0.0,  0.0, 0.0,     0,      0, 0,       0,      0,      0,    0, 0}
};

RoomActor GiantCake_room1_actors[] = {
    {  CAKE_BOSS, {0.0,0.0,0.0}, 0.0, -5000.0, 5000.0, -5000.0f, 5000.0, -5000.0, 5000.0, 0, 64.0, 4.5, 30.0, 8.0, -6.0f, 500.0f, 0, 2000.0f, 300.0f, 70.0f, 2.0f, 0},
    { ACTOR_NULL, {0.0,0.0,0.0}, 0.0,     0.0,    0.0,        0,    0.0,     0.0,    0.0, 0,  0.0, 0.0,  0.0, 0.0,     0,      0, 0,       0,      0,     0,    0, 0}
};

s32 GiantCake_spriteLib_Sprlib[2][16] = {
{   37,
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
    0},
{   37,
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
    0},
};

RoomInstance GiantCake_room_instances[] = {
    { GiantCake_roomMulti_objects, GiantCake_room0_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 15, 0.0, 0.0, 0.0, 0.0, 0.0, 65.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    { GiantCake_roomMulti_objects, GiantCake_room1_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 15, 0.0, 0.0, 0.0, 0.0, 0.0, 65.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    {                           0,                      0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0,  0, 0.0, 0.0, 0.0, 0.0, 0.0,  0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0,    -1.0,   0.0}
};

s32 GiantCake_rooms_map[3][3] = {
{-1, -1, -1},
{-1,  0, -1},
{-1, -1, -1},
};

StageMapData GiantCake_map_data = {
    3, 3, GiantCake_room_instances, GiantCake_rooms_map,
};

RoomInstance GiantCake_ext_room_instances[] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope GiantCake_scope_Lvlscope = {
    {0.0f, 0.0f, 0.0f},
    255,
    25000,
    60,
};

StageData GiantCake_stageData = {
    &GiantCake_map_data,
    NO_EXT_ROOMS,
    GiantCake_stageModels,
    ARRAY_COUNT(GiantCake_stageModels),
    0,
    GiantCake_rabObjects_Bin,
    131072,
    GiantCake_spriteLib_Sprlib,
    &GiantCake_scope_Lvlscope,
};
Mtx GiantCake_IMtx2 = IDENTITY;

Lights1 GiantCake_gicScope_Light =
    #include "assets/levelGroup/GiantCake/gicScope/gicScope.light.inc.c"

Vtx GiantCake_model1_Vtx[] = {
    #include "assets/levelGroup/GiantCake/model1/model1.vtx.inc.c"
};
Mtx GiantCake_IMtx3 = IDENTITY;

Gfx GiantCake_model1_Gfx[] = {
    #include "assets/levelGroup/GiantCake/model1/model1.gfx.inc.c"
};

Vtx GiantCake_model2_Vtx[] = {
    #include "assets/levelGroup/GiantCake/model2/model2.vtx.inc.c"
};
Mtx GiantCake_IMtx4 = IDENTITY;

Gfx GiantCake_model2_Gfx[] = {
    #include "assets/levelGroup/GiantCake/model2/model2.gfx.inc.c"
};

Vec3f GiantCake_unkCol1_ColVerts[] = {
    #include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colVerts.inc.c"
};

Vec3w GiantCake_unkCol1_ColTris[] = {
    #include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colTris.inc.c"
};

Rect3D GiantCake_unkCol1_BoundBox = {
    #include "assets/levelGroup/GiantCake/unkCol1/unkCol1.boundBox.inc.c"
};

ModelCollision GiantCake_unkCol1_collision = {
    ARRAY_COUNT(GiantCake_unkCol1_ColVerts), ARRAY_COUNT(GiantCake_unkCol1_ColTris), GiantCake_unkCol1_ColVerts, GiantCake_unkCol1_ColTris, &GiantCake_unkCol1_BoundBox
};

Vec3f GiantCake_unkCol2_ColVerts[] = {
    #include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colVerts.inc.c"
};

Vec3w GiantCake_unkCol2_ColTris[] = {
    #include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colTris.inc.c"
};

Rect3D GiantCake_unkCol2_BoundBox = {
    #include "assets/levelGroup/GiantCake/unkCol2/unkCol2.boundBox.inc.c"
};

ModelCollision GiantCake_unkCol2_collision = {
    ARRAY_COUNT(GiantCake_unkCol2_ColVerts), ARRAY_COUNT(GiantCake_unkCol2_ColTris), GiantCake_unkCol2_ColVerts, GiantCake_unkCol2_ColTris, &GiantCake_unkCol2_BoundBox
};
Mtx GiantCake_IMtx5 = IDENTITY;

Lights1 GiantCake_gicScope2_Light =
    #include "assets/levelGroup/GiantCake/gicScope2/gicScope2.light.inc.c"

Vtx GiantCake_CakeWithNoStrawberries_Cream_2Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_2Oclock/CakeWithNoStrawberries_Cream_2Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx6 = IDENTITY;
unsigned char GiantCake_Pad1[] = FILEPAD;
unsigned char GiantCake_frosting_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting.ci8.png.inc.c"
};
unsigned char GiantCake_Pad2[] = FILEPAD;
unsigned char GiantCake_frosting_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting.ci8.pal.inc.c"
};

Gfx GiantCake_CakeWithNoStrawberries_Cream_2Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_2Oclock/CakeWithNoStrawberries_Cream_2Oclock.gfx.inc.c"
};

Vtx GiantCake_CakeWithNoStrawberries_Cream_8Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_8Oclock/CakeWithNoStrawberries_Cream_8Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx7 = IDENTITY;

Gfx GiantCake_CakeWithNoStrawberries_Cream_8Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_8Oclock/CakeWithNoStrawberries_Cream_8Oclock.gfx.inc.c"
};

Vtx GiantCake_CakeWithNoStrawberries_Cream_10Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_10Oclock/CakeWithNoStrawberries_Cream_10Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx8 = IDENTITY;

Gfx GiantCake_CakeWithNoStrawberries_Cream_10Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_10Oclock/CakeWithNoStrawberries_Cream_10Oclock.gfx.inc.c"
};

Vtx GiantCake_CakeWithNoStrawberries_Cream_4Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_4Oclock/CakeWithNoStrawberries_Cream_4Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx9 = IDENTITY;

Gfx GiantCake_CakeWithNoStrawberries_Cream_4Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_4Oclock/CakeWithNoStrawberries_Cream_4Oclock.gfx.inc.c"
};

Vtx GiantCake_CakeWithNoStrawberries_Cream_12Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_12Oclock/CakeWithNoStrawberries_Cream_12Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx10 = IDENTITY;

Gfx GiantCake_CakeWithNoStrawberries_Cream_12Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_12Oclock/CakeWithNoStrawberries_Cream_12Oclock.gfx.inc.c"
};

Vtx GiantCake_CakeWithNoStrawberries_Cream_6Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_6Oclock/CakeWithNoStrawberries_Cream_6Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx11 = IDENTITY;

Gfx GiantCake_CakeWithNoStrawberries_Cream_6Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Cream_6Oclock/CakeWithNoStrawberries_Cream_6Oclock.gfx.inc.c"
};

Vtx GiantCake_CakeWithNoStrawberries_Frosting_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Frosting/CakeWithNoStrawberries_Frosting.vtx.inc.c"
};
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

Gfx GiantCake_CakeWithNoStrawberries_Frosting_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_Frosting/CakeWithNoStrawberries_Frosting.gfx.inc.c"
};

Vtx GiantCake_CakeWithNoStrawberries_BottomSponge_Vtx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_BottomSponge/CakeWithNoStrawberries_BottomSponge.vtx.inc.c"
};
Mtx GiantCake_IMtx13 = IDENTITY;
unsigned char GiantCake_Pad7[] = FILEPAD;
unsigned char GiantCake_base_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/base.ci8.png.inc.c"
};
unsigned char GiantCake_Pad8[] = FILEPAD;
unsigned char GiantCake_base_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/base.ci8.pal.inc.c"
};

Gfx GiantCake_CakeWithNoStrawberries_BottomSponge_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberries_BottomSponge/CakeWithNoStrawberries_BottomSponge.gfx.inc.c"
};
Mtx GiantCake_IMtx14 = IDENTITY;

Gfx GiantCake_CakeWithNoStrawberriesModel_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeWithNoStrawberriesModel/CakeWithNoStrawberriesModel.gfx.inc.c"
};

Vtx GiantCake_WalkingWheel_Axle_Vtx[] = {
    #include "assets/levelGroup/GiantCake/WalkingWheel_Axle/WalkingWheel_Axle.vtx.inc.c"
};
Mtx GiantCake_IMtx15 = IDENTITY;
unsigned char GiantCake_Pad9[] = FILEPAD;
unsigned char GiantCake_crank_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/crank.ci8.png.inc.c"
};
unsigned char GiantCake_Pad10[] = FILEPAD;
unsigned char GiantCake_crank_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/crank.ci8.pal.inc.c"
};

Gfx GiantCake_WalkingWheel_Axle_Gfx[] = {
    #include "assets/levelGroup/GiantCake/WalkingWheel_Axle/WalkingWheel_Axle.gfx.inc.c"
};

Vtx GiantCake_WalkingWheel_SweepArmOne_Vtx[] = {
    #include "assets/levelGroup/GiantCake/WalkingWheel_SweepArmOne/WalkingWheel_SweepArmOne.vtx.inc.c"
};
Mtx GiantCake_IMtx16 = IDENTITY;

Gfx GiantCake_WalkingWheel_SweepArmOne_Gfx[] = {
    #include "assets/levelGroup/GiantCake/WalkingWheel_SweepArmOne/WalkingWheel_SweepArmOne.gfx.inc.c"
};

Vtx GiantCake_WalkingWheel_SweepArmTwo_Vtx[] = {
    #include "assets/levelGroup/GiantCake/WalkingWheel_SweepArmTwo/WalkingWheel_SweepArmTwo.vtx.inc.c"
};
Mtx GiantCake_IMtx17 = IDENTITY;

Gfx GiantCake_WalkingWheel_SweepArmTwo_Gfx[] = {
    #include "assets/levelGroup/GiantCake/WalkingWheel_SweepArmTwo/WalkingWheel_SweepArmTwo.gfx.inc.c"
};
Mtx GiantCake_IMtx18 = IDENTITY;

Gfx GiantCake_WalkingWheelModel_Gfx[] = {
    #include "assets/levelGroup/GiantCake/WalkingWheelModel/WalkingWheelModel.gfx.inc.c"
};

Vtx GiantCake_Strawberry_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry/Strawberry.vtx.inc.c"
};
Mtx GiantCake_IMtx19 = IDENTITY;
unsigned char GiantCake_Pad11[] = FILEPAD;
unsigned char GiantCake_strawberry_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/strawberry.ci8.png.inc.c"
};
unsigned char GiantCake_Pad12[] = FILEPAD;
unsigned char GiantCake_strawberry_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/strawberry.ci8.pal.inc.c"
};

Gfx GiantCake_Strawberry_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry/Strawberry.gfx.inc.c"
};
Mtx GiantCake_IMtx20 = IDENTITY;

Gfx GiantCake_StrawberryModel_Gfx[] = {
    #include "assets/levelGroup/GiantCake/StrawberryModel/StrawberryModel.gfx.inc.c"
};

Vtx GiantCake_Cream_8Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Cream_8Oclock/Cream_8Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx21 = IDENTITY;

Gfx GiantCake_Cream_8Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Cream_8Oclock/Cream_8Oclock.gfx.inc.c"
};

Vtx GiantCake_Cream_2Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Cream_2Oclock/Cream_2Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx22 = IDENTITY;

Gfx GiantCake_Cream_2Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Cream_2Oclock/Cream_2Oclock.gfx.inc.c"
};

Vtx GiantCake_Cream_4Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Cream_4Oclock/Cream_4Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx23 = IDENTITY;

Gfx GiantCake_Cream_4Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Cream_4Oclock/Cream_4Oclock.gfx.inc.c"
};

Vtx GiantCake_Cream_10Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Cream_10Oclock/Cream_10Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx24 = IDENTITY;

Gfx GiantCake_Cream_10Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Cream_10Oclock/Cream_10Oclock.gfx.inc.c"
};

Vtx GiantCake_Cream_6Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Cream_6Oclock/Cream_6Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx25 = IDENTITY;

Gfx GiantCake_Cream_6Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Cream_6Oclock/Cream_6Oclock.gfx.inc.c"
};

Vtx GiantCake_Cream_12Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Cream_12Oclock/Cream_12Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx26 = IDENTITY;

Gfx GiantCake_Cream_12Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Cream_12Oclock/Cream_12Oclock.gfx.inc.c"
};

Vtx GiantCake_Frosting_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Frosting/Frosting.vtx.inc.c"
};
Mtx GiantCake_IMtx27 = IDENTITY;

Gfx GiantCake_Frosting_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Frosting/Frosting.gfx.inc.c"
};

Vtx GiantCake_BottomSponge_Vtx[] = {
    #include "assets/levelGroup/GiantCake/BottomSponge/BottomSponge.vtx.inc.c"
};
Mtx GiantCake_IMtx28 = IDENTITY;
unsigned char GiantCake_Pad13[] = FILEPAD;
unsigned char GiantCake_color_ci4_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/color.ci4.png.inc.c"
};
unsigned char GiantCake_Pad14[] = FILEPAD;
unsigned char GiantCake_color_ci4_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/color.ci4.pal.inc.c"
};

Gfx GiantCake_BottomSponge_Gfx[] = {
    #include "assets/levelGroup/GiantCake/BottomSponge/BottomSponge.gfx.inc.c"
};

Vtx GiantCake_SweepArmOne_Vtx[] = {
    #include "assets/levelGroup/GiantCake/SweepArmOne/SweepArmOne.vtx.inc.c"
};
Mtx GiantCake_IMtx29 = IDENTITY;

Gfx GiantCake_SweepArmOne_Gfx[] = {
    #include "assets/levelGroup/GiantCake/SweepArmOne/SweepArmOne.gfx.inc.c"
};

Vtx GiantCake_SweepArmTwo_Vtx[] = {
    #include "assets/levelGroup/GiantCake/SweepArmTwo/SweepArmTwo.vtx.inc.c"
};
Mtx GiantCake_IMtx30 = IDENTITY;

Gfx GiantCake_SweepArmTwo_Gfx[] = {
    #include "assets/levelGroup/GiantCake/SweepArmTwo/SweepArmTwo.gfx.inc.c"
};

Vtx GiantCake_Axle_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Axle/Axle.vtx.inc.c"
};
Mtx GiantCake_IMtx31 = IDENTITY;

Gfx GiantCake_Axle_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Axle/Axle.gfx.inc.c"
};

Vtx GiantCake_Strawberry_1Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_1Oclock/Strawberry_1Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx32 = IDENTITY;

Gfx GiantCake_Strawberry_1Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_1Oclock/Strawberry_1Oclock.gfx.inc.c"
};

Vtx GiantCake_Strawberry_3Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_3Oclock/Strawberry_3Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx33 = IDENTITY;

Gfx GiantCake_Strawberry_3Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_3Oclock/Strawberry_3Oclock.gfx.inc.c"
};

Vtx GiantCake_Strawberry_5Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_5Oclock/Strawberry_5Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx34 = IDENTITY;

Gfx GiantCake_Strawberry_5Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_5Oclock/Strawberry_5Oclock.gfx.inc.c"
};

Vtx GiantCake_Strawberry_7Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_7Oclock/Strawberry_7Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx35 = IDENTITY;

Gfx GiantCake_Strawberry_7Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_7Oclock/Strawberry_7Oclock.gfx.inc.c"
};

Vtx GiantCake_Strawberry_9Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_9Oclock/Strawberry_9Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx36 = IDENTITY;

Gfx GiantCake_Strawberry_9Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_9Oclock/Strawberry_9Oclock.gfx.inc.c"
};

Vtx GiantCake_Strawberry_11Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_11Oclock/Strawberry_11Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx37 = IDENTITY;

Gfx GiantCake_Strawberry_11Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/Strawberry_11Oclock/Strawberry_11Oclock.gfx.inc.c"
};
Mtx GiantCake_IMtx38 = IDENTITY;

Gfx GiantCake_CakeModel_Gfx[] = {
    #include "assets/levelGroup/GiantCake/CakeModel/CakeModel.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Cream_8Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_8Oclock/DestroyedCake_Cream_8Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx39 = IDENTITY;

Gfx GiantCake_DestroyedCake_Cream_8Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_8Oclock/DestroyedCake_Cream_8Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Cream_2Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_2Oclock/DestroyedCake_Cream_2Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx40 = IDENTITY;

Gfx GiantCake_DestroyedCake_Cream_2Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_2Oclock/DestroyedCake_Cream_2Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Cream_4Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_4Oclock/DestroyedCake_Cream_4Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx41 = IDENTITY;

Gfx GiantCake_DestroyedCake_Cream_4Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_4Oclock/DestroyedCake_Cream_4Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Cream_10Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_10Oclock/DestroyedCake_Cream_10Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx42 = IDENTITY;

Gfx GiantCake_DestroyedCake_Cream_10Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_10Oclock/DestroyedCake_Cream_10Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Cream_6Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_6Oclock/DestroyedCake_Cream_6Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx43 = IDENTITY;

Gfx GiantCake_DestroyedCake_Cream_6Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_6Oclock/DestroyedCake_Cream_6Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Cream_12Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_12Oclock/DestroyedCake_Cream_12Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx44 = IDENTITY;

Gfx GiantCake_DestroyedCake_Cream_12Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Cream_12Oclock/DestroyedCake_Cream_12Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Frosting_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Frosting/DestroyedCake_Frosting.vtx.inc.c"
};
Mtx GiantCake_IMtx45 = IDENTITY;

Gfx GiantCake_DestroyedCake_Frosting_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Frosting/DestroyedCake_Frosting.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_BottomSponge_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_BottomSponge/DestroyedCake_BottomSponge.vtx.inc.c"
};
Mtx GiantCake_IMtx46 = IDENTITY;

Gfx GiantCake_DestroyedCake_BottomSponge_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_BottomSponge/DestroyedCake_BottomSponge.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_SweepArmOne_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_SweepArmOne/DestroyedCake_SweepArmOne.vtx.inc.c"
};
Mtx GiantCake_IMtx47 = IDENTITY;

Gfx GiantCake_DestroyedCake_SweepArmOne_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_SweepArmOne/DestroyedCake_SweepArmOne.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_SweepArmTwo_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_SweepArmTwo/DestroyedCake_SweepArmTwo.vtx.inc.c"
};
Mtx GiantCake_IMtx48 = IDENTITY;

Gfx GiantCake_DestroyedCake_SweepArmTwo_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_SweepArmTwo/DestroyedCake_SweepArmTwo.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Axle_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Axle/DestroyedCake_Axle.vtx.inc.c"
};
Mtx GiantCake_IMtx49 = IDENTITY;

Gfx GiantCake_DestroyedCake_Axle_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Axle/DestroyedCake_Axle.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Strawberry_1Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_1Oclock/DestroyedCake_Strawberry_1Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx50 = IDENTITY;

Gfx GiantCake_DestroyedCake_Strawberry_1Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_1Oclock/DestroyedCake_Strawberry_1Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Strawberry_3Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_3Oclock/DestroyedCake_Strawberry_3Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx51 = IDENTITY;

Gfx GiantCake_DestroyedCake_Strawberry_3Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_3Oclock/DestroyedCake_Strawberry_3Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Strawberry_5Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_5Oclock/DestroyedCake_Strawberry_5Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx52 = IDENTITY;

Gfx GiantCake_DestroyedCake_Strawberry_5Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_5Oclock/DestroyedCake_Strawberry_5Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Strawberry_7Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_7Oclock/DestroyedCake_Strawberry_7Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx53 = IDENTITY;

Gfx GiantCake_DestroyedCake_Strawberry_7Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_7Oclock/DestroyedCake_Strawberry_7Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Strawberry_9Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_9Oclock/DestroyedCake_Strawberry_9Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx54 = IDENTITY;

Gfx GiantCake_DestroyedCake_Strawberry_9Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_9Oclock/DestroyedCake_Strawberry_9Oclock.gfx.inc.c"
};

Vtx GiantCake_DestroyedCake_Strawberry_11Oclock_Vtx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_11Oclock/DestroyedCake_Strawberry_11Oclock.vtx.inc.c"
};
Mtx GiantCake_IMtx55 = IDENTITY;

Gfx GiantCake_DestroyedCake_Strawberry_11Oclock_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCake_Strawberry_11Oclock/DestroyedCake_Strawberry_11Oclock.gfx.inc.c"
};
Mtx GiantCake_IMtx56 = IDENTITY;

Gfx GiantCake_DestroyedCakeModel_Gfx[] = {
    #include "assets/levelGroup/GiantCake/DestroyedCakeModel/DestroyedCakeModel.gfx.inc.c"
};

Anim GiantCake_CakeWithNoStrawberriesOpeningHeader_Animh = {
    #include "assets/levelGroup/GiantCake/anim/CakeWithNoStrawberriesOpeningHeader.animH.inc.c"
};

Mtx GiantCake_CakeWithNoStrawberriesOpening_Animarr[15][8] = {
    #include "assets/levelGroup/GiantCake/anim/CakeWithNoStrawberriesOpening.animArr.inc.c"
};

AnimPointer GiantCake_CakeWithNoStrawberriesOpeningPointers_Animp[1] = {
{&GiantCake_CakeWithNoStrawberriesOpeningHeader_Animh.frames, &GiantCake_CakeWithNoStrawberriesOpeningHeader_Animh.objects, GiantCake_CakeWithNoStrawberriesOpening_Animarr[0]}
};

Anim GiantCake_WalkingWheelIdleHeader_Animh = {
    #include "assets/levelGroup/GiantCake/anim/WalkingWheelIdleHeader.animH.inc.c"
};

Mtx GiantCake_WalkingWheelIdle_Animarr[2][3] = {
    #include "assets/levelGroup/GiantCake/anim/WalkingWheelIdle.animArr.inc.c"
};

AnimPointer GiantCake_WalkingWheelIdlePointers_Animp[1] = {
{&GiantCake_WalkingWheelIdleHeader_Animh.frames, &GiantCake_WalkingWheelIdleHeader_Animh.objects, GiantCake_WalkingWheelIdle_Animarr[0]}
};

Anim GiantCake_StrawberryIdleHeader_Animh = {
    #include "assets/levelGroup/GiantCake/anim/StrawberryIdleHeader.animH.inc.c"
};

Mtx GiantCake_StrawberryIdle_Animarr[1][1] = {
    #include "assets/levelGroup/GiantCake/anim/StrawberryIdle.animArr.inc.c"
};

AnimPointer GiantCake_StrawberryIdlePointers_Animp[1] = {
{&GiantCake_StrawberryIdleHeader_Animh.frames, &GiantCake_StrawberryIdleHeader_Animh.objects, GiantCake_StrawberryIdle_Animarr[0]}
};

Anim GiantCake_CakeOpeningHeader_Animh = {
    #include "assets/levelGroup/GiantCake/anim/CakeOpeningHeader.animH.inc.c"
};

Mtx GiantCake_CakeOpening_Animarr[15][17] = {
    #include "assets/levelGroup/GiantCake/anim/CakeOpening.animArr.inc.c"
};

AnimPointer GiantCake_CakeOpeningPointers_Animp[1] = {
{&GiantCake_CakeOpeningHeader_Animh.frames, &GiantCake_CakeOpeningHeader_Animh.objects, GiantCake_CakeOpening_Animarr[0]}
};

Anim GiantCake_DestroyedCakeIdleHeader_Animh = {
    #include "assets/levelGroup/GiantCake/anim/DestroyedCakeIdleHeader.animH.inc.c"
};

Mtx GiantCake_DestroyedCakeIdle_Animarr[2][17] = {
    #include "assets/levelGroup/GiantCake/anim/DestroyedCakeIdle.animArr.inc.c"
};

AnimPointer GiantCake_DestroyedCakeIdlePointers_Animp[1] = {
{&GiantCake_DestroyedCakeIdleHeader_Animh.frames, &GiantCake_DestroyedCakeIdleHeader_Animh.objects, GiantCake_DestroyedCakeIdle_Animarr[0]}
};
