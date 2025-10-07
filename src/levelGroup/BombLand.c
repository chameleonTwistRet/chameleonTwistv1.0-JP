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
extern Gfx BombLand_exit1_Gfx[];
extern ModelCollision BombLand_exit1_ColH;
extern Gfx BombLand_exit2_Gfx[];
extern ModelCollision BombLand_exit2_ColH;
extern Gfx BombLand_exit3_Gfx[];
extern ModelCollision BombLand_exit3_ColH;
extern Gfx BombLand_exit4_Gfx[];
extern ModelCollision BombLand_exit4_ColH;
extern Gfx BombLand_room0_Gfx[];
extern ModelCollision BombLand_room0_ColH;
extern Gfx BombLand_room1_Gfx[];
extern ModelCollision BombLand_room1_ColH;
extern Gfx BombLand_room2_Gfx[];
extern ModelCollision BombLand_room2_ColH;
extern Gfx BombLand_room3_Gfx[];
extern ModelCollision BombLand_room3_ColH;
extern Gfx BombLand_room4_Gfx[];
extern ModelCollision BombLand_room4_ColH;
extern Gfx BombLand_room5_Gfx[];
extern ModelCollision BombLand_room5_ColH;
extern Gfx BombLand_room6_Gfx[];
extern ModelCollision BombLand_room6_ColH;
extern Gfx BombLand_room7_Gfx[];
extern ModelCollision BombLand_room7_ColH;
extern Gfx BombLand_room8_Gfx[];
extern ModelCollision BombLand_room8_ColH;
extern Gfx BombLand_room9_Gfx[];
extern ModelCollision BombLand_room9_ColH;
extern Gfx BombLand_room10_Gfx[];
extern ModelCollision BombLand_room10_ColH;
extern Gfx BombLand_room11_Gfx[];
extern ModelCollision BombLand_room11_ColH;
extern Gfx BombLand_room12_Gfx[];
extern ModelCollision BombLand_room12_ColH;
extern Gfx BombLand_room13_Gfx[];
extern ModelCollision BombLand_room13_ColH;
extern Gfx BombLand_room15Floor_Gfx[];
extern ModelCollision BombLand_room15Floor_ColH;
extern Gfx BombLand_room15_Gfx[];
extern ModelCollision BombLand_room15_ColH;
extern Gfx BombLand_room0Pipe_Gfx[];
extern ModelCollision BombLand_room0Pipe_ColH;
extern Gfx BombLand_room1Floor_Gfx[];
extern ModelCollision BombLand_room1Floor_ColH;
extern Gfx BombLand_block_Gfx[];
extern ModelCollision BombLand_block_ColH;
extern Gfx BombLand_breakableBlockSides_Gfx[];
extern ModelCollision BombLand_breakableBlockSides_ColH;
extern Gfx BombLand_room3Start_Gfx[];
extern ModelCollision BombLand_room3Start_ColH;
extern Gfx BombLand_room3End_Gfx[];
extern ModelCollision BombLand_room3End_ColH;
extern Gfx BombLand_block2Maybe_Gfx[];
extern ModelCollision BombLand_block2Maybe_ColH;
extern Gfx BombLand_unusedPlatformMaybe_Gfx[];
extern ModelCollision BombLand_unusedPlatformMaybe_ColH;
extern Gfx BombLand_wall_Gfx[];
extern ModelCollision BombLand_wall_ColH;
extern Gfx BombLand_room4End1_Gfx[];
extern ModelCollision BombLand_room4End1_ColH;
extern Gfx BombLand_room4End2_Gfx[];
extern ModelCollision BombLand_room4End2_ColH;
extern Gfx BombLand_room4Start_Gfx[];
extern ModelCollision BombLand_room4Start_ColH;
extern Gfx BombLand_room5Start_Gfx[];
extern ModelCollision BombLand_room5Start_ColH;
extern Gfx BombLand_room5End_Gfx[];
extern ModelCollision BombLand_room5End_ColH;
extern Gfx BombLand_breakableBlock_Gfx[];
extern ModelCollision BombLand_breakableBlock_ColH;
extern Gfx BombLand_breakableBlockStack_Gfx[];
extern ModelCollision BombLand_breakableBlockStack_ColH;
extern Gfx BombLand_room7Start_Gfx[];
extern ModelCollision BombLand_room7Start_ColH;
extern Gfx BombLand_room7End_Gfx[];
extern ModelCollision BombLand_room7End_ColH;
extern Gfx BombLand_breakableBlockSide1_Gfx[];
extern ModelCollision BombLand_breakableBlockSide1_ColH;
extern Gfx BombLand_breakableBlockSide2_Gfx[];
extern ModelCollision BombLand_breakableBlockSide2_ColH;
extern Gfx BombLand_breakableBlockSide3_Gfx[];
extern ModelCollision BombLand_breakableBlockSide3_ColH;
extern Gfx BombLand_breakableBlockSide4_Gfx[];
extern ModelCollision BombLand_breakableBlockSide4_ColH;
extern Gfx BombLand_blockPlatform_Gfx[];
extern ModelCollision BombLand_blockPlatform_ColH;
extern Gfx BombLand_breakableBlock2_Gfx[];
extern ModelCollision BombLand_breakableBlock2_ColH;
extern Gfx BombLand_room8Start_Gfx[];
extern ModelCollision BombLand_room8Start_ColH;
extern Gfx BombLand_room8End_Gfx[];
extern ModelCollision BombLand_room8End_ColH;
extern Gfx BombLand_room9End1_Gfx[];
extern ModelCollision BombLand_room9End1_ColH;
extern Gfx BombLand_room9End2_Gfx[];
extern ModelCollision BombLand_room9End2_ColH;
extern Gfx BombLand_room9Start_Gfx[];
extern ModelCollision BombLand_room9Start_ColH;
extern Gfx BombLand_room10Floor_Gfx[];
extern ModelCollision BombLand_room10Floor_ColH;
extern Gfx BombLand_room10Platform_Gfx[];
extern ModelCollision BombLand_room10Platform_ColH;
extern Gfx BombLand_tallWallWithFloorOnTop_Gfx[];
extern ModelCollision BombLand_tallWallWithFloorOnTop_ColH;
extern Gfx BombLand_unkBlock_Gfx[];
extern ModelCollision BombLand_unkBlock_ColH;
extern Gfx BombLand_thinBreakableBlockSide1_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide1_ColH;
extern Gfx BombLand_thinBreakableBlockSide2_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide2_ColH;
extern Gfx BombLand_thinBreakableBlockSide3_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide3_ColH;
extern Gfx BombLand_thinBreakableBlockSide4_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide4_ColH;
extern Gfx BombLand_thinBreakableBlockSide5_Gfx[];
extern ModelCollision BombLand_thinBreakableBlockSide5_ColH;
extern Gfx BombLand_unkPlatform_Gfx[];
extern ModelCollision BombLand_unkPlatform_ColH;
extern Gfx BombLand_pipe1_Gfx[];
extern ModelCollision BombLand_pipe1_ColH;
extern Gfx BombLand_pipe2_Gfx[];
extern ModelCollision BombLand_pipe2_ColH;
extern Gfx BombLand_breakableBlockTop_Gfx[];
extern ModelCollision BombLand_breakableBlockTop_ColH;
extern Gfx BombLand_blockTop_Gfx[];
extern ModelCollision BombLand_blockTop_ColH;
extern Gfx BombLand_breakableBlockAgain_Gfx[];
extern ModelCollision BombLand_breakableBlockAgain_ColH;
extern Gfx BombLand_metalBridgeThing_Gfx[];
extern ModelCollision BombLand_metalBridgeThing_ColH;
extern Gfx BombLand_longPipe_Gfx[];
extern ModelCollision BombLand_longPipe_ColH;
extern Gfx BombLand_XResult_Gfx[];
extern ModelCollision BombLand_XResult_ColH;
extern Gfx BombLand_OResult_Gfx[];
extern ModelCollision BombLand_OResult_ColH;
extern Gfx BombLand_grenadeShutters_Gfx[];
extern ModelCollision BombLand_grenadeShutters_ColH;
extern Gfx BombLand_doorWall_Gfx[];
extern ModelCollision BombLand_doorWall_ColH;
extern Gfx BombLand_doorPoles_Gfx[];
extern ModelCollision BombLand_doorPoles_ColH;
extern Gfx BombLand_unk72_Gfx[];
extern ModelCollision BombLand_unk72_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;

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

