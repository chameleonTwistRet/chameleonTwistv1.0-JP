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
extern Gfx GhostCastle_model1_Gfx[];
extern ModelCollision GhostCastle_unkCol1_ColH;
extern Gfx GhostCastle_model2_Gfx[];
extern ModelCollision GhostCastle_unkCol2_ColH;
extern Gfx GhostCastle_model3_Gfx[];
extern ModelCollision GhostCastle_unkCol3_ColH;
extern Gfx GhostCastle_model4_Gfx[];
extern ModelCollision GhostCastle_unkCol4_ColH;
extern Gfx GhostCastle_model5_Gfx[];
extern ModelCollision GhostCastle_unkCol5_ColH;
extern Gfx GhostCastle_model6_Gfx[];
extern ModelCollision GhostCastle_unkCol6_ColH;
extern Gfx GhostCastle_model7_Gfx[];
extern ModelCollision GhostCastle_unkCol7_ColH;
extern Gfx GhostCastle_model8_Gfx[];
extern ModelCollision GhostCastle_unkCol8_ColH;
extern Gfx GhostCastle_model9_Gfx[];
extern ModelCollision GhostCastle_unkCol9_ColH;
extern Gfx GhostCastle_model10_Gfx[];
extern ModelCollision GhostCastle_unkCol10_ColH;
extern Gfx GhostCastle_model11_Gfx[];
extern ModelCollision GhostCastle_unkCol11_ColH;
extern Gfx GhostCastle_model12_Gfx[];
extern ModelCollision GhostCastle_unkCol12_ColH;
extern Gfx GhostCastle_model13_Gfx[];
extern ModelCollision GhostCastle_unkCol13_ColH;
extern Gfx GhostCastle_model14_Gfx[];
extern ModelCollision GhostCastle_unkCol14_ColH;
extern Gfx GhostCastle_model15_Gfx[];
extern ModelCollision GhostCastle_unkCol15_ColH;
extern Gfx GhostCastle_model16_Gfx[];
extern ModelCollision GhostCastle_unkCol16_ColH;
extern Gfx GhostCastle_model17_Gfx[];
extern ModelCollision GhostCastle_unkCol17_ColH;
extern Gfx GhostCastle_model18_Gfx[];
extern ModelCollision GhostCastle_unkCol18_ColH;
extern Gfx GhostCastle_model19_Gfx[];
extern ModelCollision GhostCastle_unkCol19_ColH;
extern Gfx GhostCastle_model20_Gfx[];
extern ModelCollision GhostCastle_unkCol20_ColH;
extern Gfx GhostCastle_model21_Gfx[];
extern ModelCollision GhostCastle_unkCol21_ColH;
extern Gfx GhostCastle_model22_Gfx[];
extern ModelCollision GhostCastle_unkCol22_ColH;
extern Gfx GhostCastle_model23_Gfx[];
extern ModelCollision GhostCastle_unkCol23_ColH;
extern Gfx GhostCastle_model24_Gfx[];
extern ModelCollision GhostCastle_unkCol24_ColH;
extern Gfx GhostCastle_model25_Gfx[];
extern ModelCollision GhostCastle_unkCol25_ColH;
extern Gfx GhostCastle_model84_Gfx[];
extern ModelCollision GhostCastle_unkCol26_ColH;
extern Gfx GhostCastle_model26_Gfx[];
extern ModelCollision GhostCastle_unkCol27_ColH;
extern Gfx GhostCastle_model27_Gfx[];
extern ModelCollision GhostCastle_unkCol28_ColH;
extern Gfx GhostCastle_model28_Gfx[];
extern ModelCollision GhostCastle_unkCol29_ColH;
extern Gfx GhostCastle_model29_Gfx[];
extern ModelCollision GhostCastle_unkCol30_ColH;
extern Gfx GhostCastle_model85_Gfx[];
extern ModelCollision GhostCastle_unkCol31_ColH;
extern Gfx GhostCastle_model86_Gfx[];
extern ModelCollision GhostCastle_unkCol32_ColH;
extern Gfx GhostCastle_model30_Gfx[];
extern ModelCollision GhostCastle_unkCol33_ColH;
extern Gfx GhostCastle_model31_Gfx[];
extern ModelCollision GhostCastle_unkCol34_ColH;
extern Gfx GhostCastle_model32_Gfx[];
extern ModelCollision GhostCastle_unkCol35_ColH;
extern Gfx GhostCastle_model33_Gfx[];
extern ModelCollision GhostCastle_unkCol36_ColH;
extern Gfx GhostCastle_model34_Gfx[];
extern ModelCollision GhostCastle_unkCol37_ColH;
extern Gfx GhostCastle_model35_Gfx[];
extern ModelCollision GhostCastle_unkCol38_ColH;
extern Gfx GhostCastle_model36_Gfx[];
extern ModelCollision GhostCastle_unkCol39_ColH;
extern Gfx GhostCastle_model37_Gfx[];
extern ModelCollision GhostCastle_unkCol40_ColH;
extern Gfx GhostCastle_model38_Gfx[];
extern ModelCollision GhostCastle_unkCol41_ColH;
extern Gfx GhostCastle_model39_Gfx[];
extern ModelCollision GhostCastle_unkCol42_ColH;
extern Gfx GhostCastle_model40_Gfx[];
extern ModelCollision GhostCastle_unkCol43_ColH;
extern Gfx GhostCastle_model41_Gfx[];
extern ModelCollision GhostCastle_unkCol44_ColH;
extern Gfx GhostCastle_model42_Gfx[];
extern ModelCollision GhostCastle_unkCol45_ColH;
extern Gfx GhostCastle_model43_Gfx[];
extern ModelCollision GhostCastle_unkCol46_ColH;
extern Gfx GhostCastle_model44_Gfx[];
extern ModelCollision GhostCastle_unkCol47_ColH;
extern Gfx GhostCastle_model45_Gfx[];
extern ModelCollision GhostCastle_unkCol48_ColH;
extern Gfx GhostCastle_model46_Gfx[];
extern ModelCollision GhostCastle_unkCol49_ColH;
extern Gfx GhostCastle_model47_Gfx[];
extern ModelCollision GhostCastle_unkCol50_ColH;
extern Gfx GhostCastle_model48_Gfx[];
extern ModelCollision GhostCastle_unkCol51_ColH;
extern Gfx GhostCastle_model49_Gfx[];
extern ModelCollision GhostCastle_unkCol52_ColH;
extern Gfx GhostCastle_model50_Gfx[];
extern ModelCollision GhostCastle_unkCol53_ColH;
extern Gfx GhostCastle_model51_Gfx[];
extern ModelCollision GhostCastle_unkCol54_ColH;
extern Gfx GhostCastle_model52_Gfx[];
extern ModelCollision GhostCastle_unkCol55_ColH;
extern Gfx GhostCastle_model53_Gfx[];
extern ModelCollision GhostCastle_unkCol56_ColH;
extern Gfx GhostCastle_model54_Gfx[];
extern ModelCollision GhostCastle_unkCol57_ColH;
extern Gfx GhostCastle_model55_Gfx[];
extern ModelCollision GhostCastle_unkCol58_ColH;
extern Gfx GhostCastle_model56_Gfx[];
extern ModelCollision GhostCastle_unkCol59_ColH;
extern Gfx GhostCastle_model57_Gfx[];
extern ModelCollision GhostCastle_unkCol60_ColH;
extern Gfx GhostCastle_model58_Gfx[];
extern ModelCollision GhostCastle_unkCol61_ColH;
extern Gfx GhostCastle_model59_Gfx[];
extern ModelCollision GhostCastle_unkCol62_ColH;
extern Gfx GhostCastle_model60_Gfx[];
extern ModelCollision GhostCastle_unkCol63_ColH;
extern Gfx GhostCastle_model61_Gfx[];
extern ModelCollision GhostCastle_unkCol64_ColH;
extern Gfx GhostCastle_model62_Gfx[];
extern ModelCollision GhostCastle_unkCol65_ColH;
extern Gfx GhostCastle_model63_Gfx[];
extern ModelCollision GhostCastle_unkCol66_ColH;
extern Gfx GhostCastle_model64_Gfx[];
extern ModelCollision GhostCastle_unkCol67_ColH;
extern Gfx GhostCastle_model65_Gfx[];
extern ModelCollision GhostCastle_unkCol68_ColH;
extern Gfx GhostCastle_model66_Gfx[];
extern ModelCollision GhostCastle_unkCol69_ColH;
extern Gfx GhostCastle_model67_Gfx[];
extern ModelCollision GhostCastle_unkCol70_ColH;
extern Gfx GhostCastle_model68_Gfx[];
extern ModelCollision GhostCastle_unkCol71_ColH;
extern Gfx GhostCastle_model69_Gfx[];
extern ModelCollision GhostCastle_unkCol72_ColH;
extern Gfx GhostCastle_model70_Gfx[];
extern ModelCollision GhostCastle_unkCol73_ColH;
extern Gfx GhostCastle_model71_Gfx[];
extern ModelCollision GhostCastle_unkCol74_ColH;
extern Gfx GhostCastle_model72_Gfx[];
extern ModelCollision GhostCastle_unkCol75_ColH;
extern Gfx GhostCastle_model73_Gfx[];
extern ModelCollision GhostCastle_unkCol76_ColH;
extern Gfx GhostCastle_model74_Gfx[];
extern ModelCollision GhostCastle_unkCol77_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;



Mtx GhostCastle_IMtx1 = IDENTITY;

