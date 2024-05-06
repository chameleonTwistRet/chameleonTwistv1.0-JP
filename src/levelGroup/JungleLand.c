#include "common.h"

extern Mtx D_80129730_JungleLand; //golem
extern Mtx D_80129770_JungleLand; //golem leg
extern Mtx D_801297B0_JungleLand; //golem arm
extern Mtx D_801297F0_JungleLand; //golem leg2
extern Mtx D_80129830_JungleLand; //golem body
extern Mtx D_80129870_JungleLand; //golem leg3
extern Mtx D_801298B0_JungleLand; //golem elbow
extern Mtx D_801298F0_JungleLand; //golem arm2

extern unsigned char Global_jllogTop_ci4_PAL[];
extern unsigned char Global_jllogTop_ci4_PNG[];
extern unsigned char Global_jlLog_ci4_PAL[];
extern unsigned char Global_jlLog_ci4_PNG[];
extern unsigned char Global_dcRockFloor_i4_PNG[];
extern unsigned char Global_longWood_ci4_PAL[];
extern unsigned char Global_longWood_ci4_PNG[];
extern unsigned char Global_longWoodTopper_ci4_PAL[];
extern unsigned char Global_longWoodTopper_ci4_PNG[];
extern unsigned char Global_JLCaveFade_ci8_PAL[];
extern unsigned char Global_JLCaveFade_ci8_PNG[];
extern unsigned char Global_JLCave_ci8_PAL[];
extern unsigned char Global_JLCave_ci8_PNG[];
extern unsigned char Global_jlText5_ci4_PAL[];
extern unsigned char Global_jlText5_ci4_PNG[];
extern unsigned char Global_jlText4_ci4_PAL[];
extern unsigned char Global_jlText4_ci4_PNG[];
extern unsigned char Global_strip_ci4_PAL[];
extern unsigned char Global_strip_ci4_PNG[];
extern unsigned char Global_bigLog_ci4_PAL[];
extern unsigned char Global_bigLog_ci4_PNG[];
extern unsigned char Global_jlText2_ci4_PAL[];
extern unsigned char Global_jlText2_ci4_PNG[];
extern unsigned char Global_jlText1_ci4_PAL[];
extern unsigned char Global_jlText1_ci4_PNG[];
extern unsigned char Global_jlText3_ci4_PAL[];
extern unsigned char Global_jlText3_ci4_PNG[];
extern unsigned char Global_pebbles_ci4_PAL[];
extern unsigned char Global_pebbles_ci4_PNG[];
extern unsigned char Global_JLMountain_ci4_PAL[];
extern unsigned char Global_JLMountain_ci4_PNG[];
extern unsigned char Global_JLCaveFadeTop_ci8_PAL[];
extern unsigned char Global_JLCaveFadeTop_ci8_PNG[];

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
extern Gfx JungleLand_lilypad_Gfx[];
extern CollisionData JungleLand_lilypad_ColH;
extern Gfx JungleLand_vine_Gfx[];
extern CollisionData JungleLand_vine_ColH;
extern Gfx JungleLand_fallenCrownLog_Gfx[];
extern CollisionData JungleLand_fallenCrownLog_ColH;
extern Gfx JungleLand_unkLog_Gfx[];
extern CollisionData JungleLand_unkLog_ColH;
extern Gfx JungleLand_fallenLogStump_Gfx[];
extern CollisionData JungleLand_fallenLogStump_ColH;
extern Gfx JungleLand_logTunnel_Gfx[];
extern CollisionData JungleLand_logTunnel_ColH;
extern Gfx JungleLand_waterfallRock_Gfx[];
extern CollisionData JungleLand_waterfallRock_ColH;
extern Gfx JungleLand_extEntranceDoorFrame_Gfx[];
extern CollisionData JungleLand_extEntranceDoorFrame_ColH;
extern Gfx JungleLand_fallBridge_Gfx[];
extern CollisionData JungleLand_fallBridge_ColH;
extern Gfx JungleLand_ctCrate_Gfx[];
extern CollisionData JungleLand_ctCrate_ColH;
extern Gfx JungleLand_ctCrate2_Gfx[];
extern CollisionData JungleLand_ctCrate2_ColH;
extern Gfx JungleLand_walkingPlank_Gfx[];
extern CollisionData JungleLand_walkingPlank_ColH;
extern Gfx JungleLand_walkingPlank2_Gfx[];
extern CollisionData JungleLand_walkingPlank2_ColH;
extern Gfx JungleLand_walkingPlank3_Gfx[];
extern CollisionData JungleLand_walkingPlank3_ColH;
extern Gfx JungleLand_walkingPlank4_Gfx[];
extern CollisionData JungleLand_walkingPlank4_ColH;
extern Gfx JungleLand_singularPlank_Gfx[];
extern CollisionData JungleLand_singularPlank_ColH;
extern Gfx JungleLand_roomSixStartPlatform_Gfx[];
extern CollisionData JungleLand_roomSixStartPlatform_ColH;
extern Gfx JungleLand_cavePlatform_Gfx[];
extern CollisionData JungleLand_cavePlatform_ColH;
extern Gfx JungleLand_roomSixCrownPlatform_Gfx[];
extern CollisionData JungleLand_roomSixCrownPlatform_ColH;
extern Gfx JungleLand_roomSixSidePlatform_Gfx[];
extern CollisionData JungleLand_roomSixSidePlatform_ColH;
extern Gfx JungleLand_roomSevenLava_Gfx[];
extern CollisionData JungleLand_roomSevenLava_ColH;
extern Gfx JungleLand_roomSevenFloor_Gfx[];
extern CollisionData JungleLand_roomSevenFloor_ColH;
extern Gfx JungleLand_roomZeroLava_Gfx[];
extern CollisionData JungleLand_roomZeroLava_ColH;
extern Gfx JungleLand_roomOnePlatform_Gfx[];
extern CollisionData JungleLand_roomOnePlatform_ColH;
extern Gfx JungleLand_roomSixCrownEdgePlatform_Gfx[];
extern CollisionData JungleLand_roomSixCrownEdgePlatform_ColH;
extern Gfx JungleLand_roomSevenSpinRing_Gfx[];
extern CollisionData JungleLand_roomSevenSpinRing_ColH;
extern Gfx JungleLand_woodBlock_Gfx[];
extern CollisionData JungleLand_woodBlock_ColH;
extern Gfx JungleLand_ropes_Gfx[];
extern CollisionData JungleLand_ropes_ColH;
extern Gfx JungleLand_railOne_Gfx[];
extern CollisionData JungleLand_railOne_ColH;
extern Gfx JungleLand_railTwo_Gfx[];
extern CollisionData JungleLand_railTwo_ColH;
extern Gfx JungleLand_railThree_Gfx[];
extern CollisionData JungleLand_railThree_ColH;
extern Gfx JungleLand_railFour_Gfx[];
extern CollisionData JungleLand_railFour_ColH;
extern Gfx JungleLand_railFive_Gfx[];
extern CollisionData JungleLand_railFive_ColH;
extern Gfx JungleLand_railSix_Gfx[];
extern CollisionData JungleLand_railSix_ColH;
extern Gfx JungleLand_rail_Gfx[];
extern CollisionData JungleLand_rail_ColH;
extern Gfx JungleLand_ctCrate3_Gfx[];
extern CollisionData JungleLand_ctCrate3_ColH;
extern Gfx JungleLand_logOne_Gfx[];
extern CollisionData JungleLand_logOne_ColH;
extern Gfx JungleLand_fallBridgeSmall2_Gfx[];
extern CollisionData JungleLand_fallBridgeSmall2_ColH;
extern Gfx JungleLand_logSetPiece_Gfx[];
extern CollisionData JungleLand_logSetPiece_ColH;
extern Gfx JungleLand_holeLog_Gfx[];
extern CollisionData JungleLand_holeLog_ColH;
extern Gfx JungleLand_waterfallGroundCollision_Gfx[];
extern CollisionData JungleLand_waterfallGroundCollision_ColH;
extern Gfx JungleLand_waterfallBacksideCollision_Gfx[];
extern CollisionData JungleLand_waterfallBacksideCollision_ColH;
extern Gfx JungleLand_groundCollision_Gfx[];
extern CollisionData JungleLand_groundCollision_ColH;
extern Gfx JungleLand_holeLogBottom_Gfx[];
extern CollisionData JungleLand_holeLogBottom_ColH;
extern Gfx JungleLand_extThree_Gfx[];
extern CollisionData JungleLand_extThree_ColH;
extern Gfx JungleLand_extFour_Gfx[];
extern CollisionData JungleLand_extFour_ColH;
extern Gfx JungleLand_extZero_Gfx[];
extern CollisionData JungleLand_extZero_ColH;
extern Gfx JungleLand_extOne_Gfx[];
extern CollisionData JungleLand_extOne_ColH;
extern Gfx JungleLand_extTwo_Gfx[];
extern CollisionData JungleLand_extTwo_ColH;
extern Gfx JungleLand_rockFloor_Gfx[];
extern CollisionData JungleLand_rockFloor_ColH;
extern Gfx JungleLand_rockFloor2_Gfx[];
extern CollisionData JungleLand_rockFloor2_ColH;
extern Gfx JungleLand_extFive_Gfx[];
extern CollisionData JungleLand_extFive_ColH;
extern Gfx JungleLand_extThreePartTwo_Gfx[];
extern CollisionData JungleLand_extThreePartTwo_ColH;
extern Gfx JungleLand_extFivePartTwo_Gfx[];
extern CollisionData JungleLand_extFivePartTwo_ColH;
extern Gfx JungleLand_extSix_Gfx[];
extern CollisionData JungleLand_extSix_ColH;
extern Gfx JungleLand_extSeven_Gfx[];
extern CollisionData JungleLand_extSeven_ColH;
extern Gfx JungleLand_extEight_Gfx[];
extern CollisionData JungleLand_extEight_ColH;
extern Gfx JungleLand_extEightBridge_Gfx[];
extern CollisionData JungleLand_extEightBridge_ColH;
extern Gfx JungleLand_extNine_Gfx[];
extern CollisionData JungleLand_extNine_ColH;
extern Gfx JungleLand_extTen_Gfx[];
extern CollisionData JungleLand_extTen_ColH;
extern Gfx JungleLand_extEleven_Gfx[];
extern CollisionData JungleLand_extEleven_ColH;
extern Gfx JungleLand_intZero_Gfx[];
extern CollisionData JungleLand_intZero_ColH;
extern Gfx JungleLand_intOne_Gfx[];
extern CollisionData JungleLand_intOne_ColH;
extern Gfx JungleLand_intTwo_Gfx[];
extern CollisionData JungleLand_intTwo_ColH;
extern Gfx JungleLand_intThree_Gfx[];
extern CollisionData JungleLand_intThree_ColH;
extern Gfx JungleLand_intFour_Gfx[];
extern CollisionData JungleLand_intFour_ColH;
extern Gfx JungleLand_intSix_Gfx[];
extern CollisionData JungleLand_intSix_ColH;
extern Gfx JungleLand_intSeven_Gfx[];
extern CollisionData JungleLand_intSeven_ColH;
extern Gfx JungleLand_intFive_Gfx[];
extern CollisionData JungleLand_intFive_ColH;
extern Gfx JungleLand_railFloorOne_Gfx[];
extern CollisionData JungleLand_railFloorOne_ColH;
extern Gfx JungleLand_singleRailTrack_Gfx[];
extern CollisionData JungleLand_singleRailTrack_ColH;
extern Gfx JungleLand_singleRailTrack2_Gfx[];
extern CollisionData JungleLand_singleRailTrack2_ColH;
extern Gfx JungleLand_branchRail_Gfx[];
extern CollisionData JungleLand_branchRail_ColH;
extern Gfx JungleLand_turnRail_Gfx[];
extern CollisionData JungleLand_turnRail_ColH;
extern Gfx JungleLand_singleRailTrack3_Gfx[];
extern CollisionData JungleLand_singleRailTrack3_ColH;
extern Gfx JungleLand_brokenMinecartRail_Gfx[];
extern CollisionData JungleLand_brokenMinecartRail_ColH;
extern Gfx JungleLand_brokenMinecartRail2_Gfx[];
extern CollisionData JungleLand_brokenMinecartRail2_ColH;
extern Gfx JungleLand_minecart_Gfx[];
extern CollisionData JungleLand_minecart_ColH;
extern Gfx JungleLand_doorFrame_Gfx[];
extern CollisionData JungleLand_doorFraMEd_ColH;
extern Gfx JungleLand_doorFrame2_Gfx[];
extern CollisionData JungleLand_doorFrame2_ColH;
extern Gfx JungleLand_fernPlant_Gfx[];
extern CollisionData JungleLand_fernPlant_ColH;
extern Gfx JungleLand_waterfall_Gfx[];
extern CollisionData JungleLand_waterfall_ColH;
extern Gfx JungleLand_water_Gfx[];
extern CollisionData JungleLand_water_ColH;
extern Gfx JungleLand_water2_Gfx[];
extern CollisionData JungleLand_water2_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;

