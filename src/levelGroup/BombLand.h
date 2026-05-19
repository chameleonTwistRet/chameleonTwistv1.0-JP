#ifndef BOMBLAND_H
#define BOMBLAND_H

#include "common.h"

extern unsigned char Global_metalPlate_i4_PNG[];
extern unsigned char Global_steelPlate_i4_PNG[];
extern unsigned char Global_fraMEd_ia4_PNG[];
extern unsigned char Global_ballGround_i4_PNG[];
extern unsigned char Global_hexCombFade_i8_PNG[];
extern unsigned char Global_hexComb_i4_PNG[];
extern unsigned char Global_metalPlates_i4_PNG[];
extern unsigned char Global_factoryPlates_i4_PNG[];
extern unsigned char Global_cube_i4_PNG[];
extern unsigned char Global_brokenCube_i4_PNG[];
extern unsigned char Global_brownBrickWall_ci4_PAL[];
extern unsigned char Global_brownBrickWall_ci4_PNG[];
extern unsigned char Global_gravel_i4_PNG[];
extern unsigned char Global_squares_i4_PNG[];
extern unsigned char Global_strip2_i4_PNG[];

enum BombLand_Models {
    BL_FALLBACK_CUBE_MODEL,
    BL_EXIT_SHADOW_SOUTH_MODEL,
    BL_EXIT_SHADOW_NORTH_MODEL,
    BL_EXIT_SHADOW_EAST_MODEL,
    BL_EXIT_SHADOW_WEST_MODEL,
    BL_ALBL_EXIT_MODEL,
    BL_SANDPIT_MODEL,
    BL_BOSS_BRIDGE_MODEL,
    BL_AL_POLE_MODEL,
    BL_ALBL_DOOR_MODEL,
    BL_AL_SPIN_DOOR_MODEL,
    BL_BL_LAVA_FLOOR_MODEL,
    BL_BL_LAVA_MODEL,
    BL_BL_LAVA2_MODEL,
    BL_BL_LAVA3_MODEL,
    BL_BL_LAVA4_MODEL,
    BL_BL_LAVA5_MODEL,
    BL_BL_LAVA6_MODEL,
    BL_BL_LAVA7_MODEL,
    BL_BL_LAVA8_MODEL,
    BL_BL_DESTRUCTABLE_TOP_MODEL,
    BL_BL_METAL_BRIDGE_MODEL,
    BL_KL_EXIT_MODEL,
    BL_KL_DOOR_MODEL,
    BL_DC_EXIT_MODEL,
    BL_TALL_EXIT_SHADOW1_MODEL,
    BL_TALL_EXIT_SHADOW2_MODEL,
    BL_GC_EXIT1_MODEL,
    BL_GC_EXIT2_MODEL,
    BL_TRAINING_ROOM_LIGHT_MODEL,
    BL_JL_CAVE_EXIT1_MODEL,
    BL_JL_CAVE_EXIT2_MODEL,
    BL_JL_CAVE_EXIT3_MODEL,
    BL_JL_CAVE_EXIT4_MODEL,
    BL_JL_OUTSIDE_ENTRANCE_MODEL,
    BL_JL_FX_CAM_PILLAR_MODEL,
    BL_JL_CAVE_DOOR_MODEL,
    BL_EXIT1_MODEL,
    BL_EXIT2_MODEL,
    BL_EXIT3_MODEL,
    BL_EXIT4_MODEL,
    BL_ROOM0_MODEL,
    BL_ROOM1_MODEL,
    BL_ROOM2_MODEL,
    BL_ROOM3_MODEL,
    BL_ROOM4_MODEL,
    BL_ROOM5_MODEL,
    BL_ROOM6_MODEL,
    BL_ROOM7_MODEL,
    BL_ROOM8_MODEL,
    BL_ROOM9_MODEL,
    BL_ROOM10_MODEL,
    BL_ROOM11_MODEL,
    BL_ROOM12_MODEL,
    BL_ROOM13_MODEL,
    BL_ROOM15_FLOOR_MODEL,
    BL_ROOM15_MODEL,
    BL_ROOM0_PIPE_MODEL,
    BL_ROOM1_FLOOR_MODEL,
    BL_BLOCK_MODEL,
    BL_BREAKABLE_BLOCK_SIDES_MODEL,
    BL_ROOM3_START_MODEL,
    BL_ROOM3_END_MODEL,
    BL_BLOCK2_MAYBE_MODEL,
    BL_UNUSED_PLATFORM_MAYBE_MODEL,
    BL_WALL_MODEL,
    BL_ROOM4_END1_MODEL,
    BL_ROOM4_END2_MODEL,
    BL_ROOM4_START_MODEL,
    BL_ROOM5_START_MODEL,
    BL_ROOM5_END_MODEL,
    BL_BREAKABLE_BLOCK_MODEL,
    BL_BREAKABLE_BLOCK_STACK_MODEL,
    BL_ROOM7_START_MODEL,
    BL_ROOM7_END_MODEL,
    BL_BREAKABLE_BLOCK_SIDE1_MODEL,
    BL_BREAKABLE_BLOCK_SIDE2_MODEL,
    BL_BREAKABLE_BLOCK_SIDE3_MODEL,
    BL_BREAKABLE_BLOCK_SIDE4_MODEL,
    BL_BLOCK_PLATFORM_MODEL,
    BL_BREAKABLE_BLOCK2_MODEL,
    BL_ROOM8_START_MODEL,
    BL_ROOM8_END_MODEL,
    BL_ROOM9_END1_MODEL,
    BL_ROOM9_END2_MODEL,
    BL_ROOM9_START_MODEL,
    BL_ROOM10_FLOOR_MODEL,
    BL_ROOM10_PLATFORM_MODEL,
    BL_TALL_WALL_WITH_FLOOR_ON_TOP_MODEL,
    BL_UNK_BLOCK_MODEL,
    BL_THIN_BREAKABLE_BLOCK_SIDE1_MODEL,
    BL_THIN_BREAKABLE_BLOCK_SIDE2_MODEL,
    BL_THIN_BREAKABLE_BLOCK_SIDE3_MODEL,
    BL_THIN_BREAKABLE_BLOCK_SIDE4_MODEL,
    BL_THIN_BREAKABLE_BLOCK_SIDE5_MODEL,
    BL_UNK_PLATFORM_MODEL,
    BL_PIPE1_MODEL,
    BL_PIPE2_MODEL,
    BL_BREAKABLE_BLOCK_TOP_MODEL,
    BL_BLOCK_TOP_MODEL,
    BL_BREAKABLE_BLOCK_AGAIN_MODEL,
    BL_METAL_BRIDGE_THING_MODEL,
    BL_LONG_PIPE_MODEL,
    BL_X_RESULT_MODEL,
    BL_O_RESULT_MODEL,
    BL_GRENADE_SHUTTERS_MODEL,
    BL_DOOR_WALL_MODEL,
    BL_DOOR_POLES_MODEL,
    BL_UNK72_MODEL,
    BL_POLE_MODEL
};

