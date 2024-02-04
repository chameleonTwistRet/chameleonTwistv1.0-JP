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

extern unsigned char Global_jllogTop_PAL[];
extern unsigned char Global_jllogTop_PNG[];
extern unsigned char Global_jlLog_PAL[];
extern unsigned char Global_jlLog_PNG[];
extern unsigned char Global_dcRockFloor_PNG[];
extern unsigned char Global_longWood_PAL[];
extern unsigned char Global_longWood_PNG[];
extern unsigned char Global_longWoodTopper_PAL[];
extern unsigned char Global_longWoodTopper_PNG[];
extern unsigned char Global_JLCaveFade_PAL[];
extern unsigned char Global_JLCaveFade_PNG[];
extern unsigned char Global_JLCave_PAL[];
extern unsigned char Global_JLCave_PNG[];
extern unsigned char Global_jlText5_PAL[];
extern unsigned char Global_jlText5_PNG[];
extern unsigned char Global_jlText4_PAL[];
extern unsigned char Global_jlText4_PNG[];
extern unsigned char Global_strip_PAL[];
extern unsigned char Global_strip_PNG[];
extern unsigned char Global_bigLog_PAL[];
extern unsigned char Global_bigLog_PNG[];
extern unsigned char Global_jlText2_PAL[];
extern unsigned char Global_jlText2_PNG[];
extern unsigned char Global_jlText1_PAL[];
extern unsigned char Global_jlText1_PNG[];
extern unsigned char Global_jlText3_PAL[];
extern unsigned char Global_jlText3_PNG[];
extern unsigned char Global_pebbles_PAL[];
extern unsigned char Global_pebbles_PNG[];
extern unsigned char Global_JLMountain_PAL[];
extern unsigned char Global_JLMountain_PNG[];
extern unsigned char Global_JLCaveFadeTop_PAL[];
extern unsigned char Global_JLCaveFadeTop_PNG[];




extern Gfx Global_unk3_Gfx[];
extern CollisionData Global_unk3_Header[];
extern Gfx Global_unk4_Gfx[];
extern CollisionData Global_unk4_Header[];
extern Gfx Global_unk5_Gfx[];
extern CollisionData Global_unk5_Header[];
extern Gfx Global_unk6_Gfx[];
extern CollisionData Global_unk6_Header[];
extern Gfx Global_unk7_Gfx[];
extern CollisionData Global_unk7_Header[];
extern Gfx Global_unk8_Gfx[];
extern CollisionData Global_unk8_Header[];
extern Gfx Global_unk9_Gfx[];
extern CollisionData Global_unk9_Header[];
extern Gfx Global_unkA_Gfx[];
extern CollisionData Global_unkA_Header[];
extern Gfx Global_unkB_Gfx[];
extern CollisionData Global_unkB_Header[];
extern Gfx Global_unkC_Gfx[];
extern CollisionData Global_unkC_Header[];
extern Gfx Global_ALSpinDoor_Gfx[];
extern CollisionData Global_ALSpinDoor_Header[];
extern Gfx Global_unkD_Gfx[];
extern CollisionData Global_unkD_Header[];
extern Gfx Global_BLLava_Gfx[];
extern CollisionData Global_BLLava_Header[];
extern Gfx Global_BLLava2_Gfx[];
extern CollisionData Global_BLLava2_Header[];
extern Gfx Global_BLLava3_Gfx[];
extern CollisionData Global_BLLava3_Header[];
extern Gfx Global_BLLava4_Gfx[];
extern CollisionData Global_BLLava4_Header[];
extern Gfx Global_BLLava5_Gfx[];
extern CollisionData Global_BLLava5_Header[];
extern Gfx Global_BLLava6_Gfx[];
extern CollisionData Global_BLLava6_Header[];
extern Gfx Global_BLLava7_Gfx[];
extern CollisionData Global_BLLava7_Header[];
extern Gfx Global_BLLava8_Gfx[];
extern CollisionData Global_BLLava8_Header[];
extern Gfx Global_unkE_Gfx[];
extern CollisionData Global_unkE_Header[];
extern Gfx Global_unkF_Gfx[];
extern CollisionData Global_unkF_Header[];
extern Gfx Global_unk10_Gfx[];
extern CollisionData Global_unk10_Header[];
extern Gfx Global_Door1_Gfx[];
extern CollisionData Global_Door1_Header[];
extern Gfx Global_unk12_Gfx[];
extern CollisionData Global_unk12_Header[];
extern Gfx Global_unk13_Gfx[];
extern CollisionData Global_unk13_Header[];
extern Gfx Global_unk14_Gfx[];
extern CollisionData Global_unk14_Header[];
extern Gfx Global_unk15_Gfx[];
extern CollisionData Global_unk15_Header[];
extern Gfx Global_unk16_Gfx[];
extern CollisionData Global_unk16_Header[];
extern Gfx Global_unk17_Gfx[];
extern CollisionData Global_unk17_Header[];
extern Gfx Global_unk18_Gfx[];
extern CollisionData Global_unk18_Header[];
extern Gfx Global_unk19_Gfx[];
extern CollisionData Global_unk19_Header[];
extern Gfx Global_unk1A_Gfx[];
extern CollisionData Global_unk1A_Header[];
extern Gfx Global_unk1B_Gfx[];
extern CollisionData Global_unk1B_Header[];
extern Gfx Global_unk1C_Gfx[];
extern CollisionData Global_unk1C_Header[];
extern Gfx Global_unk1D_Gfx[];
extern CollisionData Global_unk1D_Header[];
extern Gfx Global_unk1E_Gfx[];
extern CollisionData Global_unk1E_Header[];
extern Gfx JungleLand_lilypad_Gfx[];
extern CollisionData JungleLand_lilypad_Header[];
extern Gfx JungleLand_vine_Gfx[];
extern CollisionData JungleLand_unkerer_Header[];
extern Gfx JungleLand_fallenCrownLog_Gfx[];
extern CollisionData JungleLand_vine_Header[];
extern Gfx JungleLand_unkLog_Gfx[];
extern CollisionData JungleLand_fallenCrownLog_Header[];
extern Gfx JungleLand_fallenLogStump_Gfx[];
extern CollisionData JungleLand_unkLog_Header[];
extern Gfx JungleLand_logTunnel_Gfx[];
extern CollisionData JungleLand_fallenLogStump_Header[];
extern Gfx JungleLand_waterfallRock_Gfx[];
extern CollisionData JungleLand_logTunnel_Header[];
extern Gfx JungleLand_unk1_Gfx[];
extern CollisionData JungleLand_waterfallRock_Header[];
extern Gfx JungleLand_fallBridge_Gfx[];
extern CollisionData JungleLand_unk1_Header[];
extern Gfx JungleLand_ctCrate_Gfx[];
extern CollisionData JungleLand_fallBridge_Header[];
extern Gfx JungleLand_ctCrate2_Gfx[];
extern CollisionData JungleLand_ctCrate_Header[];
extern Gfx JungleLand_walkingPlank_Gfx[];
extern CollisionData JungleLand_ctCrate2_Header[];
extern Gfx JungleLand_walkingPlank2_Gfx[];
extern CollisionData JungleLand_walkingPlank_Header[];
extern Gfx JungleLand_walkingPlank3_Gfx[];
extern CollisionData JungleLand_walkingPlank2_Header[];
extern Gfx JungleLand_walkingPlank4_Gfx[];
extern CollisionData JungleLand_walkingPlank3_Header[];
extern Gfx JungleLand_singularPlank_Gfx[];
extern CollisionData JungleLand_walkingPlank4_Header[];
extern Gfx JungleLand_roomSixStartPlatform_Gfx[];
extern CollisionData JungleLand_singularPlank_Header[];
extern Gfx JungleLand_cavePlatform_Gfx[];
extern CollisionData JungleLand_roomSixStartPlatform_Header[];
extern Gfx JungleLand_roomSixCrownPlatform_Gfx[];
extern CollisionData JungleLand_cavePlatform_Header[];
extern Gfx JungleLand_roomSixSidePlatform_Gfx[];
extern CollisionData JungleLand_roomSixCrownPlatform_Header[];
extern Gfx JungleLand_roomSevenLava_Gfx[];
extern CollisionData JungleLand_roomSixSidePlatform_Header[];
extern Gfx JungleLand_roomSevenFloor_Gfx[];
extern CollisionData JungleLand_roomSevenLava_Header[];
extern Gfx JungleLand_roomZeroLava_Gfx[];
extern CollisionData JungleLand_roomSevenFloor_Header[];
extern Gfx JungleLand_roomOnePlatform_Gfx[];
extern CollisionData JungleLand_roomZeroLava_Header[];
extern Gfx JungleLand_roomSixCrownEdgePlatform_Gfx[];
extern CollisionData JungleLand_roomOnePlatform_Header[];
extern Gfx JungleLand_roomSevenSpinRing_Gfx[];
extern CollisionData JungleLand_roomSixCrownEdgePlatform_Header[];
extern Gfx JungleLand_woodBlock_Gfx[];
extern CollisionData JungleLand_roomSevenSpinRing_Header[];
extern Gfx JungleLand_ropes_Gfx[];
extern CollisionData JungleLand_woodBlock_Header[];
extern Gfx JungleLand_railOne_Gfx[];
extern CollisionData JungleLand_ropes_Header[];
extern Gfx JungleLand_railTwo_Gfx[];
extern CollisionData JungleLand_railOne_Header[];
extern Gfx JungleLand_railThree_Gfx[];
extern CollisionData JungleLand_railTwo_Header[];
extern Gfx JungleLand_railFour_Gfx[];
extern CollisionData JungleLand_railThree_Header[];
extern Gfx JungleLand_railFive_Gfx[];
extern CollisionData JungleLand_railFour_Header[];
extern Gfx JungleLand_railSix_Gfx[];
extern CollisionData JungleLand_railFive_Header[];
extern Gfx JungleLand_rail_Gfx[];
extern CollisionData JungleLand_railSix_Header[];
extern Gfx JungleLand_ctCrate3_Gfx[];
extern CollisionData JungleLand_rail_Header[];
extern Gfx JungleLand_logOne_Gfx[];
extern CollisionData JungleLand_ctCrate3_Header[];
extern Gfx JungleLand_fallBridgeSmall2_Gfx[];
extern CollisionData JungleLand_logOne_Header[];
extern Gfx JungleLand_logSetPiece_Gfx[];
extern CollisionData JungleLand_fallBridgeSmall2_Header[];
extern Gfx JungleLand_holeLog_Gfx[];
extern CollisionData JungleLand_logSetPiece_Header[];
extern Gfx JungleLand_waterfallGroundCollision_Gfx[];
extern CollisionData JungleLand_holeLog_Header[];
extern Gfx JungleLand_waterfallBacksideCollision_Gfx[];
extern CollisionData JungleLand_waterfallGroundCollision_Header[];
extern Gfx JungleLand_groundCollision_Gfx[];
extern CollisionData JungleLand_waterfallBacksideCollision_Header[];
extern Gfx JungleLand_holeLogBottom_Gfx[];
extern CollisionData JungleLand_groundCollision_Header[];
extern Gfx JungleLand_extThree_Gfx[];
extern CollisionData JungleLand_holeLogBottom_Header[];
extern Gfx JungleLand_extFour_Gfx[];
extern CollisionData JungleLand_extThree_Header[];
extern Gfx JungleLand_extZero_Gfx[];
extern CollisionData JungleLand_extFour_Header[];
extern Gfx JungleLand_extOne_Gfx[];
extern CollisionData JungleLand_extZero_Header[];
extern Gfx JungleLand_extTwo_Gfx[];
extern CollisionData JungleLand_extOne_Header[];
extern Gfx JungleLand_rockFloor_Gfx[];
extern CollisionData JungleLand_extTwo_Header[];
extern Gfx JungleLand_rockFloor2_Gfx[];
extern CollisionData JungleLand_rockFloor_Header[];
extern Gfx JungleLand_extFive_Gfx[];
extern CollisionData JungleLand_rockFloor2_Header[];
extern Gfx JungleLand_extThreePartTwo_Gfx[];
extern CollisionData JungleLand_extFive_Header[];
extern Gfx JungleLand_extFivePartTwo_Gfx[];
extern CollisionData JungleLand_extThreePartTwo_Header[];
extern Gfx JungleLand_extSix_Gfx[];
extern CollisionData JungleLand_extFivePartTwo_Header[];
extern Gfx JungleLand_extSeven_Gfx[];
extern CollisionData JungleLand_extSix_Header[];
extern Gfx JungleLand_extEight_Gfx[];
extern CollisionData JungleLand_extSeven_Header[];
extern Gfx JungleLand_extEightBridge_Gfx[];
extern CollisionData JungleLand_extEight_Header[];
extern Gfx JungleLand_extNine_Gfx[];
extern CollisionData JungleLand_extEightBridge_Header[];
extern Gfx JungleLand_extTen_Gfx[];
extern CollisionData JungleLand_extNine_Header[];
extern Gfx JungleLand_extEleven_Gfx[];
extern CollisionData JungleLand_extTen_Header[];
extern Gfx JungleLand_intZero_Gfx[];
extern CollisionData JungleLand_extEleven_Header[];
extern Gfx JungleLand_intOne_Gfx[];
extern CollisionData JungleLand_intZero_Header[];
extern Gfx JungleLand_intTwo_Gfx[];
extern CollisionData JungleLand_intOne_Header[];
extern Gfx JungleLand_intThree_Gfx[];
extern CollisionData JungleLand_intTwo_Header[];
extern Gfx JungleLand_intFour_Gfx[];
extern CollisionData JungleLand_intThree_Header[];
extern Gfx JungleLand_intSix_Gfx[];
extern CollisionData JungleLand_intFour_Header[];
extern Gfx JungleLand_intSeven_Gfx[];
extern CollisionData JungleLand_intSix_Header[];
extern Gfx JungleLand_intFive_Gfx[];
extern CollisionData JungleLand_intSeven_Header[];
extern Gfx JungleLand_railFloorOne_Gfx[];
extern CollisionData JungleLand_intFive_Header[];
extern Gfx JungleLand_singleRailTrack_Gfx[];
extern CollisionData JungleLand_railFloorOne_Header[];
extern Gfx JungleLand_singleRailTrack2_Gfx[];
extern CollisionData JungleLand_singleRailTrack_Header[];
extern Gfx JungleLand_branchRail_Gfx[];
extern CollisionData JungleLand_singleRailTrack2_Header[];
extern Gfx JungleLand_turnRail_Gfx[];
extern CollisionData JungleLand_branchRail_Header[];
extern Gfx JungleLand_singleRailTrack3_Gfx[];
extern CollisionData JungleLand_turnRail_Header[];
extern Gfx JungleLand_brokenMinecartRail_Gfx[];
extern CollisionData JungleLand_singleRailTrack3_Header[];
extern Gfx JungleLand_brokenMinecartRail2_Gfx[];
extern CollisionData JungleLand_brokenMinecartRail_Header[];
extern Gfx JungleLand_minecart_Gfx[];
extern CollisionData JungleLand_brokenMinecartRail2_Header[];
extern Gfx JungleLand_doorFrame_Gfx[];
extern CollisionData JungleLand_minecart_Header[];
extern Gfx JungleLand_doorFrame2_Gfx[];
extern CollisionData JungleLand_doorFraMEd_Header[];
extern Gfx JungleLand_fernPlant_Gfx[];
extern CollisionData JungleLand_doorFrame2_Header[];
extern Gfx JungleLand_waterfall_Gfx[];
extern CollisionData JungleLand_fernPlant_Header[];
extern Gfx JungleLand_water_Gfx[];
extern CollisionData JungleLand_waterfall_Header[];
extern Gfx JungleLand_water2_Gfx[];
extern CollisionData JungleLand_water_Header[];
extern Gfx Global_unk_Gfx[];
extern CollisionData Global_unkCol2_Header[];


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

