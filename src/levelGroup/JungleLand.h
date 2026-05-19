#ifndef JUNGLELAND_H
#define JUNGLELAND_H

#include "common.h"

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

enum JungleLand_Models {
    G_FALLBACK_CUBE_MODEL = 0,
    G_EXIT_SHADOW_SOUTH_MODEL,
    G_EXIT_SHADOW_NORTH_MODEL,
    G_EXIT_SHADOW_EAST_MODEL,
    G_EXIT_SHADOW_WEST_MODEL,
    G_ALBL_EXIT_MODEL,
    G_SANDPIT_MODEL,
    G_BOSS_BRIDGE_MODEL,
    G_AL_POLE_MODEL,
    G_ALBL_DOOR_MODEL,
    G_AL_SPIN_DOOR_MODEL,
    G_BL_LAVA_FLOOR_MODEL,
    G_BL_LAVA_MODEL,
    G_BL_LAVA2_MODEL,
    G_BL_LAVA3_MODEL,
    G_BL_LAVA4_MODEL,
    G_BL_LAVA5_MODEL,
    G_BL_LAVA6_MODEL,
    G_BL_LAVA7_MODEL,
    G_BL_LAVA8_MODEL,
    G_BL_DESTRUCTABLE_TOP_MODEL,
    G_BL_METAL_BRIDGE_MODEL,
    G_KL_EXIT_MODEL,
    G_KL_DOOR_MODEL,
    G_DC_EXIT_MODEL,
    G_TALL_EXIT_SHADOW1_MODEL,
    G_TALL_EXIT_SHADOW2_MODEL,
    G_GC_EXIT1_MODEL,
    G_GC_EXIT2_MODEL,
    G_TRAINING_ROOM_LIGHT_MODEL,
    G_JL_CAVE_EXIT1_MODEL,
    G_JL_CAVE_EXIT2_MODEL,
    G_JL_CAVE_EXIT3_MODEL,
    G_JL_CAVE_EXIT4_MODEL,
    G_JL_OUTSIDE_ENTRANCE_MODEL,
    G_JL_FX_CAM_PILLAR_MODEL,
    G_JL_CAVE_DOOR_MODEL,
    JL_LILYPAD_MODEL,
    JL_VINE_MODEL,
    JL_FALLEN_CROWN_LOG_MODEL,
    JL_UNK_LOG_MODEL,
    JL_FALLEN_LOG_STUMP_MODEL,
    JL_LOG_TUNNEL_MODEL,
    JL_WATERFALL_ROCK_MODEL,
    JL_EXT_ENTRANCE_DOOR_FRAME_MODEL,
    JL_FALL_BRIDGE_MODEL,
    JL_CT_CRATE_MODEL,
    JL_CT_CRATE2_MODEL,
    JL_WALKING_PLANK_MODEL,
    JL_WALKING_PLANK2_MODEL,
    JL_WALKING_PLANK3_MODEL,
    JL_WALKING_PLANK4_MODEL,
    JL_SINGULAR_PLANK_MODEL,
    JL_ROOM_SIX_START_PLATFORM_MODEL,
    JL_CAVE_PLATFORM_MODEL,
    JL_ROOM_SIX_CROWN_PLATFORM_MODEL,
    JL_ROOM_SIX_SIDE_PLATFORM_MODEL,
    JL_ROOM_SEVEN_LAVA_MODEL,
    JL_ROOM_SEVEN_FLOOR_MODEL,
    JL_ROOM_ZERO_LAVA_MODEL,
    JL_ROOM_ONE_PLATFORM_MODEL,
    JL_ROOM_SIX_CROWN_EDGE_PLATFORM_MODEL,
    JL_ROOM_SEVEN_SPIN_RING_MODEL,
    JL_WOOD_BLOCK_MODEL,
    JL_ROPES_MODEL,
    JL_RAIL_ONE_MODEL,
    JL_RAIL_TWO_MODEL,
    JL_RAIL_THREE_MODEL,
    JL_RAIL_FOUR_MODEL,
    JL_RAIL_FIVE_MODEL,
    JL_RAIL_SIX_MODEL,
    JL_RAIL_MODEL,
    JL_CT_CRATE3_MODEL,
    JL_LOG_ONE_MODEL,
    JL_FALL_BRIDGE_SMALL2_MODEL,
    JL_LOG_SET_PIECE_MODEL,
    JL_HOLE_LOG_MODEL,
    JL_WATERFALL_GROUND_COLLISION_MODEL,
    JL_WATERFALL_BACKSIDE_COLLISION_MODEL,
    JL_GROUND_COLLISION_MODEL,
    JL_HOLE_LOG_BOTTOM_MODEL,
    JL_EXT_THREE_MODEL,
    JL_EXT_FOUR_MODEL,
    JL_EXT_ZERO_MODEL,
    JL_EXT_ONE_MODEL,
    JL_EXT_TWO_MODEL,
    JL_ROCK_FLOOR_MODEL,
    JL_ROCK_FLOOR2_MODEL,
    JL_EXT_FIVE_MODEL,
    JL_EXT_THREE_PART_TWO_MODEL,
    JL_EXT_FIVE_PART_TWO_MODEL,
    JL_EXT_SIX_MODEL,
    JL_EXT_SEVEN_MODEL,
    JL_EXT_EIGHT_MODEL,
    JL_EXT_EIGHT_BRIDGE_MODEL,
    JL_EXT_NINE_MODEL,
    JL_EXT_TEN_MODEL,
    JL_EXT_ELEVEN_MODEL,
    JL_INT_ZERO_MODEL,
    JL_INT_ONE_MODEL,
    JL_INT_TWO_MODEL,
    JL_INT_THREE_MODEL,
    JL_INT_FOUR_MODEL,
    JL_INT_SIX_MODEL,
    JL_INT_SEVEN_MODEL,
    JL_INT_FIVE_MODEL,
    JL_RAIL_FLOOR_ONE_MODEL,
    JL_SINGLE_RAIL_TRACK_MODEL,
    JL_SINGLE_RAIL_TRACK2_MODEL,
    JL_BRANCH_RAIL_MODEL,
    JL_TURN_RAIL_MODEL,
    JL_SINGLE_RAIL_TRACK3_MODEL,
    JL_BROKEN_MINECART_RAIL_MODEL,
    JL_BROKEN_MINECART_RAIL2_MODEL,
    JL_MINECART_MODEL,
    JL_DOOR_FRAME_MODEL,
    JL_DOOR_FRAME2_MODEL,
    JL_FERN_PLANT_MODEL,
    JL_WATERFALL_MODEL,
    JL_WATER_MODEL,
    JL_WATER2_MODEL,
    G_POLE_MODEL
};