StageModel BombLand_stageModels[110] = {
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
    {&BombLand_exit1_Gfx[0], &BombLand_exit1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_exit2_Gfx[0], &BombLand_exit2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_exit3_Gfx[0], &BombLand_exit3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_exit4_Gfx[0], &BombLand_exit4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room0_Gfx[0], &BombLand_room0_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room1_Gfx[0], &BombLand_room1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room2_Gfx[0], &BombLand_room2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room3_Gfx[0], &BombLand_room3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room4_Gfx[0], &BombLand_room4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room5_Gfx[0], &BombLand_room5_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room6_Gfx[0], &BombLand_room6_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room7_Gfx[0], &BombLand_room7_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room8_Gfx[0], &BombLand_room8_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room9_Gfx[0], &BombLand_room9_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room10_Gfx[0], &BombLand_room10_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room11_Gfx[0], &BombLand_room11_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room12_Gfx[0], &BombLand_room12_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room13_Gfx[0], &BombLand_room13_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room15Floor_Gfx[0], &BombLand_room15Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room15_Gfx[0], &BombLand_room15_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room0Pipe_Gfx[0], &BombLand_room0Pipe_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room1Floor_Gfx[0], &BombLand_room1Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_block_Gfx[0], &BombLand_block_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockSides_Gfx[0], &BombLand_breakableBlockSides_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room3Start_Gfx[0], &BombLand_room3Start_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room3End_Gfx[0], &BombLand_room3End_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_block2Maybe_Gfx[0], &BombLand_block2Maybe_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_unusedPlatformMaybe_Gfx[0], &BombLand_unusedPlatformMaybe_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_wall_Gfx[0], &BombLand_wall_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room4End1_Gfx[0], &BombLand_room4End1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room4End2_Gfx[0], &BombLand_room4End2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room4Start_Gfx[0], &BombLand_room4Start_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room5Start_Gfx[0], &BombLand_room5Start_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room5End_Gfx[0], &BombLand_room5End_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlock_Gfx[0], &BombLand_breakableBlock_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockStack_Gfx[0], &BombLand_breakableBlockStack_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room7Start_Gfx[0], &BombLand_room7Start_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room7End_Gfx[0], &BombLand_room7End_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockSide1_Gfx[0], &BombLand_breakableBlockSide1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockSide2_Gfx[0], &BombLand_breakableBlockSide2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockSide3_Gfx[0], &BombLand_breakableBlockSide3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockSide4_Gfx[0], &BombLand_breakableBlockSide4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_blockPlatform_Gfx[0], &BombLand_blockPlatform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlock2_Gfx[0], &BombLand_breakableBlock2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room8Start_Gfx[0], &BombLand_room8Start_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room8End_Gfx[0], &BombLand_room8End_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room9End1_Gfx[0], &BombLand_room9End1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room9End2_Gfx[0], &BombLand_room9End2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room9Start_Gfx[0], &BombLand_room9Start_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room10Floor_Gfx[0], &BombLand_room10Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_room10Platform_Gfx[0], &BombLand_room10Platform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_tallWallWithFloorOnTop_Gfx[0], &BombLand_tallWallWithFloorOnTop_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_unkBlock_Gfx[0], &BombLand_unkBlock_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_thinBreakableBlockSide1_Gfx[0], &BombLand_thinBreakableBlockSide1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_thinBreakableBlockSide2_Gfx[0], &BombLand_thinBreakableBlockSide2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_thinBreakableBlockSide3_Gfx[0], &BombLand_thinBreakableBlockSide3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_thinBreakableBlockSide4_Gfx[0], &BombLand_thinBreakableBlockSide4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_thinBreakableBlockSide5_Gfx[0], &BombLand_thinBreakableBlockSide5_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_unkPlatform_Gfx[0], &BombLand_unkPlatform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_pipe1_Gfx[0], &BombLand_pipe1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_pipe2_Gfx[0], &BombLand_pipe2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockTop_Gfx[0], &BombLand_breakableBlockTop_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_blockTop_Gfx[0], &BombLand_blockTop_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_breakableBlockAgain_Gfx[0], &BombLand_breakableBlockAgain_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_metalBridgeThing_Gfx[0], &BombLand_metalBridgeThing_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_longPipe_Gfx[0], &BombLand_longPipe_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_XResult_Gfx[0], &BombLand_XResult_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_OResult_Gfx[0], &BombLand_OResult_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_grenadeShutters_Gfx[0], &BombLand_grenadeShutters_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_doorWall_Gfx[0], &BombLand_doorWall_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_doorPoles_Gfx[0], &BombLand_doorPoles_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&BombLand_unk72_Gfx[0], &BombLand_unk72_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, }
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
    0,
    0,
    0,
    255,
    25000,
    60,
};

