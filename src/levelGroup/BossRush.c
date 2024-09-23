#include "common.h"

extern unsigned char Global_dcTHING2_ci4_PNG[];
extern unsigned char Global_dcTHING2_ci4_PAL[];
extern unsigned char Global_squares_i4_PNG[];
extern unsigned char Global_DCSmallTiles_ci4_PNG[];
extern unsigned char Global_DCSmallTiles_ci4_PAL[];
extern unsigned char Global_DCTiles_ci4_PNG[];
extern unsigned char Global_DCTiles_ci4_PAL[];
extern unsigned char Global_hexCombFade_i8_PNG[];
extern unsigned char Global_fogFade_ia8_PNG[];
extern unsigned char Global_GCThing1_ci4_PNG[];
extern unsigned char Global_GCThing1_ci4_PAL[];
extern unsigned char Global_pebbles_ci4_PNG[];
extern unsigned char Global_pebbles_ci4_PAL[];
extern unsigned char Global_strip2_i4_PNG[];
extern unsigned char Global_smallBrickWall_i4_PNG[];
extern unsigned char Global_fraMEd_ia4_PNG[];

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
extern Gfx BossRush_model1_Gfx[];
extern ModelCollision BossRush_unkCol1_ColH;
extern Gfx BossRush_model2_Gfx[];
extern ModelCollision BossRush_unkCol2_ColH;
extern Gfx BossRush_model3_Gfx[];
extern ModelCollision BossRush_unkCol3_ColH;
extern Gfx BossRush_model4_Gfx[];
extern ModelCollision BossRush_unkCol4_ColH;
extern Gfx BossRush_model5_Gfx[];
extern ModelCollision BossRush_unkCol5_ColH;
extern Gfx BossRush_model6_Gfx[];
extern ModelCollision BossRush_unkCol6_ColH;
extern Gfx BossRush_model7_Gfx[];
extern ModelCollision BossRush_unkCol7_ColH;
extern Gfx BossRush_model8_Gfx[];
extern ModelCollision BossRush_unkCol8_ColH;
extern Gfx BossRush_model9_Gfx[];
extern ModelCollision BossRush_unkCol9_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;


Mtx BossRush_IMtx1 = IDENTITY;

StageModel BossRush_stageModels[47] = {
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
{&BossRush_model1_Gfx[0], &BossRush_unkCol1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model2_Gfx[0], &BossRush_unkCol2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model3_Gfx[0], &BossRush_unkCol3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model4_Gfx[0], &BossRush_unkCol4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model5_Gfx[0], &BossRush_unkCol5_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model6_Gfx[0], &BossRush_unkCol6_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model7_Gfx[0], &BossRush_unkCol7_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model8_Gfx[0], &BossRush_unkCol8_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&BossRush_model9_Gfx[0], &BossRush_unkCol9_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
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

s32 BossRush_spriteLib_Sprlib[] = {
    14,
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
    0,
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
    0,
    0,
    0,
    -1,
    25000,
    60,
};

StageData BossRush_header_Lvlhdr = {
    &BossRush_map_data,
    0,
    &BossRush_stageModels[0],
    47,
    0,
    BossRush_rabObjects_Bin,
    131072,
    &BossRush_spriteLib_Sprlib[0],
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

Vec3f BossRush_unkCol1_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol1/unkCol1.colV.inc.c"
};

Vec3w BossRush_unkCol1_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol1/unkCol1.colT.inc.c"
};

Rect3D BossRush_unkCol1_ColS = {
    #include "assets/levelGroup/BossRush/unkCol1/unkCol1.colS.inc.c"
};

ModelCollision BossRush_unkCol1_ColH = {
32, 54, &BossRush_unkCol1_ColV[0], &BossRush_unkCol1_ColT[0], &BossRush_unkCol1_ColS
};

Vec3f BossRush_unkCol2_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol2/unkCol2.colV.inc.c"
};

Vec3w BossRush_unkCol2_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol2/unkCol2.colT.inc.c"
};

Rect3D BossRush_unkCol2_ColS = {
    #include "assets/levelGroup/BossRush/unkCol2/unkCol2.colS.inc.c"
};

