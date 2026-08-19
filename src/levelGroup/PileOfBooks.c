#include "PileOfBooks.h"

Mtx PileOfBooks_IMtx1 = IDENTITY;

StageModel PileOfBooks_stageModels[] = {
#include "global_models.inc.c"
{PileOfBooks_model1_Gfx, &PileOfBooks_unkCol1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{PileOfBooks_model2_Gfx, &PileOfBooks_unkCol2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{PileOfBooks_model3_Gfx, &PileOfBooks_unkCol3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{PileOfBooks_model4_Gfx, &PileOfBooks_unkCol4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{PileOfBooks_model5_Gfx, &PileOfBooks_unkCol5_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{PileOfBooks_model6_Gfx, &PileOfBooks_unkCol6_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char PileOfBooks_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject PileOfBooks_roomMulti_objects[] = {
    { {0.0,0.0,3300.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  3300.0, 0.0, 15, 300, -2,    0, 0, 0,  7, -1, -1, 20, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,3100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  3100.0, 0.0, 20, 300, -2,    0, 0, 0,  7, -1, -1, 20, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,2900.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2900.0, 0.0, 25, 300, -2,    0, 0, 0,  7, -1, -1, 20, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2700.0, 0.0, 30, 300, -2,    0, 0, 0,  7, -1, -1, 20, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2500.0, 0.0, 35, 300, -2,    0, 0, 0,  7, -1, -1, 20, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,2300.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2300.0, 0.0, 40, 300, -2,    0, 0, 0,  7, -1, -1, 20, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,2100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0, -20000.0,  2100.0, 0.0, 45, 300, -2,    0, 0, 0,  7, -1, -1, 20, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0, 38, -1, 20, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,    400.0,     0.0, 0.0,  3,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,3600.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {    {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomObject PileOfBooks_room2_objects[] = {
    { {0.0,2000.0,-3300.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,    0.0, -3300.0, 0.0, 165, 30, 150000,    0, 0, 0,  7, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,2000.0,-3100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,    0.0, -3100.0, 0.0, 160, 30, 150000,    0, 0, 0,  7, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,2000.0,-2900.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,    0.0, -2900.0, 0.0, 155, 30, 150000,    0, 0, 0,  7, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,2000.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,    0.0, -2700.0, 0.0, 150, 30, 150000,    0, 0, 0,  7, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,2000.0,-2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,    0.0, -2500.0, 0.0, 145, 30, 150000,    0, 0, 0,  7, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,2000.0,-2300.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,    0.0, -2300.0, 0.0, 140, 30, 150000,    0, 0, 0,  7, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,2000.0,-2100.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 5,    0.0,    0.0, -2100.0, 0.0, 135, 30, 150000,    0, 0, 0,  7, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0,      0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,   0, 90,      0, 1000, 0, 0, 38, -1, 22, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0,      0,    0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0,      0,    0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,   3,  1,      0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {     {0.0,0.0,3600.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,   0, 90,      0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {    {0.0,0.0,-3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0,      0,    0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,-3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0,      0,    0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,-3600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,   1,  1,      0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {    {0.0,0.0,-3600.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,   0, 90,      0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0,   0,  0,      0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor PileOfBooks_room0_actors[] = {
    { PILE_OF_BOOKS, {0.0,0.0,0.0}, 270.0, -10000.0, 10000.0, 0, 0.0, -10000.0, 10000.0, 0, 2250000.0, 7.0, 3.0, 60.0, 0, 0.10000000149011612f, 0, 0, 4.0f, 4.0f, 12.0f, 24.0f},
    {    ACTOR_NULL, {0.0,0.0,0.0},   0.0,      0.0,     0.0, 0, 0.0,      0.0,     0.0, 0,       0.0, 0.0, 0.0,  0.0, 0,                    0, 0, 0,    0,    0,     0,     0}
};

RoomActor PileOfBooks_room1_actors[] = {
    { PILE_OF_BOOKS, {0.0,0.0,0.0}, 270.0, -10000.0, 10000.0, 0, 0.0, -10000.0, 10000.0, 0, 2250000.0, 12.0, 5.0, 75.0, 0.6000000238418579f, 0.10000000149011612f, 0, 0, 4.0f, 6.0f, 2.0f, 16.0f},
    {    ACTOR_NULL, {0.0,0.0,0.0},   0.0,      0.0,     0.0, 0, 0.0,      0.0,     0.0, 0,       0.0,  0.0, 0.0,  0.0,                   0,                    0, 0, 0,    0,    0,    0,     0}
};

s32 PileOfBooks_spriteLib_Sprlib[2][16] = {
{   47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
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

RoomObject PileOfBooks_room3_objects[] = {
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {  {0.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 3,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {0.0,0.0,2700.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {0.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,-2700.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {    {0.0,5.0,10.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {    {0.0,5.0,10.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomInstance PileOfBooks_room_instances[] = {
    { PileOfBooks_roomMulti_objects, PileOfBooks_room0_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 15, -400.0, 200.0, 0.0, 0.0, 0.0, 65.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    { PileOfBooks_roomMulti_objects, PileOfBooks_room1_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 15, -400.0, 200.0, 0.0, 0.0, 0.0, 65.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1500.0, 200.0},
    {     PileOfBooks_room2_objects,                        0, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 10, -400.0, 200.0, 0.0, 0.0, 0.0, 65.0, 1.0, 0, 0, 0, 0, 0, 0, 0, 0,    -1.0,   0.0},
    {     PileOfBooks_room3_objects,                        0, 0, 0, 0, 0, 2, 0, -1, 0, 0.0, 10, -400.0, 200.0, 0.0, 0.0, 0.0,  0.0, 1.0, 0, 0, 0, 0, 0, 0, 0, 0,    -1.0,   0.0},
    {                             0,                        0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0,  0,    0.0,   0.0, 0.0, 0.0, 0.0,  0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0,    -1.0,   0.0}
};

s32 PileOfBooks_rooms_map[4][3] = {
    {-1, 3, -1},
    {-1, 2, -1},
    {-1, 1, -1},
    {-1, 0, -1}
};

StageMapData PileOfBooks_map_data = {
    3, 4, PileOfBooks_room_instances, PileOfBooks_rooms_map,
};

SpriteActor PileOfBooks_roomUnk_sprites[] = {
    { -1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomInstance PileOfBooks_ext_room_instances[] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope PileOfBooks_scope_Lvlscope = {
    {0.0f, 0.0f, 0.0f},
    255,
    10000,
    60,
};

StageData PileOfBooks_stageData = {
    &PileOfBooks_map_data,
    NO_EXT_ROOMS,
    PileOfBooks_stageModels,
    ARRAY_COUNT(PileOfBooks_stageModels),
    0,
    PileOfBooks_rabObjects_Bin,
    131072,
    PileOfBooks_spriteLib_Sprlib,
    &PileOfBooks_scope_Lvlscope,
};
s32 pob_pad2[] = {0, 0, 0};
Mtx PileOfBooks_IMtx2 = IDENTITY;

Lights1 PileOfBooks_pobScope_Light =
    #include "assets/levelGroup/PileOfBooks/pobScope/pobScope.light.inc.c"

Vtx PileOfBooks_model1_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/model1/model1.vtx.inc.c"
};
Mtx PileOfBooks_IMtx3 = IDENTITY;

Gfx PileOfBooks_model1_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/model1/model1.gfx.inc.c"
};

Vtx PileOfBooks_model2_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/model2/model2.vtx.inc.c"
};
Mtx PileOfBooks_IMtx4 = IDENTITY;

Gfx PileOfBooks_model2_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/model2/model2.gfx.inc.c"
};

Vtx PileOfBooks_model3_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/model3/model3.vtx.inc.c"
};
Mtx PileOfBooks_IMtx5 = IDENTITY;

Gfx PileOfBooks_model3_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/model3/model3.gfx.inc.c"
};

Vtx PileOfBooks_model4_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/model4/model4.vtx.inc.c"
};
Mtx PileOfBooks_IMtx6 = IDENTITY;

Gfx PileOfBooks_model4_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/model4/model4.gfx.inc.c"
};

Vtx PileOfBooks_model5_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/model5/model5.vtx.inc.c"
};
Mtx PileOfBooks_IMtx7 = IDENTITY;

Gfx PileOfBooks_model5_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/model5/model5.gfx.inc.c"
};

Vtx PileOfBooks_model6_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/model6/model6.vtx.inc.c"
};
Mtx PileOfBooks_IMtx8 = IDENTITY;

Gfx PileOfBooks_model6_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/model6/model6.gfx.inc.c"
};

Vec3f PileOfBooks_unkCol1_ColVerts[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colVerts.inc.c"
};

Vec3w PileOfBooks_unkCol1_ColTris[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colTris.inc.c"
};

Rect3D PileOfBooks_unkCol1_BoundBox = {
    #include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.boundBox.inc.c"
};

ModelCollision PileOfBooks_unkCol1_collision = {
    ARRAY_COUNT(PileOfBooks_unkCol1_ColVerts), ARRAY_COUNT(PileOfBooks_unkCol1_ColTris), PileOfBooks_unkCol1_ColVerts, PileOfBooks_unkCol1_ColTris, &PileOfBooks_unkCol1_BoundBox
};

Vec3f PileOfBooks_unkCol2_ColVerts[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colVerts.inc.c"
};

Vec3w PileOfBooks_unkCol2_ColTris[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colTris.inc.c"
};

Rect3D PileOfBooks_unkCol2_BoundBox = {
    #include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.boundBox.inc.c"
};

ModelCollision PileOfBooks_unkCol2_collision = {
    ARRAY_COUNT(PileOfBooks_unkCol2_ColVerts), ARRAY_COUNT(PileOfBooks_unkCol2_ColTris), PileOfBooks_unkCol2_ColVerts, PileOfBooks_unkCol2_ColTris, &PileOfBooks_unkCol2_BoundBox
};

Vec3f PileOfBooks_unkCol3_ColVerts[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol3/unkCol3.colVerts.inc.c"
};

Vec3w PileOfBooks_unkCol3_ColTris[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol3/unkCol3.colTris.inc.c"
};

Rect3D PileOfBooks_unkCol3_BoundBox = {
    #include "assets/levelGroup/PileOfBooks/unkCol3/unkCol3.boundBox.inc.c"
};

ModelCollision PileOfBooks_unkCol3_collision = {
    ARRAY_COUNT(PileOfBooks_unkCol3_ColVerts), ARRAY_COUNT(PileOfBooks_unkCol3_ColTris), PileOfBooks_unkCol3_ColVerts, PileOfBooks_unkCol3_ColTris, &PileOfBooks_unkCol3_BoundBox
};

Vec3f PileOfBooks_unkCol4_ColVerts[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol4/unkCol4.colVerts.inc.c"
};

Vec3w PileOfBooks_unkCol4_ColTris[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol4/unkCol4.colTris.inc.c"
};

Rect3D PileOfBooks_unkCol4_BoundBox = {
    #include "assets/levelGroup/PileOfBooks/unkCol4/unkCol4.boundBox.inc.c"
};

ModelCollision PileOfBooks_unkCol4_collision = {
    ARRAY_COUNT(PileOfBooks_unkCol4_ColVerts), ARRAY_COUNT(PileOfBooks_unkCol4_ColTris), PileOfBooks_unkCol4_ColVerts, PileOfBooks_unkCol4_ColTris, &PileOfBooks_unkCol4_BoundBox
};

Vec3f PileOfBooks_unkCol5_ColVerts[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol5/unkCol5.colVerts.inc.c"
};

Vec3w PileOfBooks_unkCol5_ColTris[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol5/unkCol5.colTris.inc.c"
};

Rect3D PileOfBooks_unkCol5_BoundBox = {
    #include "assets/levelGroup/PileOfBooks/unkCol5/unkCol5.boundBox.inc.c"
};

ModelCollision PileOfBooks_unkCol5_collision = {
    ARRAY_COUNT(PileOfBooks_unkCol5_ColVerts), ARRAY_COUNT(PileOfBooks_unkCol5_ColTris), PileOfBooks_unkCol5_ColVerts, PileOfBooks_unkCol5_ColTris, &PileOfBooks_unkCol5_BoundBox
};

Vec3f PileOfBooks_unkCol6_ColVerts[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol6/unkCol6.colVerts.inc.c"
};

Vec3w PileOfBooks_unkCol6_ColTris[] = {
    #include "assets/levelGroup/PileOfBooks/unkCol6/unkCol6.colTris.inc.c"
};

Rect3D PileOfBooks_unkCol6_BoundBox = {
    #include "assets/levelGroup/PileOfBooks/unkCol6/unkCol6.boundBox.inc.c"
};

ModelCollision PileOfBooks_unkCol6_collision = {
    ARRAY_COUNT(PileOfBooks_unkCol6_ColVerts), ARRAY_COUNT(PileOfBooks_unkCol6_ColTris), PileOfBooks_unkCol6_ColVerts, PileOfBooks_unkCol6_ColTris, &PileOfBooks_unkCol6_BoundBox
};
Mtx PileOfBooks_IMtx9 = IDENTITY;

Lights1 PileOfBooks_pobScope2_Light =
    #include "assets/levelGroup/PileOfBooks/pobScope2/pobScope2.light.inc.c"

Vtx PileOfBooks_a_model1_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model1/a_model1.vtx.inc.c"
};
Mtx PileOfBooks_IMtx10 = IDENTITY;
unsigned char PileOfBooks_Pad1[] = FILEPAD;
unsigned char PileOfBooks_cTbarrel_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/cTbarrel.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad2[] = FILEPAD;
unsigned char PileOfBooks_cTbarrel_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/cTbarrel.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad3[] = FILEPAD;
unsigned char PileOfBooks_barrelSide_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/barrelSide.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad4[] = FILEPAD;
unsigned char PileOfBooks_barrelSide_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/barrelSide.ci4.pal.inc.c"
};

Gfx PileOfBooks_a_model1_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model1/a_model1.gfx.inc.c"
};

Vtx PileOfBooks_a_model2_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model2/a_model2.vtx.inc.c"
};
Mtx PileOfBooks_IMtx11 = IDENTITY;

Gfx PileOfBooks_a_model2_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model2/a_model2.gfx.inc.c"
};

Vtx PileOfBooks_a_model3_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model3/a_model3.vtx.inc.c"
};
Mtx PileOfBooks_IMtx12 = IDENTITY;

Gfx PileOfBooks_a_model3_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model3/a_model3.gfx.inc.c"
};

Vtx PileOfBooks_a_model4_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model4/a_model4.vtx.inc.c"
};
Mtx PileOfBooks_IMtx13 = IDENTITY;
unsigned char PileOfBooks_Pad5[] = FILEPAD;
unsigned char PileOfBooks_painting_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/painting.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad6[] = FILEPAD;
unsigned char PileOfBooks_painting_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/painting.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad7[] = FILEPAD;
unsigned char PileOfBooks_color_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad8[] = FILEPAD;
unsigned char PileOfBooks_color_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color.ci4.pal.inc.c"
};

Gfx PileOfBooks_a_model4_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model4/a_model4.gfx.inc.c"
};

Vtx PileOfBooks_a_model5_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model5/a_model5.vtx.inc.c"
};
Mtx PileOfBooks_IMtx14 = IDENTITY;
unsigned char PileOfBooks_Pad9[] = FILEPAD;
unsigned char PileOfBooks_crate_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/crate.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad10[] = FILEPAD;
unsigned char PileOfBooks_crate_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/crate.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad11[] = FILEPAD;
unsigned char PileOfBooks_wood_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/wood.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad12[] = FILEPAD;
unsigned char PileOfBooks_wood_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/wood.ci4.pal.inc.c"
};

Gfx PileOfBooks_a_model5_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model5/a_model5.gfx.inc.c"
};

Vtx PileOfBooks_a_model6_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model6/a_model6.vtx.inc.c"
};
Mtx PileOfBooks_IMtx15 = IDENTITY;

Gfx PileOfBooks_a_model6_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model6/a_model6.gfx.inc.c"
};

Vtx PileOfBooks_a_model7_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model7/a_model7.vtx.inc.c"
};
Mtx PileOfBooks_IMtx16 = IDENTITY;

Gfx PileOfBooks_a_model7_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model7/a_model7.gfx.inc.c"
};

Vtx PileOfBooks_a_model8_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model8/a_model8.vtx.inc.c"
};
Mtx PileOfBooks_IMtx17 = IDENTITY;

Gfx PileOfBooks_a_model8_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model8/a_model8.gfx.inc.c"
};

Vtx PileOfBooks_a_model9_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model9/a_model9.vtx.inc.c"
};
Mtx PileOfBooks_IMtx18 = IDENTITY;
unsigned char PileOfBooks_Pad13[] = FILEPAD;
unsigned char PileOfBooks_drawer_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/drawer.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad14[] = FILEPAD;
unsigned char PileOfBooks_drawer_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/drawer.ci4.pal.inc.c"
};

Gfx PileOfBooks_a_model9_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model9/a_model9.gfx.inc.c"
};

Vtx PileOfBooks_a_model19_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model19/a_model19.vtx.inc.c"
};
Mtx PileOfBooks_IMtx19 = IDENTITY;