StageData BombLand_header_Lvlhdr = {
    &BombLand_map_data,
    0,
    &BombLand_stageModels[0],
    110,
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

Vec3f BombLand_exit1_ColV[] = {
    #include "assets/levelGroup/BombLand/exit1/exit1.colV.inc.c"
};

Vec3w BombLand_exit1_ColT[] = {
    #include "assets/levelGroup/BombLand/exit1/exit1.colT.inc.c"
};

Rect3D BombLand_exit1_ColS = {
    #include "assets/levelGroup/BombLand/exit1/exit1.colS.inc.c"
};

ModelCollision BombLand_exit1_ColH = {
6, 4, BombLand_exit1_ColV, BombLand_exit1_ColT, &BombLand_exit1_ColS
};

Vec3f BombLand_exit2_ColV[] = {
    #include "assets/levelGroup/BombLand/exit2/exit2.colV.inc.c"
};

Vec3w BombLand_exit2_ColT[] = {
    #include "assets/levelGroup/BombLand/exit2/exit2.colT.inc.c"
};

Rect3D BombLand_exit2_ColS = {
    #include "assets/levelGroup/BombLand/exit2/exit2.colS.inc.c"
};

ModelCollision BombLand_exit2_ColH = {
6, 4, BombLand_exit2_ColV, BombLand_exit2_ColT, &BombLand_exit2_ColS
};

Vec3f BombLand_exit3_ColV[] = {
    #include "assets/levelGroup/BombLand/exit3/exit3.colV.inc.c"
};

Vec3w BombLand_exit3_ColT[] = {
    #include "assets/levelGroup/BombLand/exit3/exit3.colT.inc.c"
};

Rect3D BombLand_exit3_ColS = {
    #include "assets/levelGroup/BombLand/exit3/exit3.colS.inc.c"
};

ModelCollision BombLand_exit3_ColH = {
6, 4, BombLand_exit3_ColV, BombLand_exit3_ColT, &BombLand_exit3_ColS
};

Vec3f BombLand_exit4_ColV[] = {
    #include "assets/levelGroup/BombLand/exit4/exit4.colV.inc.c"
};

Vec3w BombLand_exit4_ColT[] = {
    #include "assets/levelGroup/BombLand/exit4/exit4.colT.inc.c"
};

Rect3D BombLand_exit4_ColS = {
    #include "assets/levelGroup/BombLand/exit4/exit4.colS.inc.c"
};

ModelCollision BombLand_exit4_ColH = {
6, 4, BombLand_exit4_ColV, BombLand_exit4_ColT, &BombLand_exit4_ColS
};

Vec3f BombLand_room0_ColV[] = {
    #include "assets/levelGroup/BombLand/room0/room0.colV.inc.c"
};

Vec3w BombLand_room0_ColT[] = {
    #include "assets/levelGroup/BombLand/room0/room0.colT.inc.c"
};

Rect3D BombLand_room0_ColS = {
    #include "assets/levelGroup/BombLand/room0/room0.colS.inc.c"
};

ModelCollision BombLand_room0_ColH = {
38, 58, BombLand_room0_ColV, BombLand_room0_ColT, &BombLand_room0_ColS
};

Vec3f BombLand_room1_ColV[] = {
    #include "assets/levelGroup/BombLand/room1/room1.colV.inc.c"
};

Vec3w BombLand_room1_ColT[] = {
    #include "assets/levelGroup/BombLand/room1/room1.colT.inc.c"
};

Rect3D BombLand_room1_ColS = {
    #include "assets/levelGroup/BombLand/room1/room1.colS.inc.c"
};

ModelCollision BombLand_room1_ColH = {
43, 53, BombLand_room1_ColV, BombLand_room1_ColT, &BombLand_room1_ColS
};

Vec3f BombLand_room2_ColV[] = {
    #include "assets/levelGroup/BombLand/room2/room2.colV.inc.c"
};

Vec3w BombLand_room2_ColT[] = {
    #include "assets/levelGroup/BombLand/room2/room2.colT.inc.c"
};

Rect3D BombLand_room2_ColS = {
    #include "assets/levelGroup/BombLand/room2/room2.colS.inc.c"
};

ModelCollision BombLand_room2_ColH = {
44, 44, BombLand_room2_ColV, BombLand_room2_ColT, &BombLand_room2_ColS
};

Vec3f BombLand_room3_ColV[] = {
    #include "assets/levelGroup/BombLand/room3/room3.colV.inc.c"
};

Vec3w BombLand_room3_ColT[] = {
    #include "assets/levelGroup/BombLand/room3/room3.colT.inc.c"
};

Rect3D BombLand_room3_ColS = {
    #include "assets/levelGroup/BombLand/room3/room3.colS.inc.c"
};

ModelCollision BombLand_room3_ColH = {
38, 48, BombLand_room3_ColV, BombLand_room3_ColT, &BombLand_room3_ColS
};

Vec3f BombLand_room4_ColV[] = {
    #include "assets/levelGroup/BombLand/room4/room4.colV.inc.c"
};

Vec3w BombLand_room4_ColT[] = {
    #include "assets/levelGroup/BombLand/room4/room4.colT.inc.c"
};

Rect3D BombLand_room4_ColS = {
    #include "assets/levelGroup/BombLand/room4/room4.colS.inc.c"
};

ModelCollision BombLand_room4_ColH = {
41, 53, BombLand_room4_ColV, BombLand_room4_ColT, &BombLand_room4_ColS
};

Vec3f BombLand_room5_ColV[] = {
    #include "assets/levelGroup/BombLand/room5/room5.colV.inc.c"
};

Vec3w BombLand_room5_ColT[] = {
    #include "assets/levelGroup/BombLand/room5/room5.colT.inc.c"
};

Rect3D BombLand_room5_ColS = {
    #include "assets/levelGroup/BombLand/room5/room5.colS.inc.c"
};

ModelCollision BombLand_room5_ColH = {
36, 43, BombLand_room5_ColV, BombLand_room5_ColT, &BombLand_room5_ColS
};

Vec3f BombLand_room6_ColV[] = {
    #include "assets/levelGroup/BombLand/room6/room6.colV.inc.c"
};

Vec3w BombLand_room6_ColT[] = {
    #include "assets/levelGroup/BombLand/room6/room6.colT.inc.c"
};

Rect3D BombLand_room6_ColS = {
    #include "assets/levelGroup/BombLand/room6/room6.colS.inc.c"
};

ModelCollision BombLand_room6_ColH = {
44, 44, BombLand_room6_ColV, BombLand_room6_ColT, &BombLand_room6_ColS
};

Vec3f BombLand_room7_ColV[] = {
    #include "assets/levelGroup/BombLand/room7/room7.colV.inc.c"
};

Vec3w BombLand_room7_ColT[] = {
    #include "assets/levelGroup/BombLand/room7/room7.colT.inc.c"
};

Rect3D BombLand_room7_ColS = {
    #include "assets/levelGroup/BombLand/room7/room7.colS.inc.c"
};

ModelCollision BombLand_room7_ColH = {
38, 46, BombLand_room7_ColV, BombLand_room7_ColT, &BombLand_room7_ColS
};

Vec3f BombLand_room8_ColV[] = {
    #include "assets/levelGroup/BombLand/room8/room8.colV.inc.c"
};

Vec3w BombLand_room8_ColT[] = {
    #include "assets/levelGroup/BombLand/room8/room8.colT.inc.c"
};

Rect3D BombLand_room8_ColS = {
    #include "assets/levelGroup/BombLand/room8/room8.colS.inc.c"
};

ModelCollision BombLand_room8_ColH = {
28, 40, BombLand_room8_ColV, BombLand_room8_ColT, &BombLand_room8_ColS
};

Vec3f BombLand_room9_ColV[] = {
    #include "assets/levelGroup/BombLand/room9/room9.colV.inc.c"
};

Vec3w BombLand_room9_ColT[] = {
    #include "assets/levelGroup/BombLand/room9/room9.colT.inc.c"
};

Rect3D BombLand_room9_ColS = {
    #include "assets/levelGroup/BombLand/room9/room9.colS.inc.c"
};

ModelCollision BombLand_room9_ColH = {
36, 52, BombLand_room9_ColV, BombLand_room9_ColT, &BombLand_room9_ColS
};

Vec3f BombLand_room10_ColV[] = {
    #include "assets/levelGroup/BombLand/room10/room10.colV.inc.c"
};

Vec3w BombLand_room10_ColT[] = {
    #include "assets/levelGroup/BombLand/room10/room10.colT.inc.c"
};

Rect3D BombLand_room10_ColS = {
    #include "assets/levelGroup/BombLand/room10/room10.colS.inc.c"
};

ModelCollision BombLand_room10_ColH = {
31, 41, BombLand_room10_ColV, BombLand_room10_ColT, &BombLand_room10_ColS
};

Vec3f BombLand_room11_ColV[] = {
    #include "assets/levelGroup/BombLand/room11/room11.colV.inc.c"
};

Vec3w BombLand_room11_ColT[] = {
    #include "assets/levelGroup/BombLand/room11/room11.colT.inc.c"
};

Rect3D BombLand_room11_ColS = {
    #include "assets/levelGroup/BombLand/room11/room11.colS.inc.c"
};

ModelCollision BombLand_room11_ColH = {
44, 42, BombLand_room11_ColV, BombLand_room11_ColT, &BombLand_room11_ColS
};

Vec3f BombLand_room12_ColV[] = {
    #include "assets/levelGroup/BombLand/room12/room12.colV.inc.c"
};

Vec3w BombLand_room12_ColT[] = {
    #include "assets/levelGroup/BombLand/room12/room12.colT.inc.c"
};

Rect3D BombLand_room12_ColS = {
    #include "assets/levelGroup/BombLand/room12/room12.colS.inc.c"
};

ModelCollision BombLand_room12_ColH = {
38, 46, BombLand_room12_ColV, BombLand_room12_ColT, &BombLand_room12_ColS
};

Vec3f BombLand_room13_ColV[] = {
    #include "assets/levelGroup/BombLand/room13/room13.colV.inc.c"
};

Vec3w BombLand_room13_ColT[] = {
    #include "assets/levelGroup/BombLand/room13/room13.colT.inc.c"
};

Rect3D BombLand_room13_ColS = {
    #include "assets/levelGroup/BombLand/room13/room13.colS.inc.c"
};

ModelCollision BombLand_room13_ColH = {
32, 44, BombLand_room13_ColV, BombLand_room13_ColT, &BombLand_room13_ColS
};

Vec3f BombLand_room15Floor_ColV[] = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.colV.inc.c"
};

