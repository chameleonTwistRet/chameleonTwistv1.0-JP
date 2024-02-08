#include "common.h"
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

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

extern Gfx Global_unk3_Gfx[];
extern CollisionData Global_unk3_ColH;
extern Gfx Global_unk4_Gfx[];
extern CollisionData Global_unk4_ColH;
extern Gfx Global_unk5_Gfx[];
extern CollisionData Global_unk5_ColH;
extern Gfx Global_unk6_Gfx[];
extern CollisionData Global_unk6_ColH;
extern Gfx Global_unk7_Gfx[];
extern CollisionData Global_unk7_ColH;
extern Gfx Global_unk8_Gfx[];
extern CollisionData Global_unk8_ColH;
extern Gfx Global_unk9_Gfx[];
extern CollisionData Global_unk9_ColH;
extern Gfx Global_unkA_Gfx[];
extern CollisionData Global_unkA_ColH;
extern Gfx Global_unkB_Gfx[];
extern CollisionData Global_unkB_ColH;
extern Gfx Global_unkC_Gfx[];
extern CollisionData Global_unkC_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern CollisionData Global_ALSpinDoor_ColH;
extern Gfx Global_unkD_Gfx[];
extern CollisionData Global_unkD_ColH;
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
extern Gfx Global_unkE_Gfx[];
extern CollisionData Global_unkE_ColH;
extern Gfx Global_unkF_Gfx[];
extern CollisionData Global_unkF_ColH;
extern Gfx Global_unk10_Gfx[];
extern CollisionData Global_unk10_ColH;
extern Gfx Global_Door1_Gfx[];
extern CollisionData Global_Door1_ColH;
extern Gfx Global_unk12_Gfx[];
extern CollisionData Global_unk12_ColH;
extern Gfx Global_unk13_Gfx[];
extern CollisionData Global_unk13_ColH;
extern Gfx Global_unk14_Gfx[];
extern CollisionData Global_unk14_ColH;
extern Gfx Global_unk15_Gfx[];
extern CollisionData Global_unk15_ColH;
extern Gfx Global_unk16_Gfx[];
extern CollisionData Global_unk16_ColH;
extern Gfx Global_unk17_Gfx[];
extern CollisionData Global_unk17_ColH;
extern Gfx Global_unk18_Gfx[];
extern CollisionData Global_unk18_ColH;
extern Gfx Global_unk19_Gfx[];
extern CollisionData Global_unk19_ColH;
extern Gfx Global_unk1A_Gfx[];
extern CollisionData Global_unk1A_ColH;
extern Gfx Global_unk1B_Gfx[];
extern CollisionData Global_unk1B_ColH;
extern Gfx Global_unk1C_Gfx[];
extern CollisionData Global_unk1C_ColH;
extern Gfx Global_unk1D_Gfx[];
extern CollisionData Global_unk1D_ColH;
extern Gfx Global_unk1E_Gfx[];
extern CollisionData Global_unk1E_ColH;
extern Gfx JungleLand_lilypad_Gfx[];
extern CollisionData JungleLand_lilypad_ColH;
extern Gfx JungleLand_vine_Gfx[];
extern CollisionData JungleLand_unkerer_ColH;
extern Gfx JungleLand_fallenCrownLog_Gfx[];
extern CollisionData JungleLand_vine_ColH;
extern Gfx JungleLand_unkLog_Gfx[];
extern CollisionData JungleLand_fallenCrownLog_ColH;
extern Gfx JungleLand_fallenLogStump_Gfx[];
extern CollisionData JungleLand_unkLog_ColH;
extern Gfx JungleLand_logTunnel_Gfx[];
extern CollisionData JungleLand_fallenLogStump_ColH;
extern Gfx JungleLand_waterfallRock_Gfx[];
extern CollisionData JungleLand_logTunnel_ColH;
extern Gfx JungleLand_unk1_Gfx[];
extern CollisionData JungleLand_waterfallRock_ColH;
extern Gfx JungleLand_fallBridge_Gfx[];
extern CollisionData JungleLand_unk1_ColH;
extern Gfx JungleLand_ctCrate_Gfx[];
extern CollisionData JungleLand_fallBridge_ColH;
extern Gfx JungleLand_ctCrate2_Gfx[];
extern CollisionData JungleLand_ctCrate_ColH;
extern Gfx JungleLand_walkingPlank_Gfx[];
extern CollisionData JungleLand_ctCrate2_ColH;
extern Gfx JungleLand_walkingPlank2_Gfx[];
extern CollisionData JungleLand_walkingPlank_ColH;
extern Gfx JungleLand_walkingPlank3_Gfx[];
extern CollisionData JungleLand_walkingPlank2_ColH;
extern Gfx JungleLand_walkingPlank4_Gfx[];
extern CollisionData JungleLand_walkingPlank3_ColH;
extern Gfx JungleLand_singularPlank_Gfx[];
extern CollisionData JungleLand_walkingPlank4_ColH;
extern Gfx JungleLand_roomSixStartPlatform_Gfx[];
extern CollisionData JungleLand_singularPlank_ColH;
extern Gfx JungleLand_cavePlatform_Gfx[];
extern CollisionData JungleLand_roomSixStartPlatform_ColH;
extern Gfx JungleLand_roomSixCrownPlatform_Gfx[];
extern CollisionData JungleLand_cavePlatform_ColH;
extern Gfx JungleLand_roomSixSidePlatform_Gfx[];
extern CollisionData JungleLand_roomSixCrownPlatform_ColH;
extern Gfx JungleLand_roomSevenLava_Gfx[];
extern CollisionData JungleLand_roomSixSidePlatform_ColH;
extern Gfx JungleLand_roomSevenFloor_Gfx[];
extern CollisionData JungleLand_roomSevenLava_ColH;
extern Gfx JungleLand_roomZeroLava_Gfx[];
extern CollisionData JungleLand_roomSevenFloor_ColH;
extern Gfx JungleLand_roomOnePlatform_Gfx[];
extern CollisionData JungleLand_roomZeroLava_ColH;
extern Gfx JungleLand_roomSixCrownEdgePlatform_Gfx[];
extern CollisionData JungleLand_roomOnePlatform_ColH;
extern Gfx JungleLand_roomSevenSpinRing_Gfx[];
extern CollisionData JungleLand_roomSixCrownEdgePlatform_ColH;
extern Gfx JungleLand_woodBlock_Gfx[];
extern CollisionData JungleLand_roomSevenSpinRing_ColH;
extern Gfx JungleLand_ropes_Gfx[];
extern CollisionData JungleLand_woodBlock_ColH;
extern Gfx JungleLand_railOne_Gfx[];
extern CollisionData JungleLand_ropes_ColH;
extern Gfx JungleLand_railTwo_Gfx[];
extern CollisionData JungleLand_railOne_ColH;
extern Gfx JungleLand_railThree_Gfx[];
extern CollisionData JungleLand_railTwo_ColH;
extern Gfx JungleLand_railFour_Gfx[];
extern CollisionData JungleLand_railThree_ColH;
extern Gfx JungleLand_railFive_Gfx[];
extern CollisionData JungleLand_railFour_ColH;
extern Gfx JungleLand_railSix_Gfx[];
extern CollisionData JungleLand_railFive_ColH;
extern Gfx JungleLand_rail_Gfx[];
extern CollisionData JungleLand_railSix_ColH;
extern Gfx JungleLand_ctCrate3_Gfx[];
extern CollisionData JungleLand_rail_ColH;
extern Gfx JungleLand_logOne_Gfx[];
extern CollisionData JungleLand_ctCrate3_ColH;
extern Gfx JungleLand_fallBridgeSmall2_Gfx[];
extern CollisionData JungleLand_logOne_ColH;
extern Gfx JungleLand_logSetPiece_Gfx[];
extern CollisionData JungleLand_fallBridgeSmall2_ColH;
extern Gfx JungleLand_holeLog_Gfx[];
extern CollisionData JungleLand_logSetPiece_ColH;
extern Gfx JungleLand_waterfallGroundCollision_Gfx[];
extern CollisionData JungleLand_holeLog_ColH;
extern Gfx JungleLand_waterfallBacksideCollision_Gfx[];
extern CollisionData JungleLand_waterfallGroundCollision_ColH;
extern Gfx JungleLand_groundCollision_Gfx[];
extern CollisionData JungleLand_waterfallBacksideCollision_ColH;
extern Gfx JungleLand_holeLogBottom_Gfx[];
extern CollisionData JungleLand_groundCollision_ColH;
extern Gfx JungleLand_extThree_Gfx[];
extern CollisionData JungleLand_holeLogBottom_ColH;
extern Gfx JungleLand_extFour_Gfx[];
extern CollisionData JungleLand_extThree_ColH;
extern Gfx JungleLand_extZero_Gfx[];
extern CollisionData JungleLand_extFour_ColH;
extern Gfx JungleLand_extOne_Gfx[];
extern CollisionData JungleLand_extZero_ColH;
extern Gfx JungleLand_extTwo_Gfx[];
extern CollisionData JungleLand_extOne_ColH;
extern Gfx JungleLand_rockFloor_Gfx[];
extern CollisionData JungleLand_extTwo_ColH;
extern Gfx JungleLand_rockFloor2_Gfx[];
extern CollisionData JungleLand_rockFloor_ColH;
extern Gfx JungleLand_extFive_Gfx[];
extern CollisionData JungleLand_rockFloor2_ColH;
extern Gfx JungleLand_extThreePartTwo_Gfx[];
extern CollisionData JungleLand_extFive_ColH;
extern Gfx JungleLand_extFivePartTwo_Gfx[];
extern CollisionData JungleLand_extThreePartTwo_ColH;
extern Gfx JungleLand_extSix_Gfx[];
extern CollisionData JungleLand_extFivePartTwo_ColH;
extern Gfx JungleLand_extSeven_Gfx[];
extern CollisionData JungleLand_extSix_ColH;
extern Gfx JungleLand_extEight_Gfx[];
extern CollisionData JungleLand_extSeven_ColH;
extern Gfx JungleLand_extEightBridge_Gfx[];
extern CollisionData JungleLand_extEight_ColH;
extern Gfx JungleLand_extNine_Gfx[];
extern CollisionData JungleLand_extEightBridge_ColH;
extern Gfx JungleLand_extTen_Gfx[];
extern CollisionData JungleLand_extNine_ColH;
extern Gfx JungleLand_extEleven_Gfx[];
extern CollisionData JungleLand_extTen_ColH;
extern Gfx JungleLand_intZero_Gfx[];
extern CollisionData JungleLand_extEleven_ColH;
extern Gfx JungleLand_intOne_Gfx[];
extern CollisionData JungleLand_intZero_ColH;
extern Gfx JungleLand_intTwo_Gfx[];
extern CollisionData JungleLand_intOne_ColH;
extern Gfx JungleLand_intThree_Gfx[];
extern CollisionData JungleLand_intTwo_ColH;
extern Gfx JungleLand_intFour_Gfx[];
extern CollisionData JungleLand_intThree_ColH;
extern Gfx JungleLand_intSix_Gfx[];
extern CollisionData JungleLand_intFour_ColH;
extern Gfx JungleLand_intSeven_Gfx[];
extern CollisionData JungleLand_intSix_ColH;
extern Gfx JungleLand_intFive_Gfx[];
extern CollisionData JungleLand_intSeven_ColH;
extern Gfx JungleLand_railFloorOne_Gfx[];
extern CollisionData JungleLand_intFive_ColH;
extern Gfx JungleLand_singleRailTrack_Gfx[];
extern CollisionData JungleLand_railFloorOne_ColH;
extern Gfx JungleLand_singleRailTrack2_Gfx[];
extern CollisionData JungleLand_singleRailTrack_ColH;
extern Gfx JungleLand_branchRail_Gfx[];
extern CollisionData JungleLand_singleRailTrack2_ColH;
extern Gfx JungleLand_turnRail_Gfx[];
extern CollisionData JungleLand_branchRail_ColH;
extern Gfx JungleLand_singleRailTrack3_Gfx[];
extern CollisionData JungleLand_turnRail_ColH;
extern Gfx JungleLand_brokenMinecartRail_Gfx[];
extern CollisionData JungleLand_singleRailTrack3_ColH;
extern Gfx JungleLand_brokenMinecartRail2_Gfx[];
extern CollisionData JungleLand_brokenMinecartRail_ColH;
extern Gfx JungleLand_minecart_Gfx[];
extern CollisionData JungleLand_brokenMinecartRail2_ColH;
extern Gfx JungleLand_doorFrame_Gfx[];
extern CollisionData JungleLand_minecart_ColH;
extern Gfx JungleLand_doorFrame2_Gfx[];
extern CollisionData JungleLand_doorFraMEd_ColH;
extern Gfx JungleLand_fernPlant_Gfx[];
extern CollisionData JungleLand_doorFrame2_ColH;
extern Gfx JungleLand_waterfall_Gfx[];
extern CollisionData JungleLand_fernPlant_ColH;
extern Gfx JungleLand_water_Gfx[];
extern CollisionData JungleLand_waterfall_ColH;
extern Gfx JungleLand_water2_Gfx[];
extern CollisionData JungleLand_water_ColH;
extern Gfx Global_unk_Gfx[];
extern CollisionData Global_unkCol2_ColH;