Gfx PileOfBooks_a_model19_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model19/a_model19.gfx.inc.c"
};

Vtx PileOfBooks_a_model10_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model10/a_model10.vtx.inc.c"
};
Mtx PileOfBooks_IMtx20 = IDENTITY;
unsigned char PileOfBooks_Pad15[] = FILEPAD;
unsigned char PileOfBooks_color2_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color2.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad16[] = FILEPAD;
unsigned char PileOfBooks_color2_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color2.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad17[] = FILEPAD;
unsigned char PileOfBooks_scroll_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/scroll.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad18[] = FILEPAD;
unsigned char PileOfBooks_scroll_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/scroll.ci4.pal.inc.c"
};

Gfx PileOfBooks_a_model10_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model10/a_model10.gfx.inc.c"
};

Vtx PileOfBooks_a_model11_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model11/a_model11.vtx.inc.c"
};
Mtx PileOfBooks_IMtx21 = IDENTITY;

Gfx PileOfBooks_a_model11_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model11/a_model11.gfx.inc.c"
};

Vtx PileOfBooks_a_model12_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model12/a_model12.vtx.inc.c"
};
Mtx PileOfBooks_IMtx22 = IDENTITY;

Gfx PileOfBooks_a_model12_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model12/a_model12.gfx.inc.c"
};