Vec3w BombLand_room15Floor_ColT[] = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.colT.inc.c"
};

Rect3D BombLand_room15Floor_ColS = {
    #include "assets/levelGroup/BombLand/room15Floor/room15Floor.colS.inc.c"
};

ModelCollision BombLand_room15Floor_ColH = {
8, 10, BombLand_room15Floor_ColV, BombLand_room15Floor_ColT, &BombLand_room15Floor_ColS
};

Vec3f BombLand_room15_ColV[] = {
    #include "assets/levelGroup/BombLand/room15/room15.colV.inc.c"
};

Vec3w BombLand_room15_ColT[] = {
    #include "assets/levelGroup/BombLand/room15/room15.colT.inc.c"
};

Rect3D BombLand_room15_ColS = {
    #include "assets/levelGroup/BombLand/room15/room15.colS.inc.c"
};

ModelCollision BombLand_room15_ColH = {
16, 24, BombLand_room15_ColV, BombLand_room15_ColT, &BombLand_room15_ColS
};

Vec3f BombLand_room0Pipe_ColV[] = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colV.inc.c"
};

Vec3w BombLand_room0Pipe_ColT[] = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colT.inc.c"
};

Rect3D BombLand_room0Pipe_ColS = {
    #include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colS.inc.c"
};

ModelCollision BombLand_room0Pipe_ColH = {
22, 36, BombLand_room0Pipe_ColV, BombLand_room0Pipe_ColT, &BombLand_room0Pipe_ColS
};

Vec3f BombLand_room1Floor_ColV[] = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.colV.inc.c"
};

Vec3w BombLand_room1Floor_ColT[] = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.colT.inc.c"
};