Mtx JungleLand_IMtx1 = IDENTITY;

#include "assets/levelGroup/JungleLand/pointers.lvp.inc.c"

#include "build/assets/levelGroup/JungleLand/rabObjects.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprRabbit.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprFern.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprFern2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprFern3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprFern4.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprFern5.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprFern6.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprFern7.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprTree.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprTree2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom0_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room6_sprRabbit.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room6_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom1_sprFern.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom1_sprFern2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom1_sprFern3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom1_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprFern.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprFern2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprFern3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprFern4.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprFern5.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprFern6.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprTree.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprTree2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprTree3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroomUnk_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom3_sprFern.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom3_sprTree.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom3_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom7_sprFern.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom7_sprFern2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom7_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom12_sprFern.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom12_sprFern2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom12_sprFern3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom12_sprFern4.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom12_sprFern5.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom12_sprFern6.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom12_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom0_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom0_clctCrown2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom0_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom1_clctOHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom1_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom2_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom2_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom3to4_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom5_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom5_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom6_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom6_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom7_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom7_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room0_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room0_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room0_clctRHeart2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room0_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room1_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room1_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room2_clctBigHead.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room2_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room2_clctCrown2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room2_clctCrown3.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room2_clctCrown4.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room2_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room2_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room3_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room3_clctCarrot.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room3_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room3_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room4_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room4_clctRHeart2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room4_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room4_clctCrown2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room5_clctTimeStop.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room4_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room5_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room5_clctCrown2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room5_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room5_clctRHeart2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room5_clctRHeart3.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room5_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room6_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room6_clctOHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room6_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/roomUnk_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/roomUnk_clctRHeart2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/roomUnk_clctRHeart3.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/roomUnk_clctRHeart4.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/roomUnk_clctOHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/roomUnk_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room8_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room8_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room8_clctYHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/room8_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant9.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant10.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant11.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant12.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant13.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant14.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objPlant15.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom1_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom1_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom2_objLog.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom2_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom2_objPlant.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom2_objPlant2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom2_objPlant3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom7_actHedgehog.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom7_actHedgehog2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom7_actHedgehog3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom7_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom9_actHedgehog.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom9_actHedgehog2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom9_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog4.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog5.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog6.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog7.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog8.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actHedgehog9.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom2_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objPole8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objLand2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom3_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom3_actHedgehog.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom3_actHedgehog2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom3_actHedgehog3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom3_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom4_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom4_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom4_objPole2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom4_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objRockFloor.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objPole2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objPole3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objLilypad.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objLilypad2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objLilypad3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objSwampWater.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom5_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom5_sprLilyWave.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom5_sprLilyWave2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom5_sprLilyWave3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom5_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objRockFloor.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objPole2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objPole3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objLilypad.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objLilypad2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objLilypad3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objPole4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objSwampWater.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom6_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom6_sprLilyWave.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom6_sprLilyWave2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom6_sprLilyWave3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/eroom6_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom7_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom7_objLog.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom7_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroomUnk_actFish.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroomUnk_actFish2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroomUnk_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroomUnk2_actFish.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroomUnk2_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objLogBottom.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objLogPlate.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objLogTop.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objHoleLogTop.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objHoleLogBottom.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objHoleLogCollision.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom8_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom9_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom9_objBridge.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom9_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom9_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom8_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom8_clctCrown2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom8_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom8_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom9_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom9_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom10_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom10_clctCrown2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom10_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom11_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom12_clctRHeart.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom11_clctCrown2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom12_clctCrown.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/eroom11to12_clctSTOP.clct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom10_actFish.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom10_actFish2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroom10_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/eroomUnk3_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objWaterfall.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objWaterfallGround.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objWaterfallBack.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objGroundCollision.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objWaterRock.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objWaterRock2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objWaterRock3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom10_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom11_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom11_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom12_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom12_objFrame.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom12_objEntrance.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom12_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom12_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom12_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objPillar.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropOne4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropSix.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropSix2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objCTCrateThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objCTCrateThree2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objCTCrateThree3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objFrameOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objExitSouth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objExitSouthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objExitNorth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objExitNorthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room8_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog4.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog5.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog6.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog7.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog8.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog9.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog10.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog12.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog13.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog14.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog15.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog16.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog17.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog18.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog19.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog20.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog21.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog22.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog23.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog24.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actHedgehog25.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room8_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objLava0.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRail.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropOne4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropThree2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropFour.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropFive.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropSix.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropSix2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropSix3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropSix4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropOne5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRailPropOne6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFallBridge.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFallBridge2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFallBridge3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFallBridge4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFallBridge5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFallBridge6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFallBridge7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWoodBlock.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWoodBlock2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWoodBlock3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWoodBlock4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRopes.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objRopes2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objExitSouth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objExitSouthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objExitNorth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objExitNorthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objFrame.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objPillar.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objUnk.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWoodBlock5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objCTCrateThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWoodBlock6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objWoodBlock7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room0_actHedgehog.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room0_actHedgehog2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room0_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objPillar.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objPlatforms.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objPlatforms2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objPole2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objFrame.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objExitSouth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objExitSouthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objExitWest.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objExitWestShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objWoodBlock.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objWoodBlock2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objWoodBlock3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room1_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room1_actSpiderSpawner.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room1_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objPillar.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objFrameTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropThree2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropTwo2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne9.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objRailPropOne10.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objCTCrateOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objCTCrateTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objCTCrateTwo2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objCTCrateTwo3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objExitEast.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objExitEastShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objExitWest.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objExitWestShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room2_actSpiderSpawner.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room2_actSpiderSpawner2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room2_actSpiderSpawner3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room2_actSpiderSpawner4.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room2_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFrame.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objCTCrateTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWalkingPlankOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWalkingPlankTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWalkingPlankThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWalkingPlankOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWalkingPlankTwo2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objPlatform.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objPlatform2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objPole2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock9.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock10.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock11.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock12.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objWoodBlock13.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropTwo2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropFour.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropFive.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropOne8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objRailPropThree2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeThree2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeThree3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeThree4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeThree5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeThree6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo9.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo10.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo11.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo12.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo13.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo14.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo15.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo16.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo17.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo18.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo19.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFallBridgeTwo20.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objFrame2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objExitEast.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objExitEastShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objExitNorth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objExitNorthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room3_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room3_actSpiderTrio.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room3_actSpiderTrio2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room3_actSpiderTrio3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room3_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objPillar.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objRailPropOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objRailPropOne4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objFrame.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objExitSouth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objExitSouthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objExitNorth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objExitNorthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objDoor.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objDoor2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room4_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room4_actGolem.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room4_actGolem2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room4_actGRSpiderSpawner.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room4_actGRSpiderSpawner2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room4_actGRSpiderSpawner3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room4_actGRSpiderSpawner4.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room4_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/newType/g1.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g2.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g3.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g4.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g5.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g6.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g7.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g8.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g9.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g10.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g11.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g12.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g13.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g14.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g15.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType/g16.ut1.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h1.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h2.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h3.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h4.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h5.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h6.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h7.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h8.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h9.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h10.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h11.ut2.inc.c"