#include "assets/levelGroup/JungleLand/mtx.mtx.inc.c"

#include "assets/levelGroup/JungleLand/pointers.lvp.inc.c"

unsigned char JungleLand_rabObjects_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/rabObjects.inc.c"
};
#include "assets/levelGroup/JungleLand/spriteActors/spriteAct1.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct4.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct5.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct6.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct7.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct8.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct9.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct10.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct11.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct12.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct13.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct14.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct15.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct16.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct17.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX1.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX2.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX3.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX4.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX5.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX6.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX7.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX8.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX9.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteActX10.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct18.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct19.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct20.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct21.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct22.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct23.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct24.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct25.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct26.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct27.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct28.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct29.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct30.sprite.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct1.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct2.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct3.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct4.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct5.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct6.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct7.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct8.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct9.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct10.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct11.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct12.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct13.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct14.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct15.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct16.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct17.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct18.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct19.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct20.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct21.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct22.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct23.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct24.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct25.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct26.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct27.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct28.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct29.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct30.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct31.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct32.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct33.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct34.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct35.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct36.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct37.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct38.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct39.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct40.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct41.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct42.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct43.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct44.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct45.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct46.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clctX46.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clctX47.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clctX48.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clctX49.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clctX50.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clctX51.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct47.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct48.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct49.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct50.clct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct1.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct4.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct5.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct6.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct7.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct8.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct9.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct10.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct11.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct12.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct13.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct14.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct15.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct16.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct17.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct18.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct19.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct20.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct21.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct31.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct32.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct33.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct34.sprite.inc.c"

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

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct35.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct36.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct37.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct38.sprite.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom7_objLand.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom7_objLog.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/eroom7_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActX1.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActX2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActN3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActX4.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActN5.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/collectables/clct51.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct52.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct53.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct54.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct55.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct56.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct57.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct58.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct59.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct60.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct61.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct62.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct63.clct.inc.c"