Rect3D BombLand_room1Floor_ColS = {
    #include "assets/levelGroup/BombLand/room1Floor/room1Floor.colS.inc.c"
};

ModelCollision BombLand_room1Floor_ColH = {
64, 99, BombLand_room1Floor_ColV, BombLand_room1Floor_ColT, &BombLand_room1Floor_ColS
};

Vec3f BombLand_block_ColV[] = {
    #include "assets/levelGroup/BombLand/block/block.colV.inc.c"
};

Vec3w BombLand_block_ColT[] = {
    #include "assets/levelGroup/BombLand/block/block.colT.inc.c"
};

Rect3D BombLand_block_ColS = {
    #include "assets/levelGroup/BombLand/block/block.colS.inc.c"
};

ModelCollision BombLand_block_ColH = {
8, 10, BombLand_block_ColV, BombLand_block_ColT, &BombLand_block_ColS
};

Vec3f BombLand_breakableBlockSides_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colV.inc.c"
};

Vec3w BombLand_breakableBlockSides_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colT.inc.c"
};

Rect3D BombLand_breakableBlockSides_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colS.inc.c"
};

ModelCollision BombLand_breakableBlockSides_ColH = {
8, 8, BombLand_breakableBlockSides_ColV, BombLand_breakableBlockSides_ColT, &BombLand_breakableBlockSides_ColS
};

Vec3f BombLand_room3Start_ColV[] = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.colV.inc.c"
};

Vec3w BombLand_room3Start_ColT[] = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.colT.inc.c"
};

Rect3D BombLand_room3Start_ColS = {
    #include "assets/levelGroup/BombLand/room3Start/room3Start.colS.inc.c"
};

ModelCollision BombLand_room3Start_ColH = {
8, 8, BombLand_room3Start_ColV, BombLand_room3Start_ColT, &BombLand_room3Start_ColS
};

Vec3f BombLand_room3End_ColV[] = {
    #include "assets/levelGroup/BombLand/room3End/room3End.colV.inc.c"
};

Vec3w BombLand_room3End_ColT[] = {
    #include "assets/levelGroup/BombLand/room3End/room3End.colT.inc.c"
};

Rect3D BombLand_room3End_ColS = {
    #include "assets/levelGroup/BombLand/room3End/room3End.colS.inc.c"
};

ModelCollision BombLand_room3End_ColH = {
12, 14, BombLand_room3End_ColV, BombLand_room3End_ColT, &BombLand_room3End_ColS
};

Vec3f BombLand_block2Maybe_ColV[] = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colV.inc.c"
};

Vec3w BombLand_block2Maybe_ColT[] = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colT.inc.c"
};

Rect3D BombLand_block2Maybe_ColS = {
    #include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colS.inc.c"
};

ModelCollision BombLand_block2Maybe_ColH = {
8, 10, BombLand_block2Maybe_ColV, BombLand_block2Maybe_ColT, &BombLand_block2Maybe_ColS
};

Vec3f BombLand_unusedPlatformMaybe_ColV[] = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colV.inc.c"
};

Vec3w BombLand_unusedPlatformMaybe_ColT[] = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colT.inc.c"
};

Rect3D BombLand_unusedPlatformMaybe_ColS = {
    #include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colS.inc.c"
};

ModelCollision BombLand_unusedPlatformMaybe_ColH = {
8, 12, BombLand_unusedPlatformMaybe_ColV, BombLand_unusedPlatformMaybe_ColT, &BombLand_unusedPlatformMaybe_ColS
};

Vec3f BombLand_wall_ColV[] = {
    #include "assets/levelGroup/BombLand/wall/wall.colV.inc.c"
};

Vec3w BombLand_wall_ColT[] = {
    #include "assets/levelGroup/BombLand/wall/wall.colT.inc.c"
};

Rect3D BombLand_wall_ColS = {
    #include "assets/levelGroup/BombLand/wall/wall.colS.inc.c"
};

ModelCollision BombLand_wall_ColH = {
4, 2, BombLand_wall_ColV, BombLand_wall_ColT, &BombLand_wall_ColS
};

Vec3f BombLand_room4End1_ColV[] = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.colV.inc.c"
};

Vec3w BombLand_room4End1_ColT[] = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.colT.inc.c"
};

Rect3D BombLand_room4End1_ColS = {
    #include "assets/levelGroup/BombLand/room4End1/room4End1.colS.inc.c"
};

ModelCollision BombLand_room4End1_ColH = {
7, 6, BombLand_room4End1_ColV, BombLand_room4End1_ColT, &BombLand_room4End1_ColS
};

Vec3f BombLand_room4End2_ColV[] = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.colV.inc.c"
};

Vec3w BombLand_room4End2_ColT[] = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.colT.inc.c"
};

Rect3D BombLand_room4End2_ColS = {
    #include "assets/levelGroup/BombLand/room4End2/room4End2.colS.inc.c"
};

ModelCollision BombLand_room4End2_ColH = {
9, 8, BombLand_room4End2_ColV, BombLand_room4End2_ColT, &BombLand_room4End2_ColS
};

Vec3f BombLand_room4Start_ColV[] = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.colV.inc.c"
};

Vec3w BombLand_room4Start_ColT[] = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.colT.inc.c"
};

Rect3D BombLand_room4Start_ColS = {
    #include "assets/levelGroup/BombLand/room4Start/room4Start.colS.inc.c"
};

ModelCollision BombLand_room4Start_ColH = {
8, 8, BombLand_room4Start_ColV, BombLand_room4Start_ColT, &BombLand_room4Start_ColS
};

Vec3f BombLand_room5Start_ColV[] = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.colV.inc.c"
};

Vec3w BombLand_room5Start_ColT[] = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.colT.inc.c"
};

Rect3D BombLand_room5Start_ColS = {
    #include "assets/levelGroup/BombLand/room5Start/room5Start.colS.inc.c"
};

ModelCollision BombLand_room5Start_ColH = {
13, 15, BombLand_room5Start_ColV, BombLand_room5Start_ColT, &BombLand_room5Start_ColS
};

Vec3f BombLand_room5End_ColV[] = {
    #include "assets/levelGroup/BombLand/room5End/room5End.colV.inc.c"
};

Vec3w BombLand_room5End_ColT[] = {
    #include "assets/levelGroup/BombLand/room5End/room5End.colT.inc.c"
};