#include "assets/levelGroup/JungleLand/roomObjects/roomObj1.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj2.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj3.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj4.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj5.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj6.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj7.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj8.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj9.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj10.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj11.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj12.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj13.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj14.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj15.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj16.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj17.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj18.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj19.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj20.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj21.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj22.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj23.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj24.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj25.roomObj.inc.c"

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

#include "assets/levelGroup/JungleLand/roomObjects/roomObj26.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj27.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj28.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj29.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj30.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj31.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj32.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj33.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj34.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj35.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj36.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct18.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct19.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct20.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct21.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj37.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj38.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj39.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj40.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj41.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj42.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj43.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj44.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj45.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj46.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj47.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj48.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj49.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj50.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct31.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct32.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct33.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct34.sprite.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj51.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj52.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj53.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj54.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj55.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj56.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj57.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj58.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj59.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj60.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj61.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct35.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct36.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct37.sprite.inc.c"

#include "assets/levelGroup/JungleLand/spriteActors/spriteAct38.sprite.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj62.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj63.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObjN64.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActX1.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActX2.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActN3.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActX4.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomActN5.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj65.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj66.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj67.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj68.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj69.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj70.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj71.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj72.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj73.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj74.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj75.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj76.roomObj.inc.c"

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

#include "assets/levelGroup/JungleLand/roomObjects/roomObj77.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj78.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj79.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj80.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj81.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj82.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj83.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj84.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj85.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj86.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj87.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj88.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj89.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj90.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj91.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj92.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj93.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj94.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj95.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj96.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj97.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj98.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj99.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj100.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj101.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj102.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj103.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj104.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj105.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj106.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj107.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj108.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj109.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj110.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj111.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj112.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj113.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj114.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj115.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj116.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj117.roomObj.inc.c"

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

#include "assets/levelGroup/JungleLand/roomObjects/roomObj118.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj119.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj120.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj121.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj122.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj123.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj124.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj125.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj126.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj127.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj128.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj129.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj130.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj131.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj132.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj133.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj134.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj135.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj136.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj137.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj138.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj139.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj140.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj141.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj142.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj143.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj144.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj145.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj146.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj147.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj148.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj149.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj150.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj151.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj152.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj153.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj154.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj155.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj156.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj157.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj158.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj159.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj160.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj161.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj162.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj163.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj164.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct50.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct51.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct52.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj165.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj166.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj167.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj168.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj169.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj170.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj171.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj172.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj173.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj174.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj175.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj176.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj177.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj178.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj179.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj180.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj181.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj182.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj183.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj184.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj185.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj186.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj187.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct53.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct54.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj188.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj189.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj190.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj191.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj192.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj193.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj194.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj195.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj196.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj197.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj198.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj199.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj200.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj201.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj202.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj203.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj204.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj205.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj206.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj207.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj208.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj209.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj210.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj211.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj212.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj213.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj214.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj215.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj216.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj217.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct55.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct56.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct57.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct58.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct59.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj218.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj219.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj220.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj221.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj222.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj223.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj224.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj225.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj226.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj227.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj228.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj229.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj230.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj231.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj232.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj233.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj234.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj235.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj236.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj237.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj238.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj239.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj240.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj241.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj242.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj243.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj244.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj245.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj246.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj247.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj248.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj249.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj250.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj251.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj252.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj253.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj254.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj255.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj256.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj257.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj258.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj259.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj260.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj261.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj262.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj263.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj264.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj265.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj266.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj267.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj268.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj269.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj270.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj271.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj272.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj273.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj274.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj275.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj276.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj277.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj278.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj279.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj280.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj281.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj282.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj283.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj284.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj285.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj286.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj287.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj288.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj289.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj290.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj291.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj292.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct60.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct61.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct62.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct63.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj293.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj294.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj295.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj296.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj297.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj298.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj299.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj300.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj301.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj302.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj303.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj304.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj305.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj306.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj307.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj308.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj309.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj310.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj311.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj312.roomObj.inc.c"

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

#include "assets/levelGroup/JungleLand/roomObjects/roomObj313.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj314.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj315.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj316.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj317.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj318.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj319.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj320.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj321.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj322.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj323.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj324.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj325.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj326.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj327.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj328.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj329.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj330.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj331.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj332.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj333.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj334.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj335.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj336.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj337.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj338.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj339.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj340.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj341.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj342.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj343.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj344.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj345.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj346.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj347.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj348.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj349.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj350.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj351.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj352.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj353.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj354.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj355.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj356.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj357.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj358.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj359.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj360.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj361.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj362.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj363.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj364.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj365.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj366.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj367.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj368.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj369.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj370.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj371.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj372.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj373.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj374.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj375.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj376.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj377.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj378.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj379.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj380.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj381.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj382.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj383.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj384.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj385.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj386.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj387.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj388.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj389.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct71.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct72.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomActors/roomAct73.roomAct.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj390.roomObj.inc.c"