#include "assets/levelGroup/JungleLand/collectables/clct64.clct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct22.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct23.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct24.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActN24.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct25.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct26.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct27.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct28.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct29.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct30.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct31.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct32.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct33.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct34.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct35.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct36.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct37.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct38.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct39.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct40.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct41.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct42.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct43.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct44.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct45.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct46.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct47.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct48.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct49.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct50.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct51.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct52.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct53.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct54.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct55.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct56.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct57.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct58.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct59.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct60.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct61.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct62.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct63.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct64.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct65.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct66.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct67.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct68.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct69.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct70.roomAct.inc.c"

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

#include "assets/levelGroup/JungleLand/roomActors/roomAct71.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct72.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct73.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomFallback_objPole.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomFallback_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct74.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct75.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct39.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct40.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct41.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct42.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct43.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct44.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct45.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct46.sprite.inc.c"
unsigned char JungleLand_spriteLib_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/spriteLib.inc.c"
};

#include "assets/levelGroup/JungleLand/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room2.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room3.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room4.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room5.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room6.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room7.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room8.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room9.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/rooms/room10.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/map.lvmM.inc.c"