Rect3D BombLand_room5End_ColS = {
    #include "assets/levelGroup/BombLand/room5End/room5End.colS.inc.c"
};

ModelCollision BombLand_room5End_ColH = {
13, 15, BombLand_room5End_ColV, BombLand_room5End_ColT, &BombLand_room5End_ColS
};

Vec3f BombLand_breakableBlock_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colV.inc.c"
};

Vec3w BombLand_breakableBlock_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colT.inc.c"
};

Rect3D BombLand_breakableBlock_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colS.inc.c"
};

ModelCollision BombLand_breakableBlock_ColH = {
8, 10, BombLand_breakableBlock_ColV, BombLand_breakableBlock_ColT, &BombLand_breakableBlock_ColS
};

Vec3f BombLand_breakableBlockStack_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colV.inc.c"
};

Vec3w BombLand_breakableBlockStack_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colT.inc.c"
};

Rect3D BombLand_breakableBlockStack_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colS.inc.c"
};

ModelCollision BombLand_breakableBlockStack_ColH = {
8, 10, BombLand_breakableBlockStack_ColV, BombLand_breakableBlockStack_ColT, &BombLand_breakableBlockStack_ColS
};

Vec3f BombLand_room7Start_ColV[] = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.colV.inc.c"
};

Vec3w BombLand_room7Start_ColT[] = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.colT.inc.c"
};

Rect3D BombLand_room7Start_ColS = {
    #include "assets/levelGroup/BombLand/room7Start/room7Start.colS.inc.c"
};

ModelCollision BombLand_room7Start_ColH = {
6, 4, BombLand_room7Start_ColV, BombLand_room7Start_ColT, &BombLand_room7Start_ColS
};

Vec3f BombLand_room7End_ColV[] = {
    #include "assets/levelGroup/BombLand/room7End/room7End.colV.inc.c"
};

Vec3w BombLand_room7End_ColT[] = {
    #include "assets/levelGroup/BombLand/room7End/room7End.colT.inc.c"
};

Rect3D BombLand_room7End_ColS = {
    #include "assets/levelGroup/BombLand/room7End/room7End.colS.inc.c"
};

ModelCollision BombLand_room7End_ColH = {
6, 4, BombLand_room7End_ColV, BombLand_room7End_ColT, &BombLand_room7End_ColS
};

Vec3f BombLand_breakableBlockSide1_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colV.inc.c"
};

Vec3w BombLand_breakableBlockSide1_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colT.inc.c"
};

Rect3D BombLand_breakableBlockSide1_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colS.inc.c"
};

ModelCollision BombLand_breakableBlockSide1_ColH = {
4, 2, BombLand_breakableBlockSide1_ColV, BombLand_breakableBlockSide1_ColT, &BombLand_breakableBlockSide1_ColS
};

Vec3f BombLand_breakableBlockSide2_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colV.inc.c"
};

Vec3w BombLand_breakableBlockSide2_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colT.inc.c"
};

Rect3D BombLand_breakableBlockSide2_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colS.inc.c"
};

ModelCollision BombLand_breakableBlockSide2_ColH = {
4, 2, BombLand_breakableBlockSide2_ColV, BombLand_breakableBlockSide2_ColT, &BombLand_breakableBlockSide2_ColS
};

Vec3f BombLand_breakableBlockSide3_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colV.inc.c"
};

Vec3w BombLand_breakableBlockSide3_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colT.inc.c"
};

Rect3D BombLand_breakableBlockSide3_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colS.inc.c"
};

ModelCollision BombLand_breakableBlockSide3_ColH = {
4, 2, BombLand_breakableBlockSide3_ColV, BombLand_breakableBlockSide3_ColT, &BombLand_breakableBlockSide3_ColS
};

Vec3f BombLand_breakableBlockSide4_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colV.inc.c"
};

Vec3w BombLand_breakableBlockSide4_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colT.inc.c"
};

Rect3D BombLand_breakableBlockSide4_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colS.inc.c"
};

ModelCollision BombLand_breakableBlockSide4_ColH = {
4, 2, BombLand_breakableBlockSide4_ColV, BombLand_breakableBlockSide4_ColT, &BombLand_breakableBlockSide4_ColS
};

Vec3f BombLand_blockPlatform_ColV[] = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colV.inc.c"
};

Vec3w BombLand_blockPlatform_ColT[] = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colT.inc.c"
};

Rect3D BombLand_blockPlatform_ColS = {
    #include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colS.inc.c"
};

ModelCollision BombLand_blockPlatform_ColH = {
8, 10, BombLand_blockPlatform_ColV, BombLand_blockPlatform_ColT, &BombLand_blockPlatform_ColS
};

Vec3f BombLand_breakableBlock2_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colV.inc.c"
};

Vec3w BombLand_breakableBlock2_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colT.inc.c"
};

Rect3D BombLand_breakableBlock2_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colS.inc.c"
};

ModelCollision BombLand_breakableBlock2_ColH = {
8, 10, BombLand_breakableBlock2_ColV, BombLand_breakableBlock2_ColT, &BombLand_breakableBlock2_ColS
};

Vec3f BombLand_room8Start_ColV[] = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.colV.inc.c"
};

Vec3w BombLand_room8Start_ColT[] = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.colT.inc.c"
};

Rect3D BombLand_room8Start_ColS = {
    #include "assets/levelGroup/BombLand/room8Start/room8Start.colS.inc.c"
};

ModelCollision BombLand_room8Start_ColH = {
8, 8, BombLand_room8Start_ColV, BombLand_room8Start_ColT, &BombLand_room8Start_ColS
};

Vec3f BombLand_room8End_ColV[] = {
    #include "assets/levelGroup/BombLand/room8End/room8End.colV.inc.c"
};

Vec3w BombLand_room8End_ColT[] = {
    #include "assets/levelGroup/BombLand/room8End/room8End.colT.inc.c"
};

Rect3D BombLand_room8End_ColS = {
    #include "assets/levelGroup/BombLand/room8End/room8End.colS.inc.c"
};

ModelCollision BombLand_room8End_ColH = {
12, 14, BombLand_room8End_ColV, BombLand_room8End_ColT, &BombLand_room8End_ColS
};

Vec3f BombLand_room9End1_ColV[] = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.colV.inc.c"
};

Vec3w BombLand_room9End1_ColT[] = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.colT.inc.c"
};

Rect3D BombLand_room9End1_ColS = {
    #include "assets/levelGroup/BombLand/room9End1/room9End1.colS.inc.c"
};

