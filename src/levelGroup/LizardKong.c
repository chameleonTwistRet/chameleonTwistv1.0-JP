#include "LizardKong.h"

Mtx LizardKong_IMtx1 = IDENTITY;

StageModel LizardKong_stageModels[] = {
#include "global_models.inc.c"
{LizardKong_model1_Gfx, &LizardKong_unkCol1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{LizardKong_model2_Gfx, &LizardKong_unkCol2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char LizardKong_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject LizardKong_room0_objects[] = {
    {         {0.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {         {0.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0, 38, -1, 30, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-200.0,-50.0,-200.0},                                {1.5,2.0,2.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    {     {200.0,0.0,200.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0, 32, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {     {200.0,0.0,200.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0,  3, -1, -1, -1, NULL, NULL, 0, 0,  0,  4, 4, 0, -1, 0, 0},
    {     {200.0,0.0,200.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,  400.0,  400.0,     0.0, 0.0, 3,  1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {     {200.0,0.0,200.0},                                {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {    {200.0,400.0,30.0}, {1.0,1.3333333730697632,0.10000000149011612}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 11,  200.0,    0.0,    30.0, 0.0, 2, 20, -1,   40, 0, 0, 36, -1, -1, 30, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {         {0.0,0.0,0.0},                                {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor LizardKong_room0_actors[] = {
    {                   LIZARD_KONG,           {0.0,0.0,0.0}, 263.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 1, 0.6000000238418579, 15.0, 2000.0, 80.0, 3.0f, 45.0f, 3000.0f, 0.800000011920929f,  30.0f, 1.0f,  1.0f, 0},
    { LIZARD_KONG_BUTTERFLY_SPAWNER,  {500.0,-100.0,-3200.0},   0.0, -50000.0, 50000.0, -50000.0f, 50000.0, -50000.0, 50000.0, 0,                8.0,  4.0,   10.0,  1.0, 3.0f,     0,       0,                  0, 360.0f, 6.0f, 30.0f, 0},
    { LIZARD_KONG_BUTTERFLY_SPAWNER, {-500.0,-100.0,-3200.0},   0.0, -50000.0, 50000.0, -50000.0f, 50000.0, -50000.0, 50000.0, 0,                8.0,  4.0,   10.0,  1.0, 3.0f,     0,       0,                  0, 360.0f, 6.0f, 30.0f, 0},
    {                    ACTOR_NULL,           {0.0,0.0,0.0},   0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,                0.0,  0.0,    0.0,  0.0,    0,     0,       0,                  0,      0,    0,     0, 0}
};

RoomActor LizardKong_room1_actors[] = {
    {                   LIZARD_KONG,           {0.0,0.0,0.0}, 263.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 1,  2.0, 30.0, 2000.0, 20.0, 30.0f, 45.0f, 3000.0f, 0.6000000238418579f,   5.0f,  3.0f,  2.0f, 0},
    { LIZARD_KONG_BUTTERFLY_SPAWNER,  {500.0,-100.0,-3200.0},   0.0, -50000.0, 50000.0, -50000.0f, 50000.0, -50000.0, 50000.0, 0, 10.0,  4.0,   10.0,  1.0,  3.0f,     0,       0,                   0, 360.0f, 48.0f, 30.0f, 0},
    { LIZARD_KONG_BUTTERFLY_SPAWNER, {-500.0,-100.0,-3200.0},   0.0, -50000.0, 50000.0, -50000.0f, 50000.0, -50000.0, 50000.0, 0, 20.0,  4.0,   10.0,  1.0,  3.0f,     0,       0,                   0, 360.0f, 48.0f, 30.0f, 0},
    {                    ACTOR_NULL,           {0.0,0.0,0.0},   0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,  0.0,  0.0,    0.0,  0.0,     0,     0,       0,                   0,      0,     0,     0, 0}
};

s32 LizardKong_spriteLib_Sprlib[2][16] = {
{   56,
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

RoomInstance LizardKong_room_instances[] = {
    { LizardKong_room0_objects, LizardKong_room0_actors, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 10, -200.0, 800.0, -200.0, 0.0, 0.0, 0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    { LizardKong_room0_objects, LizardKong_room1_actors, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 10, -200.0, 800.0, -200.0, 0.0, 0.0, 0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    {                        0,                       0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0,  0,    0.0,   0.0,    0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0,    -1.0,   0.0}
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
    {0.0f, 0.0f, 0.0f},
    -1,
    25000,
    60,
};

StageData LizardKong_stageData = {
    &LizardKong_map_data,
    NO_EXT_ROOMS,
    LizardKong_stageModels,
    40,
    0,
    LizardKong_rabObjects_Bin,
    131072,
    LizardKong_spriteLib_Sprlib,
    &LizardKong_scope_Lvlscope,
};
Mtx LizardKong_IMtx2 = IDENTITY;

Lights1 LizardKong_lkScope_Light =
    #include "assets/levelGroup/LizardKong/lkScope/lkScope.light.inc.c"

Vtx LizardKong_model1_Vtx[] = {
    #include "assets/levelGroup/LizardKong/model1/model1.vtx.inc.c"
};
Mtx LizardKong_IMtx3 = IDENTITY;
unsigned char LizardKong_Pad1[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.png.inc.c"
};
unsigned char LizardKong_Pad2[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.pal.inc.c"
};

Gfx LizardKong_model1_Gfx[] = {
    #include "assets/levelGroup/LizardKong/model1/model1.gfx.inc.c"
};

Vtx LizardKong_model2_Vtx[] = {
    #include "assets/levelGroup/LizardKong/model2/model2.vtx.inc.c"
};
Mtx LizardKong_IMtx4 = IDENTITY;

Gfx LizardKong_model2_Gfx[] = {
    #include "assets/levelGroup/LizardKong/model2/model2.gfx.inc.c"
};

Vec3f LizardKong_unkCol1_ColVerts[] = {
    #include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colVerts.inc.c"
};

Vec3w LizardKong_unkCol1_ColTris[] = {
    #include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colTris.inc.c"
};

Rect3D LizardKong_unkCol1_BoundBox = {
    #include "assets/levelGroup/LizardKong/unkCol1/unkCol1.boundBox.inc.c"
};

ModelCollision LizardKong_unkCol1_collision = {
    ARRAY_COUNT(LizardKong_unkCol1_ColVerts), ARRAY_COUNT(LizardKong_unkCol1_ColTris), LizardKong_unkCol1_ColVerts, LizardKong_unkCol1_ColTris, &LizardKong_unkCol1_BoundBox
};

Vec3f LizardKong_unkCol2_ColVerts[] = {
    #include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colVerts.inc.c"
};

Vec3w LizardKong_unkCol2_ColTris[] = {
    #include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colTris.inc.c"
};

Rect3D LizardKong_unkCol2_BoundBox = {
    #include "assets/levelGroup/LizardKong/unkCol2/unkCol2.boundBox.inc.c"
};

ModelCollision LizardKong_unkCol2_collision = {
    ARRAY_COUNT(LizardKong_unkCol2_ColVerts), ARRAY_COUNT(LizardKong_unkCol2_ColTris), LizardKong_unkCol2_ColVerts, LizardKong_unkCol2_ColTris, &LizardKong_unkCol2_BoundBox
};
Mtx LizardKong_IMtx5 = IDENTITY;

Lights1 LizardKong_lkScope2_Light =
    #include "assets/levelGroup/LizardKong/lkScope2/lkScope2.light.inc.c"

Vtx LizardKong_Head_Vtx[] = {
    #include "assets/levelGroup/LizardKong/Head/Head.vtx.inc.c"
};
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

Gfx LizardKong_Head_Gfx[] = {
    #include "assets/levelGroup/LizardKong/Head/Head.gfx.inc.c"
};

Vtx LizardKong_Torso_Vtx[] = {
    #include "assets/levelGroup/LizardKong/Torso/Torso.vtx.inc.c"
};
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

Gfx LizardKong_Torso_Gfx[] = {
    #include "assets/levelGroup/LizardKong/Torso/Torso.gfx.inc.c"
};

Vtx LizardKong_LowerBody_Vtx[] = {
    #include "assets/levelGroup/LizardKong/LowerBody/LowerBody.vtx.inc.c"
};
Mtx LizardKong_IMtx8 = IDENTITY;

Gfx LizardKong_LowerBody_Gfx[] = {
    #include "assets/levelGroup/LizardKong/LowerBody/LowerBody.gfx.inc.c"
};

Vtx LizardKong_L_Thigh_Vtx[] = {
    #include "assets/levelGroup/LizardKong/L_Thigh/L_Thigh.vtx.inc.c"
};
Mtx LizardKong_IMtx9 = IDENTITY;

Gfx LizardKong_L_Thigh_Gfx[] = {
    #include "assets/levelGroup/LizardKong/L_Thigh/L_Thigh.gfx.inc.c"
};

Vtx LizardKong_R_Thigh_Vtx[] = {
    #include "assets/levelGroup/LizardKong/R_Thigh/R_Thigh.vtx.inc.c"
};
Mtx LizardKong_IMtx10 = IDENTITY;

Gfx LizardKong_R_Thigh_Gfx[] = {
    #include "assets/levelGroup/LizardKong/R_Thigh/R_Thigh.gfx.inc.c"
};

Vtx LizardKong_L_Leg_Vtx[] = {
    #include "assets/levelGroup/LizardKong/L_Leg/L_Leg.vtx.inc.c"
};
Mtx LizardKong_IMtx11 = IDENTITY;

Gfx LizardKong_L_Leg_Gfx[] = {
    #include "assets/levelGroup/LizardKong/L_Leg/L_Leg.gfx.inc.c"
};

Vtx LizardKong_L_Hand_Vtx[] = {
    #include "assets/levelGroup/LizardKong/L_Hand/L_Hand.vtx.inc.c"
};
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

Gfx LizardKong_L_Hand_Gfx[] = {
    #include "assets/levelGroup/LizardKong/L_Hand/L_Hand.gfx.inc.c"
};

Vtx LizardKong_L_Arm_Vtx[] = {
    #include "assets/levelGroup/LizardKong/L_Arm/L_Arm.vtx.inc.c"
};
Mtx LizardKong_IMtx13 = IDENTITY;

Gfx LizardKong_L_Arm_Gfx[] = {
    #include "assets/levelGroup/LizardKong/L_Arm/L_Arm.gfx.inc.c"
};

Vtx LizardKong_R_Hand_Vtx[] = {
    #include "assets/levelGroup/LizardKong/R_Hand/R_Hand.vtx.inc.c"
};
Mtx LizardKong_IMtx14 = IDENTITY;

Gfx LizardKong_R_Hand_Gfx[] = {
    #include "assets/levelGroup/LizardKong/R_Hand/R_Hand.gfx.inc.c"
};

Vtx LizardKong_R_Leg_Vtx[] = {
    #include "assets/levelGroup/LizardKong/R_Leg/R_Leg.vtx.inc.c"
};
Mtx LizardKong_IMtx15 = IDENTITY;

Gfx LizardKong_R_Leg_Gfx[] = {
    #include "assets/levelGroup/LizardKong/R_Leg/R_Leg.gfx.inc.c"
};

Vtx LizardKong_R_Arm_Vtx[] = {
    #include "assets/levelGroup/LizardKong/R_Arm/R_Arm.vtx.inc.c"
};
Mtx LizardKong_IMtx16 = IDENTITY;

Gfx LizardKong_R_Arm_Gfx[] = {
    #include "assets/levelGroup/LizardKong/R_Arm/R_Arm.gfx.inc.c"
};
Mtx LizardKong_IMtx17 = IDENTITY;

Gfx LizardKong_Model_Gfx[] = {
    #include "assets/levelGroup/LizardKong/Model/Model.gfx.inc.c"
};

Vtx LizardKong_Boulder_Vtx[] = {
    #include "assets/levelGroup/LizardKong/Boulder/Boulder.vtx.inc.c"
};
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

Gfx LizardKong_Boulder_Gfx[] = {
    #include "assets/levelGroup/LizardKong/Boulder/Boulder.gfx.inc.c"
};
Mtx LizardKong_IMtx19 = IDENTITY;

Gfx LizardKong_BoulderModel_Gfx[] = {
    #include "assets/levelGroup/LizardKong/BoulderModel/BoulderModel.gfx.inc.c"
};

Anim LizardKong_ChestBangHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/ChestBangHeader.animH.inc.c"
};

Mtx LizardKong_ChestBang_Animarr[80][11] = {
    #include "assets/levelGroup/LizardKong/anim/ChestBang.animArr.inc.c"
};

AnimPointer LizardKong_ChestBangPointers_Animp[1] = {
{&LizardKong_ChestBangHeader_Animh.frames, &LizardKong_ChestBangHeader_Animh.objects, LizardKong_ChestBang_Animarr[0]}
};

Anim LizardKong_ThrowBoulderHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/ThrowBoulderHeader.animH.inc.c"
};

Mtx LizardKong_ThrowBoulder_Animarr[40][11] = {
    #include "assets/levelGroup/LizardKong/anim/ThrowBoulder.animArr.inc.c"
};

AnimPointer LizardKong_ThrowBoulderPointers_Animp[1] = {
{&LizardKong_ThrowBoulderHeader_Animh.frames, &LizardKong_ThrowBoulderHeader_Animh.objects, LizardKong_ThrowBoulder_Animarr[0]}
};

Anim LizardKong_WalkHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/WalkHeader.animH.inc.c"
};

Mtx LizardKong_Walk_Animarr[30][11] = {
    #include "assets/levelGroup/LizardKong/anim/Walk.animArr.inc.c"
};

AnimPointer LizardKong_WalkPointers_Animp[1] = {
{&LizardKong_WalkHeader_Animh.frames, &LizardKong_WalkHeader_Animh.objects, LizardKong_Walk_Animarr[0]}
};

Anim LizardKong_KnockbackFromHitHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/KnockbackFromHitHeader.animH.inc.c"
};

Mtx LizardKong_KnockbackFromHit_Animarr[10][11] = {
    #include "assets/levelGroup/LizardKong/anim/KnockbackFromHit.animArr.inc.c"
};

AnimPointer LizardKong_KnockbackFromHitPointers_Animp[1] = {
{&LizardKong_KnockbackFromHitHeader_Animh.frames, &LizardKong_KnockbackFromHitHeader_Animh.objects, LizardKong_KnockbackFromHit_Animarr[0]}
};

Anim LizardKong_StageClearFallingHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/StageClearFallingHeader.animH.inc.c"
};

Mtx LizardKong_StageClearFalling_Animarr[5][11] = {
    #include "assets/levelGroup/LizardKong/anim/StageClearFalling.animArr.inc.c"
};

AnimPointer LizardKong_StageClearFallingPointers_Animp[1] = {
{&LizardKong_StageClearFallingHeader_Animh.frames, &LizardKong_StageClearFallingHeader_Animh.objects, LizardKong_StageClearFalling_Animarr[0]}
};

Anim LizardKong_StageClearSitUpHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/StageClearSitUpHeader.animH.inc.c"
};

Mtx LizardKong_StageClearSitUp_Animarr[15][11] = {
    #include "assets/levelGroup/LizardKong/anim/StageClearSitUp.animArr.inc.c"
};

AnimPointer LizardKong_StageClearSitUpPointers_Animp[1] = {
{&LizardKong_StageClearSitUpHeader_Animh.frames, &LizardKong_StageClearSitUpHeader_Animh.objects, LizardKong_StageClearSitUp_Animarr[0]}
};

Anim LizardKong_StageClearFinishSitUpHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/StageClearFinishSitUpHeader.animH.inc.c"
};

Mtx LizardKong_StageClearFinishSitUp_Animarr[5][11] = {
    #include "assets/levelGroup/LizardKong/anim/StageClearFinishSitUp.animArr.inc.c"
};

AnimPointer LizardKong_StageClearFinishSitUpPointers_Animp[1] = {
{&LizardKong_StageClearFinishSitUpHeader_Animh.frames, &LizardKong_StageClearFinishSitUpHeader_Animh.objects, LizardKong_StageClearFinishSitUp_Animarr[0]}
};

Anim LizardKong_StageClearKnockedOutHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/StageClearKnockedOutHeader.animH.inc.c"
};

Mtx LizardKong_StageClearKnockedOut_Animarr[20][11] = {
    #include "assets/levelGroup/LizardKong/anim/StageClearKnockedOut.animArr.inc.c"
};

AnimPointer LizardKong_StageClearKnockedOutPointers_Animp[1] = {
{&LizardKong_StageClearKnockedOutHeader_Animh.frames, &LizardKong_StageClearKnockedOutHeader_Animh.objects, LizardKong_StageClearKnockedOut_Animarr[0]}
};

Anim LizardKong_BoulderIdleHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/BoulderIdleHeader.animH.inc.c"
};

Mtx LizardKong_BoulderIdle_Animarr[1][1] = {
    #include "assets/levelGroup/LizardKong/anim/BoulderIdle.animArr.inc.c"
};

AnimPointer LizardKong_BoulderIdlePointers_Animp[1] = {
{&LizardKong_BoulderIdleHeader_Animh.frames, &LizardKong_BoulderIdleHeader_Animh.objects, LizardKong_BoulderIdle_Animarr[0]}
};

Anim LizardKong_FallingHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/FallingHeader.animH.inc.c"
};

Mtx LizardKong_Falling_Animarr[15][11] = {
    #include "assets/levelGroup/LizardKong/anim/Falling.animArr.inc.c"
};

AnimPointer LizardKong_FallingPointers_Animp[1] = {
{&LizardKong_FallingHeader_Animh.frames, &LizardKong_FallingHeader_Animh.objects, LizardKong_Falling_Animarr[0]}
};

Anim LizardKong_FloorPoundHeader_Animh = {
    #include "assets/levelGroup/LizardKong/anim/FloorPoundHeader.animH.inc.c"
};

Mtx LizardKong_FloorPound_Animarr[15][11] = {
    #include "assets/levelGroup/LizardKong/anim/FloorPound.animArr.inc.c"
};

AnimPointer LizardKong_FloorPoundPointers_Animp[1] = {
{&LizardKong_FloorPoundHeader_Animh.frames, &LizardKong_FloorPoundHeader_Animh.objects, LizardKong_FloorPound_Animarr[0]}
};