#include "assets/levelGroup/JungleLand/roomObjects/roomObj391.roomObj.inc.c"

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
Mtx_f JungleLand_jlScope_Mtx = {
#include "assets/levelGroup/JungleLand/jlScope/jlScope.mtx.inc.c"
};
Lights1 JungleLand_jlScope_Light =
#include "assets/levelGroup/JungleLand/jlScope/jlScope.light.inc.c"
Vtx JungleLand_lilypad_Vtx[] = {
#include "assets/levelGroup/JungleLand/lilypad/lilypad.vtx.inc.c"
};
Mtx_f JungleLand_lilypad_Mtx = {
#include "assets/levelGroup/JungleLand/lilypad/lilypad.mtx.inc.c"
};
unsigned char JungleLand_Pad1[] = FILEPAD;
unsigned char JungleLand_lilypad_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/lilypad.ci4.png.inc.c"
};
unsigned char JungleLand_Pad2[] = FILEPAD;
unsigned char JungleLand_lilypad_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/lilypad.ci4.pal.inc.c"
};
Gfx JungleLand_lilypad_Gfx[] = {
#include "assets/levelGroup/JungleLand/lilypad/lilypad.gfx.inc.c"
};
Vtx JungleLand_vine_Vtx[] = {
#include "assets/levelGroup/JungleLand/vine/vine.vtx.inc.c"
};
Mtx_f JungleLand_vine_Mtx = {
#include "assets/levelGroup/JungleLand/vine/vine.mtx.inc.c"
};
unsigned char JungleLand_vine_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/vine.ci8.png.inc.c"
};
unsigned char JungleLand_vine_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/vine.ci8.pal.inc.c"
};
Gfx JungleLand_vine_Gfx[] = {
#include "assets/levelGroup/JungleLand/vine/vine.gfx.inc.c"
};
Vtx JungleLand_fallenCrownLog_Vtx[] = {
#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.vtx.inc.c"
};
Mtx_f JungleLand_fallenCrownLog_Mtx = {
#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.mtx.inc.c"
};
Gfx JungleLand_fallenCrownLog_Gfx[] = {
#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.gfx.inc.c"
};
Vtx JungleLand_unkLog_Vtx[] = {
#include "assets/levelGroup/JungleLand/unkLog/unkLog.vtx.inc.c"
};
Mtx_f JungleLand_unkLog_Mtx = {
#include "assets/levelGroup/JungleLand/unkLog/unkLog.mtx.inc.c"
};
Gfx JungleLand_unkLog_Gfx[] = {
#include "assets/levelGroup/JungleLand/unkLog/unkLog.gfx.inc.c"
};
Vtx JungleLand_fallenLogStump_Vtx[] = {
#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.vtx.inc.c"
};
Mtx_f JungleLand_fallenLogStump_Mtx = {
#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.mtx.inc.c"
};
unsigned char JungleLand_Pad3[] = FILEPAD;
unsigned char JungleLand_fallenLogStump_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fallenLogStump.ci8.png.inc.c"
};
unsigned char JungleLand_Pad4[] = FILEPAD;
unsigned char JungleLand_fallenLogStump_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/fallenLogStump.ci8.pal.inc.c"
};
Gfx JungleLand_fallenLogStump_Gfx[] = {
#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.gfx.inc.c"
};
Vtx JungleLand_logTunnel_Vtx[] = {
#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.vtx.inc.c"
};
Mtx_f JungleLand_logTunnel_Mtx = {
#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.mtx.inc.c"
};
Gfx JungleLand_logTunnel_Gfx[] = {
#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.gfx.inc.c"
};
Vtx JungleLand_waterfallRock_Vtx[] = {
#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.vtx.inc.c"
};
Mtx_f JungleLand_waterfallRock_Mtx = {
#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.mtx.inc.c"
};
Gfx JungleLand_waterfallRock_Gfx[] = {
#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.gfx.inc.c"
};
Vtx JungleLand_unk1_Vtx[] = {
#include "assets/levelGroup/JungleLand/unk1/unk1.vtx.inc.c"
};
Mtx_f JungleLand_unk1_Mtx = {
#include "assets/levelGroup/JungleLand/unk1/unk1.mtx.inc.c"
};
Gfx JungleLand_unk1_Gfx[] = {
#include "assets/levelGroup/JungleLand/unk1/unk1.gfx.inc.c"
};
Vtx JungleLand_fallBridge_Vtx[] = {
#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.vtx.inc.c"
};
Mtx_f JungleLand_fallBridge_Mtx = {
#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.mtx.inc.c"
};
unsigned char JungleLand_fallBridge_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fallBridge.ci8.png.inc.c"
};
unsigned char JungleLand_fallBridge_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/fallBridge.ci8.pal.inc.c"
};
Gfx JungleLand_fallBridge_Gfx[] = {
#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.gfx.inc.c"
};
Vtx JungleLand_ctCrate_Vtx[] = {
#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.vtx.inc.c"
};
Mtx_f JungleLand_ctCrate_Mtx = {
#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.mtx.inc.c"
};
unsigned char JungleLand_Pad5[] = FILEPAD;
unsigned char JungleLand_ctCrate1_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate1.ci4.png.inc.c"
};
unsigned char JungleLand_Pad6[] = FILEPAD;
unsigned char JungleLand_ctCrate1_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate1.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad7[] = FILEPAD;
unsigned char JungleLand_ctCrate2_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate2.ci4.png.inc.c"
};
unsigned char JungleLand_Pad8[] = FILEPAD;
unsigned char JungleLand_ctCrate2_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate2.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad9[] = FILEPAD;
unsigned char JungleLand_ctCrate3_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate3.ci4.png.inc.c"
};
unsigned char JungleLand_Pad10[] = FILEPAD;
unsigned char JungleLand_ctCrate3_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ctCrate3.ci4.pal.inc.c"
};
Gfx JungleLand_ctCrate_Gfx[] = {
#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.gfx.inc.c"
};
Vtx JungleLand_ctCrate2_Vtx[] = {
#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.vtx.inc.c"
};
Mtx_f JungleLand_ctCrate2_Mtx = {
#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.mtx.inc.c"
};
Gfx JungleLand_ctCrate2_Gfx[] = {
#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.gfx.inc.c"
};
Vtx JungleLand_walkingPlank_Vtx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.vtx.inc.c"
};
Mtx_f JungleLand_walkingPlank_Mtx = {
#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.mtx.inc.c"
};
Gfx JungleLand_walkingPlank_Gfx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.gfx.inc.c"
};
Vtx JungleLand_walkingPlank2_Vtx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.vtx.inc.c"
};
Mtx_f JungleLand_walkingPlank2_Mtx = {
#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.mtx.inc.c"
};
Gfx JungleLand_walkingPlank2_Gfx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.gfx.inc.c"
};
Vtx JungleLand_walkingPlank3_Vtx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.vtx.inc.c"
};
Mtx_f JungleLand_walkingPlank3_Mtx = {
#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.mtx.inc.c"
};
Gfx JungleLand_walkingPlank3_Gfx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.gfx.inc.c"
};
Vtx JungleLand_walkingPlank4_Vtx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.vtx.inc.c"
};
Mtx_f JungleLand_walkingPlank4_Mtx = {
#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.mtx.inc.c"
};
Gfx JungleLand_walkingPlank4_Gfx[] = {
#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.gfx.inc.c"
};
Vtx JungleLand_singularPlank_Vtx[] = {
#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.vtx.inc.c"
};
Mtx_f JungleLand_singularPlank_Mtx = {
#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.mtx.inc.c"
};
unsigned char JungleLand_singularPlank_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/singularPlank.ci8.png.inc.c"
};
unsigned char JungleLand_singularPlank_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/singularPlank.ci8.pal.inc.c"
};
Gfx JungleLand_singularPlank_Gfx[] = {
#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.gfx.inc.c"
};
Vtx JungleLand_roomSixStartPlatform_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.vtx.inc.c"
};
Mtx_f JungleLand_roomSixStartPlatform_Mtx = {
#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.mtx.inc.c"
};
Gfx JungleLand_roomSixStartPlatform_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.gfx.inc.c"
};
Vtx JungleLand_cavePlatform_Vtx[] = {
#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.vtx.inc.c"
};
Mtx_f JungleLand_cavePlatform_Mtx = {
#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.mtx.inc.c"
};
Gfx JungleLand_cavePlatform_Gfx[] = {
#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.gfx.inc.c"
};
Vtx JungleLand_roomSixCrownPlatform_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.vtx.inc.c"
};
Mtx_f JungleLand_roomSixCrownPlatform_Mtx = {
#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.mtx.inc.c"
};
Gfx JungleLand_roomSixCrownPlatform_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.gfx.inc.c"
};
Vtx JungleLand_roomSixSidePlatform_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.vtx.inc.c"
};
Mtx_f JungleLand_roomSixSidePlatform_Mtx = {
#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.mtx.inc.c"
};
Gfx JungleLand_roomSixSidePlatform_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.gfx.inc.c"
};
Vtx JungleLand_roomSevenLava_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.vtx.inc.c"
};
Mtx_f JungleLand_roomSevenLava_Mtx = {
#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.mtx.inc.c"
};
unsigned char JungleLand_Pad11[] = FILEPAD;
unsigned char JungleLand_lava_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/lava.ci8.png.inc.c"
};
unsigned char JungleLand_Pad12[] = FILEPAD;
unsigned char JungleLand_lava_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/lava.ci8.pal.inc.c"
};
Gfx JungleLand_roomSevenLava_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.gfx.inc.c"
};
Vtx JungleLand_roomSevenFloor_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.vtx.inc.c"
};
Mtx_f JungleLand_roomSevenFloor_Mtx = {
#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.mtx.inc.c"
};
Gfx JungleLand_roomSevenFloor_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.gfx.inc.c"
};
Vtx JungleLand_roomZeroLava_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.vtx.inc.c"
};
Mtx_f JungleLand_roomZeroLava_Mtx = {
#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.mtx.inc.c"
};
Gfx JungleLand_roomZeroLava_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.gfx.inc.c"
};
Vtx JungleLand_roomOnePlatform_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.vtx.inc.c"
};
Mtx_f JungleLand_roomOnePlatform_Mtx = {
#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.mtx.inc.c"
};
Gfx JungleLand_roomOnePlatform_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.gfx.inc.c"
};
Vtx JungleLand_roomSixCrownEdgePlatform_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.vtx.inc.c"
};
Mtx_f JungleLand_roomSixCrownEdgePlatform_Mtx = {
#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.mtx.inc.c"
};
unsigned char JungleLand_Pad13[] = FILEPAD;
unsigned char JungleLand_roomSixCrownEdgePlatform_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/roomSixCrownEdgePlatform.ci8.png.inc.c"
};
unsigned char JungleLand_Pad14[] = FILEPAD;
unsigned char JungleLand_roomSixCrownEdgePlatform_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/roomSixCrownEdgePlatform.ci8.pal.inc.c"
};
Gfx JungleLand_roomSixCrownEdgePlatform_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.gfx.inc.c"
};
Vtx JungleLand_roomSevenSpinRing_Vtx[] = {
#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.vtx.inc.c"
};
Mtx_f JungleLand_roomSevenSpinRing_Mtx = {
#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.mtx.inc.c"
};
Gfx JungleLand_roomSevenSpinRing_Gfx[] = {
#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.gfx.inc.c"
};
Vtx JungleLand_woodBlock_Vtx[] = {
#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.vtx.inc.c"
};
Mtx_f JungleLand_woodBlock_Mtx = {
#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.mtx.inc.c"
};
Gfx JungleLand_woodBlock_Gfx[] = {
#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.gfx.inc.c"
};
Vtx JungleLand_ropes_Vtx[] = {
#include "assets/levelGroup/JungleLand/ropes/ropes.vtx.inc.c"
};
Mtx_f JungleLand_ropes_Mtx = {
#include "assets/levelGroup/JungleLand/ropes/ropes.mtx.inc.c"
};
unsigned char JungleLand_Pad15[] = FILEPAD;
unsigned char JungleLand_rope_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rope.rgba16.png.inc.c"
};
Gfx JungleLand_ropes_Gfx[] = {
#include "assets/levelGroup/JungleLand/ropes/ropes.gfx.inc.c"
};
Vtx JungleLand_railOne_Vtx[] = {
#include "assets/levelGroup/JungleLand/railOne/railOne.vtx.inc.c"
};
Mtx_f JungleLand_railOne_Mtx = {
#include "assets/levelGroup/JungleLand/railOne/railOne.mtx.inc.c"
};
unsigned char JungleLand_Pad16[] = FILEPAD;
unsigned char JungleLand_railColor_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/railColor.ci4.png.inc.c"
};
unsigned char JungleLand_Pad17[] = FILEPAD;
unsigned char JungleLand_railColor_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/railColor.ci4.pal.inc.c"
};
Gfx JungleLand_railOne_Gfx[] = {
#include "assets/levelGroup/JungleLand/railOne/railOne.gfx.inc.c"
};
Vtx JungleLand_railTwo_Vtx[] = {
#include "assets/levelGroup/JungleLand/railTwo/railTwo.vtx.inc.c"
};
Mtx_f JungleLand_railTwo_Mtx = {
#include "assets/levelGroup/JungleLand/railTwo/railTwo.mtx.inc.c"
};
Gfx JungleLand_railTwo_Gfx[] = {
#include "assets/levelGroup/JungleLand/railTwo/railTwo.gfx.inc.c"
};
Vtx JungleLand_railThree_Vtx[] = {
#include "assets/levelGroup/JungleLand/railThree/railThree.vtx.inc.c"
};
Mtx_f JungleLand_railThree_Mtx = {
#include "assets/levelGroup/JungleLand/railThree/railThree.mtx.inc.c"
};
Gfx JungleLand_railThree_Gfx[] = {
#include "assets/levelGroup/JungleLand/railThree/railThree.gfx.inc.c"
};
Vtx JungleLand_railFour_Vtx[] = {
#include "assets/levelGroup/JungleLand/railFour/railFour.vtx.inc.c"
};
Mtx_f JungleLand_railFour_Mtx = {
#include "assets/levelGroup/JungleLand/railFour/railFour.mtx.inc.c"
};
Gfx JungleLand_railFour_Gfx[] = {
#include "assets/levelGroup/JungleLand/railFour/railFour.gfx.inc.c"
};
Vtx JungleLand_railFive_Vtx[] = {
#include "assets/levelGroup/JungleLand/railFive/railFive.vtx.inc.c"
};
Mtx_f JungleLand_railFive_Mtx = {
#include "assets/levelGroup/JungleLand/railFive/railFive.mtx.inc.c"
};
Gfx JungleLand_railFive_Gfx[] = {
#include "assets/levelGroup/JungleLand/railFive/railFive.gfx.inc.c"
};
Vtx JungleLand_railSix_Vtx[] = {
#include "assets/levelGroup/JungleLand/railSix/railSix.vtx.inc.c"
};
Mtx_f JungleLand_railSix_Mtx = {
#include "assets/levelGroup/JungleLand/railSix/railSix.mtx.inc.c"
};
Gfx JungleLand_railSix_Gfx[] = {
#include "assets/levelGroup/JungleLand/railSix/railSix.gfx.inc.c"
};
Vtx JungleLand_rail_Vtx[] = {
#include "assets/levelGroup/JungleLand/rail/rail.vtx.inc.c"
};
Mtx_f JungleLand_rail_Mtx = {
#include "assets/levelGroup/JungleLand/rail/rail.mtx.inc.c"
};
Gfx JungleLand_rail_Gfx[] = {
#include "assets/levelGroup/JungleLand/rail/rail.gfx.inc.c"
};
Vtx JungleLand_ctCrate3_Vtx[] = {
#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.vtx.inc.c"
};
Mtx_f JungleLand_ctCrate3_Mtx = {
#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.mtx.inc.c"
};
Gfx JungleLand_ctCrate3_Gfx[] = {
#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.gfx.inc.c"
};
Vtx JungleLand_logOne_Vtx[] = {
#include "assets/levelGroup/JungleLand/logOne/logOne.vtx.inc.c"
};
Mtx_f JungleLand_logOne_Mtx = {
#include "assets/levelGroup/JungleLand/logOne/logOne.mtx.inc.c"
};
Gfx JungleLand_logOne_Gfx[] = {
#include "assets/levelGroup/JungleLand/logOne/logOne.gfx.inc.c"
};
Vtx JungleLand_fallBridgeSmall2_Vtx[] = {
#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.vtx.inc.c"
};
Mtx_f JungleLand_fallBridgeSmall2_Mtx = {
#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.mtx.inc.c"
};
Gfx JungleLand_fallBridgeSmall2_Gfx[] = {
#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.gfx.inc.c"
};
Vtx JungleLand_logSetPiece_Vtx[] = {
#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.vtx.inc.c"
};
Mtx_f JungleLand_logSetPiece_Mtx = {
#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.mtx.inc.c"
};
Gfx JungleLand_logSetPiece_Gfx[] = {
#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.gfx.inc.c"
};
Vtx JungleLand_holeLog_Vtx[] = {
#include "assets/levelGroup/JungleLand/holeLog/holeLog.vtx.inc.c"
};
Mtx_f JungleLand_holeLog_Mtx = {
#include "assets/levelGroup/JungleLand/holeLog/holeLog.mtx.inc.c"
};
Gfx JungleLand_holeLog_Gfx[] = {
#include "assets/levelGroup/JungleLand/holeLog/holeLog.gfx.inc.c"
};
Vtx JungleLand_waterfallGroundCollision_Vtx[] = {
#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.vtx.inc.c"
};
Mtx_f JungleLand_waterfallGroundCollision_Mtx = {
#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.mtx.inc.c"
};
Gfx JungleLand_waterfallGroundCollision_Gfx[] = {
#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.gfx.inc.c"
};
Vtx JungleLand_waterfallBacksideCollision_Vtx[] = {
#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.vtx.inc.c"
};
Mtx_f JungleLand_waterfallBacksideCollision_Mtx = {
#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.mtx.inc.c"
};
Gfx JungleLand_waterfallBacksideCollision_Gfx[] = {
#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.gfx.inc.c"
};
Vtx JungleLand_groundCollision_Vtx[] = {
#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.vtx.inc.c"
};
Mtx_f JungleLand_groundCollision_Mtx = {
#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.mtx.inc.c"
};
Gfx JungleLand_groundCollision_Gfx[] = {
#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.gfx.inc.c"
};
Vtx JungleLand_holeLogBottom_Vtx[] = {
#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.vtx.inc.c"
};
Mtx_f JungleLand_holeLogBottom_Mtx = {
#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.mtx.inc.c"
};
Gfx JungleLand_holeLogBottom_Gfx[] = {
#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.gfx.inc.c"
};
Vtx JungleLand_extThree_Vtx[] = {
#include "assets/levelGroup/JungleLand/extThree/extThree.vtx.inc.c"
};
Mtx_f JungleLand_extThree_Mtx = {
#include "assets/levelGroup/JungleLand/extThree/extThree.mtx.inc.c"
};
unsigned char JungleLand_Pad18[] = FILEPAD;
unsigned char JungleLand_ext3Wall_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/ext3Wall.ci8.png.inc.c"
};
unsigned char JungleLand_Pad19[] = FILEPAD;
unsigned char JungleLand_ext3Wall_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/ext3Wall.ci8.pal.inc.c"
};
Gfx JungleLand_extThree_Gfx[] = {
#include "assets/levelGroup/JungleLand/extThree/extThree.gfx.inc.c"
};
Vtx JungleLand_extFour_Vtx[] = {
#include "assets/levelGroup/JungleLand/extFour/extFour.vtx.inc.c"
};
Mtx_f JungleLand_extFour_Mtx = {
#include "assets/levelGroup/JungleLand/extFour/extFour.mtx.inc.c"
};
Gfx JungleLand_extFour_Gfx[] = {
#include "assets/levelGroup/JungleLand/extFour/extFour.gfx.inc.c"
};
Vtx JungleLand_extZero_Vtx[] = {
#include "assets/levelGroup/JungleLand/extZero/extZero.vtx.inc.c"
};
Mtx_f JungleLand_extZero_Mtx = {
#include "assets/levelGroup/JungleLand/extZero/extZero.mtx.inc.c"
};
Gfx JungleLand_extZero_Gfx[] = {
#include "assets/levelGroup/JungleLand/extZero/extZero.gfx.inc.c"
};
Vtx JungleLand_extOne_Vtx[] = {
#include "assets/levelGroup/JungleLand/extOne/extOne.vtx.inc.c"
};
Mtx_f JungleLand_extOne_Mtx = {
#include "assets/levelGroup/JungleLand/extOne/extOne.mtx.inc.c"
};
Gfx JungleLand_extOne_Gfx[] = {
#include "assets/levelGroup/JungleLand/extOne/extOne.gfx.inc.c"
};
Vtx JungleLand_extTwo_Vtx[] = {
#include "assets/levelGroup/JungleLand/extTwo/extTwo.vtx.inc.c"
};
Mtx_f JungleLand_extTwo_Mtx = {
#include "assets/levelGroup/JungleLand/extTwo/extTwo.mtx.inc.c"
};
Gfx JungleLand_extTwo_Gfx[] = {
#include "assets/levelGroup/JungleLand/extTwo/extTwo.gfx.inc.c"
};
Vtx JungleLand_rockFloor_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.vtx.inc.c"
};
Mtx_f JungleLand_rockFloor_Mtx = {
#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.mtx.inc.c"
};
Gfx JungleLand_rockFloor_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.gfx.inc.c"
};
Vtx JungleLand_rockFloor2_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.vtx.inc.c"
};
Mtx_f JungleLand_rockFloor2_Mtx = {
#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.mtx.inc.c"
};
Gfx JungleLand_rockFloor2_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.gfx.inc.c"
};
Vtx JungleLand_extFive_Vtx[] = {
#include "assets/levelGroup/JungleLand/extFive/extFive.vtx.inc.c"
};
Mtx_f JungleLand_extFive_Mtx = {
#include "assets/levelGroup/JungleLand/extFive/extFive.mtx.inc.c"
};
Gfx JungleLand_extFive_Gfx[] = {
#include "assets/levelGroup/JungleLand/extFive/extFive.gfx.inc.c"
};
Vtx JungleLand_extThreePartTwo_Vtx[] = {
#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.vtx.inc.c"
};
Mtx_f JungleLand_extThreePartTwo_Mtx = {
#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.mtx.inc.c"
};
Gfx JungleLand_extThreePartTwo_Gfx[] = {
#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.gfx.inc.c"
};
Vtx JungleLand_extFivePartTwo_Vtx[] = {
#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.vtx.inc.c"
};
Mtx_f JungleLand_extFivePartTwo_Mtx = {
#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.mtx.inc.c"
};
Gfx JungleLand_extFivePartTwo_Gfx[] = {
#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.gfx.inc.c"
};
Vtx JungleLand_extSix_Vtx[] = {
#include "assets/levelGroup/JungleLand/extSix/extSix.vtx.inc.c"
};
Mtx_f JungleLand_extSix_Mtx = {
#include "assets/levelGroup/JungleLand/extSix/extSix.mtx.inc.c"
};
Gfx JungleLand_extSix_Gfx[] = {
#include "assets/levelGroup/JungleLand/extSix/extSix.gfx.inc.c"
};
Vtx JungleLand_extSeven_Vtx[] = {
#include "assets/levelGroup/JungleLand/extSeven/extSeven.vtx.inc.c"
};
Mtx_f JungleLand_extSeven_Mtx = {
#include "assets/levelGroup/JungleLand/extSeven/extSeven.mtx.inc.c"
};
Gfx JungleLand_extSeven_Gfx[] = {
#include "assets/levelGroup/JungleLand/extSeven/extSeven.gfx.inc.c"
};
Vtx JungleLand_extEight_Vtx[] = {
#include "assets/levelGroup/JungleLand/extEight/extEight.vtx.inc.c"
};
Mtx_f JungleLand_extEight_Mtx = {
#include "assets/levelGroup/JungleLand/extEight/extEight.mtx.inc.c"
};
Gfx JungleLand_extEight_Gfx[] = {
#include "assets/levelGroup/JungleLand/extEight/extEight.gfx.inc.c"
};
Vtx JungleLand_extEightBridge_Vtx[] = {
#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.vtx.inc.c"
};
Mtx_f JungleLand_extEightBridge_Mtx = {
#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.mtx.inc.c"
};
Gfx JungleLand_extEightBridge_Gfx[] = {
#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.gfx.inc.c"
};
Vtx JungleLand_extNine_Vtx[] = {
#include "assets/levelGroup/JungleLand/extNine/extNine.vtx.inc.c"
};
Mtx_f JungleLand_extNine_Mtx = {
#include "assets/levelGroup/JungleLand/extNine/extNine.mtx.inc.c"
};
Gfx JungleLand_extNine_Gfx[] = {
#include "assets/levelGroup/JungleLand/extNine/extNine.gfx.inc.c"
};
Vtx JungleLand_extTen_Vtx[] = {
#include "assets/levelGroup/JungleLand/extTen/extTen.vtx.inc.c"
};
Mtx_f JungleLand_extTen_Mtx = {
#include "assets/levelGroup/JungleLand/extTen/extTen.mtx.inc.c"
};
Gfx JungleLand_extTen_Gfx[] = {
#include "assets/levelGroup/JungleLand/extTen/extTen.gfx.inc.c"
};
Vtx JungleLand_extEleven_Vtx[] = {
#include "assets/levelGroup/JungleLand/extEleven/extEleven.vtx.inc.c"
};
Mtx_f JungleLand_extEleven_Mtx = {
#include "assets/levelGroup/JungleLand/extEleven/extEleven.mtx.inc.c"
};
Gfx JungleLand_extEleven_Gfx[] = {
#include "assets/levelGroup/JungleLand/extEleven/extEleven.gfx.inc.c"
};
Vtx JungleLand_intZero_Vtx[] = {
#include "assets/levelGroup/JungleLand/intZero/intZero.vtx.inc.c"
};
Mtx_f JungleLand_intZero_Mtx = {
#include "assets/levelGroup/JungleLand/intZero/intZero.mtx.inc.c"
};
unsigned char JungleLand_Pad20[] = FILEPAD;
unsigned char JungleLand_lavaWall_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/lavaWall.ci8.png.inc.c"
};
unsigned char JungleLand_Pad21[] = FILEPAD;
unsigned char JungleLand_lavaWall_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/lavaWall.ci8.pal.inc.c"
};
Gfx JungleLand_intZero_Gfx[] = {
#include "assets/levelGroup/JungleLand/intZero/intZero.gfx.inc.c"
};
Vtx JungleLand_intOne_Vtx[] = {
#include "assets/levelGroup/JungleLand/intOne/intOne.vtx.inc.c"
};
Mtx_f JungleLand_intOne_Mtx = {
#include "assets/levelGroup/JungleLand/intOne/intOne.mtx.inc.c"
};
Gfx JungleLand_intOne_Gfx[] = {
#include "assets/levelGroup/JungleLand/intOne/intOne.gfx.inc.c"
};
Vtx JungleLand_intTwo_Vtx[] = {
#include "assets/levelGroup/JungleLand/intTwo/intTwo.vtx.inc.c"
};
Mtx_f JungleLand_intTwo_Mtx = {
#include "assets/levelGroup/JungleLand/intTwo/intTwo.mtx.inc.c"
};
Gfx JungleLand_intTwo_Gfx[] = {
#include "assets/levelGroup/JungleLand/intTwo/intTwo.gfx.inc.c"
};
Vtx JungleLand_intThree_Vtx[] = {
#include "assets/levelGroup/JungleLand/intThree/intThree.vtx.inc.c"
};
Mtx_f JungleLand_intThree_Mtx = {
#include "assets/levelGroup/JungleLand/intThree/intThree.mtx.inc.c"
};
Gfx JungleLand_intThree_Gfx[] = {
#include "assets/levelGroup/JungleLand/intThree/intThree.gfx.inc.c"
};
Vtx JungleLand_intFour_Vtx[] = {
#include "assets/levelGroup/JungleLand/intFour/intFour.vtx.inc.c"
};
Mtx_f JungleLand_intFour_Mtx = {
#include "assets/levelGroup/JungleLand/intFour/intFour.mtx.inc.c"
};
Gfx JungleLand_intFour_Gfx[] = {
#include "assets/levelGroup/JungleLand/intFour/intFour.gfx.inc.c"
};
Vtx JungleLand_intSix_Vtx[] = {
#include "assets/levelGroup/JungleLand/intSix/intSix.vtx.inc.c"
};
Mtx_f JungleLand_intSix_Mtx = {
#include "assets/levelGroup/JungleLand/intSix/intSix.mtx.inc.c"
};
Gfx JungleLand_intSix_Gfx[] = {
#include "assets/levelGroup/JungleLand/intSix/intSix.gfx.inc.c"
};
Vtx JungleLand_intSeven_Vtx[] = {
#include "assets/levelGroup/JungleLand/intSeven/intSeven.vtx.inc.c"
};
Mtx_f JungleLand_intSeven_Mtx = {
#include "assets/levelGroup/JungleLand/intSeven/intSeven.mtx.inc.c"
};
Gfx JungleLand_intSeven_Gfx[] = {
#include "assets/levelGroup/JungleLand/intSeven/intSeven.gfx.inc.c"
};
Vtx JungleLand_intFive_Vtx[] = {
#include "assets/levelGroup/JungleLand/intFive/intFive.vtx.inc.c"
};
Mtx_f JungleLand_intFive_Mtx = {
#include "assets/levelGroup/JungleLand/intFive/intFive.mtx.inc.c"
};
Gfx JungleLand_intFive_Gfx[] = {
#include "assets/levelGroup/JungleLand/intFive/intFive.gfx.inc.c"
};
Vtx JungleLand_railFloorOne_Vtx[] = {
#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.vtx.inc.c"
};
Mtx_f JungleLand_railFloorOne_Mtx = {
#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.mtx.inc.c"
};
unsigned char JungleLand_railTrack_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/railTrack.ci8.png.inc.c"
};
unsigned char JungleLand_railTrack_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/railTrack.ci8.pal.inc.c"
};
Gfx JungleLand_railFloorOne_Gfx[] = {
#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.gfx.inc.c"
};
Vtx JungleLand_singleRailTrack_Vtx[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.vtx.inc.c"
};
Mtx_f JungleLand_singleRailTrack_Mtx = {
#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.mtx.inc.c"
};
unsigned char JungleLand_singleRailTrack_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack.ci8.png.inc.c"
};
unsigned char JungleLand_singleRailTrack_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack.ci8.pal.inc.c"
};
Gfx JungleLand_singleRailTrack_Gfx[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.gfx.inc.c"
};
Vtx JungleLand_singleRailTrack2_Vtx[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.vtx.inc.c"
};
Mtx_f JungleLand_singleRailTrack2_Mtx = {
#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.mtx.inc.c"
};
unsigned char JungleLand_singleRailTrack2_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack2.ci8.png.inc.c"
};
unsigned char JungleLand_singleRailTrack2_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/singleRailTrack2.ci8.pal.inc.c"
};
Gfx JungleLand_singleRailTrack2_Gfx[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.gfx.inc.c"
};
Vtx JungleLand_branchRail_Vtx[] = {
#include "assets/levelGroup/JungleLand/branchRail/branchRail.vtx.inc.c"
};
Mtx_f JungleLand_branchRail_Mtx = {
#include "assets/levelGroup/JungleLand/branchRail/branchRail.mtx.inc.c"
};
unsigned char JungleLand_branchRail_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/branchRail.ci8.png.inc.c"
};
unsigned char JungleLand_branchRail_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/branchRail.ci8.pal.inc.c"
};
Gfx JungleLand_branchRail_Gfx[] = {
#include "assets/levelGroup/JungleLand/branchRail/branchRail.gfx.inc.c"
};
Vtx JungleLand_turnRail_Vtx[] = {
#include "assets/levelGroup/JungleLand/turnRail/turnRail.vtx.inc.c"
};
Mtx_f JungleLand_turnRail_Mtx = {
#include "assets/levelGroup/JungleLand/turnRail/turnRail.mtx.inc.c"
};
unsigned char JungleLand_turnRail_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/turnRail.ci8.png.inc.c"
};
unsigned char JungleLand_turnRail_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/turnRail.ci8.pal.inc.c"
};
Gfx JungleLand_turnRail_Gfx[] = {
#include "assets/levelGroup/JungleLand/turnRail/turnRail.gfx.inc.c"
};
Vtx JungleLand_singleRailTrack3_Vtx[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.vtx.inc.c"
};
Mtx_f JungleLand_singleRailTrack3_Mtx = {
#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.mtx.inc.c"
};
Gfx JungleLand_singleRailTrack3_Gfx[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.gfx.inc.c"
};
Vtx JungleLand_brokenMinecartRail_Vtx[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.vtx.inc.c"
};
Mtx_f JungleLand_brokenMinecartRail_Mtx = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.mtx.inc.c"
};
Gfx JungleLand_brokenMinecartRail_Gfx[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.gfx.inc.c"
};
Vtx JungleLand_brokenMinecartRail2_Vtx[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.vtx.inc.c"
};
Mtx_f JungleLand_brokenMinecartRail2_Mtx = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.mtx.inc.c"
};
Gfx JungleLand_brokenMinecartRail2_Gfx[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.gfx.inc.c"
};
Vtx JungleLand_minecart_Vtx[] = {
#include "assets/levelGroup/JungleLand/minecart/minecart.vtx.inc.c"
};
Mtx_f JungleLand_minecart_Mtx = {
#include "assets/levelGroup/JungleLand/minecart/minecart.mtx.inc.c"
};
unsigned char JungleLand_Pad22[] = FILEPAD;
unsigned char JungleLand_planks_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/planks.ci4.png.inc.c"
};
unsigned char JungleLand_Pad23[] = FILEPAD;
unsigned char JungleLand_planks_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/planks.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad24[] = FILEPAD;
unsigned char JungleLand_caveWood_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/caveWood.i4.png.inc.c"
};
Gfx JungleLand_minecart_Gfx[] = {
#include "assets/levelGroup/JungleLand/minecart/minecart.gfx.inc.c"
};
Vtx JungleLand_doorFrame_Vtx[] = {
#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.vtx.inc.c"
};
Mtx_f JungleLand_doorFrame_Mtx = {
#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.mtx.inc.c"
};
unsigned char JungleLand_Pad25[] = FILEPAD;
unsigned char JungleLand_topper_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/topper.rgba16.png.inc.c"
};
Gfx JungleLand_doorFrame_Gfx[] = {
#include "assets/levelGroup/JungleLand/doorFrame/doorFrame.gfx.inc.c"
};
Vtx JungleLand_doorFrame2_Vtx[] = {
#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.vtx.inc.c"
};
Mtx_f JungleLand_doorFrame2_Mtx = {
#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.mtx.inc.c"
};
Gfx JungleLand_doorFrame2_Gfx[] = {
#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.gfx.inc.c"
};
Vtx JungleLand_fernPlant_Vtx[] = {
#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.vtx.inc.c"
};
Mtx_f JungleLand_fernPlant_Mtx = {
#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.mtx.inc.c"
};
unsigned char JungleLand_fernPlant_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fernPlant.ci8.png.inc.c"
};
unsigned char JungleLand_fernPlant_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/fernPlant.ci8.pal.inc.c"
};
Gfx JungleLand_fernPlant_Gfx[] = {
#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.gfx.inc.c"
};
Vtx JungleLand_waterfall_Vtx[] = {
#include "assets/levelGroup/JungleLand/waterfall/waterfall.vtx.inc.c"
};
Mtx_f JungleLand_waterfall_Mtx = {
#include "assets/levelGroup/JungleLand/waterfall/waterfall.mtx.inc.c"
};
unsigned char JungleLand_Pad26[] = FILEPAD;
unsigned char JungleLand_water_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/water.ci4.png.inc.c"
};
unsigned char JungleLand_Pad27[] = FILEPAD;
unsigned char JungleLand_water_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/water.ci4.pal.inc.c"
};
Gfx JungleLand_waterfall_Gfx[] = {
#include "assets/levelGroup/JungleLand/waterfall/waterfall.gfx.inc.c"
};
Vtx JungleLand_water_Vtx[] = {
#include "assets/levelGroup/JungleLand/water/water.vtx.inc.c"
};
Mtx_f JungleLand_water_Mtx = {
#include "assets/levelGroup/JungleLand/water/water.mtx.inc.c"
};
unsigned char JungleLand_Pad28[] = FILEPAD;
unsigned char JungleLand_swampWater_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/swampWater.ci4.png.inc.c"
};
unsigned char JungleLand_Pad29[] = FILEPAD;
unsigned char JungleLand_swampWater_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/swampWater.ci4.pal.inc.c"
};
Gfx JungleLand_water_Gfx[] = {
#include "assets/levelGroup/JungleLand/water/water.gfx.inc.c"
};
Vtx JungleLand_water2_Vtx[] = {
#include "assets/levelGroup/JungleLand/water2/water2.vtx.inc.c"
};
Mtx_f JungleLand_water2_Mtx = {
#include "assets/levelGroup/JungleLand/water2/water2.mtx.inc.c"
};
Gfx JungleLand_water2_Gfx[] = {
#include "assets/levelGroup/JungleLand/water2/water2.gfx.inc.c"
};
Vec3f JungleLand_lilypad_Verts[] = {
#include "assets/levelGroup/JungleLand/lilypad/lilypad.colV.inc.c"
};
Vec3s JungleLand_lilypad_Tris[] = {
#include "assets/levelGroup/JungleLand/lilypad/lilypad.colT.inc.c"
};
Vec3f JungleLand_lilypad_Settings[] = {
#include "assets/levelGroup/JungleLand/lilypad/lilypad.colS.inc.c"
};
CollisionData JungleLand_lilypad_Header[] = {
#include "assets/levelGroup/JungleLand/lilypad/lilypad.colH.inc.c"
};
Vec3f JungleLand_unkerer_Verts[] = {
#include "assets/levelGroup/JungleLand/unkerer/unkerer.colV.inc.c"
};
Vec3s JungleLand_unkerer_Tris[] = {
#include "assets/levelGroup/JungleLand/unkerer/unkerer.colT.inc.c"
};
Vec3f JungleLand_unkerer_Settings[] = {
#include "assets/levelGroup/JungleLand/unkerer/unkerer.colS.inc.c"
};
CollisionData JungleLand_unkerer_Header[] = {
#include "assets/levelGroup/JungleLand/unkerer/unkerer.colH.inc.c"
};
Vec3f JungleLand_vine_Verts[] = {
#include "assets/levelGroup/JungleLand/vine/vine.colV.inc.c"
};
Vec3s JungleLand_vine_Tris[] = {
#include "assets/levelGroup/JungleLand/vine/vine.colT.inc.c"
};
Vec3f JungleLand_vine_Settings[] = {
#include "assets/levelGroup/JungleLand/vine/vine.colS.inc.c"
};
CollisionData JungleLand_vine_Header[] = {
#include "assets/levelGroup/JungleLand/vine/vine.colH.inc.c"
};
Vec3f JungleLand_fallenCrownLog_Verts[] = {
#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colV.inc.c"
};
Vec3s JungleLand_fallenCrownLog_Tris[] = {
#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colT.inc.c"
};
Vec3f JungleLand_fallenCrownLog_Settings[] = {
#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colS.inc.c"
};
CollisionData JungleLand_fallenCrownLog_Header[] = {
#include "assets/levelGroup/JungleLand/fallenCrownLog/fallenCrownLog.colH.inc.c"
};
Vec3f JungleLand_unkLog_Verts[] = {
#include "assets/levelGroup/JungleLand/unkLog/unkLog.colV.inc.c"
};
Vec3s JungleLand_unkLog_Tris[] = {
#include "assets/levelGroup/JungleLand/unkLog/unkLog.colT.inc.c"
};
Vec3f JungleLand_unkLog_Settings[] = {
#include "assets/levelGroup/JungleLand/unkLog/unkLog.colS.inc.c"
};
CollisionData JungleLand_unkLog_Header[] = {
#include "assets/levelGroup/JungleLand/unkLog/unkLog.colH.inc.c"
};
Vec3f JungleLand_fallenLogStump_Verts[] = {
#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colV.inc.c"
};
Vec3s JungleLand_fallenLogStump_Tris[] = {
#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colT.inc.c"
};
Vec3f JungleLand_fallenLogStump_Settings[] = {
#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colS.inc.c"
};
CollisionData JungleLand_fallenLogStump_Header[] = {
#include "assets/levelGroup/JungleLand/fallenLogStump/fallenLogStump.colH.inc.c"
};
Vec3f JungleLand_logTunnel_Verts[] = {
#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colV.inc.c"
};
Vec3s JungleLand_logTunnel_Tris[] = {
#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colT.inc.c"
};
Vec3f JungleLand_logTunnel_Settings[] = {
#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colS.inc.c"
};
CollisionData JungleLand_logTunnel_Header[] = {
#include "assets/levelGroup/JungleLand/logTunnel/logTunnel.colH.inc.c"
};
Vec3f JungleLand_waterfallRock_Verts[] = {
#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colV.inc.c"
};
Vec3s JungleLand_waterfallRock_Tris[] = {
#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colT.inc.c"
};
Vec3f JungleLand_waterfallRock_Settings[] = {
#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colS.inc.c"
};
CollisionData JungleLand_waterfallRock_Header[] = {
#include "assets/levelGroup/JungleLand/waterfallRock/waterfallRock.colH.inc.c"
};
Vec3f JungleLand_unk1_Verts[] = {
#include "assets/levelGroup/JungleLand/unk1/unk1.colV.inc.c"
};
Vec3s JungleLand_unk1_Tris[] = {
#include "assets/levelGroup/JungleLand/unk1/unk1.colT.inc.c"
};
Vec3f JungleLand_unk1_Settings[] = {
#include "assets/levelGroup/JungleLand/unk1/unk1.colS.inc.c"
};
CollisionData JungleLand_unk1_Header[] = {
#include "assets/levelGroup/JungleLand/unk1/unk1.colH.inc.c"
};
Vec3f JungleLand_fallBridge_Verts[] = {
#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colV.inc.c"
};
Vec3s JungleLand_fallBridge_Tris[] = {
#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colT.inc.c"
};
Vec3f JungleLand_fallBridge_Settings[] = {
#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colS.inc.c"
};
CollisionData JungleLand_fallBridge_Header[] = {
#include "assets/levelGroup/JungleLand/fallBridge/fallBridge.colH.inc.c"
};
Vec3f JungleLand_ctCrate_Verts[] = {
#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colV.inc.c"
};
Vec3s JungleLand_ctCrate_Tris[] = {
#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colT.inc.c"
};
Vec3f JungleLand_ctCrate_Settings[] = {
#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colS.inc.c"
};
CollisionData JungleLand_ctCrate_Header[] = {
#include "assets/levelGroup/JungleLand/ctCrate/ctCrate.colH.inc.c"
};
Vec3f JungleLand_ctCrate2_Verts[] = {
#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colV.inc.c"
};
Vec3s JungleLand_ctCrate2_Tris[] = {
#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colT.inc.c"
};
Vec3f JungleLand_ctCrate2_Settings[] = {
#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colS.inc.c"
};
CollisionData JungleLand_ctCrate2_Header[] = {
#include "assets/levelGroup/JungleLand/ctCrate2/ctCrate2.colH.inc.c"
};
Vec3f JungleLand_walkingPlank_Verts[] = {
#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colV.inc.c"
};
Vec3s JungleLand_walkingPlank_Tris[] = {
#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colT.inc.c"
};
Vec3f JungleLand_walkingPlank_Settings[] = {
#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colS.inc.c"
};
CollisionData JungleLand_walkingPlank_Header[] = {
#include "assets/levelGroup/JungleLand/walkingPlank/walkingPlank.colH.inc.c"
};
Vec3f JungleLand_walkingPlank2_Verts[] = {
#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colV.inc.c"
};
Vec3s JungleLand_walkingPlank2_Tris[] = {
#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colT.inc.c"
};
Vec3f JungleLand_walkingPlank2_Settings[] = {
#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colS.inc.c"
};
CollisionData JungleLand_walkingPlank2_Header[] = {
#include "assets/levelGroup/JungleLand/walkingPlank2/walkingPlank2.colH.inc.c"
};
Vec3f JungleLand_walkingPlank3_Verts[] = {
#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colV.inc.c"
};
Vec3s JungleLand_walkingPlank3_Tris[] = {
#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colT.inc.c"
};
Vec3f JungleLand_walkingPlank3_Settings[] = {
#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colS.inc.c"
};
CollisionData JungleLand_walkingPlank3_Header[] = {
#include "assets/levelGroup/JungleLand/walkingPlank3/walkingPlank3.colH.inc.c"
};
Vec3f JungleLand_walkingPlank4_Verts[] = {
#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colV.inc.c"
};
Vec3s JungleLand_walkingPlank4_Tris[] = {
#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colT.inc.c"
};
Vec3f JungleLand_walkingPlank4_Settings[] = {
#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colS.inc.c"
};
CollisionData JungleLand_walkingPlank4_Header[] = {
#include "assets/levelGroup/JungleLand/walkingPlank4/walkingPlank4.colH.inc.c"
};
Vec3f JungleLand_singularPlank_Verts[] = {
#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colV.inc.c"
};
Vec3s JungleLand_singularPlank_Tris[] = {
#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colT.inc.c"
};
Vec3f JungleLand_singularPlank_Settings[] = {
#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colS.inc.c"
};
CollisionData JungleLand_singularPlank_Header[] = {
#include "assets/levelGroup/JungleLand/singularPlank/singularPlank.colH.inc.c"
};
Vec3f JungleLand_roomSixStartPlatform_Verts[] = {
#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colV.inc.c"
};
Vec3s JungleLand_roomSixStartPlatform_Tris[] = {
#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colT.inc.c"
};
Vec3f JungleLand_roomSixStartPlatform_Settings[] = {
#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colS.inc.c"
};
CollisionData JungleLand_roomSixStartPlatform_Header[] = {
#include "assets/levelGroup/JungleLand/roomSixStartPlatform/roomSixStartPlatform.colH.inc.c"
};
Vec3f JungleLand_cavePlatform_Verts[] = {
#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colV.inc.c"
};
Vec3s JungleLand_cavePlatform_Tris[] = {
#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colT.inc.c"
};
Vec3f JungleLand_cavePlatform_Settings[] = {
#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colS.inc.c"
};
CollisionData JungleLand_cavePlatform_Header[] = {
#include "assets/levelGroup/JungleLand/cavePlatform/cavePlatform.colH.inc.c"
};
Vec3f JungleLand_roomSixCrownPlatform_Verts[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colV.inc.c"
};
Vec3s JungleLand_roomSixCrownPlatform_Tris[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colT.inc.c"
};
Vec3f JungleLand_roomSixCrownPlatform_Settings[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colS.inc.c"
};
CollisionData JungleLand_roomSixCrownPlatform_Header[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownPlatform/roomSixCrownPlatform.colH.inc.c"
};
Vec3f JungleLand_roomSixSidePlatform_Verts[] = {
#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colV.inc.c"
};
Vec3s JungleLand_roomSixSidePlatform_Tris[] = {
#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colT.inc.c"
};
Vec3f JungleLand_roomSixSidePlatform_Settings[] = {
#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colS.inc.c"
};
CollisionData JungleLand_roomSixSidePlatform_Header[] = {
#include "assets/levelGroup/JungleLand/roomSixSidePlatform/roomSixSidePlatform.colH.inc.c"
};
Vec3f JungleLand_roomSevenLava_Verts[] = {
#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colV.inc.c"
};
Vec3s JungleLand_roomSevenLava_Tris[] = {
#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colT.inc.c"
};
Vec3f JungleLand_roomSevenLava_Settings[] = {
#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colS.inc.c"
};
CollisionData JungleLand_roomSevenLava_Header[] = {
#include "assets/levelGroup/JungleLand/roomSevenLava/roomSevenLava.colH.inc.c"
};
Vec3f JungleLand_roomSevenFloor_Verts[] = {
#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colV.inc.c"
};
Vec3s JungleLand_roomSevenFloor_Tris[] = {
#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colT.inc.c"
};
Vec3f JungleLand_roomSevenFloor_Settings[] = {
#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colS.inc.c"
};
CollisionData JungleLand_roomSevenFloor_Header[] = {
#include "assets/levelGroup/JungleLand/roomSevenFloor/roomSevenFloor.colH.inc.c"
};
Vec3f JungleLand_roomZeroLava_Verts[] = {
#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colV.inc.c"
};
Vec3s JungleLand_roomZeroLava_Tris[] = {
#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colT.inc.c"
};
Vec3f JungleLand_roomZeroLava_Settings[] = {
#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colS.inc.c"
};
CollisionData JungleLand_roomZeroLava_Header[] = {
#include "assets/levelGroup/JungleLand/roomZeroLava/roomZeroLava.colH.inc.c"
};
Vec3f JungleLand_roomOnePlatform_Verts[] = {
#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colV.inc.c"
};
Vec3s JungleLand_roomOnePlatform_Tris[] = {
#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colT.inc.c"
};
Vec3f JungleLand_roomOnePlatform_Settings[] = {
#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colS.inc.c"
};
CollisionData JungleLand_roomOnePlatform_Header[] = {
#include "assets/levelGroup/JungleLand/roomOnePlatform/roomOnePlatform.colH.inc.c"
};
Vec3f JungleLand_roomSixCrownEdgePlatform_Verts[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colV.inc.c"
};
Vec3s JungleLand_roomSixCrownEdgePlatform_Tris[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colT.inc.c"
};
Vec3f JungleLand_roomSixCrownEdgePlatform_Settings[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colS.inc.c"
};
CollisionData JungleLand_roomSixCrownEdgePlatform_Header[] = {
#include "assets/levelGroup/JungleLand/roomSixCrownEdgePlatform/roomSixCrownEdgePlatform.colH.inc.c"
};
Vec3f JungleLand_roomSevenSpinRing_Verts[] = {
#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colV.inc.c"
};
Vec3s JungleLand_roomSevenSpinRing_Tris[] = {
#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colT.inc.c"
};
Vec3f JungleLand_roomSevenSpinRing_Settings[] = {
#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colS.inc.c"
};
CollisionData JungleLand_roomSevenSpinRing_Header[] = {
#include "assets/levelGroup/JungleLand/roomSevenSpinRing/roomSevenSpinRing.colH.inc.c"
};
Vec3f JungleLand_woodBlock_Verts[] = {
#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colV.inc.c"
};
Vec3s JungleLand_woodBlock_Tris[] = {
#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colT.inc.c"
};
Vec3f JungleLand_woodBlock_Settings[] = {
#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colS.inc.c"
};
CollisionData JungleLand_woodBlock_Header[] = {
#include "assets/levelGroup/JungleLand/woodBlock/woodBlock.colH.inc.c"
};
Vec3f JungleLand_ropes_Verts[] = {
#include "assets/levelGroup/JungleLand/ropes/ropes.colV.inc.c"
};
Vec3s JungleLand_ropes_Tris[] = {
#include "assets/levelGroup/JungleLand/ropes/ropes.colT.inc.c"
};
Vec3f JungleLand_ropes_Settings[] = {
#include "assets/levelGroup/JungleLand/ropes/ropes.colS.inc.c"
};
CollisionData JungleLand_ropes_Header[] = {
#include "assets/levelGroup/JungleLand/ropes/ropes.colH.inc.c"
};
Vec3f JungleLand_railOne_Verts[] = {
#include "assets/levelGroup/JungleLand/railOne/railOne.colV.inc.c"
};
Vec3s JungleLand_railOne_Tris[] = {
#include "assets/levelGroup/JungleLand/railOne/railOne.colT.inc.c"
};
Vec3f JungleLand_railOne_Settings[] = {
#include "assets/levelGroup/JungleLand/railOne/railOne.colS.inc.c"
};
CollisionData JungleLand_railOne_Header[] = {
#include "assets/levelGroup/JungleLand/railOne/railOne.colH.inc.c"
};
Vec3f JungleLand_railTwo_Verts[] = {
#include "assets/levelGroup/JungleLand/railTwo/railTwo.colV.inc.c"
};
Vec3s JungleLand_railTwo_Tris[] = {
#include "assets/levelGroup/JungleLand/railTwo/railTwo.colT.inc.c"
};
Vec3f JungleLand_railTwo_Settings[] = {
#include "assets/levelGroup/JungleLand/railTwo/railTwo.colS.inc.c"
};
CollisionData JungleLand_railTwo_Header[] = {
#include "assets/levelGroup/JungleLand/railTwo/railTwo.colH.inc.c"
};
Vec3f JungleLand_railThree_Verts[] = {
#include "assets/levelGroup/JungleLand/railThree/railThree.colV.inc.c"
};
Vec3s JungleLand_railThree_Tris[] = {
#include "assets/levelGroup/JungleLand/railThree/railThree.colT.inc.c"
};
Vec3f JungleLand_railThree_Settings[] = {
#include "assets/levelGroup/JungleLand/railThree/railThree.colS.inc.c"
};
CollisionData JungleLand_railThree_Header[] = {
#include "assets/levelGroup/JungleLand/railThree/railThree.colH.inc.c"
};
Vec3f JungleLand_railFour_Verts[] = {
#include "assets/levelGroup/JungleLand/railFour/railFour.colV.inc.c"
};
Vec3s JungleLand_railFour_Tris[] = {
#include "assets/levelGroup/JungleLand/railFour/railFour.colT.inc.c"
};
Vec3f JungleLand_railFour_Settings[] = {
#include "assets/levelGroup/JungleLand/railFour/railFour.colS.inc.c"
};
CollisionData JungleLand_railFour_Header[] = {
#include "assets/levelGroup/JungleLand/railFour/railFour.colH.inc.c"
};
Vec3f JungleLand_railFive_Verts[] = {
#include "assets/levelGroup/JungleLand/railFive/railFive.colV.inc.c"
};
Vec3s JungleLand_railFive_Tris[] = {
#include "assets/levelGroup/JungleLand/railFive/railFive.colT.inc.c"
};
Vec3f JungleLand_railFive_Settings[] = {
#include "assets/levelGroup/JungleLand/railFive/railFive.colS.inc.c"
};
CollisionData JungleLand_railFive_Header[] = {
#include "assets/levelGroup/JungleLand/railFive/railFive.colH.inc.c"
};
Vec3f JungleLand_railSix_Verts[] = {
#include "assets/levelGroup/JungleLand/railSix/railSix.colV.inc.c"
};
Vec3s JungleLand_railSix_Tris[] = {
#include "assets/levelGroup/JungleLand/railSix/railSix.colT.inc.c"
};
Vec3f JungleLand_railSix_Settings[] = {
#include "assets/levelGroup/JungleLand/railSix/railSix.colS.inc.c"
};
CollisionData JungleLand_railSix_Header[] = {
#include "assets/levelGroup/JungleLand/railSix/railSix.colH.inc.c"
};
Vec3f JungleLand_rail_Verts[] = {
#include "assets/levelGroup/JungleLand/rail/rail.colV.inc.c"
};
Vec3s JungleLand_rail_Tris[] = {
#include "assets/levelGroup/JungleLand/rail/rail.colT.inc.c"
};
Vec3f JungleLand_rail_Settings[] = {
#include "assets/levelGroup/JungleLand/rail/rail.colS.inc.c"
};
CollisionData JungleLand_rail_Header[] = {
#include "assets/levelGroup/JungleLand/rail/rail.colH.inc.c"
};
Vec3f JungleLand_ctCrate3_Verts[] = {
#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colV.inc.c"
};
Vec3s JungleLand_ctCrate3_Tris[] = {
#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colT.inc.c"
};
Vec3f JungleLand_ctCrate3_Settings[] = {
#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colS.inc.c"
};
CollisionData JungleLand_ctCrate3_Header[] = {
#include "assets/levelGroup/JungleLand/ctCrate3/ctCrate3.colH.inc.c"
};
Vec3f JungleLand_logOne_Verts[] = {
#include "assets/levelGroup/JungleLand/logOne/logOne.colV.inc.c"
};
Vec3s JungleLand_logOne_Tris[] = {
#include "assets/levelGroup/JungleLand/logOne/logOne.colT.inc.c"
};
Vec3f JungleLand_logOne_Settings[] = {
#include "assets/levelGroup/JungleLand/logOne/logOne.colS.inc.c"
};
CollisionData JungleLand_logOne_Header[] = {
#include "assets/levelGroup/JungleLand/logOne/logOne.colH.inc.c"
};
Vec3f JungleLand_fallBridgeSmall2_Verts[] = {
#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colV.inc.c"
};
Vec3s JungleLand_fallBridgeSmall2_Tris[] = {
#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colT.inc.c"
};
Vec3f JungleLand_fallBridgeSmall2_Settings[] = {
#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colS.inc.c"
};
CollisionData JungleLand_fallBridgeSmall2_Header[] = {
#include "assets/levelGroup/JungleLand/fallBridgeSmall2/fallBridgeSmall2.colH.inc.c"
};
Vec3f JungleLand_logSetPiece_Verts[] = {
#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colV.inc.c"
};
Vec3s JungleLand_logSetPiece_Tris[] = {
#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colT.inc.c"
};
Vec3f JungleLand_logSetPiece_Settings[] = {
#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colS.inc.c"
};
CollisionData JungleLand_logSetPiece_Header[] = {
#include "assets/levelGroup/JungleLand/logSetPiece/logSetPiece.colH.inc.c"
};
Vec3f JungleLand_holeLog_Verts[] = {
#include "assets/levelGroup/JungleLand/holeLog/holeLog.colV.inc.c"
};
Vec3s JungleLand_holeLog_Tris[] = {
#include "assets/levelGroup/JungleLand/holeLog/holeLog.colT.inc.c"
};
Vec3f JungleLand_holeLog_Settings[] = {
#include "assets/levelGroup/JungleLand/holeLog/holeLog.colS.inc.c"
};
CollisionData JungleLand_holeLog_Header[] = {
#include "assets/levelGroup/JungleLand/holeLog/holeLog.colH.inc.c"
};
Vec3f JungleLand_waterfallGroundCollision_Verts[] = {
#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colV.inc.c"
};
Vec3s JungleLand_waterfallGroundCollision_Tris[] = {
#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colT.inc.c"
};
Vec3f JungleLand_waterfallGroundCollision_Settings[] = {
#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colS.inc.c"
};
CollisionData JungleLand_waterfallGroundCollision_Header[] = {
#include "assets/levelGroup/JungleLand/waterfallGroundCollision/waterfallGroundCollision.colH.inc.c"
};
Vec3f JungleLand_waterfallBacksideCollision_Verts[] = {
#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colV.inc.c"
};
Vec3s JungleLand_waterfallBacksideCollision_Tris[] = {
#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colT.inc.c"
};
Vec3f JungleLand_waterfallBacksideCollision_Settings[] = {
#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colS.inc.c"
};
CollisionData JungleLand_waterfallBacksideCollision_Header[] = {
#include "assets/levelGroup/JungleLand/waterfallBacksideCollision/waterfallBacksideCollision.colH.inc.c"
};
Vec3f JungleLand_groundCollision_Verts[] = {
#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colV.inc.c"
};
Vec3s JungleLand_groundCollision_Tris[] = {
#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colT.inc.c"
};
Vec3f JungleLand_groundCollision_Settings[] = {
#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colS.inc.c"
};
CollisionData JungleLand_groundCollision_Header[] = {
#include "assets/levelGroup/JungleLand/groundCollision/groundCollision.colH.inc.c"
};
Vec3f JungleLand_holeLogBottom_Verts[] = {
#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colV.inc.c"
};
Vec3s JungleLand_holeLogBottom_Tris[] = {
#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colT.inc.c"
};
Vec3f JungleLand_holeLogBottom_Settings[] = {
#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colS.inc.c"
};
CollisionData JungleLand_holeLogBottom_Header[] = {
#include "assets/levelGroup/JungleLand/holeLogBottom/holeLogBottom.colH.inc.c"
};
Vec3f JungleLand_extThree_Verts[] = {
#include "assets/levelGroup/JungleLand/extThree/extThree.colV.inc.c"
};
Vec3s JungleLand_extThree_Tris[] = {
#include "assets/levelGroup/JungleLand/extThree/extThree.colT.inc.c"
};
Vec3f JungleLand_extThree_Settings[] = {
#include "assets/levelGroup/JungleLand/extThree/extThree.colS.inc.c"
};
CollisionData JungleLand_extThree_Header[] = {
#include "assets/levelGroup/JungleLand/extThree/extThree.colH.inc.c"
};
Vec3f JungleLand_extFour_Verts[] = {
#include "assets/levelGroup/JungleLand/extFour/extFour.colV.inc.c"
};
Vec3s JungleLand_extFour_Tris[] = {
#include "assets/levelGroup/JungleLand/extFour/extFour.colT.inc.c"
};
Vec3f JungleLand_extFour_Settings[] = {
#include "assets/levelGroup/JungleLand/extFour/extFour.colS.inc.c"
};
CollisionData JungleLand_extFour_Header[] = {
#include "assets/levelGroup/JungleLand/extFour/extFour.colH.inc.c"
};
Vec3f JungleLand_extZero_Verts[] = {
#include "assets/levelGroup/JungleLand/extZero/extZero.colV.inc.c"
};
Vec3s JungleLand_extZero_Tris[] = {
#include "assets/levelGroup/JungleLand/extZero/extZero.colT.inc.c"
};
Vec3f JungleLand_extZero_Settings[] = {
#include "assets/levelGroup/JungleLand/extZero/extZero.colS.inc.c"
};
CollisionData JungleLand_extZero_Header[] = {
#include "assets/levelGroup/JungleLand/extZero/extZero.colH.inc.c"
};
Vec3f JungleLand_extOne_Verts[] = {
#include "assets/levelGroup/JungleLand/extOne/extOne.colV.inc.c"
};
Vec3s JungleLand_extOne_Tris[] = {
#include "assets/levelGroup/JungleLand/extOne/extOne.colT.inc.c"
};
Vec3f JungleLand_extOne_Settings[] = {
#include "assets/levelGroup/JungleLand/extOne/extOne.colS.inc.c"
};
CollisionData JungleLand_extOne_Header[] = {
#include "assets/levelGroup/JungleLand/extOne/extOne.colH.inc.c"
};
Vec3f JungleLand_extTwo_Verts[] = {
#include "assets/levelGroup/JungleLand/extTwo/extTwo.colV.inc.c"
};
Vec3s JungleLand_extTwo_Tris[] = {
#include "assets/levelGroup/JungleLand/extTwo/extTwo.colT.inc.c"
};
Vec3f JungleLand_extTwo_Settings[] = {
#include "assets/levelGroup/JungleLand/extTwo/extTwo.colS.inc.c"
};
CollisionData JungleLand_extTwo_Header[] = {
#include "assets/levelGroup/JungleLand/extTwo/extTwo.colH.inc.c"
};
Vec3f JungleLand_rockFloor_Verts[] = {
#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colV.inc.c"
};
Vec3s JungleLand_rockFloor_Tris[] = {
#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colT.inc.c"
};
Vec3f JungleLand_rockFloor_Settings[] = {
#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colS.inc.c"
};
CollisionData JungleLand_rockFloor_Header[] = {
#include "assets/levelGroup/JungleLand/rockFloor/rockFloor.colH.inc.c"
};
Vec3f JungleLand_rockFloor2_Verts[] = {
#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colV.inc.c"
};
Vec3s JungleLand_rockFloor2_Tris[] = {
#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colT.inc.c"
};
Vec3f JungleLand_rockFloor2_Settings[] = {
#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colS.inc.c"
};
CollisionData JungleLand_rockFloor2_Header[] = {
#include "assets/levelGroup/JungleLand/rockFloor2/rockFloor2.colH.inc.c"
};
Vec3f JungleLand_extFive_Verts[] = {
#include "assets/levelGroup/JungleLand/extFive/extFive.colV.inc.c"
};
Vec3s JungleLand_extFive_Tris[] = {
#include "assets/levelGroup/JungleLand/extFive/extFive.colT.inc.c"
};
Vec3f JungleLand_extFive_Settings[] = {
#include "assets/levelGroup/JungleLand/extFive/extFive.colS.inc.c"
};
CollisionData JungleLand_extFive_Header[] = {
#include "assets/levelGroup/JungleLand/extFive/extFive.colH.inc.c"
};
Vec3f JungleLand_extThreePartTwo_Verts[] = {
#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colV.inc.c"
};
Vec3s JungleLand_extThreePartTwo_Tris[] = {
#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colT.inc.c"
};
Vec3f JungleLand_extThreePartTwo_Settings[] = {
#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colS.inc.c"
};
CollisionData JungleLand_extThreePartTwo_Header[] = {
#include "assets/levelGroup/JungleLand/extThreePartTwo/extThreePartTwo.colH.inc.c"
};
Vec3f JungleLand_extFivePartTwo_Verts[] = {
#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colV.inc.c"
};
Vec3s JungleLand_extFivePartTwo_Tris[] = {
#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colT.inc.c"
};
Vec3f JungleLand_extFivePartTwo_Settings[] = {
#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colS.inc.c"
};
CollisionData JungleLand_extFivePartTwo_Header[] = {
#include "assets/levelGroup/JungleLand/extFivePartTwo/extFivePartTwo.colH.inc.c"
};
Vec3f JungleLand_extSix_Verts[] = {
#include "assets/levelGroup/JungleLand/extSix/extSix.colV.inc.c"
};
Vec3s JungleLand_extSix_Tris[] = {
#include "assets/levelGroup/JungleLand/extSix/extSix.colT.inc.c"
};
Vec3f JungleLand_extSix_Settings[] = {
#include "assets/levelGroup/JungleLand/extSix/extSix.colS.inc.c"
};
CollisionData JungleLand_extSix_Header[] = {
#include "assets/levelGroup/JungleLand/extSix/extSix.colH.inc.c"
};
Vec3f JungleLand_extSeven_Verts[] = {
#include "assets/levelGroup/JungleLand/extSeven/extSeven.colV.inc.c"
};
Vec3s JungleLand_extSeven_Tris[] = {
#include "assets/levelGroup/JungleLand/extSeven/extSeven.colT.inc.c"
};
Vec3f JungleLand_extSeven_Settings[] = {
#include "assets/levelGroup/JungleLand/extSeven/extSeven.colS.inc.c"
};
CollisionData JungleLand_extSeven_Header[] = {
#include "assets/levelGroup/JungleLand/extSeven/extSeven.colH.inc.c"
};
Vec3f JungleLand_extEight_Verts[] = {
#include "assets/levelGroup/JungleLand/extEight/extEight.colV.inc.c"
};
Vec3s JungleLand_extEight_Tris[] = {
#include "assets/levelGroup/JungleLand/extEight/extEight.colT.inc.c"
};
Vec3f JungleLand_extEight_Settings[] = {
#include "assets/levelGroup/JungleLand/extEight/extEight.colS.inc.c"
};
CollisionData JungleLand_extEight_Header[] = {
#include "assets/levelGroup/JungleLand/extEight/extEight.colH.inc.c"
};
Vec3f JungleLand_extEightBridge_Verts[] = {
#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colV.inc.c"
};
Vec3s JungleLand_extEightBridge_Tris[] = {
#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colT.inc.c"
};
Vec3f JungleLand_extEightBridge_Settings[] = {
#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colS.inc.c"
};
CollisionData JungleLand_extEightBridge_Header[] = {
#include "assets/levelGroup/JungleLand/extEightBridge/extEightBridge.colH.inc.c"
};
Vec3f JungleLand_extNine_Verts[] = {
#include "assets/levelGroup/JungleLand/extNine/extNine.colV.inc.c"
};
Vec3s JungleLand_extNine_Tris[] = {
#include "assets/levelGroup/JungleLand/extNine/extNine.colT.inc.c"
};
Vec3f JungleLand_extNine_Settings[] = {
#include "assets/levelGroup/JungleLand/extNine/extNine.colS.inc.c"
};
CollisionData JungleLand_extNine_Header[] = {
#include "assets/levelGroup/JungleLand/extNine/extNine.colH.inc.c"
};
Vec3f JungleLand_extTen_Verts[] = {
#include "assets/levelGroup/JungleLand/extTen/extTen.colV.inc.c"
};
Vec3s JungleLand_extTen_Tris[] = {
#include "assets/levelGroup/JungleLand/extTen/extTen.colT.inc.c"
};
Vec3f JungleLand_extTen_Settings[] = {
#include "assets/levelGroup/JungleLand/extTen/extTen.colS.inc.c"
};
CollisionData JungleLand_extTen_Header[] = {
#include "assets/levelGroup/JungleLand/extTen/extTen.colH.inc.c"
};
Vec3f JungleLand_extEleven_Verts[] = {
#include "assets/levelGroup/JungleLand/extEleven/extEleven.colV.inc.c"
};
Vec3s JungleLand_extEleven_Tris[] = {
#include "assets/levelGroup/JungleLand/extEleven/extEleven.colT.inc.c"
};
Vec3f JungleLand_extEleven_Settings[] = {
#include "assets/levelGroup/JungleLand/extEleven/extEleven.colS.inc.c"
};
CollisionData JungleLand_extEleven_Header[] = {
#include "assets/levelGroup/JungleLand/extEleven/extEleven.colH.inc.c"
};
Vec3f JungleLand_intZero_Verts[] = {
#include "assets/levelGroup/JungleLand/intZero/intZero.colV.inc.c"
};
Vec3s JungleLand_intZero_Tris[] = {
#include "assets/levelGroup/JungleLand/intZero/intZero.colT.inc.c"
};
Vec3f JungleLand_intZero_Settings[] = {
#include "assets/levelGroup/JungleLand/intZero/intZero.colS.inc.c"
};
CollisionData JungleLand_intZero_Header[] = {
#include "assets/levelGroup/JungleLand/intZero/intZero.colH.inc.c"
};
Vec3f JungleLand_intOne_Verts[] = {
#include "assets/levelGroup/JungleLand/intOne/intOne.colV.inc.c"
};
Vec3s JungleLand_intOne_Tris[] = {
#include "assets/levelGroup/JungleLand/intOne/intOne.colT.inc.c"
};
Vec3f JungleLand_intOne_Settings[] = {
#include "assets/levelGroup/JungleLand/intOne/intOne.colS.inc.c"
};
CollisionData JungleLand_intOne_Header[] = {
#include "assets/levelGroup/JungleLand/intOne/intOne.colH.inc.c"
};
Vec3f JungleLand_intTwo_Verts[] = {
#include "assets/levelGroup/JungleLand/intTwo/intTwo.colV.inc.c"
};
Vec3s JungleLand_intTwo_Tris[] = {
#include "assets/levelGroup/JungleLand/intTwo/intTwo.colT.inc.c"
};
Vec3f JungleLand_intTwo_Settings[] = {
#include "assets/levelGroup/JungleLand/intTwo/intTwo.colS.inc.c"
};
CollisionData JungleLand_intTwo_Header[] = {
#include "assets/levelGroup/JungleLand/intTwo/intTwo.colH.inc.c"
};
Vec3f JungleLand_intThree_Verts[] = {
#include "assets/levelGroup/JungleLand/intThree/intThree.colV.inc.c"
};
Vec3s JungleLand_intThree_Tris[] = {
#include "assets/levelGroup/JungleLand/intThree/intThree.colT.inc.c"
};
Vec3f JungleLand_intThree_Settings[] = {
#include "assets/levelGroup/JungleLand/intThree/intThree.colS.inc.c"
};
CollisionData JungleLand_intThree_Header[] = {
#include "assets/levelGroup/JungleLand/intThree/intThree.colH.inc.c"
};
Vec3f JungleLand_intFour_Verts[] = {
#include "assets/levelGroup/JungleLand/intFour/intFour.colV.inc.c"
};
Vec3s JungleLand_intFour_Tris[] = {
#include "assets/levelGroup/JungleLand/intFour/intFour.colT.inc.c"
};
Vec3f JungleLand_intFour_Settings[] = {
#include "assets/levelGroup/JungleLand/intFour/intFour.colS.inc.c"
};
CollisionData JungleLand_intFour_Header[] = {
#include "assets/levelGroup/JungleLand/intFour/intFour.colH.inc.c"
};
Vec3f JungleLand_intSix_Verts[] = {
#include "assets/levelGroup/JungleLand/intSix/intSix.colV.inc.c"
};
Vec3s JungleLand_intSix_Tris[] = {
#include "assets/levelGroup/JungleLand/intSix/intSix.colT.inc.c"
};
Vec3f JungleLand_intSix_Settings[] = {
#include "assets/levelGroup/JungleLand/intSix/intSix.colS.inc.c"
};
CollisionData JungleLand_intSix_Header[] = {
#include "assets/levelGroup/JungleLand/intSix/intSix.colH.inc.c"
};
Vec3f JungleLand_intSeven_Verts[] = {
#include "assets/levelGroup/JungleLand/intSeven/intSeven.colV.inc.c"
};
Vec3s JungleLand_intSeven_Tris[] = {
#include "assets/levelGroup/JungleLand/intSeven/intSeven.colT.inc.c"
};
Vec3f JungleLand_intSeven_Settings[] = {
#include "assets/levelGroup/JungleLand/intSeven/intSeven.colS.inc.c"
};
CollisionData JungleLand_intSeven_Header[] = {
#include "assets/levelGroup/JungleLand/intSeven/intSeven.colH.inc.c"
};
Vec3f JungleLand_intFive_Verts[] = {
#include "assets/levelGroup/JungleLand/intFive/intFive.colV.inc.c"
};
Vec3s JungleLand_intFive_Tris[] = {
#include "assets/levelGroup/JungleLand/intFive/intFive.colT.inc.c"
};
Vec3f JungleLand_intFive_Settings[] = {
#include "assets/levelGroup/JungleLand/intFive/intFive.colS.inc.c"
};
CollisionData JungleLand_intFive_Header[] = {
#include "assets/levelGroup/JungleLand/intFive/intFive.colH.inc.c"
};
Vec3f JungleLand_railFloorOne_Verts[] = {
#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colV.inc.c"
};
Vec3s JungleLand_railFloorOne_Tris[] = {
#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colT.inc.c"
};
Vec3f JungleLand_railFloorOne_Settings[] = {
#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colS.inc.c"
};
CollisionData JungleLand_railFloorOne_Header[] = {
#include "assets/levelGroup/JungleLand/railFloorOne/railFloorOne.colH.inc.c"
};
Vec3f JungleLand_singleRailTrack_Verts[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colV.inc.c"
};
Vec3s JungleLand_singleRailTrack_Tris[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colT.inc.c"
};
Vec3f JungleLand_singleRailTrack_Settings[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colS.inc.c"
};
CollisionData JungleLand_singleRailTrack_Header[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack/singleRailTrack.colH.inc.c"
};
Vec3f JungleLand_singleRailTrack2_Verts[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colV.inc.c"
};
Vec3s JungleLand_singleRailTrack2_Tris[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colT.inc.c"
};
Vec3f JungleLand_singleRailTrack2_Settings[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colS.inc.c"
};
CollisionData JungleLand_singleRailTrack2_Header[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack2/singleRailTrack2.colH.inc.c"
};
Vec3f JungleLand_branchRail_Verts[] = {
#include "assets/levelGroup/JungleLand/branchRail/branchRail.colV.inc.c"
};
Vec3s JungleLand_branchRail_Tris[] = {
#include "assets/levelGroup/JungleLand/branchRail/branchRail.colT.inc.c"
};
Vec3f JungleLand_branchRail_Settings[] = {
#include "assets/levelGroup/JungleLand/branchRail/branchRail.colS.inc.c"
};
CollisionData JungleLand_branchRail_Header[] = {
#include "assets/levelGroup/JungleLand/branchRail/branchRail.colH.inc.c"
};
Vec3f JungleLand_turnRail_Verts[] = {
#include "assets/levelGroup/JungleLand/turnRail/turnRail.colV.inc.c"
};
Vec3s JungleLand_turnRail_Tris[] = {
#include "assets/levelGroup/JungleLand/turnRail/turnRail.colT.inc.c"
};
Vec3f JungleLand_turnRail_Settings[] = {
#include "assets/levelGroup/JungleLand/turnRail/turnRail.colS.inc.c"
};
CollisionData JungleLand_turnRail_Header[] = {
#include "assets/levelGroup/JungleLand/turnRail/turnRail.colH.inc.c"
};
Vec3f JungleLand_singleRailTrack3_Verts[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colV.inc.c"
};
Vec3s JungleLand_singleRailTrack3_Tris[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colT.inc.c"
};
Vec3f JungleLand_singleRailTrack3_Settings[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colS.inc.c"
};
CollisionData JungleLand_singleRailTrack3_Header[] = {
#include "assets/levelGroup/JungleLand/singleRailTrack3/singleRailTrack3.colH.inc.c"
};
Vec3f JungleLand_brokenMinecartRail_Verts[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colV.inc.c"
};
Vec3s JungleLand_brokenMinecartRail_Tris[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colT.inc.c"
};
Vec3f JungleLand_brokenMinecartRail_Settings[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colS.inc.c"
};
CollisionData JungleLand_brokenMinecartRail_Header[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail/brokenMinecartRail.colH.inc.c"
};
Vec3f JungleLand_brokenMinecartRail2_Verts[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colV.inc.c"
};
Vec3s JungleLand_brokenMinecartRail2_Tris[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colT.inc.c"
};
Vec3f JungleLand_brokenMinecartRail2_Settings[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colS.inc.c"
};
CollisionData JungleLand_brokenMinecartRail2_Header[] = {
#include "assets/levelGroup/JungleLand/brokenMinecartRail2/brokenMinecartRail2.colH.inc.c"
};
Vec3f JungleLand_minecart_Verts[] = {
#include "assets/levelGroup/JungleLand/minecart/minecart.colV.inc.c"
};
Vec3s JungleLand_minecart_Tris[] = {
#include "assets/levelGroup/JungleLand/minecart/minecart.colT.inc.c"
};
Vec3f JungleLand_minecart_Settings[] = {
#include "assets/levelGroup/JungleLand/minecart/minecart.colS.inc.c"
};
CollisionData JungleLand_minecart_Header[] = {
#include "assets/levelGroup/JungleLand/minecart/minecart.colH.inc.c"
};
Vec3f JungleLand_doorFraMEd_Verts[] = {
#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colV.inc.c"
};
Vec3s JungleLand_doorFraMEd_Tris[] = {
#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colT.inc.c"
};
Vec3f JungleLand_doorFraMEd_Settings[] = {
#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colS.inc.c"
};
CollisionData JungleLand_doorFraMEd_Header[] = {
#include "assets/levelGroup/JungleLand/doorFrame/doorFraMEd.colH.inc.c"
};
Vec3f JungleLand_doorFrame2_Verts[] = {
#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colV.inc.c"
};
Vec3s JungleLand_doorFrame2_Tris[] = {
#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colT.inc.c"
};
Vec3f JungleLand_doorFrame2_Settings[] = {
#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colS.inc.c"
};
CollisionData JungleLand_doorFrame2_Header[] = {
#include "assets/levelGroup/JungleLand/doorFrame2/doorFrame2.colH.inc.c"
};
Vec3f JungleLand_fernPlant_Verts[] = {
#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colV.inc.c"
};
Vec3s JungleLand_fernPlant_Tris[] = {
#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colT.inc.c"
};
Vec3f JungleLand_fernPlant_Settings[] = {
#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colS.inc.c"
};
CollisionData JungleLand_fernPlant_Header[] = {
#include "assets/levelGroup/JungleLand/fernPlant/fernPlant.colH.inc.c"
};
Vec3f JungleLand_waterfall_Verts[] = {
#include "assets/levelGroup/JungleLand/waterfall/waterfall.colV.inc.c"
};
Vec3s JungleLand_waterfall_Tris[] = {
#include "assets/levelGroup/JungleLand/waterfall/waterfall.colT.inc.c"
};
Vec3f JungleLand_waterfall_Settings[] = {
#include "assets/levelGroup/JungleLand/waterfall/waterfall.colS.inc.c"
};
CollisionData JungleLand_waterfall_Header[] = {
#include "assets/levelGroup/JungleLand/waterfall/waterfall.colH.inc.c"
};
Vec3f JungleLand_water_Verts[] = {
#include "assets/levelGroup/JungleLand/water/water.colV.inc.c"
};
Vec3s JungleLand_water_Tris[] = {
#include "assets/levelGroup/JungleLand/water/water.colT.inc.c"
};
Vec3f JungleLand_water_Settings[] = {
#include "assets/levelGroup/JungleLand/water/water.colS.inc.c"
};
CollisionData JungleLand_water_Header[] = {
#include "assets/levelGroup/JungleLand/water/water.colH.inc.c"
};
unsigned char JungleLand_whaermrr_Bin[] = {
#include "build/include/assets/levelGroup/JungleLand/whaermrr.inc.c"
};
Mtx_f JungleLand_jlScope2_Mtx = {
#include "assets/levelGroup/JungleLand/jlScope2/jlScope2.mtx.inc.c"
};
Lights1 JungleLand_jlScope2_Light =
#include "assets/levelGroup/JungleLand/jlScope2/jlScope2.light.inc.c"
Vtx JungleLand_rockGolem_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.vtx.inc.c"
};
Mtx_f JungleLand_rockGolem_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.mtx.inc.c"
};
unsigned char JungleLand_Pad30[] = FILEPAD;
unsigned char JungleLand_golem_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/golem.ci4.png.inc.c"
};
unsigned char JungleLand_Pad31[] = FILEPAD;
unsigned char JungleLand_golem_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/golem.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad32[] = FILEPAD;
unsigned char JungleLand_golemFace_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/golemFace.ci8.png.inc.c"
};
unsigned char JungleLand_Pad33[] = FILEPAD;
unsigned char JungleLand_golemFace_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/golemFace.ci8.pal.inc.c"
};
Gfx JungleLand_rockGolem_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolem/rockGolem.gfx.inc.c"
};
Vtx JungleLand_rockGolemLeg_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.vtx.inc.c"
};
Mtx_f JungleLand_rockGolemLeg_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.mtx.inc.c"
};
Gfx JungleLand_rockGolemLeg_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolemLeg/rockGolemLeg.gfx.inc.c"
};
Vtx JungleLand_rockGolemArm_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.vtx.inc.c"
};
Mtx_f JungleLand_rockGolemArm_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.mtx.inc.c"
};
unsigned char JungleLand_Pad34[] = FILEPAD;
unsigned char JungleLand_rock2_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rock2.ci4.png.inc.c"
};
unsigned char JungleLand_Pad35[] = FILEPAD;
unsigned char JungleLand_rock2_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/rock2.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad36[] = FILEPAD;
unsigned char JungleLand_rock3_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rock3.ci4.png.inc.c"
};
unsigned char JungleLand_Pad37[] = FILEPAD;
unsigned char JungleLand_rock3_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/rock3.ci4.pal.inc.c"
};
unsigned char JungleLand_Pad38[] = FILEPAD;
unsigned char JungleLand_rock4_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/rock4.ci4.png.inc.c"
};
unsigned char JungleLand_Pad39[] = FILEPAD;
unsigned char JungleLand_rock4_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/rock4.ci4.pal.inc.c"
};
Gfx JungleLand_rockGolemArm_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolemArm/rockGolemArm.gfx.inc.c"
};
Vtx JungleLand_rockGolemLeg2_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.vtx.inc.c"
};
Mtx_f JungleLand_rockGolemLeg2_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.mtx.inc.c"
};
Gfx JungleLand_rockGolemLeg2_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolemLeg2/rockGolemLeg2.gfx.inc.c"
};
Vtx JungleLand_rockGolemBody_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.vtx.inc.c"
};
Mtx_f JungleLand_rockGolemBody_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.mtx.inc.c"
};
Gfx JungleLand_rockGolemBody_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolemBody/rockGolemBody.gfx.inc.c"
};
Vtx JungleLand_rockGolemLeg3_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.vtx.inc.c"
};
Mtx_f JungleLand_rockGolemLeg3_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.mtx.inc.c"
};
Gfx JungleLand_rockGolemLeg3_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolemLeg3/rockGolemLeg3.gfx.inc.c"
};
Vtx JungleLand_rockGolemElbow_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.vtx.inc.c"
};
Mtx_f JungleLand_rockGolemElbow_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.mtx.inc.c"
};
Gfx JungleLand_rockGolemElbow_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolemElbow/rockGolemElbow.gfx.inc.c"
};
Vtx JungleLand_rockGolemArm2_Vtx[] = {
#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.vtx.inc.c"
};
Mtx_f JungleLand_rockGolemArm2_Mtx = {
#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.mtx.inc.c"
};
Gfx JungleLand_rockGolemArm2_Gfx[] = {
#include "assets/levelGroup/JungleLand/rockGolemArm2/rockGolemArm2.gfx.inc.c"
};
Mtx_f JungleLand_unkunk_Mtx = {
#include "assets/levelGroup/JungleLand/unkunk.mtx.inc.c"
};
Gfx JungleLand_unkunk_Gfx[] = {
#include "assets/levelGroup/JungleLand/unkunk.gfx.inc.c"
};
Vtx JungleLand_spiderRock_Vtx[] = {
#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.vtx.inc.c"
};
Mtx_f JungleLand_spiderRock_Mtx = {
#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.mtx.inc.c"
};
unsigned char JungleLand_Pad40[] = FILEPAD;
unsigned char JungleLand_spiderRock_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/spiderRock.ci8.png.inc.c"
};
unsigned char JungleLand_Pad41[] = FILEPAD;
unsigned char JungleLand_spiderRock_PAL[] = {
#include "build/include/assets/levelGroup/JungleLand/spiderRock.ci8.pal.inc.c"
};
Gfx JungleLand_spiderRock_Gfx[] = {
#include "assets/levelGroup/JungleLand/spiderRock/spiderRock.gfx.inc.c"
};
Mtx_f JungleLand_unkunk2_Mtx = {
#include "assets/levelGroup/JungleLand/unkunk2.mtx.inc.c"
};
Gfx JungleLand_unkunk2_Gfx[] = {
#include "assets/levelGroup/JungleLand/unkunk2.gfx.inc.c"
};
Vtx JungleLand_fish_Vtx[] = {
#include "assets/levelGroup/JungleLand/fish/fish.vtx.inc.c"
};
Mtx_f JungleLand_fish_Mtx = {
#include "assets/levelGroup/JungleLand/fish/fish.mtx.inc.c"
};
unsigned char JungleLand_Pad42[] = FILEPAD;
unsigned char JungleLand_fish_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fish.rgba16.png.inc.c"
};
Gfx JungleLand_fish_Gfx[] = {
#include "assets/levelGroup/JungleLand/fish/fish.gfx.inc.c"
};
Mtx_f JungleLand_unkunk3_Mtx = {
#include "assets/levelGroup/JungleLand/unkunk3.mtx.inc.c"
};
Gfx JungleLand_unkunk3_Gfx[] = {
#include "assets/levelGroup/JungleLand/unkunk3.gfx.inc.c"
};
Vtx JungleLand_fishTail_Vtx[] = {
#include "assets/levelGroup/JungleLand/fishTail/fishTail.vtx.inc.c"
};
Mtx_f JungleLand_fishTail_Mtx = {
#include "assets/levelGroup/JungleLand/fishTail/fishTail.mtx.inc.c"
};
unsigned char JungleLand_Pad43[] = FILEPAD;
unsigned char JungleLand_fishTail_PNG[] = {
#include "build/include/assets/levelGroup/JungleLand/fishTail.rgba16.png.inc.c"
};
Gfx JungleLand_fishTail_Gfx[] = {
#include "assets/levelGroup/JungleLand/fishTail/fishTail.gfx.inc.c"
};
Mtx_f JungleLand_unkunk4_Mtx = {
#include "assets/levelGroup/JungleLand/unkunk4.mtx.inc.c"
};
Gfx JungleLand_unkunk4_Gfx[] = {
#include "assets/levelGroup/JungleLand/unkunk4.gfx.inc.c"
};

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
