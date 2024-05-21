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
extern CollisionData Global_fallbackCube_ColH;
extern Gfx Global_exitShadowSouth_Gfx[];
extern CollisionData Global_exitShadowSouth_ColH;
extern Gfx Global_exitShadowNorth_Gfx[];
extern CollisionData Global_exitShadowNorth_ColH;
extern Gfx Global_exitShadowEast_Gfx[];
extern CollisionData Global_exitShadowEast_ColH;
extern Gfx Global_exitShadowWest_Gfx[];
extern CollisionData Global_exitShadowWest_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern CollisionData Global_ALBLExit_ColH;
extern Gfx Global_unk3_Gfx[];
extern CollisionData Global_unk3_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern CollisionData Global_BossBridge_ColH;
extern Gfx Global_ALPole_Gfx[];
extern CollisionData Global_ALPole_ColH;
extern Gfx Global_ALBLDoor_Gfx[];
extern CollisionData Global_ALBLDoor_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern CollisionData Global_ALSpinDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern CollisionData Global_BLLavaFloor_ColH;
extern Gfx Global_BLLava_Gfx[];
extern CollisionData Global_BLLava_ColH;
extern Gfx Global_BLLava2_Gfx[];
extern CollisionData Global_BLLava2_ColH;
extern Gfx Global_BLLava3_Gfx[];
extern CollisionData Global_BLLava3_ColH;
extern Gfx Global_BLLava4_Gfx[];
extern CollisionData Global_BLLava4_ColH;
extern Gfx Global_BLLava5_Gfx[];
extern CollisionData Global_BLLava5_ColH;
extern Gfx Global_BLLava6_Gfx[];
extern CollisionData Global_BLLava6_ColH;
extern Gfx Global_BLLava7_Gfx[];
extern CollisionData Global_BLLava7_ColH;
extern Gfx Global_BLLava8_Gfx[];
extern CollisionData Global_BLLava8_ColH;
extern Gfx Global_BLDestructableTop_Gfx[];
extern CollisionData Global_BLDestructableTop_ColH;
extern Gfx Global_BLMetalBridge_Gfx[];
extern CollisionData Global_BLMetalBridge_ColH;
extern Gfx Global_KLExit_Gfx[];
extern CollisionData Global_KLExit_ColH;
extern Gfx Global_KLDoor_Gfx[];
extern CollisionData Global_KLDoor_ColH;
extern Gfx Global_DCExit_Gfx[];
extern CollisionData Global_DCExit_ColH;
extern Gfx Global_TallExitShadow1_Gfx[];
extern CollisionData Global_TallExitShadow1_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern CollisionData Global_TallExitShadow2_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern CollisionData Global_GCExit1_ColH;
extern Gfx Global_GCExit2_Gfx[];
extern CollisionData Global_GCExit2_ColH;
extern Gfx Global_trainingRoomLight_Gfx[];
extern CollisionData Global_trainingRoomLight_ColH;
extern Gfx Global_JLCaveExit1_Gfx[];
extern CollisionData Global_JLCaveExit1_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern CollisionData Global_JLCaveExit2_ColH;
extern Gfx Global_JLCaveExit3_Gfx[];
extern CollisionData Global_JLCaveExit3_ColH;
extern Gfx Global_JLCaveExit4_Gfx[];
extern CollisionData Global_JLCaveExit4_ColH;
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern CollisionData Global_JLOutsideEntrance_ColH;
extern Gfx Global_JLFxCamPillar_Gfx[];
extern CollisionData Global_JLFxCamPillar_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern CollisionData Global_JLCaveDoor_ColH;
extern Gfx GhostCastle_model1_Gfx[];
extern CollisionData GhostCastle_unkCol1_ColH;
extern Gfx GhostCastle_model2_Gfx[];
extern CollisionData GhostCastle_unkCol2_ColH;
extern Gfx GhostCastle_model3_Gfx[];
extern CollisionData GhostCastle_unkCol3_ColH;
extern Gfx GhostCastle_model4_Gfx[];
extern CollisionData GhostCastle_unkCol4_ColH;
extern Gfx GhostCastle_model5_Gfx[];
extern CollisionData GhostCastle_unkCol5_ColH;
extern Gfx GhostCastle_model6_Gfx[];
extern CollisionData GhostCastle_unkCol6_ColH;
extern Gfx GhostCastle_model7_Gfx[];
extern CollisionData GhostCastle_unkCol7_ColH;
extern Gfx GhostCastle_model8_Gfx[];
extern CollisionData GhostCastle_unkCol8_ColH;
extern Gfx GhostCastle_model9_Gfx[];
extern CollisionData GhostCastle_unkCol9_ColH;
extern Gfx GhostCastle_model10_Gfx[];
extern CollisionData GhostCastle_unkCol10_ColH;
extern Gfx GhostCastle_model11_Gfx[];
extern CollisionData GhostCastle_unkCol11_ColH;
extern Gfx GhostCastle_model12_Gfx[];
extern CollisionData GhostCastle_unkCol12_ColH;
extern Gfx GhostCastle_model13_Gfx[];
extern CollisionData GhostCastle_unkCol13_ColH;
extern Gfx GhostCastle_model14_Gfx[];
extern CollisionData GhostCastle_unkCol14_ColH;
extern Gfx GhostCastle_model15_Gfx[];
extern CollisionData GhostCastle_unkCol15_ColH;
extern Gfx GhostCastle_model16_Gfx[];
extern CollisionData GhostCastle_unkCol16_ColH;
extern Gfx GhostCastle_model17_Gfx[];
extern CollisionData GhostCastle_unkCol17_ColH;
extern Gfx GhostCastle_model18_Gfx[];
extern CollisionData GhostCastle_unkCol18_ColH;
extern Gfx GhostCastle_model19_Gfx[];
extern CollisionData GhostCastle_unkCol19_ColH;
extern Gfx GhostCastle_model20_Gfx[];
extern CollisionData GhostCastle_unkCol20_ColH;
extern Gfx GhostCastle_model21_Gfx[];
extern CollisionData GhostCastle_unkCol21_ColH;
extern Gfx GhostCastle_model22_Gfx[];
extern CollisionData GhostCastle_unkCol22_ColH;
extern Gfx GhostCastle_model23_Gfx[];
extern CollisionData GhostCastle_unkCol23_ColH;
extern Gfx GhostCastle_model24_Gfx[];
extern CollisionData GhostCastle_unkCol24_ColH;
extern Gfx GhostCastle_model25_Gfx[];
extern CollisionData GhostCastle_unkCol25_ColH;
extern Gfx GhostCastle_model84_Gfx[];
extern CollisionData GhostCastle_unkCol26_ColH;
extern Gfx GhostCastle_model26_Gfx[];
extern CollisionData GhostCastle_unkCol27_ColH;
extern Gfx GhostCastle_model27_Gfx[];
extern CollisionData GhostCastle_unkCol28_ColH;
extern Gfx GhostCastle_model28_Gfx[];
extern CollisionData GhostCastle_unkCol29_ColH;
extern Gfx GhostCastle_model29_Gfx[];
extern CollisionData GhostCastle_unkCol30_ColH;
extern Gfx GhostCastle_model85_Gfx[];
extern CollisionData GhostCastle_unkCol31_ColH;
extern Gfx GhostCastle_model86_Gfx[];
extern CollisionData GhostCastle_unkCol32_ColH;
extern Gfx GhostCastle_model30_Gfx[];
extern CollisionData GhostCastle_unkCol33_ColH;
extern Gfx GhostCastle_model31_Gfx[];
extern CollisionData GhostCastle_unkCol34_ColH;
extern Gfx GhostCastle_model32_Gfx[];
extern CollisionData GhostCastle_unkCol35_ColH;
extern Gfx GhostCastle_model33_Gfx[];
extern CollisionData GhostCastle_unkCol36_ColH;
extern Gfx GhostCastle_model34_Gfx[];
extern CollisionData GhostCastle_unkCol37_ColH;
extern Gfx GhostCastle_model35_Gfx[];
extern CollisionData GhostCastle_unkCol38_ColH;
extern Gfx GhostCastle_model36_Gfx[];
extern CollisionData GhostCastle_unkCol39_ColH;
extern Gfx GhostCastle_model37_Gfx[];
extern CollisionData GhostCastle_unkCol40_ColH;
extern Gfx GhostCastle_model38_Gfx[];
extern CollisionData GhostCastle_unkCol41_ColH;
extern Gfx GhostCastle_model39_Gfx[];
extern CollisionData GhostCastle_unkCol42_ColH;
extern Gfx GhostCastle_model40_Gfx[];
extern CollisionData GhostCastle_unkCol43_ColH;
extern Gfx GhostCastle_model41_Gfx[];
extern CollisionData GhostCastle_unkCol44_ColH;
extern Gfx GhostCastle_model42_Gfx[];
extern CollisionData GhostCastle_unkCol45_ColH;
extern Gfx GhostCastle_model43_Gfx[];
extern CollisionData GhostCastle_unkCol46_ColH;
extern Gfx GhostCastle_model44_Gfx[];
extern CollisionData GhostCastle_unkCol47_ColH;
extern Gfx GhostCastle_model45_Gfx[];
extern CollisionData GhostCastle_unkCol48_ColH;
extern Gfx GhostCastle_model46_Gfx[];
extern CollisionData GhostCastle_unkCol49_ColH;
extern Gfx GhostCastle_model47_Gfx[];
extern CollisionData GhostCastle_unkCol50_ColH;
extern Gfx GhostCastle_model48_Gfx[];
extern CollisionData GhostCastle_unkCol51_ColH;
extern Gfx GhostCastle_model49_Gfx[];
extern CollisionData GhostCastle_unkCol52_ColH;
extern Gfx GhostCastle_model50_Gfx[];
extern CollisionData GhostCastle_unkCol53_ColH;
extern Gfx GhostCastle_model51_Gfx[];
extern CollisionData GhostCastle_unkCol54_ColH;
extern Gfx GhostCastle_model52_Gfx[];
extern CollisionData GhostCastle_unkCol55_ColH;
extern Gfx GhostCastle_model53_Gfx[];
extern CollisionData GhostCastle_unkCol56_ColH;
extern Gfx GhostCastle_model54_Gfx[];
extern CollisionData GhostCastle_unkCol57_ColH;
extern Gfx GhostCastle_model55_Gfx[];
extern CollisionData GhostCastle_unkCol58_ColH;
extern Gfx GhostCastle_model56_Gfx[];
extern CollisionData GhostCastle_unkCol59_ColH;
extern Gfx GhostCastle_model57_Gfx[];
extern CollisionData GhostCastle_unkCol60_ColH;
extern Gfx GhostCastle_model58_Gfx[];
extern CollisionData GhostCastle_unkCol61_ColH;
extern Gfx GhostCastle_model59_Gfx[];
extern CollisionData GhostCastle_unkCol62_ColH;
extern Gfx GhostCastle_model60_Gfx[];
extern CollisionData GhostCastle_unkCol63_ColH;
extern Gfx GhostCastle_model61_Gfx[];
extern CollisionData GhostCastle_unkCol64_ColH;
extern Gfx GhostCastle_model62_Gfx[];
extern CollisionData GhostCastle_unkCol65_ColH;
extern Gfx GhostCastle_model63_Gfx[];
extern CollisionData GhostCastle_unkCol66_ColH;
extern Gfx GhostCastle_model64_Gfx[];
extern CollisionData GhostCastle_unkCol67_ColH;
extern Gfx GhostCastle_model65_Gfx[];
extern CollisionData GhostCastle_unkCol68_ColH;
extern Gfx GhostCastle_model66_Gfx[];
extern CollisionData GhostCastle_unkCol69_ColH;
extern Gfx GhostCastle_model67_Gfx[];
extern CollisionData GhostCastle_unkCol70_ColH;
extern Gfx GhostCastle_model68_Gfx[];
extern CollisionData GhostCastle_unkCol71_ColH;
extern Gfx GhostCastle_model69_Gfx[];
extern CollisionData GhostCastle_unkCol72_ColH;
extern Gfx GhostCastle_model70_Gfx[];
extern CollisionData GhostCastle_unkCol73_ColH;
extern Gfx GhostCastle_model71_Gfx[];
extern CollisionData GhostCastle_unkCol74_ColH;
extern Gfx GhostCastle_model72_Gfx[];
extern CollisionData GhostCastle_unkCol75_ColH;
extern Gfx GhostCastle_model73_Gfx[];
extern CollisionData GhostCastle_unkCol76_ColH;
extern Gfx GhostCastle_model74_Gfx[];
extern CollisionData GhostCastle_unkCol77_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;