#include "assets/levelGroup/JungleLand/newType2/h12.ut2.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objStartPlatform.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objPlatform.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objCrownPlatform.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objStartSidePlatform.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objCrownEdgePlatform.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailFour.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailFive.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailSix.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailTwo2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailTwo3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailTwo4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailOne4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objBrokenRailOne5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objMinecart.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objMinecart2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne9.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne10.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne11.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne12.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne13.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne14.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropThree2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne15.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropOne16.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objRailPropThree3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objFrame.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objExitSouth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objExitSouthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objExitNorth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objExitNorthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room5_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objWalls.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objLava6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objFloor.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objRailPropOne.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objRailPropOne2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objRailPropThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objRailPropTwo.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objRailPropOne3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objSpinWall.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objSpinWall2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objSpinWall3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objCTCrateThree.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objCTCrateThree2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objFrame.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objExitSouth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objExitSouthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objLoadingZone.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objSomethingElseDoorRelated.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objExitNorth.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objExitNorthShadow.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objLoadingZone2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objSomethingElseDoorRelated2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/room6_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room6_actHedgehog.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room6_actHedgehog2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/room6_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomFallback_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomFallback_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomUnk_actSpiderSpawner.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomUnk_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprLavaFlame.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprLavaFlame2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprLavaFlame3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprLavaFlame4.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprLavaFlame5.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprLavaFlame6.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprLavaFlame7.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/room0_sprSTOP.sprite.inc.c"