StageModel GhostCastle_stageModels[115] = {
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
{&GhostCastle_model1_Gfx[0], &GhostCastle_unkCol1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model2_Gfx[0], &GhostCastle_unkCol2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model3_Gfx[0], &GhostCastle_unkCol3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model4_Gfx[0], &GhostCastle_unkCol4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model5_Gfx[0], &GhostCastle_unkCol5_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model6_Gfx[0], &GhostCastle_unkCol6_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model7_Gfx[0], &GhostCastle_unkCol7_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model8_Gfx[0], &GhostCastle_unkCol8_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model9_Gfx[0], &GhostCastle_unkCol9_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model10_Gfx[0], &GhostCastle_unkCol10_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model11_Gfx[0], &GhostCastle_unkCol11_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model12_Gfx[0], &GhostCastle_unkCol12_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model13_Gfx[0], &GhostCastle_unkCol13_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model14_Gfx[0], &GhostCastle_unkCol14_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model15_Gfx[0], &GhostCastle_unkCol15_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model16_Gfx[0], &GhostCastle_unkCol16_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model17_Gfx[0], &GhostCastle_unkCol17_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model18_Gfx[0], &GhostCastle_unkCol18_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model19_Gfx[0], &GhostCastle_unkCol19_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model20_Gfx[0], &GhostCastle_unkCol20_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model21_Gfx[0], &GhostCastle_unkCol21_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model22_Gfx[0], &GhostCastle_unkCol22_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model23_Gfx[0], &GhostCastle_unkCol23_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model24_Gfx[0], &GhostCastle_unkCol24_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model25_Gfx[0], &GhostCastle_unkCol25_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model84_Gfx[0], &GhostCastle_unkCol26_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model26_Gfx[0], &GhostCastle_unkCol27_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model27_Gfx[0], &GhostCastle_unkCol28_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model28_Gfx[0], &GhostCastle_unkCol29_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model29_Gfx[0], &GhostCastle_unkCol30_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model85_Gfx[0], &GhostCastle_unkCol31_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model86_Gfx[0], &GhostCastle_unkCol32_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model30_Gfx[0], &GhostCastle_unkCol33_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model31_Gfx[0], &GhostCastle_unkCol34_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model32_Gfx[0], &GhostCastle_unkCol35_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model33_Gfx[0], &GhostCastle_unkCol36_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model34_Gfx[0], &GhostCastle_unkCol37_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model35_Gfx[0], &GhostCastle_unkCol38_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model36_Gfx[0], &GhostCastle_unkCol39_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model37_Gfx[0], &GhostCastle_unkCol40_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model38_Gfx[0], &GhostCastle_unkCol41_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model39_Gfx[0], &GhostCastle_unkCol42_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model40_Gfx[0], &GhostCastle_unkCol43_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model41_Gfx[0], &GhostCastle_unkCol44_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model42_Gfx[0], &GhostCastle_unkCol45_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model43_Gfx[0], &GhostCastle_unkCol46_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model44_Gfx[0], &GhostCastle_unkCol47_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model45_Gfx[0], &GhostCastle_unkCol48_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model46_Gfx[0], &GhostCastle_unkCol49_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model47_Gfx[0], &GhostCastle_unkCol50_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model48_Gfx[0], &GhostCastle_unkCol51_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model49_Gfx[0], &GhostCastle_unkCol52_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model50_Gfx[0], &GhostCastle_unkCol53_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model51_Gfx[0], &GhostCastle_unkCol54_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model52_Gfx[0], &GhostCastle_unkCol55_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model53_Gfx[0], &GhostCastle_unkCol56_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model54_Gfx[0], &GhostCastle_unkCol57_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model55_Gfx[0], &GhostCastle_unkCol58_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model56_Gfx[0], &GhostCastle_unkCol59_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model57_Gfx[0], &GhostCastle_unkCol60_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model58_Gfx[0], &GhostCastle_unkCol61_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model59_Gfx[0], &GhostCastle_unkCol62_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model60_Gfx[0], &GhostCastle_unkCol63_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model61_Gfx[0], &GhostCastle_unkCol64_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model62_Gfx[0], &GhostCastle_unkCol65_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model63_Gfx[0], &GhostCastle_unkCol66_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model64_Gfx[0], &GhostCastle_unkCol67_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model65_Gfx[0], &GhostCastle_unkCol68_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model66_Gfx[0], &GhostCastle_unkCol69_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model67_Gfx[0], &GhostCastle_unkCol70_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model68_Gfx[0], &GhostCastle_unkCol71_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model69_Gfx[0], &GhostCastle_unkCol72_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model70_Gfx[0], &GhostCastle_unkCol73_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model71_Gfx[0], &GhostCastle_unkCol74_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model72_Gfx[0], &GhostCastle_unkCol75_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model73_Gfx[0], &GhostCastle_unkCol76_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&GhostCastle_model74_Gfx[0], &GhostCastle_unkCol77_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char GhostCastle_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

SpriteActor GhostCastle_room0_sprites[5] = {
{18, 0, {1830.0,0.0,-830.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0, 17, 5, 0, 0},
{20, 0, {0.0,10.0,500.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, -1.0f, 1000.0f, 0, 0, 255, 255, 10, 255},
{20, 0, {200.0,800.0,-1990.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, 0, 100.0f, 0, 0, 255, 255, 100, 255},
{20, 0, {-200.0,800.0,-1990.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, 0, 0, 100.0f, 0, 255, 255, 100, 255},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

SpriteActor GhostCastle_room18_sprites[2] = {
{18, 0, {-350.0,1000.0,-1400.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0, 18, 17, 0, 0},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

SpriteActor GhostCastle_room7_sprites[2] = {
{19, 0, {2000.0,0.0,1500.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0, 1, 3, 4, 0},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomObject GhostCastle_room0_objects[23] = {
{{-1600.0,0.0,1800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 99, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{-3200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-3200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-3200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-3200.0,1200.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{3200.0,1200.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{3200.0,1200.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{3200.0,1200.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{3200.0,1200.0,-500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 40, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 41, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 42, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 43, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 44, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 45, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 46, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 47, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 48, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 49, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 50, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 51, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,-15.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 80, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_roomMulti_objects[2] = {
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

unsigned char GhostCastle_unusedGarbage_Bin[] = {
0x00, 0x00, 0x00, 0x67, 0x03, 0x00, 0x26, 0x74, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01
};

RoomObject GhostCastle_room2_objects[16] = {
{{-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{100.0,120.0,1000.0}, {1.5,1.5,1.100000023841858}, 3, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 390, 0, 0, 0, 0, 0, 107, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{100.0,50.0,450.0}, {0.4000000059604645,5.5,0.20000000298023224}, 3, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 59, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{100.0,50.0,1650.0}, {0.4000000059604645,5.5,0.20000000298023224}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 59, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,-150.0,0.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 780, 0, 0, 0, 0, 0, 37, -1, -1, -1, NULL, &func_800D9128, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1750.0,0.0,0.0}, {1.0,1.2000000476837158,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 38, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-1750.0,0.0,0.0}, {1.0,1.2000000476837158,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 38, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 81, -1, -1, -1, NULL, &func_800B2070, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{2200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room2_actors[32] = {
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 0, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 20.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 40.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 60.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {50.0,-150.0,900.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 900.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 160.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1100.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1100.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 140.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1300.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1300.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 120.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {50.0,-150.0,1500.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1500.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 100.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {50.0,-150.0,550.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 550.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 180.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {25.0,-150.0,700.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 700.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 200.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,950.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 950.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 180.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {-25.0,-150.0,1150.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1150.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 160.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {-50.0,-150.0,700.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 700.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 200.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {50.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 220.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {-50.0,-150.0,1300.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1300.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 240.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {-50.0,-150.0,550.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 550.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 320.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {-25.0,-150.0,700.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 700.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 340.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,950.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 950.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 360.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {25.0,-150.0,1100.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1100.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 340.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 440.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 540.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 560.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 580.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 600.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,800.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 800.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 720.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1000.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 700.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1200.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 680.0f, 0, 0},
{BARREL_JUMP_FIRE_SPAWNER, {0.0,-150.0,1400.0}, 0.0, -10000.0, 10000.0, 0, 10000.0, -10000.0, 10000.0, 1, 0.0, 0.0, 1400.0, 0.4615384638309479, 0, 0, 0, 0, 780.0f, 660.0f, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room4_objects[2] = {
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room5_objects[14] = {
{{1700.0,0.0,900.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1700.0,0.0,900.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1700.0,0.0,900.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{1700.0,0.0,900.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 105, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 82, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1000.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 52, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1260.0,350.0,-1400.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-45.00000125223908), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 70, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1400.0,350.0,-1260.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(-45.00000125223908), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 71, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-900.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-900.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-900.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-900.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room5_actors[5] = {
{FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 14.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0, 30.0f, 60.0f, 4.0f, 24.0f},
{FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 18.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0, 45.0f, 60.0f, 4.0f, 24.0f},
{FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 10.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0, 20.0f, 60.0f, 4.0f, 24.0f},
{FIRE_SPAWNER, {1260.0,0.0,-1260.0}, 0.0, -1500.0, 1500.0, 0, 1000.0, -1500.0, 1500.0, 0, 20.0, 2.0, 8.0, 10.0, 6250000.0f, 1000000.0f, 0, 0, 120.0f, 60.0f, 4.0f, 24.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

SpriteActor GhostCastle_room5_sprites[4] = {
{3, 0, {1074.0,0.0,-1225.0}, {100.0,200.0,250.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, 255, 255, 255, 255},
{3, 0, {1152.0,0.0,-1147.0}, {100.0,200.0,250.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, 255, 255, 255, 255},
{3, 0, {1230.0,0.0,-1069.0}, {100.0,200.0,250.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, 255, 255, 255, 255},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomObject GhostCastle_room6_objects[21] = {
{{-1300.0,200.0,0.0}, {0.800000011920929,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 240, 0, 0, 0, 0, 0, 68, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{400.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, 0, 0, 0},
{{-400.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, 0, 0, 0},
{{1900.0,-100.0,0.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 600, 0, 0, 0, 0, 0, 66, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2200.0,200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-400.0,-200.0,0.0}, {0.8500000238418579,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 600, 0, 0, 0, 0, 0, 67, -1, -1, -1, NULL, &func_800D9104, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{300.0,-200.0,0.0}, {0.8500000238418579,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, -360, 0, 0, 0, 0, 0, 67, -1, -1, -1, NULL, &func_800D9104, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1000.0,-200.0,0.0}, {0.8500000238418579,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 600, 0, 0, 0, 0, 0, 67, -1, -1, -1, NULL, &func_800D9104, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 83, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 54, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 55, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2500.0,200.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2500.0,200.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2500.0,200.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2500.0,200.0,1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{3200.0,200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{3200.0,200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{3200.0,200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{3200.0,200.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{-3300.0,200.0,1400.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room7_objects[19] = {
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 84, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 75, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{100.0,0.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1700.0,0.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{2525.0,0.0,1700.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 34, 10.0, 0.0, 0.0, -90.0, 3, 20, 777, 40, 0, 0, 109, -1, -1, 1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2525.0,0.0,1300.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 34, 10.0, 0.0, 0.0, 90.0, 3, 20, 777, 40, 0, 0, 110, -1, -1, 1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,2000.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2700.0,0.0,2000.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{800.0,0.0,-2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{800.0,0.0,-2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{800.0,0.0,-2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{800.0,0.0,-2500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room7_actors[4] = {
{FIRE_SPAWNER, {1000.0,1500.0,-300.0}, 0.0, -1100.0, 1500.0, 0, 1000.0, -1000.0, 3000.0, 0, 10.0, 3.0, 8.0, 10.0, 6250000.0f, 0, 0, 0, 750.0f, 60.0f, 30.0f, 16.0f},
{FIRE_SPAWNER, {0.0,1500.0,500.0}, 0.0, -1100.0, 1500.0, 0, 1000.0, -1000.0, 3000.0, 0, 10.0, 3.0, 8.0, 10.0, 6250000.0f, 0, 0, 0, 1050.0f, 60.0f, 30.0f, 16.0f},
{FIRE_SPAWNER, {-500.0,1500.0,2400.0}, 0.0, -1100.0, 1500.0, 0, 1000.0, -1000.0, 3000.0, 0, 10.0, 3.0, 8.0, 10.0, 6250000.0f, 0, 0, 0, 750.0f, 60.0f, 30.0f, 16.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room8_objects[27] = {
{{0.0,200.0,0.0}, {0.8333333134651184,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 25, 90.0, 0.0, 0.0, 0.0, 5, 300, 9, 0, 0, 0, 85, -1, -1, -1, NULL, &func_800D9190, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{2700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{2200.0,-200.0,-1000.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{2200.0,-200.0,1400.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 58, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{1700.0,-200.0,700.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{1100.0,-200.0,-900.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{1000.0,-200.0,200.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{0.0,-200.0,1000.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 57, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-200.0,-200.0,300.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 108, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-600.0,-200.0,700.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{100.0,-200.0,-800.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-800.0,-200.0,-900.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 58, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-1450.0,-200.0,-800.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-1550.0,-200.0,500.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-2200.0,-200.0,1400.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 58, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-2300.0,-200.0,-900.0}, {0.800000011920929,0.6000000238418579,0.800000011920929}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 53, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-2350.0,-200.0,250.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 56, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-2350.0,-200.0,-200.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 56, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{2350.0,-200.0,250.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 35, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 56, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, 0, 0, 0},
{{-2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room9_objects[16] = {
{{0.0,0.0,0.0}, {0.5,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 86, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.5,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 39, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{700.0,0.0,2500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{-700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-700.0,0.0,2500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-700.0,0.0,2500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{-700.0,1400.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-700.0,1400.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-700.0,1400.0,-2600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-700.0,1400.0,-2600.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{400.0,0.0,2900.0}, {0.5,0.5,0.5}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 99, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

SpriteActor GhostCastle_room9_sprites[2] = {
{20, 0, {0.0,10.0,2500.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, -1.0f, 1000.0f, 0, 0, 255, 255, 100, 255},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomActor GhostCastle_room9_actors[9] = {
{SANDAL, {375.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
{SANDAL, {125.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 0},
{SANDAL, {-125.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
{SANDAL, {-375.0,0.0,2265.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 120.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 0},
{SANDAL, {375.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
{SANDAL, {125.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 0},
{SANDAL, {-125.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 30.0f},
{SANDAL, {-375.0,700.0,-245.0}, 90.0, -1000.0, 1000.0, 0, 2000.0, -3000.0, 3000.0, 0, 250.0, 100.0, 150.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 6.0f, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room10_objects[12] = {
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 300, 0, 0, 0, 0, 0, 87, -1, -1, -1, NULL, &func_800D914C, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0499999523162842,1.0499999523162842,1.0499999523162842}, 1, DEGREES_TO_RADIANS_2PI(0.0), 7, 8, 0.0, 0.0, 0.0, 0.0, 300, 0, 0, 0, 0, 0, 87, -1, -1, -1, NULL, NULL, 0, 0, 2, 0, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 88, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{2500.0,-200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2500.0,-200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2500.0,-200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{2500.0,-200.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{-2500.0,-200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2500.0,-200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2500.0,-200.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2500.0,-200.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room11_objects[21] = {
{{-350.0,0.0,2400.0}, {2.0,1.0,2.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{2700.0,0.0,1500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 89, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-1500.0,0.0,-2700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{-700.0,-20.0,-1300.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-700.0,-20.0,-500.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-1000.0,-20.0,1100.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{100.0,-20.0,500.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-1150.0,-20.0,350.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-600.0,-20.0,600.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2100.0,-20.0,600.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2300.0,-20.0,-100.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2300.0,-20.0,-900.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2300.0,-20.0,-1700.0}, {1.0,1.0,1.0}, 3, DEGREES_TO_RADIANS_2PI(-74.99999867197056), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 62, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room11_actors[11] = {
{CANDLES, {-1000.0,200.0,1100.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 2250000.0f, 0, 0, 0, 30.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-600.0,200.0,600.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 2250000.0f, 0, 0, 0, 30.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-700.0,200.0,-1300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-700.0,200.0,-500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {100.0,200.0,500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-1150.0,200.0,350.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-2100.0,200.0,600.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-2300.0,200.0,-100.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-2300.0,200.0,-900.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{CANDLES, {-2300.0,200.0,-1700.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 10.0, 5.0, 5.0, 30.0, 640000.0f, 0, 0, 0, 60.0f, 60.0f, 30.0f, 32.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room12_objects[23] = {
{{-1400.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{200.0,0.0,1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 34, -15.0, 0.0, 0.0, 90.0, 3, 30, 0, 40, 0, 0, 110, -1, -1, 25, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{600.0,0.0,1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 34, 15.0, 0.0, 0.0, -90.0, 3, 30, 0, 40, 0, 0, 110, -1, -1, 25, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{100.0,0.0,-1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 34, -15.0, 0.0, 0.0, -90.0, 3, 30, 0, 40, 0, 0, 109, -1, -1, 25, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{500.0,0.0,-1530.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 34, 15.0, 0.0, 0.0, 90.0, 3, 30, 0, 40, 0, 0, 109, -1, -1, 25, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 90, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1610.0,600.0,-800.0}, {1.5,1.5,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 74, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1610.0,600.0,700.0}, {1.5,1.5,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 74, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1600.0,600.0,-800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 63, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1600.0,600.0,700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 63, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1500.0,400.0,-800.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 29, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1500.0,400.0,700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 29, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{400.0,0.0,1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{300.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{300.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{300.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{300.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512, 0, 5000.0, 2000.0, 2000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 25, 517, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512, 0, 10000.0, 10000.0, 10000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 537, 5, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room12_actors[10] = {
{RNG_ROOM_SPAWNER, {0.0,-50.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 1, 10.0, 10.0, 8.0, 10.0, 900.0f, 0, 0, 0, 11.0f, 30.0f, 60.0f, 20.0f},
{MIRROR, {1100.0,2400.0,1200.0}, 225.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 1000000.0, 50.0, 0, 0, 0, 0, 0, 2.0f, 0, 20.0f},
{MIRROR, {1100.0,2400.0,-1200.0}, 225.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 1000000.0, 50.0, 0, 0, 0, 0, 1.0f, 2.0f, 0, 20.0f},
{SAUCER, {-900.0,0.0,-400.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 700.0, 80.0f, 0, 0, 0, 1.0f, 7.0f, 100.0f, 20.0f},
{CUP, {-600.0,0.0,-400.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 800.0, 60.0f, 0, 0, 0, 2.0f, 7.0f, 90.0f, 20.0f},
{SAUCER, {-300.0,0.0,-400.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 800.0, 60.0f, 0, 0, 0, 3.0f, 7.0f, 90.0f, 20.0f},
{CUP, {300.0,0.0,-400.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 900.0, 60.0f, 0, 0, 0, 4.0f, 7.0f, 80.0f, 20.0f},
{SAUCER, {600.0,0.0,-400.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 900.0, 60.0f, 0, 0, 0, 5.0f, 7.0f, 80.0f, 20.0f},
{CUP, {900.0,0.0,-400.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 1000.0, 60.0f, 0, 0, 0, 6.0f, 7.0f, 70.0f, 20.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
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

RoomObject GhostCastle_room13_objects[21] = {
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 91, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2500.0,0.0,1450.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632), 7, 26, -1800.0, -1200.0, 1300.0, 1300.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2500.0,0.0,900.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632), 7, 26, -1800.0, -1200.0, 800.0, 800.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2500.0,0.0,350.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632), 7, 26, -1800.0, -1200.0, 300.0, 300.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2500.0,0.0,-200.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632), 7, 26, -1800.0, -1200.0, -200.0, -200.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2100.0,0.0,-900.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(135.00000034162267), 7, 26, -1650.0, -1100.0, -700.0, -700.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-1500.0,0.0,-1500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(135.00000034162267), 7, 26, -1150.0, -1100.0, -1150.0, -1100.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-900.0,0.0,-2100.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(135.00000034162267), 7, 26, -700.0, -700.0, -1700.0, -1100.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-200.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 26, -200.0, -200.0, -1800.0, -1200.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{350.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 26, 300.0, 300.0, -1800.0, -1200.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{900.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 26, 800.0, 800.0, -1800.0, -1200.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{1450.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 26, 1300.0, 1300.0, -1800.0, -1200.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-1500.0,0.0,2700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{2700.0,0.0,-1500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room13_actors[4] = {
{FIRE_SPAWNER, {1000.0,0.0,-1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 15.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0, 60.0f, 30.0f, 20.0f, 5.0f},
{FIRE_SPAWNER, {0.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 16.0, 5.0, 8.0, 5.0, 9000000.0f, 1000000.0f, 0, 0, 30.0f, 30.0f, 20.0f, 5.0f},
{FIRE_SPAWNER, {-1000.0,0.0,1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0, 30.0f, 30.0f, 20.0f, 5.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

SpriteActor GhostCastle_room13_sprites[2] = {
{20, 0, {-2480.0,200.0,1800.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, -100.0f, 0, 0, 0, 255, 255, 55, 255},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomObject GhostCastle_room14_objects[40] = {
{{0.0,1000.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 11, 0.0, 325.0, 0.0, 0.0, 1, 20, 0, 20, 0, 0, 72, -1, -1, 26, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
{{0.0,2000.0,0.0}, {25.0,10.0,25.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 64, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
{{0.0,-125.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 11, 0.0, 325.0, 0.0, 0.0, 1, 20, 777, 20, 0, 0, 72, -1, -1, 26, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2100.0,-350.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512, 0, 360.0, 100.0, 400.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 26, 514, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{0.0,-2000.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512, 0, 10000.0, 1500.0, 10000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 538, 514, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{0.0,-5000.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512, 0, 10000.0, 10000.0, 10000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 538, 2, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2600.0,-325.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2600.0,-325.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2600.0,-325.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2600.0,-325.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{-1000.0,5.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 60, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{0.0,5.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 60, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1000.0,5.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 60, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{2500.0,128.0,700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{2500.0,128.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{2500.0,128.0,-700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-2500.0,128.0,700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-2500.0,128.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-2500.0,128.0,-700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-1500.0,128.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-1000.0,128.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-500.0,128.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{500.0,128.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1000.0,128.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1500.0,128.0,1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-1500.0,128.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-1000.0,128.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-500.0,128.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{500.0,128.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1000.0,128.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1500.0,128.0,-1600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 61, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,0.5,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 2, 0, 0, 0, 0, 0, 92, -1, -1, -1, &func_800B2144, &func_800B216C, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-2000.0,0.0,0.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 101, -1, -1, -1, NULL, NULL, 0, 0, 4, 0, 4, 0, -1, 0, 0},
{{2000.0,0.0,0.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 101, -1, -1, -1, NULL, NULL, 0, 0, 4, 0, 4, 0, -1, 0, 0},
{{-950.0,0.0,1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 102, -1, -1, -1, NULL, NULL, 0, 0, 4, 0, 4, 0, -1, 0, 0},
{{950.0,0.0,1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 102, -1, -1, -1, NULL, NULL, 0, 0, 4, 0, 4, 0, -1, 0, 0},
{{-950.0,0.0,-1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 102, -1, -1, -1, NULL, NULL, 0, 0, 4, 0, 4, 0, -1, 0, 0},
{{950.0,0.0,-1200.0}, {1.2000000476837158,1.0,1.2000000476837158}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 102, -1, -1, -1, NULL, NULL, 0, 0, 4, 0, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 100, -1, -1, -1, NULL, NULL, 0, 0, 4, 0, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room14_actors[8] = {
{CUE_BALL, {-1000.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 100.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0},
{BILLIARDS_BALL, {1000.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0},
{BILLIARDS_BALL, {1500.0,0.0,300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 1.0f, 0, 0, 0},
{BILLIARDS_BALL, {1500.0,0.0,-300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 2.0f, 0, 0, 0},
{BILLIARDS_BALL, {1250.0,0.0,-150.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 3.0f, 0, 0, 0},
{BILLIARDS_BALL, {1250.0,0.0,150.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 4.0f, 0, 0, 0},
{BILLIARDS_BALL, {1500.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.009999999776482582, 0.0, 0.0, 0, 0, 0, 0, 5.0f, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room15_objects[20] = {
{{-2450.0,0.0,-800.0}, {1.0,3.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2700.0,0.0,-1500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 93, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1500.0,0.0,2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{1500.0,0.0,2700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{-1250.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 26, -1300.0, -1300.0, -2050.0, -1200.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{-650.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 26, -650.0, -650.0, -2050.0, -1250.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{50.0,0.0,-2500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816), 7, 26, -50.0, -50.0, -2050.0, -1350.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{900.0,0.0,-2100.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(45.00000125223908), 7, 26, 600.0, 500.0, -1800.0, -1200.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{1500.0,0.0,-1500.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(45.00000125223908), 7, 26, 1150.0, 1050.0, -1150.0, -1050.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{2100.0,0.0,-900.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(45.00000125223908), 7, 26, 1800.0, 1200.0, -550.0, -450.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{2500.0,0.0,-50.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 26, 2050.0, 1350.0, -50.0, -50.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{2500.0,0.0,650.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 26, 2050.0, 1300.0, 650.0, 650.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{2500.0,0.0,1250.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 26, 2050.0, 1200.0, 1300.0, 1300.0, 0, 180, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

SpriteActor GhostCastle_room15_sprites[2] = {
{20, 0, {-2000.0,10.0,-1500.0}, {100.0,300.0,300.0}, 1, 0, 30.0, 0, 0, 1000.0f, -1.0f, 0, 255, 255, 55, 255},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

SpriteActor GhostCastle_room16_sprites[2] = {
{22, 0, {0.0,0.0,0.0}, {100.0,1.0,1.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

SpriteActor GhostCastle_room12_sprites[2] = {
{22, 0, {0.0,0.0,0.0}, {100.0,1.0,1.0}, 1, 0, 1.0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomActor GhostCastle_room15_actors[4] = {
{FIRE_SPAWNER, {-1000.0,0.0,-1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 15.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0, 15.0f, 30.0f, 20.0f, 5.0f},
{FIRE_SPAWNER, {0.0,0.0,0.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 13.0, 5.0, 8.0, 5.0, 9000000.0f, 1000000.0f, 0, 0, 10.0f, 30.0f, 20.0f, 5.0f},
{FIRE_SPAWNER, {1000.0,0.0,1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 18.0, 5.0, 8.0, 5.0, 2250000.0f, 1000000.0f, 0, 0, 5.0f, 30.0f, 20.0f, 5.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room16_objects[20] = {
{{-1400.0,0.0,0.0}, {1.0,2.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 94, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-810.0,0.0,-1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 11, -600.0, 0.0, -1530.0, 0.0, 4, 20, 0, 40, 0, 0, 111, -1, -1, 24, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{10.0,0.0,-1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 11, -200.0, 0.0, -1530.0, 0.0, 4, 20, 0, 40, 0, 0, 112, -1, -1, 24, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-810.0,0.0,1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 11, -600.0, 0.0, 1530.0, 0.0, 4, 20, 0, 40, 0, 0, 111, -1, -1, 24, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{10.0,0.0,1530.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 11, -200.0, 0.0, 1530.0, 0.0, 4, 20, 0, 40, 0, 0, 112, -1, -1, 24, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-400.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-400.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-400.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-400.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{1610.0,500.0,0.0}, {1.5,1.5,1.5}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 74, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{1600.0,500.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 63, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1500.0,300.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 29, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
{{-400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 27, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 26, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-400.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-400.0,0.0,1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,-500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512, 0, 10000.0, 2000.0, 2000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 518, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 512, 0, 10000.0, 10000.0, 10000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 536, 6, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room16_actors[14] = {
{RNG_ROOM_SPAWNER, {0.0,-50.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 1, 10.0, 10.0, 8.0, 10.0, 900.0f, 0, 0, 0, 15.0f, 30.0f, 60.0f, 21.0f},
{MIRROR, {1300.0,2400.0,700.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 1000000.0, 50.0, 0, 0, 0, 0, 0, 4.0f, 0, 21.0f},
{MIRROR, {800.0,2400.0,1300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 1000000.0, 50.0, 0, 0, 0, 0, 1.0f, 4.0f, 0, 21.0f},
{MIRROR, {800.0,2400.0,-1300.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 1000000.0, 50.0, 0, 0, 0, 0, 2.0f, 4.0f, 0, 21.0f},
{MIRROR, {1300.0,2400.0,-700.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 1000000.0, 50.0, 0, 0, 0, 0, 3.0f, 4.0f, 0, 21.0f},
{SCROLL, {1450.0,0.0,-500.0}, 180.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 700.0, 80.0f, 0, 0, 0, 0, 7.0f, 100.0f, 21.0f},
{SCROLL, {1450.0,0.0,500.0}, 180.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 700.0, 80.0f, 0, 0, 0, 1.0f, 7.0f, 100.0f, 21.0f},
{METAL_SHEET, {1200.0,0.0,-1200.0}, 225.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 800.0, 80.0f, 0, 0, 0, 2.0f, 7.0f, 90.0f, 21.0f},
{METAL_SHEET, {1200.0,0.0,1200.0}, 135.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 800.0, 60.0f, 0, 0, 0, 3.0f, 7.0f, 90.0f, 21.0f},
{SCROLL, {-1450.0,0.0,-500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 900.0, 80.0f, 0, 0, 0, 4.0f, 7.0f, 80.0f, 21.0f},
{SCROLL, {-1450.0,0.0,500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 900.0, 80.0f, 0, 0, 0, 5.0f, 7.0f, 80.0f, 21.0f},
{METAL_SHEET, {500.0,0.0,-1400.0}, -90.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 1000.0, 80.0f, 0, 0, 0, 6.0f, 7.0f, 70.0f, 21.0f},
{METAL_SHEET, {500.0,0.0,1400.0}, 90.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 0.0, 0.0, 0.0, 1000.0, 80.0f, 0, 0, 0, 7.0f, 7.0f, 70.0f, 21.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

SpriteActor GhostCastle_roomUnk_sprites[16] = {
{2, 53, {2300.0,0.0,-1300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {2300.0,0.0,-500.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {2300.0,0.0,300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {1800.0,0.0,900.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {1200.0,0.0,1500.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {600.0,0.0,2100.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {-100.0,0.0,2300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {-900.0,0.0,2300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {-1700.0,0.0,2300.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {-1300.0,0.0,700.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {-500.0,0.0,700.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {100.0,0.0,400.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {500.0,0.0,-100.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {700.0,0.0,-900.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{2, 53, {700.0,0.0,-1700.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, 255, 255, 255, 255},
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomObject GhostCastle_room17_objects[11] = {
{{2400.0,0.0,600.0}, {2.0,1.0,2.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 98, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
{{1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1500.0,0.0,-2700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{1500.0,0.0,-2700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 95, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 76, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 78, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{-2700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{-2700.0,0.0,1500.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room17_actors[6] = {
{FIRE_SPITTER, {500.0,230.0,500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 640000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
{FIRE_SPITTER, {1000.0,230.0,1000.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
{FIRE_SPITTER, {-500.0,230.0,900.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
{FIRE_SPITTER, {-500.0,230.0,1500.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
{FIRE_SPITTER, {-500.0,230.0,2100.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0, 20.0, 8.0, 5.0, 5.0, 810000.0f, 0, 0, 0, 20.0f, 20.0f, 40.0f, 40.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room18_objects[29] = {
{{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 77, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 79, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 96, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-200.0,-5.0,-1300.0}, {1.7000000476837158,0.25,0.800000011920929}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-595.0,-5.0,600.0}, {1.7000000476837158,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{800.0,-5.0,-100.0}, {0.800000011920929,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 68, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{500.0,-8.0,1150.0}, {0.5,0.11999999731779099,8.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-600.0,-8.0,-450.0}, {0.5,0.11999999731779099,7.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{840.0,995.0,-200.0}, {1.2000000476837158,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 68, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,995.0,700.0}, {2.5,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-550.0,995.0,-1300.0}, {1.0,0.25,0.699999988079071}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 69, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{200.0,992.0,700.0}, {0.5,0.11999999731779099,6.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-1000.0,992.0,-450.0}, {0.5,0.11999999731779099,7.5}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 65, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1450.0,992.0,-900.0}, {0.6000000238418579,0.11999999731779099,2.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 64, -1, -1, -1, NULL, &func_800D91B4, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{-550.0,0.0,1350.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 64, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{850.0,0.0,-1350.0}, {1.5,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 64, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
{{1050.0,450.0,-1350.0}, {1.0,1.2000000476837158,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 64, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1350.0,1000.0,-1350.0}, {1.2000000476837158,1.2000000476837158,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 64, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1300.0,0.0,0.0}, {1.3333333730697632,0.5,1.3333333730697632}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, -400.0, 0.0, 1550.0, 0.0, 0, 20, 0, 40, 0, 0, 64, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-200.0,1000.0,-1300.0}, {2.6666667461395264,0.5,1.3333333730697632}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, -400.0, 0.0, 1550.0, 0.0, 0, 20, 0, 40, 0, 0, 64, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1350.0,1000.0,-400.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{-300.0,0.0,600.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 114, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{0.0,1000.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 28, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{0.0,1000.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 25, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
{{0.0,1000.0,-1700.0}, {1.0,1.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
{{0.0,1000.0,-1700.0}, {4.0,4.0,4.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room18_actors[2] = {
{FIRE_SPITTER, {-1000.0,1010.0,-500.0}, 0.0, -1500.0, 1500.0, -1000.0f, 1000.0, -1000.0, 1000.0, 0, 6.0, 3.0, 6.0, 3.0, 6250000.0f, 0, 0, 0, 300.0f, 20.0f, 20.0f, 5.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject GhostCastle_room19_objects[4] = {
{{0.0,0.0,0.0}, {1.0,5.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 38, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1250.0,250.0,0.0}, {1.0,10.0,1.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 38, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
{{1000.0,0.0,-100.0}, {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(0.0), 7, 26, 600.0, 600.0, 0.0, 0.0, 0, 660, 59, 300, 400, 59, 62, -1, -1, -1, NULL, NULL, -2146716084, 0, 2, 4, 4, 0, -1, 0, 0},
{{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, DEGREES_TO_RADIANS_2PI(0.0), 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor GhostCastle_room19_actors[2] = {
{FIRE, {500.0,50.0,0.0}, 0.0, -1500.0, 1500.0, -1000.0f, 1000.0, -1500.0, 1500.0, 0, 6.0, 3.0, 6.0, 3.0, 6250000.0f, 0, 0, 0, 300.0f, 20.0f, 20.0f, 5.0f},
{ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

Collectable GhostCastle_roomUnk_collectables[13] = {
{R_HEART, {-1500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {-1000.0,258.0,1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {-500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {1000.0,258.0,1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {1500.0,258.0,1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {-1500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {-1000.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {-500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {1000.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
{R_HEART, {1500.0,258.0,-1600.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room0_collectables[5] = {
{R_HEART, {-2800.0,1200.0,-1400.0}, 4294967295, 0, 0, 0},
{R_HEART, {2800.0,1200.0,-1400.0}, 4294967295, 0, 0, 0},
{CROWN, {-2830.0,5.0,1830.0}, 4294967295, 0, 0, 0},
{CROWN, {2830.0,5.0,1830.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room2_collectables[3] = {
{CROWN, {-334.0,-150.0,616.0}, 4294967295, 0, 0, 0},
{Y_HEART, {-434.0,-150.0,1116.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room5_collectables[2] = {
{CROWN, {1250.0,0.0,-1250.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room6_collectables[7] = {
{R_HEART, {2750.0,200.0,-900.0}, 4294967295, 0, 0, 0},
{R_HEART, {2750.0,200.0,900.0}, 4294967295, 0, 0, 0},
{R_HEART, {-3220.0,200.0,-873.0}, 4294967295, 0, 0, 0},
{R_HEART, {-2799.0,200.0,-1066.0}, 4294967295, 0, 0, 0},
{O_HEART, {-1307.0,200.0,-3.0}, 4294967295, 0, 0, 0},
{CROWN, {0.0,400.0,0.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room7_collectables[5] = {
{CROWN, {800.0,-90.0,1950.0}, 4294967295, 0, 0, 0},
{CROWN, {-1000.0,0.0,-800.0}, 4294967295, 0, 0, 0},
{R_HEART, {2000.0,0.0,-2800.0}, 4294967295, 0, 0, 0},
{R_HEART, {2300.0,0.0,-2800.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room8_collectables[5] = {
{CROWN, {2200.0,1300.0,0.0}, 4294967295, 0, 0, 0},
{Y_HEART, {2000.0,1300.0,0.0}, 4294967295, 0, 0, 0},
{CROWN, {0.0,1200.0,0.0}, 4294967295, 0, 0, 0},
{R_HEART, {-2300.0,-1100.0,0.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room9_collectables[4] = {
{TIME_STOP_POWER_UP, {-300.0,0.0,2800.0}, 4294967295, 0, -1, 450},
{CROWN, {400.0,700.0,150.0}, 4294967295, 0, 0, 0},
{CROWN, {-400.0,700.0,150.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room10_collectables[3] = {
{R_HEART, {-2100.0,-200.0,-250.0}, 4294967295, 0, 0, 0},
{R_HEART, {-2100.0,-200.0,250.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room11_collectables[4] = {
{CROWN, {-1500.0,0.0,-900.0}, 15, 0, 0, 0},
{R_HEART, {-780.0,0.0,-2300.0}, 4294967295, 0, 0, 0},
{R_HEART, {-2020.0,0.0,-2300.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room12_collectables[4] = {
{CROWN, {0.0,0.0,0.0}, 4294967295, 0, 0, 0},
{O_HEART, {-700.0,0.0,-1300.0}, 4294967295, 0, 0, 0},
{R_HEART, {-700.0,0.0,1300.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room13_collectables[2] = {
{CROWN, {2300.0,0.0,-700.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room14_collectables[2] = {
{CROWN, {-1800.0,300.0,0.0}, 29, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room15_collectables[2] = {
{CROWN, {660.0,0.0,1700.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room16_collectables[4] = {
{CROWN, {0.0,0.0,0.0}, 4294967295, 0, 0, 0},
{CROWN, {1530.0,300.0,0.0}, 4294967295, 0, 0, 0},
{O_HEART, {-1350.0,0.0,-300.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room17_collectables[9] = {
{CROWN, {-1500.0,0.0,900.0}, 16, 0, 0, 0},
{CROWN, {-2186.0,0.0,1943.0}, 4294967295, 0, 0, 0},
{CROWN, {-2186.0,0.0,1043.0}, 4294967295, 0, 0, 0},
{R_HEART, {1300.0,0.0,200.0}, 4294967295, 0, 0, 0},
{R_HEART, {200.0,0.0,1300.0}, 4294967295, 0, 0, 0},
{R_HEART, {-2200.0,0.0,800.0}, 4294967295, 0, 0, 0},
{R_HEART, {-2200.0,0.0,2200.0}, 4294967295, 0, 0, 0},
{BIG_HEAD_POWER_UP, {2300.0,0.0,200.0}, 4294967295, 0, -1, 450},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable GhostCastle_room18_collectables[5] = {
{CROWN, {-568.0,0.0,1347.0}, 4294967295, 0, 0, 0},
{CROWN, {1391.0,1000.0,700.0}, 4294967295, 0, 0, 0},
{R_HEART, {500.0,0.0,1400.0}, 4294967295, 0, 0, 0},
{CARROT, {-1400.0,5000.0,700.0}, 4294967295, 0, 0, 0},
{ACTOR_NULL, {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

s32 GhostCastle_spriteLib_Bin[] = {
    47,
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
    0,
    47,
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
    0,
    186,
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
    0,
    47,
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
    0,
    50,
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
    0,
    47,
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
    0,
    186,
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
    0,
    186,
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


RoomInstance GhostCastle_room_instances[21] = {
{GhostCastle_room0_objects, 0,GhostCastle_room0_collectables,GhostCastle_room0_sprites, 0, 0, 2, 0, -1, 0, 0.0, 1, -1600.0, 1000.0, 1800.0, 0.0, 0.0, 0.0, 1.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_roomMulti_objects, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, -400.0, 200.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room2_objects,GhostCastle_room2_actors,GhostCastle_room2_collectables, 0, 0, 0, 2, 0, -1, 1000, 0.0, 2, -1000.0, 800.0, -1800.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_roomMulti_objects, 0, 0, 0, 0, 0, 2, 0, -1, 0, 0.0, 1, -1300.0, 100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room4_objects, 0, 0, 0, 0, 0, 0, 47, 23, 0, 0.0, 2, -1300.0, 700.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room5_objects,GhostCastle_room5_actors,GhostCastle_room5_collectables,GhostCastle_room5_sprites, 0, 0, 5, 0, -1, 0, 0.0, 1, -1200.0, 0.0, 1200.0, 0.0, 0.0, 0.0, 0.800000011920929, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room6_objects, 0,GhostCastle_room6_collectables, 0, 0, 0, 2, 0, -1, 0, 0.0, 1, -3300.0, 600.0, 1400.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room7_objects,GhostCastle_room7_actors,GhostCastle_room7_collectables,GhostCastle_room7_sprites, 0, 0, 2, 0, -1, 0, 0.0, 1, 2500.0, 1500.0, 2900.0, 0.0, 0.0, 0.0, 4.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room8_objects, 0,GhostCastle_room8_collectables, 0, 0, 0, 2, 0, -1, 0, 0.0, 13, 1500.0, 1300.0, 1900.0, -1500.0, 1300.0, 1900.0, 1.600000023841858, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room9_objects,GhostCastle_room9_actors,GhostCastle_room9_collectables,GhostCastle_room9_sprites, 0, 0, 7, 0, -1, 0, 0.0, 1, 400.0, 0.0, 2900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room10_objects, 0,GhostCastle_room10_collectables, 0, 0, 0, 2, 0, -1, 0, 0.0, 1, 0.0, 400.0, 600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room11_objects,GhostCastle_room11_actors,GhostCastle_room11_collectables, 0, 0, 0, 0, 57, 15, 0, 0.0, 1, -350.0, 0.0, 2400.0, 0.0, 0.0, 0.0, 200.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 1.5},
{GhostCastle_room12_objects,GhostCastle_room12_actors,GhostCastle_room12_collectables,GhostCastle_room12_sprites, 1, 0, 1, 53, 5, 0, 0.0, 2, -1400.0, 800.0, 0.0, 0.0, 0.0, 0.0, 0.800000011920929, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room13_objects,GhostCastle_room13_actors,GhostCastle_room13_collectables,GhostCastle_room13_sprites, 0, 0, 0, 0, -1, 0, 0.0, 10, -800.0, 0.0, 2450.0, 0.0, 0.0, 0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room14_objects,GhostCastle_room14_actors,GhostCastle_room14_collectables, 0, 0, 0, 4, 45, 29, 0, 0.0, 16, -1000.0, 200.0, -1500.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 300.0},
{GhostCastle_room15_objects,GhostCastle_room15_actors,GhostCastle_room15_collectables,GhostCastle_room15_sprites, 0, 0, 0, 0, -1, 0, 0.0, 10, -2450.0, 0.0, -800.0, 0.0, 0.0, 0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room16_objects,GhostCastle_room16_actors,GhostCastle_room16_collectables,GhostCastle_room16_sprites, 1, 0, 1, 53, 6, 0, 0.0, 2, -1400.0, 800.0, 0.0, 0.0, 0.0, 0.0, 0.800000011920929, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room17_objects,GhostCastle_room17_actors,GhostCastle_room17_collectables, 0, 0, 0, 6, 56, 16, 0, 0.0, 1, 2400.0, 0.0, 600.0, 0.0, 0.0, 0.0, 200.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 1.5},
{GhostCastle_room18_objects,GhostCastle_room18_actors,GhostCastle_room18_collectables,GhostCastle_room18_sprites, 0, 0, 2, 0, -1, 0, 0.0, 1, -1400.0, 500.0, 1400.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{GhostCastle_room19_objects,GhostCastle_room19_actors, 0, 0, 0, 1, 0, 0, -1, 0, 0.0, 4, 600.0, 200.0, 1200.0, 600.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
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

SpriteActor GhostCastle_roomUnk2_sprites[1] = {
{-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, -1, -1, 0, 0}
};

RoomInstance GhostCastle_ext_room_instances[1] = {
{0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope GhostCastle_scope_Lvlscope = {
    0,
    0,
    0,
    255,
    10000,
    60,
};

StageData GhostCastle_header_Lvlhdr = {
    &GhostCastle_map_data,
    0,
    &GhostCastle_stageModels[0],
    115,
    0,
    GhostCastle_rabObjects_Bin,
    131072,
    GhostCastle_spriteLib_Bin,
    &GhostCastle_scope_Lvlscope,
};
Mtx GhostCastle_IMtx2 = IDENTITY;

#include "assets/levelGroup/GhostCastle/gcScope/gcScope.light.inc.c"

#include "assets/levelGroup/GhostCastle/model1/model1.vtx.inc.c"
Mtx GhostCastle_IMtx3 = IDENTITY;
unsigned char GhostCastle_Pad1[] = FILEPAD;
unsigned char GhostCastle_woodTexture_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/woodTexture.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad2[] = FILEPAD;
unsigned char GhostCastle_woodTexture_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/woodTexture.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model1/model1.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model2/model2.vtx.inc.c"
Mtx GhostCastle_IMtx4 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model2/model2.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model3/model3.vtx.inc.c"
Mtx GhostCastle_IMtx5 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model3/model3.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model4/model4.vtx.inc.c"
Mtx GhostCastle_IMtx6 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model4/model4.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model5/model5.vtx.inc.c"
Mtx GhostCastle_IMtx7 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model5/model5.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model6/model6.vtx.inc.c"
Mtx GhostCastle_IMtx8 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model6/model6.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model7/model7.vtx.inc.c"
Mtx GhostCastle_IMtx9 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model7/model7.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model8/model8.vtx.inc.c"
Mtx GhostCastle_IMtx10 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model8/model8.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model9/model9.vtx.inc.c"
Mtx GhostCastle_IMtx11 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model9/model9.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model10/model10.vtx.inc.c"
Mtx GhostCastle_IMtx12 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model10/model10.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model11/model11.vtx.inc.c"
Mtx GhostCastle_IMtx13 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model11/model11.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model12/model12.vtx.inc.c"
Mtx GhostCastle_IMtx14 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model12/model12.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model13/model13.vtx.inc.c"
Mtx GhostCastle_IMtx15 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model13/model13.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model14/model14.vtx.inc.c"
Mtx GhostCastle_IMtx16 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model14/model14.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model15/model15.vtx.inc.c"
Mtx GhostCastle_IMtx17 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model15/model15.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model16/model16.vtx.inc.c"
Mtx GhostCastle_IMtx18 = IDENTITY;
unsigned char GhostCastle_Pad3[] = FILEPAD;
unsigned char GhostCastle_rockTexture_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/rockTexture.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad4[] = FILEPAD;
unsigned char GhostCastle_rockTexture_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/rockTexture.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model16/model16.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model17/model17.vtx.inc.c"
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

#include "assets/levelGroup/GhostCastle/model17/model17.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model18/model18.vtx.inc.c"
Mtx GhostCastle_IMtx20 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model18/model18.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model19/model19.vtx.inc.c"
Mtx GhostCastle_IMtx21 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model19/model19.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model20/model20.vtx.inc.c"
Mtx GhostCastle_IMtx22 = IDENTITY;
unsigned char GhostCastle_Pad13[] = FILEPAD;
unsigned char GhostCastle_door_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/door.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad14[] = FILEPAD;
unsigned char GhostCastle_door_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/door.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model20/model20.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model21/model21.vtx.inc.c"
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

#include "assets/levelGroup/GhostCastle/model21/model21.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model22/model22.vtx.inc.c"
Mtx GhostCastle_IMtx24 = IDENTITY;
unsigned char GhostCastle_Pad23[] = FILEPAD;
unsigned char GhostCastle_drawer_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/drawer.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad24[] = FILEPAD;
unsigned char GhostCastle_drawer_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/drawer.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model22/model22.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model23/model23.vtx.inc.c"
Mtx GhostCastle_IMtx25 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model23/model23.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model24/model24.vtx.inc.c"
Mtx GhostCastle_IMtx26 = IDENTITY;
unsigned char GhostCastle_Pad25[] = FILEPAD;
unsigned char GhostCastle_circle_ia4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/circle.ia4.png.inc.c"
};

#include "assets/levelGroup/GhostCastle/model24/model24.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model25/model25.vtx.inc.c"
Mtx GhostCastle_IMtx27 = IDENTITY;
unsigned char GhostCastle_Pad26[] = FILEPAD;
unsigned char GhostCastle_billiards_diamond_ia4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/billiards_diamond.ia4.png.inc.c"
};

#include "assets/levelGroup/GhostCastle/model25/model25.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model84/model84.vtx.inc.c"
Mtx GhostCastle_IMtx28 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model84/model84.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model26/model26.vtx.inc.c"
Mtx GhostCastle_IMtx29 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model26/model26.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model27/model27.vtx.inc.c"
Mtx GhostCastle_IMtx30 = IDENTITY;
unsigned char GhostCastle_Pad27[] = FILEPAD;
unsigned char GhostCastle_crateSide_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/crateSide.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad28[] = FILEPAD;
unsigned char GhostCastle_crateSide_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/crateSide.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model27/model27.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model28/model28.vtx.inc.c"
Mtx GhostCastle_IMtx31 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model28/model28.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model29/model29.vtx.inc.c"
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

#include "assets/levelGroup/GhostCastle/model29/model29.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model85/model85.vtx.inc.c"
Mtx GhostCastle_IMtx33 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model85/model85.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model86/model86.vtx.inc.c"
Mtx GhostCastle_IMtx34 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model86/model86.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model30/model30.vtx.inc.c"
Mtx GhostCastle_IMtx35 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model30/model30.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model31/model31.vtx.inc.c"
Mtx GhostCastle_IMtx36 = IDENTITY;
unsigned char GhostCastle_Pad33[] = FILEPAD;
unsigned char GhostCastle_fork_ia8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/fork.ia8.png.inc.c"
};

#include "assets/levelGroup/GhostCastle/model31/model31.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model32/model32.vtx.inc.c"
Mtx GhostCastle_IMtx37 = IDENTITY;
unsigned char GhostCastle_Pad34[] = FILEPAD;
unsigned char GhostCastle_spoon_ia8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/spoon.ia8.png.inc.c"
};

#include "assets/levelGroup/GhostCastle/model32/model32.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model33/model33.vtx.inc.c"
Mtx GhostCastle_IMtx38 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model33/model33.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model34/model34.vtx.inc.c"
Mtx GhostCastle_IMtx39 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model34/model34.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model35/model35.vtx.inc.c"
Mtx GhostCastle_IMtx40 = IDENTITY;
unsigned char GhostCastle_Pad35[] = FILEPAD;
unsigned char GhostCastle_sky_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/sky.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad36[] = FILEPAD;
unsigned char GhostCastle_sky_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/sky.ci8.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model35/model35.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model36/model36.vtx.inc.c"
Mtx GhostCastle_IMtx41 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model36/model36.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model37/model37.vtx.inc.c"
Mtx GhostCastle_IMtx42 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model37/model37.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model38/model38.vtx.inc.c"
Mtx GhostCastle_IMtx43 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model38/model38.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model39/model39.vtx.inc.c"
Mtx GhostCastle_IMtx44 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model39/model39.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model40/model40.vtx.inc.c"
Mtx GhostCastle_IMtx45 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model40/model40.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model41/model41.vtx.inc.c"
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

#include "assets/levelGroup/GhostCastle/model41/model41.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model42/model42.vtx.inc.c"
Mtx GhostCastle_IMtx47 = IDENTITY;
unsigned char GhostCastle_Pad45[] = FILEPAD;
unsigned char GhostCastle_wallSquare_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad46[] = FILEPAD;
unsigned char GhostCastle_wallSquare_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare.ci8.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model42/model42.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model43/model43.vtx.inc.c"
Mtx GhostCastle_IMtx48 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model43/model43.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model44/model44.vtx.inc.c"
Mtx GhostCastle_IMtx49 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model44/model44.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model45/model45.vtx.inc.c"
Mtx GhostCastle_IMtx50 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model45/model45.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model46/model46.vtx.inc.c"
Mtx GhostCastle_IMtx51 = IDENTITY;
unsigned char GhostCastle_Pad47[] = FILEPAD;
unsigned char GhostCastle_wallSquare2_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare2.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad48[] = FILEPAD;
unsigned char GhostCastle_wallSquare2_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallSquare2.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model46/model46.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model47/model47.vtx.inc.c"
Mtx GhostCastle_IMtx52 = IDENTITY;
unsigned char GhostCastle_Pad49[] = FILEPAD;
unsigned char GhostCastle_wallFade2_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallFade2.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad50[] = FILEPAD;
unsigned char GhostCastle_wallFade2_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallFade2.ci8.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model47/model47.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model48/model48.vtx.inc.c"
Mtx GhostCastle_IMtx53 = IDENTITY;
unsigned char GhostCastle_Pad51[] = FILEPAD;
unsigned char GhostCastle_wallRepeat_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad52[] = FILEPAD;
unsigned char GhostCastle_wallRepeat_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model48/model48.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model49/model49.vtx.inc.c"
Mtx GhostCastle_IMtx54 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model49/model49.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model50/model50.vtx.inc.c"
Mtx GhostCastle_IMtx55 = IDENTITY;
unsigned char GhostCastle_Pad53[] = FILEPAD;
unsigned char GhostCastle_wallRepeat2_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat2.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad54[] = FILEPAD;
unsigned char GhostCastle_wallRepeat2_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/wallRepeat2.ci8.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model50/model50.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model51/model51.vtx.inc.c"
Mtx GhostCastle_IMtx56 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model51/model51.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model52/model52.vtx.inc.c"
Mtx GhostCastle_IMtx57 = IDENTITY;
unsigned char GhostCastle_Pad55[] = FILEPAD;
unsigned char GhostCastle_paperWall_ci8_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/paperWall.ci8.png.inc.c"
};
unsigned char GhostCastle_Pad56[] = FILEPAD;
unsigned char GhostCastle_paperWall_ci8_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/paperWall.ci8.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model52/model52.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model53/model53.vtx.inc.c"
Mtx GhostCastle_IMtx58 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model53/model53.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model54/model54.vtx.inc.c"
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

#include "assets/levelGroup/GhostCastle/model54/model54.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model55/model55.vtx.inc.c"
Mtx GhostCastle_IMtx60 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model55/model55.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model56/model56.vtx.inc.c"
Mtx GhostCastle_IMtx61 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model56/model56.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model57/model57.vtx.inc.c"
Mtx GhostCastle_IMtx62 = IDENTITY;
unsigned char GhostCastle_Pad63[] = FILEPAD;
unsigned char GhostCastle_scroll_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/scroll.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad64[] = FILEPAD;
unsigned char GhostCastle_scroll_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/scroll.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model57/model57.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model58/model58.vtx.inc.c"
Mtx GhostCastle_IMtx63 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model58/model58.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model59/model59.vtx.inc.c"
Mtx GhostCastle_IMtx64 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model59/model59.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model60/model60.vtx.inc.c"
Mtx GhostCastle_IMtx65 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model60/model60.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model61/model61.vtx.inc.c"
Mtx GhostCastle_IMtx66 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model61/model61.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model62/model62.vtx.inc.c"
Mtx GhostCastle_IMtx67 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model62/model62.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model63/model63.vtx.inc.c"
Mtx GhostCastle_IMtx68 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model63/model63.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model64/model64.vtx.inc.c"
Mtx GhostCastle_IMtx69 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model64/model64.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model65/model65.vtx.inc.c"
Mtx GhostCastle_IMtx70 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model65/model65.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model66/model66.vtx.inc.c"
Mtx GhostCastle_IMtx71 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model66/model66.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model67/model67.vtx.inc.c"
Mtx GhostCastle_IMtx72 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model67/model67.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model68/model68.vtx.inc.c"
Mtx GhostCastle_IMtx73 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model68/model68.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model69/model69.vtx.inc.c"
Mtx GhostCastle_IMtx74 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model69/model69.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model70/model70.vtx.inc.c"
Mtx GhostCastle_IMtx75 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model70/model70.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model71/model71.vtx.inc.c"
Mtx GhostCastle_IMtx76 = IDENTITY;
unsigned char GhostCastle_Pad65[] = FILEPAD;
unsigned char GhostCastle_otherDoor_ci4_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/otherDoor.ci4.png.inc.c"
};
unsigned char GhostCastle_Pad66[] = FILEPAD;
unsigned char GhostCastle_otherDoor_ci4_PAL[] = {
#include "build/assets/levelGroup/GhostCastle/img/otherDoor.ci4.pal.inc.c"
};

#include "assets/levelGroup/GhostCastle/model71/model71.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model72/model72.vtx.inc.c"
Mtx GhostCastle_IMtx77 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model72/model72.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model73/model73.vtx.inc.c"
Mtx GhostCastle_IMtx78 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model73/model73.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model74/model74.vtx.inc.c"
Mtx GhostCastle_IMtx79 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model74/model74.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol1/unkCol1.colS.inc.c"

ModelCollision GhostCastle_unkCol1_ColH = {
48, 80, &GhostCastle_unkCol1_ColV[0], &GhostCastle_unkCol1_ColT[0], &GhostCastle_unkCol1_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colS.inc.c"

ModelCollision GhostCastle_unkCol2_ColH = {
8, 10, &GhostCastle_unkCol2_ColV[0], &GhostCastle_unkCol2_ColT[0], &GhostCastle_unkCol2_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colS.inc.c"

ModelCollision GhostCastle_unkCol3_ColH = {
60, 58, &GhostCastle_unkCol3_ColV[0], &GhostCastle_unkCol3_ColT[0], &GhostCastle_unkCol3_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colS.inc.c"

ModelCollision GhostCastle_unkCol4_ColH = {
56, 67, &GhostCastle_unkCol4_ColV[0], &GhostCastle_unkCol4_ColT[0], &GhostCastle_unkCol4_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colS.inc.c"

ModelCollision GhostCastle_unkCol5_ColH = {
26, 27, &GhostCastle_unkCol5_ColV[0], &GhostCastle_unkCol5_ColT[0], &GhostCastle_unkCol5_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colS.inc.c"

ModelCollision GhostCastle_unkCol6_ColH = {
28, 36, &GhostCastle_unkCol6_ColV[0], &GhostCastle_unkCol6_ColT[0], &GhostCastle_unkCol6_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colS.inc.c"

ModelCollision GhostCastle_unkCol7_ColH = {
24, 30, &GhostCastle_unkCol7_ColV[0], &GhostCastle_unkCol7_ColT[0], &GhostCastle_unkCol7_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colS.inc.c"

ModelCollision GhostCastle_unkCol8_ColH = {
14, 12, &GhostCastle_unkCol8_ColV[0], &GhostCastle_unkCol8_ColT[0], &GhostCastle_unkCol8_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colS.inc.c"

ModelCollision GhostCastle_unkCol9_ColH = {
12, 10, &GhostCastle_unkCol9_ColV[0], &GhostCastle_unkCol9_ColT[0], &GhostCastle_unkCol9_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colS.inc.c"

ModelCollision GhostCastle_unkCol10_ColH = {
14, 12, &GhostCastle_unkCol10_ColV[0], &GhostCastle_unkCol10_ColT[0], &GhostCastle_unkCol10_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colS.inc.c"

ModelCollision GhostCastle_unkCol11_ColH = {
12, 10, &GhostCastle_unkCol11_ColV[0], &GhostCastle_unkCol11_ColT[0], &GhostCastle_unkCol11_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colS.inc.c"

ModelCollision GhostCastle_unkCol12_ColH = {
14, 16, &GhostCastle_unkCol12_ColV[0], &GhostCastle_unkCol12_ColT[0], &GhostCastle_unkCol12_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colS.inc.c"

ModelCollision GhostCastle_unkCol13_ColH = {
26, 26, &GhostCastle_unkCol13_ColV[0], &GhostCastle_unkCol13_ColT[0], &GhostCastle_unkCol13_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colS.inc.c"

ModelCollision GhostCastle_unkCol14_ColH = {
16, 18, &GhostCastle_unkCol14_ColV[0], &GhostCastle_unkCol14_ColT[0], &GhostCastle_unkCol14_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colS.inc.c"

ModelCollision GhostCastle_unkCol15_ColH = {
26, 26, &GhostCastle_unkCol15_ColV[0], &GhostCastle_unkCol15_ColT[0], &GhostCastle_unkCol15_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colS.inc.c"

ModelCollision GhostCastle_unkCol16_ColH = {
20, 28, &GhostCastle_unkCol16_ColV[0], &GhostCastle_unkCol16_ColT[0], &GhostCastle_unkCol16_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colS.inc.c"

ModelCollision GhostCastle_unkCol17_ColH = {
16, 25, &GhostCastle_unkCol17_ColV[0], &GhostCastle_unkCol17_ColT[0], &GhostCastle_unkCol17_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colS.inc.c"

ModelCollision GhostCastle_unkCol18_ColH = {
8, 6, &GhostCastle_unkCol18_ColV[0], &GhostCastle_unkCol18_ColT[0], &GhostCastle_unkCol18_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colS.inc.c"

ModelCollision GhostCastle_unkCol19_ColH = {
6, 4, &GhostCastle_unkCol19_ColV[0], &GhostCastle_unkCol19_ColT[0], &GhostCastle_unkCol19_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colS.inc.c"

ModelCollision GhostCastle_unkCol20_ColH = {
8, 10, &GhostCastle_unkCol20_ColV[0], &GhostCastle_unkCol20_ColT[0], &GhostCastle_unkCol20_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colS.inc.c"

ModelCollision GhostCastle_unkCol21_ColH = {
40, 62, &GhostCastle_unkCol21_ColV[0], &GhostCastle_unkCol21_ColT[0], &GhostCastle_unkCol21_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colS.inc.c"

ModelCollision GhostCastle_unkCol22_ColH = {
8, 10, &GhostCastle_unkCol22_ColV[0], &GhostCastle_unkCol22_ColT[0], &GhostCastle_unkCol22_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colS.inc.c"

ModelCollision GhostCastle_unkCol23_ColH = {
10, 14, &GhostCastle_unkCol23_ColV[0], &GhostCastle_unkCol23_ColT[0], &GhostCastle_unkCol23_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colS.inc.c"

ModelCollision GhostCastle_unkCol24_ColH = {
8, 6, &GhostCastle_unkCol24_ColV[0], &GhostCastle_unkCol24_ColT[0], &GhostCastle_unkCol24_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colS.inc.c"

ModelCollision GhostCastle_unkCol25_ColH = {
4, 2, &GhostCastle_unkCol25_ColV[0], &GhostCastle_unkCol25_ColT[0], &GhostCastle_unkCol25_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colS.inc.c"

ModelCollision GhostCastle_unkCol26_ColH = {
4, 3, &GhostCastle_unkCol26_ColV[0], &GhostCastle_unkCol26_ColT[0], &GhostCastle_unkCol26_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colS.inc.c"

ModelCollision GhostCastle_unkCol27_ColH = {
4, 2, &GhostCastle_unkCol27_ColV[0], &GhostCastle_unkCol27_ColT[0], &GhostCastle_unkCol27_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colS.inc.c"

ModelCollision GhostCastle_unkCol28_ColH = {
8, 12, &GhostCastle_unkCol28_ColV[0], &GhostCastle_unkCol28_ColT[0], &GhostCastle_unkCol28_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colS.inc.c"

ModelCollision GhostCastle_unkCol29_ColH = {
8, 8, &GhostCastle_unkCol29_ColV[0], &GhostCastle_unkCol29_ColT[0], &GhostCastle_unkCol29_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colS.inc.c"

ModelCollision GhostCastle_unkCol30_ColH = {
48, 92, &GhostCastle_unkCol30_ColV[0], &GhostCastle_unkCol30_ColT[0], &GhostCastle_unkCol30_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colS.inc.c"

ModelCollision GhostCastle_unkCol31_ColH = {
48, 92, &GhostCastle_unkCol31_ColV[0], &GhostCastle_unkCol31_ColT[0], &GhostCastle_unkCol31_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colS.inc.c"

ModelCollision GhostCastle_unkCol32_ColH = {
8, 10, &GhostCastle_unkCol32_ColV[0], &GhostCastle_unkCol32_ColT[0], &GhostCastle_unkCol32_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colS.inc.c"

ModelCollision GhostCastle_unkCol33_ColH = {
8, 6, &GhostCastle_unkCol33_ColV[0], &GhostCastle_unkCol33_ColT[0], &GhostCastle_unkCol33_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colS.inc.c"

ModelCollision GhostCastle_unkCol34_ColH = {
4, 4, &GhostCastle_unkCol34_ColV[0], &GhostCastle_unkCol34_ColT[0], &GhostCastle_unkCol34_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colS.inc.c"

ModelCollision GhostCastle_unkCol35_ColH = {
4, 4, &GhostCastle_unkCol35_ColV[0], &GhostCastle_unkCol35_ColT[0], &GhostCastle_unkCol35_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colS.inc.c"

ModelCollision GhostCastle_unkCol36_ColH = {
8, 6, &GhostCastle_unkCol36_ColV[0], &GhostCastle_unkCol36_ColT[0], &GhostCastle_unkCol36_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colS.inc.c"

ModelCollision GhostCastle_unkCol37_ColH = {
8, 6, &GhostCastle_unkCol37_ColV[0], &GhostCastle_unkCol37_ColT[0], &GhostCastle_unkCol37_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colS.inc.c"

ModelCollision GhostCastle_unkCol38_ColH = {
4, 4, &GhostCastle_unkCol38_ColV[0], &GhostCastle_unkCol38_ColT[0], &GhostCastle_unkCol38_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colS.inc.c"

ModelCollision GhostCastle_unkCol39_ColH = {
8, 8, &GhostCastle_unkCol39_ColV[0], &GhostCastle_unkCol39_ColT[0], &GhostCastle_unkCol39_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colS.inc.c"

ModelCollision GhostCastle_unkCol40_ColH = {
6, 4, &GhostCastle_unkCol40_ColV[0], &GhostCastle_unkCol40_ColT[0], &GhostCastle_unkCol40_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colS.inc.c"

ModelCollision GhostCastle_unkCol41_ColH = {
6, 4, &GhostCastle_unkCol41_ColV[0], &GhostCastle_unkCol41_ColT[0], &GhostCastle_unkCol41_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colS.inc.c"

ModelCollision GhostCastle_unkCol42_ColH = {
4, 2, &GhostCastle_unkCol42_ColV[0], &GhostCastle_unkCol42_ColT[0], &GhostCastle_unkCol42_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colS.inc.c"

ModelCollision GhostCastle_unkCol43_ColH = {
4, 2, &GhostCastle_unkCol43_ColV[0], &GhostCastle_unkCol43_ColT[0], &GhostCastle_unkCol43_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colS.inc.c"

ModelCollision GhostCastle_unkCol44_ColH = {
76, 116, &GhostCastle_unkCol44_ColV[0], &GhostCastle_unkCol44_ColT[0], &GhostCastle_unkCol44_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colS.inc.c"

ModelCollision GhostCastle_unkCol45_ColH = {
50, 80, &GhostCastle_unkCol45_ColV[0], &GhostCastle_unkCol45_ColT[0], &GhostCastle_unkCol45_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colS.inc.c"

ModelCollision GhostCastle_unkCol46_ColH = {
55, 90, &GhostCastle_unkCol46_ColV[0], &GhostCastle_unkCol46_ColT[0], &GhostCastle_unkCol46_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colS.inc.c"

ModelCollision GhostCastle_unkCol47_ColH = {
37, 51, &GhostCastle_unkCol47_ColV[0], &GhostCastle_unkCol47_ColT[0], &GhostCastle_unkCol47_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colS.inc.c"

ModelCollision GhostCastle_unkCol48_ColH = {
66, 101, &GhostCastle_unkCol48_ColV[0], &GhostCastle_unkCol48_ColT[0], &GhostCastle_unkCol48_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colS.inc.c"

ModelCollision GhostCastle_unkCol49_ColH = {
28, 44, &GhostCastle_unkCol49_ColV[0], &GhostCastle_unkCol49_ColT[0], &GhostCastle_unkCol49_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colS.inc.c"

ModelCollision GhostCastle_unkCol50_ColH = {
92, 144, &GhostCastle_unkCol50_ColV[0], &GhostCastle_unkCol50_ColT[0], &GhostCastle_unkCol50_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colS.inc.c"

ModelCollision GhostCastle_unkCol51_ColH = {
132, 219, &GhostCastle_unkCol51_ColV[0], &GhostCastle_unkCol51_ColT[0], &GhostCastle_unkCol51_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colS.inc.c"

ModelCollision GhostCastle_unkCol52_ColH = {
36, 48, &GhostCastle_unkCol52_ColV[0], &GhostCastle_unkCol52_ColT[0], &GhostCastle_unkCol52_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colS.inc.c"

ModelCollision GhostCastle_unkCol53_ColH = {
44, 75, &GhostCastle_unkCol53_ColV[0], &GhostCastle_unkCol53_ColT[0], &GhostCastle_unkCol53_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colS.inc.c"

ModelCollision GhostCastle_unkCol54_ColH = {
54, 91, &GhostCastle_unkCol54_ColV[0], &GhostCastle_unkCol54_ColT[0], &GhostCastle_unkCol54_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colS.inc.c"

ModelCollision GhostCastle_unkCol55_ColH = {
62, 105, &GhostCastle_unkCol55_ColV[0], &GhostCastle_unkCol55_ColT[0], &GhostCastle_unkCol55_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colS.inc.c"

ModelCollision GhostCastle_unkCol56_ColH = {
161, 277, &GhostCastle_unkCol56_ColV[0], &GhostCastle_unkCol56_ColT[0], &GhostCastle_unkCol56_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colS.inc.c"

ModelCollision GhostCastle_unkCol57_ColH = {
92, 154, &GhostCastle_unkCol57_ColV[0], &GhostCastle_unkCol57_ColT[0], &GhostCastle_unkCol57_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colS.inc.c"

ModelCollision GhostCastle_unkCol58_ColH = {
60, 105, &GhostCastle_unkCol58_ColV[0], &GhostCastle_unkCol58_ColT[0], &GhostCastle_unkCol58_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colS.inc.c"

ModelCollision GhostCastle_unkCol59_ColH = {
68, 117, &GhostCastle_unkCol59_ColV[0], &GhostCastle_unkCol59_ColT[0], &GhostCastle_unkCol59_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colS.inc.c"

ModelCollision GhostCastle_unkCol60_ColH = {
68, 119, &GhostCastle_unkCol60_ColV[0], &GhostCastle_unkCol60_ColT[0], &GhostCastle_unkCol60_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colS.inc.c"

ModelCollision GhostCastle_unkCol61_ColH = {
8, 12, &GhostCastle_unkCol61_ColV[0], &GhostCastle_unkCol61_ColT[0], &GhostCastle_unkCol61_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colS.inc.c"

ModelCollision GhostCastle_unkCol62_ColH = {
8, 8, &GhostCastle_unkCol62_ColV[0], &GhostCastle_unkCol62_ColT[0], &GhostCastle_unkCol62_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colS.inc.c"

ModelCollision GhostCastle_unkCol63_ColH = {
12, 12, &GhostCastle_unkCol63_ColV[0], &GhostCastle_unkCol63_ColT[0], &GhostCastle_unkCol63_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colS.inc.c"

ModelCollision GhostCastle_unkCol64_ColH = {
22, 20, &GhostCastle_unkCol64_ColV[0], &GhostCastle_unkCol64_ColT[0], &GhostCastle_unkCol64_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colS.inc.c"

ModelCollision GhostCastle_unkCol65_ColH = {
4, 4, &GhostCastle_unkCol65_ColV[0], &GhostCastle_unkCol65_ColT[0], &GhostCastle_unkCol65_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colS.inc.c"

ModelCollision GhostCastle_unkCol66_ColH = {
4, 4, &GhostCastle_unkCol66_ColV[0], &GhostCastle_unkCol66_ColT[0], &GhostCastle_unkCol66_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colS.inc.c"

ModelCollision GhostCastle_unkCol67_ColH = {
12, 14, &GhostCastle_unkCol67_ColV[0], &GhostCastle_unkCol67_ColT[0], &GhostCastle_unkCol67_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colS.inc.c"

ModelCollision GhostCastle_unkCol68_ColH = {
8, 10, &GhostCastle_unkCol68_ColV[0], &GhostCastle_unkCol68_ColT[0], &GhostCastle_unkCol68_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colS.inc.c"

ModelCollision GhostCastle_unkCol69_ColH = {
55, 90, &GhostCastle_unkCol69_ColV[0], &GhostCastle_unkCol69_ColT[0], &GhostCastle_unkCol69_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colS.inc.c"

ModelCollision GhostCastle_unkCol70_ColH = {
12, 8, &GhostCastle_unkCol70_ColV[0], &GhostCastle_unkCol70_ColT[0], &GhostCastle_unkCol70_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colS.inc.c"

ModelCollision GhostCastle_unkCol71_ColH = {
16, 28, &GhostCastle_unkCol71_ColV[0], &GhostCastle_unkCol71_ColT[0], &GhostCastle_unkCol71_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colS.inc.c"

ModelCollision GhostCastle_unkCol72_ColH = {
16, 25, &GhostCastle_unkCol72_ColV[0], &GhostCastle_unkCol72_ColT[0], &GhostCastle_unkCol72_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colS.inc.c"

ModelCollision GhostCastle_unkCol73_ColH = {
8, 8, &GhostCastle_unkCol73_ColV[0], &GhostCastle_unkCol73_ColT[0], &GhostCastle_unkCol73_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colS.inc.c"

ModelCollision GhostCastle_unkCol74_ColH = {
8, 8, &GhostCastle_unkCol74_ColV[0], &GhostCastle_unkCol74_ColT[0], &GhostCastle_unkCol74_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colS.inc.c"

ModelCollision GhostCastle_unkCol75_ColH = {
8, 8, &GhostCastle_unkCol75_ColV[0], &GhostCastle_unkCol75_ColT[0], &GhostCastle_unkCol75_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colS.inc.c"

ModelCollision GhostCastle_unkCol76_ColH = {
8, 8, &GhostCastle_unkCol76_ColV[0], &GhostCastle_unkCol76_ColT[0], &GhostCastle_unkCol76_ColS
};

#include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colS.inc.c"

ModelCollision GhostCastle_unkCol77_ColH = {
18, 16, &GhostCastle_unkCol77_ColV[0], &GhostCastle_unkCol77_ColT[0], &GhostCastle_unkCol77_ColS
};
Mtx GhostCastle_IMtx80 = IDENTITY;

#include "assets/levelGroup/GhostCastle/gcScope2/gcScope2.light.inc.c"

#include "assets/levelGroup/GhostCastle/model75/model75.vtx.inc.c"
Mtx GhostCastle_IMtx81 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model75/model75.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model76/model76.vtx.inc.c"
Mtx GhostCastle_IMtx82 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model76/model76.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model77/model77.vtx.inc.c"
Mtx GhostCastle_IMtx83 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model77/model77.gfx.inc.c"
Mtx GhostCastle_IMtx84 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model78/model78.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model79/model79.vtx.inc.c"
Mtx GhostCastle_IMtx85 = IDENTITY;
unsigned char GhostCastle_Pad67[] = FILEPAD;
unsigned char GhostCastle_painting_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/painting.rgba16.png.inc.c"
};
unsigned char GhostCastle_Pad68[] = FILEPAD;
unsigned char GhostCastle_green_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/green.rgba16.png.inc.c"
};

#include "assets/levelGroup/GhostCastle/model79/model79.gfx.inc.c"
Mtx GhostCastle_IMtx86 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model80/model80.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model87/model87.vtx.inc.c"
Mtx GhostCastle_IMtx87 = IDENTITY;
unsigned char GhostCastle_Pad69[] = FILEPAD;
unsigned char GhostCastle_brown_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/brown.rgba16.png.inc.c"
};
unsigned char GhostCastle_Pad70[] = FILEPAD;
unsigned char GhostCastle_scroll2_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/scroll2.rgba16.png.inc.c"
};

#include "assets/levelGroup/GhostCastle/model87/model87.gfx.inc.c"
Mtx GhostCastle_IMtx88 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model88/model88.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model81/model81.vtx.inc.c"
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

#include "assets/levelGroup/GhostCastle/model81/model81.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/model82/model82.vtx.inc.c"
Mtx GhostCastle_IMtx90 = IDENTITY;
unsigned char GhostCastle_Pad74[] = FILEPAD;
unsigned char GhostCastle_hole_rgba16_PNG[] = {
#include "build/assets/levelGroup/GhostCastle/img/hole.rgba16.png.inc.c"
};

#include "assets/levelGroup/GhostCastle/model82/model82.gfx.inc.c"
Mtx GhostCastle_IMtx91 = IDENTITY;

#include "assets/levelGroup/GhostCastle/model83/model83.gfx.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk1Pointer.animP.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk2Pointer.animP.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk3Pointer.animP.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/GhostCastle/anim/unk4Pointer.animP.inc.c"
