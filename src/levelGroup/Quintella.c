#include "Quintella.h"

Mtx Quintella_IMtx1 = IDENTITY;

StageModel Quintella_stageModels[] = {
#include "global_models.inc.c"
{Quintella_model1_Gfx, &Quintella_unkCol1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Quintella_model2_Gfx, &Quintella_unkCol2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char Quintella_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

s32 Quintella_spriteLib_Sprlib[2][16] = {
{   14,
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
    0},
{   14,
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
    0},
};

Collectable Quintella_roomUnk_collectables[] = {
    {    R_HEART,  {150.0,0.0,-1405.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-150.0,0.0,-1405.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-1304.0,0.0,-304.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-100.0,0.0,1384.0}, 4294967295, 0, 0, 0},
    {    R_HEART,   {100.0,0.0,1384.0}, 4294967295, 0, 0, 0},
    {    R_HEART,    {1385.0,0.0,29.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject Quintella_roomMulti_objects[] = {
    { {0.0,0.0,-2800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0, -2400.0, 0.0, 15, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0, -2400.0, 0.0, 20, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-2400.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0, -2400.0, 0.0, 25, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-2200.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0, -2200.0, 0.0, 30, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0, -2000.0, 0.0, 35, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-1800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0, -1800.0, 0.0, 40, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0, -1600.0, 0.0, 45, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0, 38, -1, 16, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {0.0,-6000.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,      0.0,     0.0, 0.0,  0, 300, -1,    0, 0, 0,  8, -1, -1, -1, NULL, NULL, 0, 0, 6,  4, 4, 0, -1, 1, 0},
    { {0.0,0.0,-3100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,    400.0,     0.0, 0.0,  1,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,-3100.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 0,  0, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor Quintella_room0_actors[] = {
    {  ANT_QUEEN, {0.0,0.0,400.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 0, 0.0, 0.0, 0.0, 10.0, 2.0f, 0, 0, 0, 12.0f, 5.0f, 5.0f, 8.0f},
    { ACTOR_NULL,   {0.0,0.0,0.0},  0.0,     0.0,    0.0, 0, 0.0,     0.0,    0.0, 0, 0.0, 0.0, 0.0,  0.0,    0, 0, 0, 0,     0,    0,    0,    0}
};

RoomActor Quintella_room1_actors[] = {
    {  ANT_QUEEN, {0.0,0.0,400.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 0, 0.20000000298023224, 0.0, 0.0, 14.0, 3.0f, 0, 0, 0, 60.0f, 5.0f, 5.0f, 4.0f},
    { ACTOR_NULL,   {0.0,0.0,0.0},  0.0,     0.0,    0.0, 0, 0.0,     0.0,    0.0, 0,                 0.0, 0.0, 0.0,  0.0,    0, 0, 0, 0,     0,    0,    0,    0}
};

RoomInstance Quintella_room_instances[] = {
    { Quintella_roomMulti_objects, Quintella_room0_actors, 0, 0, 1, 1, 0, 7, 31, 0, 0.0, 5, 1500.0, 800.0, -1500.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    { Quintella_roomMulti_objects, Quintella_room1_actors, 0, 0, 1, 1, 0, 7, 31, 0, 0.0, 5, 1500.0, 800.0, -1500.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    {                           0,                      0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0,    0.0,   0.0,     0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0,    -1.0,   0.0}
};

s32 Quintella_rooms_map[1][3] = {
    {-1, 0, -1},
};

StageMapData Quintella_map_data = {
    3, 1, Quintella_room_instances, Quintella_rooms_map,
};

RoomInstance Quintella_ext_room_instances[] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope Quintella_scope_Lvlscope = {
    {0.0f, 0.0f, 0.0f},
    -1,
    25000,
    60,
};

StageData Quintella_stageData = {
    &Quintella_map_data,
    NO_EXT_ROOMS,
    Quintella_stageModels,
    ARRAY_COUNT(Quintella_stageModels),
    0,
    Quintella_rabObjects_Bin,
    131072,
    Quintella_spriteLib_Sprlib,
    &Quintella_scope_Lvlscope,
};
s32 alignment_Quintella[2] = {0, 0};
Mtx Quintella_IMtx2 = IDENTITY;

Lights1 Quintella_qtScope_Light =
    #include "assets/levelGroup/Quintella/qtScope/qtScope.light.inc.c"

Vtx Quintella_model1_Vtx[] = {
    #include "assets/levelGroup/Quintella/model1/model1.vtx.inc.c"
};
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

Gfx Quintella_model1_Gfx[] = {
    #include "assets/levelGroup/Quintella/model1/model1.gfx.inc.c"
};

Vtx Quintella_model2_Vtx[] = {
    #include "assets/levelGroup/Quintella/model2/model2.vtx.inc.c"
};
Mtx Quintella_IMtx4 = IDENTITY;

Gfx Quintella_model2_Gfx[] = {
    #include "assets/levelGroup/Quintella/model2/model2.gfx.inc.c"
};

Vec3f Quintella_unkCol1_ColVerts[] = {
    #include "assets/levelGroup/Quintella/unkCol1/unkCol1.colVerts.inc.c"
};

Vec3w Quintella_unkCol1_ColTris[] = {
    #include "assets/levelGroup/Quintella/unkCol1/unkCol1.colTris.inc.c"
};

Rect3D Quintella_unkCol1_BoundBox = {
    #include "assets/levelGroup/Quintella/unkCol1/unkCol1.boundBox.inc.c"
};

ModelCollision Quintella_unkCol1_collision = {
    ARRAY_COUNT(Quintella_unkCol1_ColVerts), ARRAY_COUNT(Quintella_unkCol1_ColTris), Quintella_unkCol1_ColVerts, Quintella_unkCol1_ColTris, &Quintella_unkCol1_BoundBox
};

Vec3f Quintella_unkCol2_ColVerts[] = {
    #include "assets/levelGroup/Quintella/unkCol2/unkCol2.colVerts.inc.c"
};

Vec3w Quintella_unkCol2_ColTris[] = {
    #include "assets/levelGroup/Quintella/unkCol2/unkCol2.colTris.inc.c"
};

Rect3D Quintella_unkCol2_BoundBox = {
    #include "assets/levelGroup/Quintella/unkCol2/unkCol2.boundBox.inc.c"
};

ModelCollision Quintella_unkCol2_collision = {
    ARRAY_COUNT(Quintella_unkCol2_ColVerts), ARRAY_COUNT(Quintella_unkCol2_ColTris), Quintella_unkCol2_ColVerts, Quintella_unkCol2_ColTris, &Quintella_unkCol2_BoundBox
};
Mtx Quintella_IMtx5 = IDENTITY;

Lights1 Quintella_qtScope2_Light =
    #include "assets/levelGroup/Quintella/qtScope2/qtScope2.light.inc.c"

Vtx Quintella_Crown_Vtx[] = {
    #include "assets/levelGroup/Quintella/Crown/Crown.vtx.inc.c"
};
Mtx Quintella_IMtx6 = IDENTITY;

Gfx Quintella_Crown_Gfx[] = {
    #include "assets/levelGroup/Quintella/Crown/Crown.gfx.inc.c"
};

Vtx Quintella_Abdomen_Vtx[] = {
    #include "assets/levelGroup/Quintella/Abdomen/Abdomen.vtx.inc.c"
};
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

Gfx Quintella_Abdomen_Gfx[] = {
    #include "assets/levelGroup/Quintella/Abdomen/Abdomen.gfx.inc.c"
};

Vtx Quintella_Head_Vtx[] = {
    #include "assets/levelGroup/Quintella/Head/Head.vtx.inc.c"
};
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

Gfx Quintella_Head_Gfx[] = {
    #include "assets/levelGroup/Quintella/Head/Head.gfx.inc.c"
};

Vtx Quintella_L_Arm_Vtx[] = {
    #include "assets/levelGroup/Quintella/L_Arm/L_Arm.vtx.inc.c"
};
Mtx Quintella_IMtx9 = IDENTITY;
unsigned char Quintella_Pad14[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.png.inc.c"
};
unsigned char Quintella_Pad15[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.pal.inc.c"
};

Gfx Quintella_L_Arm_Gfx[] = {
    #include "assets/levelGroup/Quintella/L_Arm/L_Arm.gfx.inc.c"
};

Vtx Quintella_R_Foot_Vtx[] = {
    #include "assets/levelGroup/Quintella/R_Foot/R_Foot.vtx.inc.c"
};
Mtx Quintella_IMtx10 = IDENTITY;

Gfx Quintella_R_Foot_Gfx[] = {
    #include "assets/levelGroup/Quintella/R_Foot/R_Foot.gfx.inc.c"
};

Vtx Quintella_L_Foot_Vtx[] = {
    #include "assets/levelGroup/Quintella/L_Foot/L_Foot.vtx.inc.c"
};
Mtx Quintella_IMtx11 = IDENTITY;

Gfx Quintella_L_Foot_Gfx[] = {
    #include "assets/levelGroup/Quintella/L_Foot/L_Foot.gfx.inc.c"
};

Vtx Quintella_R_Arm_Vtx[] = {
    #include "assets/levelGroup/Quintella/R_Arm/R_Arm.vtx.inc.c"
};
Mtx Quintella_IMtx12 = IDENTITY;

Gfx Quintella_R_Arm_Gfx[] = {
    #include "assets/levelGroup/Quintella/R_Arm/R_Arm.gfx.inc.c"
};

Vtx Quintella_R_Hand_Vtx[] = {
    #include "assets/levelGroup/Quintella/R_Hand/R_Hand.vtx.inc.c"
};
Mtx Quintella_IMtx13 = IDENTITY;

Gfx Quintella_R_Hand_Gfx[] = {
    #include "assets/levelGroup/Quintella/R_Hand/R_Hand.gfx.inc.c"
};

Vtx Quintella_R_Thigh_Vtx[] = {
    #include "assets/levelGroup/Quintella/R_Thigh/R_Thigh.vtx.inc.c"
};
Mtx Quintella_IMtx14 = IDENTITY;

Gfx Quintella_R_Thigh_Gfx[] = {
    #include "assets/levelGroup/Quintella/R_Thigh/R_Thigh.gfx.inc.c"
};

Vtx Quintella_R_Leg_Vtx[] = {
    #include "assets/levelGroup/Quintella/R_Leg/R_Leg.vtx.inc.c"
};
Mtx Quintella_IMtx15 = IDENTITY;

Gfx Quintella_R_Leg_Gfx[] = {
    #include "assets/levelGroup/Quintella/R_Leg/R_Leg.gfx.inc.c"
};

Vtx Quintella_L_Thigh_Vtx[] = {
    #include "assets/levelGroup/Quintella/L_Thigh/L_Thigh.vtx.inc.c"
};
Mtx Quintella_IMtx16 = IDENTITY;

Gfx Quintella_L_Thigh_Gfx[] = {
    #include "assets/levelGroup/Quintella/L_Thigh/L_Thigh.gfx.inc.c"
};

Vtx Quintella_L_Leg_Vtx[] = {
    #include "assets/levelGroup/Quintella/L_Leg/L_Leg.vtx.inc.c"
};
Mtx Quintella_IMtx17 = IDENTITY;

Gfx Quintella_L_Leg_Gfx[] = {
    #include "assets/levelGroup/Quintella/L_Leg/L_Leg.gfx.inc.c"
};

Vtx Quintella_Torso_Vtx[] = {
    #include "assets/levelGroup/Quintella/Torso/Torso.vtx.inc.c"
};
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

Gfx Quintella_Torso_Gfx[] = {
    #include "assets/levelGroup/Quintella/Torso/Torso.gfx.inc.c"
};

Vtx Quintella_L_Ear_Vtx[] = {
    #include "assets/levelGroup/Quintella/L_Ear/L_Ear.vtx.inc.c"
};
Mtx Quintella_IMtx19 = IDENTITY;

Gfx Quintella_L_Ear_Gfx[] = {
    #include "assets/levelGroup/Quintella/L_Ear/L_Ear.gfx.inc.c"
};

Vtx Quintella_L_Hand_Vtx[] = {
    #include "assets/levelGroup/Quintella/L_Hand/L_Hand.vtx.inc.c"
};
Mtx Quintella_IMtx20 = IDENTITY;

Gfx Quintella_L_Hand_Gfx[] = {
    #include "assets/levelGroup/Quintella/L_Hand/L_Hand.gfx.inc.c"
};

Vtx Quintella_Fan_Vtx[] = {
    #include "assets/levelGroup/Quintella/Fan/Fan.vtx.inc.c"
};
Mtx Quintella_IMtx21 = IDENTITY;
unsigned char Quintella_Pad21[] = FILEPAD;
unsigned char Quintella_fan_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.png.inc.c"
};
unsigned char Quintella_Pad22[] = FILEPAD;
unsigned char Quintella_fan_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.pal.inc.c"
};

Gfx Quintella_Fan_Gfx[] = {
    #include "assets/levelGroup/Quintella/Fan/Fan.gfx.inc.c"
};

Vtx Quintella_R_Ear_Vtx[] = {
    #include "assets/levelGroup/Quintella/R_Ear/R_Ear.vtx.inc.c"
};
Mtx Quintella_IMtx22 = IDENTITY;

Gfx Quintella_R_Ear_Gfx[] = {
    #include "assets/levelGroup/Quintella/R_Ear/R_Ear.gfx.inc.c"
};
Mtx Quintella_IMtx23 = IDENTITY;

Gfx Quintella_Model_Gfx[] = {
    #include "assets/levelGroup/Quintella/Model/Model.gfx.inc.c"
};

Anim Quintella_WalkHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/WalkHeader.animH.inc.c"
};

Mtx Quintella_Walk_Animarr[40][17] = {
    #include "assets/levelGroup/Quintella/anim/Walk.animArr.inc.c"
};

Anim Quintella_GetUpStompHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/GetUpStompHeader.animH.inc.c"
};

Mtx Quintella_GetUpStomp_Animarr[30][17] = {
    #include "assets/levelGroup/Quintella/anim/GetUpStomp.animArr.inc.c"
};

Anim Quintella_TrippingOverHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/TrippingOverHeader.animH.inc.c"
};

Mtx Quintella_TrippingOver_Animarr[15][17] = {
    #include "assets/levelGroup/Quintella/anim/TrippingOver.animArr.inc.c"
};

Anim Quintella_StunnedHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/StunnedHeader.animH.inc.c"
};

Mtx Quintella_Stunned_Animarr[20][17] = {
    #include "assets/levelGroup/Quintella/anim/Stunned.animArr.inc.c"
};

Anim Quintella_SlamHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/SlamHeader.animH.inc.c"
};

Mtx Quintella_Slam_Animarr[40][17] = {
    #include "assets/levelGroup/Quintella/anim/Slam.animArr.inc.c"
};

Anim Quintella_SpinHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/SpinHeader.animH.inc.c"
};

Mtx Quintella_Spin_Animarr[60][17] = {
    #include "assets/levelGroup/Quintella/anim/Spin.animArr.inc.c"
};

Anim Quintella_StageClearJumpedOnHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/StageClearJumpedOnHeader.animH.inc.c"
};

Mtx Quintella_StageClearJumpedOn_Animarr[3][17] = {
    #include "assets/levelGroup/Quintella/anim/StageClearJumpedOn.animArr.inc.c"
};

Anim Quintella_StageClearAirborneHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/StageClearAirborneHeader.animH.inc.c"
};

Mtx Quintella_StageClearAirborne_Animarr[5][17] = {
    #include "assets/levelGroup/Quintella/anim/StageClearAirborne.animArr.inc.c"
};

Anim Quintella_StageClearBounceHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/StageClearBounceHeader.animH.inc.c"
};

Mtx Quintella_StageClearBounce_Animarr[30][17] = {
    #include "assets/levelGroup/Quintella/anim/StageClearBounce.animArr.inc.c"
};

Anim Quintella_StageClearDeathHeader_Animh = {
    #include "assets/levelGroup/Quintella/anim/StageClearDeathHeader.animH.inc.c"
};

Mtx Quintella_StageClearDeath_Animarr[55][17] = {
    #include "assets/levelGroup/Quintella/anim/StageClearDeath.animArr.inc.c"
};

Anim Quintella_unk11Header_Animh = {
    #include "assets/levelGroup/Quintella/anim/unk11Header.animH.inc.c"
};

Mtx Quintella_unk11_Animarr[5][17] = {
    #include "assets/levelGroup/Quintella/anim/unk11.animArr.inc.c"
};

AnimPointer Quintella_WalkPointers_Animp[1] = {
{&Quintella_WalkHeader_Animh.frames, &Quintella_WalkHeader_Animh.objects, Quintella_Walk_Animarr[0]}
};

AnimPointer Quintella_GetUpStompPointers_Animp[1] = {
{&Quintella_GetUpStompHeader_Animh.frames, &Quintella_GetUpStompHeader_Animh.objects, Quintella_GetUpStomp_Animarr[0]}
};

AnimPointer Quintella_TrippingOverPointers_Animp[1] = {
{&Quintella_TrippingOverHeader_Animh.frames, &Quintella_TrippingOverHeader_Animh.objects, Quintella_TrippingOver_Animarr[0]}
};

AnimPointer Quintella_StunnedPointers_Animp[1] = {
{&Quintella_StunnedHeader_Animh.frames, &Quintella_StunnedHeader_Animh.objects, Quintella_Stunned_Animarr[0]}
};

AnimPointer Quintella_SlamPointers_Animp[1] = {
{&Quintella_SlamHeader_Animh.frames, &Quintella_SlamHeader_Animh.objects, Quintella_Slam_Animarr[0]}
};

AnimPointer Quintella_SpinPointers_Animp[1] = {
{&Quintella_SpinHeader_Animh.frames, &Quintella_SpinHeader_Animh.objects, Quintella_Spin_Animarr[0]}
};

AnimPointer Quintella_StageClearJumpedOnPointers_Animp[1] = {
{&Quintella_StageClearJumpedOnHeader_Animh.frames, &Quintella_StageClearJumpedOnHeader_Animh.objects, Quintella_StageClearJumpedOn_Animarr[0]}
};

AnimPointer Quintella_StageClearAirbornePointers_Animp[1] = {
{&Quintella_StageClearAirborneHeader_Animh.frames, &Quintella_StageClearAirborneHeader_Animh.objects, Quintella_StageClearAirborne_Animarr[0]}
};

AnimPointer Quintella_StageClearBouncePointers_Animp[1] = {
{&Quintella_StageClearBounceHeader_Animh.frames, &Quintella_StageClearBounceHeader_Animh.objects, Quintella_StageClearBounce_Animarr[0]}
};

AnimPointer Quintella_StageClearDeathPointers_Animp[1] = {
{&Quintella_StageClearDeathHeader_Animh.frames, &Quintella_StageClearDeathHeader_Animh.objects, Quintella_StageClearDeath_Animarr[0]}
};

AnimPointer Quintella_unk11Pointers_Animp[1] = {
{&Quintella_unk11Header_Animh.frames, &Quintella_unk11Header_Animh.objects, Quintella_unk11_Animarr[0]}
};