#include "global_models.h"
extern Gfx JungleLand_lilypad_Gfx[];
extern ModelCollision JungleLand_lilypad_collision;
extern Gfx JungleLand_vine_Gfx[];
extern ModelCollision JungleLand_vine_collision;
extern Gfx JungleLand_fallenCrownLog_Gfx[];
extern ModelCollision JungleLand_fallenCrownLog_collision;
extern Gfx JungleLand_unkLog_Gfx[];
extern ModelCollision JungleLand_unkLog_collision;
extern Gfx JungleLand_fallenLogStump_Gfx[];
extern ModelCollision JungleLand_fallenLogStump_collision;
extern Gfx JungleLand_logTunnel_Gfx[];
extern ModelCollision JungleLand_logTunnel_collision;
extern Gfx JungleLand_waterfallRock_Gfx[];
extern ModelCollision JungleLand_waterfallRock_collision;
extern Gfx JungleLand_extEntranceDoorFrame_Gfx[];
extern ModelCollision JungleLand_extEntranceDoorFrame_collision;
extern Gfx JungleLand_fallBridge_Gfx[];
extern ModelCollision JungleLand_fallBridge_collision;
extern Gfx JungleLand_ctCrate_Gfx[];
extern ModelCollision JungleLand_ctCrate_collision;
extern Gfx JungleLand_ctCrate2_Gfx[];
extern ModelCollision JungleLand_ctCrate2_collision;
extern Gfx JungleLand_walkingPlank_Gfx[];
extern ModelCollision JungleLand_walkingPlank_collision;
extern Gfx JungleLand_walkingPlank2_Gfx[];
extern ModelCollision JungleLand_walkingPlank2_collision;
extern Gfx JungleLand_walkingPlank3_Gfx[];
extern ModelCollision JungleLand_walkingPlank3_collision;
extern Gfx JungleLand_walkingPlank4_Gfx[];
extern ModelCollision JungleLand_walkingPlank4_collision;
extern Gfx JungleLand_singularPlank_Gfx[];
extern ModelCollision JungleLand_singularPlank_collision;
extern Gfx JungleLand_roomSixStartPlatform_Gfx[];
extern ModelCollision JungleLand_roomSixStartPlatform_collision;
extern Gfx JungleLand_cavePlatform_Gfx[];
extern ModelCollision JungleLand_cavePlatform_collision;
extern Gfx JungleLand_roomSixCrownPlatform_Gfx[];
extern ModelCollision JungleLand_roomSixCrownPlatform_collision;
extern Gfx JungleLand_roomSixSidePlatform_Gfx[];
extern ModelCollision JungleLand_roomSixSidePlatform_collision;
extern Gfx JungleLand_roomSevenLava_Gfx[];
extern ModelCollision JungleLand_roomSevenLava_collision;
extern Gfx JungleLand_roomSevenFloor_Gfx[];
extern ModelCollision JungleLand_roomSevenFloor_collision;
extern Gfx JungleLand_roomZeroLava_Gfx[];
extern ModelCollision JungleLand_roomZeroLava_collision;
extern Gfx JungleLand_roomOnePlatform_Gfx[];
extern ModelCollision JungleLand_roomOnePlatform_collision;
extern Gfx JungleLand_roomSixCrownEdgePlatform_Gfx[];
extern ModelCollision JungleLand_roomSixCrownEdgePlatform_collision;
extern Gfx JungleLand_roomSevenSpinRing_Gfx[];
extern ModelCollision JungleLand_roomSevenSpinRing_collision;
extern Gfx JungleLand_woodBlock_Gfx[];
extern ModelCollision JungleLand_woodBlock_collision;
extern Gfx JungleLand_ropes_Gfx[];
extern ModelCollision JungleLand_ropes_collision;
extern Gfx JungleLand_railOne_Gfx[];
extern ModelCollision JungleLand_railOne_collision;
extern Gfx JungleLand_railTwo_Gfx[];
extern ModelCollision JungleLand_railTwo_collision;
extern Gfx JungleLand_railThree_Gfx[];
extern ModelCollision JungleLand_railThree_collision;
extern Gfx JungleLand_railFour_Gfx[];
extern ModelCollision JungleLand_railFour_collision;
extern Gfx JungleLand_railFive_Gfx[];
extern ModelCollision JungleLand_railFive_collision;
extern Gfx JungleLand_railSix_Gfx[];
extern ModelCollision JungleLand_railSix_collision;
extern Gfx JungleLand_rail_Gfx[];
extern ModelCollision JungleLand_rail_collision;
extern Gfx JungleLand_ctCrate3_Gfx[];
extern ModelCollision JungleLand_ctCrate3_collision;
extern Gfx JungleLand_logOne_Gfx[];
extern ModelCollision JungleLand_logOne_collision;
extern Gfx JungleLand_fallBridgeSmall2_Gfx[];
extern ModelCollision JungleLand_fallBridgeSmall2_collision;
extern Gfx JungleLand_logSetPiece_Gfx[];
extern ModelCollision JungleLand_logSetPiece_collision;
extern Gfx JungleLand_holeLog_Gfx[];
extern ModelCollision JungleLand_holeLog_collision;
extern Gfx JungleLand_waterfallGroundCollision_Gfx[];
extern ModelCollision JungleLand_waterfallGroundCollision_collision;
extern Gfx JungleLand_waterfallBacksideCollision_Gfx[];
extern ModelCollision JungleLand_waterfallBacksideCollision_collision;
extern Gfx JungleLand_groundCollision_Gfx[];
extern ModelCollision JungleLand_groundCollision_collision;
extern Gfx JungleLand_holeLogBottom_Gfx[];
extern ModelCollision JungleLand_holeLogBottom_collision;
extern Gfx JungleLand_extThree_Gfx[];
extern ModelCollision JungleLand_extThree_collision;
extern Gfx JungleLand_extFour_Gfx[];
extern ModelCollision JungleLand_extFour_collision;
extern Gfx JungleLand_extZero_Gfx[];
extern ModelCollision JungleLand_extZero_collision;
extern Gfx JungleLand_extOne_Gfx[];
extern ModelCollision JungleLand_extOne_collision;
extern Gfx JungleLand_extTwo_Gfx[];
extern ModelCollision JungleLand_extTwo_collision;
extern Gfx JungleLand_rockFloor_Gfx[];
extern ModelCollision JungleLand_rockFloor_collision;
extern Gfx JungleLand_rockFloor2_Gfx[];
extern ModelCollision JungleLand_rockFloor2_collision;
extern Gfx JungleLand_extFive_Gfx[];
extern ModelCollision JungleLand_extFive_collision;
extern Gfx JungleLand_extThreePartTwo_Gfx[];
extern ModelCollision JungleLand_extThreePartTwo_collision;
extern Gfx JungleLand_extFivePartTwo_Gfx[];
extern ModelCollision JungleLand_extFivePartTwo_collision;
extern Gfx JungleLand_extSix_Gfx[];
extern ModelCollision JungleLand_extSix_collision;
extern Gfx JungleLand_extSeven_Gfx[];
extern ModelCollision JungleLand_extSeven_collision;
extern Gfx JungleLand_extEight_Gfx[];
extern ModelCollision JungleLand_extEight_collision;
extern Gfx JungleLand_extEightBridge_Gfx[];
extern ModelCollision JungleLand_extEightBridge_collision;
extern Gfx JungleLand_extNine_Gfx[];
extern ModelCollision JungleLand_extNine_collision;
extern Gfx JungleLand_extTen_Gfx[];
extern ModelCollision JungleLand_extTen_collision;
extern Gfx JungleLand_extEleven_Gfx[];
extern ModelCollision JungleLand_extEleven_collision;
extern Gfx JungleLand_intZero_Gfx[];
extern ModelCollision JungleLand_intZero_collision;
extern Gfx JungleLand_intOne_Gfx[];
extern ModelCollision JungleLand_intOne_collision;
extern Gfx JungleLand_intTwo_Gfx[];
extern ModelCollision JungleLand_intTwo_collision;
extern Gfx JungleLand_intThree_Gfx[];
extern ModelCollision JungleLand_intThree_collision;
extern Gfx JungleLand_intFour_Gfx[];
extern ModelCollision JungleLand_intFour_collision;
extern Gfx JungleLand_intSix_Gfx[];
extern ModelCollision JungleLand_intSix_collision;
extern Gfx JungleLand_intSeven_Gfx[];
extern ModelCollision JungleLand_intSeven_collision;
extern Gfx JungleLand_intFive_Gfx[];
extern ModelCollision JungleLand_intFive_collision;
extern Gfx JungleLand_railFloorOne_Gfx[];
extern ModelCollision JungleLand_railFloorOne_collision;
extern Gfx JungleLand_singleRailTrack_Gfx[];
extern ModelCollision JungleLand_singleRailTrack_collision;
extern Gfx JungleLand_singleRailTrack2_Gfx[];
extern ModelCollision JungleLand_singleRailTrack2_collision;
extern Gfx JungleLand_branchRail_Gfx[];
extern ModelCollision JungleLand_branchRail_collision;
extern Gfx JungleLand_turnRail_Gfx[];
extern ModelCollision JungleLand_turnRail_collision;
extern Gfx JungleLand_singleRailTrack3_Gfx[];
extern ModelCollision JungleLand_singleRailTrack3_collision;
extern Gfx JungleLand_brokenMinecartRail_Gfx[];
extern ModelCollision JungleLand_brokenMinecartRail_collision;
extern Gfx JungleLand_brokenMinecartRail2_Gfx[];
extern ModelCollision JungleLand_brokenMinecartRail2_collision;
extern Gfx JungleLand_minecart_Gfx[];
extern ModelCollision JungleLand_minecart_collision;
extern Gfx JungleLand_doorFrame_Gfx[];
extern ModelCollision JungleLand_doorFrame_collision;
extern Gfx JungleLand_doorFrame2_Gfx[];
extern ModelCollision JungleLand_doorFrame2_collision;
extern Gfx JungleLand_fernPlant_Gfx[];
extern ModelCollision JungleLand_fernPlant_collision;
extern Gfx JungleLand_waterfall_Gfx[];
extern ModelCollision JungleLand_waterfall_collision;
extern Gfx JungleLand_water_Gfx[];
extern ModelCollision JungleLand_water_collision;
extern Gfx JungleLand_water2_Gfx[];
extern ModelCollision JungleLand_water2_collision;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_collision;


#endif