#include "global_models.h"
extern Gfx BombLand_exit1_Gfx[];
extern ModelCollision BombLand_exit1_collision;
extern Gfx BombLand_exit2_Gfx[];
extern ModelCollision BombLand_exit2_collision;
extern Gfx BombLand_exit3_Gfx[];
extern ModelCollision BombLand_exit3_collision;
extern Gfx BombLand_exit4_Gfx[];
extern ModelCollision BombLand_exit4_collision;
extern Gfx BombLand_room0_Gfx[];
extern ModelCollision BombLand_room0_collision;
extern Gfx BombLand_room1_Gfx[];
extern ModelCollision BombLand_room1_collision;
extern Gfx BombLand_room2_Gfx[];
extern ModelCollision BombLand_room2_collision;
extern Gfx BombLand_room3_Gfx[];
extern ModelCollision BombLand_room3_collision;
extern Gfx BombLand_room4_Gfx[];
extern ModelCollision BombLand_room4_collision;
extern Gfx BombLand_room5_Gfx[];
extern ModelCollision BombLand_room5_collision;
extern Gfx BombLand_room6_Gfx[];
extern ModelCollision BombLand_room6_collision;
extern Gfx BombLand_room7_Gfx[];
extern ModelCollision BombLand_room7_collision;
extern Gfx BombLand_room8_Gfx[];
extern ModelCollision BombLand_room8_collision;
extern Gfx BombLand_room9_Gfx[];
extern ModelCollision BombLand_room9_collision;
extern Gfx BombLand_room10_Gfx[];
extern ModelCollision BombLand_room10_collision;
extern Gfx BombLand_room11_Gfx[];
extern ModelCollision BombLand_room11_collision;
extern Gfx BombLand_room12_Gfx[];
extern ModelCollision BombLand_room12_collision;
extern Gfx BombLand_room13_Gfx[];
extern ModelCollision BombLand_room13_collision;
extern Gfx BombLand_room15Floor_Gfx[];
extern ModelCollision BombLand_room15Floor_collision;
extern Gfx BombLand_room15_Gfx[];
extern ModelCollision BombLand_room15_collision;
extern Gfx BombLand_room0Pipe_Gfx[];
extern ModelCollision BombLand_room0Pipe_collision;
extern Gfx BombLand_room1Floor_Gfx[];
extern ModelCollision BombLand_room1Floor_collision;
extern Gfx BombLand_block_Gfx[];
extern ModelCollision BombLand_block_collision;
extern Gfx BombLand_breakableBlockSides_Gfx[];
extern ModelCollision BombLand_breakableBlockSides_collision;
extern Gfx BombLand_room3Start_Gfx[];
extern ModelCollision BombLand_room3Start_collision;
extern Gfx BombLand_room3End_Gfx[];
extern ModelCollision BombLand_room3End_collision;
extern Gfx BombLand_block2Maybe_Gfx[];
extern ModelCollision BombLand_block2Maybe_collision;
extern Gfx BombLand_unusedPlatformMaybe_Gfx[];
extern ModelCollision BombLand_unusedPlatformMaybe_collision;
extern Gfx BombLand_wall_Gfx[];
extern ModelCollision BombLand_wall_collision;
extern Gfx BombLand_room4End1_Gfx[];
extern ModelCollision BombLand_room4End1_collision;
extern Gfx BombLand_room4End2_Gfx[];
extern ModelCollision BombLand_room4End2_collision;
extern Gfx BombLand_room4Start_Gfx[];
extern ModelCollision BombLand_room4Start_collision;
extern Gfx BombLand_room5Start_Gfx[];
extern ModelCollision BombLand_room5Start_collision;
extern Gfx BombLand_room5End_Gfx[];
extern ModelCollision BombLand_room5End_collision;
extern Gfx BombLand_breakableBlock_Gfx[];
extern ModelCollision BombLand_breakableBlock_collision;
extern Gfx BombLand_breakableBlockStack_Gfx[];
extern ModelCollision BombLand_breakableBlockStack_collision;
extern Gfx BombLand_room7Start_Gfx[];
extern ModelCollision BombLand_room7Start_collision;
extern Gfx BombLand_room7End_Gfx[];
extern ModelCollision BombLand_room7End_collision;
extern Gfx BombLand_breakableBlockSide1_Gfx[];
extern ModelCollision BombLand_breakableBlockSide1_collision;
extern Gfx BombLand_breakableBlockSide2_Gfx[];
extern ModelCollision BombLand_breakableBlockSide2_collision;
extern Gfx BombLand_breakableBlockSide3_Gfx[];
extern ModelCollision BombLand_breakableBlockSide3_collision;
extern Gfx BombLand_breakableBlockSide4_Gfx[];
extern ModelCollision BombLand_breakableBlockSide4_collision;
extern Gfx BombLand_blockPlatform_Gfx[];
extern ModelCollision BombLand_blockPlatform_collision;
extern Gfx BombLand_breakableBlock2_Gfx[];
extern ModelCollision BombLand_breakableBlock2_collision;
extern Gfx BombLand_room8Start_Gfx[];
extern ModelCollision BombLand_room8Start_collision;
extern Gfx BombLand_room8End_Gfx[];
extern ModelCollision BombLand_room8End_collision;
extern Gfx BombLand_room9End1_Gfx[];
extern ModelCollision BombLand_room9End1_collision;
extern Gfx BombLand_room9End2_Gfx[];
extern ModelCollision BombLand_room9End2_collision;
extern Gfx BombLand_room9Start_Gfx[];
extern ModelCollision BombLand_room9Start_collision;
extern Gfx BombLand_room10Floor_Gfx[];
extern ModelCollision BombLand_room10Floor_collision;
extern Gfx BombLand_room10Platform_Gfx[];
extern ModelCollision BombLand_room10Platform_collision;
extern Gfx BombLand_tallWallWithFloorOnTop_Gfx[];
extern ModelCollision BombLand_tallWallWithFloorOnTop_collision;
extern Gfx BombLand_unkBlock_Gfx[];
extern ModelCollision BombLand_unkBlock_collision;
extern Gfx BombLand_thinBreakableBlockSide1_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide1_collision;
extern Gfx BombLand_thinBreakableBlockSide2_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide2_collision;
extern Gfx BombLand_thinBreakableBlockSide3_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide3_collision;
extern Gfx BombLand_thinBreakableBlockSide4_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide4_collision;
extern Gfx BombLand_thinBreakableBlockSide5_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide5_collision;
extern Gfx BombLand_unkPlatform_Gfx[];
extern ModelCollision BombLand_unkPlatform_collision;
extern Gfx BombLand_pipe1_Gfx[];
extern ModelCollision BombLand_pipe1_collision;
extern Gfx BombLand_pipe2_Gfx[];
extern ModelCollision BombLand_pipe2_collision;
extern Gfx BombLand_breakableBlockTop_Gfx[];
extern ModelCollision BombLand_breakableBlockTop_collision;
extern Gfx BombLand_blockTop_Gfx[];
extern ModelCollision BombLand_blockTop_collision;
extern Gfx BombLand_breakableBlockAgain_Gfx[];
extern ModelCollision BombLand_breakableBlockAgain_collision;
extern Gfx BombLand_metalBridgeThing_Gfx[];
extern ModelCollision BombLand_metalBridgeThing_collision;
extern Gfx BombLand_longPipe_Gfx[];
extern ModelCollision BombLand_longPipe_collision;
extern Gfx BombLand_XResult_Gfx[];
extern ModelCollision BombLand_XResult_collision;
extern Gfx BombLand_OResult_Gfx[];
extern ModelCollision BombLand_OResult_collision;
extern Gfx BombLand_grenadeShutters_Gfx[];
extern ModelCollision BombLand_grenadeShutters_collision;
extern Gfx BombLand_doorWall_Gfx[];
extern ModelCollision BombLand_doorWall_collision;
extern Gfx BombLand_doorPoles_Gfx[];
extern ModelCollision BombLand_doorPoles_collision;
extern Gfx BombLand_unk72_Gfx[];
extern ModelCollision BombLand_unk72_collision;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_collision;


#endif
