#include "common.h"


extern unsigned char Global_cabinetFade_ci8_PAL[];
extern unsigned char Global_cabinetFade_ci8_PNG[];
extern unsigned char Global_GCWood_ci4_PAL[];
extern unsigned char Global_GCWood_ci4_PNG[];
extern unsigned char Global_GCTiles_ci4_PAL[];
extern unsigned char Global_GCTiles_ci4_PNG[];
extern unsigned char Global_Darkwood_ci4_PAL[];
extern unsigned char Global_Darkwood_ci4_PNG[];
extern unsigned char Global_water_ci4_PAL[];
extern unsigned char Global_water_ci4_PNG[];
extern unsigned char Global_sander_ci4_PAL[];
extern unsigned char Global_sander_ci4_PNG[];
extern unsigned char Global_GCWall_ci4_PAL[];
extern unsigned char Global_GCWall_ci4_PNG[];
extern unsigned char Global_wood_ci4_PAL[];
extern unsigned char Global_wood_ci4_PNG[];
extern unsigned char Global_windows_ia4_PNG[];
extern unsigned char Global_sandFadeTop_ci4_PAL[];
extern unsigned char Global_sandFadeTop_ci4_PNG[];
extern unsigned char Global_DCSandWallFadeUp_ci8_PAL[];
extern unsigned char Global_DCSandWallFadeUp_ci8_PNG[];
extern unsigned char Global_cabinet_ci4_PAL[];
extern unsigned char Global_cabinet_ci4_PNG[];
extern unsigned char Global_GCWall2_ci4_PAL[];
extern unsigned char Global_GCWall2_ci4_PNG[];
extern unsigned char Global_DCTiles_ci4_PAL[];
extern unsigned char Global_DCTiles_ci4_PNG[];
extern unsigned char Global_GCBigCabinet_ci4_PAL[];
extern unsigned char Global_GCBigCabinet_ci4_PNG[];
extern unsigned char Global_GCThing1_ci4_PAL[];
extern unsigned char Global_GCThing1_ci4_PNG[];
extern unsigned char Global_woodFade_ci8_PAL[];
extern unsigned char Global_woodFade_ci8_PNG[];
extern unsigned char Global_GCFloorboard_ci4_PAL[];
extern unsigned char Global_GCFloorboard_ci4_PNG[];
extern unsigned char Global_poleWood_ci8_PAL[];
extern unsigned char Global_poleWood_ci8_PNG[];

extern Gfx Global_fallbackCube_Gfx[];
extern ModelCollision Global_fallbackCube_collision;
extern Gfx Global_exitShadowSouth_Gfx[];
extern ModelCollision Global_exitShadowSouth_collision;
extern Gfx Global_exitShadowNorth_Gfx[];
extern ModelCollision Global_exitShadowNorth_collision;
extern Gfx Global_exitShadowEast_Gfx[];
extern ModelCollision Global_exitShadowEast_collision;
extern Gfx Global_exitShadowWest_Gfx[];
extern ModelCollision Global_exitShadowWest_collision;
extern Gfx Global_ALBLExit_Gfx[];
extern ModelCollision Global_ALBLExit_collision;
extern Gfx Global_sandPit_Gfx[];
extern ModelCollision Global_sandPit_collision;
extern Gfx Global_BossBridge_Gfx[];
extern ModelCollision Global_BossBridge_collision;
extern Gfx Global_ALPole_Gfx[];
extern ModelCollision Global_ALPole_collision;
extern Gfx Global_ALBLDoor_Gfx[];
extern ModelCollision Global_ALBLDoor_collision;
extern Gfx Global_ALSpinDoor_Gfx[];
extern ModelCollision Global_ALSpinDoor_collision;
extern Gfx Global_BLLavaFloor_Gfx[];
extern ModelCollision Global_BLLavaFloor_collision;
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava_collision;
extern Gfx Global_BLLava2_Gfx[];
extern ModelCollision Global_BLLava2_collision;
extern Gfx Global_BLLava3_Gfx[];
extern ModelCollision Global_BLLava3_collision;
extern Gfx Global_BLLava4_Gfx[];
extern ModelCollision Global_BLLava4_collision;
extern Gfx Global_BLLava5_Gfx[];
extern ModelCollision Global_BLLava5_collision;
extern Gfx Global_BLLava6_Gfx[];
extern ModelCollision Global_BLLava6_collision;
extern Gfx Global_BLLava7_Gfx[];
extern ModelCollision Global_BLLava7_collision;
extern Gfx Global_BLLava8_Gfx[];
extern ModelCollision Global_BLLava8_collision;
extern Gfx Global_BLDestructableTop_Gfx[];
extern ModelCollision Global_BLDestructableTop_collision;
extern Gfx Global_BLMetalBridge_Gfx[];
extern ModelCollision Global_BLMetalBridge_collision;
extern Gfx Global_KLExit_Gfx[];
extern ModelCollision Global_KLExit_collision;
extern Gfx Global_KLDoor_Gfx[];
extern ModelCollision Global_KLDoor_collision;
extern Gfx Global_DCExit_Gfx[];
extern ModelCollision Global_DCExit_collision;
extern Gfx Global_TallExitShadow1_Gfx[];
extern ModelCollision Global_TallExitShadow1_collision;
extern Gfx Global_TallExitShadow2_Gfx[];
extern ModelCollision Global_TallExitShadow2_collision;
extern Gfx Global_GCExit1_Gfx[];
extern ModelCollision Global_GCExit1_collision;
extern Gfx Global_GCExit2_Gfx[];
extern ModelCollision Global_GCExit2_collision;
extern Gfx Global_trainingRoomLight_Gfx[];
extern ModelCollision Global_trainingRoomLight_collision;
extern Gfx Global_JLCaveExit1_Gfx[];
extern ModelCollision Global_JLCaveExit1_collision;
extern Gfx Global_JLCaveExit2_Gfx[];
extern ModelCollision Global_JLCaveExit2_collision;
extern Gfx Global_JLCaveExit3_Gfx[];
extern ModelCollision Global_JLCaveExit3_collision;
extern Gfx Global_JLCaveExit4_Gfx[];
extern ModelCollision Global_JLCaveExit4_collision;
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern ModelCollision Global_JLOutsideEntrance_collision;
extern Gfx Global_JLFxCamPillar_Gfx[];
extern ModelCollision Global_JLFxCamPillar_collision;
extern Gfx Global_JLCaveDoor_Gfx[];
extern ModelCollision Global_JLCaveDoor_collision;
extern Gfx GhostCastle_model1_Gfx[];
extern ModelCollision GhostCastle_unkCol1_collision;
extern Gfx GhostCastle_model2_Gfx[];
extern ModelCollision GhostCastle_unkCol2_collision;
extern Gfx GhostCastle_model3_Gfx[];
extern ModelCollision GhostCastle_unkCol3_collision;
extern Gfx GhostCastle_model4_Gfx[];
extern ModelCollision GhostCastle_unkCol4_collision;
extern Gfx GhostCastle_model5_Gfx[];
extern ModelCollision GhostCastle_unkCol5_collision;
extern Gfx GhostCastle_model6_Gfx[];
extern ModelCollision GhostCastle_unkCol6_collision;
extern Gfx GhostCastle_model7_Gfx[];
extern ModelCollision GhostCastle_unkCol7_collision;
extern Gfx GhostCastle_model8_Gfx[];
extern ModelCollision GhostCastle_unkCol8_collision;
extern Gfx GhostCastle_model9_Gfx[];
extern ModelCollision GhostCastle_unkCol9_collision;
extern Gfx GhostCastle_model10_Gfx[];
extern ModelCollision GhostCastle_unkCol10_collision;
extern Gfx GhostCastle_model11_Gfx[];
extern ModelCollision GhostCastle_unkCol11_collision;
extern Gfx GhostCastle_model12_Gfx[];
extern ModelCollision GhostCastle_unkCol12_collision;
extern Gfx GhostCastle_model13_Gfx[];
extern ModelCollision GhostCastle_unkCol13_collision;
extern Gfx GhostCastle_model14_Gfx[];
extern ModelCollision GhostCastle_unkCol14_collision;
extern Gfx GhostCastle_model15_Gfx[];
extern ModelCollision GhostCastle_unkCol15_collision;
extern Gfx GhostCastle_model16_Gfx[];
extern ModelCollision GhostCastle_unkCol16_collision;
extern Gfx GhostCastle_model17_Gfx[];
extern ModelCollision GhostCastle_unkCol17_collision;
extern Gfx GhostCastle_model18_Gfx[];
extern ModelCollision GhostCastle_unkCol18_collision;
extern Gfx GhostCastle_model19_Gfx[];
extern ModelCollision GhostCastle_unkCol19_collision;
extern Gfx GhostCastle_model20_Gfx[];
extern ModelCollision GhostCastle_unkCol20_collision;
extern Gfx GhostCastle_model21_Gfx[];
extern ModelCollision GhostCastle_unkCol21_collision;
extern Gfx GhostCastle_model22_Gfx[];
extern ModelCollision GhostCastle_unkCol22_collision;
extern Gfx GhostCastle_model23_Gfx[];
extern ModelCollision GhostCastle_unkCol23_collision;
extern Gfx GhostCastle_model24_Gfx[];
extern ModelCollision GhostCastle_unkCol24_collision;
extern Gfx GhostCastle_model25_Gfx[];
extern ModelCollision GhostCastle_unkCol25_collision;
extern Gfx GhostCastle_model84_Gfx[];
extern ModelCollision GhostCastle_unkCol26_collision;
extern Gfx GhostCastle_model26_Gfx[];
extern ModelCollision GhostCastle_unkCol27_collision;
extern Gfx GhostCastle_model27_Gfx[];
extern ModelCollision GhostCastle_unkCol28_collision;
extern Gfx GhostCastle_model28_Gfx[];
extern ModelCollision GhostCastle_unkCol29_collision;
extern Gfx GhostCastle_model29_Gfx[];
extern ModelCollision GhostCastle_unkCol30_collision;
extern Gfx GhostCastle_model85_Gfx[];
extern ModelCollision GhostCastle_unkCol31_collision;
extern Gfx GhostCastle_model86_Gfx[];
extern ModelCollision GhostCastle_unkCol32_collision;
extern Gfx GhostCastle_model30_Gfx[];
extern ModelCollision GhostCastle_unkCol33_collision;
extern Gfx GhostCastle_model31_Gfx[];
extern ModelCollision GhostCastle_unkCol34_collision;
extern Gfx GhostCastle_model32_Gfx[];
extern ModelCollision GhostCastle_unkCol35_collision;
extern Gfx GhostCastle_model33_Gfx[];
extern ModelCollision GhostCastle_unkCol36_collision;
extern Gfx GhostCastle_model34_Gfx[];
extern ModelCollision GhostCastle_unkCol37_collision;
extern Gfx GhostCastle_model35_Gfx[];
extern ModelCollision GhostCastle_unkCol38_collision;
extern Gfx GhostCastle_model36_Gfx[];
extern ModelCollision GhostCastle_unkCol39_collision;
extern Gfx GhostCastle_model37_Gfx[];
extern ModelCollision GhostCastle_unkCol40_collision;
extern Gfx GhostCastle_model38_Gfx[];
extern ModelCollision GhostCastle_unkCol41_collision;
extern Gfx GhostCastle_model39_Gfx[];
extern ModelCollision GhostCastle_unkCol42_collision;
extern Gfx GhostCastle_model40_Gfx[];
extern ModelCollision GhostCastle_unkCol43_collision;
extern Gfx GhostCastle_model41_Gfx[];
extern ModelCollision GhostCastle_unkCol44_collision;
extern Gfx GhostCastle_model42_Gfx[];
extern ModelCollision GhostCastle_unkCol45_collision;
extern Gfx GhostCastle_model43_Gfx[];
extern ModelCollision GhostCastle_unkCol46_collision;
extern Gfx GhostCastle_model44_Gfx[];
extern ModelCollision GhostCastle_unkCol47_collision;
extern Gfx GhostCastle_model45_Gfx[];
extern ModelCollision GhostCastle_unkCol48_collision;
extern Gfx GhostCastle_model46_Gfx[];
extern ModelCollision GhostCastle_unkCol49_collision;
extern Gfx GhostCastle_model47_Gfx[];
extern ModelCollision GhostCastle_unkCol50_collision;
extern Gfx GhostCastle_model48_Gfx[];
extern ModelCollision GhostCastle_unkCol51_collision;
extern Gfx GhostCastle_model49_Gfx[];
extern ModelCollision GhostCastle_unkCol52_collision;
extern Gfx GhostCastle_model50_Gfx[];
extern ModelCollision GhostCastle_unkCol53_collision;
extern Gfx GhostCastle_model51_Gfx[];
extern ModelCollision GhostCastle_unkCol54_collision;
extern Gfx GhostCastle_model52_Gfx[];
extern ModelCollision GhostCastle_unkCol55_collision;
extern Gfx GhostCastle_model53_Gfx[];
extern ModelCollision GhostCastle_unkCol56_collision;
extern Gfx GhostCastle_model54_Gfx[];
extern ModelCollision GhostCastle_unkCol57_collision;
extern Gfx GhostCastle_model55_Gfx[];
extern ModelCollision GhostCastle_unkCol58_collision;
extern Gfx GhostCastle_model56_Gfx[];
extern ModelCollision GhostCastle_unkCol59_collision;
extern Gfx GhostCastle_model57_Gfx[];
extern ModelCollision GhostCastle_unkCol60_collision;
extern Gfx GhostCastle_model58_Gfx[];
extern ModelCollision GhostCastle_unkCol61_collision;
extern Gfx GhostCastle_model59_Gfx[];
extern ModelCollision GhostCastle_unkCol62_collision;
extern Gfx GhostCastle_model60_Gfx[];
extern ModelCollision GhostCastle_unkCol63_collision;
extern Gfx GhostCastle_model61_Gfx[];
extern ModelCollision GhostCastle_unkCol64_collision;
extern Gfx GhostCastle_model62_Gfx[];
extern ModelCollision GhostCastle_unkCol65_collision;
extern Gfx GhostCastle_model63_Gfx[];
extern ModelCollision GhostCastle_unkCol66_collision;
extern Gfx GhostCastle_model64_Gfx[];
extern ModelCollision GhostCastle_unkCol67_collision;
extern Gfx GhostCastle_model65_Gfx[];
extern ModelCollision GhostCastle_unkCol68_collision;
extern Gfx GhostCastle_model66_Gfx[];
extern ModelCollision GhostCastle_unkCol69_collision;
extern Gfx GhostCastle_model67_Gfx[];
extern ModelCollision GhostCastle_unkCol70_collision;
extern Gfx GhostCastle_model68_Gfx[];
extern ModelCollision GhostCastle_unkCol71_collision;
extern Gfx GhostCastle_model69_Gfx[];
extern ModelCollision GhostCastle_unkCol72_collision;
extern Gfx GhostCastle_model70_Gfx[];
extern ModelCollision GhostCastle_unkCol73_collision;
extern Gfx GhostCastle_model71_Gfx[];
extern ModelCollision GhostCastle_unkCol74_collision;
extern Gfx GhostCastle_model72_Gfx[];
extern ModelCollision GhostCastle_unkCol75_collision;
extern Gfx GhostCastle_model73_Gfx[];
extern ModelCollision GhostCastle_unkCol76_collision;
extern Gfx GhostCastle_model74_Gfx[];
extern ModelCollision GhostCastle_unkCol77_collision;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_collision;



Mtx GhostCastle_IMtx1 = IDENTITY;