#include "build/assets/levelGroup/JungleLand/spriteLib.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room2.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room3.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room4.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room5.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room6.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room7.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room8.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/map.lvmM.inc.c"

#include "assets/levelGroup/JungleLand/map.lvmH.inc.c"

#include "assets/levelGroup/JungleLand/rooms/fallBack.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom0.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom1.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom2.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom3.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom4.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom5.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom6.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom7.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom8.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom9.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom10.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom11.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom12.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoomSTOP.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/scope.lvlScope.inc.c"

#include "assets/levelGroup/JungleLand/header.lvlHdr.inc.c"
Mtx JungleLand_IMtx2 = IDENTITY;

#include "assets/levelGroup/JungleLand/jlScope/jlScope.light.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.vtx.inc.c"
Mtx JungleLand_IMtx3 = IDENTITY;
unsigned char JungleLand_Pad1[] = FILEPAD;
unsigned char JungleLand_lilypad_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/lilypad.ci4.png.inc.c"
};
unsigned char JungleLand_Pad2[] = FILEPAD;
unsigned char JungleLand_lilypad_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/lilypad.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/lilypad/lilypad.gfx.inc.c"

#include "assets/levelGroup/JungleLand/vine/vine.vtx.inc.c"
Mtx JungleLand_IMtx4 = IDENTITY;
unsigned char JungleLand_vine_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/vine.ci8.png.inc.c"
};
unsigned char JungleLand_vine_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/vine.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/vine/vine.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.vtx.inc.c"
Mtx JungleLand_IMtx5 = IDENTITY;

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.gfx.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.vtx.inc.c"
Mtx JungleLand_IMtx6 = IDENTITY;

#include "assets/levelGroup/JungleLand/unkLog/unkLog.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.vtx.inc.c"
Mtx JungleLand_IMtx7 = IDENTITY;
unsigned char JungleLand_Pad3[] = FILEPAD;
unsigned char JungleLand_fallenLogStump_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/fallenLogStump.ci8.png.inc.c"
};
unsigned char JungleLand_Pad4[] = FILEPAD;
unsigned char JungleLand_fallenLogStump_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/fallenLogStump.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.gfx.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.vtx.inc.c"
Mtx JungleLand_IMtx8 = IDENTITY;

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.vtx.inc.c"
Mtx JungleLand_IMtx9 = IDENTITY;

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extEntranceDoorFrame/extEntranceDoorFrame.vtx.inc.c"
Mtx JungleLand_IMtx10 = IDENTITY;