#include "assets/levelGroup/JungleLand/map.lvmH.inc.c"

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

#include "assets/levelGroup/JungleLand/extRooms/extRoom13.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom14.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/extRooms/extRoom15.rmSet.inc.c"

#include "assets/levelGroup/JungleLand/scope.lvlScope.inc.c"

#include "assets/levelGroup/JungleLand/header.lvlHdr.inc.c"

#include "assets/levelGroup/JungleLand/jlScope/jlScope.mtx.inc.c"

#include "assets/levelGroup/JungleLand/jlScope/jlScope.light.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.vtx.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.mtx.inc.c"
unsigned char JungleLand_Pad1[] = FILEPAD;
unsigned char JungleLand_lilypad_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/lilypad.ci4.png.inc.c"
};
unsigned char JungleLand_Pad2[] = FILEPAD;
unsigned char JungleLand_lilypad_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/lilypad.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/lilypad/lilypad.gfx.inc.c"

#include "assets/levelGroup/JungleLand/vine/vine.vtx.inc.c"

#include "assets/levelGroup/JungleLand/vine/vine.mtx.inc.c"
unsigned char JungleLand_vine_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/vine.ci8.png.inc.c"
};
unsigned char JungleLand_vine_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/vine.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/vine/vine.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.vtx.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.mtx.inc.c"