Vtx PileOfBooks_a_model13_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model13/a_model13.vtx.inc.c"
};
Mtx PileOfBooks_IMtx23 = IDENTITY;

Gfx PileOfBooks_a_model13_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model13/a_model13.gfx.inc.c"
};

Vtx PileOfBooks_a_model14_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model14/a_model14.vtx.inc.c"
};
Mtx PileOfBooks_IMtx24 = IDENTITY;

Gfx PileOfBooks_a_model14_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model14/a_model14.gfx.inc.c"
};
Mtx PileOfBooks_IMtx25 = IDENTITY;

Gfx PileOfBooks_a_model15_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model15/a_model15.gfx.inc.c"
};

Vtx PileOfBooks_a_model16_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model16/a_model16.vtx.inc.c"
};
Mtx PileOfBooks_IMtx26 = IDENTITY;
unsigned char PileOfBooks_Pad19[] = FILEPAD;
unsigned char PileOfBooks_sandal_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/sandal.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad20[] = FILEPAD;
unsigned char PileOfBooks_sandal_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/sandal.ci8.pal.inc.c"
};
unsigned char PileOfBooks_Pad21[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_face_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_face.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad22[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_face_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_face.ci8.pal.inc.c"
};
unsigned char PileOfBooks_Pad23[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_side_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_side.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad24[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_side_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_side.ci8.pal.inc.c"
};

Gfx PileOfBooks_a_model16_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model16/a_model16.gfx.inc.c"
};

Vtx PileOfBooks_a_model17_Vtx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model17/a_model17.vtx.inc.c"
};
Mtx PileOfBooks_IMtx27 = IDENTITY;
unsigned char PileOfBooks_Pad25[] = FILEPAD;
unsigned char PileOfBooks_thing_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/thing.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad26[] = FILEPAD;
unsigned char PileOfBooks_thing_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/thing.ci8.pal.inc.c"
};