#include "assets/levelGroup/JungleLand/extEntranceDoorFrame/extEntranceDoorFrame.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.vtx.inc.c"
Mtx JungleLand_IMtx11 = IDENTITY;
unsigned char JungleLand_fallBridge_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/fallBridge.ci8.png.inc.c"
};
unsigned char JungleLand_fallBridge_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/fallBridge.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.vtx.inc.c"
Mtx JungleLand_IMtx12 = IDENTITY;
unsigned char JungleLand_Pad5[] = FILEPAD;
unsigned char JungleLand_ctCrate1_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/ctCrate1.ci4.png.inc.c"
};
unsigned char JungleLand_Pad6[] = FILEPAD;
unsigned char JungleLand_ctCrate1_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/ctCrate1.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad7[] = FILEPAD;
unsigned char JungleLand_ctCrate2_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/ctCrate2.ci4.png.inc.c"
};
unsigned char JungleLand_Pad8[] = FILEPAD;
unsigned char JungleLand_ctCrate2_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/ctCrate2.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad9[] = FILEPAD;
unsigned char JungleLand_ctCrate3_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/ctCrate3.ci4.png.inc.c"
};
unsigned char JungleLand_Pad10[] = FILEPAD;
unsigned char JungleLand_ctCrate3_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/ctCrate3.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.vtx.inc.c"
Mtx JungleLand_IMtx13 = IDENTITY;

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.vtx.inc.c"
Mtx JungleLand_IMtx14 = IDENTITY;

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.vtx.inc.c"
Mtx JungleLand_IMtx15 = IDENTITY;

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.vtx.inc.c"
Mtx JungleLand_IMtx16 = IDENTITY;

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.vtx.inc.c"
Mtx JungleLand_IMtx17 = IDENTITY;

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.vtx.inc.c"
Mtx JungleLand_IMtx18 = IDENTITY;
unsigned char JungleLand_singularPlank_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/singularPlank.ci8.png.inc.c"
};
unsigned char JungleLand_singularPlank_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/singularPlank.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.vtx.inc.c"
Mtx JungleLand_IMtx19 = IDENTITY;

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.vtx.inc.c"
Mtx JungleLand_IMtx20 = IDENTITY;

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.vtx.inc.c"
Mtx JungleLand_IMtx21 = IDENTITY;

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.vtx.inc.c"
Mtx JungleLand_IMtx22 = IDENTITY;

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.vtx.inc.c"
Mtx JungleLand_IMtx23 = IDENTITY;
unsigned char JungleLand_Pad11[] = FILEPAD;
unsigned char JungleLand_lava_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/lava.ci8.png.inc.c"
};
unsigned char JungleLand_Pad12[] = FILEPAD;
unsigned char JungleLand_lava_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/lava.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.vtx.inc.c"
Mtx JungleLand_IMtx24 = IDENTITY;

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.vtx.inc.c"
Mtx JungleLand_IMtx25 = IDENTITY;

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.vtx.inc.c"
Mtx JungleLand_IMtx26 = IDENTITY;

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.vtx.inc.c"
Mtx JungleLand_IMtx27 = IDENTITY;
unsigned char JungleLand_Pad13[] = FILEPAD;
unsigned char JungleLand_roomSixCrownEdgePlatform_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/roomSixCrownEdgePlatform.ci8.png.inc.c"
};
unsigned char JungleLand_Pad14[] = FILEPAD;
unsigned char JungleLand_roomSixCrownEdgePlatform_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/roomSixCrownEdgePlatform.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.vtx.inc.c"
Mtx JungleLand_IMtx28 = IDENTITY;

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.gfx.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.vtx.inc.c"
Mtx JungleLand_IMtx29 = IDENTITY;

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ropes/ropes.vtx.inc.c"
Mtx JungleLand_IMtx30 = IDENTITY;
unsigned char JungleLand_Pad15[] = FILEPAD;
unsigned char JungleLand_rope_rgba16_PNG[] = {
#include "build/assets/levelGroup/JungleLand/rope.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/ropes/ropes.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railOne/railOne.vtx.inc.c"
Mtx JungleLand_IMtx31 = IDENTITY;
unsigned char JungleLand_Pad16[] = FILEPAD;
unsigned char JungleLand_railColor_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/railColor.ci4.png.inc.c"
};
unsigned char JungleLand_Pad17[] = FILEPAD;
unsigned char JungleLand_railColor_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/railColor.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/railOne/railOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.vtx.inc.c"
Mtx JungleLand_IMtx32 = IDENTITY;

#include "assets/levelGroup/JungleLand/railTwo/railTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.vtx.inc.c"
Mtx JungleLand_IMtx33 = IDENTITY;

#include "assets/levelGroup/JungleLand/railThree/railThree.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.vtx.inc.c"
Mtx JungleLand_IMtx34 = IDENTITY;

#include "assets/levelGroup/JungleLand/railFour/railFour.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.vtx.inc.c"
Mtx JungleLand_IMtx35 = IDENTITY;

#include "assets/levelGroup/JungleLand/railFive/railFive.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.vtx.inc.c"
Mtx JungleLand_IMtx36 = IDENTITY;

#include "assets/levelGroup/JungleLand/railSix/railSix.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.vtx.inc.c"
Mtx JungleLand_IMtx37 = IDENTITY;

#include "assets/levelGroup/JungleLand/rail/rail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.vtx.inc.c"
Mtx JungleLand_IMtx38 = IDENTITY;

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.vtx.inc.c"
Mtx JungleLand_IMtx39 = IDENTITY;

#include "assets/levelGroup/JungleLand/logOne/logOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.vtx.inc.c"
Mtx JungleLand_IMtx40 = IDENTITY;

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.vtx.inc.c"
Mtx JungleLand_IMtx41 = IDENTITY;

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.gfx.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.vtx.inc.c"
Mtx JungleLand_IMtx42 = IDENTITY;

#include "assets/levelGroup/JungleLand/holeLog/holeLog.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.vtx.inc.c"
Mtx JungleLand_IMtx43 = IDENTITY;

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.vtx.inc.c"
Mtx JungleLand_IMtx44 = IDENTITY;

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.gfx.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.vtx.inc.c"
Mtx JungleLand_IMtx45 = IDENTITY;

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.gfx.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.vtx.inc.c"
Mtx JungleLand_IMtx46 = IDENTITY;

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extThree/extThree.vtx.inc.c"
Mtx JungleLand_IMtx47 = IDENTITY;
unsigned char JungleLand_Pad18[] = FILEPAD;
unsigned char JungleLand_ext3Wall_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/ext3Wall.ci8.png.inc.c"
};
unsigned char JungleLand_Pad19[] = FILEPAD;
unsigned char JungleLand_ext3Wall_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/ext3Wall.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/extThree/extThree.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.vtx.inc.c"
Mtx JungleLand_IMtx48 = IDENTITY;

#include "assets/levelGroup/JungleLand/extFour/extFour.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.vtx.inc.c"
Mtx JungleLand_IMtx49 = IDENTITY;

#include "assets/levelGroup/JungleLand/extZero/extZero.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.vtx.inc.c"
Mtx JungleLand_IMtx50 = IDENTITY;

#include "assets/levelGroup/JungleLand/extOne/extOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.vtx.inc.c"
Mtx JungleLand_IMtx51 = IDENTITY;

