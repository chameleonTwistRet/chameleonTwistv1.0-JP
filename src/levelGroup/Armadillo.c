#include "Armadillo.h"

Mtx Armadillo_IMtx1 = IDENTITY;

StageModel Armadillo_stageModels[] = {
#include "global_models.inc.c"
{Armadillo_model1_Gfx, &Armadillo_unkCol1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Armadillo_model2_Gfx, &Armadillo_unkCol2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
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
    {0.0f, 0.0f, 0.0f},
    255,
    25000,
    60,
};

StageData Armadillo_stageData = {
    &Armadillo_map_data,
    NO_EXT_ROOMS,
    Armadillo_stageModels,
    ARRAY_COUNT(Armadillo_stageModels),
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

Vec3f Armadillo_unkCol1_ColVerts[] = {
    #include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colVerts.inc.c"
};

Vec3w Armadillo_unkCol1_ColTris[] = {
    #include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colTris.inc.c"
};

Rect3D Armadillo_unkCol1_BoundBox = {
    #include "assets/levelGroup/Armadillo/unkCol1/unkCol1.boundBox.inc.c"
};

ModelCollision Armadillo_unkCol1_collision = {
    ARRAY_COUNT(Armadillo_unkCol1_ColVerts), ARRAY_COUNT(Armadillo_unkCol1_ColTris), Armadillo_unkCol1_ColVerts, Armadillo_unkCol1_ColTris, &Armadillo_unkCol1_BoundBox
};

Vec3f Armadillo_unkCol2_ColVerts[] = {
    #include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colVerts.inc.c"
};

Vec3w Armadillo_unkCol2_ColTris[] = {
    #include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colTris.inc.c"
};

Rect3D Armadillo_unkCol2_BoundBox = {
    #include "assets/levelGroup/Armadillo/unkCol2/unkCol2.boundBox.inc.c"
};

ModelCollision Armadillo_unkCol2_collision = {
    ARRAY_COUNT(Armadillo_unkCol2_ColVerts), ARRAY_COUNT(Armadillo_unkCol2_ColTris), Armadillo_unkCol2_ColVerts, Armadillo_unkCol2_ColTris, &Armadillo_unkCol2_BoundBox
};
s32 armadillo_pad2[3] = {0, 0, 0};
Mtx Armadillo_IMtx5 = IDENTITY;

Lights1 Armadillo_adScope2_Light =
    #include "assets/levelGroup/Armadillo/adScope2/adScope2.light.inc.c"

Vtx Armadillo_ShellTail_Vtx[] = {
    #include "assets/levelGroup/Armadillo/ShellTail/ShellTail.vtx.inc.c"
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

Gfx Armadillo_ShellTail_Gfx[] = {
    #include "assets/levelGroup/Armadillo/ShellTail/ShellTail.gfx.inc.c"
};

Vtx Armadillo_ShellSix_Vtx[] = {
    #include "assets/levelGroup/Armadillo/ShellSix/ShellSix.vtx.inc.c"
};
Mtx Armadillo_IMtx7 = IDENTITY;

Gfx Armadillo_ShellSix_Gfx[] = {
    #include "assets/levelGroup/Armadillo/ShellSix/ShellSix.gfx.inc.c"
};

Vtx Armadillo_ShellFive_Vtx[] = {
    #include "assets/levelGroup/Armadillo/ShellFive/ShellFive.vtx.inc.c"
};
Mtx Armadillo_IMtx8 = IDENTITY;

Gfx Armadillo_ShellFive_Gfx[] = {
    #include "assets/levelGroup/Armadillo/ShellFive/ShellFive.gfx.inc.c"
};

Vtx Armadillo_ShellFour_Vtx[] = {
    #include "assets/levelGroup/Armadillo/ShellFour/ShellFour.vtx.inc.c"
};
Mtx Armadillo_IMtx9 = IDENTITY;

Gfx Armadillo_ShellFour_Gfx[] = {
    #include "assets/levelGroup/Armadillo/ShellFour/ShellFour.gfx.inc.c"
};

Vtx Armadillo_ShellThree_Vtx[] = {
    #include "assets/levelGroup/Armadillo/ShellThree/ShellThree.vtx.inc.c"
};
Mtx Armadillo_IMtx10 = IDENTITY;

Gfx Armadillo_ShellThree_Gfx[] = {
    #include "assets/levelGroup/Armadillo/ShellThree/ShellThree.gfx.inc.c"
};

Vtx Armadillo_ShellOne_Vtx[] = {
    #include "assets/levelGroup/Armadillo/ShellOne/ShellOne.vtx.inc.c"
};
Mtx Armadillo_IMtx11 = IDENTITY;

Gfx Armadillo_ShellOne_Gfx[] = {
    #include "assets/levelGroup/Armadillo/ShellOne/ShellOne.gfx.inc.c"
};

Vtx Armadillo_Head_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Head/Head.vtx.inc.c"
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

Gfx Armadillo_Head_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Head/Head.gfx.inc.c"
};

Vtx Armadillo_Back_R_Foot_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Back_R_Foot/Back_R_Foot.vtx.inc.c"
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

Gfx Armadillo_Back_R_Foot_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Back_R_Foot/Back_R_Foot.gfx.inc.c"
};

Vtx Armadillo_Back_R_Leg_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Back_R_Leg/Back_R_Leg.vtx.inc.c"
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

Gfx Armadillo_Back_R_Leg_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Back_R_Leg/Back_R_Leg.gfx.inc.c"
};