#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.gfx.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.vtx.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.mtx.inc.c"

#include "assets/levelGroup/JungleLand/unkLog/unkLog.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.vtx.inc.c"

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.mtx.inc.c"
unsigned char JungleLand_Pad3[] = FILEPAD;
unsigned char JungleLand_fallenLogStump_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fallenLogStump.ci8.png.inc.c"
};
unsigned char JungleLand_Pad4[] = FILEPAD;
unsigned char JungleLand_fallenLogStump_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/fallenLogStump.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.gfx.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.vtx.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.mtx.inc.c"

#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.vtx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.mtx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.gfx.inc.c"

#include "assets/levelGroup/JungleLand/unk1/unk1.vtx.inc.c"

#include "assets/levelGroup/JungleLand/unk1/unk1.mtx.inc.c"

#include "assets/levelGroup/JungleLand/unk1/unk1.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.vtx.inc.c"

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.mtx.inc.c"
unsigned char JungleLand_fallBridge_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fallBridge.ci8.png.inc.c"
};
unsigned char JungleLand_fallBridge_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/fallBridge.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.vtx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.mtx.inc.c"
unsigned char JungleLand_Pad5[] = FILEPAD;
unsigned char JungleLand_ctCrate1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate1.ci4.png.inc.c"
};
unsigned char JungleLand_Pad6[] = FILEPAD;
unsigned char JungleLand_ctCrate1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate1.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad7[] = FILEPAD;
unsigned char JungleLand_ctCrate2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate2.ci4.png.inc.c"
};
unsigned char JungleLand_Pad8[] = FILEPAD;
unsigned char JungleLand_ctCrate2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate2.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad9[] = FILEPAD;
unsigned char JungleLand_ctCrate3_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate3.ci4.png.inc.c"
};
unsigned char JungleLand_Pad10[] = FILEPAD;
unsigned char JungleLand_ctCrate3_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate3.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.vtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.mtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.vtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.mtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.vtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.mtx.inc.c"

#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.vtx.inc.c"

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.mtx.inc.c"
unsigned char JungleLand_singularPlank_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/singularPlank.ci8.png.inc.c"
};
unsigned char JungleLand_singularPlank_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/singularPlank.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.mtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.vtx.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.mtx.inc.c"

#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.mtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.mtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.mtx.inc.c"
unsigned char JungleLand_Pad11[] = FILEPAD;
unsigned char JungleLand_lava_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/lava.ci8.png.inc.c"
};
unsigned char JungleLand_Pad12[] = FILEPAD;
unsigned char JungleLand_lava_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/lava.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.mtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.mtx.inc.c"

#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.mtx.inc.c"