#include "assets/levelGroup/JungleLand/extTwo/extTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.vtx.inc.c"
Mtx JungleLand_IMtx52 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.vtx.inc.c"
Mtx JungleLand_IMtx53 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.vtx.inc.c"
Mtx JungleLand_IMtx54 = IDENTITY;

#include "assets/levelGroup/JungleLand/extFive/extFive.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.vtx.inc.c"
Mtx JungleLand_IMtx55 = IDENTITY;

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.vtx.inc.c"
Mtx JungleLand_IMtx56 = IDENTITY;

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.vtx.inc.c"
Mtx JungleLand_IMtx57 = IDENTITY;

#include "assets/levelGroup/JungleLand/extSix/extSix.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.vtx.inc.c"
Mtx JungleLand_IMtx58 = IDENTITY;

#include "assets/levelGroup/JungleLand/extSeven/extSeven.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.vtx.inc.c"
Mtx JungleLand_IMtx59 = IDENTITY;

#include "assets/levelGroup/JungleLand/extEight/extEight.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.vtx.inc.c"
Mtx JungleLand_IMtx60 = IDENTITY;

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.vtx.inc.c"
Mtx JungleLand_IMtx61 = IDENTITY;

#include "assets/levelGroup/JungleLand/extNine/extNine.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.vtx.inc.c"
Mtx JungleLand_IMtx62 = IDENTITY;

#include "assets/levelGroup/JungleLand/extTen/extTen.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.vtx.inc.c"
Mtx JungleLand_IMtx63 = IDENTITY;

#include "assets/levelGroup/JungleLand/extEleven/extEleven.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intZero/intZero.vtx.inc.c"
Mtx JungleLand_IMtx64 = IDENTITY;
unsigned char JungleLand_Pad20[] = FILEPAD;
unsigned char JungleLand_lavaWall_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/lavaWall.ci8.png.inc.c"
};
unsigned char JungleLand_Pad21[] = FILEPAD;
unsigned char JungleLand_lavaWall_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/lavaWall.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/intZero/intZero.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.vtx.inc.c"
Mtx JungleLand_IMtx65 = IDENTITY;

#include "assets/levelGroup/JungleLand/intOne/intOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.vtx.inc.c"
Mtx JungleLand_IMtx66 = IDENTITY;

#include "assets/levelGroup/JungleLand/intTwo/intTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.vtx.inc.c"
Mtx JungleLand_IMtx67 = IDENTITY;

#include "assets/levelGroup/JungleLand/intThree/intThree.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.vtx.inc.c"
Mtx JungleLand_IMtx68 = IDENTITY;

#include "assets/levelGroup/JungleLand/intFour/intFour.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.vtx.inc.c"
Mtx JungleLand_IMtx69 = IDENTITY;

#include "assets/levelGroup/JungleLand/intSix/intSix.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.vtx.inc.c"
Mtx JungleLand_IMtx70 = IDENTITY;

#include "assets/levelGroup/JungleLand/intSeven/intSeven.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.vtx.inc.c"
Mtx JungleLand_IMtx71 = IDENTITY;

#include "assets/levelGroup/JungleLand/intFive/intFive.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.vtx.inc.c"
Mtx JungleLand_IMtx72 = IDENTITY;
unsigned char JungleLand_railTrack_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/railTrack.ci8.png.inc.c"
};
unsigned char JungleLand_railTrack_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/railTrack.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.vtx.inc.c"
Mtx JungleLand_IMtx73 = IDENTITY;
unsigned char JungleLand_singleRailTrack_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/singleRailTrack.ci8.png.inc.c"
};
unsigned char JungleLand_singleRailTrack_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/singleRailTrack.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.vtx.inc.c"
Mtx JungleLand_IMtx74 = IDENTITY;
unsigned char JungleLand_singleRailTrack2_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/singleRailTrack2.ci8.png.inc.c"
};
unsigned char JungleLand_singleRailTrack2_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/singleRailTrack2.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/branchRail/branchRail.vtx.inc.c"
Mtx JungleLand_IMtx75 = IDENTITY;
unsigned char JungleLand_branchRail_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/branchRail.ci8.png.inc.c"
};
unsigned char JungleLand_branchRail_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/branchRail.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/branchRail/branchRail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/turnRail/turnRail.vtx.inc.c"
Mtx JungleLand_IMtx76 = IDENTITY;
unsigned char JungleLand_turnRail_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/turnRail.ci8.png.inc.c"
};
unsigned char JungleLand_turnRail_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/turnRail.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/turnRail/turnRail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.vtx.inc.c"
Mtx JungleLand_IMtx77 = IDENTITY;

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.vtx.inc.c"
Mtx JungleLand_IMtx78 = IDENTITY;

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.vtx.inc.c"
Mtx JungleLand_IMtx79 = IDENTITY;

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/minecart/minecart.vtx.inc.c"
Mtx JungleLand_IMtx80 = IDENTITY;
unsigned char JungleLand_Pad22[] = FILEPAD;
unsigned char JungleLand_planks_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/planks.ci4.png.inc.c"
};
unsigned char JungleLand_Pad23[] = FILEPAD;
unsigned char JungleLand_planks_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/planks.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad24[] = FILEPAD;
unsigned char JungleLand_caveWood_i4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/caveWood.i4.png.inc.c"
};

#include "assets/levelGroup/JungleLand/minecart/minecart.gfx.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.vtx.inc.c"
Mtx JungleLand_IMtx81 = IDENTITY;
unsigned char JungleLand_Pad25[] = FILEPAD;
unsigned char JungleLand_topper_rgba16_PNG[] = {
#include "build/assets/levelGroup/JungleLand/topper.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.gfx.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.vtx.inc.c"
Mtx JungleLand_IMtx82 = IDENTITY;

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.vtx.inc.c"
Mtx JungleLand_IMtx83 = IDENTITY;
unsigned char JungleLand_fernPlant_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/fernPlant.ci8.png.inc.c"
};
unsigned char JungleLand_fernPlant_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/fernPlant.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfall/waterfall.vtx.inc.c"
Mtx JungleLand_IMtx84 = IDENTITY;
unsigned char JungleLand_Pad26[] = FILEPAD;
unsigned char JungleLand_water_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/water.ci4.png.inc.c"
};
unsigned char JungleLand_Pad27[] = FILEPAD;
unsigned char JungleLand_water_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/water.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/waterfall/waterfall.gfx.inc.c"