ModelCollision BombLand_room9End1_ColH = {
7, 6, BombLand_room9End1_ColV, BombLand_room9End1_ColT, &BombLand_room9End1_ColS
};

Vec3f BombLand_room9End2_ColV[] = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.colV.inc.c"
};

Vec3w BombLand_room9End2_ColT[] = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.colT.inc.c"
};

Rect3D BombLand_room9End2_ColS = {
    #include "assets/levelGroup/BombLand/room9End2/room9End2.colS.inc.c"
};

ModelCollision BombLand_room9End2_ColH = {
9, 8, BombLand_room9End2_ColV, BombLand_room9End2_ColT, &BombLand_room9End2_ColS
};

Vec3f BombLand_room9Start_ColV[] = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.colV.inc.c"
};

Vec3w BombLand_room9Start_ColT[] = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.colT.inc.c"
};

Rect3D BombLand_room9Start_ColS = {
    #include "assets/levelGroup/BombLand/room9Start/room9Start.colS.inc.c"
};

ModelCollision BombLand_room9Start_ColH = {
8, 8, BombLand_room9Start_ColV, BombLand_room9Start_ColT, &BombLand_room9Start_ColS
};

Vec3f BombLand_room10Floor_ColV[] = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.colV.inc.c"
};

Vec3w BombLand_room10Floor_ColT[] = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.colT.inc.c"
};

Rect3D BombLand_room10Floor_ColS = {
    #include "assets/levelGroup/BombLand/room10Floor/room10Floor.colS.inc.c"
};

ModelCollision BombLand_room10Floor_ColH = {
24, 24, BombLand_room10Floor_ColV, BombLand_room10Floor_ColT, &BombLand_room10Floor_ColS
};

Vec3f BombLand_room10Platform_ColV[] = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.colV.inc.c"
};

Vec3w BombLand_room10Platform_ColT[] = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.colT.inc.c"
};

Rect3D BombLand_room10Platform_ColS = {
    #include "assets/levelGroup/BombLand/room10Platform/room10Platform.colS.inc.c"
};

ModelCollision BombLand_room10Platform_ColH = {
12, 12, BombLand_room10Platform_ColV, BombLand_room10Platform_ColT, &BombLand_room10Platform_ColS
};

Vec3f BombLand_tallWallWithFloorOnTop_ColV[] = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colV.inc.c"
};

Vec3w BombLand_tallWallWithFloorOnTop_ColT[] = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colT.inc.c"
};

Rect3D BombLand_tallWallWithFloorOnTop_ColS = {
    #include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colS.inc.c"
};

ModelCollision BombLand_tallWallWithFloorOnTop_ColH = {
8, 6, BombLand_tallWallWithFloorOnTop_ColV, BombLand_tallWallWithFloorOnTop_ColT, &BombLand_tallWallWithFloorOnTop_ColS
};

Vec3f BombLand_unkBlock_ColV[] = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.colV.inc.c"
};

Vec3w BombLand_unkBlock_ColT[] = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.colT.inc.c"
};

Rect3D BombLand_unkBlock_ColS = {
    #include "assets/levelGroup/BombLand/unkBlock/unkBlock.colS.inc.c"
};

ModelCollision BombLand_unkBlock_ColH = {
8, 8, BombLand_unkBlock_ColV, BombLand_unkBlock_ColT, &BombLand_unkBlock_ColS
};

Vec3f BombLand_thinBreakableBlockSide1_ColV[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colV.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide1_ColT[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colT.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide1_ColS = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colS.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide1_ColH = {
4, 2, BombLand_thinBreakableBlockSide1_ColV, BombLand_thinBreakableBlockSide1_ColT, &BombLand_thinBreakableBlockSide1_ColS
};

Vec3f BombLand_thinBreakableBlockSide2_ColV[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colV.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide2_ColT[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colT.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide2_ColS = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colS.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide2_ColH = {
4, 2, BombLand_thinBreakableBlockSide2_ColV, BombLand_thinBreakableBlockSide2_ColT, &BombLand_thinBreakableBlockSide2_ColS
};

Vec3f BombLand_thinBreakableBlockSide3_ColV[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colV.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide3_ColT[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colT.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide3_ColS = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colS.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide3_ColH = {
4, 2, BombLand_thinBreakableBlockSide3_ColV, BombLand_thinBreakableBlockSide3_ColT, &BombLand_thinBreakableBlockSide3_ColS
};

Vec3f BombLand_thinBreakableBlockSide4_ColV[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colV.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide4_ColT[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colT.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide4_ColS = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colS.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide4_ColH = {
4, 2, BombLand_thinBreakableBlockSide4_ColV, BombLand_thinBreakableBlockSide4_ColT, &BombLand_thinBreakableBlockSide4_ColS
};

Vec3f BombLand_thinBreakableBlockSide5_ColV[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colV.inc.c"
};

Vec3w BombLand_thinBreakableBlockSide5_ColT[] = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colT.inc.c"
};

Rect3D BombLand_thinBreakableBlockSide5_ColS = {
    #include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colS.inc.c"
};

ModelCollision BombLand_thinBreakableBlockSide5_ColH = {
4, 2, BombLand_thinBreakableBlockSide5_ColV, BombLand_thinBreakableBlockSide5_ColT, &BombLand_thinBreakableBlockSide5_ColS
};

Vec3f BombLand_unkPlatform_ColV[] = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colV.inc.c"
};

Vec3w BombLand_unkPlatform_ColT[] = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colT.inc.c"
};

Rect3D BombLand_unkPlatform_ColS = {
    #include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colS.inc.c"
};

ModelCollision BombLand_unkPlatform_ColH = {
8, 12, BombLand_unkPlatform_ColV, BombLand_unkPlatform_ColT, &BombLand_unkPlatform_ColS
};

Vec3f BombLand_pipe1_ColV[] = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.colV.inc.c"
};

Vec3w BombLand_pipe1_ColT[] = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.colT.inc.c"
};

Rect3D BombLand_pipe1_ColS = {
    #include "assets/levelGroup/BombLand/pipe1/pipe1.colS.inc.c"
};

ModelCollision BombLand_pipe1_ColH = {
8, 8, BombLand_pipe1_ColV, BombLand_pipe1_ColT, &BombLand_pipe1_ColS
};

Vec3f BombLand_pipe2_ColV[] = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.colV.inc.c"
};

Vec3w BombLand_pipe2_ColT[] = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.colT.inc.c"
};

Rect3D BombLand_pipe2_ColS = {
    #include "assets/levelGroup/BombLand/pipe2/pipe2.colS.inc.c"
};

ModelCollision BombLand_pipe2_ColH = {
32, 40, BombLand_pipe2_ColV, BombLand_pipe2_ColT, &BombLand_pipe2_ColS
};

Vec3f BombLand_breakableBlockTop_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colV.inc.c"
};