#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.mtx.inc.c"
unsigned char JungleLand_Pad13[] = FILEPAD;
unsigned char JungleLand_roomSixCrownEdgePlatform_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/roomSixCrownEdgePlatform.ci8.png.inc.c"
};
unsigned char JungleLand_Pad14[] = FILEPAD;
unsigned char JungleLand_roomSixCrownEdgePlatform_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/roomSixCrownEdgePlatform.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.gfx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.vtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.mtx.inc.c"

#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.gfx.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.vtx.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.mtx.inc.c"

#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ropes/ropes.vtx.inc.c"

#include "assets/levelGroup/JungleLand/ropes/ropes.mtx.inc.c"
unsigned char JungleLand_Pad15[] = FILEPAD;
unsigned char JungleLand_rope_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rope.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/ropes/ropes.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railOne/railOne.vtx.inc.c"

#include "assets/levelGroup/JungleLand/railOne/railOne.mtx.inc.c"
unsigned char JungleLand_Pad16[] = FILEPAD;
unsigned char JungleLand_railColor_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/railColor.ci4.png.inc.c"
};
unsigned char JungleLand_Pad17[] = FILEPAD;
unsigned char JungleLand_railColor_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/railColor.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/railOne/railOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.vtx.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.mtx.inc.c"

#include "assets/levelGroup/JungleLand/railTwo/railTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.vtx.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.mtx.inc.c"

#include "assets/levelGroup/JungleLand/railThree/railThree.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.vtx.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.mtx.inc.c"

#include "assets/levelGroup/JungleLand/railFour/railFour.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.vtx.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.mtx.inc.c"

#include "assets/levelGroup/JungleLand/railFive/railFive.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.vtx.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.mtx.inc.c"

#include "assets/levelGroup/JungleLand/railSix/railSix.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rail/rail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.vtx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.mtx.inc.c"

#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.vtx.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.mtx.inc.c"

#include "assets/levelGroup/JungleLand/logOne/logOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.vtx.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.mtx.inc.c"

#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.gfx.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.vtx.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.mtx.inc.c"

#include "assets/levelGroup/JungleLand/holeLog/holeLog.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.vtx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.mtx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.vtx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.mtx.inc.c"

#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.gfx.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.vtx.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.mtx.inc.c"

#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.gfx.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.vtx.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.mtx.inc.c"

#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extThree/extThree.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extThree/extThree.mtx.inc.c"
unsigned char JungleLand_Pad18[] = FILEPAD;
unsigned char JungleLand_ext3Wall_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ext3Wall.ci8.png.inc.c"
};
unsigned char JungleLand_Pad19[] = FILEPAD;
unsigned char JungleLand_ext3Wall_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ext3Wall.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/extThree/extThree.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extFour/extFour.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extZero/extZero.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extOne/extOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extTwo/extTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extFive/extFive.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extSix/extSix.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extSeven/extSeven.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extEight/extEight.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extNine/extNine.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extTen/extTen.gfx.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.vtx.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.mtx.inc.c"

#include "assets/levelGroup/JungleLand/extEleven/extEleven.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intZero/intZero.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intZero/intZero.mtx.inc.c"
unsigned char JungleLand_Pad20[] = FILEPAD;
unsigned char JungleLand_lavaWall_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/lavaWall.ci8.png.inc.c"
};
unsigned char JungleLand_Pad21[] = FILEPAD;
unsigned char JungleLand_lavaWall_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/lavaWall.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/intZero/intZero.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.mtx.inc.c"

#include "assets/levelGroup/JungleLand/intOne/intOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.mtx.inc.c"

#include "assets/levelGroup/JungleLand/intTwo/intTwo.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.mtx.inc.c"

#include "assets/levelGroup/JungleLand/intThree/intThree.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.mtx.inc.c"

#include "assets/levelGroup/JungleLand/intFour/intFour.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.mtx.inc.c"

#include "assets/levelGroup/JungleLand/intSix/intSix.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.mtx.inc.c"

#include "assets/levelGroup/JungleLand/intSeven/intSeven.gfx.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.vtx.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.mtx.inc.c"