#include "assets/levelGroup/JungleLand/water/water.vtx.inc.c"
Mtx JungleLand_IMtx85 = IDENTITY;
unsigned char JungleLand_Pad28[] = FILEPAD;
unsigned char JungleLand_swampWater_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/swampWater.ci4.png.inc.c"
};
unsigned char JungleLand_Pad29[] = FILEPAD;
unsigned char JungleLand_swampWater_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/swampWater.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/water/water.gfx.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.vtx.inc.c"
Mtx JungleLand_IMtx86 = IDENTITY;

#include "assets/levelGroup/JungleLand/water2/water2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colV.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colT.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colS.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colH.inc.c"

#include "assets/levelGroup/JungleLand/vine/vine.colV.inc.c"

#include "assets/levelGroup/JungleLand/vine/vine.colT.inc.c"

#include "assets/levelGroup/JungleLand/vine/vine.colS.inc.c"

#include "assets/levelGroup/JungleLand/vine/vine.colH.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colV.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colT.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colS.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colH.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.colV.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.colT.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.colS.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.colH.inc.c"

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colV.inc.c"

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colT.inc.c"

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colS.inc.c"

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colH.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colV.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colT.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colS.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colH.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colV.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colT.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colS.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colH.inc.c"

#include "assets/levelGroup/JungleLand/extEntranceDoorFrame/extEntranceDoorFrame.colV.inc.c"

#include "assets/levelGroup/JungleLand/extEntranceDoorFrame/extEntranceDoorFrame.colT.inc.c"

#include "assets/levelGroup/JungleLand/extEntranceDoorFrame/extEntranceDoorFrame.colS.inc.c"

#include "assets/levelGroup/JungleLand/extEntranceDoorFrame/extEntranceDoorFrame.colH.inc.c"

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colV.inc.c"

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colT.inc.c"

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colS.inc.c"

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colH.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colV.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colT.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colS.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colH.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colV.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colT.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colS.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colH.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colV.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colT.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colS.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colH.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colV.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colT.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colS.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colH.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colV.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colT.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colS.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colH.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colV.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colT.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colS.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colH.inc.c"

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colV.inc.c"

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colT.inc.c"

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colS.inc.c"

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colH.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colV.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colT.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colS.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colH.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colV.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colT.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colS.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colH.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colV.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colT.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colS.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colH.inc.c"

#include "assets/levelGroup/JungleLand/ropes/ropes.colV.inc.c"

#include "assets/levelGroup/JungleLand/ropes/ropes.colT.inc.c"

#include "assets/levelGroup/JungleLand/ropes/ropes.colS.inc.c"

#include "assets/levelGroup/JungleLand/ropes/ropes.colH.inc.c"

#include "assets/levelGroup/JungleLand/railOne/railOne.colV.inc.c"

#include "assets/levelGroup/JungleLand/railOne/railOne.colT.inc.c"

#include "assets/levelGroup/JungleLand/railOne/railOne.colS.inc.c"

#include "assets/levelGroup/JungleLand/railOne/railOne.colH.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.colV.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.colT.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.colS.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.colH.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.colV.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.colT.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.colS.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.colH.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.colV.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.colT.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.colS.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.colH.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.colV.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.colT.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.colS.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.colH.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.colV.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.colT.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.colS.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.colH.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.colV.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.colT.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.colS.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.colH.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colV.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colT.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colS.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colH.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.colV.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.colT.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.colS.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.colH.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colV.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colT.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colS.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colH.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colV.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colT.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colS.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colH.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.colV.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.colT.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.colS.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.colH.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colV.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colT.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colS.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colH.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colV.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colT.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colS.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colH.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colV.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colT.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colS.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colH.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colV.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colT.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colS.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colH.inc.c"

#include "assets/levelGroup/JungleLand/extThree/extThree.colV.inc.c"

#include "assets/levelGroup/JungleLand/extThree/extThree.colT.inc.c"

#include "assets/levelGroup/JungleLand/extThree/extThree.colS.inc.c"

#include "assets/levelGroup/JungleLand/extThree/extThree.colH.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.colV.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.colT.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.colS.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.colH.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.colV.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.colT.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.colS.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.colH.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.colV.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.colT.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.colS.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.colH.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.colV.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.colT.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.colS.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.colH.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colV.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colT.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colS.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colH.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colV.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colT.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colS.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colH.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.colV.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.colT.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.colS.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.colH.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colV.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colT.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colS.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colH.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colV.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colT.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colS.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colH.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.colV.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.colT.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.colS.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.colH.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.colV.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.colT.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.colS.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.colH.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.colV.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.colT.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.colS.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.colH.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colV.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colT.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colS.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colH.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.colV.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.colT.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.colS.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.colH.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.colV.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.colT.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.colS.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.colH.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.colV.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.colT.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.colS.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.colH.inc.c"

#include "assets/levelGroup/JungleLand/intZero/intZero.colV.inc.c"

#include "assets/levelGroup/JungleLand/intZero/intZero.colT.inc.c"

#include "assets/levelGroup/JungleLand/intZero/intZero.colS.inc.c"

#include "assets/levelGroup/JungleLand/intZero/intZero.colH.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.colV.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.colT.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.colS.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.colH.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.colV.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.colT.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.colS.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.colH.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.colV.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.colT.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.colS.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.colH.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.colV.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.colT.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.colS.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.colH.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.colV.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.colT.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.colS.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.colH.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.colV.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.colT.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.colS.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.colH.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.colV.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.colT.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.colS.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.colH.inc.c"

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colV.inc.c"

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colT.inc.c"

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colS.inc.c"

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colH.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colV.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colT.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colS.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colH.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colV.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colT.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colS.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colH.inc.c"

#include "assets/levelGroup/JungleLand/branchRail/branchRail.colV.inc.c"

#include "assets/levelGroup/JungleLand/branchRail/branchRail.colT.inc.c"

#include "assets/levelGroup/JungleLand/branchRail/branchRail.colS.inc.c"

#include "assets/levelGroup/JungleLand/branchRail/branchRail.colH.inc.c"

#include "assets/levelGroup/JungleLand/turnRail/turnRail.colV.inc.c"

#include "assets/levelGroup/JungleLand/turnRail/turnRail.colT.inc.c"

#include "assets/levelGroup/JungleLand/turnRail/turnRail.colS.inc.c"

#include "assets/levelGroup/JungleLand/turnRail/turnRail.colH.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colV.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colT.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colS.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colH.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colV.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colT.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colS.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colH.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colV.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colT.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colS.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colH.inc.c"