Gfx PileOfBooks_a_model17_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model17/a_model17.gfx.inc.c"
};
Mtx PileOfBooks_IMtx28 = IDENTITY;

Gfx PileOfBooks_a_model18_Gfx[] = {
    #include "assets/levelGroup/PileOfBooks/a_model18/a_model18.gfx.inc.c"
};

Anim PileOfBooks_unk1Header_Animh = {
    #include "assets/levelGroup/PileOfBooks/anim/unk1Header.animH.inc.c"
};

Mtx PileOfBooks_unk1_Animarr[90][15] = {
    #include "assets/levelGroup/PileOfBooks/anim/unk1.animArr.inc.c"
};

AnimPointer PileOfBooks_unk1Pointers_Animp[1] = {
{&PileOfBooks_unk1Header_Animh.frames, &PileOfBooks_unk1Header_Animh.objects, PileOfBooks_unk1_Animarr[0]}
};

Anim PileOfBooks_unk2Header_Animh = {
    #include "assets/levelGroup/PileOfBooks/anim/unk2Header.animH.inc.c"
};

Mtx PileOfBooks_unk2_Animarr[100][15] = {
    #include "assets/levelGroup/PileOfBooks/anim/unk2.animArr.inc.c"
};

AnimPointer PileOfBooks_unk2Pointers_Animp[1] = {
{&PileOfBooks_unk2Header_Animh.frames, &PileOfBooks_unk2Header_Animh.objects, PileOfBooks_unk2_Animarr[0]}
};