Mtx GhostCastle_IMtx1 = IDENTITY;

#include "assets/levelGroup/GhostCastle/pointers.lvp.inc.c"

#include "build/assets/levelGroup/GhostCastle/rabObjects.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room0_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room0_spr2.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room0_spr3.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room0_spr4.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room0_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room18_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room18_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room7_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room7_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj21.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_obj22.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/roomMulti_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/roomMulti_objSTOP.roomObj.inc.c"

#include "build/assets/levelGroup/GhostCastle/unusedGarbage.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act5.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act6.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act7.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act8.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act9.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act10.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act11.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act12.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act13.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act14.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act15.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act16.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act17.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act18.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act19.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act20.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act21.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act22.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act23.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act24.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act25.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act26.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act27.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act28.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act29.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act30.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_act31.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room2_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room4_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room4_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room5_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room5_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room5_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room5_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room5_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room5_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room5_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room5_spr2.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room5_spr3.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room5_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room6_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room7_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room7_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room7_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room7_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room7_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj21.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj22.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj23.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj24.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj25.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_obj26.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room8_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room9_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room9_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room9_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act5.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act6.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act7.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_act8.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room9_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room10_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room11_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act5.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act6.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act7.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act8.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act9.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_act10.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room11_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj21.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_obj22.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room12_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act5.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act6.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act7.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act8.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_act9.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room12_actSTOP.roomAct.inc.c"

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

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room13_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room13_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room13_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room13_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room13_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room13_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room13_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj21.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj22.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj23.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj24.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj25.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj26.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj27.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj28.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj29.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj30.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj31.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj32.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj33.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj34.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj35.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj36.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj37.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj38.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_obj39.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room14_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_act5.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_act6.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_act7.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room14_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room15_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room15_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room15_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room16_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room16_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room12_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/room12_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room15_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room15_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room15_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room15_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room16_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act5.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act6.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act7.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act8.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act9.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act10.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act11.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act12.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_act13.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room16_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr2.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr3.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr4.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr5.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr6.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr7.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr8.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr9.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr10.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr11.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr12.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr13.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr14.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr15.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk_spr16.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room17_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room17_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room17_act2.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room17_act3.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room17_act4.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room17_act5.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room17_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj4.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj5.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj6.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj7.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj8.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj9.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj10.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj11.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj12.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj13.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj14.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj15.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj16.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj17.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj18.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj19.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj20.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj21.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj22.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj23.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj24.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj25.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj26.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj27.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_obj28.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room18_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room18_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room18_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room19_obj1.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room19_obj2.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room19_obj3.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomObjects/room19_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room19_act1.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/roomActors/room19_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct4.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct5.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct6.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct7.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct8.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct9.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct10.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct11.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clct12.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/roomUnk_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room0_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room0_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room0_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room0_clct4.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room0_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room2_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room2_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room2_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room5_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room5_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room6_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room6_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room6_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room6_clct4.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room6_clct5.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room6_clct6.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room6_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room7_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room7_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room7_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room7_clct4.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room7_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room8_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room8_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room8_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room8_clct4.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room8_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room9_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room9_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room9_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room9_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room10_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room10_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room10_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room11_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room11_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room11_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room11_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room12_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room12_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room12_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room12_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room13_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room13_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room14_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room14_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room15_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room15_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room16_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room16_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room16_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room16_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct4.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct5.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct6.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct7.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clct8.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room17_clctSTOP.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room18_clct1.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room18_clct2.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room18_clct3.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room18_clct4.clct.inc.c"