#include "assets/levelGroup/JungleLand/intFive/intFive.gfx.inc.c"

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.vtx.inc.c"

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.mtx.inc.c"
unsigned char JungleLand_railTrack_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/railTrack.ci8.png.inc.c"
};
unsigned char JungleLand_railTrack_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/railTrack.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.vtx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.mtx.inc.c"
unsigned char JungleLand_singleRailTrack_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack.ci8.png.inc.c"
};
unsigned char JungleLand_singleRailTrack_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.mtx.inc.c"
unsigned char JungleLand_singleRailTrack2_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack2.ci8.png.inc.c"
};
unsigned char JungleLand_singleRailTrack2_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack2.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/branchRail/branchRail.vtx.inc.c"

#include "assets/levelGroup/JungleLand/branchRail/branchRail.mtx.inc.c"
unsigned char JungleLand_branchRail_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/branchRail.ci8.png.inc.c"
};
unsigned char JungleLand_branchRail_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/branchRail.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/branchRail/branchRail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/turnRail/turnRail.vtx.inc.c"

#include "assets/levelGroup/JungleLand/turnRail/turnRail.mtx.inc.c"
unsigned char JungleLand_turnRail_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/turnRail.ci8.png.inc.c"
};
unsigned char JungleLand_turnRail_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/turnRail.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/turnRail/turnRail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.vtx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.mtx.inc.c"

#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.vtx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.mtx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/minecart/minecart.vtx.inc.c"

#include "assets/levelGroup/JungleLand/minecart/minecart.mtx.inc.c"
unsigned char JungleLand_Pad22[] = FILEPAD;
unsigned char JungleLand_planks_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/planks.ci4.png.inc.c"
};
unsigned char JungleLand_Pad23[] = FILEPAD;
unsigned char JungleLand_planks_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/planks.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad24[] = FILEPAD;
unsigned char JungleLand_caveWood_i4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/caveWood.i4.png.inc.c"
};

#include "assets/levelGroup/JungleLand/minecart/minecart.gfx.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.vtx.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.mtx.inc.c"
unsigned char JungleLand_Pad25[] = FILEPAD;
unsigned char JungleLand_topper_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/topper.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.gfx.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.vtx.inc.c"

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.mtx.inc.c"
unsigned char JungleLand_fernPlant_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fernPlant.ci8.png.inc.c"
};
unsigned char JungleLand_fernPlant_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/fernPlant.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.gfx.inc.c"

#include "assets/levelGroup/JungleLand/waterfall/waterfall.vtx.inc.c"

#include "assets/levelGroup/JungleLand/waterfall/waterfall.mtx.inc.c"
unsigned char JungleLand_Pad26[] = FILEPAD;
unsigned char JungleLand_water_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/water.ci4.png.inc.c"
};
unsigned char JungleLand_Pad27[] = FILEPAD;
unsigned char JungleLand_water_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/water.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/waterfall/waterfall.gfx.inc.c"

#include "assets/levelGroup/JungleLand/water/water.vtx.inc.c"

#include "assets/levelGroup/JungleLand/water/water.mtx.inc.c"
unsigned char JungleLand_Pad28[] = FILEPAD;
unsigned char JungleLand_swampWater_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/swampWater.ci4.png.inc.c"
};
unsigned char JungleLand_Pad29[] = FILEPAD;
unsigned char JungleLand_swampWater_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/swampWater.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/water/water.gfx.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/water2/water2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colV.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colT.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colS.inc.c"

#include "assets/levelGroup/JungleLand/lilypad/lilypad.colH.inc.c"

#include "assets/levelGroup/JungleLand/unkerer/unkerer.colV.inc.c"

#include "assets/levelGroup/JungleLand/unkerer/unkerer.colT.inc.c"

#include "assets/levelGroup/JungleLand/unkerer/unkerer.colS.inc.c"

#include "assets/levelGroup/JungleLand/unkerer/unkerer.colH.inc.c"

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

#include "assets/levelGroup/JungleLand/unk1/unk1.colV.inc.c"

#include "assets/levelGroup/JungleLand/unk1/unk1.colT.inc.c"

#include "assets/levelGroup/JungleLand/unk1/unk1.colS.inc.c"

#include "assets/levelGroup/JungleLand/unk1/unk1.colH.inc.c"

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

#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colV.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colT.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colS.inc.c"

#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colH.inc.c"

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
unsigned char JungleLand_whaermrr_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/whaermrr.inc.c"
};

#include "assets/levelGroup/JungleLand/jlScope2/jlScope2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/jlScope2/jlScope2.light.inc.c"

