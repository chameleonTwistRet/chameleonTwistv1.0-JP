#include "BossRush.h"

Mtx BossRush_IMtx1 = IDENTITY;

StageModel BossRush_stageModels[] = {
#include "global_models.inc.c"
{BossRush_model1_Gfx, &BossRush_unkCol1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model2_Gfx, &BossRush_unkCol2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model3_Gfx, &BossRush_unkCol3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model4_Gfx, &BossRush_unkCol4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model5_Gfx, &BossRush_unkCol5_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model6_Gfx, &BossRush_unkCol6_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model7_Gfx, &BossRush_unkCol7_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model8_Gfx, &BossRush_unkCol8_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{BossRush_model9_Gfx, &BossRush_unkCol9_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char BossRush_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject BossRush_room0_objects[] = {
    {                                  {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {                                  {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {                                  {0.0,0.0,0.0},   {1.0,4.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 43, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                             {1000.0,0.0,400.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {                            {1000.0,0.0,-400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(-67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {                            {400.0,0.0,-1000.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {                           {-400.0,0.0,-1000.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {                           {-1000.0,0.0,-400.0},   {1.0,1.0,1.0}, 2,   DEGREES_TO_RADIANS_2PI(67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {                            {-1000.0,0.0,400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {                               {0.0,0.0,2000.0},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 3,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {                               {0.0,0.0,2000.0},   {4.0,4.0,4.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {                           {1000.0,-10.0,400.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {1000.0,-10.0,-400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(-67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {400.0,-10.0,-1000.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                         {-400.0,-10.0,-1000.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                         {-1000.0,-10.0,-400.0},   {1.0,1.0,1.0}, 2,   DEGREES_TO_RADIANS_2PI(67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {-1000.0,-10.0,400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                           {1000.0,-10.0,400.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {1000.0,-10.0,-400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(-67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {400.0,-10.0,-1000.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                         {-400.0,-10.0,-1000.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                         {-1000.0,-10.0,-400.0},   {1.0,1.0,1.0}, 2,   DEGREES_TO_RADIANS_2PI(67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {-1000.0,-10.0,400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                           {1000.0,-10.0,400.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {1000.0,-10.0,-400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(-67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {400.0,-10.0,-1000.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                         {-400.0,-10.0,-1000.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(22.000000043023345),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                         {-1000.0,-10.0,-400.0},   {1.0,1.0,1.0}, 2,   DEGREES_TO_RADIANS_2PI(67.99999733881295),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                          {-1000.0,-10.0,400.0},   {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(112.00000083995421),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {                                  {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {                              {0.0,10000.0,0.0}, {10.0,1.0,30.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  0, 4, 0, -1, 0, 0},
    {   {-1957.300048828125,-10.0,795.7999877929688},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {   {-1957.300048828125,-10.0,795.7999877929688},   {4.0,4.0,4.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {-1973.4000244140625,-10.0,-769.3499755859375},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {-1973.4000244140625,-10.0,-769.3499755859375},   {4.0,4.0,4.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {  {-779.7000122070312,-10.0,-1941.199951171875},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {-779.7000122070312,-10.0,-1941.199951171875},   {4.0,4.0,4.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {    {1957.300048828125,-10.0,795.7999877929688},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {    {1957.300048828125,-10.0,795.7999877929688},   {4.0,4.0,4.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {  {1973.4000244140625,-10.0,-769.3499755859375},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {1973.4000244140625,-10.0,-769.3499755859375},   {4.0,4.0,4.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {   {779.7000122070312,-10.0,-1941.199951171875},   {1.0,1.0,1.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {   {779.7000122070312,-10.0,-1941.199951171875},   {4.0,4.0,4.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {                                  {0.0,0.0,0.0},   {0.0,0.0,0.0}, 0,                 DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

SpriteActor BossRush_roomMulti_sprites[] = {
    {  2, 56,  {-2200.0,0.0,920.0}, {128.0,512.0,480.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 255, 128, 128, 255},
    {  2, 34, {-1900.0,0.0,-750.0}, {128.0,512.0,480.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 255, 128, 128, 255},
    {  2, 14, {-780.0,0.0,-2000.0}, {128.0,512.0,480.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 255, 128, 128, 255},
    {  2, 44,  {780.0,0.0,-2000.0}, {128.0,512.0,480.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 255, 128, 128, 255},
    {  2, 39,  {1900.0,0.0,-750.0}, {128.0,512.0,480.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 255, 128, 128, 255},
    {  2, 47,   {2200.0,0.0,920.0}, {128.0,512.0,480.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 255, 128, 128, 255},
    { -1,  0,     {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0,     -1, -1, 0,   0}
};

RoomObject BossRush_room1_objects[] = {
    { {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {0.0,0.0,0.0}, {10.0,1.0,30.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  0, 4, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomObject BossRush_roomMulti2_objects[] = {
    { {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 3,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {0.0,0.0,0.0}, {10.0,1.0,30.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  0, 4, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomObject BossRush_roomMulti3_objects[] = {
    { {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {0.0,0.0,0.0}, {10.0,1.0,30.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  0, 4, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomObject BossRush_roomMulti4_objects[] = {
    { {0.0,0.0,0.0},   {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 1600.0, 1600.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {0.0,0.0,0.0}, {10.0,1.0,30.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, 0, 0, 7,  0, 4, 0, -1, 0, 0},
    { {0.0,0.0,0.0},   {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

s32 BossRush_spriteLib_Sprlib[1][16] = {
{   14,
    39,
    44,
    47,
    34,
    56,
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

RoomInstance BossRush_room_instances[] = {
    {      BossRush_room0_objects, 0, 0, BossRush_roomMulti_sprites, 0, 0, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0,    10.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {      BossRush_room1_objects, 0, 0,                          0, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {      BossRush_room1_objects, 0, 0,                          0, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BossRush_roomMulti2_objects, 0, 0,                          0, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BossRush_roomMulti2_objects, 0, 0,                          0, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BossRush_roomMulti3_objects, 0, 0,                          0, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BossRush_roomMulti3_objects, 0, 0,                          0, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BossRush_roomMulti4_objects, 0, 0,                          0, 0, 0, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BossRush_roomMulti4_objects, 0, 0,                          0, 0, 0, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {                           0, 0, 0,                          0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0,   0.0,     0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

s32 BossRush_rooms_map[4][4] = {
{-1, 3, 4, -1},
{ 2, 0, 0,  5},
{ 1, 0, 0,  6},
{-1, 7, 8, -1},
};

StageMapData BossRush_map_data = {
    4, 4, BossRush_room_instances, BossRush_rooms_map,
};

RoomInstance BossRush_ext_room_instances[] = {
    { BossRush_room0_objects, 0, 0, BossRush_roomMulti_sprites, 0, 0, 0, 0,  0, 0, 45.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {                      0, 0, 0,                          0, 0, 0, 0, 0, -1, 0,  0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope BossRush_scope_Lvlscope = {
    {0.0f, 0.0f, 0.0f},
    -1,
    25000,
    60,
};

StageData BossRush_stageData = {
    &BossRush_map_data,
    NO_EXT_ROOMS,
    BossRush_stageModels,
    ARRAY_COUNT(BossRush_stageModels),
    0,
    BossRush_rabObjects_Bin,
    131072,
    BossRush_spriteLib_Sprlib,
    &BossRush_scope_Lvlscope,
};
Mtx BossRush_IMtx2 = IDENTITY;

Lights1 BossRush_bossScope1_Light =
    #include "assets/levelGroup/BossRush/bossScope1/bossScope1.light.inc.c"

Vtx BossRush_model1_Vtx[] = {
    #include "assets/levelGroup/BossRush/model1/model1.vtx.inc.c"
};
Mtx BossRush_IMtx3 = IDENTITY;

Gfx BossRush_model1_Gfx[] = {
    #include "assets/levelGroup/BossRush/model1/model1.gfx.inc.c"
};

Vtx BossRush_model2_Vtx[] = {
    #include "assets/levelGroup/BossRush/model2/model2.vtx.inc.c"
};
Mtx BossRush_IMtx4 = IDENTITY;

Gfx BossRush_model2_Gfx[] = {
    #include "assets/levelGroup/BossRush/model2/model2.gfx.inc.c"
};

Vtx BossRush_model3_Vtx[] = {
    #include "assets/levelGroup/BossRush/model3/model3.vtx.inc.c"
};
Mtx BossRush_IMtx5 = IDENTITY;

Gfx BossRush_model3_Gfx[] = {
    #include "assets/levelGroup/BossRush/model3/model3.gfx.inc.c"
};

Vtx BossRush_model4_Vtx[] = {
    #include "assets/levelGroup/BossRush/model4/model4.vtx.inc.c"
};
Mtx BossRush_IMtx6 = IDENTITY;

Gfx BossRush_model4_Gfx[] = {
    #include "assets/levelGroup/BossRush/model4/model4.gfx.inc.c"
};

Vtx BossRush_model5_Vtx[] = {
    #include "assets/levelGroup/BossRush/model5/model5.vtx.inc.c"
};
Mtx BossRush_IMtx7 = IDENTITY;

Gfx BossRush_model5_Gfx[] = {
    #include "assets/levelGroup/BossRush/model5/model5.gfx.inc.c"
};

Vtx BossRush_model6_Vtx[] = {
    #include "assets/levelGroup/BossRush/model6/model6.vtx.inc.c"
};
Mtx BossRush_IMtx8 = IDENTITY;

Gfx BossRush_model6_Gfx[] = {
    #include "assets/levelGroup/BossRush/model6/model6.gfx.inc.c"
};

Vtx BossRush_model7_Vtx[] = {
    #include "assets/levelGroup/BossRush/model7/model7.vtx.inc.c"
};
Mtx BossRush_IMtx9 = IDENTITY;

Gfx BossRush_model7_Gfx[] = {
    #include "assets/levelGroup/BossRush/model7/model7.gfx.inc.c"
};

Vtx BossRush_model8_Vtx[] = {
    #include "assets/levelGroup/BossRush/model8/model8.vtx.inc.c"
};
Mtx BossRush_IMtx10 = IDENTITY;

Gfx BossRush_model8_Gfx[] = {
    #include "assets/levelGroup/BossRush/model8/model8.gfx.inc.c"
};

Vtx BossRush_model9_Vtx[] = {
    #include "assets/levelGroup/BossRush/model9/model9.vtx.inc.c"
};
Mtx BossRush_IMtx11 = IDENTITY;

Gfx BossRush_model9_Gfx[] = {
    #include "assets/levelGroup/BossRush/model9/model9.gfx.inc.c"
};

Vec3f BossRush_unkCol1_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol1/unkCol1.colVerts.inc.c"
};

Vec3w BossRush_unkCol1_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol1/unkCol1.colTris.inc.c"
};

Rect3D BossRush_unkCol1_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol1/unkCol1.boundBox.inc.c"
};

ModelCollision BossRush_unkCol1_collision = {
    ARRAY_COUNT(BossRush_unkCol1_ColVerts), ARRAY_COUNT(BossRush_unkCol1_ColTris), BossRush_unkCol1_ColVerts, BossRush_unkCol1_ColTris, &BossRush_unkCol1_BoundBox
};

Vec3f BossRush_unkCol2_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol2/unkCol2.colVerts.inc.c"
};

Vec3w BossRush_unkCol2_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol2/unkCol2.colTris.inc.c"
};

Rect3D BossRush_unkCol2_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol2/unkCol2.boundBox.inc.c"
};

ModelCollision BossRush_unkCol2_collision = {
    ARRAY_COUNT(BossRush_unkCol2_ColVerts), ARRAY_COUNT(BossRush_unkCol2_ColTris), BossRush_unkCol2_ColVerts, BossRush_unkCol2_ColTris, &BossRush_unkCol2_BoundBox
};

Vec3f BossRush_unkCol3_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol3/unkCol3.colVerts.inc.c"
};

Vec3w BossRush_unkCol3_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol3/unkCol3.colTris.inc.c"
};

Rect3D BossRush_unkCol3_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol3/unkCol3.boundBox.inc.c"
};

ModelCollision BossRush_unkCol3_collision = {
    ARRAY_COUNT(BossRush_unkCol3_ColVerts), ARRAY_COUNT(BossRush_unkCol3_ColTris), BossRush_unkCol3_ColVerts, BossRush_unkCol3_ColTris, &BossRush_unkCol3_BoundBox
};

Vec3f BossRush_unkCol4_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol4/unkCol4.colVerts.inc.c"
};

Vec3w BossRush_unkCol4_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol4/unkCol4.colTris.inc.c"
};

Rect3D BossRush_unkCol4_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol4/unkCol4.boundBox.inc.c"
};

ModelCollision BossRush_unkCol4_collision = {
    ARRAY_COUNT(BossRush_unkCol4_ColVerts), ARRAY_COUNT(BossRush_unkCol4_ColTris), BossRush_unkCol4_ColVerts, BossRush_unkCol4_ColTris, &BossRush_unkCol4_BoundBox
};

Vec3f BossRush_unkCol5_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol5/unkCol5.colVerts.inc.c"
};

Vec3w BossRush_unkCol5_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol5/unkCol5.colTris.inc.c"
};

Rect3D BossRush_unkCol5_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol5/unkCol5.boundBox.inc.c"
};

ModelCollision BossRush_unkCol5_collision = {
    ARRAY_COUNT(BossRush_unkCol5_ColVerts), ARRAY_COUNT(BossRush_unkCol5_ColTris), BossRush_unkCol5_ColVerts, BossRush_unkCol5_ColTris, &BossRush_unkCol5_BoundBox
};

Vec3f BossRush_unkCol6_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol6/unkCol6.colVerts.inc.c"
};

Vec3w BossRush_unkCol6_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol6/unkCol6.colTris.inc.c"
};

Rect3D BossRush_unkCol6_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol6/unkCol6.boundBox.inc.c"
};

ModelCollision BossRush_unkCol6_collision = {
    ARRAY_COUNT(BossRush_unkCol6_ColVerts), ARRAY_COUNT(BossRush_unkCol6_ColTris), BossRush_unkCol6_ColVerts, BossRush_unkCol6_ColTris, &BossRush_unkCol6_BoundBox
};

Vec3f BossRush_unkCol7_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol7/unkCol7.colVerts.inc.c"
};

Vec3w BossRush_unkCol7_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol7/unkCol7.colTris.inc.c"
};

Rect3D BossRush_unkCol7_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol7/unkCol7.boundBox.inc.c"
};

ModelCollision BossRush_unkCol7_collision = {
    ARRAY_COUNT(BossRush_unkCol7_ColVerts), ARRAY_COUNT(BossRush_unkCol7_ColTris), BossRush_unkCol7_ColVerts, BossRush_unkCol7_ColTris, &BossRush_unkCol7_BoundBox
};

Vec3f BossRush_unkCol8_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol8/unkCol8.colVerts.inc.c"
};

Vec3w BossRush_unkCol8_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol8/unkCol8.colTris.inc.c"
};

Rect3D BossRush_unkCol8_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol8/unkCol8.boundBox.inc.c"
};

ModelCollision BossRush_unkCol8_collision = {
    ARRAY_COUNT(BossRush_unkCol8_ColVerts), ARRAY_COUNT(BossRush_unkCol8_ColTris), BossRush_unkCol8_ColVerts, BossRush_unkCol8_ColTris, &BossRush_unkCol8_BoundBox
};

Vec3f BossRush_unkCol9_ColVerts[] = {
    #include "assets/levelGroup/BossRush/unkCol9/unkCol9.colVerts.inc.c"
};

Vec3w BossRush_unkCol9_ColTris[] = {
    #include "assets/levelGroup/BossRush/unkCol9/unkCol9.colTris.inc.c"
};

Rect3D BossRush_unkCol9_BoundBox = {
    #include "assets/levelGroup/BossRush/unkCol9/unkCol9.boundBox.inc.c"
};

ModelCollision BossRush_unkCol9_collision = {
    ARRAY_COUNT(BossRush_unkCol9_ColVerts), ARRAY_COUNT(BossRush_unkCol9_ColTris), BossRush_unkCol9_ColVerts, BossRush_unkCol9_ColTris, &BossRush_unkCol9_BoundBox
};
s32 bossRush_pad[2] = {0, 0};
Mtx BossRush_IMtx12 = IDENTITY;