StageModel GhostCastle_stageModels[] = {
{Global_fallbackCube_Gfx, &Global_fallbackCube_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_exitShadowSouth_Gfx, &Global_exitShadowSouth_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_exitShadowNorth_Gfx, &Global_exitShadowNorth_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_exitShadowEast_Gfx, &Global_exitShadowEast_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_exitShadowWest_Gfx, &Global_exitShadowWest_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_ALBLExit_Gfx, &Global_ALBLExit_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_sandPit_Gfx, &Global_sandPit_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BossBridge_Gfx, &Global_BossBridge_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_ALPole_Gfx, &Global_ALPole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_ALBLDoor_Gfx, &Global_ALBLDoor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_ALSpinDoor_Gfx, &Global_ALSpinDoor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLavaFloor_Gfx, &Global_BLLavaFloor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava_Gfx, &Global_BLLava_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava2_Gfx, &Global_BLLava2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava3_Gfx, &Global_BLLava3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava4_Gfx, &Global_BLLava4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava5_Gfx, &Global_BLLava5_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava6_Gfx, &Global_BLLava6_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava7_Gfx, &Global_BLLava7_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLLava8_Gfx, &Global_BLLava8_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLDestructableTop_Gfx, &Global_BLDestructableTop_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_BLMetalBridge_Gfx, &Global_BLMetalBridge_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_KLExit_Gfx, &Global_KLExit_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_KLDoor_Gfx, &Global_KLDoor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_DCExit_Gfx, &Global_DCExit_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_TallExitShadow1_Gfx, &Global_TallExitShadow1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_TallExitShadow2_Gfx, &Global_TallExitShadow2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_GCExit1_Gfx, &Global_GCExit1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_GCExit2_Gfx, &Global_GCExit2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_trainingRoomLight_Gfx, &Global_trainingRoomLight_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_JLCaveExit1_Gfx, &Global_JLCaveExit1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_JLCaveExit2_Gfx, &Global_JLCaveExit2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_JLCaveExit3_Gfx, &Global_JLCaveExit3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_JLCaveExit4_Gfx, &Global_JLCaveExit4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_JLOutsideEntrance_Gfx, &Global_JLOutsideEntrance_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_JLFxCamPillar_Gfx, &Global_JLFxCamPillar_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_JLCaveDoor_Gfx, &Global_JLCaveDoor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model1_Gfx, &GhostCastle_unkCol1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model2_Gfx, &GhostCastle_unkCol2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model3_Gfx, &GhostCastle_unkCol3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model4_Gfx, &GhostCastle_unkCol4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model5_Gfx, &GhostCastle_unkCol5_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model6_Gfx, &GhostCastle_unkCol6_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model7_Gfx, &GhostCastle_unkCol7_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model8_Gfx, &GhostCastle_unkCol8_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model9_Gfx, &GhostCastle_unkCol9_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model10_Gfx, &GhostCastle_unkCol10_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model11_Gfx, &GhostCastle_unkCol11_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model12_Gfx, &GhostCastle_unkCol12_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model13_Gfx, &GhostCastle_unkCol13_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model14_Gfx, &GhostCastle_unkCol14_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model15_Gfx, &GhostCastle_unkCol15_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model16_Gfx, &GhostCastle_unkCol16_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model17_Gfx, &GhostCastle_unkCol17_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model18_Gfx, &GhostCastle_unkCol18_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model19_Gfx, &GhostCastle_unkCol19_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model20_Gfx, &GhostCastle_unkCol20_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model21_Gfx, &GhostCastle_unkCol21_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model22_Gfx, &GhostCastle_unkCol22_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model23_Gfx, &GhostCastle_unkCol23_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model24_Gfx, &GhostCastle_unkCol24_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model25_Gfx, &GhostCastle_unkCol25_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model84_Gfx, &GhostCastle_unkCol26_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model26_Gfx, &GhostCastle_unkCol27_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model27_Gfx, &GhostCastle_unkCol28_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model28_Gfx, &GhostCastle_unkCol29_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model29_Gfx, &GhostCastle_unkCol30_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model85_Gfx, &GhostCastle_unkCol31_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model86_Gfx, &GhostCastle_unkCol32_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model30_Gfx, &GhostCastle_unkCol33_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model31_Gfx, &GhostCastle_unkCol34_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model32_Gfx, &GhostCastle_unkCol35_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model33_Gfx, &GhostCastle_unkCol36_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model34_Gfx, &GhostCastle_unkCol37_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model35_Gfx, &GhostCastle_unkCol38_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model36_Gfx, &GhostCastle_unkCol39_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model37_Gfx, &GhostCastle_unkCol40_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model38_Gfx, &GhostCastle_unkCol41_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model39_Gfx, &GhostCastle_unkCol42_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model40_Gfx, &GhostCastle_unkCol43_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model41_Gfx, &GhostCastle_unkCol44_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model42_Gfx, &GhostCastle_unkCol45_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model43_Gfx, &GhostCastle_unkCol46_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model44_Gfx, &GhostCastle_unkCol47_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model45_Gfx, &GhostCastle_unkCol48_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model46_Gfx, &GhostCastle_unkCol49_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model47_Gfx, &GhostCastle_unkCol50_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model48_Gfx, &GhostCastle_unkCol51_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model49_Gfx, &GhostCastle_unkCol52_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model50_Gfx, &GhostCastle_unkCol53_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model51_Gfx, &GhostCastle_unkCol54_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model52_Gfx, &GhostCastle_unkCol55_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model53_Gfx, &GhostCastle_unkCol56_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model54_Gfx, &GhostCastle_unkCol57_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model55_Gfx, &GhostCastle_unkCol58_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model56_Gfx, &GhostCastle_unkCol59_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model57_Gfx, &GhostCastle_unkCol60_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model58_Gfx, &GhostCastle_unkCol61_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model59_Gfx, &GhostCastle_unkCol62_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model60_Gfx, &GhostCastle_unkCol63_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model61_Gfx, &GhostCastle_unkCol64_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model62_Gfx, &GhostCastle_unkCol65_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model63_Gfx, &GhostCastle_unkCol66_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model64_Gfx, &GhostCastle_unkCol67_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model65_Gfx, &GhostCastle_unkCol68_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model66_Gfx, &GhostCastle_unkCol69_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model67_Gfx, &GhostCastle_unkCol70_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model68_Gfx, &GhostCastle_unkCol71_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model69_Gfx, &GhostCastle_unkCol72_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model70_Gfx, &GhostCastle_unkCol73_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model71_Gfx, &GhostCastle_unkCol74_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model72_Gfx, &GhostCastle_unkCol75_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model73_Gfx, &GhostCastle_unkCol76_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{GhostCastle_model74_Gfx, &GhostCastle_unkCol77_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char GhostCastle_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

SpriteActor GhostCastle_room0_sprites[] = {
    { 18, 0,    {1830.0,0.0,-830.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0,     0,       0,      0, 0,      17, 5, 0,   0},
    { 20, 0,       {0.0,10.0,500.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, -1.0f, 1000.0f,      0, 0,  255, 255, 10, 255},
    { 20, 0,  {200.0,800.0,-1990.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0,     0,  100.0f,      0, 0, 255, 255, 100, 255},
    { 20, 0, {-200.0,800.0,-1990.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0,     0,       0, 100.0f, 0, 255, 255, 100, 255},
    { -1, 0,       {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0,     0,       0,      0, 0,     -1, -1, 0,   0}
};

SpriteActor GhostCastle_room18_sprites[] = {
    { 18, 0, {-350.0,1000.0,-1400.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0, 18, 17, 0, 0},
    { -1, 0,        {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

SpriteActor GhostCastle_room7_sprites[] = {
    { 19, 0, {2000.0,0.0,1500.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0,   1, 3, 4, 0},
    { -1, 0,    {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomObject GhostCastle_room0_objects[] = {
    {   {-1600.0,0.0,1800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 99, -1, -1, -1, NULL, NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    {   {-3200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {-3200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {-3200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {   {-3200.0,1200.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    { {3200.0,1200.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {3200.0,1200.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {3200.0,1200.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    { {3200.0,1200.0,-500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 43, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 45, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 46, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 47, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 48, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 49, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 50, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 51, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {        {0.0,-15.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 80, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomObject GhostCastle_roomMulti_objects[] = {
    { {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    { {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0,   0,  0,  0,  0, NULL, NULL, 0, 0, 0, 0, 0, 0,  0, 0, 0}
};

unsigned char GhostCastle_unusedGarbage_Bin[] = {
0x00, 0x00, 0x00, 0x67, 0x03, 0x00, 0x26, 0x74, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01
};

RoomObject GhostCastle_room2_objects[] = {
    {    {-2200.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  76, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {-2200.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  78, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {-2200.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,   4,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {    {-2200.0,0.0,0.0},                                {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,   0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {100.0,120.0,1000.0},                  {1.5,1.5,1.100000023841858}, 3, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0, 390,  0, 0,    0, 0, 0, 107, -1, -1, -1, NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {100.0,50.0,450.0}, {0.4000000059604645,5.5,0.20000000298023224}, 3, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  59, -1, -1, -1, NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {100.0,50.0,1650.0}, {0.4000000059604645,5.5,0.20000000298023224}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  59, -1, -1, -1, NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {0.0,-150.0,0.0},                                {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0, 780,  0, 0,    0, 0, 0,  37, -1, -1, -1, NULL, &func_800D9128, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {1750.0,0.0,0.0},                 {1.0,1.2000000476837158,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  38, -1, -1, -1, NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-1750.0,0.0,0.0},                 {1.0,1.2000000476837158,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  38, -1, -1, -1, NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  81, -1, -1, -1, NULL, &func_800B2070, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {     {2200.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  77, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {2200.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  79, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {2200.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,   2,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {     {2200.0,0.0,0.0},                                {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,   0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                                {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,   0,  0,  0,  0, NULL,           NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room2_actors[] = {
    { BARREL_JUMP_FIRE_SPAWNER,    {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f,      0, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f,  20.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f,  40.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f,  60.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {50.0,-150.0,900.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  900.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 160.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1100.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1100.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 140.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1300.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1300.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 120.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,  {50.0,-150.0,1500.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1500.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 100.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {50.0,-150.0,550.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  550.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 180.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {25.0,-150.0,700.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  700.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 200.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,    {0.0,-150.0,950.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  950.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 180.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER, {-25.0,-150.0,1150.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1150.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 160.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,  {-50.0,-150.0,700.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  700.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 200.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,  {50.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 220.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER, {-50.0,-150.0,1300.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1300.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 240.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,  {-50.0,-150.0,550.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  550.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 320.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,  {-25.0,-150.0,700.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  700.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 340.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,    {0.0,-150.0,950.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  950.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 360.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,  {25.0,-150.0,1100.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1100.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 340.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,    {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,    {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 540.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 560.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 580.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 600.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,    {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0,  800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 720.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 700.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 680.0f, 0, 0},
    { BARREL_JUMP_FIRE_SPAWNER,   {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 660.0f, 0, 0},
    {               ACTOR_NULL,         {0.0,0.0,0.0}, 0.0,      0.0,     0.0, 0,     0.0,      0.0,     0.0, 0, 0.0, 0.0,    0.0,                0.0, 0, 0, 0, 0,      0,      0, 0, 0}
};

RoomObject GhostCastle_room4_objects[] = {
    { {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    { {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0,   0,  0,  0,  0, NULL, NULL, 0, 0, 0, 0, 0, 0,  0, 0, 0}
};

RoomObject GhostCastle_room5_objects[] = {
    {     {1700.0,0.0,900.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  77, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {1700.0,0.0,900.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  79, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {1700.0,0.0,900.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {     {1700.0,0.0,900.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 105, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  82, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1000.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  52, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    { {1260.0,350.0,-1400.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-45.00000125223908),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  70, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    { {1400.0,350.0,-1260.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-45.00000125223908),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  71, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-900.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  28, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-900.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  25, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-900.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {   {-900.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,   0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room5_actors[] = {
    { FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 14.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0,  30.0f, 60.0f, 4.0f, 24.0f},
    { FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 18.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0,  45.0f, 60.0f, 4.0f, 24.0f},
    { FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 10.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0,  20.0f, 60.0f, 4.0f, 24.0f},
    { FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 20.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0, 120.0f, 60.0f, 4.0f, 24.0f},
    {   ACTOR_NULL,        {0.0,0.0,0.0}, 0.0,     0.0,    0.0, 0,    0.0,     0.0,    0.0, 0,  0.0, 0.0, 0.0,  0.0,          0,          0, 0, 0,      0,     0,    0,     0}
};

SpriteActor GhostCastle_room5_sprites[] = {
    {  3, 0, {1074.0,0.0,-1225.0}, {100.0,200.0,250.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, 255, 255, 255, 255},
    {  3, 0, {1152.0,0.0,-1147.0}, {100.0,200.0,250.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, 255, 255, 255, 255},
    {  3, 0, {1230.0,0.0,-1069.0}, {100.0,200.0,250.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, 255, 255, 255, 255},
    { -1, 0,     {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0, 0, 0, 0, 0,     -1, -1, 0,   0}
};

RoomObject GhostCastle_room6_objects[] = {
    {    {-1300.0,200.0,0.0},  {0.800000011920929,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0,  240,  0, 0,    0, 0, 0,  68, -1, -1, -1, NULL,           NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {        {400.0,0.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0, 114, -1, -1, -1, NULL,           NULL, 0, 0,  6,  4, 4, 0,  0, 0, 0},
    {       {-400.0,0.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0, 114, -1, -1, -1, NULL,           NULL, 0, 0,  6,  4, 4, 0,  0, 0, 0},
    {    {1900.0,-100.0,0.0},                {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0,  600,  0, 0,    0, 0, 0,  66, -1, -1, -1, NULL,           NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {-2200.0,200.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0, 114, -1, -1, -1, NULL,           NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {-400.0,-200.0,0.0}, {0.8500000238418579,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0,  600,  0, 0,    0, 0, 0,  67, -1, -1, -1, NULL, &func_800D9104, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {300.0,-200.0,0.0}, {0.8500000238418579,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0, -360,  0, 0,    0, 0, 0,  67, -1, -1, -1, NULL, &func_800D9104, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {1000.0,-200.0,0.0}, {0.8500000238418579,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0,  600,  0, 0,    0, 0, 0,  67, -1, -1, -1, NULL, &func_800D9104, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  83, -1, -1, -1, NULL,           NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  54, -1, -1, -1, NULL,           NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  55, -1, -1, -1, NULL,           NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    { {-2500.0,200.0,1700.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  27, -1, -1, -1, NULL,           NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-2500.0,200.0,1700.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  26, -1, -1, -1, NULL,           NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-2500.0,200.0,1700.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,    3,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    { {-2500.0,200.0,1700.0},                {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,    0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {     {3200.0,200.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  77, -1, -1, -1, NULL,           NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {3200.0,200.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  79, -1, -1, -1, NULL,           NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {3200.0,200.0,0.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,    2,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {     {3200.0,200.0,0.0},                {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,    0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    { {-3300.0,200.0,1400.0},                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,  98, -1, -1, -1, NULL,           NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0},                {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0,    0,  0, 0,    0, 0, 0,   0,  0,  0,  0, NULL,           NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomObject GhostCastle_room7_objects[] = {
    {        {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  84, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  75, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {100.0,0.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1700.0,0.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {2525.0,0.0,1700.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 34,   10.0,    0.0,     0.0, -90.0, 3, 20, 777,   40, 0, 0, 109, -1, -1,  1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {2525.0,0.0,1300.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 34,   10.0,    0.0,     0.0,  90.0, 3, 20, 777,   40, 0, 0, 110, -1, -1,  1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  76, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  78, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,  400.0,  400.0,     0.0,   0.0, 4,  1,   0,    0, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {-2700.0,0.0,2000.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0, 1400.0, 1000.0, -1000.0,   0.0, 0, 90,   0, 1000, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {  {800.0,0.0,-2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  76, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {800.0,0.0,-2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  78, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {800.0,0.0,-2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,  400.0,  400.0,     0.0,   0.0, 4,  1,   0,    0, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {800.0,0.0,-2500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0, 1400.0, 1000.0, -1000.0,   0.0, 0, 90,   0, 1000, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {  {2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  77, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,  79, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,  400.0,  400.0,     0.0,   0.0, 2,  1,   0,    0, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {2700.0,0.0,1500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0, 1400.0, 1000.0, -1000.0,   0.0, 0, 90,   0, 1000, 0, 0,   0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0,  0,    0.0,    0.0,     0.0,   0.0, 0,  0,   0,    0, 0, 0,   0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room7_actors[] = {
    { FIRE_SPAWNER, {1000.0,1500.0,-300.0}, 0.0, -1100.0, 1500.0, 0, 1000.0, -1000.0, 3000.0, 0, 10.0, 3.0, 8.0, 10.0, 6250000.0f, 0, 0, 0,  750.0f, 60.0f, 30.0f, 16.0f},
    { FIRE_SPAWNER,     {0.0,1500.0,500.0}, 0.0, -1100.0, 1500.0, 0, 1000.0, -1000.0, 3000.0, 0, 10.0, 3.0, 8.0, 10.0, 6250000.0f, 0, 0, 0, 1050.0f, 60.0f, 30.0f, 16.0f},
    { FIRE_SPAWNER, {-500.0,1500.0,2400.0}, 0.0, -1100.0, 1500.0, 0, 1000.0, -1000.0, 3000.0, 0, 10.0, 3.0, 8.0, 10.0, 6250000.0f, 0, 0, 0,  750.0f, 60.0f, 30.0f, 16.0f},
    {   ACTOR_NULL,          {0.0,0.0,0.0}, 0.0,     0.0,    0.0, 0,    0.0,     0.0,    0.0, 0,  0.0, 0.0, 0.0,  0.0,          0, 0, 0, 0,       0,     0,     0,     0}
};

RoomObject GhostCastle_room8_objects[] = {
    {         {0.0,200.0,0.0},                             {0.8333333134651184,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 25,   90.0,    0.0,     0.0, 0.0, 5, 300, 9,    0, 0, 0,  85, -1, -1, -1, NULL, &func_800D9190, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {2700.0,0.0,0.0},                                            {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  77, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {        {2700.0,0.0,0.0},                                            {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  79, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {        {2700.0,0.0,0.0},                                            {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,  400.0,  400.0,     0.0, 0.0, 2,   1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {        {2700.0,0.0,0.0},                                            {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0,  90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {2200.0,-200.0,-1000.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {  {2200.0,-200.0,1400.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  58, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {   {1700.0,-200.0,700.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {  {1100.0,-200.0,-900.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {   {1000.0,-200.0,200.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {     {0.0,-200.0,1000.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  57, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {   {-200.0,-200.0,300.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0, 108, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {   {-600.0,-200.0,700.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {   {100.0,-200.0,-800.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {  {-800.0,-200.0,-900.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  58, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    { {-1450.0,-200.0,-800.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {  {-1550.0,-200.0,500.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    { {-2200.0,-200.0,1400.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  58, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    { {-2300.0,-200.0,-900.0}, {0.800000011920929,0.6000000238418579,0.800000011920929}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  53, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {  {-2350.0,-200.0,250.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  56, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    { {-2350.0,-200.0,-200.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  56, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {   {2350.0,-200.0,250.0},                                            {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 35,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  56, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0,  0, 0, 0},
    {       {-2700.0,0.0,0.0},                                            {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  76, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {       {-2700.0,0.0,0.0},                                            {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,  78, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {       {-2700.0,0.0,0.0},                                            {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,  400.0,  400.0,     0.0, 0.0, 4,   1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {       {-2700.0,0.0,0.0},                                            {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0,  90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {           {0.0,0.0,0.0},                                            {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0,  0,    0.0,    0.0,     0.0, 0.0, 0,   0, 0,    0, 0, 0,   0,  0,  0,  0, NULL,           NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomObject GhostCastle_room9_objects[] = {
    {           {0.0,0.0,0.0}, {0.5,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 86, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {           {0.0,0.0,0.0}, {0.5,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {      {700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {      {700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {      {700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {      {700.0,0.0,2500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {     {-700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {-700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {-700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {     {-700.0,0.0,2500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    { {-700.0,1400.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-700.0,1400.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-700.0,1400.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    { {-700.0,1400.0,-2600.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {      {400.0,0.0,2900.0}, {0.5,0.5,0.5}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 99, -1, -1, -1, NULL, NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    {           {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

SpriteActor GhostCastle_room9_sprites[] = {
    { 20, 0, {0.0,10.0,2500.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, -1.0f, 1000.0f, 0, 0, 255, 255, 100, 255},
    { -1, 0,  {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0,     0,       0, 0, 0,     -1, -1, 0,   0}
};

RoomActor GhostCastle_room9_actors[] = {
    {     SANDAL,    {375.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
    {     SANDAL,    {125.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f,     0},
    {     SANDAL,   {-125.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
    {     SANDAL,   {-375.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f,     0},
    {     SANDAL,  {375.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
    {     SANDAL,  {125.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f,     0},
    {     SANDAL, {-125.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
    {     SANDAL, {-375.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f,     0},
    { ACTOR_NULL,         {0.0,0.0,0.0},  0.0,     0.0,    0.0, 0,    0.0,     0.0,    0.0, 0,   0.0,   0.0,   0.0, 0.0, 0, 0, 0, 0,     0,     0,    0,     0}
};

RoomObject GhostCastle_room10_objects[] = {
    {        {0.0,0.0,0.0},                                              {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0, 300,  0, 0,    0, 0, 0, 87, -1, -1, -1, NULL, &func_800D914C, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {1.0499999523162842,1.0499999523162842,1.0499999523162842}, 1, DEGREES_TO_RADIANS_2PI(0.0),   7, 8,    0.0,    0.0,     0.0, 0.0, 300,  0, 0,    0, 0, 0, 87, -1, -1, -1, NULL,           NULL, 0, 0, 2,  0, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                                              {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0, 88, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {2500.0,-200.0,0.0},                                              {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0, 77, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {2500.0,-200.0,0.0},                                              {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0, 79, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {2500.0,-200.0,0.0},                                              {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,   2,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {2500.0,-200.0,0.0},                                              {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,   0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {-2500.0,-200.0,0.0},                                              {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0, 76, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2500.0,-200.0,0.0},                                              {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0, 78, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2500.0,-200.0,0.0},                                              {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0,   4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    { {-2500.0,-200.0,0.0},                                              {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0,   0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                                              {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0,   0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL,           NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomObject GhostCastle_room11_objects[] = {
    {     {-350.0,0.0,2400.0}, {2.0,1.0,2.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    {     {2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {     {2700.0,0.0,1500.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {           {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 89, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {-1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {-1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {-1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {   {-1500.0,0.0,-2700.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {  {-700.0,-20.0,-1300.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-700.0,-20.0,-500.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-1000.0,-20.0,1100.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {100.0,-20.0,500.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-1150.0,-20.0,350.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {-600.0,-20.0,600.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-2100.0,-20.0,600.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-2300.0,-20.0,-100.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-2300.0,-20.0,-900.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    { {-2300.0,-20.0,-1700.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0,  2,  4, 4, 0, -1, 0, 0},
    {           {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room11_actors[] = {
    {    CANDLES,  {-1000.0,200.0,1100.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 2250000.0f, 0, 0, 0, 30.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,    {-600.0,200.0,600.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 2250000.0f, 0, 0, 0, 30.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,  {-700.0,200.0,-1300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,   {-700.0,200.0,-500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,     {100.0,200.0,500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,   {-1150.0,200.0,350.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,   {-2100.0,200.0,600.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,  {-2300.0,200.0,-100.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES,  {-2300.0,200.0,-900.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    {    CANDLES, {-2300.0,200.0,-1700.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0,  640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
    { ACTOR_NULL,           {0.0,0.0,0.0}, 0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,  0.0, 0.0, 0.0,  0.0,          0, 0, 0, 0,     0,     0,     0,     0}
};

RoomObject GhostCastle_room12_objects[] = {
    {     {-1400.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  98, -1,  -1,  -1, NULL, NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    {    {200.0,0.0,1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 34,   -15.0,     0.0,     0.0,  90.0, 3, 30, 0,   40, 0, 0, 110, -1,  -1,  25, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {600.0,0.0,1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 34,    15.0,     0.0,     0.0, -90.0, 3, 30, 0,   40, 0, 0, 110, -1,  -1,  25, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {100.0,0.0,-1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 34,   -15.0,     0.0,     0.0, -90.0, 3, 30, 0,   40, 0, 0, 109, -1,  -1,  25, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {500.0,0.0,-1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0),   7, 34,    15.0,     0.0,     0.0,  90.0, 3, 30, 0,   40, 0, 0, 109, -1,  -1,  25, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  90, -1,  -1,  -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {1610.0,600.0,-800.0}, {1.5,1.5,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  74, -1,  -1,  -1, NULL, NULL, 0, 0,  0,  4, 4, 0, -1, 0, 0},
    {  {1610.0,600.0,700.0}, {1.5,1.5,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  74, -1,  -1,  -1, NULL, NULL, 0, 0,  0,  4, 4, 0, -1, 0, 0},
    { {1600.0,600.0,-800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  63, -1,  -1,  -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {1600.0,600.0,700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  63, -1,  -1,  -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {1500.0,400.0,-800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  29, -1,  -1,  -1, NULL, NULL, 0, 0,  0,  4, 4, 0, -1, 0, 0},
    {  {1500.0,400.0,700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  29, -1,  -1,  -1, NULL, NULL, 0, 0,  0,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  27, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  26, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0,   0.0, 3,  1, 0,    0, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {    {400.0,0.0,1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0,   0.0, 0, 90, 0, 1000, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {   {300.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  28, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {300.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,  25, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {300.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0,   0.0, 1,  1, 0,    0, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {   {300.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0,   0.0, 0, 90, 0, 1000, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {       {0.0,0.0,500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512,  0,  5000.0,  2000.0,  2000.0,   0.0, 0,  0, 0,    0, 0, 0,   0, -1,  25, 517, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512,  0, 10000.0, 10000.0, 10000.0,   0.0, 0,  0, 0,    0, 0, 0,   0, -1, 537,   5, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0,  0,     0.0,     0.0,     0.0,   0.0, 0,  0, 0,    0, 0, 0,   0,  0,   0,   0, NULL, NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room12_actors[] = {
    { RNG_ROOM_SPAWNER,         {0.0,-50.0,0.0},   0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 1, 10.0, 10.0,       8.0,   10.0, 900.0f, 0, 0, 0, 11.0f, 30.0f,  60.0f, 20.0f},
    {           MIRROR,  {1100.0,2400.0,1200.0}, 225.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0, 1000000.0,   50.0,      0, 0, 0, 0,     0,  2.0f,      0, 20.0f},
    {           MIRROR, {1100.0,2400.0,-1200.0}, 225.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0, 1000000.0,   50.0,      0, 0, 0, 0,  1.0f,  2.0f,      0, 20.0f},
    {           SAUCER,     {-900.0,0.0,-400.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  700.0,  80.0f, 0, 0, 0,  1.0f,  7.0f, 100.0f, 20.0f},
    {              CUP,     {-600.0,0.0,-400.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  800.0,  60.0f, 0, 0, 0,  2.0f,  7.0f,  90.0f, 20.0f},
    {           SAUCER,     {-300.0,0.0,-400.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  800.0,  60.0f, 0, 0, 0,  3.0f,  7.0f,  90.0f, 20.0f},
    {              CUP,      {300.0,0.0,-400.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  900.0,  60.0f, 0, 0, 0,  4.0f,  7.0f,  80.0f, 20.0f},
    {           SAUCER,      {600.0,0.0,-400.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  900.0,  60.0f, 0, 0, 0,  5.0f,  7.0f,  80.0f, 20.0f},
    {              CUP,      {900.0,0.0,-400.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0, 1000.0,  60.0f, 0, 0, 0,  6.0f,  7.0f,  70.0f, 20.0f},
    {       ACTOR_NULL,           {0.0,0.0,0.0},   0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,  0.0,  0.0,       0.0,    0.0,      0, 0, 0, 0,     0,     0,      0,     0}
};

#include "assets/levelGroup/GhostCastle/newType/g1.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g2.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g3.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g4.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g5.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g6.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g7.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g8.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g9.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g10.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g11.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g12.ut1.inc.c"
#include "assets/levelGroup/GhostCastle/newType/g13.ut1.inc.c"

RoomObject GhostCastle_room13_objects[] = {
    {         {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 91, -1, -1, -1, NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-2500.0,0.0,1450.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 26, -1800.0, -1200.0,  1300.0,  1300.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-2500.0,0.0,900.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 26, -1800.0, -1200.0,   800.0,   800.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-2500.0,0.0,350.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 26, -1800.0, -1200.0,   300.0,   300.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-2500.0,0.0,-200.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 26, -1800.0, -1200.0,  -200.0,  -200.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-2100.0,0.0,-900.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(135.00000034162267),   7, 26, -1650.0, -1100.0,  -700.0,  -700.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1500.0,0.0,-1500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(135.00000034162267),   7, 26, -1150.0, -1100.0, -1150.0, -1100.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-900.0,0.0,-2100.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(135.00000034162267),   7, 26,  -700.0,  -700.0, -1700.0, -1100.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-200.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 26,  -200.0,  -200.0, -1800.0, -1200.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {350.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 26,   300.0,   300.0, -1800.0, -1200.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {900.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 26,   800.0,   800.0, -1800.0, -1200.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1450.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 26,  1300.0,  1300.0, -1800.0, -1200.0, 0, 660, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 27, -1, -1, -1, NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 26, -1, -1, -1, NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0,     0.0, 3,   1,  0,    0,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {-1500.0,0.0,2700.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0,     0.0, 0,  90,  0, 1000,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {  {2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 77, -1, -1, -1, NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 79, -1, -1, -1, NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0,     0.0, 2,   1,  0,    0,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0, 7, -1, 1, 0, -1, 0, 0},
    {  {2700.0,0.0,-1500.0}, {4.0,4.0,4.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0,     0.0, 0,  90,  0, 1000,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0,                DEGREES_TO_RADIANS_2PI(0.0),   0,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0,  0,  0,  0,  0, NULL, NULL,           0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room13_actors[] = {
    { FIRE_SPAWNER, {1000.0,0.0,-1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 15.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0, 60.0f, 30.0f, 20.0f, 5.0f},
    { FIRE_SPAWNER,        {0.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 16.0, 5.0, 8.0, 5.0, 9000000.0f, 1000000.0f, 0, 0, 30.0f, 30.0f, 20.0f, 5.0f},
    { FIRE_SPAWNER, {-1000.0,0.0,1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0, 30.0f, 30.0f, 20.0f, 5.0f},
    {   ACTOR_NULL,        {0.0,0.0,0.0}, 0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,  0.0, 0.0, 0.0, 0.0,          0,          0, 0, 0,     0,     0,     0,    0}
};

SpriteActor GhostCastle_room13_sprites[] = {
    { 20, 0, {-2480.0,200.0,1800.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, -100.0f, 0, 0, 0, 255, 255, 55, 255},
    { -1, 0,       {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0,       0, 0, 0, 0,    -1, -1, 0,   0}
};

RoomObject GhostCastle_room14_objects[] = {
    {        {0.0,1000.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 11,     0.0,   325.0,     0.0, 0.0, 1, 20,   0,   20, 0, 0,  72, -1,  -1,  26,           NULL,           NULL, 0, 0, 0,  0, 4, 0, -1, 0, 0},
    {        {0.0,2000.0,0.0},                            {25.0,10.0,25.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  64, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  0, 4, 0, -1, 0, 0},
    {        {0.0,-125.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 11,     0.0,   325.0,     0.0, 0.0, 1, 20, 777,   20, 0, 0,  72, -1,  -1,  26,           NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-2100.0,-350.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512,  0,   360.0,   100.0,   400.0, 0.0, 0,  0,   0,    0, 0, 0,   0, -1,  26, 514,           NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {       {0.0,-2000.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512,  0, 10000.0,  1500.0, 10000.0, 0.0, 0,  0,   0,    0, 0, 0,   0, -1, 538, 514,           NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {       {0.0,-5000.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512,  0, 10000.0, 10000.0, 10000.0, 0.0, 0,  0,   0,    0, 0, 0,   0, -1, 538,   2,           NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {    {-2600.0,-325.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  76, -1,  -1,  -1,           NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {-2600.0,-325.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  78, -1,  -1,  -1,           NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {-2600.0,-325.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0, 0.0, 4,  1,   0,    0, 0, 0,   0, -1,  -1,  -1,           NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {    {-2600.0,-325.0,0.0},                               {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0, 0.0, 0, 90,   0, 1000, 0, 0,   0, -1,  -1,  -1,           NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {       {-1000.0,5.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  60, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {           {0.0,5.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  60, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {        {1000.0,5.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  60, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {    {2500.0,128.0,700.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {      {2500.0,128.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {   {2500.0,128.0,-700.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {   {-2500.0,128.0,700.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {     {-2500.0,128.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {  {-2500.0,128.0,-700.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,128.0,1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {  {-1000.0,128.0,1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {   {-500.0,128.0,1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {    {500.0,128.0,1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {   {1000.0,128.0,1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {   {1500.0,128.0,1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    { {-1500.0,128.0,-1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    { {-1000.0,128.0,-1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {  {-500.0,128.0,-1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {   {500.0,128.0,-1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {  {1000.0,128.0,-1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {  {1500.0,128.0,-1600.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,  61, -1,  -1,  -1,           NULL,           NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {           {0.0,0.0,0.0},                               {1.0,0.5,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 2,  0,   0,    0, 0, 0,  92, -1,  -1,  -1, &func_800B2144, &func_800B216C, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {       {-2000.0,0.0,0.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0, 101, -1,  -1,  -1,           NULL,           NULL, 0, 0, 4,  0, 4, 0, -1, 0, 0},
    {        {2000.0,0.0,0.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0, 101, -1,  -1,  -1,           NULL,           NULL, 0, 0, 4,  0, 4, 0, -1, 0, 0},
    {     {-950.0,0.0,1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0, 102, -1,  -1,  -1,           NULL,           NULL, 0, 0, 4,  0, 4, 0, -1, 0, 0},
    {      {950.0,0.0,1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0, 102, -1,  -1,  -1,           NULL,           NULL, 0, 0, 4,  0, 4, 0, -1, 0, 0},
    {    {-950.0,0.0,-1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0, 102, -1,  -1,  -1,           NULL,           NULL, 0, 0, 4,  0, 4, 0, -1, 0, 0},
    {     {950.0,0.0,-1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0, 102, -1,  -1,  -1,           NULL,           NULL, 0, 0, 4,  0, 4, 0, -1, 0, 0},
    {           {0.0,0.0,0.0},                               {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0, 100, -1,  -1,  -1,           NULL,           NULL, 0, 0, 4,  0, 4, 0, -1, 0, 0},
    {           {0.0,0.0,0.0},                               {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0,  0,     0.0,     0.0,     0.0, 0.0, 0,  0,   0,    0, 0, 0,   0,  0,   0,   0,           NULL,           NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room14_actors[] = {
    {       CUE_BALL,   {-1000.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 100.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0,    0, 0, 0, 0},
    { BILLIARDS_BALL,    {1000.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,   0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0,    0, 0, 0, 0},
    { BILLIARDS_BALL,  {1500.0,0.0,300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,   0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 1.0f, 0, 0, 0},
    { BILLIARDS_BALL, {1500.0,0.0,-300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,   0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 2.0f, 0, 0, 0},
    { BILLIARDS_BALL, {1250.0,0.0,-150.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,   0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 3.0f, 0, 0, 0},
    { BILLIARDS_BALL,  {1250.0,0.0,150.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,   0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 4.0f, 0, 0, 0},
    { BILLIARDS_BALL,    {1500.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,   0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 5.0f, 0, 0, 0},
    {     ACTOR_NULL,       {0.0,0.0,0.0}, 0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,   0.0,                  0.0, 0.0, 0.0, 0, 0, 0, 0,    0, 0, 0, 0}
};

RoomObject GhostCastle_room15_objects[] = {
    {  {-2450.0,0.0,-800.0}, {1.0,3.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 98, -1, -1, -1, NULL, NULL,           0, 0, 34,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 76, -1, -1, -1, NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 78, -1, -1, -1, NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0,     0.0, 4,   1,  0,    0,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0,  7, -1, 1, 0, -1, 0, 0},
    { {-2700.0,0.0,-1500.0}, {4.0,4.0,4.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0,     0.0, 0,  90,  0, 1000,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 93, -1, -1, -1, NULL, NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 27, -1, -1, -1, NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0, 26, -1, -1, -1, NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {   {1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0,     0.0, 3,   1,  0,    0,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0,  7, -1, 1, 0, -1, 0, 0},
    {   {1500.0,0.0,2700.0}, {4.0,4.0,4.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0,     0.0, 0,  90,  0, 1000,   0,  0,  0, -1, -1, -1, NULL, NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    { {-1250.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 26, -1300.0, -1300.0, -2050.0, -1200.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-650.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 26,  -650.0,  -650.0, -2050.0, -1250.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {50.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 26,   -50.0,   -50.0, -2050.0, -1350.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {900.0,0.0,-2100.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(45.00000125223908),   7, 26,   600.0,   500.0, -1800.0, -1200.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {1500.0,0.0,-1500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(45.00000125223908),   7, 26,  1150.0,  1050.0, -1150.0, -1050.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {2100.0,0.0,-900.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(45.00000125223908),   7, 26,  1800.0,  1200.0,  -550.0,  -450.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {2500.0,0.0,-50.0}, {1.0,1.0,1.0}, 2,               DEGREES_TO_RADIANS_2PI(0.0),   7, 26,  2050.0,  1350.0,   -50.0,   -50.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {2500.0,0.0,650.0}, {1.0,1.0,1.0}, 2,               DEGREES_TO_RADIANS_2PI(0.0),   7, 26,  2050.0,  1300.0,   650.0,   650.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {2500.0,0.0,1250.0}, {1.0,1.0,1.0}, 2,               DEGREES_TO_RADIANS_2PI(0.0),   7, 26,  2050.0,  1200.0,  1300.0,  1300.0, 0, 180, 59,  300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0,  2,  4, 4, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0,               DEGREES_TO_RADIANS_2PI(0.0),   0,  0,     0.0,     0.0,     0.0,     0.0, 0,   0,  0,    0,   0,  0,  0,  0,  0,  0, NULL, NULL,           0, 0,  0,  0, 0, 0,  0, 0, 0}
};

SpriteActor GhostCastle_room15_sprites[] = {
    { 20, 0, {-2000.0,10.0,-1500.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, 0, 1000.0f, -1.0f, 0, 255, 255, 55, 255},
    { -1, 0,       {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0, 0,       0,     0, 0,    -1, -1, 0,   0}
};

SpriteActor GhostCastle_room16_sprites[] = {
    { 22, 0,    {0.0,0.0,0.0},  {100.0,1.0,1.0}, 1, 0, 1.0, 0, 0, 0, 0, 0,   0, 0, 0, 0},
    { -1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

SpriteActor GhostCastle_room12_sprites[] = {
    { 22, 0,    {0.0,0.0,0.0},  {100.0,1.0,1.0}, 1, 0, 1.0, 0, 0, 0, 0, 0,   0, 0, 0, 0},
    { -1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomActor GhostCastle_room15_actors[] = {
    { FIRE_SPAWNER, {-1000.0,0.0,-1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 15.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0, 15.0f, 30.0f, 20.0f, 5.0f},
    { FIRE_SPAWNER,         {0.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 13.0, 5.0, 8.0, 5.0, 9000000.0f, 1000000.0f, 0, 0, 10.0f, 30.0f, 20.0f, 5.0f},
    { FIRE_SPAWNER,   {1000.0,0.0,1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 18.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0,  5.0f, 30.0f, 20.0f, 5.0f},
    {   ACTOR_NULL,         {0.0,0.0,0.0}, 0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,  0.0, 0.0, 0.0, 0.0,          0,          0, 0, 0,     0,     0,     0,    0}
};

RoomObject GhostCastle_room16_objects[] = {
    {    {-1400.0,0.0,0.0}, {1.0,2.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  98, -1,  -1,  -1, NULL, NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  94, -1,  -1,  -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-810.0,0.0,-1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 11,  -600.0,     0.0, -1530.0, 0.0, 4, 20, 0,   40, 0, 0, 111, -1,  -1,  24, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {10.0,0.0,-1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 11,  -200.0,     0.0, -1530.0, 0.0, 4, 20, 0,   40, 0, 0, 112, -1,  -1,  24, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-810.0,0.0,1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 11,  -600.0,     0.0,  1530.0, 0.0, 4, 20, 0,   40, 0, 0, 111, -1,  -1,  24, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {10.0,0.0,1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 11,  -200.0,     0.0,  1530.0, 0.0, 4, 20, 0,   40, 0, 0, 112, -1,  -1,  24, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-400.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  28, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-400.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  25, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-400.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    { {-400.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {   {1610.0,500.0,0.0}, {1.5,1.5,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  74, -1,  -1,  -1, NULL, NULL, 0, 0,  0,  4, 4, 0, -1, 0, 0},
    {   {1600.0,500.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  63, -1,  -1,  -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1500.0,300.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  29, -1,  -1,  -1, NULL, NULL, 0, 0,  0,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  27, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  26, -1,  -1,  -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256,  0,   400.0,   400.0,     0.0, 0.0, 3,  1, 0,    0, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {  {-400.0,0.0,1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7,  0,  1400.0,  1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,   0, -1,  -1,  -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {     {0.0,0.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512,  0, 10000.0,  2000.0,  2000.0, 0.0, 0,  0, 0,    0, 0, 0,   0, -1,  24, 518, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512,  0, 10000.0, 10000.0, 10000.0, 0.0, 0,  0, 0,    0, 0, 0,   0, -1, 536,   6, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0,  0,     0.0,     0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,   0,  0,   0,   0, NULL, NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room16_actors[] = {
    { RNG_ROOM_SPAWNER,        {0.0,-50.0,0.0},   0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 1, 10.0, 10.0,       8.0,   10.0, 900.0f, 0, 0, 0, 15.0f, 30.0f,  60.0f, 21.0f},
    {           MIRROR,  {1300.0,2400.0,700.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0, 1000000.0,   50.0,      0, 0, 0, 0,     0,  4.0f,      0, 21.0f},
    {           MIRROR,  {800.0,2400.0,1300.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0, 1000000.0,   50.0,      0, 0, 0, 0,  1.0f,  4.0f,      0, 21.0f},
    {           MIRROR, {800.0,2400.0,-1300.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0, 1000000.0,   50.0,      0, 0, 0, 0,  2.0f,  4.0f,      0, 21.0f},
    {           MIRROR, {1300.0,2400.0,-700.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0, 1000000.0,   50.0,      0, 0, 0, 0,  3.0f,  4.0f,      0, 21.0f},
    {           SCROLL,    {1450.0,0.0,-500.0}, 180.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  700.0,  80.0f, 0, 0, 0,     0,  7.0f, 100.0f, 21.0f},
    {           SCROLL,     {1450.0,0.0,500.0}, 180.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  700.0,  80.0f, 0, 0, 0,  1.0f,  7.0f, 100.0f, 21.0f},
    {      METAL_SHEET,   {1200.0,0.0,-1200.0}, 225.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  800.0,  80.0f, 0, 0, 0,  2.0f,  7.0f,  90.0f, 21.0f},
    {      METAL_SHEET,    {1200.0,0.0,1200.0}, 135.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  800.0,  60.0f, 0, 0, 0,  3.0f,  7.0f,  90.0f, 21.0f},
    {           SCROLL,   {-1450.0,0.0,-500.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  900.0,  80.0f, 0, 0, 0,  4.0f,  7.0f,  80.0f, 21.0f},
    {           SCROLL,    {-1450.0,0.0,500.0},   0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0,  900.0,  80.0f, 0, 0, 0,  5.0f,  7.0f,  80.0f, 21.0f},
    {      METAL_SHEET,    {500.0,0.0,-1400.0}, -90.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0, 1000.0,  80.0f, 0, 0, 0,  6.0f,  7.0f,  70.0f, 21.0f},
    {      METAL_SHEET,     {500.0,0.0,1400.0},  90.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,  0.0,  0.0,       0.0, 1000.0,  80.0f, 0, 0, 0,  7.0f,  7.0f,  70.0f, 21.0f},
    {       ACTOR_NULL,          {0.0,0.0,0.0},   0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,  0.0,  0.0,       0.0,    0.0,      0, 0, 0, 0,     0,     0,      0,     0}
};

SpriteActor GhostCastle_roomUnk_sprites[] = {
    {  2, 53, {2300.0,0.0,-1300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,  {2300.0,0.0,-500.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,   {2300.0,0.0,300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,   {1800.0,0.0,900.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,  {1200.0,0.0,1500.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,   {600.0,0.0,2100.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,  {-100.0,0.0,2300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,  {-900.0,0.0,2300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53, {-1700.0,0.0,2300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,  {-1300.0,0.0,700.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,   {-500.0,0.0,700.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,    {100.0,0.0,400.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,   {500.0,0.0,-100.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,   {700.0,0.0,-900.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    {  2, 53,  {700.0,0.0,-1700.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
    { -1,  0,     {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0,     -1, -1, 0,   0}
};

RoomObject GhostCastle_room17_objects[] = {
    {   {2400.0,0.0,600.0}, {2.0,1.0,2.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34,  4, 4, 0, -1, 0, 0},
    { {1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    { {1500.0,0.0,-2700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 95, -1, -1, -1, NULL, NULL, 0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0,  3,  4, 4, 0, -1, 0, 0},
    { {-2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  7, -1, 1, 0, -1, 0, 0},
    { {-2700.0,0.0,1500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, 0, 0,  1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  0,  0,  0,  0, NULL, NULL, 0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room17_actors[] = {
    { FIRE_SPITTER,   {500.0,230.0,500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 640000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
    { FIRE_SPITTER, {1000.0,230.0,1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
    { FIRE_SPITTER,  {-500.0,230.0,900.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
    { FIRE_SPITTER, {-500.0,230.0,1500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
    { FIRE_SPITTER, {-500.0,230.0,2100.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
    {   ACTOR_NULL,         {0.0,0.0,0.0}, 0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,  0.0, 0.0, 0.0, 0.0,         0, 0, 0, 0,     0,     0,     0,     0}
};

RoomObject GhostCastle_room18_objects[] = {
    {        {1700.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  77, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {        {1700.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  79, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {        {1700.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {        {1700.0,0.0,0.0},                                {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {           {0.0,0.0,0.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  96, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-200.0,-5.0,-1300.0},  {1.7000000476837158,0.25,0.800000011920929}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-595.0,-5.0,600.0},  {1.7000000476837158,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {800.0,-5.0,-100.0},   {0.800000011920929,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  68, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {500.0,-8.0,1150.0},                {0.5,0.11999999731779099,8.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-600.0,-8.0,-450.0},                {0.5,0.11999999731779099,7.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {840.0,995.0,-200.0},  {1.2000000476837158,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  68, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {       {0.0,995.0,700.0},                 {2.5,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-550.0,995.0,-1300.0},                 {1.0,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {200.0,992.0,700.0},                {0.5,0.11999999731779099,6.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1000.0,992.0,-450.0},                {0.5,0.11999999731779099,7.5}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1450.0,992.0,-900.0}, {0.6000000238418579,0.11999999731779099,2.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  64, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-550.0,0.0,1350.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  64, -1, -1, -1, NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {850.0,0.0,-1350.0},                                {1.5,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  64, -1, -1, -1, NULL,           NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1050.0,450.0,-1350.0},                 {1.0,1.2000000476837158,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  64, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {1350.0,1000.0,-1350.0},  {1.2000000476837158,1.2000000476837158,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  64, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {1300.0,0.0,0.0},  {1.3333333730697632,0.5,1.3333333730697632}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, -400.0,    0.0,  1550.0, 0.0, 0, 20, 0,   40, 0, 0,  64, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-200.0,1000.0,-1300.0},  {2.6666667461395264,0.5,1.3333333730697632}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, -400.0,    0.0,  1550.0, 0.0, 0, 20, 0,   40, 0, 0,  64, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {1350.0,1000.0,-400.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 114, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {      {-300.0,0.0,600.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0, 114, -1, -1, -1, NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {0.0,1000.0,-1700.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  28, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {0.0,1000.0,-1700.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,  25, -1, -1, -1, NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {0.0,1000.0,-1700.0},                                {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0,  400.0,  400.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {    {0.0,1000.0,-1700.0},                                {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,   0, -1, -1, -1, NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {           {0.0,0.0,0.0},                                {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0),   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,   0,  0,  0,  0, NULL,           NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room18_actors[] = {
    { FIRE_SPITTER, {-1000.0,1010.0,-500.0}, 0.0, -1500.0, 1500.0, -1000.0f, 1000.0, -1000.0, 1000.0, 0, 6.0, 3.0, 6.0, 3.0, 6250000.0f, 0, 0, 0, 300.0f, 20.0f, 20.0f, 5.0f},
    {   ACTOR_NULL,           {0.0,0.0,0.0}, 0.0,     0.0,    0.0,        0,    0.0,     0.0,    0.0, 0, 0.0, 0.0, 0.0, 0.0,          0, 0, 0, 0,      0,     0,     0,    0}
};

RoomObject GhostCastle_room19_objects[] = {
    {       {0.0,0.0,0.0},  {1.0,5.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7,  0,   0.0,   0.0, 0.0, 0.0, 0,   0,  0,   0,   0,  0, 38, -1, -1, -1, NULL, NULL,           0, 0, 7, 4, 4, 0, -1, 0, 0},
    {  {1250.0,250.0,0.0}, {1.0,10.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7,  0,   0.0,   0.0, 0.0, 0.0, 0,   0,  0,   0,   0,  0, 38, -1, -1, -1, NULL, NULL,           0, 0, 7, 4, 4, 0, -1, 0, 0},
    { {1000.0,0.0,-100.0},  {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 26, 600.0, 600.0, 0.0, 0.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
    {       {0.0,0.0,0.0},  {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0,  0,   0.0,   0.0, 0.0, 0.0, 0,   0,  0,   0,   0,  0,  0,  0,  0,  0, NULL, NULL,           0, 0, 0, 0, 0, 0,  0, 0, 0}
};

RoomActor GhostCastle_room19_actors[] = {
    {       FIRE, {500.0,50.0,0.0}, 0.0, -1500.0, 1500.0, -1000.0f, 1000.0, -1500.0, 1500.0, 0, 6.0, 3.0, 6.0, 3.0, 6250000.0f, 0, 0, 0, 300.0f, 20.0f, 20.0f, 5.0f},
    { ACTOR_NULL,    {0.0,0.0,0.0}, 0.0,     0.0,    0.0,        0,    0.0,     0.0,    0.0, 0, 0.0, 0.0, 0.0, 0.0,          0, 0, 0, 0,      0,     0,     0,    0}
};

Collectable GhostCastle_roomUnk_collectables[] = {
    {    R_HEART,  {-1500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-1000.0,258.0,1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,   {-500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,    {500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,   {1000.0,258.0,1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,   {1500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-1500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-1000.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,   {500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {1000.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {1500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,           {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room0_collectables[] = {
    {    R_HEART, {-2800.0,1200.0,-1400.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {2800.0,1200.0,-1400.0}, 4294967295, 0, 0, 0},
    {      CROWN,     {-2830.0,5.0,1830.0}, 4294967295, 0, 0, 0},
    {      CROWN,      {2830.0,5.0,1830.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,            {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room2_collectables[] = {
    {      CROWN,  {-334.0,-150.0,616.0}, 4294967295, 0, 0, 0},
    {    Y_HEART, {-434.0,-150.0,1116.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,          {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room5_collectables[] = {
    {      CROWN, {1250.0,0.0,-1250.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room6_collectables[] = {
    {    R_HEART,   {2750.0,200.0,-900.0}, 4294967295, 0, 0, 0},
    {    R_HEART,    {2750.0,200.0,900.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-3220.0,200.0,-873.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-2799.0,200.0,-1066.0}, 4294967295, 0, 0, 0},
    {    O_HEART,    {-1307.0,200.0,-3.0}, 4294967295, 0, 0, 0},
    {      CROWN,         {0.0,400.0,0.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,           {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room7_collectables[] = {
    {      CROWN, {800.0,-90.0,1950.0}, 4294967295, 0, 0, 0},
    {      CROWN, {-1000.0,0.0,-800.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {2000.0,0.0,-2800.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {2300.0,0.0,-2800.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room8_collectables[] = {
    {      CROWN,   {2200.0,1300.0,0.0}, 4294967295, 0, 0, 0},
    {    Y_HEART,   {2000.0,1300.0,0.0}, 4294967295, 0, 0, 0},
    {      CROWN,      {0.0,1200.0,0.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-2300.0,-1100.0,0.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room9_collectables[] = {
    { TIME_STOP_POWER_UP,  {-300.0,0.0,2800.0}, 4294967295, 0, -1, 450},
    {              CROWN,  {400.0,700.0,150.0}, 4294967295, 0,  0,   0},
    {              CROWN, {-400.0,700.0,150.0}, 4294967295, 0,  0,   0},
    {         ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0,  0,   0}
};

Collectable GhostCastle_room10_collectables[] = {
    {    R_HEART, {-2100.0,-200.0,-250.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-2100.0,-200.0,250.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,           {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room11_collectables[] = {
    {      CROWN,  {-1500.0,0.0,-900.0},         15, 0, 0, 0},
    {    R_HEART,  {-780.0,0.0,-2300.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-2020.0,0.0,-2300.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room12_collectables[] = {
    {      CROWN,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0},
    {    O_HEART, {-700.0,0.0,-1300.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-700.0,0.0,1300.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room13_collectables[] = {
    {      CROWN, {2300.0,0.0,-700.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,       {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room14_collectables[] = {
    {      CROWN, {-1800.0,300.0,0.0},         29, 0, 0, 0},
    { ACTOR_NULL,       {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room15_collectables[] = {
    {      CROWN, {660.0,0.0,1700.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,      {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room16_collectables[] = {
    {      CROWN,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0},
    {      CROWN,   {1530.0,300.0,0.0}, 4294967295, 0, 0, 0},
    {    O_HEART, {-1350.0,0.0,-300.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room17_collectables[] = {
    {             CROWN,  {-1500.0,0.0,900.0},         16, 0,  0,   0},
    {             CROWN, {-2186.0,0.0,1943.0}, 4294967295, 0,  0,   0},
    {             CROWN, {-2186.0,0.0,1043.0}, 4294967295, 0,  0,   0},
    {           R_HEART,   {1300.0,0.0,200.0}, 4294967295, 0,  0,   0},
    {           R_HEART,   {200.0,0.0,1300.0}, 4294967295, 0,  0,   0},
    {           R_HEART,  {-2200.0,0.0,800.0}, 4294967295, 0,  0,   0},
    {           R_HEART, {-2200.0,0.0,2200.0}, 4294967295, 0,  0,   0},
    { BIG_HEAD_POWER_UP,   {2300.0,0.0,200.0}, 4294967295, 0, -1, 450},
    {        ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0,  0,   0}
};

Collectable GhostCastle_room18_collectables[] = {
    {      CROWN,    {-568.0,0.0,1347.0}, 4294967295, 0, 0, 0},
    {      CROWN,  {1391.0,1000.0,700.0}, 4294967295, 0, 0, 0},
    {    R_HEART,     {500.0,0.0,1400.0}, 4294967295, 0, 0, 0},
    {     CARROT, {-1400.0,5000.0,700.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,          {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

s32 GhostCastle_spriteLib_Bin[9][16] = {
{   47,
    52,
    53,
    186,
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
{   47,
    48,
    49,
    55,
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
{   186,
    47,
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
{   47,
    55,
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
{   50,
    51,
    47,
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
{   47,
    69,
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
{   186,
    47,
    23,
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
{   186,
    47,
    27,
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


RoomInstance GhostCastle_room_instances[] = {
    {     GhostCastle_room0_objects,                         0,  GhostCastle_room0_collectables,  GhostCastle_room0_sprites, 0, 0, 2,  0, -1,    0, 0.0,  1, -1600.0, 1000.0,  1800.0,     0.0,    0.0,    0.0,               1.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    { GhostCastle_roomMulti_objects,                         0,                               0,                          0, 0, 0, 0,  0, -1,    0, 0.0,  0,  -400.0,  200.0,     0.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {     GhostCastle_room2_objects,  GhostCastle_room2_actors,  GhostCastle_room2_collectables,                          0, 0, 0, 2,  0, -1, 1000, 0.0,  2, -1000.0,  800.0, -1800.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    { GhostCastle_roomMulti_objects,                         0,                               0,                          0, 0, 0, 2,  0, -1,    0, 0.0,  1, -1300.0,  100.0,     0.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {     GhostCastle_room4_objects,                         0,                               0,                          0, 0, 0, 0, 47, 23,    0, 0.0,  2, -1300.0,  700.0,     0.0,     0.0,    0.0,    0.0,               0.5, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {     GhostCastle_room5_objects,  GhostCastle_room5_actors,  GhostCastle_room5_collectables,  GhostCastle_room5_sprites, 0, 0, 5,  0, -1,    0, 0.0,  1, -1200.0,    0.0,  1200.0,     0.0,    0.0,    0.0, 0.800000011920929, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {     GhostCastle_room6_objects,                         0,  GhostCastle_room6_collectables,                          0, 0, 0, 2,  0, -1,    0, 0.0,  1, -3300.0,  600.0,  1400.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {     GhostCastle_room7_objects,  GhostCastle_room7_actors,  GhostCastle_room7_collectables,  GhostCastle_room7_sprites, 0, 0, 2,  0, -1,    0, 0.0,  1,  2500.0, 1500.0,  2900.0,     0.0,    0.0,    0.0,               4.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {     GhostCastle_room8_objects,                         0,  GhostCastle_room8_collectables,                          0, 0, 0, 2,  0, -1,    0, 0.0, 13,  1500.0, 1300.0,  1900.0, -1500.0, 1300.0, 1900.0, 1.600000023841858, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {     GhostCastle_room9_objects,  GhostCastle_room9_actors,  GhostCastle_room9_collectables,  GhostCastle_room9_sprites, 0, 0, 7,  0, -1,    0, 0.0,  1,   400.0,    0.0,  2900.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {    GhostCastle_room10_objects,                         0, GhostCastle_room10_collectables,                          0, 0, 0, 2,  0, -1,    0, 0.0,  1,     0.0,  400.0,   600.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {    GhostCastle_room11_objects, GhostCastle_room11_actors, GhostCastle_room11_collectables,                          0, 0, 0, 0, 57, 15,    0, 0.0,  1,  -350.0,    0.0,  2400.0,     0.0,    0.0,    0.0,             200.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   1.5},
    {    GhostCastle_room12_objects, GhostCastle_room12_actors, GhostCastle_room12_collectables, GhostCastle_room12_sprites, 1, 0, 1, 53,  5,    0, 0.0,  2, -1400.0,  800.0,     0.0,     0.0,    0.0,    0.0, 0.800000011920929, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {    GhostCastle_room13_objects, GhostCastle_room13_actors, GhostCastle_room13_collectables, GhostCastle_room13_sprites, 0, 0, 0,  0, -1,    0, 0.0, 10,  -800.0,    0.0,  2450.0,     0.0,    0.0,    0.0,               2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {    GhostCastle_room14_objects, GhostCastle_room14_actors, GhostCastle_room14_collectables,                          0, 0, 0, 4, 45, 29,    0, 0.0, 16, -1000.0,  200.0, -1500.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 300.0},
    {    GhostCastle_room15_objects, GhostCastle_room15_actors, GhostCastle_room15_collectables, GhostCastle_room15_sprites, 0, 0, 0,  0, -1,    0, 0.0, 10, -2450.0,    0.0,  -800.0,     0.0,    0.0,    0.0,               2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {    GhostCastle_room16_objects, GhostCastle_room16_actors, GhostCastle_room16_collectables, GhostCastle_room16_sprites, 1, 0, 1, 53,  6,    0, 0.0,  2, -1400.0,  800.0,     0.0,     0.0,    0.0,    0.0, 0.800000011920929, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {    GhostCastle_room17_objects, GhostCastle_room17_actors, GhostCastle_room17_collectables,                          0, 0, 0, 6, 56, 16,    0, 0.0,  1,  2400.0,    0.0,   600.0,     0.0,    0.0,    0.0,             200.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   1.5},
    {    GhostCastle_room18_objects, GhostCastle_room18_actors, GhostCastle_room18_collectables, GhostCastle_room18_sprites, 0, 0, 2,  0, -1,    0, 0.0,  1, -1400.0,  500.0,  1400.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {    GhostCastle_room19_objects, GhostCastle_room19_actors,                               0,                          0, 0, 1, 0,  0, -1,    0, 0.0,  4,   600.0,  200.0,  1200.0,   600.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0},
    {                             0,                         0,                               0,                          0, 0, 0, 0,  0, -1,    0, 0.0,  0,     0.0,    0.0,     0.0,     0.0,    0.0,    0.0,               0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0,   0.0}
};

s32 GhostCastle_rooms_map[10][7] = {
    {-1, -1, -1, -1, -1, -1, -1},
    {13,  2,  2,  2, 15, -1, -1},
    {12, -1, -1, -1, 16, -1, -1},
    {12, -1, 19, -1, 16, -1, -1},
    {12, -1, 18, 17, 17, -1, -1},
    {12, -1, -1, -1, -1, -1, -1},
    {11, 10,  9, -1, -1, -1, -1},
    {-1,  6,  9,  8,  7, 14, -1},
    {-1,  5,  0,  0,  7, 14, -1},
    {-1,  5,  0,  0, -1, -1, -1}
};

StageMapData GhostCastle_map_data = {
    7, 10, GhostCastle_room_instances, GhostCastle_rooms_map,
};

SpriteActor GhostCastle_roomUnk2_sprites[] = {
    { -1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomInstance GhostCastle_ext_room_instances[] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope GhostCastle_scope_Lvlscope = {
    {0.0f, 0.0f, 0.0f},
    255,
    10000,
    60,
};

StageData GhostCastle_stageData = {
    &GhostCastle_map_data,
    NO_EXT_ROOMS,
    GhostCastle_stageModels,
    ARRAY_COUNT(GhostCastle_stageModels),
    0,
    GhostCastle_rabObjects_Bin,
    131072,
    GhostCastle_spriteLib_Bin,
    &GhostCastle_scope_Lvlscope,
};
Mtx GhostCastle_IMtx2 = IDENTITY;

Lights1 GhostCastle_gcScope_Light =
    #include "assets/levelGroup/GhostCastle/gcScope/gcScope.light.inc.c"

Vtx GhostCastle_model1_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model1/model1.vtx.inc.c"
};
Mtx GhostCastle_IMtx3 = IDENTITY;
unsigned char GhostCastle_Pad1[] = FILEPAD;
unsigned char GhostCastle_woodTexture_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/woodTexture.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad2[] = FILEPAD;
unsigned char GhostCastle_woodTexture_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/woodTexture.ci4.pal.inc.c"
};

Gfx GhostCastle_model1_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model1/model1.gfx.inc.c"
};

Vtx GhostCastle_model2_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model2/model2.vtx.inc.c"
};
Mtx GhostCastle_IMtx4 = IDENTITY;

Gfx GhostCastle_model2_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model2/model2.gfx.inc.c"
};

Vtx GhostCastle_model3_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model3/model3.vtx.inc.c"
};
Mtx GhostCastle_IMtx5 = IDENTITY;

Gfx GhostCastle_model3_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model3/model3.gfx.inc.c"
};

Vtx GhostCastle_model4_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model4/model4.vtx.inc.c"
};
Mtx GhostCastle_IMtx6 = IDENTITY;

Gfx GhostCastle_model4_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model4/model4.gfx.inc.c"
};

Vtx GhostCastle_model5_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model5/model5.vtx.inc.c"
};
Mtx GhostCastle_IMtx7 = IDENTITY;

Gfx GhostCastle_model5_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model5/model5.gfx.inc.c"
};

Vtx GhostCastle_model6_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model6/model6.vtx.inc.c"
};
Mtx GhostCastle_IMtx8 = IDENTITY;

Gfx GhostCastle_model6_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model6/model6.gfx.inc.c"
};

Vtx GhostCastle_model7_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model7/model7.vtx.inc.c"
};
Mtx GhostCastle_IMtx9 = IDENTITY;

Gfx GhostCastle_model7_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model7/model7.gfx.inc.c"
};

Vtx GhostCastle_model8_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model8/model8.vtx.inc.c"
};
Mtx GhostCastle_IMtx10 = IDENTITY;

Gfx GhostCastle_model8_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model8/model8.gfx.inc.c"
};

Vtx GhostCastle_model9_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model9/model9.vtx.inc.c"
};
Mtx GhostCastle_IMtx11 = IDENTITY;

Gfx GhostCastle_model9_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model9/model9.gfx.inc.c"
};

Vtx GhostCastle_model10_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model10/model10.vtx.inc.c"
};
Mtx GhostCastle_IMtx12 = IDENTITY;

Gfx GhostCastle_model10_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model10/model10.gfx.inc.c"
};

Vtx GhostCastle_model11_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model11/model11.vtx.inc.c"
};
Mtx GhostCastle_IMtx13 = IDENTITY;

Gfx GhostCastle_model11_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model11/model11.gfx.inc.c"
};

Vtx GhostCastle_model12_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model12/model12.vtx.inc.c"
};
Mtx GhostCastle_IMtx14 = IDENTITY;

Gfx GhostCastle_model12_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model12/model12.gfx.inc.c"
};

Vtx GhostCastle_model13_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model13/model13.vtx.inc.c"
};
Mtx GhostCastle_IMtx15 = IDENTITY;

Gfx GhostCastle_model13_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model13/model13.gfx.inc.c"
};

Vtx GhostCastle_model14_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model14/model14.vtx.inc.c"
};
Mtx GhostCastle_IMtx16 = IDENTITY;

Gfx GhostCastle_model14_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model14/model14.gfx.inc.c"
};

Vtx GhostCastle_model15_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model15/model15.vtx.inc.c"
};
Mtx GhostCastle_IMtx17 = IDENTITY;

Gfx GhostCastle_model15_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model15/model15.gfx.inc.c"
};

Vtx GhostCastle_model16_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model16/model16.vtx.inc.c"
};
Mtx GhostCastle_IMtx18 = IDENTITY;
unsigned char GhostCastle_Pad3[] = FILEPAD;
unsigned char GhostCastle_rockTexture_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/rockTexture.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad4[] = FILEPAD;
unsigned char GhostCastle_rockTexture_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/rockTexture.ci4.pal.inc.c"
};

Gfx GhostCastle_model16_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model16/model16.gfx.inc.c"
};

Vtx GhostCastle_model17_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model17/model17.vtx.inc.c"
};
Mtx GhostCastle_IMtx19 = IDENTITY;
unsigned char GhostCastle_Pad5[] = FILEPAD;
unsigned char GhostCastle_books1_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/books1.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad6[] = FILEPAD;
unsigned char GhostCastle_books1_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/books1.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad7[] = FILEPAD;
unsigned char GhostCastle_books2_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/books2.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad8[] = FILEPAD;
unsigned char GhostCastle_books2_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/books2.ci8.pal.inc.c"
};
unsigned char GhostCastle_Pad9[] = FILEPAD;
unsigned char GhostCastle_books3_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/books3.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad10[] = FILEPAD;
unsigned char GhostCastle_books3_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/books3.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad11[] = FILEPAD;
unsigned char GhostCastle_books4_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/books4.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad12[] = FILEPAD;
unsigned char GhostCastle_books4_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/books4.ci4.pal.inc.c"
};

Gfx GhostCastle_model17_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model17/model17.gfx.inc.c"
};

Vtx GhostCastle_model18_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model18/model18.vtx.inc.c"
};
Mtx GhostCastle_IMtx20 = IDENTITY;

Gfx GhostCastle_model18_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model18/model18.gfx.inc.c"
};

Vtx GhostCastle_model19_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model19/model19.vtx.inc.c"
};
Mtx GhostCastle_IMtx21 = IDENTITY;

Gfx GhostCastle_model19_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model19/model19.gfx.inc.c"
};

Vtx GhostCastle_model20_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model20/model20.vtx.inc.c"
};
Mtx GhostCastle_IMtx22 = IDENTITY;
unsigned char GhostCastle_Pad13[] = FILEPAD;
unsigned char GhostCastle_door_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/door.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad14[] = FILEPAD;
unsigned char GhostCastle_door_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/door.ci4.pal.inc.c"
};

Gfx GhostCastle_model20_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model20/model20.gfx.inc.c"
};

Vtx GhostCastle_model21_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model21/model21.vtx.inc.c"
};
Mtx GhostCastle_IMtx23 = IDENTITY;
unsigned char GhostCastle_Pad15[] = FILEPAD;
unsigned char GhostCastle_books5_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/books5.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad16[] = FILEPAD;
unsigned char GhostCastle_books5_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/books5.ci8.pal.inc.c"
};
unsigned char GhostCastle_Pad17[] = FILEPAD;
unsigned char GhostCastle_books6_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/books6.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad18[] = FILEPAD;
unsigned char GhostCastle_books6_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/books6.ci8.pal.inc.c"
};
unsigned char GhostCastle_Pad19[] = FILEPAD;
unsigned char GhostCastle_bookshelfSide_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/bookshelfSide.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad20[] = FILEPAD;
unsigned char GhostCastle_bookshelfSide_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/bookshelfSide.ci8.pal.inc.c"
};
unsigned char GhostCastle_Pad21[] = FILEPAD;
unsigned char GhostCastle_books7_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/books7.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad22[] = FILEPAD;
unsigned char GhostCastle_books7_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/books7.ci8.pal.inc.c"
};

Gfx GhostCastle_model21_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model21/model21.gfx.inc.c"
};

Vtx GhostCastle_model22_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model22/model22.vtx.inc.c"
};
Mtx GhostCastle_IMtx24 = IDENTITY;
unsigned char GhostCastle_Pad23[] = FILEPAD;
unsigned char GhostCastle_drawer_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/drawer.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad24[] = FILEPAD;
unsigned char GhostCastle_drawer_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/drawer.ci4.pal.inc.c"
};

Gfx GhostCastle_model22_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model22/model22.gfx.inc.c"
};

Vtx GhostCastle_model23_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model23/model23.vtx.inc.c"
};
Mtx GhostCastle_IMtx25 = IDENTITY;

Gfx GhostCastle_model23_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model23/model23.gfx.inc.c"
};

Vtx GhostCastle_model24_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model24/model24.vtx.inc.c"
};
Mtx GhostCastle_IMtx26 = IDENTITY;
unsigned char GhostCastle_Pad25[] = FILEPAD;
unsigned char GhostCastle_circle_ia4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/circle.ia4.png.inc.c"
};

Gfx GhostCastle_model24_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model24/model24.gfx.inc.c"
};

Vtx GhostCastle_model25_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model25/model25.vtx.inc.c"
};
Mtx GhostCastle_IMtx27 = IDENTITY;
unsigned char GhostCastle_Pad26[] = FILEPAD;
unsigned char GhostCastle_billiards_diamond_ia4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/billiards_diamond.ia4.png.inc.c"
};

Gfx GhostCastle_model25_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model25/model25.gfx.inc.c"
};

Vtx GhostCastle_model84_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model84/model84.vtx.inc.c"
};
Mtx GhostCastle_IMtx28 = IDENTITY;

Gfx GhostCastle_model84_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model84/model84.gfx.inc.c"
};

Vtx GhostCastle_model26_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model26/model26.vtx.inc.c"
};
Mtx GhostCastle_IMtx29 = IDENTITY;

Gfx GhostCastle_model26_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model26/model26.gfx.inc.c"
};

Vtx GhostCastle_model27_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model27/model27.vtx.inc.c"
};
Mtx GhostCastle_IMtx30 = IDENTITY;
unsigned char GhostCastle_Pad27[] = FILEPAD;
unsigned char GhostCastle_crateSide_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/crateSide.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad28[] = FILEPAD;
unsigned char GhostCastle_crateSide_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/crateSide.ci4.pal.inc.c"
};

Gfx GhostCastle_model27_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model27/model27.gfx.inc.c"
};

Vtx GhostCastle_model28_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model28/model28.vtx.inc.c"
};
Mtx GhostCastle_IMtx31 = IDENTITY;

Gfx GhostCastle_model28_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model28/model28.gfx.inc.c"
};

Vtx GhostCastle_model29_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model29/model29.vtx.inc.c"
};
Mtx GhostCastle_IMtx32 = IDENTITY;
unsigned char GhostCastle_Pad29[] = FILEPAD;
unsigned char GhostCastle_ctBarrel_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/ctBarrel.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad30[] = FILEPAD;
unsigned char GhostCastle_ctBarrel_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/ctBarrel.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad31[] = FILEPAD;
unsigned char GhostCastle_ctBarrelSide_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/ctBarrelSide.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad32[] = FILEPAD;
unsigned char GhostCastle_ctBarrelSide_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/ctBarrelSide.ci4.pal.inc.c"
};

Gfx GhostCastle_model29_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model29/model29.gfx.inc.c"
};

Vtx GhostCastle_model85_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model85/model85.vtx.inc.c"
};
Mtx GhostCastle_IMtx33 = IDENTITY;

Gfx GhostCastle_model85_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model85/model85.gfx.inc.c"
};

Vtx GhostCastle_model86_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model86/model86.vtx.inc.c"
};
Mtx GhostCastle_IMtx34 = IDENTITY;

Gfx GhostCastle_model86_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model86/model86.gfx.inc.c"
};

Vtx GhostCastle_model30_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model30/model30.vtx.inc.c"
};
Mtx GhostCastle_IMtx35 = IDENTITY;

Gfx GhostCastle_model30_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model30/model30.gfx.inc.c"
};

Vtx GhostCastle_model31_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model31/model31.vtx.inc.c"
};
Mtx GhostCastle_IMtx36 = IDENTITY;
unsigned char GhostCastle_Pad33[] = FILEPAD;
unsigned char GhostCastle_fork_ia8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/fork.ia8.png.inc.c"
};

Gfx GhostCastle_model31_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model31/model31.gfx.inc.c"
};

Vtx GhostCastle_model32_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model32/model32.vtx.inc.c"
};
Mtx GhostCastle_IMtx37 = IDENTITY;
unsigned char GhostCastle_Pad34[] = FILEPAD;
unsigned char GhostCastle_spoon_ia8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/spoon.ia8.png.inc.c"
};

Gfx GhostCastle_model32_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model32/model32.gfx.inc.c"
};

Vtx GhostCastle_model33_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model33/model33.vtx.inc.c"
};
Mtx GhostCastle_IMtx38 = IDENTITY;

Gfx GhostCastle_model33_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model33/model33.gfx.inc.c"
};

Vtx GhostCastle_model34_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model34/model34.vtx.inc.c"
};
Mtx GhostCastle_IMtx39 = IDENTITY;

Gfx GhostCastle_model34_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model34/model34.gfx.inc.c"
};

Vtx GhostCastle_model35_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model35/model35.vtx.inc.c"
};
Mtx GhostCastle_IMtx40 = IDENTITY;
unsigned char GhostCastle_Pad35[] = FILEPAD;
unsigned char GhostCastle_sky_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/sky.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad36[] = FILEPAD;
unsigned char GhostCastle_sky_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/sky.ci8.pal.inc.c"
};

Gfx GhostCastle_model35_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model35/model35.gfx.inc.c"
};

Vtx GhostCastle_model36_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model36/model36.vtx.inc.c"
};
Mtx GhostCastle_IMtx41 = IDENTITY;

Gfx GhostCastle_model36_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model36/model36.gfx.inc.c"
};

Vtx GhostCastle_model37_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model37/model37.vtx.inc.c"
};
Mtx GhostCastle_IMtx42 = IDENTITY;

Gfx GhostCastle_model37_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model37/model37.gfx.inc.c"
};

Vtx GhostCastle_model38_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model38/model38.vtx.inc.c"
};
Mtx GhostCastle_IMtx43 = IDENTITY;

Gfx GhostCastle_model38_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model38/model38.gfx.inc.c"
};

Vtx GhostCastle_model39_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model39/model39.vtx.inc.c"
};
Mtx GhostCastle_IMtx44 = IDENTITY;

Gfx GhostCastle_model39_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model39/model39.gfx.inc.c"
};

Vtx GhostCastle_model40_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model40/model40.vtx.inc.c"
};
Mtx GhostCastle_IMtx45 = IDENTITY;

Gfx GhostCastle_model40_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model40/model40.gfx.inc.c"
};

Vtx GhostCastle_model41_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model41/model41.vtx.inc.c"
};
Mtx GhostCastle_IMtx46 = IDENTITY;
unsigned char GhostCastle_Pad37[] = FILEPAD;
unsigned char GhostCastle_wallLine_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallLine.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad38[] = FILEPAD;
unsigned char GhostCastle_wallLine_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallLine.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad39[] = FILEPAD;
unsigned char GhostCastle_doors_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/doors.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad40[] = FILEPAD;
unsigned char GhostCastle_doors_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/doors.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad41[] = FILEPAD;
unsigned char GhostCastle_wallFade_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallFade.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad42[] = FILEPAD;
unsigned char GhostCastle_wallFade_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallFade.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad43[] = FILEPAD;
unsigned char GhostCastle_ceiling1_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/ceiling1.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad44[] = FILEPAD;
unsigned char GhostCastle_ceiling1_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/ceiling1.ci4.pal.inc.c"
};

Gfx GhostCastle_model41_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model41/model41.gfx.inc.c"
};

Vtx GhostCastle_model42_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model42/model42.vtx.inc.c"
};
Mtx GhostCastle_IMtx47 = IDENTITY;
unsigned char GhostCastle_Pad45[] = FILEPAD;
unsigned char GhostCastle_wallSquare_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad46[] = FILEPAD;
unsigned char GhostCastle_wallSquare_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare.ci8.pal.inc.c"
};

Gfx GhostCastle_model42_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model42/model42.gfx.inc.c"
};

Vtx GhostCastle_model43_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model43/model43.vtx.inc.c"
};
Mtx GhostCastle_IMtx48 = IDENTITY;

Gfx GhostCastle_model43_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model43/model43.gfx.inc.c"
};

Vtx GhostCastle_model44_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model44/model44.vtx.inc.c"
};
Mtx GhostCastle_IMtx49 = IDENTITY;

Gfx GhostCastle_model44_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model44/model44.gfx.inc.c"
};

Vtx GhostCastle_model45_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model45/model45.vtx.inc.c"
};
Mtx GhostCastle_IMtx50 = IDENTITY;

Gfx GhostCastle_model45_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model45/model45.gfx.inc.c"
};

Vtx GhostCastle_model46_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model46/model46.vtx.inc.c"
};
Mtx GhostCastle_IMtx51 = IDENTITY;
unsigned char GhostCastle_Pad47[] = FILEPAD;
unsigned char GhostCastle_wallSquare2_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare2.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad48[] = FILEPAD;
unsigned char GhostCastle_wallSquare2_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare2.ci4.pal.inc.c"
};

Gfx GhostCastle_model46_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model46/model46.gfx.inc.c"
};

Vtx GhostCastle_model47_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model47/model47.vtx.inc.c"
};
Mtx GhostCastle_IMtx52 = IDENTITY;
unsigned char GhostCastle_Pad49[] = FILEPAD;
unsigned char GhostCastle_wallFade2_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallFade2.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad50[] = FILEPAD;
unsigned char GhostCastle_wallFade2_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallFade2.ci8.pal.inc.c"
};

Gfx GhostCastle_model47_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model47/model47.gfx.inc.c"
};

Vtx GhostCastle_model48_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model48/model48.vtx.inc.c"
};
Mtx GhostCastle_IMtx53 = IDENTITY;
unsigned char GhostCastle_Pad51[] = FILEPAD;
unsigned char GhostCastle_wallRepeat_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad52[] = FILEPAD;
unsigned char GhostCastle_wallRepeat_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat.ci4.pal.inc.c"
};

Gfx GhostCastle_model48_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model48/model48.gfx.inc.c"
};

Vtx GhostCastle_model49_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model49/model49.vtx.inc.c"
};
Mtx GhostCastle_IMtx54 = IDENTITY;

Gfx GhostCastle_model49_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model49/model49.gfx.inc.c"
};

Vtx GhostCastle_model50_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model50/model50.vtx.inc.c"
};
Mtx GhostCastle_IMtx55 = IDENTITY;
unsigned char GhostCastle_Pad53[] = FILEPAD;
unsigned char GhostCastle_wallRepeat2_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat2.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad54[] = FILEPAD;
unsigned char GhostCastle_wallRepeat2_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat2.ci8.pal.inc.c"
};

Gfx GhostCastle_model50_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model50/model50.gfx.inc.c"
};

Vtx GhostCastle_model51_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model51/model51.vtx.inc.c"
};
Mtx GhostCastle_IMtx56 = IDENTITY;

Gfx GhostCastle_model51_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model51/model51.gfx.inc.c"
};

Vtx GhostCastle_model52_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model52/model52.vtx.inc.c"
};
Mtx GhostCastle_IMtx57 = IDENTITY;
unsigned char GhostCastle_Pad55[] = FILEPAD;
unsigned char GhostCastle_paperWall_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/paperWall.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad56[] = FILEPAD;
unsigned char GhostCastle_paperWall_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/paperWall.ci8.pal.inc.c"
};

Gfx GhostCastle_model52_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model52/model52.gfx.inc.c"
};

Vtx GhostCastle_model53_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model53/model53.vtx.inc.c"
};
Mtx GhostCastle_IMtx58 = IDENTITY;

Gfx GhostCastle_model53_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model53/model53.gfx.inc.c"
};

Vtx GhostCastle_model54_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model54/model54.vtx.inc.c"
};
Mtx GhostCastle_IMtx59 = IDENTITY;
unsigned char GhostCastle_Pad57[] = FILEPAD;
unsigned char GhostCastle_door2_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/door2.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad58[] = FILEPAD;
unsigned char GhostCastle_door2_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/door2.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad59[] = FILEPAD;
unsigned char GhostCastle_doors2_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/doors2.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad60[] = FILEPAD;
unsigned char GhostCastle_doors2_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/doors2.ci4.pal.inc.c"
};
unsigned char GhostCastle_Pad61[] = FILEPAD;
unsigned char GhostCastle_box_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/box.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad62[] = FILEPAD;
unsigned char GhostCastle_box_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/box.ci4.pal.inc.c"
};

Gfx GhostCastle_model54_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model54/model54.gfx.inc.c"
};

Vtx GhostCastle_model55_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model55/model55.vtx.inc.c"
};
Mtx GhostCastle_IMtx60 = IDENTITY;

Gfx GhostCastle_model55_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model55/model55.gfx.inc.c"
};

Vtx GhostCastle_model56_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model56/model56.vtx.inc.c"
};
Mtx GhostCastle_IMtx61 = IDENTITY;

Gfx GhostCastle_model56_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model56/model56.gfx.inc.c"
};

Vtx GhostCastle_model57_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model57/model57.vtx.inc.c"
};
Mtx GhostCastle_IMtx62 = IDENTITY;
unsigned char GhostCastle_Pad63[] = FILEPAD;
unsigned char GhostCastle_scroll_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/scroll.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad64[] = FILEPAD;
unsigned char GhostCastle_scroll_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/scroll.ci4.pal.inc.c"
};

Gfx GhostCastle_model57_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model57/model57.gfx.inc.c"
};

Vtx GhostCastle_model58_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model58/model58.vtx.inc.c"
};
Mtx GhostCastle_IMtx63 = IDENTITY;

Gfx GhostCastle_model58_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model58/model58.gfx.inc.c"
};

Vtx GhostCastle_model59_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model59/model59.vtx.inc.c"
};
Mtx GhostCastle_IMtx64 = IDENTITY;

Gfx GhostCastle_model59_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model59/model59.gfx.inc.c"
};

Vtx GhostCastle_model60_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model60/model60.vtx.inc.c"
};
Mtx GhostCastle_IMtx65 = IDENTITY;

Gfx GhostCastle_model60_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model60/model60.gfx.inc.c"
};

Vtx GhostCastle_model61_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model61/model61.vtx.inc.c"
};
Mtx GhostCastle_IMtx66 = IDENTITY;

Gfx GhostCastle_model61_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model61/model61.gfx.inc.c"
};

Vtx GhostCastle_model62_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model62/model62.vtx.inc.c"
};
Mtx GhostCastle_IMtx67 = IDENTITY;

Gfx GhostCastle_model62_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model62/model62.gfx.inc.c"
};

Vtx GhostCastle_model63_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model63/model63.vtx.inc.c"
};
Mtx GhostCastle_IMtx68 = IDENTITY;

Gfx GhostCastle_model63_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model63/model63.gfx.inc.c"
};

Vtx GhostCastle_model64_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model64/model64.vtx.inc.c"
};
Mtx GhostCastle_IMtx69 = IDENTITY;

Gfx GhostCastle_model64_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model64/model64.gfx.inc.c"
};

Vtx GhostCastle_model65_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model65/model65.vtx.inc.c"
};
Mtx GhostCastle_IMtx70 = IDENTITY;

Gfx GhostCastle_model65_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model65/model65.gfx.inc.c"
};

Vtx GhostCastle_model66_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model66/model66.vtx.inc.c"
};
Mtx GhostCastle_IMtx71 = IDENTITY;

Gfx GhostCastle_model66_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model66/model66.gfx.inc.c"
};

Vtx GhostCastle_model67_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model67/model67.vtx.inc.c"
};
Mtx GhostCastle_IMtx72 = IDENTITY;

Gfx GhostCastle_model67_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model67/model67.gfx.inc.c"
};

Vtx GhostCastle_model68_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model68/model68.vtx.inc.c"
};
Mtx GhostCastle_IMtx73 = IDENTITY;

Gfx GhostCastle_model68_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model68/model68.gfx.inc.c"
};

Vtx GhostCastle_model69_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model69/model69.vtx.inc.c"
};
Mtx GhostCastle_IMtx74 = IDENTITY;

Gfx GhostCastle_model69_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model69/model69.gfx.inc.c"
};

Vtx GhostCastle_model70_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model70/model70.vtx.inc.c"
};
Mtx GhostCastle_IMtx75 = IDENTITY;

Gfx GhostCastle_model70_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model70/model70.gfx.inc.c"
};

Vtx GhostCastle_model71_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model71/model71.vtx.inc.c"
};
Mtx GhostCastle_IMtx76 = IDENTITY;
unsigned char GhostCastle_Pad65[] = FILEPAD;
unsigned char GhostCastle_otherDoor_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/otherDoor.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad66[] = FILEPAD;
unsigned char GhostCastle_otherDoor_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/otherDoor.ci4.pal.inc.c"
};

Gfx GhostCastle_model71_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model71/model71.gfx.inc.c"
};

Vtx GhostCastle_model72_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model72/model72.vtx.inc.c"
};
Mtx GhostCastle_IMtx77 = IDENTITY;

Gfx GhostCastle_model72_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model72/model72.gfx.inc.c"
};

Vtx GhostCastle_model73_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model73/model73.vtx.inc.c"
};
Mtx GhostCastle_IMtx78 = IDENTITY;

Gfx GhostCastle_model73_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model73/model73.gfx.inc.c"
};

Vtx GhostCastle_model74_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model74/model74.vtx.inc.c"
};
Mtx GhostCastle_IMtx79 = IDENTITY;

Gfx GhostCastle_model74_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model74/model74.gfx.inc.c"
};

Vec3f GhostCastle_unkCol1_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol1/unkCol1.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol1_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol1/unkCol1.colTris.inc.c"
};

Rect3D GhostCastle_unkCol1_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol1/unkCol1.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol1_collision = {
    ARRAY_COUNT(GhostCastle_unkCol1_ColVerts), ARRAY_COUNT(GhostCastle_unkCol1_ColTris), GhostCastle_unkCol1_ColVerts, GhostCastle_unkCol1_ColTris, &GhostCastle_unkCol1_BoundBox
};

Vec3f GhostCastle_unkCol2_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol2_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colTris.inc.c"
};

Rect3D GhostCastle_unkCol2_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol2_collision = {
    ARRAY_COUNT(GhostCastle_unkCol2_ColVerts), ARRAY_COUNT(GhostCastle_unkCol2_ColTris), GhostCastle_unkCol2_ColVerts, GhostCastle_unkCol2_ColTris, &GhostCastle_unkCol2_BoundBox
};

Vec3f GhostCastle_unkCol3_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol3_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colTris.inc.c"
};

Rect3D GhostCastle_unkCol3_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol3_collision = {
    ARRAY_COUNT(GhostCastle_unkCol3_ColVerts), ARRAY_COUNT(GhostCastle_unkCol3_ColTris), GhostCastle_unkCol3_ColVerts, GhostCastle_unkCol3_ColTris, &GhostCastle_unkCol3_BoundBox
};

Vec3f GhostCastle_unkCol4_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol4_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colTris.inc.c"
};

Rect3D GhostCastle_unkCol4_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol4_collision = {
    ARRAY_COUNT(GhostCastle_unkCol4_ColVerts), ARRAY_COUNT(GhostCastle_unkCol4_ColTris), GhostCastle_unkCol4_ColVerts, GhostCastle_unkCol4_ColTris, &GhostCastle_unkCol4_BoundBox
};

Vec3f GhostCastle_unkCol5_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol5_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colTris.inc.c"
};

Rect3D GhostCastle_unkCol5_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol5_collision = {
    ARRAY_COUNT(GhostCastle_unkCol5_ColVerts), ARRAY_COUNT(GhostCastle_unkCol5_ColTris), GhostCastle_unkCol5_ColVerts, GhostCastle_unkCol5_ColTris, &GhostCastle_unkCol5_BoundBox
};

Vec3f GhostCastle_unkCol6_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol6_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colTris.inc.c"
};

Rect3D GhostCastle_unkCol6_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol6_collision = {
    ARRAY_COUNT(GhostCastle_unkCol6_ColVerts), ARRAY_COUNT(GhostCastle_unkCol6_ColTris), GhostCastle_unkCol6_ColVerts, GhostCastle_unkCol6_ColTris, &GhostCastle_unkCol6_BoundBox
};

Vec3f GhostCastle_unkCol7_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol7_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colTris.inc.c"
};

Rect3D GhostCastle_unkCol7_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol7_collision = {
    ARRAY_COUNT(GhostCastle_unkCol7_ColVerts), ARRAY_COUNT(GhostCastle_unkCol7_ColTris), GhostCastle_unkCol7_ColVerts, GhostCastle_unkCol7_ColTris, &GhostCastle_unkCol7_BoundBox
};

Vec3f GhostCastle_unkCol8_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol8_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colTris.inc.c"
};

Rect3D GhostCastle_unkCol8_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol8_collision = {
    ARRAY_COUNT(GhostCastle_unkCol8_ColVerts), ARRAY_COUNT(GhostCastle_unkCol8_ColTris), GhostCastle_unkCol8_ColVerts, GhostCastle_unkCol8_ColTris, &GhostCastle_unkCol8_BoundBox
};

Vec3f GhostCastle_unkCol9_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol9_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colTris.inc.c"
};

Rect3D GhostCastle_unkCol9_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol9_collision = {
    ARRAY_COUNT(GhostCastle_unkCol9_ColVerts), ARRAY_COUNT(GhostCastle_unkCol9_ColTris), GhostCastle_unkCol9_ColVerts, GhostCastle_unkCol9_ColTris, &GhostCastle_unkCol9_BoundBox
};

Vec3f GhostCastle_unkCol10_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol10_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colTris.inc.c"
};

Rect3D GhostCastle_unkCol10_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol10_collision = {
    ARRAY_COUNT(GhostCastle_unkCol10_ColVerts), ARRAY_COUNT(GhostCastle_unkCol10_ColTris), GhostCastle_unkCol10_ColVerts, GhostCastle_unkCol10_ColTris, &GhostCastle_unkCol10_BoundBox
};

Vec3f GhostCastle_unkCol11_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol11_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colTris.inc.c"
};

Rect3D GhostCastle_unkCol11_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol11_collision = {
    ARRAY_COUNT(GhostCastle_unkCol11_ColVerts), ARRAY_COUNT(GhostCastle_unkCol11_ColTris), GhostCastle_unkCol11_ColVerts, GhostCastle_unkCol11_ColTris, &GhostCastle_unkCol11_BoundBox
};

Vec3f GhostCastle_unkCol12_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol12_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colTris.inc.c"
};

Rect3D GhostCastle_unkCol12_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol12_collision = {
    ARRAY_COUNT(GhostCastle_unkCol12_ColVerts), ARRAY_COUNT(GhostCastle_unkCol12_ColTris), GhostCastle_unkCol12_ColVerts, GhostCastle_unkCol12_ColTris, &GhostCastle_unkCol12_BoundBox
};

Vec3f GhostCastle_unkCol13_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol13_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colTris.inc.c"
};

Rect3D GhostCastle_unkCol13_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol13_collision = {
    ARRAY_COUNT(GhostCastle_unkCol13_ColVerts), ARRAY_COUNT(GhostCastle_unkCol13_ColTris), GhostCastle_unkCol13_ColVerts, GhostCastle_unkCol13_ColTris, &GhostCastle_unkCol13_BoundBox
};

Vec3f GhostCastle_unkCol14_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol14_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colTris.inc.c"
};

Rect3D GhostCastle_unkCol14_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol14_collision = {
    ARRAY_COUNT(GhostCastle_unkCol14_ColVerts), ARRAY_COUNT(GhostCastle_unkCol14_ColTris), GhostCastle_unkCol14_ColVerts, GhostCastle_unkCol14_ColTris, &GhostCastle_unkCol14_BoundBox
};

Vec3f GhostCastle_unkCol15_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol15_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colTris.inc.c"
};

Rect3D GhostCastle_unkCol15_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol15_collision = {
    ARRAY_COUNT(GhostCastle_unkCol15_ColVerts), ARRAY_COUNT(GhostCastle_unkCol15_ColTris), GhostCastle_unkCol15_ColVerts, GhostCastle_unkCol15_ColTris, &GhostCastle_unkCol15_BoundBox
};

Vec3f GhostCastle_unkCol16_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol16_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colTris.inc.c"
};

Rect3D GhostCastle_unkCol16_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol16_collision = {
    ARRAY_COUNT(GhostCastle_unkCol16_ColVerts), ARRAY_COUNT(GhostCastle_unkCol16_ColTris), GhostCastle_unkCol16_ColVerts, GhostCastle_unkCol16_ColTris, &GhostCastle_unkCol16_BoundBox
};

Vec3f GhostCastle_unkCol17_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol17_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colTris.inc.c"
};

Rect3D GhostCastle_unkCol17_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol17_collision = {
    ARRAY_COUNT(GhostCastle_unkCol17_ColVerts), ARRAY_COUNT(GhostCastle_unkCol17_ColTris), GhostCastle_unkCol17_ColVerts, GhostCastle_unkCol17_ColTris, &GhostCastle_unkCol17_BoundBox
};

Vec3f GhostCastle_unkCol18_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol18_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colTris.inc.c"
};

Rect3D GhostCastle_unkCol18_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol18_collision = {
    ARRAY_COUNT(GhostCastle_unkCol18_ColVerts), ARRAY_COUNT(GhostCastle_unkCol18_ColTris), GhostCastle_unkCol18_ColVerts, GhostCastle_unkCol18_ColTris, &GhostCastle_unkCol18_BoundBox
};

Vec3f GhostCastle_unkCol19_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol19_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colTris.inc.c"
};

Rect3D GhostCastle_unkCol19_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol19_collision = {
    ARRAY_COUNT(GhostCastle_unkCol19_ColVerts), ARRAY_COUNT(GhostCastle_unkCol19_ColTris), GhostCastle_unkCol19_ColVerts, GhostCastle_unkCol19_ColTris, &GhostCastle_unkCol19_BoundBox
};

Vec3f GhostCastle_unkCol20_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol20_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colTris.inc.c"
};

Rect3D GhostCastle_unkCol20_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol20_collision = {
    ARRAY_COUNT(GhostCastle_unkCol20_ColVerts), ARRAY_COUNT(GhostCastle_unkCol20_ColTris), GhostCastle_unkCol20_ColVerts, GhostCastle_unkCol20_ColTris, &GhostCastle_unkCol20_BoundBox
};

Vec3f GhostCastle_unkCol21_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol21_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colTris.inc.c"
};

Rect3D GhostCastle_unkCol21_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol21_collision = {
    ARRAY_COUNT(GhostCastle_unkCol21_ColVerts), ARRAY_COUNT(GhostCastle_unkCol21_ColTris), GhostCastle_unkCol21_ColVerts, GhostCastle_unkCol21_ColTris, &GhostCastle_unkCol21_BoundBox
};

Vec3f GhostCastle_unkCol22_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol22_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colTris.inc.c"
};

Rect3D GhostCastle_unkCol22_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol22_collision = {
    ARRAY_COUNT(GhostCastle_unkCol22_ColVerts), ARRAY_COUNT(GhostCastle_unkCol22_ColTris), GhostCastle_unkCol22_ColVerts, GhostCastle_unkCol22_ColTris, &GhostCastle_unkCol22_BoundBox
};

Vec3f GhostCastle_unkCol23_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol23_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colTris.inc.c"
};

Rect3D GhostCastle_unkCol23_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol23_collision = {
    ARRAY_COUNT(GhostCastle_unkCol23_ColVerts), ARRAY_COUNT(GhostCastle_unkCol23_ColTris), GhostCastle_unkCol23_ColVerts, GhostCastle_unkCol23_ColTris, &GhostCastle_unkCol23_BoundBox
};

Vec3f GhostCastle_unkCol24_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol24_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colTris.inc.c"
};

Rect3D GhostCastle_unkCol24_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol24_collision = {
    ARRAY_COUNT(GhostCastle_unkCol24_ColVerts), ARRAY_COUNT(GhostCastle_unkCol24_ColTris), GhostCastle_unkCol24_ColVerts, GhostCastle_unkCol24_ColTris, &GhostCastle_unkCol24_BoundBox
};

Vec3f GhostCastle_unkCol25_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol25_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colTris.inc.c"
};

Rect3D GhostCastle_unkCol25_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol25_collision = {
    ARRAY_COUNT(GhostCastle_unkCol25_ColVerts), ARRAY_COUNT(GhostCastle_unkCol25_ColTris), GhostCastle_unkCol25_ColVerts, GhostCastle_unkCol25_ColTris, &GhostCastle_unkCol25_BoundBox
};

Vec3f GhostCastle_unkCol26_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol26_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colTris.inc.c"
};

Rect3D GhostCastle_unkCol26_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol26_collision = {
    ARRAY_COUNT(GhostCastle_unkCol26_ColVerts), ARRAY_COUNT(GhostCastle_unkCol26_ColTris), GhostCastle_unkCol26_ColVerts, GhostCastle_unkCol26_ColTris, &GhostCastle_unkCol26_BoundBox
};

Vec3f GhostCastle_unkCol27_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol27_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colTris.inc.c"
};

Rect3D GhostCastle_unkCol27_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol27_collision = {
    ARRAY_COUNT(GhostCastle_unkCol27_ColVerts), ARRAY_COUNT(GhostCastle_unkCol27_ColTris), GhostCastle_unkCol27_ColVerts, GhostCastle_unkCol27_ColTris, &GhostCastle_unkCol27_BoundBox
};

Vec3f GhostCastle_unkCol28_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol28_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colTris.inc.c"
};

Rect3D GhostCastle_unkCol28_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol28_collision = {
    ARRAY_COUNT(GhostCastle_unkCol28_ColVerts), ARRAY_COUNT(GhostCastle_unkCol28_ColTris), GhostCastle_unkCol28_ColVerts, GhostCastle_unkCol28_ColTris, &GhostCastle_unkCol28_BoundBox
};

Vec3f GhostCastle_unkCol29_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol29_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colTris.inc.c"
};

Rect3D GhostCastle_unkCol29_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol29_collision = {
    ARRAY_COUNT(GhostCastle_unkCol29_ColVerts), ARRAY_COUNT(GhostCastle_unkCol29_ColTris), GhostCastle_unkCol29_ColVerts, GhostCastle_unkCol29_ColTris, &GhostCastle_unkCol29_BoundBox
};

Vec3f GhostCastle_unkCol30_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol30_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colTris.inc.c"
};

Rect3D GhostCastle_unkCol30_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol30_collision = {
    ARRAY_COUNT(GhostCastle_unkCol30_ColVerts), ARRAY_COUNT(GhostCastle_unkCol30_ColTris), GhostCastle_unkCol30_ColVerts, GhostCastle_unkCol30_ColTris, &GhostCastle_unkCol30_BoundBox
};

Vec3f GhostCastle_unkCol31_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol31_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colTris.inc.c"
};

Rect3D GhostCastle_unkCol31_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol31_collision = {
    ARRAY_COUNT(GhostCastle_unkCol31_ColVerts), ARRAY_COUNT(GhostCastle_unkCol31_ColTris), GhostCastle_unkCol31_ColVerts, GhostCastle_unkCol31_ColTris, &GhostCastle_unkCol31_BoundBox
};

Vec3f GhostCastle_unkCol32_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol32_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colTris.inc.c"
};

Rect3D GhostCastle_unkCol32_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol32_collision = {
    ARRAY_COUNT(GhostCastle_unkCol32_ColVerts), ARRAY_COUNT(GhostCastle_unkCol32_ColTris), GhostCastle_unkCol32_ColVerts, GhostCastle_unkCol32_ColTris, &GhostCastle_unkCol32_BoundBox
};

Vec3f GhostCastle_unkCol33_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol33_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colTris.inc.c"
};

Rect3D GhostCastle_unkCol33_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol33_collision = {
    ARRAY_COUNT(GhostCastle_unkCol33_ColVerts), ARRAY_COUNT(GhostCastle_unkCol33_ColTris), GhostCastle_unkCol33_ColVerts, GhostCastle_unkCol33_ColTris, &GhostCastle_unkCol33_BoundBox
};

Vec3f GhostCastle_unkCol34_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol34_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colTris.inc.c"
};

Rect3D GhostCastle_unkCol34_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol34_collision = {
    ARRAY_COUNT(GhostCastle_unkCol34_ColVerts), ARRAY_COUNT(GhostCastle_unkCol34_ColTris), GhostCastle_unkCol34_ColVerts, GhostCastle_unkCol34_ColTris, &GhostCastle_unkCol34_BoundBox
};

Vec3f GhostCastle_unkCol35_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol35_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colTris.inc.c"
};

Rect3D GhostCastle_unkCol35_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol35_collision = {
    ARRAY_COUNT(GhostCastle_unkCol35_ColVerts), ARRAY_COUNT(GhostCastle_unkCol35_ColTris), GhostCastle_unkCol35_ColVerts, GhostCastle_unkCol35_ColTris, &GhostCastle_unkCol35_BoundBox
};

Vec3f GhostCastle_unkCol36_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol36_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colTris.inc.c"
};

Rect3D GhostCastle_unkCol36_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol36_collision = {
    ARRAY_COUNT(GhostCastle_unkCol36_ColVerts), ARRAY_COUNT(GhostCastle_unkCol36_ColTris), GhostCastle_unkCol36_ColVerts, GhostCastle_unkCol36_ColTris, &GhostCastle_unkCol36_BoundBox
};

Vec3f GhostCastle_unkCol37_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol37_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colTris.inc.c"
};

Rect3D GhostCastle_unkCol37_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol37_collision = {
    ARRAY_COUNT(GhostCastle_unkCol37_ColVerts), ARRAY_COUNT(GhostCastle_unkCol37_ColTris), GhostCastle_unkCol37_ColVerts, GhostCastle_unkCol37_ColTris, &GhostCastle_unkCol37_BoundBox
};

Vec3f GhostCastle_unkCol38_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol38_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colTris.inc.c"
};

Rect3D GhostCastle_unkCol38_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol38_collision = {
    ARRAY_COUNT(GhostCastle_unkCol38_ColVerts), ARRAY_COUNT(GhostCastle_unkCol38_ColTris), GhostCastle_unkCol38_ColVerts, GhostCastle_unkCol38_ColTris, &GhostCastle_unkCol38_BoundBox
};

Vec3f GhostCastle_unkCol39_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol39_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colTris.inc.c"
};

Rect3D GhostCastle_unkCol39_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol39_collision = {
    ARRAY_COUNT(GhostCastle_unkCol39_ColVerts), ARRAY_COUNT(GhostCastle_unkCol39_ColTris), GhostCastle_unkCol39_ColVerts, GhostCastle_unkCol39_ColTris, &GhostCastle_unkCol39_BoundBox
};

Vec3f GhostCastle_unkCol40_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol40_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colTris.inc.c"
};

Rect3D GhostCastle_unkCol40_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol40_collision = {
    ARRAY_COUNT(GhostCastle_unkCol40_ColVerts), ARRAY_COUNT(GhostCastle_unkCol40_ColTris), GhostCastle_unkCol40_ColVerts, GhostCastle_unkCol40_ColTris, &GhostCastle_unkCol40_BoundBox
};

Vec3f GhostCastle_unkCol41_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol41_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colTris.inc.c"
};

Rect3D GhostCastle_unkCol41_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol41_collision = {
    ARRAY_COUNT(GhostCastle_unkCol41_ColVerts), ARRAY_COUNT(GhostCastle_unkCol41_ColTris), GhostCastle_unkCol41_ColVerts, GhostCastle_unkCol41_ColTris, &GhostCastle_unkCol41_BoundBox
};

Vec3f GhostCastle_unkCol42_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol42_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colTris.inc.c"
};

Rect3D GhostCastle_unkCol42_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol42_collision = {
    ARRAY_COUNT(GhostCastle_unkCol42_ColVerts), ARRAY_COUNT(GhostCastle_unkCol42_ColTris), GhostCastle_unkCol42_ColVerts, GhostCastle_unkCol42_ColTris, &GhostCastle_unkCol42_BoundBox
};

Vec3f GhostCastle_unkCol43_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol43_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colTris.inc.c"
};

Rect3D GhostCastle_unkCol43_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol43_collision = {
    ARRAY_COUNT(GhostCastle_unkCol43_ColVerts), ARRAY_COUNT(GhostCastle_unkCol43_ColTris), GhostCastle_unkCol43_ColVerts, GhostCastle_unkCol43_ColTris, &GhostCastle_unkCol43_BoundBox
};

Vec3f GhostCastle_unkCol44_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol44_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colTris.inc.c"
};

Rect3D GhostCastle_unkCol44_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol44_collision = {
    ARRAY_COUNT(GhostCastle_unkCol44_ColVerts), ARRAY_COUNT(GhostCastle_unkCol44_ColTris), GhostCastle_unkCol44_ColVerts, GhostCastle_unkCol44_ColTris, &GhostCastle_unkCol44_BoundBox
};

Vec3f GhostCastle_unkCol45_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol45_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colTris.inc.c"
};

Rect3D GhostCastle_unkCol45_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol45_collision = {
    ARRAY_COUNT(GhostCastle_unkCol45_ColVerts), ARRAY_COUNT(GhostCastle_unkCol45_ColTris), GhostCastle_unkCol45_ColVerts, GhostCastle_unkCol45_ColTris, &GhostCastle_unkCol45_BoundBox
};

Vec3f GhostCastle_unkCol46_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol46_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colTris.inc.c"
};

Rect3D GhostCastle_unkCol46_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol46_collision = {
    ARRAY_COUNT(GhostCastle_unkCol46_ColVerts), ARRAY_COUNT(GhostCastle_unkCol46_ColTris), GhostCastle_unkCol46_ColVerts, GhostCastle_unkCol46_ColTris, &GhostCastle_unkCol46_BoundBox
};

Vec3f GhostCastle_unkCol47_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol47_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colTris.inc.c"
};

Rect3D GhostCastle_unkCol47_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol47_collision = {
    ARRAY_COUNT(GhostCastle_unkCol47_ColVerts), ARRAY_COUNT(GhostCastle_unkCol47_ColTris), GhostCastle_unkCol47_ColVerts, GhostCastle_unkCol47_ColTris, &GhostCastle_unkCol47_BoundBox
};

Vec3f GhostCastle_unkCol48_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol48_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colTris.inc.c"
};

Rect3D GhostCastle_unkCol48_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol48_collision = {
    ARRAY_COUNT(GhostCastle_unkCol48_ColVerts), ARRAY_COUNT(GhostCastle_unkCol48_ColTris), GhostCastle_unkCol48_ColVerts, GhostCastle_unkCol48_ColTris, &GhostCastle_unkCol48_BoundBox
};

Vec3f GhostCastle_unkCol49_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol49_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colTris.inc.c"
};

Rect3D GhostCastle_unkCol49_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol49_collision = {
    ARRAY_COUNT(GhostCastle_unkCol49_ColVerts), ARRAY_COUNT(GhostCastle_unkCol49_ColTris), GhostCastle_unkCol49_ColVerts, GhostCastle_unkCol49_ColTris, &GhostCastle_unkCol49_BoundBox
};

Vec3f GhostCastle_unkCol50_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol50_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colTris.inc.c"
};

Rect3D GhostCastle_unkCol50_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol50_collision = {
    ARRAY_COUNT(GhostCastle_unkCol50_ColVerts), ARRAY_COUNT(GhostCastle_unkCol50_ColTris), GhostCastle_unkCol50_ColVerts, GhostCastle_unkCol50_ColTris, &GhostCastle_unkCol50_BoundBox
};

Vec3f GhostCastle_unkCol51_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol51_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colTris.inc.c"
};

Rect3D GhostCastle_unkCol51_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol51_collision = {
    ARRAY_COUNT(GhostCastle_unkCol51_ColVerts), ARRAY_COUNT(GhostCastle_unkCol51_ColTris), GhostCastle_unkCol51_ColVerts, GhostCastle_unkCol51_ColTris, &GhostCastle_unkCol51_BoundBox
};

Vec3f GhostCastle_unkCol52_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol52_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colTris.inc.c"
};

Rect3D GhostCastle_unkCol52_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol52_collision = {
    ARRAY_COUNT(GhostCastle_unkCol52_ColVerts), ARRAY_COUNT(GhostCastle_unkCol52_ColTris), GhostCastle_unkCol52_ColVerts, GhostCastle_unkCol52_ColTris, &GhostCastle_unkCol52_BoundBox
};

Vec3f GhostCastle_unkCol53_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol53_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colTris.inc.c"
};

Rect3D GhostCastle_unkCol53_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol53_collision = {
    ARRAY_COUNT(GhostCastle_unkCol53_ColVerts), ARRAY_COUNT(GhostCastle_unkCol53_ColTris), GhostCastle_unkCol53_ColVerts, GhostCastle_unkCol53_ColTris, &GhostCastle_unkCol53_BoundBox
};

Vec3f GhostCastle_unkCol54_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol54_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colTris.inc.c"
};

Rect3D GhostCastle_unkCol54_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol54_collision = {
    ARRAY_COUNT(GhostCastle_unkCol54_ColVerts), ARRAY_COUNT(GhostCastle_unkCol54_ColTris), GhostCastle_unkCol54_ColVerts, GhostCastle_unkCol54_ColTris, &GhostCastle_unkCol54_BoundBox
};

Vec3f GhostCastle_unkCol55_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol55_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colTris.inc.c"
};

Rect3D GhostCastle_unkCol55_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol55_collision = {
    ARRAY_COUNT(GhostCastle_unkCol55_ColVerts), ARRAY_COUNT(GhostCastle_unkCol55_ColTris), GhostCastle_unkCol55_ColVerts, GhostCastle_unkCol55_ColTris, &GhostCastle_unkCol55_BoundBox
};

Vec3f GhostCastle_unkCol56_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol56_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colTris.inc.c"
};

Rect3D GhostCastle_unkCol56_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol56_collision = {
    ARRAY_COUNT(GhostCastle_unkCol56_ColVerts), ARRAY_COUNT(GhostCastle_unkCol56_ColTris), GhostCastle_unkCol56_ColVerts, GhostCastle_unkCol56_ColTris, &GhostCastle_unkCol56_BoundBox
};

Vec3f GhostCastle_unkCol57_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol57_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colTris.inc.c"
};

Rect3D GhostCastle_unkCol57_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol57_collision = {
    ARRAY_COUNT(GhostCastle_unkCol57_ColVerts), ARRAY_COUNT(GhostCastle_unkCol57_ColTris), GhostCastle_unkCol57_ColVerts, GhostCastle_unkCol57_ColTris, &GhostCastle_unkCol57_BoundBox
};

Vec3f GhostCastle_unkCol58_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol58_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colTris.inc.c"
};

Rect3D GhostCastle_unkCol58_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol58_collision = {
    ARRAY_COUNT(GhostCastle_unkCol58_ColVerts), ARRAY_COUNT(GhostCastle_unkCol58_ColTris), GhostCastle_unkCol58_ColVerts, GhostCastle_unkCol58_ColTris, &GhostCastle_unkCol58_BoundBox
};

Vec3f GhostCastle_unkCol59_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol59_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colTris.inc.c"
};

Rect3D GhostCastle_unkCol59_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol59_collision = {
    ARRAY_COUNT(GhostCastle_unkCol59_ColVerts), ARRAY_COUNT(GhostCastle_unkCol59_ColTris), GhostCastle_unkCol59_ColVerts, GhostCastle_unkCol59_ColTris, &GhostCastle_unkCol59_BoundBox
};

Vec3f GhostCastle_unkCol60_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol60_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colTris.inc.c"
};

Rect3D GhostCastle_unkCol60_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol60_collision = {
    ARRAY_COUNT(GhostCastle_unkCol60_ColVerts), ARRAY_COUNT(GhostCastle_unkCol60_ColTris), GhostCastle_unkCol60_ColVerts, GhostCastle_unkCol60_ColTris, &GhostCastle_unkCol60_BoundBox
};

Vec3f GhostCastle_unkCol61_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol61_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colTris.inc.c"
};

Rect3D GhostCastle_unkCol61_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol61_collision = {
    ARRAY_COUNT(GhostCastle_unkCol61_ColVerts), ARRAY_COUNT(GhostCastle_unkCol61_ColTris), GhostCastle_unkCol61_ColVerts, GhostCastle_unkCol61_ColTris, &GhostCastle_unkCol61_BoundBox
};

Vec3f GhostCastle_unkCol62_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol62_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colTris.inc.c"
};

Rect3D GhostCastle_unkCol62_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol62_collision = {
    ARRAY_COUNT(GhostCastle_unkCol62_ColVerts), ARRAY_COUNT(GhostCastle_unkCol62_ColTris), GhostCastle_unkCol62_ColVerts, GhostCastle_unkCol62_ColTris, &GhostCastle_unkCol62_BoundBox
};

Vec3f GhostCastle_unkCol63_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol63_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colTris.inc.c"
};

Rect3D GhostCastle_unkCol63_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol63_collision = {
    ARRAY_COUNT(GhostCastle_unkCol63_ColVerts), ARRAY_COUNT(GhostCastle_unkCol63_ColTris), GhostCastle_unkCol63_ColVerts, GhostCastle_unkCol63_ColTris, &GhostCastle_unkCol63_BoundBox
};

Vec3f GhostCastle_unkCol64_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol64_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colTris.inc.c"
};

Rect3D GhostCastle_unkCol64_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol64_collision = {
    ARRAY_COUNT(GhostCastle_unkCol64_ColVerts), ARRAY_COUNT(GhostCastle_unkCol64_ColTris), GhostCastle_unkCol64_ColVerts, GhostCastle_unkCol64_ColTris, &GhostCastle_unkCol64_BoundBox
};

Vec3f GhostCastle_unkCol65_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol65_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colTris.inc.c"
};

Rect3D GhostCastle_unkCol65_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol65_collision = {
    ARRAY_COUNT(GhostCastle_unkCol65_ColVerts), ARRAY_COUNT(GhostCastle_unkCol65_ColTris), GhostCastle_unkCol65_ColVerts, GhostCastle_unkCol65_ColTris, &GhostCastle_unkCol65_BoundBox
};

Vec3f GhostCastle_unkCol66_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol66_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colTris.inc.c"
};

Rect3D GhostCastle_unkCol66_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol66_collision = {
    ARRAY_COUNT(GhostCastle_unkCol66_ColVerts), ARRAY_COUNT(GhostCastle_unkCol66_ColTris), GhostCastle_unkCol66_ColVerts, GhostCastle_unkCol66_ColTris, &GhostCastle_unkCol66_BoundBox
};

Vec3f GhostCastle_unkCol67_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol67_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colTris.inc.c"
};

Rect3D GhostCastle_unkCol67_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol67_collision = {
    ARRAY_COUNT(GhostCastle_unkCol67_ColVerts), ARRAY_COUNT(GhostCastle_unkCol67_ColTris), GhostCastle_unkCol67_ColVerts, GhostCastle_unkCol67_ColTris, &GhostCastle_unkCol67_BoundBox
};

Vec3f GhostCastle_unkCol68_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol68_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colTris.inc.c"
};

Rect3D GhostCastle_unkCol68_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol68_collision = {
    ARRAY_COUNT(GhostCastle_unkCol68_ColVerts), ARRAY_COUNT(GhostCastle_unkCol68_ColTris), GhostCastle_unkCol68_ColVerts, GhostCastle_unkCol68_ColTris, &GhostCastle_unkCol68_BoundBox
};

Vec3f GhostCastle_unkCol69_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol69_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colTris.inc.c"
};

Rect3D GhostCastle_unkCol69_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol69_collision = {
    ARRAY_COUNT(GhostCastle_unkCol69_ColVerts), ARRAY_COUNT(GhostCastle_unkCol69_ColTris), GhostCastle_unkCol69_ColVerts, GhostCastle_unkCol69_ColTris, &GhostCastle_unkCol69_BoundBox
};

Vec3f GhostCastle_unkCol70_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol70_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colTris.inc.c"
};

Rect3D GhostCastle_unkCol70_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol70_collision = {
    ARRAY_COUNT(GhostCastle_unkCol70_ColVerts), ARRAY_COUNT(GhostCastle_unkCol70_ColTris), GhostCastle_unkCol70_ColVerts, GhostCastle_unkCol70_ColTris, &GhostCastle_unkCol70_BoundBox
};

Vec3f GhostCastle_unkCol71_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol71_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colTris.inc.c"
};

Rect3D GhostCastle_unkCol71_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol71_collision = {
    ARRAY_COUNT(GhostCastle_unkCol71_ColVerts), ARRAY_COUNT(GhostCastle_unkCol71_ColTris), GhostCastle_unkCol71_ColVerts, GhostCastle_unkCol71_ColTris, &GhostCastle_unkCol71_BoundBox
};

Vec3f GhostCastle_unkCol72_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol72_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colTris.inc.c"
};

Rect3D GhostCastle_unkCol72_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol72_collision = {
    ARRAY_COUNT(GhostCastle_unkCol72_ColVerts), ARRAY_COUNT(GhostCastle_unkCol72_ColTris), GhostCastle_unkCol72_ColVerts, GhostCastle_unkCol72_ColTris, &GhostCastle_unkCol72_BoundBox
};

Vec3f GhostCastle_unkCol73_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol73_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colTris.inc.c"
};

Rect3D GhostCastle_unkCol73_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol73_collision = {
    ARRAY_COUNT(GhostCastle_unkCol73_ColVerts), ARRAY_COUNT(GhostCastle_unkCol73_ColTris), GhostCastle_unkCol73_ColVerts, GhostCastle_unkCol73_ColTris, &GhostCastle_unkCol73_BoundBox
};

Vec3f GhostCastle_unkCol74_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol74_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colTris.inc.c"
};

Rect3D GhostCastle_unkCol74_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol74_collision = {
    ARRAY_COUNT(GhostCastle_unkCol74_ColVerts), ARRAY_COUNT(GhostCastle_unkCol74_ColTris), GhostCastle_unkCol74_ColVerts, GhostCastle_unkCol74_ColTris, &GhostCastle_unkCol74_BoundBox
};

Vec3f GhostCastle_unkCol75_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol75_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colTris.inc.c"
};

Rect3D GhostCastle_unkCol75_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol75_collision = {
    ARRAY_COUNT(GhostCastle_unkCol75_ColVerts), ARRAY_COUNT(GhostCastle_unkCol75_ColTris), GhostCastle_unkCol75_ColVerts, GhostCastle_unkCol75_ColTris, &GhostCastle_unkCol75_BoundBox
};

Vec3f GhostCastle_unkCol76_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol76_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colTris.inc.c"
};

Rect3D GhostCastle_unkCol76_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol76_collision = {
    ARRAY_COUNT(GhostCastle_unkCol76_ColVerts), ARRAY_COUNT(GhostCastle_unkCol76_ColTris), GhostCastle_unkCol76_ColVerts, GhostCastle_unkCol76_ColTris, &GhostCastle_unkCol76_BoundBox
};

Vec3f GhostCastle_unkCol77_ColVerts[] = {
    #include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colVerts.inc.c"
};

Vec3w GhostCastle_unkCol77_ColTris[] = {
    #include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colTris.inc.c"
};

Rect3D GhostCastle_unkCol77_BoundBox = {
    #include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.boundBox.inc.c"
};

ModelCollision GhostCastle_unkCol77_collision = {
    ARRAY_COUNT(GhostCastle_unkCol77_ColVerts), ARRAY_COUNT(GhostCastle_unkCol77_ColTris), GhostCastle_unkCol77_ColVerts, GhostCastle_unkCol77_ColTris, &GhostCastle_unkCol77_BoundBox
};
Mtx GhostCastle_IMtx80 = IDENTITY;

Lights1 GhostCastle_gcScope2_Light =
    #include "assets/levelGroup/GhostCastle/gcScope2/gcScope2.light.inc.c"

Vtx GhostCastle_model75_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model75/model75.vtx.inc.c"
};
Mtx GhostCastle_IMtx81 = IDENTITY;

Gfx GhostCastle_model75_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model75/model75.gfx.inc.c"
};

Vtx GhostCastle_model76_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model76/model76.vtx.inc.c"
};
Mtx GhostCastle_IMtx82 = IDENTITY;

Gfx GhostCastle_model76_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model76/model76.gfx.inc.c"
};

Vtx GhostCastle_model77_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model77/model77.vtx.inc.c"
};
Mtx GhostCastle_IMtx83 = IDENTITY;

Gfx GhostCastle_model77_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model77/model77.gfx.inc.c"
};
Mtx GhostCastle_IMtx84 = IDENTITY;

Gfx GhostCastle_model78_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model78/model78.gfx.inc.c"
};

Vtx GhostCastle_model79_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model79/model79.vtx.inc.c"
};
Mtx GhostCastle_IMtx85 = IDENTITY;
unsigned char GhostCastle_Pad67[] = FILEPAD;
unsigned char GhostCastle_painting_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/painting.rgba16.png.inc.c"
};
unsigned char GhostCastle_Pad68[] = FILEPAD;
unsigned char GhostCastle_green_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/green.rgba16.png.inc.c"
};

Gfx GhostCastle_model79_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model79/model79.gfx.inc.c"
};
Mtx GhostCastle_IMtx86 = IDENTITY;

Gfx GhostCastle_model80_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model80/model80.gfx.inc.c"
};

Vtx GhostCastle_model87_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model87/model87.vtx.inc.c"
};
Mtx GhostCastle_IMtx87 = IDENTITY;
unsigned char GhostCastle_Pad69[] = FILEPAD;
unsigned char GhostCastle_brown_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/brown.rgba16.png.inc.c"
};
unsigned char GhostCastle_Pad70[] = FILEPAD;
unsigned char GhostCastle_scroll2_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/scroll2.rgba16.png.inc.c"
};

Gfx GhostCastle_model87_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model87/model87.gfx.inc.c"
};
Mtx GhostCastle_IMtx88 = IDENTITY;

Gfx GhostCastle_model88_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model88/model88.gfx.inc.c"
};

Vtx GhostCastle_model81_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model81/model81.vtx.inc.c"
};
Mtx GhostCastle_IMtx89 = IDENTITY;
unsigned char GhostCastle_Pad71[] = FILEPAD;
unsigned char GhostCastle_sandal_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/sandal.rgba16.png.inc.c"
};
unsigned char GhostCastle_Pad72[] = FILEPAD;
unsigned char GhostCastle_creatureEye_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/creatureEye.rgba16.png.inc.c"
};
unsigned char GhostCastle_Pad73[] = FILEPAD;
unsigned char GhostCastle_creatureBody_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/creatureBody.rgba16.png.inc.c"
};

Gfx GhostCastle_model81_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model81/model81.gfx.inc.c"
};

Vtx GhostCastle_model82_Vtx[] = {
    #include "assets/levelGroup/GhostCastle/model82/model82.vtx.inc.c"
};
Mtx GhostCastle_IMtx90 = IDENTITY;
unsigned char GhostCastle_Pad74[] = FILEPAD;
unsigned char GhostCastle_hole_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/hole.rgba16.png.inc.c"
};

Gfx GhostCastle_model82_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model82/model82.gfx.inc.c"
};
Mtx GhostCastle_IMtx91 = IDENTITY;

Gfx GhostCastle_model83_Gfx[] = {
    #include "assets/levelGroup/GhostCastle/model83/model83.gfx.inc.c"
};

Anim GhostCastle_unk1Header_Animh = {
    #include "assets/levelGroup/GhostCastle/anim/unk1Header.animH.inc.c"
};

Mtx GhostCastle_unk1_Animarr[2][3] = {
    #include "assets/levelGroup/GhostCastle/anim/unk1.animArr.inc.c"
};

AnimPointer GhostCastle_unk1Pointer_Animp[1] = {
{&GhostCastle_unk1Header_Animh.frames, &GhostCastle_unk1Header_Animh.objects, GhostCastle_unk1_Animarr[0]}
};

Anim GhostCastle_unk2Header_Animh = {
    #include "assets/levelGroup/GhostCastle/anim/unk2Header.animH.inc.c"
};

Mtx GhostCastle_unk2_Animarr[2][1] = {
    #include "assets/levelGroup/GhostCastle/anim/unk2.animArr.inc.c"
};

AnimPointer GhostCastle_unk2Pointer_Animp[1] = {
{&GhostCastle_unk2Header_Animh.frames, &GhostCastle_unk2Header_Animh.objects, GhostCastle_unk2_Animarr[0]}
};

Anim GhostCastle_unk3Header_Animh = {
    #include "assets/levelGroup/GhostCastle/anim/unk3Header.animH.inc.c"
};

Mtx GhostCastle_unk3_Animarr[2][1] = {
    #include "assets/levelGroup/GhostCastle/anim/unk3.animArr.inc.c"
};

AnimPointer GhostCastle_unk3Pointer_Animp[1] = {
{&GhostCastle_unk3Header_Animh.frames, &GhostCastle_unk3Header_Animh.objects, GhostCastle_unk3_Animarr[0]}
};

Anim GhostCastle_unk4Header_Animh = {
    #include "assets/levelGroup/GhostCastle/anim/unk4Header.animH.inc.c"
};

Mtx GhostCastle_unk4_Animarr[10][2] = {
    #include "assets/levelGroup/GhostCastle/anim/unk4.animArr.inc.c"
};

AnimPointer GhostCastle_unk4Pointer_Animp[1] = {
{&GhostCastle_unk4Header_Animh.frames, &GhostCastle_unk4Header_Animh.objects, GhostCastle_unk4_Animarr[0]}
};