Vtx Armadillo_Back_R_Thigh_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Back_R_Thigh/Back_R_Thigh.vtx.inc.c"
};
Mtx Armadillo_IMtx15 = IDENTITY;

Gfx Armadillo_Back_R_Thigh_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Back_R_Thigh/Back_R_Thigh.gfx.inc.c"
};

Vtx Armadillo_Front_R_Foot_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Front_R_Foot/Front_R_Foot.vtx.inc.c"
};
Mtx Armadillo_IMtx16 = IDENTITY;

Gfx Armadillo_Front_R_Foot_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Front_R_Foot/Front_R_Foot.gfx.inc.c"
};

Vtx Armadillo_Front_R_Leg_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Front_R_Leg/Front_R_Leg.vtx.inc.c"
};
Mtx Armadillo_IMtx17 = IDENTITY;

Gfx Armadillo_Front_R_Leg_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Front_R_Leg/Front_R_Leg.gfx.inc.c"
};

Vtx Armadillo_Front_R_Thigh_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Front_R_Thigh/Front_R_Thigh.vtx.inc.c"
};
Mtx Armadillo_IMtx18 = IDENTITY;

Gfx Armadillo_Front_R_Thigh_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Front_R_Thigh/Front_R_Thigh.gfx.inc.c"
};

Vtx Armadillo_Front_L_Foot_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Front_L_Foot/Front_L_Foot.vtx.inc.c"
};
Mtx Armadillo_IMtx19 = IDENTITY;

Gfx Armadillo_Front_L_Foot_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Front_L_Foot/Front_L_Foot.gfx.inc.c"
};

Vtx Armadillo_Front_L_Leg_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Front_L_Leg/Front_L_Leg.vtx.inc.c"
};
Mtx Armadillo_IMtx20 = IDENTITY;

Gfx Armadillo_Front_L_Leg_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Front_L_Leg/Front_L_Leg.gfx.inc.c"
};

Vtx Armadillo_Front_L_Thigh_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Front_L_Thigh/Front_L_Thigh.vtx.inc.c"
};
Mtx Armadillo_IMtx21 = IDENTITY;

Gfx Armadillo_Front_L_Thigh_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Front_L_Thigh/Front_L_Thigh.gfx.inc.c"
};

Vtx Armadillo_Back_L_Foot_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Back_L_Foot/Back_L_Foot.vtx.inc.c"
};
Mtx Armadillo_IMtx22 = IDENTITY;

Gfx Armadillo_Back_L_Foot_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Back_L_Foot/Back_L_Foot.gfx.inc.c"
};

Vtx Armadillo_Back_L_Leg_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Back_L_Leg/Back_L_Leg.vtx.inc.c"
};
Mtx Armadillo_IMtx23 = IDENTITY;

Gfx Armadillo_Back_L_Leg_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Back_L_Leg/Back_L_Leg.gfx.inc.c"
};

Vtx Armadillo_Back_L_Thigh_Vtx[] = {
    #include "assets/levelGroup/Armadillo/Back_L_Thigh/Back_L_Thigh.vtx.inc.c"
};
Mtx Armadillo_IMtx24 = IDENTITY;