Anim PileOfBooks_unk3Header_Animh = {
    #include "assets/levelGroup/PileOfBooks/anim/unk3Header.animH.inc.c"
};

Mtx PileOfBooks_unk3_Animarr[12][15] = {
    #include "assets/levelGroup/PileOfBooks/anim/unk3.animArr.inc.c"
};

AnimPointer PileOfBooks_unk3Pointers_Animp[1] = {
{&PileOfBooks_unk3Header_Animh.frames, &PileOfBooks_unk3Header_Animh.objects, PileOfBooks_unk3_Animarr[0]}
};

Anim PileOfBooks_unk4Header_Animh = {
    #include "assets/levelGroup/PileOfBooks/anim/unk4Header.animH.inc.c"
};

Mtx PileOfBooks_unk4_Animarr[40][15] = {
    #include "assets/levelGroup/PileOfBooks/anim/unk4.animArr.inc.c"
};

AnimPointer PileOfBooks_unk4Pointers_Animp[1] = {
{&PileOfBooks_unk4Header_Animh.frames, &PileOfBooks_unk4Header_Animh.objects, PileOfBooks_unk4_Animarr[0]}
};

Anim PileOfBooks_unk5Header_Animh = {
    #include "assets/levelGroup/PileOfBooks/anim/unk5Header.animH.inc.c"
};

Mtx PileOfBooks_unk5_Animarr[10][2] = {
    #include "assets/levelGroup/PileOfBooks/anim/unk5.animArr.inc.c"
};

AnimPointer PileOfBooks_unk5Pointers_Animp[1] = {
{&PileOfBooks_unk5Header_Animh.frames, &PileOfBooks_unk5Header_Animh.objects, PileOfBooks_unk5_Animarr[0]}
};