#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.mtx.inc.c"
unsigned char JungleLand_Pad30[] = FILEPAD;
unsigned char JungleLand_golem_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/golem.ci4.png.inc.c"
};
unsigned char JungleLand_Pad31[] = FILEPAD;
unsigned char JungleLand_golem_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/golem.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad32[] = FILEPAD;
unsigned char JungleLand_golemFace_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/golemFace.ci8.png.inc.c"
};
unsigned char JungleLand_Pad33[] = FILEPAD;
unsigned char JungleLand_golemFace_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/golemFace.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.mtx.inc.c"
unsigned char JungleLand_Pad34[] = FILEPAD;
unsigned char JungleLand_rock2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rock2.ci4.png.inc.c"
};
unsigned char JungleLand_Pad35[] = FILEPAD;
unsigned char JungleLand_rock2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/rock2.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad36[] = FILEPAD;
unsigned char JungleLand_rock3_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rock3.ci4.png.inc.c"
};
unsigned char JungleLand_Pad37[] = FILEPAD;
unsigned char JungleLand_rock3_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/rock3.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad38[] = FILEPAD;
unsigned char JungleLand_rock4_ci4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rock4.ci4.png.inc.c"
};
unsigned char JungleLand_Pad39[] = FILEPAD;
unsigned char JungleLand_rock4_ci4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/rock4.ci4.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.gfx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.vtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk.mtx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk.gfx.inc.c"

#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.vtx.inc.c"

#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.mtx.inc.c"
unsigned char JungleLand_Pad40[] = FILEPAD;
unsigned char JungleLand_spiderRock_ci8_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/spiderRock.ci8.png.inc.c"
};
unsigned char JungleLand_Pad41[] = FILEPAD;
unsigned char JungleLand_spiderRock_ci8_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/spiderRock.ci8.pal.inc.c"
};

#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.gfx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk2.mtx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk2.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fish/fish.vtx.inc.c"

#include "assets/levelGroup/JungleLand/fish/fish.mtx.inc.c"
unsigned char JungleLand_Pad42[] = FILEPAD;
unsigned char JungleLand_fish_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fish.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/fish/fish.gfx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk3.mtx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk3.gfx.inc.c"

#include "assets/levelGroup/JungleLand/fishTail/fishTail.vtx.inc.c"

#include "assets/levelGroup/JungleLand/fishTail/fishTail.mtx.inc.c"
unsigned char JungleLand_Pad43[] = FILEPAD;
unsigned char JungleLand_fishTail_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fishTail.rgba16.png.inc.c"
};

#include "assets/levelGroup/JungleLand/fishTail/fishTail.gfx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk4.mtx.inc.c"

#include "assets/levelGroup/JungleLand/unkunk4.gfx.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemSleep.animH.inc.c"

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemSleep.animArr.inc.c"
unsigned char JungleLand_golemSleepPointers_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/anim/actors/golem/golemSleepPointers.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemAttack.animH.inc.c"
unsigned char JungleLand_golemAttackPad_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/golemAttackPad.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/golem/golemAttack.animArr.inc.c"
unsigned char JungleLand_golemAttackPointers_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/anim/actors/golem/golemAttackPointers.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/spiderRock/spiderRockInit.animH.inc.c"
unsigned char JungleLand_spiderRockPad_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/spiderRockPad.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/spiderRock/spiderRockInit.animArr.inc.c"
unsigned char JungleLand_spiderRockInitPointers_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/anim/actors/spiderRock/spiderRockInitPointers.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishHeadInit.animH.inc.c"
unsigned char JungleLand_fishHeadPad_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/fishHeadPad.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishHeadInit.animArr.inc.c"
unsigned char JungleLand_fishHeadInitPointers_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/anim/actors/fish/fishHeadInitPointers.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishTailInit.animH.inc.c"
unsigned char JungleLand_fishTailPad_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/fishTailPad.inc.c"
};

#include "assets/levelGroup/JungleLand/anim/actors/fish/fishTailInit.animArr.inc.c"
unsigned char JungleLand_fishTailInitPointers_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/anim/actors/fish/fishTailInitPointers.inc.c"
};
unsigned char JungleLand_levelFileBreak_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/levelFileBreak.inc.c"
};