Gfx Armadillo_Back_L_Thigh_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Back_L_Thigh/Back_L_Thigh.gfx.inc.c"
};

Vtx Armadillo_ShellTwo_Vtx[] = {
    #include "assets/levelGroup/Armadillo/ShellTwo/ShellTwo.vtx.inc.c"
};
Mtx Armadillo_IMtx25 = IDENTITY;

Gfx Armadillo_ShellTwo_Gfx[] = {
    #include "assets/levelGroup/Armadillo/ShellTwo/ShellTwo.gfx.inc.c"
};
Mtx Armadillo_IMtx26 = IDENTITY;

Gfx Armadillo_Model_Gfx[] = {
    #include "assets/levelGroup/Armadillo/Model/Model.gfx.inc.c"
};

Anim Armadillo_IdleHeader_Animh = {
    #include "assets/levelGroup/Armadillo/anim/IdleHeader.animH.inc.c"
};

Mtx Armadillo_Idle_Animarr[25][20] = {
    #include "assets/levelGroup/Armadillo/anim/Idle.animArr.inc.c"
};

Anim Armadillo_Idle2Header_Animh = {
    #include "assets/levelGroup/Armadillo/anim/Idle2Header.animH.inc.c"
};

Mtx Armadillo_Idle2_Animarr[21][20] = {
    #include "assets/levelGroup/Armadillo/anim/Idle2.animArr.inc.c"
};

AnimPointer Armadillo_IdlePointers_Animp[1] = {
{&Armadillo_IdleHeader_Animh.frames, &Armadillo_IdleHeader_Animh.objects, Armadillo_Idle_Animarr[0]}
};

AnimPointer Armadillo_Idle2Pointers_Animp[1] = {
{&Armadillo_Idle2Header_Animh.frames, &Armadillo_Idle2Header_Animh.objects, Armadillo_Idle2_Animarr[0]}
};

Anim Armadillo_UnrollHeader_Animh = {
    #include "assets/levelGroup/Armadillo/anim/UnrollHeader.animH.inc.c"
};

Mtx Armadillo_Unroll_Animarr[10][20] = {
    #include "assets/levelGroup/Armadillo/anim/Unroll.animArr.inc.c"
};

AnimPointer Armadillo_UnrollPointers_Animp[1] = {
{&Armadillo_UnrollHeader_Animh.frames, &Armadillo_UnrollHeader_Animh.objects, Armadillo_Unroll_Animarr[0]}
};

Anim Armadillo_WiggleUpsideDownHeader_Animh = {
    #include "assets/levelGroup/Armadillo/anim/WiggleUpsideDownHeader.animH.inc.c"
};

Mtx Armadillo_WiggleUpsideDown_Animarr[10][20] = {
    #include "assets/levelGroup/Armadillo/anim/WiggleUpsideDown.animArr.inc.c"
};

AnimPointer Armadillo_WiggleUpsideDownPointers_Animp[1] = {
{&Armadillo_WiggleUpsideDownHeader_Animh.frames, &Armadillo_WiggleUpsideDownHeader_Animh.objects, Armadillo_WiggleUpsideDown_Animarr[0]}
};

Anim Armadillo_TryGetUpHeader_Animh = {
    #include "assets/levelGroup/Armadillo/anim/TryGetUpHeader.animH.inc.c"
};

Mtx Armadillo_TryGetUp_Animarr[15][20] = {
    #include "assets/levelGroup/Armadillo/anim/TryGetUp.animArr.inc.c"
};

AnimPointer Armadillo_TryGetUpPointers_Animp[1] = {
{&Armadillo_TryGetUpHeader_Animh.frames, &Armadillo_TryGetUpHeader_Animh.objects, Armadillo_TryGetUp_Animarr[0]}
};

Anim Armadillo_GetUpHeader_Animh = {
    #include "assets/levelGroup/Armadillo/anim/GetUpHeader.animH.inc.c"
};

Mtx Armadillo_GetUp_Animarr[15][20] = {
    #include "assets/levelGroup/Armadillo/anim/GetUp.animArr.inc.c"
};

AnimPointer Armadillo_GetUpPointers_Animp[1] = {
{&Armadillo_GetUpHeader_Animh.frames, &Armadillo_GetUpHeader_Animh.objects, Armadillo_GetUp_Animarr[0]}
};