#include "assets/levelGroup/JungleLand/minecart/minecart.colV.inc.c"

#include "assets/levelGroup/JungleLand/minecart/minecart.colT.inc.c"

#include "assets/levelGroup/JungleLand/minecart/minecart.colS.inc.c"

#include "assets/levelGroup/JungleLand/minecart/minecart.colH.inc.c"

#include "assets/levelGroup/JungleLand/doorFraMEd/doorFraMEd.colV.inc.c"

#include "assets/levelGroup/JungleLand/doorFraMEd/doorFraMEd.colT.inc.c"

#include "assets/levelGroup/JungleLand/doorFraMEd/doorFraMEd.colS.inc.c"

#include "assets/levelGroup/JungleLand/doorFraMEd/doorFraMEd.colH.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colV.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colT.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colS.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colH.inc.c"

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colV.inc.c"

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colT.inc.c"

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colS.inc.c"

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colH.inc.c"

#include "assets/levelGroup/JungleLand/waterfall/waterfall.colV.inc.c"

#include "assets/levelGroup/JungleLand/waterfall/waterfall.colT.inc.c"

#include "assets/levelGroup/JungleLand/waterfall/waterfall.colS.inc.c"

#include "assets/levelGroup/JungleLand/waterfall/waterfall.colH.inc.c"

#include "assets/levelGroup/JungleLand/water/water.colV.inc.c"

#include "assets/levelGroup/JungleLand/water/water.colT.inc.c"

#include "assets/levelGroup/JungleLand/water/water.colS.inc.c"

#include "assets/levelGroup/JungleLand/water/water.colH.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.colV.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.colT.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.colS.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.colH.inc.c"
s32 alignment_Pad_JL[] = {0, 0};

Mtx JungleLand_IMtx87 = IDENTITY;

#include "assets/levelGroup/JungleLand/jlScope2/jlScope2.light.inc.c"

#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.vtx.inc.c"
Mtx JungleLand_IMtx88 = IDENTITY;
unsigned char JungleLand_Pad30[] = FILEPAD;
unsigned char JungleLand_golem_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/golem.ci4.png.inc.c"
};
unsigned char JungleLand_Pad31[] = FILEPAD;
unsigned char JungleLand_golem_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/golem.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad32[] = FILEPAD;
unsigned char JungleLand_golemFace_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/golemFace.ci8.png.inc.c"
};
unsigned char JungleLand_Pad33[] = FILEPAD;
unsigned char JungleLand_golemFace_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/golemFace.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.vtx.inc.c"
Mtx JungleLand_IMtx89 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.vtx.inc.c"
Mtx JungleLand_IMtx90 = IDENTITY;
unsigned char JungleLand_Pad34[] = FILEPAD;
unsigned char JungleLand_rock2_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/rock2.ci4.png.inc.c"
};
unsigned char JungleLand_Pad35[] = FILEPAD;
unsigned char JungleLand_rock2_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/rock2.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad36[] = FILEPAD;
unsigned char JungleLand_rock3_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/rock3.ci4.png.inc.c"
};
unsigned char JungleLand_Pad37[] = FILEPAD;
unsigned char JungleLand_rock3_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/rock3.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad38[] = FILEPAD;
unsigned char JungleLand_rock4_ci4_PNG[] = {
#include "build/assets/levelGroup/JungleLand/rock4.ci4.png.inc.c"
};
unsigned char JungleLand_Pad39[] = FILEPAD;
unsigned char JungleLand_rock4_ci4_PAL[] = {
#include "build/assets/levelGroup/JungleLand/rock4.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.vtx.inc.c"
Mtx JungleLand_IMtx91 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.vtx.inc.c"
Mtx JungleLand_IMtx92 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.vtx.inc.c"
Mtx JungleLand_IMtx93 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.vtx.inc.c"
Mtx JungleLand_IMtx94 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.vtx.inc.c"
Mtx JungleLand_IMtx95 = IDENTITY;

#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.gfx.inc.c"
Mtx JungleLand_IMtx96 = IDENTITY;

#include "assets/levelGroup/JungleLand/unkunk.gfx.inc.c"

#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.vtx.inc.c"
Mtx JungleLand_IMtx97 = IDENTITY;
unsigned char JungleLand_Pad40[] = FILEPAD;
unsigned char JungleLand_spiderRock_ci8_PNG[] = {
#include "build/assets/levelGroup/JungleLand/spiderRock.ci8.png.inc.c"
};
unsigned char JungleLand_Pad41[] = FILEPAD;
unsigned char JungleLand_spiderRock_ci8_PAL[] = {
#include "build/assets/levelGroup/JungleLand/spiderRock.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.gfx.inc.c"
Mtx JungleLand_IMtx98 = IDENTITY;

#include "assets/levelGroup/JungleLand/unkunk2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fish/fish.vtx.inc.c"
Mtx JungleLand_IMtx99 = IDENTITY;
unsigned char JungleLand_Pad42[] = FILEPAD;
unsigned char JungleLand_fish_rgba16_PNG[] = {
#include "build/assets/levelGroup/JungleLand/fish.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/fish/fish.gfx.inc.c"
Mtx JungleLand_IMtx100 = IDENTITY;

#include "assets/levelGroup/JungleLand/unkunk3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fishTail/fishTail.vtx.inc.c"
Mtx JungleLand_IMtx101 = IDENTITY;
unsigned char JungleLand_Pad43[] = FILEPAD;
unsigned char JungleLand_fishTail_rgba16_PNG[] = {
#include "build/assets/levelGroup/JungleLand/fishTail.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/fishTail/fishTail.gfx.inc.c"
Mtx JungleLand_IMtx102 = IDENTITY;

#include "assets/levelGroup/JungleLand/unkunk4.gfx.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemSleep.animH.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemSleep.animArr.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemSleepPointers.animP.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemAttack.animH.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemAttack.animArr.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemAttackPointers.animP.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/spiderRock/spiderRockInit.animH.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/spiderRock/spiderRockInit.animArr.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/spiderRock/spiderRockInitPointers.animP.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishHeadInit.animH.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishHeadInit.animArr.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishHeadInitPointers.animP.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishTailInit.animH.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishTailInit.animArr.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishTailInitPointers.animP.inc.c"

s32 alignment_Pad_JL2[] = {0, 0};