Vec3w BombLand_breakableBlockTop_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colT.inc.c"
};

Rect3D BombLand_breakableBlockTop_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colS.inc.c"
};

ModelCollision BombLand_breakableBlockTop_ColH = {
4, 2, BombLand_breakableBlockTop_ColV, BombLand_breakableBlockTop_ColT, &BombLand_breakableBlockTop_ColS
};

Vec3f BombLand_blockTop_ColV[] = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.colV.inc.c"
};

Vec3w BombLand_blockTop_ColT[] = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.colT.inc.c"
};

Rect3D BombLand_blockTop_ColS = {
    #include "assets/levelGroup/BombLand/blockTop/blockTop.colS.inc.c"
};

ModelCollision BombLand_blockTop_ColH = {
4, 2, BombLand_blockTop_ColV, BombLand_blockTop_ColT, &BombLand_blockTop_ColS
};

Vec3f BombLand_breakableBlockAgain_ColV[] = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colV.inc.c"
};

Vec3w BombLand_breakableBlockAgain_ColT[] = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colT.inc.c"
};

Rect3D BombLand_breakableBlockAgain_ColS = {
    #include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colS.inc.c"
};

ModelCollision BombLand_breakableBlockAgain_ColH = {
8, 12, BombLand_breakableBlockAgain_ColV, BombLand_breakableBlockAgain_ColT, &BombLand_breakableBlockAgain_ColS
};

Vec3f BombLand_metalBridgeThing_ColV[] = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colV.inc.c"
};

Vec3w BombLand_metalBridgeThing_ColT[] = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colT.inc.c"
};

Rect3D BombLand_metalBridgeThing_ColS = {
    #include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colS.inc.c"
};

ModelCollision BombLand_metalBridgeThing_ColH = {
8, 6, BombLand_metalBridgeThing_ColV, BombLand_metalBridgeThing_ColT, &BombLand_metalBridgeThing_ColS
};

Vec3f BombLand_longPipe_ColV[] = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.colV.inc.c"
};

Vec3w BombLand_longPipe_ColT[] = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.colT.inc.c"
};

Rect3D BombLand_longPipe_ColS = {
    #include "assets/levelGroup/BombLand/longPipe/longPipe.colS.inc.c"
};

ModelCollision BombLand_longPipe_ColH = {
20, 32, BombLand_longPipe_ColV, BombLand_longPipe_ColT, &BombLand_longPipe_ColS
};

Vec3f BombLand_XResult_ColV[] = {
    #include "assets/levelGroup/BombLand/XResult/XResult.colV.inc.c"
};

Vec3w BombLand_XResult_ColT[] = {
    #include "assets/levelGroup/BombLand/XResult/XResult.colT.inc.c"
};

Rect3D BombLand_XResult_ColS = {
    #include "assets/levelGroup/BombLand/XResult/XResult.colS.inc.c"
};

ModelCollision BombLand_XResult_ColH = {
4, 2, BombLand_XResult_ColV, BombLand_XResult_ColT, &BombLand_XResult_ColS
};

Vec3f BombLand_OResult_ColV[] = {
    #include "assets/levelGroup/BombLand/OResult/OResult.colV.inc.c"
};

Vec3w BombLand_OResult_ColT[] = {
    #include "assets/levelGroup/BombLand/OResult/OResult.colT.inc.c"
};

Rect3D BombLand_OResult_ColS = {
    #include "assets/levelGroup/BombLand/OResult/OResult.colS.inc.c"
};

ModelCollision BombLand_OResult_ColH = {
4, 2, BombLand_OResult_ColV, BombLand_OResult_ColT, &BombLand_OResult_ColS
};

Vec3f BombLand_grenadeShutters_ColV[] = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colV.inc.c"
};

Vec3w BombLand_grenadeShutters_ColT[] = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colT.inc.c"
};

Rect3D BombLand_grenadeShutters_ColS = {
    #include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colS.inc.c"
};

ModelCollision BombLand_grenadeShutters_ColH = {
4, 4, BombLand_grenadeShutters_ColV, BombLand_grenadeShutters_ColT, &BombLand_grenadeShutters_ColS
};

Vec3f BombLand_doorWall_ColV[] = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.colV.inc.c"
};

Vec3w BombLand_doorWall_ColT[] = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.colT.inc.c"
};

Rect3D BombLand_doorWall_ColS = {
    #include "assets/levelGroup/BombLand/doorWall/doorWall.colS.inc.c"
};

ModelCollision BombLand_doorWall_ColH = {
4, 2, BombLand_doorWall_ColV, BombLand_doorWall_ColT, &BombLand_doorWall_ColS
};

Vec3f BombLand_doorPoles_ColV[] = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.colV.inc.c"
};

Vec3w BombLand_doorPoles_ColT[] = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.colT.inc.c"
};

Rect3D BombLand_doorPoles_ColS = {
    #include "assets/levelGroup/BombLand/doorPoles/doorPoles.colS.inc.c"
};

ModelCollision BombLand_doorPoles_ColH = {
8, 8, BombLand_doorPoles_ColV, BombLand_doorPoles_ColT, &BombLand_doorPoles_ColS
};

Vec3f BombLand_unk72_ColV[] = {
    #include "assets/levelGroup/BombLand/unk72/unk72.colV.inc.c"
};

Vec3w BombLand_unk72_ColT[] = {
    #include "assets/levelGroup/BombLand/unk72/unk72.colT.inc.c"
};

Rect3D BombLand_unk72_ColS = {
    #include "assets/levelGroup/BombLand/unk72/unk72.colS.inc.c"
};

ModelCollision BombLand_unk72_ColH = {
8, 8, BombLand_unk72_ColV, BombLand_unk72_ColT, &BombLand_unk72_ColS
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
{&BombLand_unk_Animh.frames, &BombLand_unk_Animh.objects, &BombLand_unk_Animarr[0][0]}
};