#include "assets/levelGroup/GhostCastle/collectables/room18_clctSTOP.clct.inc.c"

#include "build/assets/levelGroup/GhostCastle/spriteLib.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room2.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room3.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room4.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room5.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room6.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room7.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room8.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room9.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room10.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room11.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room12.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room13.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room14.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room15.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room16.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room17.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room18.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/room19.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/map.lvmM.inc.c"

#include "assets/levelGroup/GhostCastle/map.lvmH.inc.c"

#include "assets/levelGroup/GhostCastle/spriteActors/roomUnk2_spr1.sprite.inc.c"

#include "assets/levelGroup/GhostCastle/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/GhostCastle/scope.lvlScope.inc.c"

#include "assets/levelGroup/GhostCastle/header.lvlHdr.inc.c"
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

#include "assets/levelGroup/GhostCastle/unkCol1/unkCol1.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol2/unkCol2.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol3/unkCol3.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol4/unkCol4.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol5/unkCol5.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol6/unkCol6.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol7/unkCol7.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol8/unkCol8.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol9/unkCol9.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol10/unkCol10.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol11/unkCol11.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol12/unkCol12.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol13/unkCol13.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol14/unkCol14.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol15/unkCol15.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol16/unkCol16.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol17/unkCol17.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol18/unkCol18.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol19/unkCol19.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol20/unkCol20.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol21/unkCol21.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol22/unkCol22.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol23/unkCol23.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol24/unkCol24.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol25/unkCol25.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol26/unkCol26.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol27/unkCol27.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol28/unkCol28.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol29/unkCol29.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol30/unkCol30.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol31/unkCol31.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol32/unkCol32.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol33/unkCol33.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol34/unkCol34.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol35/unkCol35.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol36/unkCol36.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol37/unkCol37.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol38/unkCol38.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol39/unkCol39.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol40/unkCol40.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol41/unkCol41.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol42/unkCol42.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol43/unkCol43.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol44/unkCol44.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol45/unkCol45.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol46/unkCol46.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol47/unkCol47.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol48/unkCol48.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol49/unkCol49.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol50/unkCol50.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol51/unkCol51.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol52/unkCol52.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol53/unkCol53.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol54/unkCol54.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol55/unkCol55.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol56/unkCol56.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol57/unkCol57.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol58/unkCol58.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol59/unkCol59.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol60/unkCol60.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol61/unkCol61.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol62/unkCol62.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol63/unkCol63.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol64/unkCol64.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol65/unkCol65.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol66/unkCol66.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol67/unkCol67.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol68/unkCol68.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol69/unkCol69.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol70/unkCol70.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol71/unkCol71.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol72/unkCol72.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol73/unkCol73.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol74/unkCol74.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol75/unkCol75.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol76/unkCol76.colH.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colV.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colT.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colS.inc.c"

#include "assets/levelGroup/GhostCastle/unkCol77/unkCol77.colH.inc.c"
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
