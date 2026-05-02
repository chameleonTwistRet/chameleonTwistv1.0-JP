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

Mtx BombLand_IMtx1 = IDENTITY;

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

StageModel BombLand_stageModels[] = {
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
    {BombLand_exit1_Gfx, &BombLand_exit1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_exit2_Gfx, &BombLand_exit2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_exit3_Gfx, &BombLand_exit3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_exit4_Gfx, &BombLand_exit4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room0_Gfx, &BombLand_room0_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room1_Gfx, &BombLand_room1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room2_Gfx, &BombLand_room2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room3_Gfx, &BombLand_room3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room4_Gfx, &BombLand_room4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room5_Gfx, &BombLand_room5_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room6_Gfx, &BombLand_room6_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room7_Gfx, &BombLand_room7_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room8_Gfx, &BombLand_room8_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room9_Gfx, &BombLand_room9_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room10_Gfx, &BombLand_room10_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room11_Gfx, &BombLand_room11_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room12_Gfx, &BombLand_room12_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room13_Gfx, &BombLand_room13_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room15Floor_Gfx, &BombLand_room15Floor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room15_Gfx, &BombLand_room15_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room0Pipe_Gfx, &BombLand_room0Pipe_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room1Floor_Gfx, &BombLand_room1Floor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_block_Gfx, &BombLand_block_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockSides_Gfx, &BombLand_breakableBlockSides_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room3Start_Gfx, &BombLand_room3Start_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room3End_Gfx, &BombLand_room3End_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_block2Maybe_Gfx, &BombLand_block2Maybe_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_unusedPlatformMaybe_Gfx, &BombLand_unusedPlatformMaybe_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_wall_Gfx, &BombLand_wall_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room4End1_Gfx, &BombLand_room4End1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room4End2_Gfx, &BombLand_room4End2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room4Start_Gfx, &BombLand_room4Start_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room5Start_Gfx, &BombLand_room5Start_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room5End_Gfx, &BombLand_room5End_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlock_Gfx, &BombLand_breakableBlock_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockStack_Gfx, &BombLand_breakableBlockStack_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room7Start_Gfx, &BombLand_room7Start_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room7End_Gfx, &BombLand_room7End_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockSide1_Gfx, &BombLand_breakableBlockSide1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockSide2_Gfx, &BombLand_breakableBlockSide2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockSide3_Gfx, &BombLand_breakableBlockSide3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockSide4_Gfx, &BombLand_breakableBlockSide4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_blockPlatform_Gfx, &BombLand_blockPlatform_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlock2_Gfx, &BombLand_breakableBlock2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room8Start_Gfx, &BombLand_room8Start_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room8End_Gfx, &BombLand_room8End_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room9End1_Gfx, &BombLand_room9End1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room9End2_Gfx, &BombLand_room9End2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room9Start_Gfx, &BombLand_room9Start_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room10Floor_Gfx, &BombLand_room10Floor_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_room10Platform_Gfx, &BombLand_room10Platform_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_tallWallWithFloorOnTop_Gfx, &BombLand_tallWallWithFloorOnTop_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_unkBlock_Gfx, &BombLand_unkBlock_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_thinBreakableBlockSide1_Gfx, &BombLand_thinBreakableBlockSide1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_thinBreakableBlockSide2_Gfx, &BombLand_thinBreakableBlockSide2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_thinBreakableBlockSide3_Gfx, &BombLand_thinBreakableBlockSide3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_thinBreakableBlockSide4_Gfx, &BombLand_thinBreakableBlockSide4_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_thinBreakableBlockSide5_Gfx, &BombLand_thinBreakableBlockSide5_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_unkPlatform_Gfx, &BombLand_unkPlatform_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_pipe1_Gfx, &BombLand_pipe1_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_pipe2_Gfx, &BombLand_pipe2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockTop_Gfx, &BombLand_breakableBlockTop_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_blockTop_Gfx, &BombLand_blockTop_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_breakableBlockAgain_Gfx, &BombLand_breakableBlockAgain_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_metalBridgeThing_Gfx, &BombLand_metalBridgeThing_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_longPipe_Gfx, &BombLand_longPipe_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_XResult_Gfx, &BombLand_XResult_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_OResult_Gfx, &BombLand_OResult_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_grenadeShutters_Gfx, &BombLand_grenadeShutters_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_doorWall_Gfx, &BombLand_doorWall_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_doorPoles_Gfx, &BombLand_doorPoles_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {BombLand_unk72_Gfx, &BombLand_unk72_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {Global_pole_Gfx, &Global_pole_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, }
};


unsigned char BombLand_rabObjects_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x03, 0x00, 0x15, 0x0C, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x15, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x27, 0x8D, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x15, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0A, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x15, 0x0C, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x01, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x15, 0x1C, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x15, 0xA0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x15, 0xA4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x15, 0xC4, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x15, 0xA8, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x01, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x15, 0xB8, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01
};

SpriteActor BombLand_room0_sprites[] = {
    { 18, 0, {-433.0,0.0,386.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0,  {30, 2, 0, 0}},
    { -1, 0,   {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor BombLand_room12_sprites[] = {
    { 18, 0, {1900.0,0.0,-500.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0, {31, 14, 0, 0}},
    { -1, 0,    {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

RoomObject BombLand_room0_objects[] = {
    {  {0.0,0.0,200.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,         BL_ROOM0_PIPE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, BL_METAL_BRIDGE_THING_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,              BL_ROOM0_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,              BL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,                           0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    { {1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,                           0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {    {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,                           0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room0_actors[] = {
    { ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

Collectable BombLand_room0_collectables[] = {
    {      CROWN, {122.0,700.0,190.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,       {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject BombLand_room1_objects[] = {
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,       BL_ROOM1_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,             BL_PIPE1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,             BL_PIPE2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,             BL_EXIT1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0,  400.0,  400.0,     0.0, 0.0, 4,  1, 0,    0, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    { {-1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,             BL_ROOM1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,             BL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {  {1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,                          0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room1_actors[] = {
    {      WHITE_BOMB,   {50.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,   50.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  20.0f,    0, 0},
    {      WHITE_BOMB,    {0.0,0.0,-1200.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  100.0, -1200.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  10.0f,    0, 0},
    {      WHITE_BOMB,    {0.0,0.0,-1050.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  100.0, -1050.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,   1.0f,    0, 0},
    {      WHITE_BOMB,  {200.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  200.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  30.0f,    0, 0},
    {      WHITE_BOMB,  {350.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  350.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  40.0f,    0, 0},
    {      WHITE_BOMB,  {500.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  500.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  50.0f,    0, 0},
    {      WHITE_BOMB,  {650.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  650.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  60.0f,    0, 0},
    {      WHITE_BOMB,  {800.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  800.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  70.0f,    0, 0},
    {      WHITE_BOMB,  {950.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,  950.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  80.0f,    0, 0},
    {      WHITE_BOMB, {1100.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1, 1100.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  90.0f,    0, 0},
    {      WHITE_BOMB, {1250.0,0.0,-1400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1, 1250.0, -1300.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f, 100.0f,    0, 0},
    {      WHITE_BOMB,      {0.0,0.0,400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1,    0.0,   500.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,   1.0f,    0, 0},
    {      WHITE_BOMB,   {-150.0,0.0,400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1, -150.0,   500.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  10.0f,    0, 0},
    {      WHITE_BOMB,   {-300.0,0.0,400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1, -300.0,   500.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  20.0f,    0, 0},
    {      WHITE_BOMB,   {-450.0,0.0,400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1, -450.0,   500.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  30.0f,    0, 0},
    {      WHITE_BOMB,   {-600.0,0.0,400.0}, 0.0, -5000.0, 5000.0,       0,    0.0, -5000.0, 5000.0, 1, -600.0,   500.0, 4.0, 90.0,    0,         0, 0, 0,  5.0f,  40.0f,    0, 0},
    { MISSILE_SPAWNER, {-800.0,80.0,-500.0}, 0.0, -1300.0, -700.0, -100.0f, 1000.0, -1000.0, 1000.0, 0,    1.0,    10.0, 5.0,  5.0, 6.0f, 490000.0f, 0, 0, 30.0f,  40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,  {100.0,80.0,1100.0}, 0.0,  -300.0,  400.0, -100.0f, 1000.0,  -200.0, 1400.0, 0,    1.0,    10.0, 5.0,  5.0, 6.0f, 490000.0f, 0, 0, 30.0f,  40.0f, 1.0f, 0},
    { MISSILE_SPAWNER, {1200.0,80.0,-200.0}, 0.0,   900.0, 1500.0, -150.0f, 1000.0, -1400.0,  400.0, 0,    1.0,    10.0, 5.0,  5.0, 6.0f, 490000.0f, 0, 0, 30.0f,  40.0f, 1.0f, 0},
    {      ACTOR_NULL,        {0.0,0.0,0.0}, 0.0,     0.0,    0.0,       0,    0.0,     0.0,    0.0, 0,    0.0,     0.0, 0.0,  0.0,    0,         0, 0, 0,     0,      0,    0, 0}
};

Collectable BombLand_room1_collectables[] = {
    {    R_HEART,     {0.0,0.0,1300.0}, 4294967295, 0, 0, 0},
    {    R_HEART,   {400.0,0.0,1300.0}, 4294967295, 0, 0, 0},
    {      CROWN, {-1328.0,0.0,-548.0}, 4294967295, 0, 0, 0},
    {      CROWN,  {-979.0,0.0,-573.0}, 4294967295, 0, 0, 0},
    {      CROWN,        {0.0,0.0,0.0},          4, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject BombLand_room2_objects[] = {
    {  {-900.0,0.0,-900.0},                 {0.5,1.0,0.5}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0,  0,    0,  0, 0,            BL_DOOR_POLES_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 34,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-800.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-400.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {400.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {800.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {1005.0,0.0,-800.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {1005.0,0.0,-400.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1005.0,0.0,400.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1005.0,0.0,800.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-1005.0,0.0,-800.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-1005.0,0.0,-400.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-1005.0,0.0,400.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-1005.0,0.0,800.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0, 0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {      {900.0,0.0,0.0}, {0.75,0.800000011920929,0.75}, 0,                                          0,   7, 14,                 0.0,    0.0,     0.0, 0.0,        0,  0, 60,    2,  2, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0, 0.30000001192092896,    1.0,     0.0, 0.0,        0,  0,  0,    0,  0, 0,                 BL_EXIT1_MODEL, -1, -1, -1, &func_800B09C0,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0, 0,     BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0, 256,  0,               400.0,  400.0,     0.0, 0.0,        4,  1,  0,    0,  0, 0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {4.0,4.0,4.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0, 0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {    {800.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-400.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-800.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {800.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-400.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-800.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {800.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {400.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {-400.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {-800.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0, 0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,               100.0,    0.0,     0.0, 0.0,      180, 10, 50,   10, -1, 2,                 BL_ROOM2_MODEL, -1, -1, -1, &RegistShutter, &func_800B118C,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0,  0,    0,  0, 0,                 BL_EXIT2_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0, 0,     BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0, 256,  0,               400.0,  400.0,     0.0, 0.0,        2,  1,  0,    0,  0, 0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {4.0,4.0,4.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0, 0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                 {0.0,0.0,0.0}, 0,                                          0,   0,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0,  0,    0,  0, 0,                              0,  0,  0,  0,           NULL,           NULL,           0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room2_actors[] = {
    { MISSILE_SPAWNER, {400.0,50.0,-300.0}, 0.0, -800.0, 800.0, 0, 1000.0, -800.0, 800.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0, 30.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,  {400.0,50.0,300.0}, 0.0, -800.0, 800.0, 0, 1000.0, -800.0, 800.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0, 30.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,       {0.0,0.0,0.0}, 0.0,    0.0,   0.0, 0,    0.0,    0.0,   0.0, 0, 0.0,  0.0, 0.0, 0.0,    0,         0, 0, 0,     0,     0,    0, 0}
};

Collectable BombLand_room2_collectables[] = {
    {    R_HEART, {850.0,300.0,0.0}, 4294967295, 0, 0, 0},
    {      CROWN,   {850.0,0.0,0.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,     {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject BombLand_room3_objects[] = {
    { {-1150.0,300.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0,  0,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1150.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1150.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-400.0,300.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0,  0,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-400.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-400.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {350.0,300.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0,  0,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {350.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {350.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {1100.0,600.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0,  0,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1100.0,300.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {1100.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {1100.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {1100.0,0.0,-950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {250.0,0.0,-950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {250.0,0.0,-950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                  BL_POLE_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1400.0,0.0,-1400.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                  BL_POLE_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1500.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_EXIT1_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,     BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,               400.0,     0.0, 0.0,  4,  1,   0,    0,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    {     {-1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    1.0, 0.20000000298023224,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                 BL_ROOM3_MODEL, -1, -1, -1, &func_800B09C0, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {1700.0,900.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_EXIT2_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {1700.0,900.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,     BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {1700.0,900.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,               400.0,     0.0, 0.0,  2,  1,   0,    0,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    {    {1700.0,900.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,           BL_ROOM3_START_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,             BL_ROOM3_END_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {         {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                              0,  0,  0,  0,           NULL, NULL,           0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room3_actors[] = {
    { MISSILE_SPAWNER, {-959.0,100.0,-870.0}, 0.0, -800.0, 1000.0, -500.0f, 1500.0, -600.0, 600.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER, {-259.0,100.0,-870.0}, 0.0, -800.0, 1000.0, -500.0f, 1500.0, -600.0, 600.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,   {-259.0,100.0,30.0}, 0.0, -800.0, 1000.0, -500.0f, 1500.0, -600.0, 600.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,   {212.0,300.0,403.0}, 0.0, -800.0, 1000.0, -500.0f, 1500.0, -600.0, 600.0, 0, 1.0, 10.0, 5.0, 4.0, 5.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,   {212.0,300.0,-97.0}, 0.0, -800.0, 1000.0, -500.0f, 1500.0, -600.0, 600.0, 0, 1.0, 10.0, 5.0, 4.0, 5.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,   {113.0,900.0,460.0}, 0.0, -800.0, 1000.0, -500.0f, 1500.0, -600.0, 600.0, 0, 1.0, 10.0, 5.0, 4.0, 5.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,   {113.0,900.0,-40.0}, 0.0, -800.0, 1000.0, -500.0f, 1500.0, -600.0, 600.0, 0, 1.0, 10.0, 5.0, 4.0, 5.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,         {0.0,0.0,0.0}, 0.0,    0.0,    0.0,       0,    0.0,    0.0,   0.0, 0, 0.0,  0.0, 0.0, 0.0,    0,         0, 0, 0,     0,     0,    0, 0}
};

RoomObject BombLand_room4_objects[] = {
    { {1900.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1900.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1900.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1900.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1900.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {1700.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1700.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1700.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1700.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1700.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {1500.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1500.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1500.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1500.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1500.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {1500.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1500.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1500.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1500.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {1300.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1300.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1300.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1300.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1300.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {1300.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1300.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1300.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1300.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {1100.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1100.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1100.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1100.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {1100.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {1100.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1100.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1100.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1100.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {900.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {900.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {900.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {900.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {900.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {900.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {900.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {900.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {900.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {700.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {700.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {700.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {700.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {700.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {700.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {700.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {700.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {700.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {500.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {500.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {500.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {500.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {500.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {500.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {500.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {500.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {500.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {300.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {300.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {300.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {300.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {300.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {300.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {300.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {300.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {300.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {100.0,1210.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {100.0,1210.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {100.0,1210.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {100.0,1210.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {100.0,1210.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {100.0,1210.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {100.0,1210.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {100.0,1210.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {100.0,1210.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-300.0,1200.0,-200.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                BL_POLE_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 6,  4, 4, 0, -1, 0, 0},
    {        {0.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                BL_WALL_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,          BL_ROOM4_END1_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,          BL_ROOM4_END2_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {        {0.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,         BL_ROOM4_START_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {-2200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,               BL_EXIT1_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {-2200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,   BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {    {-2200.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0,        4,  1, 0,    0, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    {    {-2200.0,1200.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {        {0.0,1200.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,    0.0,     0.0, 0.0,       28,  5, 0,    0, 0, 0,               BL_ROOM4_MODEL, -1, -1, -1, &func_800B088C, &func_800B08C8,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1000.0,1900.0,1200.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,               BL_EXIT3_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1000.0,1900.0,1200.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,    BL_EXIT_SHADOW_EAST_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1000.0,1900.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0,        3,  1, 0,    0, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    {  {1000.0,1900.0,1200.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {           {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0,  0,    0.0,    0.0,     0.0, 0.0,        0,  0, 0,    0, 0, 0,                            0,  0,  0,  0,           NULL,           NULL,           0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room4_actors[] = {
    {      WHITE_BOMB,   {350.0,1210.0,450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1,  350.0, -450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB,  {500.0,1210.0,-450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1,  500.0,  450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB,   {650.0,1210.0,450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1,  650.0, -450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f, 10.0f,    0, 0},
    {      WHITE_BOMB,  {800.0,1210.0,-450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1,  800.0,  450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f, 10.0f,    0, 0},
    {      WHITE_BOMB,   {950.0,1210.0,450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1,  950.0, -450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {1100.0,1210.0,-450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1, 1100.0,  450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f, 20.0f,    0, 0},
    {      WHITE_BOMB,  {1250.0,1210.0,450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1, 1250.0, -450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f, 30.0f,    0, 0},
    {      WHITE_BOMB, {1400.0,1210.0,-450.0}, 0.0,  -5000.0,  5000.0,         0,     0.0,  -5000.0,  5000.0, 1, 1400.0,  450.0, 16.0, 90.0,    0,          0,    0, 0,  4.0f, 30.0f,    0, 0},
    { MISSILE_SPAWNER,    {0.0,1250.0,-700.0}, 0.0, -10000.0, 10000.0, -10000.0f, 10000.0, -10000.0, 10000.0, 0,    1.5,   20.0,  5.0,  5.0, 6.0f, 1000000.0f, 3.0f, 0, 30.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,          {0.0,0.0,0.0}, 0.0,      0.0,     0.0,         0,     0.0,      0.0,     0.0, 0,    0.0,    0.0,  0.0,  0.0,    0,          0,    0, 0,     0,     0,    0, 0}
};

Collectable BombLand_room4_collectables[] = {
    {      CROWN, {1700.0,1550.0,250.0},          5, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject BombLand_room5_objects[] = {
    {       {0.0,1900.0,0.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,              BL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6,  4, 4, 0, -1, 0, 0},
    {       {0.0,1900.0,0.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,       BL_ROOM5_START_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {       {0.0,1900.0,0.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,         BL_ROOM5_END_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {0.0,1900.0,-1200.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,             BL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {0.0,1900.0,-1200.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,  BL_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {0.0,1900.0,-1200.0},   {1.0,1.0,1.0}, 0,                                         0, 256,  0,  400.0,  400.0,     0.0, 0.0, 1,  1,  0,    0, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {   {0.0,1900.0,-1200.0},   {4.0,4.0,4.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {       {0.0,1900.0,0.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,             BL_ROOM5_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-1200.0,1900.0,0.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,             BL_EXIT1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-1200.0,1900.0,0.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0, BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-1200.0,1900.0,0.0},   {1.0,1.0,1.0}, 0,                                         0, 256,  0,  400.0,  400.0,     0.0, 0.0, 4,  1,  0,    0, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {   {-1200.0,1900.0,0.0},   {4.0,4.0,4.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {1200.0,1900.0,-400.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0,             BL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {1200.0,1900.0,-400.0},   {1.0,1.0,1.0}, 0,                                         0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0, BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {1200.0,1900.0,-400.0},   {1.0,1.0,1.0}, 0,                                         0, 256,  0,  400.0,  400.0,     0.0, 0.0, 2,  1,  0,    0, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    { {1200.0,1900.0,-400.0},   {4.0,4.0,4.0}, 0,                                         0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,  0, 1000, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    { {1050.0,1900.0,-400.0}, {1.0,1.0,0.125}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 11, 1050.0, 2300.0,  -400.0, 0.0, 2, 20, -1,   40, 0, 0,             BL_UNK72_MODEL, -1, -1,  8, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {0.0,2500.0,500.0},   {1.0,1.0,1.0}, 2,                                         0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0,         BL_LONG_PIPE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {500.0,2500.0,0.0},   {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(90.00000250447816),   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0,         BL_LONG_PIPE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0},   {0.0,0.0,0.0}, 0,                                         0,   0,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,  0,    0, 0, 0,                          0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

SpriteActor BombLand_room5_sprites[] = {
    { 19, 0, {800.0,1900.0,-600.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0,   {8, 9, 5, 2}},
    { -1, 0,      {-1.0,-1.0,-1.0},    {-1.0,32.0,32.0}, 1, 0,  0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

RoomActor BombLand_room5_actors[] = {
    { ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

Collectable BombLand_room5_collectables[] = {
    {      CROWN, {487.0,2550.0,-764.0}, 4294967295, 0, 0, 0},
    {      CROWN, {-713.0,2550.0,480.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject BombLand_room6_objects[] = {
    {   {900.0,0.0,-900.0},                 {0.5,1.0,0.5}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0,  0,    0,  0,  0,          BL_DOOR_POLES_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 34,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-800.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-400.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {400.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {800.0,0.0,-1005.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {1005.0,0.0,-800.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {1005.0,0.0,-400.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1005.0,0.0,400.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1005.0,0.0,800.0},                 {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-1005.0,0.0,-800.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-1005.0,0.0,-400.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-1005.0,0.0,400.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-1005.0,0.0,800.0},                 {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,  0,  0,    0,  0,  0,    BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {800.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-400.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-800.0,0.0,800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {800.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-400.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-800.0,0.0,400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {800.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {400.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {       {0.0,10.0,0.0},  {2.0,1.0,1.3333333730697632}, 0,                                          0,   7, 14,                 0.0,    0.0,     0.0, 0.0,        0,  0, 20,   10, 10,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,-10.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0,  0,    0,  0,  0,            BL_O_RESULT_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {-400.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {-800.0,0.0,0.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,-400.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,-800.0},                 {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5,  0,    0,  0,  0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {-1050.0,0.0,0.0}, {0.20000000298023224,1.0,1.0}, 0,                                          0,   7, 11,             -1050.0,  500.0,     0.0, 0.0,        1, 20,  1,   40,  0,  0,               BL_UNK72_MODEL, -1, -1, 10,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0, 0.30000001192092896,    1.0,     0.0, 0.0,        0,  0,  0,    0,  0,  0,               BL_EXIT2_MODEL, -1, -1, -1, &func_800B09C0,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,       10,  0,  0,    0,  0,  0,   BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, &func_800B09E8, &func_800D91D8,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0, 256,  0,               400.0,  400.0,     0.0, 0.0,        2,  1,  0,    0,  0,  0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                 {4.0,4.0,4.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0,  0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,               100.0,    0.0,     0.0, 0.0,      180, 10, 50,   10, -1, 10,               BL_ROOM6_MODEL, -1, -1, -1, &RegistShutter, &func_800B118C,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0,  0,               BL_EXIT1_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0,  0,   BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {1.0,1.0,1.0}, 0,                                          0, 256,  0,               400.0,  400.0,     0.0, 0.0,        4,  1,  0,    0,  0,  0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                 {4.0,4.0,4.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90,  0, 1000,  0,  0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                 {0.0,0.0,0.0}, 0,                                          0,   0,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0,  0,    0,  0,  0,                            0,  0,  0,  0,           NULL,           NULL,           0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room6_actors[] = {
    {         GRENADE,    {0.0,10.0,0.0}, 1.0, -200.0, 200.0, 0,    0.0, -200.0, 200.0, 0, 3.0,  5.0, 0.0, 0.0,    0,          0, 0, 0, 210.0f, 10.0f,    0, 0},
    { MISSILE_SPAWNER, {0.0,50.0,-700.0}, 0.0, -800.0, 800.0, 0, 1000.0, -800.0, 800.0, 0, 1.0, 10.0, 5.0, 5.0, 4.0f, 1000000.0f, 0, 0,  20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,  {0.0,50.0,700.0}, 0.0, -800.0, 800.0, 0, 1000.0, -800.0, 800.0, 0, 1.0, 10.0, 5.0, 5.0, 4.0f, 1000000.0f, 0, 0,  20.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,     {0.0,0.0,0.0}, 0.0,    0.0,   0.0, 0,    0.0,    0.0,   0.0, 0, 0.0,  0.0, 0.0, 0.0,    0,          0, 0, 0,      0,     0,    0, 0}
};
RoomObject BombLand_room7_objects[] = {
    {  {0.0,-50.0,450.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,   0,    0,  0, 0,         BL_LONG_PIPE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    { {0.0,-50.0,-450.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,   0,    0,  0, 0,         BL_LONG_PIPE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,       BL_ROOM7_START_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,         BL_ROOM7_END_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-1300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-1100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-900.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {900.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {1100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {1300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {1500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,             BL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0, BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0, 2,  1,   0,    0,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {      {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,             BL_ROOM7_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,             BL_EXIT1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0, BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0, 4,  1,   0,    0,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {      {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,   0,    0,  0, 0,                          0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room7_actors[] = {
    {     CANNON,  {500.0,200.0,1000.0}, 90.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0,  500.0, 0.0, 0.0, 26.0, 300.0f, 800.0f, 0, 0, 0, 0, 0, 0},
    {     CANNON, {-500.0,200.0,1000.0}, 90.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, -500.0, 0.0, 0.0, 26.0, 300.0f, 800.0f, 0, 0, 0, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0},  0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0,    0.0, 0.0, 0.0,  0.0,      0,      0, 0, 0, 0, 0, 0, 0}
};

RoomObject BombLand_room8_objects[] = {
    {   {1000.0,600.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0,  0,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1000.0,300.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {1000.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {1000.0,0.0,950.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {250.0,300.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0,  0,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {250.0,0.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {250.0,0.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-500.0,900.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-500.0,600.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-500.0,300.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-500.0,0.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-500.0,0.0,1250.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-1250.0,1500.0,850.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0,  0,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1250.0,1200.0,850.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1250.0,900.0,850.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1250.0,600.0,850.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1250.0,300.0,850.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-1250.0,0.0,850.0}, {1.0,1.0,1.0}, 0, 0,   7, 14,    0.0,                 0.0,     0.0, 0.0, -1,  0, 100,   -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL, NULL, -2146725768, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-1250.0,0.0,850.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-1250.0,0.0,-850.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-200.0,0.0,-1250.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-200.0,0.0,-1250.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                  BL_POLE_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1400.0,0.0,-1400.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                  BL_POLE_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {1500.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                 BL_BLOCK_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 2,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,           BL_ROOM8_START_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,             BL_ROOM8_END_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_EXIT2_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,     BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,               400.0,     0.0, 0.0,  2,  1,   0,    0,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    1.0, 0.20000000298023224,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                 BL_ROOM8_MODEL, -1, -1, -1, &func_800B09C0, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-1700.0,1500.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                 BL_EXIT1_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-1700.0,1500.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,     BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {-1700.0,1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,               400.0,     0.0, 0.0,  4,  1,   0,    0,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    {   {-1700.0,1500.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0,              1000.0, -1000.0, 0.0,  0, 90,   0, 1000,  0, 0,                              0, -1, -1, -1,           NULL, NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0,  0,    0.0,                 0.0,     0.0, 0.0,  0,  0,   0,    0,  0, 0,                              0,  0,  0,  0,           NULL, NULL,           0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room8_actors[] = {
    { MISSILE_SPAWNER,  {1201.0,50.0,-818.0}, 0.0, -900.0, 700.0,       0, 1500.0, -800.0, 800.0, 0, 3.0, 10.0, 2.0, 4.0, 5.0f,  640000.0f, 0, 0, 10.0f, 20.0f, 1.0f, 0},
    { MISSILE_SPAWNER,   {301.0,50.0,-818.0}, 0.0, -900.0, 700.0,       0, 1500.0, -800.0, 800.0, 0, 3.0, 10.0, 2.0, 4.0, 5.0f,  640000.0f, 0, 0, 10.0f, 20.0f, 1.0f, 0},
    { MISSILE_SPAWNER,    {301.0,50.0,-18.0}, 0.0, -900.0, 700.0,       0, 1500.0, -800.0, 800.0, 0, 3.0, 10.0, 2.0, 4.0, 5.0f,  640000.0f, 0, 0, 10.0f, 20.0f, 1.0f, 0},
    { MISSILE_SPAWNER,  {-399.0,600.0,182.0}, 0.0, -900.0, 700.0, -500.0f, 1500.0, -800.0, 800.0, 0, 3.0, 10.0, 2.0, 4.0, 5.0f,  640000.0f, 0, 0, 10.0f, 20.0f, 1.0f, 0},
    { MISSILE_SPAWNER,  {-400.0,900.0,700.0}, 0.0, -900.0, 700.0, -500.0f, 1500.0, -800.0, 800.0, 0, 3.0, 10.0, 2.0, 4.0, 5.0f, 1440000.0f, 0, 0, 10.0f, 20.0f, 1.0f, 0},
    { MISSILE_SPAWNER,  {-864.0,900.0,186.0}, 0.0, -900.0, 700.0,       0, 1500.0, -800.0, 800.0, 0, 3.0, 10.0, 2.0, 4.0, 5.0f, 1440000.0f, 0, 0, 10.0f, 20.0f, 1.0f, 0},
    { MISSILE_SPAWNER, {-394.0,1000.0,-48.0}, 0.0, -900.0, 700.0,       0, 1500.0, -800.0, 800.0, 0, 3.0, 10.0, 2.0, 4.0, 5.0f, 1440000.0f, 0, 0, 10.0f, 20.0f, 1.0f, 0},
    {      ACTOR_NULL,         {0.0,0.0,0.0}, 0.0,    0.0,   0.0,       0,    0.0,    0.0,   0.0, 0, 0.0,  0.0, 0.0, 0.0,    0,          0, 0, 0,     0,     0,    0, 0}
};

Collectable BombLand_room8_collectables[] = {
    {      CROWN,  {-1250.0,0.0,-850.0}, 4294967295, 0, 0, 0},
    {      CROWN,   {-500.0,0.0,1200.0}, 4294967295, 0, 0, 0},
    {     CARROT,   {-1245.0,0.0,840.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {1003.0,300.0,929.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-469.0,900.0,1220.0}, 4294967295, 0, 0, 0},
    {    O_HEART, {-1290.0,1500.0,-3.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject BombLand_room9_objects[] = {
    {  {-100.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-100.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-100.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-100.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-100.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {-100.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-100.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-100.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-100.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-300.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-300.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-300.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-300.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-300.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {-300.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-300.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-300.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-300.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-500.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-500.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-500.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-500.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-500.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {-500.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-500.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-500.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-500.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-700.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-700.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-700.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-700.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-700.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {-700.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-700.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-700.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-700.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-900.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-900.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-900.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-900.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-900.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {-900.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-900.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-900.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {    {-900.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1100.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1100.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1100.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1100.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1100.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-1100.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1100.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1100.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1100.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1300.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1300.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1300.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1300.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1300.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-1300.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1300.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1300.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1300.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1500.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-1500.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1500.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1500.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1500.0,10.0,600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1700.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1700.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1700.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1700.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1700.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-1700.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1700.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1700.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    { {-1900.0,10.0,-1000.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1900.0,10.0,-800.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1900.0,10.0,-600.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1900.0,10.0,-400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {  {-1900.0,10.0,-200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {-1900.0,10.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1900.0,10.0,200.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {   {-1900.0,10.0,400.0}, {2.0,1.0,2.0}, 0, 0,   7, 13,    0.0,    0.0,     0.0, 0.0, 50337064,  2, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0, 2,  4, 4, 0, -1, 0, 0},
    {     {400.0,0.0,-200.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                BL_POLE_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 6,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,          BL_ROOM9_END1_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,          BL_ROOM9_END2_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,         BL_ROOM9_START_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 7,  4, 4, 0, -1, 0, 0},
    {       {2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,               BL_EXIT2_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {       {2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,   BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    {       {2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0,        2,  1, 0,    0, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    {       {2200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,    0.0,     0.0, 0.0,       29,  6, 0,    0, 0, 0,               BL_ROOM9_MODEL, -1, -1, -1, &func_800B088C, &func_800B08C8,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-1000.0,700.0,1200.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,               BL_EXIT3_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-1000.0,700.0,1200.0}, {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,    BL_EXIT_SHADOW_EAST_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-1000.0,700.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0,        3,  1, 0,    0, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 2, -1, 1, 0, -1, 0, 0},
    { {-1000.0,700.0,1200.0}, {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                            0, -1, -1, -1,           NULL,           NULL,           0, 0, 1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0,  0,    0.0,    0.0,     0.0, 0.0,        0,  0, 0,    0, 0, 0,                            0,  0,  0,  0,           NULL,           NULL,           0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room9_actors[] = {
    {      WHITE_BOMB,   {-1370.0,10.0,0.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1, -1370.0,    0.0,  0.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB, {-1220.0,10.0,140.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1, -1220.0, -140.0,  8.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB, {-1070.0,10.0,260.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1, -1070.0, -260.0, 15.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB,  {-920.0,10.0,400.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1,  -920.0, -400.0, 20.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB,  {-770.0,10.0,400.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1,  -770.0, -400.0, 20.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB,  {-620.0,10.0,260.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1,  -620.0, -260.0, 15.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB,  {-470.0,10.0,140.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1,  -470.0, -140.0,  8.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    {      WHITE_BOMB,    {-320.0,10.0,0.0}, 0.0, -5000.0, 5000.0, 0,    0.0, -5000.0, 5000.0, 1,  -320.0,    0.0,  0.0, 90.0,    0,         0, 0, 0,  4.0f,  1.0f,    0, 0},
    { MISSILE_SPAWNER,      {0.0,0.0,700.0}, 0.0, -1800.0, 1300.0, 0, 1000.0,  -800.0,  800.0, 0,     1.0,   10.0,  5.0,  5.0, 6.0f, 490000.0f, 0, 0, 30.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,        {0.0,0.0,0.0}, 0.0,     0.0,    0.0, 0,    0.0,     0.0,    0.0, 0,     0.0,    0.0,  0.0,  0.0,    0,         0, 0, 0,     0,     0,    0, 0}
};

Collectable BombLand_room9_collectables[] = {
    {      CROWN, {-1711.0,350.0,237.0},          6, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomObject BombLand_room10_objects[] = {
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,      BL_ROOM10_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,   BL_ROOM10_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,             BL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,  BL_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0,  400.0,  400.0,     0.0, 0.0, 1,  1, 0,    0, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    { {0.0,0.0,-1200.0}, {4.0,4.0,4.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,            BL_ROOM10_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,             BL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0,  400.0,  400.0,     0.0, 0.0, 2,  1, 0,    0, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {  {1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0, 0,    0.0,    0.0,     0.0, 0.0, 0,  0, 0,    0, 0, 0,                          0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

Collectable BombLand_room10_collectables[] = {
    {      CROWN, {-500.0,400.0,500.0},          7, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

RoomActor BombLand_room10_actors[] = {
    {      WHITE_BOMB, {-185.0,800.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -200.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-185.0,700.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -200.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-185.0,600.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -200.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-185.0,500.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -200.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-185.0,400.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -200.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-290.0,600.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -300.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-290.0,400.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -300.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-290.0,800.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -300.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-395.0,800.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -400.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-395.0,600.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -400.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-395.0,400.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -400.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-500.0,500.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -500.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-500.0,700.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -500.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,400.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-795.0,400.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -800.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-690.0,500.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -700.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-690.0,600.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -700.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-690.0,700.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -700.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-795.0,800.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -800.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,800.0,850.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 850.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,800.0,745.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 750.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,700.0,640.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 650.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,600.0,640.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 650.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,500.0,640.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 650.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,400.0,745.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 750.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,800.0,450.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 450.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,700.0,450.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 450.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,600.0,450.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 450.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,500.0,450.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 450.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,400.0,450.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 450.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,700.0,345.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 350.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,600.0,240.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 250.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB, {-900.0,700.0,135.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0, 150.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB,  {-900.0,800.0,30.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0,  50.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB,  {-900.0,700.0,30.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0,  50.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB,  {-900.0,600.0,30.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0,  50.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB,  {-900.0,500.0,30.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0,  50.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    {      WHITE_BOMB,  {-900.0,400.0,30.0}, 0.0, -5000.0, 5000.0, 0,   0.0, -5000.0, 5000.0, 1, -900.0,  50.0, 5.0, 90.0,    0,         0, 0, 0,  5.0f, 20.0f,    0, 0},
    { MISSILE_SPAWNER, {100.0,450.0,-100.0}, 0.0,  -800.0,  800.0, 0, 850.0,  -800.0,  800.0, 0,    1.0,  10.0, 3.0,  3.0, 4.0f, 640000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,        {0.0,0.0,0.0}, 0.0,     0.0,    0.0, 0,   0.0,     0.0,    0.0, 0,    0.0,   0.0, 0.0,  0.0,    0,         0, 0, 0,     0,     0,    0, 0}
};

RoomObject BombLand_room11_objects[] = {
    {   {-400.0,0.0,400.0}, {0.800000011920929,0.5,0.800000011920929}, 0,                                          0,   7, 14,              1400.0, 1000.0, -1000.0, 0.0,        0,   0, 60,   -1, 11,  0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,-400.0}, {0.800000011920929,0.5,0.800000011920929}, 0,                                          0,   7, 14,              1400.0, 1000.0, -1000.0, 0.0,        0,   0, 60,   -1, 11,  0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,400.0}, {0.800000011920929,0.5,0.800000011920929}, 0,                                          0,   7, 14,              1400.0, 1000.0, -1000.0, 0.0,        0,   0, 60,   -1, 11,  0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,400.0},              {2.0,1.0,1.3333333730697632}, 0,                                          0,   7, 14,                 0.0,    0.0,     0.0, 0.0,        0,   0, 20,   11, 11,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,-400.0},              {2.0,1.0,1.3333333730697632}, 0,                                          0,   7, 14,                 0.0,    0.0,     0.0, 0.0,        0,   0, 20,   -1, 11,  2,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-400.0,0.0,400.0},              {2.0,1.0,1.3333333730697632}, 0,                                          0,   7, 14,                 0.0,    0.0,     0.0, 0.0,        0,   0, 20,   -1, 11,  2,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146725768, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {400.0,-10.0,400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,   0,  0,    0,  0,  0,              BL_O_RESULT_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  2,  4, 4, 0, -1, 0, 0},
    { {400.0,-10.0,-400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,   0,  0,    0,  0,  0,              BL_X_RESULT_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  2,  4, 4, 0, -1, 0, 0},
    { {-400.0,-10.0,400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,   0,  0,    0,  0,  0,              BL_X_RESULT_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                             {1.0,1.0,1.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        3, 104, 11,    0,  0,  0,     BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, &func_800B0B20,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                             {1.0,1.0,1.0}, 0,                                          0,   7,  0, 0.30000001192092896,    1.0,     0.0, 0.0,        0,   0,  0,    0,  0,  0,                 BL_EXIT1_MODEL, -1, -1, -1, &func_800B09C0,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                             {1.0,1.0,1.0}, 0,                                          0, 256,  0,               400.0,  400.0,     0.0, 0.0,        4,   1,  0,    0,  0,  0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {    {-1200.0,0.0,0.0},                             {4.0,4.0,4.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0,  90,  0, 1000,  0,  0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {  {-800.0,0.0,1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(180.00000500895632),   7, 28,                90.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-800.0,0.0,-1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-400.0,0.0,-1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {0.0,0.0,-1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {400.0,0.0,-1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {800.0,0.0,-1005.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(360.00001001791264),   7, 28,               270.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {1005.0,0.0,-800.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {1005.0,0.0,-400.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1005.0,0.0,400.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1005.0,0.0,800.0},                             {1.0,1.0,1.0}, 2, DEGREES_TO_RADIANS_2PI(270.00000068324533),   7, 28,               180.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-1005.0,0.0,-800.0},                             {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    { {-1005.0,0.0,-400.0},                             {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-1005.0,0.0,400.0},                             {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {  {-1005.0,0.0,800.0},                             {1.0,1.0,1.0}, 2,  DEGREES_TO_RADIANS_2PI(90.00000250447816),   7, 28,                 0.0,    0.0,     0.0, 0.0,        4,   0,  0,    0,  0,  0,      BL_GRENADE_SHUTTERS_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {    {800.0,0.0,800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {400.0,0.0,800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-400.0,0.0,800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-800.0,0.0,800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {800.0,0.0,400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-800.0,0.0,400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {800.0,0.0,0.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {400.0,0.0,0.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {-400.0,0.0,0.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {-800.0,0.0,0.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,-400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,-400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,-400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,-400.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {800.0,0.0,-800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {400.0,0.0,-800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,-800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-400.0,0.0,-800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-800.0,0.0,-800.0},                             {4.0,1.0,4.0}, 0,                                          0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,   5,  0,    0,  0,  0,   BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL,           NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {1050.0,0.0,0.0},             {0.20000000298023224,1.0,1.0}, 0,                                          0,   7, 11,              1050.0,  500.0,     0.0, 0.0,        1,  20,  1,   40,  0,  0,                 BL_UNK72_MODEL, -1, -1, 11,           NULL,           NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                             {1.0,1.0,1.0}, 0,                                          0,   7,  0,               100.0,    0.0,     0.0, 0.0,      180,  10, 50,   10, -1, 11,                BL_ROOM11_MODEL, -1, -1, -1, &RegistShutter, &func_800B118C,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                             {1.0,1.0,1.0}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,       11,   0,  0,    0,  0,  0,                 BL_EXIT2_MODEL, -1, -1, -1, &func_800B09E8, &func_800D91D8,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                             {1.0,1.0,1.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0,  90,  0, 1000,  0,  0,     BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                             {1.0,1.0,1.0}, 0,                                          0, 256,  0,               400.0,  400.0,     0.0, 0.0,        2,   1,  0,    0,  0,  0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {     {1200.0,0.0,0.0},                             {4.0,4.0,4.0}, 0,                                          0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0,  90,  0, 1000,  0,  0,                              0, -1, -1, -1,           NULL,           NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {  {-900.0,0.0,-900.0},                             {0.5,1.0,0.5}, 0,                                          0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,   0,  0,    0,  0,  0,            BL_DOOR_POLES_MODEL, -1, -1, -1,           NULL,           NULL,           0, 0, 34,  4, 4, 0, -1, 0, 0},
    {        {0.0,0.0,0.0},                             {0.0,0.0,0.0}, 0,                                          0,   0,  0,                 0.0,    0.0,     0.0, 0.0,        0,   0,  0,    0,  0,  0,                              0,  0,  0,  0,           NULL,           NULL,           0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room11_actors[] = {
    { MISSILE_SPAWNER, {-100.0,300.0,0.0}, 0.0, -800.0, 800.0, 0, 1000.0, -800.0, 800.0, 0, 1.0, 10.0, 5.0, 5.0, 5.0f, 1000000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER, {0.0,300.0,-700.0}, 0.0, -800.0, 800.0, 0, 1000.0, -800.0, 800.0, 0, 1.0, 10.0, 5.0, 5.0, 5.0f, 1000000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,  {0.0,300.0,700.0}, 0.0, -800.0, 800.0, 0, 1000.0, -800.0, 800.0, 0, 1.0, 10.0, 5.0, 5.0, 5.0f, 1000000.0f, 0, 0, 20.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,      {0.0,0.0,0.0}, 0.0,    0.0,   0.0, 0,    0.0,    0.0,   0.0, 0, 0.0,  0.0, 0.0, 0.0,    0,          0, 0, 0,     0,     0,    0, 0}
};

RoomObject BombLand_room12_objects[] = {
    {      {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,       BL_ROOM7_START_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,         BL_ROOM7_END_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {0.0,-50.0,450.0},                {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,   0,    0,  0, 0,         BL_LONG_PIPE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    { {0.0,-50.0,-450.0},                {1.0,1.0,1.0}, 0, 0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,   0,    0,  0, 0,         BL_LONG_PIPE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,       BL_ROOM7_START_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,         BL_ROOM7_END_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-1500.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-1300.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-1100.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-900.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-700.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-500.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-300.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {-100.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {100.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {300.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {500.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {700.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {    {900.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {1100.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {1300.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {   {1500.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7, 18,    0.0,    0.0,     0.0, 0.0, 1,  1, 126,   -1, 30, 0,         BL_DOOR_WALL_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,             BL_EXIT1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0, BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0, 4,  1,   0,    0,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {  {-2200.0,0.0,0.0},                {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {      {0.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,            BL_ROOM12_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,             BL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0, BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0},                {1.0,1.0,1.0}, 0, 0, 256,  0,  400.0,  400.0,     0.0, 0.0, 2,  1,   0,    0,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {   {2200.0,0.0,0.0},                {4.0,4.0,4.0}, 0, 0,   7,  0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90,   0, 1000,  0, 0,                          0, -1, -1, -1, NULL, NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {   {0.0,0.0,-900.0}, {2.0,1.0,0.4000000059604645}, 0, 0,   7,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,   0,    0,  0, 0,             BL_BLOCK_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2,  4, 4, 0, -1, 0, 0},
    {      {0.0,0.0,0.0},                {0.0,0.0,0.0}, 0, 0,   0,  0,    0.0,    0.0,     0.0, 0.0, 0,  0,   0,    0,  0, 0,                          0,  0,  0,  0, NULL, NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room12_actors[] = {
    {     CANNON,  {700.0,200.0,1000.0}, 90.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0,  700.0, 0.0,  150.0, 26.0, 200.0f, 800.0f, 0, 0, 0, 0, 0, 0},
    {     CANNON,  {300.0,200.0,1000.0}, 90.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0,  300.0, 0.0, -150.0, 26.0, 200.0f, 800.0f, 0, 0, 0, 0, 0, 0},
    {     CANNON, {-300.0,200.0,1000.0}, 90.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, -300.0, 0.0,  150.0, 26.0, 200.0f, 800.0f, 0, 0, 0, 0, 0, 0},
    {     CANNON, {-700.0,200.0,1000.0}, 90.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, -700.0, 0.0, -150.0, 26.0, 200.0f, 800.0f, 0, 0, 0, 0, 0, 0},
    { ACTOR_NULL,         {0.0,0.0,0.0},  0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0,    0.0, 0.0,    0.0,  0.0,      0,      0, 0, 0, 0, 0, 0, 0}
};

RoomObject BombLand_room13_objects[] = {
    {  {-1300.0,0.0,-1300.0},                 {1.0,1.0,1.0}, 0, 0,   7,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0, 0,    0, 0, 0,          BL_DOOR_POLES_MODEL, -1, -1, -1,           NULL, NULL,           0, 0, 34,  4, 4, 0, -1, 0, 0},
    {       {1550.0,0.0,0.0}, {0.20000000298023224,1.0,1.0}, 0, 0,   7, 11,              1550.0,  500.0,     0.0, 0.0,        1, 20, 1,   40, 0, 0,               BL_UNK72_MODEL, -1, -1,  3,           NULL, NULL,           0, 0,  7,  4, 4, 0, -1, 0, 0},
    {   {1200.0,10.0,1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {600.0,10.0,1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,10.0,1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-600.0,10.0,1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-1200.0,10.0,1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {1200.0,10.0,600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {600.0,10.0,600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {       {0.0,10.0,600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {-600.0,10.0,600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-1200.0,10.0,600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {1200.0,10.0,0.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {       {600.0,10.0,0.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {         {0.0,10.0,0.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {-600.0,10.0,0.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {-1200.0,10.0,0.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {1200.0,10.0,-600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {    {600.0,10.0,-600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {0.0,10.0,-600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {-600.0,10.0,-600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-1200.0,10.0,-600.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {1200.0,10.0,-1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {   {600.0,10.0,-1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {     {0.0,10.0,-1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {  {-600.0,10.0,-1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    { {-1200.0,10.0,-1200.0},                 {6.0,1.0,6.0}, 0, 0,   7, 13,                 0.0,    0.0,     0.0, 0.0, 50337228,  5, 0,    0, 0, 0, BL_BL_DESTRUCTABLE_TOP_MODEL, -1, -1, -1,           NULL, NULL, -2146729000, 0,  2,  4, 4, 0, -1, 0, 0},
    {      {-1700.0,0.0,0.0},                 {1.0,1.0,1.0}, 0, 0,   7,  0, 0.30000001192092896,    1.0,     0.0, 0.0,        0,  0, 0,    0, 0, 0,               BL_EXIT1_MODEL, -1, -1, -1, &func_800B09C0, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {      {-1700.0,0.0,0.0},                 {1.0,1.0,1.0}, 0, 0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,   BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1,           NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {      {-1700.0,0.0,0.0},                 {1.0,1.0,1.0}, 0, 0, 256,  0,               400.0,  400.0,     0.0, 0.0,        4,  1, 0,    0, 0, 0,                            0, -1, -1, -1,           NULL, NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {      {-1700.0,0.0,0.0},                 {4.0,4.0,4.0}, 0, 0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                            0, -1, -1, -1,           NULL, NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0},                 {1.0,1.0,1.0}, 0, 0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,              BL_ROOM13_MODEL, -1, -1, -1,           NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0},                 {1.0,1.0,1.0}, 0, 0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,               BL_EXIT2_MODEL, -1, -1, -1,           NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0},                 {1.0,1.0,1.0}, 0, 0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,   BL_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1,           NULL, NULL,           0, 0,  3,  4, 4, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0},                 {1.0,1.0,1.0}, 0, 0, 256,  0,               400.0,  400.0,     0.0, 0.0,        2,  1, 0,    0, 0, 0,                            0, -1, -1, -1,           NULL, NULL,           0, 0,  2, -1, 1, 0, -1, 0, 0},
    {       {1700.0,0.0,0.0},                 {4.0,4.0,4.0}, 0, 0,   7,  0,              1400.0, 1000.0, -1000.0, 0.0,        0, 90, 0, 1000, 0, 0,                            0, -1, -1, -1,           NULL, NULL,           0, 0,  1,  0, 0, 0, -1, 0, 0},
    {          {0.0,0.0,0.0},                 {0.0,0.0,0.0}, 0, 0,   0,  0,                 0.0,    0.0,     0.0, 0.0,        0,  0, 0,    0, 0, 0,                            0,  0,  0,  0,           NULL, NULL,           0, 0,  0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room13_actors[] = {
    {         GRENADE,  {1000.0,10.0,1000.0}, 1.0, -2500.0,  500.0, 0,    0.0, -2500.0,  500.0, 1, 4.0,  5.0, 0.0, 0.0,    0,         0, 0, 0, 210.0f, 60.0f,    0, 0},
    {         GRENADE, {1000.0,10.0,-1000.0}, 1.0, -2500.0,  500.0, 0,    0.0,  2500.0, -500.0, 1, 4.0,  5.0, 0.0, 0.0,    0,         0, 0, 0, 150.0f, 50.0f,    0, 0},
    {         GRENADE,    {0.0,10.0,-1000.0}, 1.0, -1500.0, 1500.0, 0,    0.0,  -500.0, 2500.0, 1, 4.0,  5.0, 0.0, 0.0,    0,         0, 0, 0, 120.0f, 40.0f,    0, 0},
    {         GRENADE,     {0.0,10.0,1000.0}, 1.0, -1500.0, 1500.0, 0,    0.0, -2500.0,  500.0, 1, 4.0,  5.0, 0.0, 0.0,    0,         0, 0, 0, 180.0f, 30.0f,    0, 0},
    { MISSILE_SPAWNER,    {0.0,200.0,-300.0}, 0.0, -1300.0, 1300.0, 0, 1500.0, -1300.0, 1300.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0,  30.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,    {0.0,200.0,-700.0}, 0.0, -1300.0, 1300.0, 0, 1500.0, -1300.0, 1300.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0,  30.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,     {0.0,200.0,700.0}, 0.0, -1300.0, 1300.0, 0, 1500.0, -1300.0, 1300.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0,  30.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,    {-700.0,200.0,0.0}, 0.0, -1300.0, 1300.0, 0, 1500.0, -1300.0, 1300.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0,  30.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,     {700.0,200.0,0.0}, 0.0, -1300.0, 1300.0, 0, 1500.0, -1300.0, 1300.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0,  30.0f, 40.0f, 1.0f, 0},
    { MISSILE_SPAWNER,       {0.0,200.0,0.0}, 0.0, -1300.0, 1300.0, 0, 1500.0, -1300.0, 1300.0, 0, 1.0, 10.0, 5.0, 5.0, 6.0f, 490000.0f, 0, 0,  30.0f, 40.0f, 1.0f, 0},
    {      ACTOR_NULL,         {0.0,0.0,0.0}, 0.0,     0.0,    0.0, 0,    0.0,     0.0,    0.0, 0, 0.0,  0.0, 0.0, 0.0,    0,         0, 0, 0,      0,     0,    0, 0}
};
RoomObject BombLand_room14_objects[] = {
    {   {0.0,0.0,0.0}, {5.0,1.0,5.0}, 0, 0, 7,  0, 0.0, 0.0, 0.0, 0.0, 0, 0,   0,  0,  0, 0,                 BL_ROOM0_MODEL, -1, -1, -1, NULL, NULL,           0, 0, 2, 0, 4, 0, -1, 0, 0},
    { {900.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 14, 0.0, 0.0, 0.0, 0.0, 0, 0, 100, -1, -1, 0, BL_BREAKABLE_BLOCK_AGAIN_MODEL, -1, -1, -1, NULL, NULL, -2146725768, 0, 2, 4, 4, 0, -1, 0, 0},
    {   {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0,  0, 0.0, 0.0, 0.0, 0.0, 0, 0,   0,  0,  0, 0,                              0,  0,  0,  0, NULL, NULL,           0, 0, 0, 0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room14_actors[] = {
    {    MISSILE, {300.0,0.0,0.0}, 0.0, -1300.0, 1300.0, 0, 1500.0, -1300.0, 1300.0, 0, 2.0, 20.0, 16.0, 4.0, 12.0f, 2250000.0f, 0, 0, 50.0f, 20.0f, 1.0f, 0},
    { ACTOR_NULL,   {0.0,0.0,0.0}, 0.0,     0.0,    0.0, 0,    0.0,     0.0,    0.0, 0, 0.0,  0.0,  0.0, 0.0,     0,          0, 0, 0,     0,     0,    0, 0}
};

RoomObject BombLand_room15_objects[] = {
    { {-2300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 5, -2300.0, -20000.0,     0.0, 0.0, 15, 300, -2,    0, 0, 0,   BL_BL_METAL_BRIDGE_MODEL, -1, -1,  0,           NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-2100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 5, -2100.0, -20000.0,     0.0, 0.0, 20, 300, -2,    0, 0, 0,   BL_BL_METAL_BRIDGE_MODEL, -1, -1,  0,           NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-1900.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 5, -1900.0, -20000.0,     0.0, 0.0, 25, 300, -2,    0, 0, 0,   BL_BL_METAL_BRIDGE_MODEL, -1, -1,  0,           NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 5, -1700.0, -20000.0,     0.0, 0.0, 30, 300, -2,    0, 0, 0,   BL_BL_METAL_BRIDGE_MODEL, -1, -1,  0,           NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-1500.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 5, -1500.0, -20000.0,     0.0, 0.0, 35, 300, -2,    0, 0, 0,   BL_BL_METAL_BRIDGE_MODEL, -1, -1,  0,           NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-1300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 5, -1300.0, -20000.0,     0.0, 0.0, 40, 300, -2,    0, 0, 0,   BL_BL_METAL_BRIDGE_MODEL, -1, -1,  0,           NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    { {-1100.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 5, -1100.0, -20000.0,     0.0, 0.0, 45, 300, -2,    0, 0, 0,   BL_BL_METAL_BRIDGE_MODEL, -1, -1,  0,           NULL,           NULL, 0, 0, 7,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0,  1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0,      BL_ROOM15_FLOOR_MODEL, -1, -1, -1,           NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0,     0.0,      0.0,     0.0, 0.0, 12,   0,  0,    0, 0, 0,            BL_ROOM15_MODEL, -1, -1, -1, &func_800B0A30, &func_800B0AA4, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2600.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0,     0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,             BL_EXIT1_MODEL, -1, -1, -1,           NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2600.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0,   7, 0,     0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0, BL_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1,           NULL,           NULL, 0, 0, 3,  4, 4, 0, -1, 0, 0},
    { {-2600.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0,   400.0,    400.0,     0.0, 0.0,  4,   1,  0,    0, 0, 0,                          0, -1, -1, -1,           NULL,           NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    { {-2600.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0,   7, 0,  1400.0,   1000.0, -1000.0, 0.0,  0,  90,  0, 1000, 0, 0,                          0, -1, -1, -1,           NULL,           NULL, 0, 0, 1,  0, 0, 0, -1, 0, 0},
    {  {0.0,1000.0,0.0}, {2.0,1.0,2.0}, 0, 0,   7, 0,     0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,      BL_ROOM15_FLOOR_MODEL, -1, -1, -1,           NULL,           NULL, 0, 0, 0,  0, 4, 0, -1, 0, 0},
    {     {0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0,   0, 0,     0.0,      0.0,     0.0, 0.0,  0,   0,  0,    0, 0, 0,                          0,  0,  0,  0,           NULL,           NULL, 0, 0, 0,  0, 0, 0,  0, 0, 0}
};

RoomActor BombLand_room15_actors[] = {
    { BLACK_CHAMELEON_PROJECTILE_SPAWNER, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 2000.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 8.0f, 150.0f, 40.0f, 0},
    {                         ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0,    0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0,    0,      0,     0, 0}
};

Collectable BombLand_room3_collectables[] = {
    {      CROWN,  {1100.0,0.0,-950.0}, 4294967295, 0, 0, 0},
    {      CROWN,   {1050.0,0.0,950.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-1150.0,0.0,950.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-400.0,300.0,950.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {350.0,600.0,950.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable BombLand_room6_collectables[] = {
    {    R_HEART, {20.0,10.0,39.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,    {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable BombLand_room7_collectables[] = {
    {           CROWN,      {150.0,0.0,0.0}, 4294967295, 0,  0,   0},
    {           CROWN,     {-750.0,0.0,0.0}, 4294967295, 0,  0,   0},
    { SHRINK_POWER_UP,  {1800.0,0.0,-800.0}, 4294967295, 0, -1, 300},
    {         R_HEART,   {1800.0,0.0,800.0}, 4294967295, 0,  0,   0},
    {         R_HEART, {-1800.0,0.0,-880.0}, 4294967295, 0,  0,   0},
    {         R_HEART,  {-1800.0,0.0,880.0}, 4294967295, 0,  0,   0},
    {      ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0,  0,   0}
};

Collectable BombLand_room11_collectables[] = {
    {    R_HEART, {-382.0,300.0,387.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {449.0,300.0,-379.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {383.0,300.0,404.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable BombLand_room12_collectables[] = {
    {      CROWN,     {0.0,0.0,-900.0}, 4294967295, 0, 0, 0},
    {      CROWN,     {-700.0,0.0,0.0}, 4294967295, 0, 0, 0},
    {      CROWN,      {500.0,0.0,0.0}, 4294967295, 0, 0, 0},
    {    R_HEART, {-1800.0,0.0,-880.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-1800.0,0.0,880.0}, 4294967295, 0, 0, 0},
    {    R_HEART,   {300.0,0.0,-900.0}, 4294967295, 0, 0, 0},
    {    R_HEART,  {-300.0,0.0,-900.0}, 4294967295, 0, 0, 0},
    { ACTOR_NULL,        {0.0,0.0,0.0}, 4294967295, 0, 0, 0}
};

Collectable BombLand_room13_collectables[] = {
    {              CROWN,        {0.0,0.0,0.0}, -1,          0,  0,   0},
    {            R_HEART, {1000.0,10.0,-500.0}, -1,          0,  0,   0},
    {            R_HEART,  {1000.0,10.0,500.0}, -1,          0,  0,   0},
    { TIME_STOP_POWER_UP,    {1300.0,10.0,0.0}, -1, 1092616192, -1, 300},
    {         ACTOR_NULL,        {0.0,0.0,0.0}, -1,          0,  0,   0}
};

Collectable BombLand_room15_collectables[] = {
    {      CROWN, {0.0,500.0,0.0}, 12, 0, 0, 0},
    { ACTOR_NULL,   {0.0,0.0,0.0}, -1, 0, 0, 0}
};

s32 BombLand_spriteLib_Sprlib[5][16] = {
{   113,
    76,
    36,
    43,
    32,
    33,
    34,
    35,
    51,
    0,
    0,
    0,
    0,
    0,
    0,
    0},
{   113,
    76,
    36,
    43,
    32,
    33,
    34,
    35,
    24,
    0,
    0,
    0,
    0,
    0,
    0,
    0},
{   113,
    76,
    36,
    43,
    32,
    33,
    34,
    35,
    27,
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

RoomInstance BombLand_room_instances[] = {
    {  BombLand_room0_objects,  BombLand_room0_actors,  BombLand_room0_collectables,  BombLand_room0_sprites, 0, 0, 0,  0, -1, 0, 0.0,  1,  -800.0,  500.0,  -700.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room1_objects,  BombLand_room1_actors,  BombLand_room1_collectables,                       0, 0, 0, 0, 13,  4, 0, 0.0,  1, -1400.0,  700.0, -1400.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room2_objects,  BombLand_room2_actors,  BombLand_room2_collectables,                       0, 0, 0, 0,  0, -1, 0, 0.0, 10,  -900.0,  500.0,  -900.0,     0.0,   0.0,    0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room3_objects,  BombLand_room3_actors,  BombLand_room3_collectables,                       0, 0, 0, 0,  0, -1, 0, 0.0,  1,  -600.0,  800.0, -1200.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room4_objects,  BombLand_room4_actors,  BombLand_room4_collectables,                       0, 0, 0, 0,  0, -1, 0, 0.0,  1, -1900.0, 1600.0,  -400.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room5_objects,  BombLand_room5_actors,  BombLand_room5_collectables,  BombLand_room5_sprites, 0, 0, 0,  0, -1, 0, 0.0,  2,  -900.0, 2700.0,  -900.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room6_objects,  BombLand_room6_actors,  BombLand_room6_collectables,                       0, 0, 0, 0,  0, -1, 0, 0.0,  2,   900.0,  800.0,  -900.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room7_objects,  BombLand_room7_actors,  BombLand_room7_collectables,                       0, 0, 0, 1,  0, -1, 0, 0.0, 12,  1500.0,  500.0,  -900.0, -1500.0, 500.0, -900.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room8_objects,  BombLand_room8_actors,  BombLand_room8_collectables,                       0, 0, 0, 0,  0, -1, 0, 0.0, 10,  1200.0, 1000.0, -1200.0,     0.0,   0.0,    0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {  BombLand_room9_objects,  BombLand_room9_actors,  BombLand_room9_collectables,                       0, 0, 0, 0,  0, -1, 0, 0.0,  1,  1900.0,  400.0,  -600.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BombLand_room10_objects, BombLand_room10_actors, BombLand_room10_collectables,                       0, 0, 0, 0, 13,  7, 0, 0.0, 10,   900.0,  700.0,  -900.0,     0.0,   0.0,    0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BombLand_room11_objects, BombLand_room11_actors, BombLand_room11_collectables,                       0, 1, 0, 0,  0, -1, 0, 0.0,  2,  -900.0,  800.0,  -900.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BombLand_room12_objects, BombLand_room12_actors, BombLand_room12_collectables, BombLand_room12_sprites, 0, 0, 0,  0, -1, 0, 0.0,  1, -1500.0,  500.0,  -900.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BombLand_room13_objects, BombLand_room13_actors, BombLand_room13_collectables,                       0, 0, 0, 2, 14,  3, 0, 0.0,  1, -1350.0, 1000.0, -1350.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BombLand_room14_objects, BombLand_room14_actors,                            0,                       0, 0, 1, 0,  0, -1, 0, 0.0,  2,     0.0,  800.0,  1000.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    { BombLand_room15_objects, BombLand_room15_actors, BombLand_room15_collectables,                       0, 0, 0, 0,  0, -1, 0, 0.0, 10, -1400.0, 1200.0,   800.0,     0.0,   0.0,    0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {                       0,                      0,                            0,                       0, 0, 0, 0,  0, -1, 0, 0.0,  0,     0.0,    0.0,     0.0,     0.0,   0.0,    0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

s32 BombLand_rooms_map[3][8] = {
    {-1,  0,  1,  2,  3,  4, -1, -1},
    {-1,  9,  8,  7,  6,  5, 15, -1},
    {-1, 10, 11, 12, 13, 14, -1, -1}
};

StageMapData BombLand_map_data = {
    8, 3, BombLand_room_instances, BombLand_rooms_map,
};

RoomInstance BombLand_nullOWRoom_Rmset[] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}
};

LevelScope BombLand_scope_Lvlscope = {
    {0.0f, 0.0f, 0.0f},
    255,
    25000,
    60,
};

StageData BombLand_stageData = {
    &BombLand_map_data,
    0,
    BombLand_stageModels,
    ARRAY_COUNT(BombLand_stageModels),
    0,
    BombLand_rabObjects_Bin,
    131072,
    BombLand_spriteLib_Sprlib,
    &BombLand_scope_Lvlscope,
};

s32 alignment_Pad_BL[] = {0, 0, 0};

Mtx BombLand_IMtx2 = IDENTITY;

Lights1 BombLand_blScope_Light =
    #include "assets/levelGroup/BombLand/blScope.light.inc.c"

Vtx BombLand_exit1_Vtx[] = {
    #include "assets/levelGroup/BombLand/exit1/exit1.vtx.inc.c"
};
Mtx BombLand_IMtx3 = IDENTITY;
unsigned char BombLand_Pad1[] = FILEPAD;
unsigned char BombLand_shutters_ia4_PNG[] = {
#include "build/assets/levelGroup/BombLand/exit1/shutters.ia4.png.inc.c"
};

Gfx BombLand_exit1_Gfx[] = {
    #include "assets/levelGroup/BombLand/exit1/exit1.gfx.inc.c"
};

Vtx BombLand_exit2_Vtx[] = {
    #include "assets/levelGroup/BombLand/exit2/exit2.vtx.inc.c"
};
Mtx BombLand_IMtx4 = IDENTITY;

Gfx BombLand_exit2_Gfx[] = {
    #include "assets/levelGroup/BombLand/exit2/exit2.gfx.inc.c"
};

Vtx BombLand_exit3_Vtx[] = {
    #include "assets/levelGroup/BombLand/exit3/exit3.vtx.inc.c"
};
Mtx BombLand_IMtx5 = IDENTITY;

Gfx BombLand_exit3_Gfx[] = {
    #include "assets/levelGroup/BombLand/exit3/exit3.gfx.inc.c"
};

Vtx BombLand_exit4_Vtx[] = {
    #include "assets/levelGroup/BombLand/exit4/exit4.vtx.inc.c"
};
Mtx BombLand_IMtx6 = IDENTITY;

Gfx BombLand_exit4_Gfx[] = {
    #include "assets/levelGroup/BombLand/exit4/exit4.gfx.inc.c"
};

Vtx BombLand_room0_Vtx[] = {
    #include "assets/levelGroup/BombLand/room0/room0.vtx.inc.c"
};
Mtx BombLand_IMtx7 = IDENTITY;
unsigned char BombLand_Pad2[] = FILEPAD;
unsigned char BombLand_warning_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/warning.ci4.png.inc.c"
};
unsigned char BombLand_Pad3[] = FILEPAD;
unsigned char BombLand_warning_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room0/warning.ci4.pal.inc.c"
};
unsigned char BombLand_Pad4[] = FILEPAD;
unsigned char BombLand_warnBlock_ci8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/warnBlock.ci8.png.inc.c"
};
unsigned char BombLand_Pad5[] = FILEPAD;
unsigned char BombLand_warnBlock_ci8_PAL[] = {
#include "build/assets/levelGroup/BombLand/room0/warnBlock.ci8.pal.inc.c"
};
unsigned char BombLand_Pad6[] = FILEPAD;
unsigned char BombLand_holeblock_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/holeblock.i4.png.inc.c"
};
unsigned char BombLand_Pad7[] = FILEPAD;
unsigned char BombLand_grate_ia4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/grate.ia4.png.inc.c"
};

Gfx BombLand_room0_Gfx[] = {
    #include "assets/levelGroup/BombLand/room0/room0.gfx.inc.c"
};

Vtx BombLand_room1_Vtx[] = {
    #include "assets/levelGroup/BombLand/room1/room1.vtx.inc.c"
};
Mtx BombLand_IMtx8 = IDENTITY;
unsigned char BombLand_Pad8[] = FILEPAD;
unsigned char BombLand_wallFade_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room1/wallFade.i8.png.inc.c"
};

Gfx BombLand_room1_Gfx[] = {
    #include "assets/levelGroup/BombLand/room1/room1.gfx.inc.c"
};

Vtx BombLand_room2_Vtx[] = {
    #include "assets/levelGroup/BombLand/room2/room2.vtx.inc.c"
};
Mtx BombLand_IMtx9 = IDENTITY;
unsigned char BombLand_Pad9[] = FILEPAD;
unsigned char BombLand_wall_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room2/wall.i8.png.inc.c"
};
unsigned char BombLand_Pad10[] = FILEPAD;
unsigned char BombLand_cheese_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room2/cheese.ci4.png.inc.c"
};
unsigned char BombLand_Pad11[] = FILEPAD;
unsigned char BombLand_cheese_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room2/cheese.ci4.pal.inc.c"
};

Gfx BombLand_room2_Gfx[] = {
    #include "assets/levelGroup/BombLand/room2/room2.gfx.inc.c"
};

Vtx BombLand_room3_Vtx[] = {
    #include "assets/levelGroup/BombLand/room3/room3.vtx.inc.c"
};
Mtx BombLand_IMtx10 = IDENTITY;
unsigned char BombLand_Pad12[] = FILEPAD;
unsigned char BombLand_hexcombFade_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room3/hexcombFade.i4.png.inc.c"
};

Gfx BombLand_room3_Gfx[] = {
    #include "assets/levelGroup/BombLand/room3/room3.gfx.inc.c"
};

Vtx BombLand_room4_Vtx[] = {
    #include "assets/levelGroup/BombLand/room4/room4.vtx.inc.c"
};
Mtx BombLand_IMtx11 = IDENTITY;
unsigned char BombLand_Pad13[] = FILEPAD;
unsigned char BombLand_plate_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room4/plate.i8.png.inc.c"
};

Gfx BombLand_room4_Gfx[] = {
    #include "assets/levelGroup/BombLand/room4/room4.gfx.inc.c"
};

Vtx BombLand_room5_Vtx[] = {
    #include "assets/levelGroup/BombLand/room5/room5.vtx.inc.c"
};
Mtx BombLand_IMtx12 = IDENTITY;
unsigned char BombLand_Pad14[] = FILEPAD;
unsigned char BombLand_plateFalloff_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room5/plateFalloff.i4.png.inc.c"
};

Gfx BombLand_room5_Gfx[] = {
    #include "assets/levelGroup/BombLand/room5/room5.gfx.inc.c"
};

Vtx BombLand_room6_Vtx[] = {
    #include "assets/levelGroup/BombLand/room6/room6.vtx.inc.c"
};
Mtx BombLand_IMtx13 = IDENTITY;

Gfx BombLand_room6_Gfx[] = {
    #include "assets/levelGroup/BombLand/room6/room6.gfx.inc.c"
};

Vtx BombLand_room7_Vtx[] = {
    #include "assets/levelGroup/BombLand/room7/room7.vtx.inc.c"
};
Mtx BombLand_IMtx14 = IDENTITY;

Gfx BombLand_room7_Gfx[] = {
    #include "assets/levelGroup/BombLand/room7/room7.gfx.inc.c"
};

Vtx BombLand_room8_Vtx[] = {
    #include "assets/levelGroup/BombLand/room8/room8.vtx.inc.c"
};
Mtx BombLand_IMtx15 = IDENTITY;
unsigned char BombLand_Pad15[] = FILEPAD;
unsigned char BombLand_hexcomb_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room8/hexcomb.i4.png.inc.c"
};

Gfx BombLand_room8_Gfx[] = {
    #include "assets/levelGroup/BombLand/room8/room8.gfx.inc.c"
};

Vtx BombLand_room9_Vtx[] = {
    #include "assets/levelGroup/BombLand/room9/room9.vtx.inc.c"
};
Mtx BombLand_IMtx16 = IDENTITY;

Gfx BombLand_room9_Gfx[] = {
    #include "assets/levelGroup/BombLand/room9/room9.gfx.inc.c"
};

Vtx BombLand_room10_Vtx[] = {
    #include "assets/levelGroup/BombLand/room10/room10.vtx.inc.c"
};
Mtx BombLand_IMtx17 = IDENTITY;

Gfx BombLand_room10_Gfx[] = {
    #include "assets/levelGroup/BombLand/room10/room10.gfx.inc.c"
};

Vtx BombLand_room11_Vtx[] = {
    #include "assets/levelGroup/BombLand/room11/room11.vtx.inc.c"
};
Mtx BombLand_IMtx18 = IDENTITY;

Gfx BombLand_room11_Gfx[] = {
    #include "assets/levelGroup/BombLand/room11/room11.gfx.inc.c"
};

Vtx BombLand_room12_Vtx[] = {
    #include "assets/levelGroup/BombLand/room12/room12.vtx.inc.c"
};
Mtx BombLand_IMtx19 = IDENTITY;

Gfx BombLand_room12_Gfx[] = {
    #include "assets/levelGroup/BombLand/room12/room12.gfx.inc.c"
};

Vtx BombLand_room13_Vtx[] = {
    #include "assets/levelGroup/BombLand/room13/room13.vtx.inc.c"
};
Mtx BombLand_IMtx20 = IDENTITY;

Gfx BombLand_room13_Gfx[] = {
    #include "assets/levelGroup/BombLand/room13/room13.gfx.inc.c"
};

Vtx BombLand_room15Floor_Vtx[] = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.vtx.inc.c"
};
Mtx BombLand_IMtx21 = IDENTITY;
unsigned char BombLand_Pad16[] = FILEPAD;
unsigned char BombLand_plate_fade_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room15Floor/plate_fade.i8.png.inc.c"
};

Gfx BombLand_room15Floor_Gfx[] = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.gfx.inc.c"
};

Vtx BombLand_room15_Vtx[] = {
    #include "assets/levelGroup/BombLand/room15/room15.vtx.inc.c"
};
Mtx BombLand_IMtx22 = IDENTITY;
unsigned char BombLand_Pad17[] = FILEPAD;
unsigned char BombLand_lego_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room15/lego.i4.png.inc.c"
};

Gfx BombLand_room15_Gfx[] = {
    #include "assets/levelGroup/BombLand/room15/room15.gfx.inc.c"
};

Vtx BombLand_room0Pipe_Vtx[] = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.vtx.inc.c"
};
Mtx BombLand_IMtx23 = IDENTITY;
unsigned char BombLand_Pad18[] = FILEPAD;
unsigned char BombLand_segment_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0Pipe/segment.i4.png.inc.c"
};

Gfx BombLand_room0Pipe_Gfx[] = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.gfx.inc.c"
};

Vtx BombLand_room1Floor_Vtx[] = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.vtx.inc.c"
};
Mtx BombLand_IMtx24 = IDENTITY;
unsigned char BombLand_Pad19[] = FILEPAD;
unsigned char BombLand_circle_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/circle.ci4.png.inc.c"
};
unsigned char BombLand_Pad20[] = FILEPAD;
unsigned char BombLand_circle_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/circle.ci4.pal.inc.c"
};
unsigned char BombLand_Pad21[] = FILEPAD;
unsigned char BombLand_acid_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/acid.ci4.png.inc.c"
};
unsigned char BombLand_Pad22[] = FILEPAD;
unsigned char BombLand_acid_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/acid.ci4.pal.inc.c"
};

Gfx BombLand_room1Floor_Gfx[] = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.gfx.inc.c"
};

Vtx BombLand_block_Vtx[] = {
    #include "assets/levelGroup/BombLand/block/block.vtx.inc.c"
};
Mtx BombLand_IMtx25 = IDENTITY;

Gfx BombLand_block_Gfx[] = {
    #include "assets/levelGroup/BombLand/block/block.gfx.inc.c"
};

Vtx BombLand_breakableBlockSides_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.vtx.inc.c"
};
Mtx BombLand_IMtx26 = IDENTITY;

Gfx BombLand_breakableBlockSides_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.gfx.inc.c"
};

Vtx BombLand_room3Start_Vtx[] = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.vtx.inc.c"
};
Mtx BombLand_IMtx27 = IDENTITY;

Gfx BombLand_room3Start_Gfx[] = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.gfx.inc.c"
};

Vtx BombLand_room3End_Vtx[] = {
    #include "assets/levelGroup/BombLand/room3End/room3End.vtx.inc.c"
};
Mtx BombLand_IMtx28 = IDENTITY;

Gfx BombLand_room3End_Gfx[] = {
    #include "assets/levelGroup/BombLand/room3End/room3End.gfx.inc.c"
};

Vtx BombLand_block2Maybe_Vtx[] = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.vtx.inc.c"
};
Mtx BombLand_IMtx29 = IDENTITY;

Gfx BombLand_block2Maybe_Gfx[] = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.gfx.inc.c"
};

Vtx BombLand_unusedPlatformMaybe_Vtx[] = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.vtx.inc.c"
};
Mtx BombLand_IMtx30 = IDENTITY;

Gfx BombLand_unusedPlatformMaybe_Gfx[] = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.gfx.inc.c"
};

Vtx BombLand_wall_Vtx[] = {
    #include "assets/levelGroup/BombLand/wall/wall.vtx.inc.c"
};
Mtx BombLand_IMtx31 = IDENTITY;

Gfx BombLand_wall_Gfx[] = {
    #include "assets/levelGroup/BombLand/wall/wall.gfx.inc.c"
};

Vtx BombLand_room4End1_Vtx[] = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.vtx.inc.c"
};
Mtx BombLand_IMtx32 = IDENTITY;

Gfx BombLand_room4End1_Gfx[] = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.gfx.inc.c"
};

Vtx BombLand_room4End2_Vtx[] = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.vtx.inc.c"
};
Mtx BombLand_IMtx33 = IDENTITY;

Gfx BombLand_room4End2_Gfx[] = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.gfx.inc.c"
};

Vtx BombLand_room4Start_Vtx[] = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.vtx.inc.c"
};
Mtx BombLand_IMtx34 = IDENTITY;

Gfx BombLand_room4Start_Gfx[] = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.gfx.inc.c"
};

Vtx BombLand_room5Start_Vtx[] = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.vtx.inc.c"
};
Mtx BombLand_IMtx35 = IDENTITY;

Gfx BombLand_room5Start_Gfx[] = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.gfx.inc.c"
};

Vtx BombLand_room5End_Vtx[] = {
    #include "assets/levelGroup/BombLand/room5End/room5End.vtx.inc.c"
};
Mtx BombLand_IMtx36 = IDENTITY;

Gfx BombLand_room5End_Gfx[] = {
    #include "assets/levelGroup/BombLand/room5End/room5End.gfx.inc.c"
};

Vtx BombLand_breakableBlock_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.vtx.inc.c"
};
Mtx BombLand_IMtx37 = IDENTITY;

Gfx BombLand_breakableBlock_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.gfx.inc.c"
};

Vtx BombLand_breakableBlockStack_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.vtx.inc.c"
};
Mtx BombLand_IMtx38 = IDENTITY;

Gfx BombLand_breakableBlockStack_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.gfx.inc.c"
};

Vtx BombLand_room7Start_Vtx[] = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.vtx.inc.c"
};
Mtx BombLand_IMtx39 = IDENTITY;

Gfx BombLand_room7Start_Gfx[] = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.gfx.inc.c"
};

Vtx BombLand_room7End_Vtx[] = {
    #include "assets/levelGroup/BombLand/room7End/room7End.vtx.inc.c"
};
Mtx BombLand_IMtx40 = IDENTITY;

Gfx BombLand_room7End_Gfx[] = {
    #include "assets/levelGroup/BombLand/room7End/room7End.gfx.inc.c"
};

Vtx BombLand_breakableBlockSide1_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.vtx.inc.c"
};
Mtx BombLand_IMtx41 = IDENTITY;

Gfx BombLand_breakableBlockSide1_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.gfx.inc.c"
};

Vtx BombLand_breakableBlockSide2_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.vtx.inc.c"
};
Mtx BombLand_IMtx42 = IDENTITY;

Gfx BombLand_breakableBlockSide2_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.gfx.inc.c"
};

Vtx BombLand_breakableBlockSide3_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.vtx.inc.c"
};
Mtx BombLand_IMtx43 = IDENTITY;

Gfx BombLand_breakableBlockSide3_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.gfx.inc.c"
};

Vtx BombLand_breakableBlockSide4_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.vtx.inc.c"
};
Mtx BombLand_IMtx44 = IDENTITY;

Gfx BombLand_breakableBlockSide4_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.gfx.inc.c"
};

Vtx BombLand_blockPlatform_Vtx[] = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.vtx.inc.c"
};
Mtx BombLand_IMtx45 = IDENTITY;
unsigned char BombLand_Pad23[] = FILEPAD;
unsigned char BombLand_platebig_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/blockPlatform/platebig.i8.png.inc.c"
};

Gfx BombLand_blockPlatform_Gfx[] = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.gfx.inc.c"
};

Vtx BombLand_breakableBlock2_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.vtx.inc.c"
};
Mtx BombLand_IMtx46 = IDENTITY;

Gfx BombLand_breakableBlock2_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.gfx.inc.c"
};

Vtx BombLand_room8Start_Vtx[] = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.vtx.inc.c"
};
Mtx BombLand_IMtx47 = IDENTITY;

Gfx BombLand_room8Start_Gfx[] = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.gfx.inc.c"
};

Vtx BombLand_room8End_Vtx[] = {
    #include "assets/levelGroup/BombLand/room8End/room8End.vtx.inc.c"
};
Mtx BombLand_IMtx48 = IDENTITY;

Gfx BombLand_room8End_Gfx[] = {
    #include "assets/levelGroup/BombLand/room8End/room8End.gfx.inc.c"
};

Vtx BombLand_room9End1_Vtx[] = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.vtx.inc.c"
};
Mtx BombLand_IMtx49 = IDENTITY;

Gfx BombLand_room9End1_Gfx[] = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.gfx.inc.c"
};

Vtx BombLand_room9End2_Vtx[] = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.vtx.inc.c"
};
Mtx BombLand_IMtx50 = IDENTITY;

Gfx BombLand_room9End2_Gfx[] = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.gfx.inc.c"
};

Vtx BombLand_room9Start_Vtx[] = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.vtx.inc.c"
};
Mtx BombLand_IMtx51 = IDENTITY;

Gfx BombLand_room9Start_Gfx[] = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.gfx.inc.c"
};

Vtx BombLand_room10Floor_Vtx[] = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.vtx.inc.c"
};
Mtx BombLand_IMtx52 = IDENTITY;

Gfx BombLand_room10Floor_Gfx[] = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.gfx.inc.c"
};

Vtx BombLand_room10Platform_Vtx[] = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.vtx.inc.c"
};
Mtx BombLand_IMtx53 = IDENTITY;

Gfx BombLand_room10Platform_Gfx[] = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.gfx.inc.c"
};

Vtx BombLand_tallWallWithFloorOnTop_Vtx[] = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.vtx.inc.c"
};
Mtx BombLand_IMtx54 = IDENTITY;

Gfx BombLand_tallWallWithFloorOnTop_Gfx[] = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.gfx.inc.c"
};

Vtx BombLand_unkBlock_Vtx[] = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.vtx.inc.c"
};
Mtx BombLand_IMtx55 = IDENTITY;

Gfx BombLand_unkBlock_Gfx[] = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.gfx.inc.c"
};

Vtx BombLand_thinBreakableBlockSide1_Vtx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.vtx.inc.c"
};
Mtx BombLand_IMtx56 = IDENTITY;

Gfx BombLand_thinBreakableBlockSide1_Gfx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.gfx.inc.c"
};

Vtx BombLand_thinBreakableBlockSide2_Vtx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.vtx.inc.c"
};
Mtx BombLand_IMtx57 = IDENTITY;

Gfx BombLand_thinBreakableBlockSide2_Gfx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.gfx.inc.c"
};

Vtx BombLand_thinBreakableBlockSide3_Vtx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.vtx.inc.c"
};
Mtx BombLand_IMtx58 = IDENTITY;

Gfx BombLand_thinBreakableBlockSide3_Gfx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.gfx.inc.c"
};

Vtx BombLand_thinBreakableBlockSide4_Vtx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.vtx.inc.c"
};
Mtx BombLand_IMtx59 = IDENTITY;

Gfx BombLand_thinBreakableBlockSide4_Gfx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.gfx.inc.c"
};

Vtx BombLand_thinBreakableBlockSide5_Vtx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.vtx.inc.c"
};
Mtx BombLand_IMtx60 = IDENTITY;

Gfx BombLand_thinBreakableBlockSide5_Gfx[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.gfx.inc.c"
};

Vtx BombLand_unkPlatform_Vtx[] = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.vtx.inc.c"
};
Mtx BombLand_IMtx61 = IDENTITY;

Gfx BombLand_unkPlatform_Gfx[] = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.gfx.inc.c"
};

Vtx BombLand_pipe1_Vtx[] = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.vtx.inc.c"
};
Mtx BombLand_IMtx62 = IDENTITY;

Gfx BombLand_pipe1_Gfx[] = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.gfx.inc.c"
};

Vtx BombLand_pipe2_Vtx[] = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.vtx.inc.c"
};
Mtx BombLand_IMtx63 = IDENTITY;

Gfx BombLand_pipe2_Gfx[] = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.gfx.inc.c"
};

Vtx BombLand_breakableBlockTop_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.vtx.inc.c"
};
Mtx BombLand_IMtx64 = IDENTITY;

Gfx BombLand_breakableBlockTop_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.gfx.inc.c"
};

Vtx BombLand_blockTop_Vtx[] = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.vtx.inc.c"
};
Mtx BombLand_IMtx65 = IDENTITY;

Gfx BombLand_blockTop_Gfx[] = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.gfx.inc.c"
};

Vtx BombLand_breakableBlockAgain_Vtx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.vtx.inc.c"
};
Mtx BombLand_IMtx66 = IDENTITY;

Gfx BombLand_breakableBlockAgain_Gfx[] = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.gfx.inc.c"
};

Vtx BombLand_metalBridgeThing_Vtx[] = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.vtx.inc.c"
};
Mtx BombLand_IMtx67 = IDENTITY;
unsigned char BombLand_Pad24[] = FILEPAD;
unsigned char BombLand_apparentlyATexture_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/metalBridgeThing/apparentlyATexture.ci4.png.inc.c"
};
unsigned char BombLand_Pad25[] = FILEPAD;
unsigned char BombLand_apparentlyATexture_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/metalBridgeThing/apparentlyATexture.ci4.pal.inc.c"
};

Gfx BombLand_metalBridgeThing_Gfx[] = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.gfx.inc.c"
};

Vtx BombLand_longPipe_Vtx[] = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.vtx.inc.c"
};
Mtx BombLand_IMtx68 = IDENTITY;
unsigned char BombLand_Pad26[] = FILEPAD;
unsigned char BombLand_segment2_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/longPipe/segment2.i8.png.inc.c"
};

Gfx BombLand_longPipe_Gfx[] = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.gfx.inc.c"
};

Vtx BombLand_XResult_Vtx[] = {
    #include "assets/levelGroup/BombLand/XResult/XResult.vtx.inc.c"
};
Mtx BombLand_IMtx69 = IDENTITY;
unsigned char BombLand_Pad27[] = FILEPAD;
unsigned char BombLand_x_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/XResult/x.ci4.png.inc.c"
};
unsigned char BombLand_Pad28[] = FILEPAD;
unsigned char BombLand_x_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/XResult/x.ci4.pal.inc.c"
};

Gfx BombLand_XResult_Gfx[] = {
    #include "assets/levelGroup/BombLand/XResult/XResult.gfx.inc.c"
};

Vtx BombLand_OResult_Vtx[] = {
    #include "assets/levelGroup/BombLand/OResult/OResult.vtx.inc.c"
};
Mtx BombLand_IMtx70 = IDENTITY;
unsigned char BombLand_Pad29[] = FILEPAD;
unsigned char BombLand_OResulto_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/OResulto.ci4.png.inc.c"
};
unsigned char BombLand_Pad30[] = FILEPAD;
unsigned char BombLand_OResulto_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/OResulto.ci4.pal.inc.c"
};

Gfx BombLand_OResult_Gfx[] = {
    #include "assets/levelGroup/BombLand/OResult/OResult.gfx.inc.c"
};

Vtx BombLand_grenadeShutters_Vtx[] = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.vtx.inc.c"
};
Mtx BombLand_IMtx71 = IDENTITY;

Gfx BombLand_grenadeShutters_Gfx[] = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.gfx.inc.c"
};

Vtx BombLand_doorWall_Vtx[] = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.vtx.inc.c"
};
Mtx BombLand_IMtx72 = IDENTITY;

Gfx BombLand_doorWall_Gfx[] = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.gfx.inc.c"
};

Vtx BombLand_doorPoles_Vtx[] = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.vtx.inc.c"
};
Mtx BombLand_IMtx73 = IDENTITY;

Gfx BombLand_doorPoles_Gfx[] = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.gfx.inc.c"
};

Vtx BombLand_unk72_Vtx[] = {
    #include "assets/levelGroup/BombLand/unk72/unk72.vtx.inc.c"
};
Mtx BombLand_IMtx74 = IDENTITY;
unsigned char BombLand_Pad31[] = FILEPAD;
unsigned char BombLand_bars_ia4_PNG[] = {
#include "build/assets/levelGroup/BombLand/unk72/bars.ia4.png.inc.c"
};

Gfx BombLand_unk72_Gfx[] = {
    #include "assets/levelGroup/BombLand/unk72/unk72.gfx.inc.c"
};

Vec3f BombLand_exit1_ColVerts[] = {
    #include "assets/levelGroup/BombLand/exit1/exit1.colVerts.inc.c"
};

Vec3w BombLand_exit1_ColTris[] = {
    #include "assets/levelGroup/BombLand/exit1/exit1.colTris.inc.c"
};

Rect3D BombLand_exit1_BoundBox = {
    #include "assets/levelGroup/BombLand/exit1/exit1.boundBox.inc.c"
};

ModelCollision BombLand_exit1_collision = {
    ARRAY_COUNT(BombLand_exit1_ColVerts), ARRAY_COUNT(BombLand_exit1_ColTris), BombLand_exit1_ColVerts, BombLand_exit1_ColTris, &BombLand_exit1_BoundBox
};

Vec3f BombLand_exit2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/exit2/exit2.colVerts.inc.c"
};

Vec3w BombLand_exit2_ColTris[] = {
    #include "assets/levelGroup/BombLand/exit2/exit2.colTris.inc.c"
};

Rect3D BombLand_exit2_BoundBox = {
    #include "assets/levelGroup/BombLand/exit2/exit2.boundBox.inc.c"
};

ModelCollision BombLand_exit2_collision = {
    ARRAY_COUNT(BombLand_exit2_ColVerts), ARRAY_COUNT(BombLand_exit2_ColTris), BombLand_exit2_ColVerts, BombLand_exit2_ColTris, &BombLand_exit2_BoundBox
};

Vec3f BombLand_exit3_ColVerts[] = {
    #include "assets/levelGroup/BombLand/exit3/exit3.colVerts.inc.c"
};

Vec3w BombLand_exit3_ColTris[] = {
    #include "assets/levelGroup/BombLand/exit3/exit3.colTris.inc.c"
};

Rect3D BombLand_exit3_BoundBox = {
    #include "assets/levelGroup/BombLand/exit3/exit3.boundBox.inc.c"
};

ModelCollision BombLand_exit3_collision = {
    ARRAY_COUNT(BombLand_exit3_ColVerts), ARRAY_COUNT(BombLand_exit3_ColTris), BombLand_exit3_ColVerts, BombLand_exit3_ColTris, &BombLand_exit3_BoundBox
};

Vec3f BombLand_exit4_ColVerts[] = {
    #include "assets/levelGroup/BombLand/exit4/exit4.colVerts.inc.c"
};

Vec3w BombLand_exit4_ColTris[] = {
    #include "assets/levelGroup/BombLand/exit4/exit4.colTris.inc.c"
};

Rect3D BombLand_exit4_BoundBox = {
    #include "assets/levelGroup/BombLand/exit4/exit4.boundBox.inc.c"
};

ModelCollision BombLand_exit4_collision = {
    ARRAY_COUNT(BombLand_exit4_ColVerts), ARRAY_COUNT(BombLand_exit4_ColTris), BombLand_exit4_ColVerts, BombLand_exit4_ColTris, &BombLand_exit4_BoundBox
};

Vec3f BombLand_room0_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room0/room0.colVerts.inc.c"
};

Vec3w BombLand_room0_ColTris[] = {
    #include "assets/levelGroup/BombLand/room0/room0.colTris.inc.c"
};

Rect3D BombLand_room0_BoundBox = {
    #include "assets/levelGroup/BombLand/room0/room0.boundBox.inc.c"
};

ModelCollision BombLand_room0_collision = {
    ARRAY_COUNT(BombLand_room0_ColVerts), ARRAY_COUNT(BombLand_room0_ColTris), BombLand_room0_ColVerts, BombLand_room0_ColTris, &BombLand_room0_BoundBox
};

Vec3f BombLand_room1_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room1/room1.colVerts.inc.c"
};

Vec3w BombLand_room1_ColTris[] = {
    #include "assets/levelGroup/BombLand/room1/room1.colTris.inc.c"
};

Rect3D BombLand_room1_BoundBox = {
    #include "assets/levelGroup/BombLand/room1/room1.boundBox.inc.c"
};

ModelCollision BombLand_room1_collision = {
    ARRAY_COUNT(BombLand_room1_ColVerts), ARRAY_COUNT(BombLand_room1_ColTris), BombLand_room1_ColVerts, BombLand_room1_ColTris, &BombLand_room1_BoundBox
};

Vec3f BombLand_room2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room2/room2.colVerts.inc.c"
};

Vec3w BombLand_room2_ColTris[] = {
    #include "assets/levelGroup/BombLand/room2/room2.colTris.inc.c"
};

Rect3D BombLand_room2_BoundBox = {
    #include "assets/levelGroup/BombLand/room2/room2.boundBox.inc.c"
};

ModelCollision BombLand_room2_collision = {
    ARRAY_COUNT(BombLand_room2_ColVerts), ARRAY_COUNT(BombLand_room2_ColTris), BombLand_room2_ColVerts, BombLand_room2_ColTris, &BombLand_room2_BoundBox
};

Vec3f BombLand_room3_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room3/room3.colVerts.inc.c"
};

Vec3w BombLand_room3_ColTris[] = {
    #include "assets/levelGroup/BombLand/room3/room3.colTris.inc.c"
};

Rect3D BombLand_room3_BoundBox = {
    #include "assets/levelGroup/BombLand/room3/room3.boundBox.inc.c"
};

ModelCollision BombLand_room3_collision = {
    ARRAY_COUNT(BombLand_room3_ColVerts), ARRAY_COUNT(BombLand_room3_ColTris), BombLand_room3_ColVerts, BombLand_room3_ColTris, &BombLand_room3_BoundBox
};

Vec3f BombLand_room4_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room4/room4.colVerts.inc.c"
};

Vec3w BombLand_room4_ColTris[] = {
    #include "assets/levelGroup/BombLand/room4/room4.colTris.inc.c"
};

Rect3D BombLand_room4_BoundBox = {
    #include "assets/levelGroup/BombLand/room4/room4.boundBox.inc.c"
};

ModelCollision BombLand_room4_collision = {
    ARRAY_COUNT(BombLand_room4_ColVerts), ARRAY_COUNT(BombLand_room4_ColTris), BombLand_room4_ColVerts, BombLand_room4_ColTris, &BombLand_room4_BoundBox
};

Vec3f BombLand_room5_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room5/room5.colVerts.inc.c"
};

Vec3w BombLand_room5_ColTris[] = {
    #include "assets/levelGroup/BombLand/room5/room5.colTris.inc.c"
};

Rect3D BombLand_room5_BoundBox = {
    #include "assets/levelGroup/BombLand/room5/room5.boundBox.inc.c"
};

ModelCollision BombLand_room5_collision = {
    ARRAY_COUNT(BombLand_room5_ColVerts), ARRAY_COUNT(BombLand_room5_ColTris), BombLand_room5_ColVerts, BombLand_room5_ColTris, &BombLand_room5_BoundBox
};

Vec3f BombLand_room6_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room6/room6.colVerts.inc.c"
};

Vec3w BombLand_room6_ColTris[] = {
    #include "assets/levelGroup/BombLand/room6/room6.colTris.inc.c"
};

Rect3D BombLand_room6_BoundBox = {
    #include "assets/levelGroup/BombLand/room6/room6.boundBox.inc.c"
};

ModelCollision BombLand_room6_collision = {
    ARRAY_COUNT(BombLand_room6_ColVerts), ARRAY_COUNT(BombLand_room6_ColTris), BombLand_room6_ColVerts, BombLand_room6_ColTris, &BombLand_room6_BoundBox
};

Vec3f BombLand_room7_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room7/room7.colVerts.inc.c"
};

Vec3w BombLand_room7_ColTris[] = {
    #include "assets/levelGroup/BombLand/room7/room7.colTris.inc.c"
};

Rect3D BombLand_room7_BoundBox = {
    #include "assets/levelGroup/BombLand/room7/room7.boundBox.inc.c"
};

ModelCollision BombLand_room7_collision = {
    ARRAY_COUNT(BombLand_room7_ColVerts), ARRAY_COUNT(BombLand_room7_ColTris), BombLand_room7_ColVerts, BombLand_room7_ColTris, &BombLand_room7_BoundBox
};

Vec3f BombLand_room8_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room8/room8.colVerts.inc.c"
};

Vec3w BombLand_room8_ColTris[] = {
    #include "assets/levelGroup/BombLand/room8/room8.colTris.inc.c"
};

Rect3D BombLand_room8_BoundBox = {
    #include "assets/levelGroup/BombLand/room8/room8.boundBox.inc.c"
};

ModelCollision BombLand_room8_collision = {
    ARRAY_COUNT(BombLand_room8_ColVerts), ARRAY_COUNT(BombLand_room8_ColTris), BombLand_room8_ColVerts, BombLand_room8_ColTris, &BombLand_room8_BoundBox
};

Vec3f BombLand_room9_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room9/room9.colVerts.inc.c"
};

Vec3w BombLand_room9_ColTris[] = {
    #include "assets/levelGroup/BombLand/room9/room9.colTris.inc.c"
};

Rect3D BombLand_room9_BoundBox = {
    #include "assets/levelGroup/BombLand/room9/room9.boundBox.inc.c"
};

ModelCollision BombLand_room9_collision = {
    ARRAY_COUNT(BombLand_room9_ColVerts), ARRAY_COUNT(BombLand_room9_ColTris), BombLand_room9_ColVerts, BombLand_room9_ColTris, &BombLand_room9_BoundBox
};

Vec3f BombLand_room10_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room10/room10.colVerts.inc.c"
};

Vec3w BombLand_room10_ColTris[] = {
    #include "assets/levelGroup/BombLand/room10/room10.colTris.inc.c"
};

Rect3D BombLand_room10_BoundBox = {
    #include "assets/levelGroup/BombLand/room10/room10.boundBox.inc.c"
};

ModelCollision BombLand_room10_collision = {
    ARRAY_COUNT(BombLand_room10_ColVerts), ARRAY_COUNT(BombLand_room10_ColTris), BombLand_room10_ColVerts, BombLand_room10_ColTris, &BombLand_room10_BoundBox
};

Vec3f BombLand_room11_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room11/room11.colVerts.inc.c"
};

Vec3w BombLand_room11_ColTris[] = {
    #include "assets/levelGroup/BombLand/room11/room11.colTris.inc.c"
};

Rect3D BombLand_room11_BoundBox = {
    #include "assets/levelGroup/BombLand/room11/room11.boundBox.inc.c"
};

ModelCollision BombLand_room11_collision = {
    ARRAY_COUNT(BombLand_room11_ColVerts), ARRAY_COUNT(BombLand_room11_ColTris), BombLand_room11_ColVerts, BombLand_room11_ColTris, &BombLand_room11_BoundBox
};

Vec3f BombLand_room12_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room12/room12.colVerts.inc.c"
};

Vec3w BombLand_room12_ColTris[] = {
    #include "assets/levelGroup/BombLand/room12/room12.colTris.inc.c"
};

Rect3D BombLand_room12_BoundBox = {
    #include "assets/levelGroup/BombLand/room12/room12.boundBox.inc.c"
};

ModelCollision BombLand_room12_collision = {
    ARRAY_COUNT(BombLand_room12_ColVerts), ARRAY_COUNT(BombLand_room12_ColTris), BombLand_room12_ColVerts, BombLand_room12_ColTris, &BombLand_room12_BoundBox
};

Vec3f BombLand_room13_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room13/room13.colVerts.inc.c"
};

Vec3w BombLand_room13_ColTris[] = {
    #include "assets/levelGroup/BombLand/room13/room13.colTris.inc.c"
};

Rect3D BombLand_room13_BoundBox = {
    #include "assets/levelGroup/BombLand/room13/room13.boundBox.inc.c"
};

ModelCollision BombLand_room13_collision = {
    ARRAY_COUNT(BombLand_room13_ColVerts), ARRAY_COUNT(BombLand_room13_ColTris), BombLand_room13_ColVerts, BombLand_room13_ColTris, &BombLand_room13_BoundBox
};

Vec3f BombLand_room15Floor_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.colVerts.inc.c"
};

Vec3w BombLand_room15Floor_ColTris[] = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.colTris.inc.c"
};

Rect3D BombLand_room15Floor_BoundBox = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.boundBox.inc.c"
};

ModelCollision BombLand_room15Floor_collision = {
    ARRAY_COUNT(BombLand_room15Floor_ColVerts), ARRAY_COUNT(BombLand_room15Floor_ColTris), BombLand_room15Floor_ColVerts, BombLand_room15Floor_ColTris, &BombLand_room15Floor_BoundBox
};

Vec3f BombLand_room15_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room15/room15.colVerts.inc.c"
};

Vec3w BombLand_room15_ColTris[] = {
    #include "assets/levelGroup/BombLand/room15/room15.colTris.inc.c"
};

Rect3D BombLand_room15_BoundBox = {
    #include "assets/levelGroup/BombLand/room15/room15.boundBox.inc.c"
};

ModelCollision BombLand_room15_collision = {
    ARRAY_COUNT(BombLand_room15_ColVerts), ARRAY_COUNT(BombLand_room15_ColTris), BombLand_room15_ColVerts, BombLand_room15_ColTris, &BombLand_room15_BoundBox
};

Vec3f BombLand_room0Pipe_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colVerts.inc.c"
};

Vec3w BombLand_room0Pipe_ColTris[] = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colTris.inc.c"
};

Rect3D BombLand_room0Pipe_BoundBox = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.boundBox.inc.c"
};

ModelCollision BombLand_room0Pipe_collision = {
    ARRAY_COUNT(BombLand_room0Pipe_ColVerts), ARRAY_COUNT(BombLand_room0Pipe_ColTris), BombLand_room0Pipe_ColVerts, BombLand_room0Pipe_ColTris, &BombLand_room0Pipe_BoundBox
};

Vec3f BombLand_room1Floor_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.colVerts.inc.c"
};

Vec3w BombLand_room1Floor_ColTris[] = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.colTris.inc.c"
};

Rect3D BombLand_room1Floor_BoundBox = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.boundBox.inc.c"
};

ModelCollision BombLand_room1Floor_collision = {
    ARRAY_COUNT(BombLand_room1Floor_ColVerts), ARRAY_COUNT(BombLand_room1Floor_ColTris), BombLand_room1Floor_ColVerts, BombLand_room1Floor_ColTris, &BombLand_room1Floor_BoundBox
};

Vec3f BombLand_block_ColVerts[] = {
    #include "assets/levelGroup/BombLand/block/block.colVerts.inc.c"
};

Vec3w BombLand_block_ColTris[] = {
    #include "assets/levelGroup/BombLand/block/block.colTris.inc.c"
};

Rect3D BombLand_block_BoundBox = {
    #include "assets/levelGroup/BombLand/block/block.boundBox.inc.c"
};

ModelCollision BombLand_block_collision = {
    ARRAY_COUNT(BombLand_block_ColVerts), ARRAY_COUNT(BombLand_block_ColTris), BombLand_block_ColVerts, BombLand_block_ColTris, &BombLand_block_BoundBox
};

Vec3f BombLand_breakableBlockSides_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockSides_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colTris.inc.c"
};

Rect3D BombLand_breakableBlockSides_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockSides_collision = {
    ARRAY_COUNT(BombLand_breakableBlockSides_ColVerts), ARRAY_COUNT(BombLand_breakableBlockSides_ColTris), BombLand_breakableBlockSides_ColVerts, BombLand_breakableBlockSides_ColTris, &BombLand_breakableBlockSides_BoundBox
};

Vec3f BombLand_room3Start_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.colVerts.inc.c"
};

Vec3w BombLand_room3Start_ColTris[] = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.colTris.inc.c"
};

Rect3D BombLand_room3Start_BoundBox = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.boundBox.inc.c"
};

ModelCollision BombLand_room3Start_collision = {
    ARRAY_COUNT(BombLand_room3Start_ColVerts), ARRAY_COUNT(BombLand_room3Start_ColTris), BombLand_room3Start_ColVerts, BombLand_room3Start_ColTris, &BombLand_room3Start_BoundBox
};

Vec3f BombLand_room3End_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room3End/room3End.colVerts.inc.c"
};

Vec3w BombLand_room3End_ColTris[] = {
    #include "assets/levelGroup/BombLand/room3End/room3End.colTris.inc.c"
};

Rect3D BombLand_room3End_BoundBox = {
    #include "assets/levelGroup/BombLand/room3End/room3End.boundBox.inc.c"
};

ModelCollision BombLand_room3End_collision = {
    ARRAY_COUNT(BombLand_room3End_ColVerts), ARRAY_COUNT(BombLand_room3End_ColTris), BombLand_room3End_ColVerts, BombLand_room3End_ColTris, &BombLand_room3End_BoundBox
};

Vec3f BombLand_block2Maybe_ColVerts[] = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colVerts.inc.c"
};

Vec3w BombLand_block2Maybe_ColTris[] = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colTris.inc.c"
};

Rect3D BombLand_block2Maybe_BoundBox = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.boundBox.inc.c"
};

ModelCollision BombLand_block2Maybe_collision = {
    ARRAY_COUNT(BombLand_block2Maybe_ColVerts), ARRAY_COUNT(BombLand_block2Maybe_ColTris), BombLand_block2Maybe_ColVerts, BombLand_block2Maybe_ColTris, &BombLand_block2Maybe_BoundBox
};

Vec3f BombLand_unusedPlatformMaybe_ColVerts[] = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colVerts.inc.c"
};

Vec3w BombLand_unusedPlatformMaybe_ColTris[] = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colTris.inc.c"
};

Rect3D BombLand_unusedPlatformMaybe_BoundBox = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.boundBox.inc.c"
};

ModelCollision BombLand_unusedPlatformMaybe_collision = {
    ARRAY_COUNT(BombLand_unusedPlatformMaybe_ColVerts), ARRAY_COUNT(BombLand_unusedPlatformMaybe_ColTris), BombLand_unusedPlatformMaybe_ColVerts, BombLand_unusedPlatformMaybe_ColTris, &BombLand_unusedPlatformMaybe_BoundBox
};

Vec3f BombLand_wall_ColVerts[] = {
    #include "assets/levelGroup/BombLand/wall/wall.colVerts.inc.c"
};

Vec3w BombLand_wall_ColTris[] = {
    #include "assets/levelGroup/BombLand/wall/wall.colTris.inc.c"
};

Rect3D BombLand_wall_BoundBox = {
    #include "assets/levelGroup/BombLand/wall/wall.boundBox.inc.c"
};

ModelCollision BombLand_wall_collision = {
    ARRAY_COUNT(BombLand_wall_ColVerts), ARRAY_COUNT(BombLand_wall_ColTris), BombLand_wall_ColVerts, BombLand_wall_ColTris, &BombLand_wall_BoundBox
};

Vec3f BombLand_room4End1_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.colVerts.inc.c"
};

Vec3w BombLand_room4End1_ColTris[] = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.colTris.inc.c"
};

Rect3D BombLand_room4End1_BoundBox = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.boundBox.inc.c"
};

ModelCollision BombLand_room4End1_collision = {
    ARRAY_COUNT(BombLand_room4End1_ColVerts), ARRAY_COUNT(BombLand_room4End1_ColTris), BombLand_room4End1_ColVerts, BombLand_room4End1_ColTris, &BombLand_room4End1_BoundBox
};

Vec3f BombLand_room4End2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.colVerts.inc.c"
};

Vec3w BombLand_room4End2_ColTris[] = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.colTris.inc.c"
};

Rect3D BombLand_room4End2_BoundBox = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.boundBox.inc.c"
};

ModelCollision BombLand_room4End2_collision = {
    ARRAY_COUNT(BombLand_room4End2_ColVerts), ARRAY_COUNT(BombLand_room4End2_ColTris), BombLand_room4End2_ColVerts, BombLand_room4End2_ColTris, &BombLand_room4End2_BoundBox
};

Vec3f BombLand_room4Start_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.colVerts.inc.c"
};

Vec3w BombLand_room4Start_ColTris[] = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.colTris.inc.c"
};

Rect3D BombLand_room4Start_BoundBox = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.boundBox.inc.c"
};

ModelCollision BombLand_room4Start_collision = {
    ARRAY_COUNT(BombLand_room4Start_ColVerts), ARRAY_COUNT(BombLand_room4Start_ColTris), BombLand_room4Start_ColVerts, BombLand_room4Start_ColTris, &BombLand_room4Start_BoundBox
};

Vec3f BombLand_room5Start_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.colVerts.inc.c"
};

Vec3w BombLand_room5Start_ColTris[] = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.colTris.inc.c"
};

Rect3D BombLand_room5Start_BoundBox = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.boundBox.inc.c"
};

ModelCollision BombLand_room5Start_collision = {
    ARRAY_COUNT(BombLand_room5Start_ColVerts), ARRAY_COUNT(BombLand_room5Start_ColTris), BombLand_room5Start_ColVerts, BombLand_room5Start_ColTris, &BombLand_room5Start_BoundBox
};

Vec3f BombLand_room5End_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room5End/room5End.colVerts.inc.c"
};

Vec3w BombLand_room5End_ColTris[] = {
    #include "assets/levelGroup/BombLand/room5End/room5End.colTris.inc.c"
};

Rect3D BombLand_room5End_BoundBox = {
    #include "assets/levelGroup/BombLand/room5End/room5End.boundBox.inc.c"
};

ModelCollision BombLand_room5End_collision = {
    ARRAY_COUNT(BombLand_room5End_ColVerts), ARRAY_COUNT(BombLand_room5End_ColTris), BombLand_room5End_ColVerts, BombLand_room5End_ColTris, &BombLand_room5End_BoundBox
};

Vec3f BombLand_breakableBlock_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colVerts.inc.c"
};

Vec3w BombLand_breakableBlock_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colTris.inc.c"
};

Rect3D BombLand_breakableBlock_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlock_collision = {
    ARRAY_COUNT(BombLand_breakableBlock_ColVerts), ARRAY_COUNT(BombLand_breakableBlock_ColTris), BombLand_breakableBlock_ColVerts, BombLand_breakableBlock_ColTris, &BombLand_breakableBlock_BoundBox
};

Vec3f BombLand_breakableBlockStack_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockStack_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colTris.inc.c"
};

Rect3D BombLand_breakableBlockStack_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockStack_collision = {
    ARRAY_COUNT(BombLand_breakableBlockStack_ColVerts), ARRAY_COUNT(BombLand_breakableBlockStack_ColTris), BombLand_breakableBlockStack_ColVerts, BombLand_breakableBlockStack_ColTris, &BombLand_breakableBlockStack_BoundBox
};

Vec3f BombLand_room7Start_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.colVerts.inc.c"
};

Vec3w BombLand_room7Start_ColTris[] = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.colTris.inc.c"
};

Rect3D BombLand_room7Start_BoundBox = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.boundBox.inc.c"
};

ModelCollision BombLand_room7Start_collision = {
    ARRAY_COUNT(BombLand_room7Start_ColVerts), ARRAY_COUNT(BombLand_room7Start_ColTris), BombLand_room7Start_ColVerts, BombLand_room7Start_ColTris, &BombLand_room7Start_BoundBox
};

Vec3f BombLand_room7End_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room7End/room7End.colVerts.inc.c"
};

Vec3w BombLand_room7End_ColTris[] = {
    #include "assets/levelGroup/BombLand/room7End/room7End.colTris.inc.c"
};

Rect3D BombLand_room7End_BoundBox = {
    #include "assets/levelGroup/BombLand/room7End/room7End.boundBox.inc.c"
};

ModelCollision BombLand_room7End_collision = {
    ARRAY_COUNT(BombLand_room7End_ColVerts), ARRAY_COUNT(BombLand_room7End_ColTris), BombLand_room7End_ColVerts, BombLand_room7End_ColTris, &BombLand_room7End_BoundBox
};

Vec3f BombLand_breakableBlockSide1_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockSide1_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colTris.inc.c"
};

Rect3D BombLand_breakableBlockSide1_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockSide1_collision = {
    ARRAY_COUNT(BombLand_breakableBlockSide1_ColVerts), ARRAY_COUNT(BombLand_breakableBlockSide1_ColTris), BombLand_breakableBlockSide1_ColVerts, BombLand_breakableBlockSide1_ColTris, &BombLand_breakableBlockSide1_BoundBox
};

Vec3f BombLand_breakableBlockSide2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockSide2_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colTris.inc.c"
};

Rect3D BombLand_breakableBlockSide2_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockSide2_collision = {
    ARRAY_COUNT(BombLand_breakableBlockSide2_ColVerts), ARRAY_COUNT(BombLand_breakableBlockSide2_ColTris), BombLand_breakableBlockSide2_ColVerts, BombLand_breakableBlockSide2_ColTris, &BombLand_breakableBlockSide2_BoundBox
};

Vec3f BombLand_breakableBlockSide3_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockSide3_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colTris.inc.c"
};

Rect3D BombLand_breakableBlockSide3_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockSide3_collision = {
    ARRAY_COUNT(BombLand_breakableBlockSide3_ColVerts), ARRAY_COUNT(BombLand_breakableBlockSide3_ColTris), BombLand_breakableBlockSide3_ColVerts, BombLand_breakableBlockSide3_ColTris, &BombLand_breakableBlockSide3_BoundBox
};

Vec3f BombLand_breakableBlockSide4_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockSide4_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colTris.inc.c"
};

Rect3D BombLand_breakableBlockSide4_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockSide4_collision = {
    ARRAY_COUNT(BombLand_breakableBlockSide4_ColVerts), ARRAY_COUNT(BombLand_breakableBlockSide4_ColTris), BombLand_breakableBlockSide4_ColVerts, BombLand_breakableBlockSide4_ColTris, &BombLand_breakableBlockSide4_BoundBox
};

Vec3f BombLand_blockPlatform_ColVerts[] = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colVerts.inc.c"
};

Vec3w BombLand_blockPlatform_ColTris[] = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colTris.inc.c"
};

Rect3D BombLand_blockPlatform_BoundBox = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.boundBox.inc.c"
};

ModelCollision BombLand_blockPlatform_collision = {
    ARRAY_COUNT(BombLand_blockPlatform_ColVerts), ARRAY_COUNT(BombLand_blockPlatform_ColTris), BombLand_blockPlatform_ColVerts, BombLand_blockPlatform_ColTris, &BombLand_blockPlatform_BoundBox
};

Vec3f BombLand_breakableBlock2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colVerts.inc.c"
};

Vec3w BombLand_breakableBlock2_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colTris.inc.c"
};

Rect3D BombLand_breakableBlock2_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlock2_collision = {
    ARRAY_COUNT(BombLand_breakableBlock2_ColVerts), ARRAY_COUNT(BombLand_breakableBlock2_ColTris), BombLand_breakableBlock2_ColVerts, BombLand_breakableBlock2_ColTris, &BombLand_breakableBlock2_BoundBox
};

Vec3f BombLand_room8Start_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.colVerts.inc.c"
};

Vec3w BombLand_room8Start_ColTris[] = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.colTris.inc.c"
};

Rect3D BombLand_room8Start_BoundBox = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.boundBox.inc.c"
};

ModelCollision BombLand_room8Start_collision = {
    ARRAY_COUNT(BombLand_room8Start_ColVerts), ARRAY_COUNT(BombLand_room8Start_ColTris), BombLand_room8Start_ColVerts, BombLand_room8Start_ColTris, &BombLand_room8Start_BoundBox
};

Vec3f BombLand_room8End_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room8End/room8End.colVerts.inc.c"
};

Vec3w BombLand_room8End_ColTris[] = {
    #include "assets/levelGroup/BombLand/room8End/room8End.colTris.inc.c"
};

Rect3D BombLand_room8End_BoundBox = {
    #include "assets/levelGroup/BombLand/room8End/room8End.boundBox.inc.c"
};

ModelCollision BombLand_room8End_collision = {
    ARRAY_COUNT(BombLand_room8End_ColVerts), ARRAY_COUNT(BombLand_room8End_ColTris), BombLand_room8End_ColVerts, BombLand_room8End_ColTris, &BombLand_room8End_BoundBox
};

Vec3f BombLand_room9End1_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.colVerts.inc.c"
};

Vec3w BombLand_room9End1_ColTris[] = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.colTris.inc.c"
};

Rect3D BombLand_room9End1_BoundBox = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.boundBox.inc.c"
};

ModelCollision BombLand_room9End1_collision = {
    ARRAY_COUNT(BombLand_room9End1_ColVerts), ARRAY_COUNT(BombLand_room9End1_ColTris), BombLand_room9End1_ColVerts, BombLand_room9End1_ColTris, &BombLand_room9End1_BoundBox
};

Vec3f BombLand_room9End2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.colVerts.inc.c"
};

Vec3w BombLand_room9End2_ColTris[] = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.colTris.inc.c"
};

Rect3D BombLand_room9End2_BoundBox = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.boundBox.inc.c"
};

ModelCollision BombLand_room9End2_collision = {
    ARRAY_COUNT(BombLand_room9End2_ColVerts), ARRAY_COUNT(BombLand_room9End2_ColTris), BombLand_room9End2_ColVerts, BombLand_room9End2_ColTris, &BombLand_room9End2_BoundBox
};

Vec3f BombLand_room9Start_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.colVerts.inc.c"
};

Vec3w BombLand_room9Start_ColTris[] = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.colTris.inc.c"
};

Rect3D BombLand_room9Start_BoundBox = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.boundBox.inc.c"
};

ModelCollision BombLand_room9Start_collision = {
    ARRAY_COUNT(BombLand_room9Start_ColVerts), ARRAY_COUNT(BombLand_room9Start_ColTris), BombLand_room9Start_ColVerts, BombLand_room9Start_ColTris, &BombLand_room9Start_BoundBox
};

Vec3f BombLand_room10Floor_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.colVerts.inc.c"
};

Vec3w BombLand_room10Floor_ColTris[] = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.colTris.inc.c"
};

Rect3D BombLand_room10Floor_BoundBox = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.boundBox.inc.c"
};

ModelCollision BombLand_room10Floor_collision = {
    ARRAY_COUNT(BombLand_room10Floor_ColVerts), ARRAY_COUNT(BombLand_room10Floor_ColTris), BombLand_room10Floor_ColVerts, BombLand_room10Floor_ColTris, &BombLand_room10Floor_BoundBox
};

Vec3f BombLand_room10Platform_ColVerts[] = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.colVerts.inc.c"
};

Vec3w BombLand_room10Platform_ColTris[] = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.colTris.inc.c"
};

Rect3D BombLand_room10Platform_BoundBox = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.boundBox.inc.c"
};

ModelCollision BombLand_room10Platform_collision = {
    ARRAY_COUNT(BombLand_room10Platform_ColVerts), ARRAY_COUNT(BombLand_room10Platform_ColTris), BombLand_room10Platform_ColVerts, BombLand_room10Platform_ColTris, &BombLand_room10Platform_BoundBox
};

Vec3f BombLand_tallWallWithFloorOnTop_ColVerts[] = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colVerts.inc.c"
};

Vec3w BombLand_tallWallWithFloorOnTop_ColTris[] = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colTris.inc.c"
};

Rect3D BombLand_tallWallWithFloorOnTop_BoundBox = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.boundBox.inc.c"
};

ModelCollision BombLand_tallWallWithFloorOnTop_collision = {
    ARRAY_COUNT(BombLand_tallWallWithFloorOnTop_ColVerts), ARRAY_COUNT(BombLand_tallWallWithFloorOnTop_ColTris), BombLand_tallWallWithFloorOnTop_ColVerts, BombLand_tallWallWithFloorOnTop_ColTris, &BombLand_tallWallWithFloorOnTop_BoundBox
};

Vec3f BombLand_unkBlock_ColVerts[] = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.colVerts.inc.c"
};

Vec3w BombLand_unkBlock_ColTris[] = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.colTris.inc.c"
};

Rect3D BombLand_unkBlock_BoundBox = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.boundBox.inc.c"
};

ModelCollision BombLand_unkBlock_collision = {
    ARRAY_COUNT(BombLand_unkBlock_ColVerts), ARRAY_COUNT(BombLand_unkBlock_ColTris), BombLand_unkBlock_ColVerts, BombLand_unkBlock_ColTris, &BombLand_unkBlock_BoundBox
};

Vec3f BombLand_thinBreakableBlockSide1_ColVerts[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colVerts.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide1_ColTris[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colTris.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide1_BoundBox = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.boundBox.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide1_collision = {
    ARRAY_COUNT(BombLand_thinBreakableBlockSide1_ColVerts), ARRAY_COUNT(BombLand_thinBreakableBlockSide1_ColTris), BombLand_thinBreakableBlockSide1_ColVerts, BombLand_thinBreakableBlockSide1_ColTris, &BombLand_thinBreakableBlockSide1_BoundBox
};

Vec3f BombLand_thinBreakableBlockSide2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colVerts.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide2_ColTris[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colTris.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide2_BoundBox = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.boundBox.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide2_collision = {
    ARRAY_COUNT(BombLand_thinBreakableBlockSide2_ColVerts), ARRAY_COUNT(BombLand_thinBreakableBlockSide2_ColTris), BombLand_thinBreakableBlockSide2_ColVerts, BombLand_thinBreakableBlockSide2_ColTris, &BombLand_thinBreakableBlockSide2_BoundBox
};

Vec3f BombLand_thinBreakableBlockSide3_ColVerts[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colVerts.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide3_ColTris[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colTris.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide3_BoundBox = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.boundBox.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide3_collision = {
    ARRAY_COUNT(BombLand_thinBreakableBlockSide3_ColVerts), ARRAY_COUNT(BombLand_thinBreakableBlockSide3_ColTris), BombLand_thinBreakableBlockSide3_ColVerts, BombLand_thinBreakableBlockSide3_ColTris, &BombLand_thinBreakableBlockSide3_BoundBox
};

Vec3f BombLand_thinBreakableBlockSide4_ColVerts[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colVerts.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide4_ColTris[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colTris.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide4_BoundBox = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.boundBox.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide4_collision = {
    ARRAY_COUNT(BombLand_thinBreakableBlockSide4_ColVerts), ARRAY_COUNT(BombLand_thinBreakableBlockSide4_ColTris), BombLand_thinBreakableBlockSide4_ColVerts, BombLand_thinBreakableBlockSide4_ColTris, &BombLand_thinBreakableBlockSide4_BoundBox
};

Vec3f BombLand_thinBreakableBlockSide5_ColVerts[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colVerts.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide5_ColTris[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colTris.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide5_BoundBox = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.boundBox.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide5_collision = {
    ARRAY_COUNT(BombLand_thinBreakableBlockSide5_ColVerts), ARRAY_COUNT(BombLand_thinBreakableBlockSide5_ColTris), BombLand_thinBreakableBlockSide5_ColVerts, BombLand_thinBreakableBlockSide5_ColTris, &BombLand_thinBreakableBlockSide5_BoundBox
};

Vec3f BombLand_unkPlatform_ColVerts[] = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colVerts.inc.c"
};

Vec3w BombLand_unkPlatform_ColTris[] = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colTris.inc.c"
};

Rect3D BombLand_unkPlatform_BoundBox = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.boundBox.inc.c"
};

ModelCollision BombLand_unkPlatform_collision = {
    ARRAY_COUNT(BombLand_unkPlatform_ColVerts), ARRAY_COUNT(BombLand_unkPlatform_ColTris), BombLand_unkPlatform_ColVerts, BombLand_unkPlatform_ColTris, &BombLand_unkPlatform_BoundBox
};

Vec3f BombLand_pipe1_ColVerts[] = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.colVerts.inc.c"
};

Vec3w BombLand_pipe1_ColTris[] = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.colTris.inc.c"
};

Rect3D BombLand_pipe1_BoundBox = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.boundBox.inc.c"
};

ModelCollision BombLand_pipe1_collision = {
    ARRAY_COUNT(BombLand_pipe1_ColVerts), ARRAY_COUNT(BombLand_pipe1_ColTris), BombLand_pipe1_ColVerts, BombLand_pipe1_ColTris, &BombLand_pipe1_BoundBox
};

Vec3f BombLand_pipe2_ColVerts[] = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.colVerts.inc.c"
};

Vec3w BombLand_pipe2_ColTris[] = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.colTris.inc.c"
};

Rect3D BombLand_pipe2_BoundBox = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.boundBox.inc.c"
};

ModelCollision BombLand_pipe2_collision = {
    ARRAY_COUNT(BombLand_pipe2_ColVerts), ARRAY_COUNT(BombLand_pipe2_ColTris), BombLand_pipe2_ColVerts, BombLand_pipe2_ColTris, &BombLand_pipe2_BoundBox
};

Vec3f BombLand_breakableBlockTop_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockTop_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colTris.inc.c"
};

Rect3D BombLand_breakableBlockTop_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockTop_collision = {
    ARRAY_COUNT(BombLand_breakableBlockTop_ColVerts), ARRAY_COUNT(BombLand_breakableBlockTop_ColTris), BombLand_breakableBlockTop_ColVerts, BombLand_breakableBlockTop_ColTris, &BombLand_breakableBlockTop_BoundBox
};

Vec3f BombLand_blockTop_ColVerts[] = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.colVerts.inc.c"
};

Vec3w BombLand_blockTop_ColTris[] = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.colTris.inc.c"
};

Rect3D BombLand_blockTop_BoundBox = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.boundBox.inc.c"
};

ModelCollision BombLand_blockTop_collision = {
    ARRAY_COUNT(BombLand_blockTop_ColVerts), ARRAY_COUNT(BombLand_blockTop_ColTris), BombLand_blockTop_ColVerts, BombLand_blockTop_ColTris, &BombLand_blockTop_BoundBox
};

Vec3f BombLand_breakableBlockAgain_ColVerts[] = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colVerts.inc.c"
};

Vec3w BombLand_breakableBlockAgain_ColTris[] = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colTris.inc.c"
};

Rect3D BombLand_breakableBlockAgain_BoundBox = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.boundBox.inc.c"
};

ModelCollision BombLand_breakableBlockAgain_collision = {
    ARRAY_COUNT(BombLand_breakableBlockAgain_ColVerts), ARRAY_COUNT(BombLand_breakableBlockAgain_ColTris), BombLand_breakableBlockAgain_ColVerts, BombLand_breakableBlockAgain_ColTris, &BombLand_breakableBlockAgain_BoundBox
};

Vec3f BombLand_metalBridgeThing_ColVerts[] = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colVerts.inc.c"
};

Vec3w BombLand_metalBridgeThing_ColTris[] = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colTris.inc.c"
};

Rect3D BombLand_metalBridgeThing_BoundBox = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.boundBox.inc.c"
};

ModelCollision BombLand_metalBridgeThing_collision = {
    ARRAY_COUNT(BombLand_metalBridgeThing_ColVerts), ARRAY_COUNT(BombLand_metalBridgeThing_ColTris), BombLand_metalBridgeThing_ColVerts, BombLand_metalBridgeThing_ColTris, &BombLand_metalBridgeThing_BoundBox
};

Vec3f BombLand_longPipe_ColVerts[] = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.colVerts.inc.c"
};

Vec3w BombLand_longPipe_ColTris[] = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.colTris.inc.c"
};

Rect3D BombLand_longPipe_BoundBox = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.boundBox.inc.c"
};

ModelCollision BombLand_longPipe_collision = {
    ARRAY_COUNT(BombLand_longPipe_ColVerts), ARRAY_COUNT(BombLand_longPipe_ColTris), BombLand_longPipe_ColVerts, BombLand_longPipe_ColTris, &BombLand_longPipe_BoundBox
};

Vec3f BombLand_XResult_ColVerts[] = {
    #include "assets/levelGroup/BombLand/XResult/XResult.colVerts.inc.c"
};

Vec3w BombLand_XResult_ColTris[] = {
    #include "assets/levelGroup/BombLand/XResult/XResult.colTris.inc.c"
};

Rect3D BombLand_XResult_BoundBox = {
    #include "assets/levelGroup/BombLand/XResult/XResult.boundBox.inc.c"
};

ModelCollision BombLand_XResult_collision = {
    ARRAY_COUNT(BombLand_XResult_ColVerts), ARRAY_COUNT(BombLand_XResult_ColTris), BombLand_XResult_ColVerts, BombLand_XResult_ColTris, &BombLand_XResult_BoundBox
};

Vec3f BombLand_OResult_ColVerts[] = {
    #include "assets/levelGroup/BombLand/OResult/OResult.colVerts.inc.c"
};

Vec3w BombLand_OResult_ColTris[] = {
    #include "assets/levelGroup/BombLand/OResult/OResult.colTris.inc.c"
};

Rect3D BombLand_OResult_BoundBox = {
    #include "assets/levelGroup/BombLand/OResult/OResult.boundBox.inc.c"
};

ModelCollision BombLand_OResult_collision = {
    ARRAY_COUNT(BombLand_OResult_ColVerts), ARRAY_COUNT(BombLand_OResult_ColTris), BombLand_OResult_ColVerts, BombLand_OResult_ColTris, &BombLand_OResult_BoundBox
};

Vec3f BombLand_grenadeShutters_ColVerts[] = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colVerts.inc.c"
};

Vec3w BombLand_grenadeShutters_ColTris[] = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colTris.inc.c"
};

Rect3D BombLand_grenadeShutters_BoundBox = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.boundBox.inc.c"
};

ModelCollision BombLand_grenadeShutters_collision = {
    ARRAY_COUNT(BombLand_grenadeShutters_ColVerts), ARRAY_COUNT(BombLand_grenadeShutters_ColTris), BombLand_grenadeShutters_ColVerts, BombLand_grenadeShutters_ColTris, &BombLand_grenadeShutters_BoundBox
};

Vec3f BombLand_doorWall_ColVerts[] = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.colVerts.inc.c"
};

Vec3w BombLand_doorWall_ColTris[] = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.colTris.inc.c"
};

Rect3D BombLand_doorWall_BoundBox = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.boundBox.inc.c"
};

ModelCollision BombLand_doorWall_collision = {
    ARRAY_COUNT(BombLand_doorWall_ColVerts), ARRAY_COUNT(BombLand_doorWall_ColTris), BombLand_doorWall_ColVerts, BombLand_doorWall_ColTris, &BombLand_doorWall_BoundBox
};

Vec3f BombLand_doorPoles_ColVerts[] = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.colVerts.inc.c"
};

Vec3w BombLand_doorPoles_ColTris[] = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.colTris.inc.c"
};

Rect3D BombLand_doorPoles_BoundBox = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.boundBox.inc.c"
};

ModelCollision BombLand_doorPoles_collision = {
    ARRAY_COUNT(BombLand_doorPoles_ColVerts), ARRAY_COUNT(BombLand_doorPoles_ColTris), BombLand_doorPoles_ColVerts, BombLand_doorPoles_ColTris, &BombLand_doorPoles_BoundBox
};

Vec3f BombLand_unk72_ColVerts[] = {
    #include "assets/levelGroup/BombLand/unk72/unk72.colVerts.inc.c"
};

Vec3w BombLand_unk72_ColTris[] = {
    #include "assets/levelGroup/BombLand/unk72/unk72.colTris.inc.c"
};

Rect3D BombLand_unk72_BoundBox = {
    #include "assets/levelGroup/BombLand/unk72/unk72.boundBox.inc.c"
};

ModelCollision BombLand_unk72_collision = {
    ARRAY_COUNT(BombLand_unk72_ColVerts), ARRAY_COUNT(BombLand_unk72_ColTris), BombLand_unk72_ColVerts, BombLand_unk72_ColTris, &BombLand_unk72_BoundBox
};

Mtx BombLand_unkMtx_Mtx = IDENTITY;

Anim BombLand_unk_Animh = {
    #include "assets/levelGroup/BombLand/anim/unk.animH.inc.c"
};

Mtx BombLand_unk_Animarr[1][1] = {
    #include "assets/levelGroup/BombLand/anim/unk.animArr.inc.c"
};

Lights1 BombLand_blScope2_Light =
    #include "assets/levelGroup/BombLand/blScope2.light.inc.c"

Vtx BombLand_unk73_Vtx[] = {
    #include "assets/levelGroup/BombLand/unk73/unk73.vtx.inc.c"
};
Mtx BombLand_IMtx75 = IDENTITY;
unsigned char BombLand_Pad32[] = FILEPAD;
unsigned char BombLand_cannon_rgba16_PNG[] = {
#include "build/assets/levelGroup/BombLand/unk73/cannon.rgba16.png.inc.c"
};
unsigned char BombLand_Pad33[] = FILEPAD;
unsigned char BombLand_cannonHole_rgba16_PNG[] = {
#include "build/assets/levelGroup/BombLand/unk73/cannonHole.rgba16.png.inc.c"
};

Gfx BombLand_unk73_Gfx[] = {
    #include "assets/levelGroup/BombLand/unk73/unk73.gfx.inc.c"
};
Mtx BombLand_IMtx76 = IDENTITY;

Gfx BombLand_unk74_Gfx[] = {
    #include "assets/levelGroup/BombLand/unk74/unk74.gfx.inc.c"
};

AnimPointer BombLand_unkPointers_Animp[1] = {
{&BombLand_unk_Animh.frames, &BombLand_unk_Animh.objects, BombLand_unk_Animarr[0]}
};