ModelCollision BossRush_unkCol2_ColH = {
10, 10, &BossRush_unkCol2_ColV[0], &BossRush_unkCol2_ColT[0], &BossRush_unkCol2_ColS
};

Vec3f BossRush_unkCol3_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol3/unkCol3.colV.inc.c"
};

Vec3w BossRush_unkCol3_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol3/unkCol3.colT.inc.c"
};

Rect3D BossRush_unkCol3_ColS = {
    #include "assets/levelGroup/BossRush/unkCol3/unkCol3.colS.inc.c"
};

ModelCollision BossRush_unkCol3_ColH = {
12, 8, &BossRush_unkCol3_ColV[0], &BossRush_unkCol3_ColT[0], &BossRush_unkCol3_ColS
};

Vec3f BossRush_unkCol4_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol4/unkCol4.colV.inc.c"
};

Vec3w BossRush_unkCol4_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol4/unkCol4.colT.inc.c"
};

Rect3D BossRush_unkCol4_ColS = {
    #include "assets/levelGroup/BossRush/unkCol4/unkCol4.colS.inc.c"
};

ModelCollision BossRush_unkCol4_ColH = {
12, 8, &BossRush_unkCol4_ColV[0], &BossRush_unkCol4_ColT[0], &BossRush_unkCol4_ColS
};

Vec3f BossRush_unkCol5_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol5/unkCol5.colV.inc.c"
};

Vec3w BossRush_unkCol5_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol5/unkCol5.colT.inc.c"
};

Rect3D BossRush_unkCol5_ColS = {
    #include "assets/levelGroup/BossRush/unkCol5/unkCol5.colS.inc.c"
};

ModelCollision BossRush_unkCol5_ColH = {
8, 6, &BossRush_unkCol5_ColV[0], &BossRush_unkCol5_ColT[0], &BossRush_unkCol5_ColS
};

Vec3f BossRush_unkCol6_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol6/unkCol6.colV.inc.c"
};

Vec3w BossRush_unkCol6_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol6/unkCol6.colT.inc.c"
};

Rect3D BossRush_unkCol6_ColS = {
    #include "assets/levelGroup/BossRush/unkCol6/unkCol6.colS.inc.c"
};

ModelCollision BossRush_unkCol6_ColH = {
8, 8, &BossRush_unkCol6_ColV[0], &BossRush_unkCol6_ColT[0], &BossRush_unkCol6_ColS
};

Vec3f BossRush_unkCol7_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol7/unkCol7.colV.inc.c"
};

Vec3w BossRush_unkCol7_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol7/unkCol7.colT.inc.c"
};

Rect3D BossRush_unkCol7_ColS = {
    #include "assets/levelGroup/BossRush/unkCol7/unkCol7.colS.inc.c"
};

ModelCollision BossRush_unkCol7_ColH = {
16, 16, &BossRush_unkCol7_ColV[0], &BossRush_unkCol7_ColT[0], &BossRush_unkCol7_ColS
};

Vec3f BossRush_unkCol8_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol8/unkCol8.colV.inc.c"
};

Vec3w BossRush_unkCol8_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol8/unkCol8.colT.inc.c"
};

Rect3D BossRush_unkCol8_ColS = {
    #include "assets/levelGroup/BossRush/unkCol8/unkCol8.colS.inc.c"
};

ModelCollision BossRush_unkCol8_ColH = {
24, 20, &BossRush_unkCol8_ColV[0], &BossRush_unkCol8_ColT[0], &BossRush_unkCol8_ColS
};

Vec3f BossRush_unkCol9_ColV[] = {
    #include "assets/levelGroup/BossRush/unkCol9/unkCol9.colV.inc.c"
};

Vec3w BossRush_unkCol9_ColT[] = {
    #include "assets/levelGroup/BossRush/unkCol9/unkCol9.colT.inc.c"
};

Rect3D BossRush_unkCol9_ColS = {
    #include "assets/levelGroup/BossRush/unkCol9/unkCol9.colS.inc.c"
};

ModelCollision BossRush_unkCol9_ColH = {
6, 4, &BossRush_unkCol9_ColV[0], &BossRush_unkCol9_ColT[0], &BossRush_unkCol9_ColS
};
s32 bossRush_pad[2] = {0, 0};
Mtx BossRush_IMtx12 = IDENTITY;
