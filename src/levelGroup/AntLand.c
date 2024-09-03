#include "common.h"
#include "PR/gu.h"

extern unsigned char Global_brickWall_i4_PNG[];
extern unsigned char Global_brownBrickWall_ci4_PAL[];
extern unsigned char Global_brownBrickWall_ci4_PNG[];
extern unsigned char Global_antMural2_i4_PNG[];
extern unsigned char Global_antMural1_i4_PNG[];
extern unsigned char Global_dcRockFloor_i4_PNG[];
extern unsigned char Global_yellowBrickWall_ci4_PAL[];
extern unsigned char Global_yellowBrickWall_ci4_PNG[];
extern unsigned char Global_smallBrickWall_i4_PNG[];
extern unsigned char Global_bigBrickWall_i4_PNG[];
extern unsigned char Global_brickWall2_ci4_PAL[];
extern unsigned char Global_brickWall2_ci4_PNG[];
extern unsigned char Global_antMural3_i4_PNG[];
extern unsigned char Global_unk12_i4_PNG[];
extern unsigned char Global_bigBrickWall2_i4_PNG[];
extern unsigned char Global_antMural4_i4_PNG[];
extern unsigned char Global_gravel_i4_PNG[];
extern unsigned char Global_goldStrip_ci4_PAL[];
extern unsigned char Global_goldStrip_ci4_PNG[];
extern unsigned char Global_waterKinda_ci4_PAL[];
extern unsigned char Global_waterKinda_ci4_PNG[];
extern unsigned char Global_dcRockFloorColor_ci4_PAL[];
extern unsigned char Global_dcRockFloorColor_ci4_PNG[];
extern unsigned char Global_gateGray_ia4_PNG[];
extern unsigned char Global_wall_i4_PNG[];

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
extern Gfx AntLand_exit2_Gfx[];
extern ModelCollision AntLand_exit2_collision;
extern Gfx AntLand_exit3_Gfx[];
extern ModelCollision AntLand_exit3_collision;
extern Gfx AntLand_exit4_Gfx[];
extern ModelCollision AntLand_exit4_ColH;
extern Gfx AntLand_room0_Gfx[];
extern ModelCollision AntLand_room0_ColH;
extern Gfx AntLand_room1_Gfx[];
extern ModelCollision AntLand_room1_ColH;
extern Gfx AntLand_room2_Gfx[];
extern ModelCollision AntLand_room2_ColH;
extern Gfx AntLand_room14_Gfx[];
extern ModelCollision AntLand_room14_ColH;
extern Gfx AntLand_room4_Gfx[];
extern ModelCollision AntLand_room4_ColH;
extern Gfx AntLand_room5_Gfx[];
extern ModelCollision AntLand_room5_collision;
extern Gfx AntLand_room6_Gfx[];
extern ModelCollision AntLand_room6_collision;
extern Gfx AntLand_room7_Gfx[];
extern ModelCollision AntLand_room7_collision;
extern Gfx AntLand_room8_Gfx[];
extern ModelCollision AntLand_room8_collision;
extern Gfx AntLand_room9_Gfx[];
extern ModelCollision AntLand_room9_collision;
extern Gfx AntLand_room10_Gfx[];
extern ModelCollision AntLand_room10_ColH;
extern Gfx AntLand_room11_Gfx[];
extern ModelCollision AntLand_room11_ColH;
extern Gfx AntLand_room12_Gfx[];
extern ModelCollision AntLand_room12_ColH;
extern Gfx AntLand_room13_Gfx[];
extern ModelCollision AntLand_room13_ColH;
extern Gfx AntLand_room3_Gfx[];
extern ModelCollision AntLand_room3_ColH;
extern Gfx AntLand_room17_Gfx[];
extern ModelCollision AntLand_room17_ColH;
extern Gfx AntLand_room15_Gfx[];
extern ModelCollision AntLand_room15_ColH;
extern Gfx AntLand_room18_Gfx[];
extern ModelCollision AntLand_room18_ColH;
extern Gfx AntLand_room16_Gfx[];
extern ModelCollision AntLand_room16_ColH;
extern Gfx AntLand_room20_Gfx[];
extern ModelCollision AntLand_room20_ColH;
extern Gfx AntLand_room21_Gfx[];
extern ModelCollision AntLand_room21_ColH;
extern Gfx AntLand_room4Platform_Gfx[];
extern ModelCollision AntLand_room4Platform_ColH;
extern Gfx AntLand_room4Floor_Gfx[];
extern ModelCollision AntLand_room4Floor_ColH;
extern Gfx AntLand_room6Floor_Gfx[];
extern ModelCollision AntLand_room6Floor_ColH;
extern Gfx AntLand_room8Floor_Gfx[];
extern ModelCollision AntLand_room8Floor_ColH;
extern Gfx AntLand_room17Floor_Gfx[];
extern ModelCollision AntLand_room17Floor_ColH;
extern Gfx AntLand_room10Floor_Gfx[];
extern ModelCollision AntLand_room10Floor_ColH;
extern Gfx AntLand_room10Platform1_Gfx[];
extern ModelCollision AntLand_room10Platform1_ColH;
extern Gfx AntLand_room10Platform2_Gfx[];
extern ModelCollision AntLand_room10Platform2_ColH;
extern Gfx AntLand_room10Platform3_Gfx[];
extern ModelCollision AntLand_room10Platform3_ColH;
extern Gfx AntLand_room5Platform_Gfx[];
extern ModelCollision AntLand_room5Platform_ColH;
extern Gfx AntLand_room13Platform_Gfx[];
extern ModelCollision AntLand_room13Platform_ColH;
extern Gfx AntLand_room21Platform1_Gfx[];
extern ModelCollision AntLand_room21Platform1_ColH;
extern Gfx AntLand_room21Platform2_Gfx[];
extern ModelCollision AntLand_room21Platform2_ColH;
extern Gfx AntLand_room12Floor1_Gfx[];
extern ModelCollision AntLand_room12Floor1_ColH;
extern Gfx AntLand_room12Floor2_Gfx[];
extern ModelCollision AntLand_room12Floor2_ColH;
extern Gfx AntLand_room11Floor1_Gfx[];
extern ModelCollision AntLand_room11Floor1_ColH;
extern Gfx AntLand_room11Floor2_Gfx[];
extern ModelCollision AntLand_room11Floor2_ColH;
extern Gfx AntLand_room4Grate_Gfx[];
extern ModelCollision AntLand_room4Grate_ColH;
extern Gfx AntLand_room7Floor_Gfx[];
extern ModelCollision AntLand_room7Floor_ColH;
extern Gfx AntLand_room7Ceiling_Gfx[];
extern ModelCollision AntLand_room7Ceiling_ColH;
extern Gfx AntLand_room15Floor_Gfx[];
extern ModelCollision AntLand_room15Floor_ColH;
extern Gfx AntLand_room15Ceiling_Gfx[];
extern ModelCollision AntLand_room15Ceiling_ColH;
extern Gfx AntLand_room8Floor1_Gfx[];
extern ModelCollision AntLand_room8Floor1_ColH;
extern Gfx AntLand_room8Floor2_Gfx[];
extern ModelCollision AntLand_room8Floor2_ColH;
extern Gfx AntLand_room0doorPillar1_Gfx[];
extern ModelCollision AntLand_room0doorPillar1_ColH;
extern Gfx AntLand_room0doorPillar2_Gfx[];
extern ModelCollision AntLand_room0doorPillar2_ColH;
extern Gfx AntLand_room0doorTop_Gfx[];
extern ModelCollision AntLand_room0doorTop_ColH;
extern Gfx AntLand_room0doorTorchStand1_Gfx[];
extern ModelCollision AntLand_room0doorTorchStand1_ColH;
extern Gfx AntLand_room0doorTorchStand2_Gfx[];
extern ModelCollision AntLand_room0doorTorchStand2_ColH;
extern Gfx AntLand_room16Floor1_Gfx[];
extern ModelCollision AntLand_room16Floor1_ColH;
extern Gfx AntLand_room16Floor2_Gfx[];
extern ModelCollision AntLand_room16Floor2_ColH;
extern Gfx AntLand_room16Grate_Gfx[];
extern ModelCollision AntLand_room16Grate_ColH;
extern Gfx AntLand_tiltPlatform_Gfx[];
extern ModelCollision AntLand_tiltPlatform_ColH;
extern Gfx AntLand_platform_Gfx[];
extern ModelCollision AntLand_platform_ColH;
extern Gfx AntLand_movingPlatform_Gfx[];
extern ModelCollision AntLand_movingPlatform_ColH;
extern Gfx AntLand_quad_Gfx[];
extern ModelCollision AntLand_quad_ColH;
extern Gfx AntLand_fixedCamPillar_Gfx[];
extern ModelCollision AntLand_fixedCamPillar_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_ColH;


Mtx AntLand_IMtx1 = IDENTITY;

enum AntLand_Models {
    G_FALLBACK_CUBE_MODEL = 0,
    G_EXIT_SHADOW_SOUTH_MODEL = 1,
    G_EXIT_SHADOW_NORTH_MODEL = 2,
    G_EXIT_SHADOW_EAST_MODEL = 3,
    G_EXIT_SHADOW_WEST_MODEL = 4,
    G_BL_EXIT_MODEL = 5,
    G_SANDPIT_MODEL = 6,
    G_BOSS_BRIDGE_MODEL = 7,
    G_POLE_MODEL = 8,
    G_BL_DOOR_MODEL = 9,
    G_SPIN_DOOR_MODEL = 10,
    G_BL_LAVA_FLOOR_MODEL = 11,
    G_BL_LAVA_MODEL = 12,
    G_BL_LAVA2_MODEL = 13,
    G_BL_LAVA3_MODEL = 14,
    G_BL_LAVA4_MODEL = 15,
    G_BL_LAVA5_MODEL = 16,
    G_BL_LAVA6_MODEL = 17,
    G_BL_LAVA7_MODEL = 18,
    G_BL_LAVA8_MODEL = 19,
    G_BL_DESTRUCTABLE_TOP_MODEL = 20,
    G_BL_METAL_BRIDGE_MODEL = 21,
    G_KL_EXIT_MODEL = 22,
    G_KL_DOOR_MODEL = 23,
    G_DC_EXIT_MODEL = 24,
    G_TALL_EXIT_SHADOW1_MODEL = 25,
    G_TALL_EXIT_SHADOW2_MODEL = 26,
    G_GC_EXIT1_MODEL = 27,
    G_GC_EXIT2_MODEL = 28,
    G_TRAINING_ROOM_LIGHT_MODEL = 29,
    G_JL_CAVE_EXIT1_MODEL = 30,
    G_JL_CAVE_EXIT2_MODEL = 31,
    G_JL_CAVE_EXIT3_MODEL = 32,
    G_JL_CAVE_EXIT4_MODEL = 33,
    G_JL_OUTSIDE_ENTRANCE_MODEL = 34,
    G_JL_FX_CAM_PILLAR_MODEL = 35,
    G_JL_CAVE_DOOR_MODEL = 36,
    AL_EXIT2_MODEL = 37,
    AL_EXIT3_MODEL = 38,
    AL_EXIT4_MODEL = 39,
    AL_ROOM0_MODEL = 40,
    AL_ROOM1_MODEL = 41,
    AL_ROOM2_MODEL = 42,
    AL_ROOM14_MODEL = 43,
    AL_ROOM4_MODEL = 44,
    AL_ROOM5_MODEL = 45,
    AL_ROOM6_MODEL = 46,
    AL_ROOM7_MODEL = 47,
    AL_ROOM8_MODEL = 48,
    AL_ROOM9_MODEL = 49,
    AL_ROOM10_MODEL = 50,
    AL_ROOM11_MODEL = 51,
    AL_ROOM12_MODEL = 52,
    AL_ROOM13_MODEL = 53,
    AL_ROOM3_MODEL = 54,
    AL_ROOM17_MODEL = 55,
    AL_ROOM15_MODEL = 56,
    AL_ROOM18_MODEL = 57,
    AL_ROOM16_MODEL = 58,
    AL_ROOM20_MODEL = 59,
    AL_ROOM21_MODEL = 60,
    AL_ROOM4_PLATFORM_MODEL = 61,
    AL_ROOM4_FLOOR_MODEL = 62,
    AL_ROOM6_FLOOR_MODEL = 63,
    AL_ROOM8_FLOOR_MODEL = 64,
    AL_ROOM17_FLOOR_MODEL = 65,
    AL_ROOM10_FLOOR_MODEL = 66,
    AL_ROOM10_PLATFORM1_MODEL = 67,
    AL_ROOM10_PLATFORM2_MODEL = 68,
    AL_ROOM10_PLATFORM3_MODEL = 69,
    AL_ROOM5_PLATFORM_MODEL = 70,
    AL_ROOM13_PLATFORM_MODEL = 71,
    AL_ROOM21_PLATFORM1_MODEL = 72,
    AL_ROOM21_PLATFORM2_MODEL = 73,
    AL_ROOM12_FLOOR1_MODEL = 74,
    AL_ROOM12_FLOOR2_MODEL = 75,
    AL_ROOM11_FLOOR1_MODEL = 76,
    AL_ROOM11_FLOOR2_MODEL = 77,
    AL_ROOM4_GRATE_MODEL = 78,
    AL_ROOM7_FLOOR_MODEL = 79,
    AL_ROOM7_CEILING_MODEL = 80,
    AL_ROOM15_FLOOR_MODEL = 81,
    AL_ROOM15_CEILING_MODEL = 82,
    AL_ROOM8_FLOOR1_MODEL = 83,
    AL_ROOM8_FLOOR2_MODEL = 84,
    AL_ROOM0DOOR_PILLAR1_MODEL = 85,
    AL_ROOM0DOOR_PILLAR2_MODEL = 86,
    AL_ROOM0DOOR_TOP_MODEL = 87,
    AL_ROOM0DOOR_TORCHSTAND1_MODEL = 88,
    AL_ROOM0DOOR_TORCHSTAND2_MODEL = 89,
    AL_ROOM16_FLOOR1_MODEL = 90,
    AL_ROOM16_FLOOR2_MODEL = 91,
    AL_ROOM16_GRATE_MODEL = 92,
    AL_TILT_PLATFORM_MODEL = 93,
    AL_PLATFORM_MODEL = 94,
    AL_MOVING_PLATFORM_MODEL = 95,
    AL_QUAD_MODEL = 96,
    AL_FIXED_CAM_PILLAR_MODEL = 97,
    AL_POLE_MODEL = 98
};

StageModel AntLand_stageModels[99] = {
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
    {&AntLand_exit2_Gfx[0], &AntLand_exit2_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_exit3_Gfx[0], &AntLand_exit3_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_exit4_Gfx[0], &AntLand_exit4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room0_Gfx[0], &AntLand_room0_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room1_Gfx[0], &AntLand_room1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room2_Gfx[0], &AntLand_room2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room14_Gfx[0], &AntLand_room14_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room4_Gfx[0], &AntLand_room4_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room5_Gfx[0], &AntLand_room5_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room6_Gfx[0], &AntLand_room6_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room7_Gfx[0], &AntLand_room7_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room8_Gfx[0], &AntLand_room8_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room9_Gfx[0], &AntLand_room9_collision, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room10_Gfx[0], &AntLand_room10_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room11_Gfx[0], &AntLand_room11_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room12_Gfx[0], &AntLand_room12_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room13_Gfx[0], &AntLand_room13_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room3_Gfx[0], &AntLand_room3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room17_Gfx[0], &AntLand_room17_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room15_Gfx[0], &AntLand_room15_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room18_Gfx[0], &AntLand_room18_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room16_Gfx[0], &AntLand_room16_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room20_Gfx[0], &AntLand_room20_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room21_Gfx[0], &AntLand_room21_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room4Platform_Gfx[0], &AntLand_room4Platform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room4Floor_Gfx[0], &AntLand_room4Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room6Floor_Gfx[0], &AntLand_room6Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room8Floor_Gfx[0], &AntLand_room8Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room17Floor_Gfx[0], &AntLand_room17Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room10Floor_Gfx[0], &AntLand_room10Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room10Platform1_Gfx[0], &AntLand_room10Platform1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room10Platform2_Gfx[0], &AntLand_room10Platform2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room10Platform3_Gfx[0], &AntLand_room10Platform3_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room5Platform_Gfx[0], &AntLand_room5Platform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room13Platform_Gfx[0], &AntLand_room13Platform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room21Platform1_Gfx[0], &AntLand_room21Platform1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room21Platform2_Gfx[0], &AntLand_room21Platform2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room12Floor1_Gfx[0], &AntLand_room12Floor1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room12Floor2_Gfx[0], &AntLand_room12Floor2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room11Floor1_Gfx[0], &AntLand_room11Floor1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room11Floor2_Gfx[0], &AntLand_room11Floor2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room4Grate_Gfx[0], &AntLand_room4Grate_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room7Floor_Gfx[0], &AntLand_room7Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room7Ceiling_Gfx[0], &AntLand_room7Ceiling_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room15Floor_Gfx[0], &AntLand_room15Floor_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room15Ceiling_Gfx[0], &AntLand_room15Ceiling_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room8Floor1_Gfx[0], &AntLand_room8Floor1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room8Floor2_Gfx[0], &AntLand_room8Floor2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room0doorPillar1_Gfx[0], &AntLand_room0doorPillar1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room0doorPillar2_Gfx[0], &AntLand_room0doorPillar2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room0doorTop_Gfx[0], &AntLand_room0doorTop_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room0doorTorchStand1_Gfx[0], &AntLand_room0doorTorchStand1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room0doorTorchStand2_Gfx[0], &AntLand_room0doorTorchStand2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room16Floor1_Gfx[0], &AntLand_room16Floor1_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room16Floor2_Gfx[0], &AntLand_room16Floor2_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_room16Grate_Gfx[0], &AntLand_room16Grate_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_tiltPlatform_Gfx[0], &AntLand_tiltPlatform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_platform_Gfx[0], &AntLand_platform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_movingPlatform_Gfx[0], &AntLand_movingPlatform_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_quad_Gfx[0], &AntLand_quad_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&AntLand_fixedCamPillar_Gfx[0], &AntLand_fixedCamPillar_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
    {&Global_pole_Gfx[0], &Global_pole_ColH, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

unsigned char AntLand_rabobjects_Bin[] = { 
    0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x02, 0x00, 0x6E, 0x1C
};

RoomObject AntLand_room0_objects[12] = {
    {{1200.0,0.0,0.0},{1.0,1.0,1.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,AL_EXIT3_MODEL,-1,-1,-1,NULL,NULL,0,0,3,4,4,0,-1,0,0,},
    {{1200.0,0.0,0.0},{1.0,1.0,1.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,G_EXIT_SHADOW_NORTH_MODEL,-1,-1,-1,NULL,NULL,0,0,3,4,4,0,-1,0,0,},
    {{0.0,0.0,0.0},   {1.0,1.0,1.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,AL_ROOM0DOOR_PILLAR1_MODEL,-1,-1,-1,NULL,NULL,0,0,6,4,4,0,-1,0,0,},
    {{0.0,0.0,0.0},   {1.0,1.0,1.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,AL_ROOM0DOOR_PILLAR2_MODEL,-1,-1,-1,NULL,NULL,0,0,6,4,4,0,-1,0,0,},
    {{0.0,0.0,0.0},   {1.0,1.0,1.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,AL_ROOM0DOOR_TOP_MODEL,-1,-1,-1,NULL,NULL,0,0,6,4,4,0,-1,0,0,},
    {{0.0,0.0,0.0},   {1.0,1.0,1.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,AL_ROOM0DOOR_TORCHSTAND1_MODEL,-1,-1,-1,NULL,NULL,0,0,6,4,4,0,-1,0,0,},
    {{0.0,0.0,0.0},   {1.0,1.0,1.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,AL_ROOM0DOOR_TORCHSTAND2_MODEL,-1,-1,-1,NULL,NULL,0,0,6,4,4,0,-1,0,0,},
    {{0.0,0.0,0.0},   {1.0,1.0,1.0},1,DEGREES_TO_RADIANS_2PI(0.02741556724295125),7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,AL_ROOM0_MODEL,-1,-1,-1,NULL,NULL,0,0,3,4,4,0,-1,0,0,},
    {{1200.0,0.0,0.0},{1.0,1.0,1.0},0,0,256,0,400.0,400.0,0.0,0.0,2,1,0,0,0,0,0,-1,-1,-1,NULL,NULL,0,0,2,-1,1,0,-1,0,0,},
    {{1200.0,0.0,0.0},{4.0,4.0,4.0},0,0,7,0,1400.0,1000.0,-1000.0,0.0,0,90,0,1000,0,0,0,-1,-1,-1,NULL,NULL,0,0,1,0,0,0,-1,0,0,},
    {{-900.0,0.0,-900.0},{1.5,1.5,1.5},0,0,7,0,0.0,0.0,0.0,0.0,0,0,0,0,0,0,AL_FIXED_CAM_PILLAR_MODEL,-1,-1,-1,NULL,NULL,0,0,34,4,4,0,-1,0,0,},
    {{0.0,0.0,0.0},{0.0,0.0,0.0},0,0,0,0,0.0,0.0,0.0,0.0,0,0,0,0,0,0,0,0,0,0,NULL,NULL,0,0,0,0,0,0,0,0,0,}
};

RoomActor AntLand_room0_actors[1] = {
    {0, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0} // Null actor
};

RoomObject AntLand_room1_objects[11] = {
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-900.0,0.0,-900.0}, {1.5,1.0,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room1_actors[4] = {
    {GREY_ANT_SPAWNER, {-250.0,0.0,-1100.0}, 180.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, -250.0, 1100.0, 0.0, 0.0, 0, 0, 0, 0, 8.0f, 30.0f, 0, 0},
    {GREY_ANT_SPAWNER, {0.0,0.0,1100.0}, 180.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 0.0, -1100.0, 0.0, 0.0, 0, 0, 0, 0, 10.0f, 35.0f, 0, 0},
    {GREY_ANT_SPAWNER, {250.0,0.0,-1100.0}, 180.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 250.0, 1100.0, 0.0, 0.0, 0, 0, 0, 0, 8.0f, 30.0f, 0, 0},
    {0, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0} // Null actor
};

RoomObject AntLand_room2_objects[11] = {
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{-900.0,0.0,-900.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room2_actors[5] = {
    {RED_ANT_SPAWNER, {-200.0,0.0,-400.0}, 100.0, -950.0, 950.0, -500.0f, 0.0, -950.0, 950.0, 0, 18.0, 0.800000011920929, 4.0, 360000.0, 225.0f, 0, 0, 0, 120.0f, 8.0f, 0, 0},
    {RED_ANT_SPAWNER, {-200.0,0.0,400.0}, 100.0, -950.0, 950.0, -500.0f, 0.0, -950.0, 950.0, 0, 18.0, 0.800000011920929, 4.0, 360000.0, 135.0f, 0, 0, 0, 120.0f, 8.0f, 0, 0},
    {RED_ANT_SPAWNER, {300.0,0.0,-300.0}, 100.0, -950.0, 950.0, -500.0f, 0.0, -950.0, 950.0, 0, 18.0, 0.800000011920929, 4.0, 360000.0, 135.0f, 0, 0, 0, 120.0f, 8.0f, 0, 0},
    {RED_ANT_SPAWNER, {300.0,0.0,300.0}, 100.0, -950.0, 950.0, -500.0f, 0.0, -950.0, 950.0, 0, 18.0, 0.800000011920929, 4.0, 360000.0, 225.0f, 0, 0, 0, 120.0f, 8.0f, 0, 0},
    {0, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0} // Null actor
};

RoomObject AntLand_room3_objects[16] = {
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,1050.0}, {1.0,1.0,0.20000000298023224}, 0, DEGREES_TO_RADIANS_2PI(0.02741556724295125), 7, 11, 0.0, 400.0, 1050.0, 0.0, 1, 40, -1, 40, 0, 0, G_BL_DOOR_MODEL, -1, -1, 14, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-900.0,0.0,-900.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room3_actors[8] = {
    {GREEN_ANT, {0.0,0.0,600.0}, 100.0, -900.0, 900.0, 0, 100.0, -900.0, 900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 39.0f, 0, 0, 0},
    {GREEN_ANT, {500.0,0.0,-400.0}, 100.0, -900.0, 900.0, 0, 1000.0, -900.0, 900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 39.0f, 0, 0, 0},
    {GREEN_ANT, {-400.0,0.0,-400.0}, 100.0, -900.0, 900.0, 0, 800.0, -900.0, 900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 39.0f, 0, 0, 0},
    {GREY_ANT_SPAWNER, {700.0,0.0,-1100.0}, 180.0, -900.0, 900.0, 0, 100.0, -900.0, 900.0, 1, 700.0, 1100.0, 700.0, 1100.0, 700.0f, 1100.0f, 0, 0, 10.0f, 120.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-600.0,0.0,1100.0}, 180.0, -1000.0, 1000.0, 0, 100.0, -1000.0, 1000.0, 1, -600.0, -1100.0, -600.0, -1100.0, -600.0f, -1100.0f, 0, 0, 10.0f, 120.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-1100.0,0.0,800.0}, 90.0, -1000.0, 1000.0, 0, 100.0, -1000.0, 1000.0, 1, 1100.0, 800.0, 1100.0, 800.0, 1100.0f, 800.0f, 0, 0, 10.0f, 120.0f, 0, 0},
    {GREY_ANT_SPAWNER, {1100.0,0.0,400.0}, 90.0, -1000.0, 1000.0, 0, 100.0, -1000.0, 1000.0, 1, -1100.0, 400.0, -1100.0, 400.0, -1100.0f, 400.0f, 0, 0, 10.0f, 120.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

PlatformKeyframe AntLand_room20_platform1_keyframes[2] = {
    {{-800.0, 100.0, 800.0}, 0, 240, 0, 0, 0, 0},
    {{-800.0, 2000.0, 800.0}, 0, 120, 0, 0, 0, 0}
};

PlatformKeyframe AntLand_room20_platform2_keyframes[3] = {
    {{-800.0, 2000.0, 0.0}, 0, 240, 0, 0, 0, 0},
    {{-800.0, 1000.0, -800.0}, 0, 180, 0, 0, 0, 0},
    {{-800.0, 1000.0, -800.0}, 0, 180, 0, 0, 0, 0}
};

PlatformKeyframe AntLand_room20_platform3_keyframes[2] = {
    {{-400.0, 1000.0, -800.0}, 0, 180, 0, 0, 0, 0},
    {{-400.0, 2500.0, -800.0}, 0, 180, 0, 0, 0, 0}
};

RoomObject AntLand_room20_objects[19] = {
    {{-800.0,100.0,800.0}, {1.0,1.0,1.0}, 0, 0, 7, 10, 0.0, 0.0, 0.0, 0.0, AntLand_room20_platform1_keyframes, 2, 0, 0, 0, 0, AL_MOVING_PLATFORM_MODEL, -1, -1, -1, NULL, &func_800D90B8, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-800.0,2000.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 10, 0.0, 0.0, 0.0, 0.0, AntLand_room20_platform2_keyframes, 3, 0, 0, 0, 0, AL_MOVING_PLATFORM_MODEL, -1, -1, -1, NULL, &func_800D90B8, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-400.0,1000.0,-800.0}, {1.0,1.0,1.0}, 0, 0, 7, 10, 0.0, 0.0, 0.0, 0.0, AntLand_room20_platform3_keyframes, 2, 0, 0, 0, 0, AL_MOVING_PLATFORM_MODEL, -1, -1, -1, NULL, &func_800D90B8, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,1500.0,800.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,2000.0,800.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-800.0,500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{800.0,2000.0,-200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{800.0,1500.0,-200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,2000.0,0.0}, {0.20000000298023224,1.0,0.20000000298023224}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,2500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{400.0,2000.0,800.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM20_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{900.0,0.0,-900.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{900.0,1500.0,-900.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room20_actors[2] = {
    {GREY_ANT_SPAWNER, {810.0,0.0,1010.0}, 90.0, -1000.0, 1000.0, 0, 100.0, -1000.0, 1000.0, 1, -1110.0, -750.0, -1110.0, -750.0, -1110.0f, -750.0f, 0, 0, 10.0f, 60.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room4_objects[15] = {
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{140.0,0.0,-140.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM4_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM4_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM4_GRATE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,-300.0,0.0}, {1.0,2.5,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room4_actors[2] = {
    {YELLOW_ANT, {-400.0,0.0,400.0}, 45.0, 200.0, 500.0, 0, 0.0, 200.0, 500.0, 1, 300.0, 300.0, 30.0, 8.0, 10.0f, 0, 0, 0, 0, 0, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

PlatformKeyframe AntLand_room5_platform_keyframes[6] = {
    {{-1000.0, 100.0, -1000.0}, 0, 90, 0, 0, 0, 0},
    {{-1000.0, 800.0, -1000.0}, 0, 90, 0, 0, 0, 0},
    {{-300.0, 600.0, -300.0}, 0, 120, 0, 0, 0, 0},
    {{1000.0, 600.0, 1000.0}, 0, 120, 0, 0, 0, 0},
    {{400.0, 1000.0, 1000.0}, 0, 90, 0, 0, 0, 0},
    {{0.0, 400.0, 1000.0}, 0, 150, 0, 0, 0, 0}
};

RoomObject AntLand_room5_objects[16] = {
    {{-1000.0,100.0,-1000.0}, {1.0,1.0,1.0}, 0, 0, 7, 10, 0.0, 0.0, 0.0, 0.0, AntLand_room5_platform_keyframes, 6, 0, 0, 0, 0, AL_MOVING_PLATFORM_MODEL, -1, -1, -1, NULL, &func_800D90B8, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{200.0,0.0,-200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM0DOOR_TORCHSTAND2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 0, 0},
    {{200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{-1400.0,600.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1400.0,600.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1400.0,600.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1400.0,600.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.800000011920929,1.0,0.800000011920929}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM5_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{300.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM5_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1400.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1400.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1400.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1400.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,1250.0}, {1.0,1.0,0.20000000298023224}, 0, DEGREES_TO_RADIANS_2PI(0.02741556724295125), 7, 11, 0.0, 400.0, 1250.0, 0.0, 1, 40, -1, 40, 0, 0, G_BL_DOOR_MODEL, -1, -1, 4, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1100.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room5_actors[5] = {
    {YELLOW_ANT, {500.0,0.0,-300.0}, 270.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 200.0, 300.0, 30.0, 8.0, 10.0f, 0, 0, 0, 0, 0, 0, 0},
    {YELLOW_ANT, {500.0,0.0,300.0}, 270.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 200.0, 300.0, 30.0, 8.0, 10.0f, 0, 0, 0, 0, 1.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-1300.0,0.0,1000.0}, 0.0, -10000.0, 10000.0, 0, 0.0, -10000.0, 10000.0, 1, 1300.0, 1000.0, 0.0, 0.0, 0, 0, 0, 0, 8.0f, 150.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-800.0,0.0,-1300.0}, 0.0, -10000.0, 10000.0, 0, 0.0, -10000.0, 10000.0, 1, 1300.0, 800.0, 0.0, 0.0, 0, 0, 0, 0, 8.0f, 150.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room6_objects[12] = {
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM6_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM6_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{-1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room6_actors[2] = {
    {FALLING_GREY_ANT_SPAWNER, {-700.0,1000.0,1400.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 1, 750.0, 1400.0, 1400.0, 0.0, 1150.0f, -1050.0f, 360000.0f, 0, 10.0f, 60.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_roomUnk_objects[15] = {
    {{1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1200.0,-20.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,-10.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM7_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM7_CEILING_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.8799999952316284,0.8799999952316284,0.8799999952316284}, 0, 0, 7, 7, 7.0, 1000.0, 0.0, 0.0, &func_800AF9D0, &MoveTheater, 40, 24, 8, 11, AL_ROOM7_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{930.0,500.0,0.0}, {0.20000000298023224,1.0,1.0}, 0, 0, 7, 11, 930.0, 0.0, 0.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{-930.0,500.0,0.0}, {0.20000000298023224,1.0,1.0}, 0, 0, 7, 11, -930.0, 0.0, 0.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{-800.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 512, 0, 300.0, 1000.0, 2000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 523, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room7_objects[17] = {
    {{1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1200.0,-20.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,-10.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM7_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM7_CEILING_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,-20.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM7_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.8799999952316284,0.8799999952316284,0.8799999952316284}, 0, 0, 7, 7, 7.0, 1000.0, 0.0, 0.0, &func_800AF9D0, &MoveTheater, 40, 24, 8, 11, AL_ROOM7_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{930.0,500.0,0.0}, {0.20000000298023224,1.0,1.0}, 0, 0, 7, 11, 930.0, 0.0, 0.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{-930.0,500.0,0.0}, {0.20000000298023224,1.0,1.0}, 0, 0, 7, 11, -930.0, 0.0, 0.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{400.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 512, 0, 300.0, 1000.0, 2000.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 523, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-800.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room8_objects[22] = {
    {{1700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,1500.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1700.0,0.0,1500.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{-1700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1700.0,0.0,-1500.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1700.0,0.0,-1500.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{-1501.0,-100.0,900.0}, {0.009999999776482582,11.0,44.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-1501.0,-100.0,-3000.0}, {0.009999999776482582,11.0,26.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-1501.0,300.0,-1500.0}, {0.009999999776482582,11.0,4.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,-100.0,-900.0}, {0.009999999776482582,11.0,44.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,-100.0,3000.0}, {0.009999999776482582,11.0,26.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,300.0,1500.0}, {0.009999999776482582,11.0,4.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,-100.0,-3001.0}, {32.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,-100.0,3001.0}, {32.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM8_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM8_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM8_FLOOR1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM8_FLOOR2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room8_actors[19] = {
    {ANT_TRIO_SPAWNER, {-600.0,800.0,-1500.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 1, 500.0, -1900.0, -1200.0, 2500.0, 600.0f, 2000.0f, 360000.0f, 0, 10.0f, 120.0f, 0, 0},
    {ANT_TRIO_SPAWNER, {-600.0,800.0,-1700.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 1, 900.0, -2200.0, -900.0, 2200.0, 600.0f, 1800.0f, 360000.0f, 0, 10.0f, 120.0f, 0, 0},
    {ANT_TRIO_SPAWNER, {-600.0,800.0,-1900.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 1, 1200.0, -2500.0, -500.0, 1900.0, 600.0f, 1600.0f, 360000.0f, 0, 10.0f, 120.0f, 0, 0},
    {ANT_TRIO, {400.0,0.0,-1650.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 400.0, -1650.0, -1200.0, 2500.0, 600.0f, 2000.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {100.0,0.0,-900.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 100.0, -900.0, -1200.0, 2500.0, 600.0f, 2000.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {-150.0,0.0,-200.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, -150.0, -200.0, -1200.0, 2500.0, 600.0f, 2000.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {-450.0,0.0,600.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, -450.0, 600.0, -1200.0, 2500.0, 600.0f, 2000.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {-750.0,0.0,1300.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, -750.0, 1300.0, -1200.0, 2500.0, 600.0f, 2000.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {750.0,0.0,-1850.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 750.0, -1850.0, -900.0, 2200.0, 600.0f, 1800.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {400.0,0.0,-1000.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 400.0, -1000.0, -900.0, 2200.0, 600.0f, 1800.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {100.0,0.0,-250.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 100.0, -250.0, -900.0, 2200.0, 600.0f, 1800.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {-200.0,0.0,500.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, -200.0, 500.0, -900.0, 2200.0, 600.0f, 1800.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {-500.0,0.0,1200.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, -500.0, 1200.0, -900.0, 2200.0, 600.0f, 1800.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {1000.0,0.0,-2000.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 1000.0, -2000.0, -500.0, 1900.0, 600.0f, 1600.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {700.0,0.0,-1200.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 700.0, -1200.0, -500.0, 1900.0, 600.0f, 1600.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {350.0,0.0,-300.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 350.0, -300.0, -500.0, 1900.0, 600.0f, 1600.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {50.0,0.0,450.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, 50.0, 450.0, -500.0, 1900.0, 600.0f, 1600.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ANT_TRIO, {-200.0,0.0,1100.0}, 0.0, -5000.0, 5000.0, -50000.0f, 5000.0, -5000.0, 5000.0, 1, -200.0, 1100.0, -500.0, 1900.0, 600.0f, 1600.0f, 360000.0f, 0, 10.0f, 0, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room9_objects[15] = {
    {{1000.0,1000.0,800.0}, {1.0,1.0,1.0}, 3, 0, 7, 27, 0.20000000298023224, 0.20000000298023224, 4.0, 0.0, 0, 0, 0, 0, 0, 0, AL_TILT_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{-300.0,1000.0,600.0}, {1.0,1.0,1.0}, 3, 0, 7, 27, 0.20000000298023224, 0.20000000298023224, 4.0, 0.0, 0, 0, 0, 0, 0, 0, AL_TILT_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{1800.0,0.0,800.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{1800.0,0.0,800.0}, {2.0,1.0,2.0}, 0, 0, 7, 37, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_QUAD_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{2200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM9_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-2200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-2200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1900.0,0.0,-900.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room9_actors[9] = {
    {RED_ANT_SPAWNER, {-1150.0,0.0,-600.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 20.0, 0.800000011920929, 6.0, 810000.0, 225.0f, 0, 0, 0, 100.0f, 16.0f, 0, 0},
    {RED_ANT_SPAWNER, {-150.0,0.0,-600.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 20.0, 0.800000011920929, 6.0, 810000.0, 60.0f, 0, 0, 0, 110.0f, 16.0f, 0, 0},
    {RED_ANT_SPAWNER, {850.0,0.0,-600.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 20.0, 0.800000011920929, 6.0, 1000000.0, 315.0f, 0, 0, 0, 100.0f, 16.0f, 0, 0},
    {RED_ANT_SPAWNER, {-650.0,0.0,0.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 21.0, 0.6000000238418579, 5.0, 1210000.0, 180.0f, 0, 0, 0, 90.0f, 16.0f, 0, 0},
    {RED_ANT_SPAWNER, {150.0,0.0,0.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 21.0, 0.6000000238418579, 5.0, 1210000.0, 0, 0, 0, 0, 90.0f, 16.0f, 0, 0},
    {RED_ANT_SPAWNER, {-1150.0,0.0,600.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 20.0, 0.800000011920929, 6.0, 810000.0, 135.0f, 0, 0, 0, 100.0f, 16.0f, 0, 0},
    {RED_ANT_SPAWNER, {-150.0,0.0,600.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 20.0, 0.800000011920929, 6.0, 810000.0, 300.0f, 0, 0, 0, 110.0f, 16.0f, 0, 0},
    {RED_ANT_SPAWNER, {850.0,0.0,600.0}, 240.0, -1900.0, 1900.0, -500.0f, 0.0, -950.0, 950.0, 0, 20.0, 0.800000011920929, 6.0, 1000000.0, 45.0f, 0, 0, 0, 100.0f, 16.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room10_objects[26] = {
    {{-600.0,0.0,-700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{500.0,0.0,-700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{-600.0,0.0,500.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1501.0,-100.0,900.0}, {0.009999999776482582,11.0,14.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,-100.0,-900.0}, {0.009999999776482582,11.0,14.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,300.0,0.0}, {0.009999999776482582,11.0,4.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,-100.0,-1501.0}, {32.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-1501.0,-100.0,0.0}, {0.009999999776482582,11.0,32.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-900.0,-100.0,1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{900.0,-100.0,1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,300.0,1501.0}, {4.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM10_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM10_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM10_PLATFORM1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM10_PLATFORM2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM10_PLATFORM3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room10_actors[2] = {
    {GREY_ANT_SPAWNER, {1050.0,0.0,-1400.0}, 180.0, -1700.0, 1700.0, 0, 10.0, -1700.0, 1700.0, 1, 1050.0, 1050.0, -1400.0, 1050.0, -1400.0f, 1050.0f, 0, 0, 10.0f, 15.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room11_objects[15] = {
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM11_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{300.0,0.0,0.0}, {0.5,0.800000011920929,0.800000011920929}, 2, DEGREES_TO_RADIANS_2PI(-90.00000250447816), 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_ROOM11_FLOOR1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM11_FLOOR1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM11_FLOOR2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room12_objects[21] = {
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1501.0,-100.0,900.0}, {0.009999999776482582,11.0,14.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,-100.0,-900.0}, {0.009999999776482582,11.0,14.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,300.0,0.0}, {0.009999999776482582,11.0,4.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-900.0,-100.0,-1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{900.0,-100.0,-1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,300.0,-1501.0}, {4.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-1501.0,-100.0,0.0}, {0.009999999776482582,11.0,32.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,-100.0,1501.0}, {32.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM12_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM12_FLOOR1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM12_FLOOR2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room12_actors[2] = {
    {GREY_ANT_SPAWNER, {1150.0,0.0,1350.0}, 0.0, -5000.0, 5000.0, 0, 0.0, -5000.0, 5000.0, 0, 350.0, 1350.0, 350.0, 100.0, -1350.0f, 100.0f, -1350.0f, -1350.0f, 8.0f, 30.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room13_objects[14] = {
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{-1700.0,600.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1700.0,600.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1700.0,600.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1700.0,600.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM13_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM13_PLATFORM_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1700.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1550.0,0.0,0.0}, {0.20000000298023224,1.0,1.0}, 0, 0, 7, 11, 1550.0, 400.0, 0.0, 0.0, 1, 40, -1, 40, 0, 0, G_BL_DOOR_MODEL, -1, -1, 6, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1400.0,0.0,1400.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room13_actors[8] = {
    {YELLOW_ANT, {500.0,0.0,-300.0}, 270.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 400.0, 600.0, 30.0, 12.0, 10.0f, 0, 0, 0, 0, 0, 0, 0},
    {YELLOW_ANT, {500.0,0.0,300.0}, 270.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 400.0, 600.0, 30.0, 12.0, 10.0f, 0, 0, 0, 0, 0, 0, 0},
    {YELLOW_ANT, {-500.0,0.0,300.0}, 270.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 400.0, 600.0, 30.0, 12.0, 10.0f, 0, 0, 0, 0, 0, 0, 0},
    {YELLOW_ANT, {-500.0,0.0,-300.0}, 270.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 400.0, 600.0, 30.0, 12.0, 10.0f, 0, 0, 0, 0, 0, 0, 0},
    {GREY_ANT_SPAWNER, {-1600.0,0.0,1200.0}, 0.0, -10000.0, 10000.0, 0, 0.0, -10000.0, 10000.0, 1, 1600.0, 1200.0, 0.0, 0.0, 0, 0, 0, 0, 12.0f, 90.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-1100.0,0.0,-1600.0}, 0.0, -10000.0, 10000.0, 0, 0.0, -10000.0, 10000.0, 1, 1600.0, 1100.0, 0.0, 0.0, 0, 0, 0, 0, 12.0f, 150.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-1300.0,0.0,300.0}, 0.0, -10000.0, 10000.0, 0, 0.0, -10000.0, 10000.0, 1, 1600.0, -1100.0, 0.0, 0.0, 0, 0, 0, 0, 12.0f, 150.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room14_objects[27] = {
    {{1200.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT3_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_NORTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{1200.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 2, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{1200.0,0.0,-1000.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,2200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,2200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,2200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,2200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{-1200.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,-1000.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,0.0,-1000.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{1001.0,-100.0,1000.0}, {0.009999999776482582,11.0,36.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1001.0,-100.0,-2000.0}, {0.009999999776482582,11.0,16.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1001.0,300.0,-1000.0}, {0.009999999776482582,11.0,4.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,-100.0,-2001.0}, {32.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-1001.0,-100.0,1000.0}, {0.009999999776482582,11.0,36.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-1001.0,-100.0,-2000.0}, {0.009999999776482582,11.0,16.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-1001.0,300.0,-1000.0}, {0.009999999776482582,11.0,4.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-900.0,-100.0,2001.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{900.0,-100.0,2001.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,300.0,2001.0}, {4.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,-1.0,0.0}, {30.0,0.009999999776482582,50.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM14_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,2050.0}, {1.0,1.0,0.20000000298023224}, 0, DEGREES_TO_RADIANS_2PI(0.02741556724295125), 7, 11, 0.0, 400.0, 2050.0, 0.0, 1, 40, -1, 40, 0, 0, G_BL_DOOR_MODEL, -1, -1, 7, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-900.0,0.0,-150.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room14_actors[12] = {
    {GREEN_ANT, {600.0,0.0,-300.0}, 100.0, -900.0, 900.0, 0, 1000.0, -1900.0, 1900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 62.0f, 0, 0, 0},
    {GREEN_ANT, {-600.0,0.0,-300.0}, 100.0, -900.0, 900.0, 0, 1000.0, -1900.0, 1900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 42.0f, 0, 0, 0},
    {GREEN_ANT, {600.0,0.0,1600.0}, 100.0, -900.0, 900.0, 0, 1000.0, -1900.0, 1900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 52.0f, 0, 0, 0},
    {GREEN_ANT, {-600.0,0.0,1600.0}, 100.0, -900.0, 900.0, 0, 1000.0, -1900.0, 1900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 22.0f, 0, 0, 0},
    {GREEN_ANT, {0.0,0.0,600.0}, 100.0, -900.0, 900.0, 0, 1000.0, -1900.0, 1900.0, 0, 30.0, 15.0, 650.0, 0.0, 0, 0, 0, 0, 39.0f, 0, 0, 0},
    {GREY_ANT_SPAWNER, {-600.0,0.0,-2100.0}, 180.0, -1000.0, 1000.0, 0, 100.0, -2000.0, 2000.0, 1, -600.0, 2100.0, -600.0, 2100.0, -600.0f, 2100.0f, 0, 0, 20.0f, 60.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-600.0,0.0,2100.0}, 0.0, -1200.0, 1200.0, 0, 1000.0, -2000.0, 2000.0, 1, -600.0, -2100.0, -600.0, -2100.0, -600.0f, -2100.0f, 0, 0, 15.0f, 70.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-1100.0,0.0,100.0}, 90.0, -1200.0, 1200.0, 0, 1000.0, -2000.0, 2000.0, 1, 1100.0, 100.0, 1100.0, 100.0, 1100.0f, 100.0f, 0, 0, 13.0f, 33.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-1100.0,0.0,1100.0}, 270.0, -1200.0, 1200.0, 0, 1000.0, -2000.0, 2000.0, 1, 1100.0, 1100.0, 1100.0, 1100.0, 1100.0f, 1100.0f, 0, 0, 18.0f, 120.0f, 0, 0},
    {GREY_ANT_SPAWNER, {1100.0,0.0,-400.0}, 240.0, -1200.0, 1200.0, 0, 1000.0, -2000.0, 2000.0, 1, -1100.0, 600.0, -1100.0, 600.0, -1100.0f, 600.0f, 0, 0, 20.0f, 60.0f, 0, 0},
    {GREY_ANT_SPAWNER, {-1100.0,0.0,1600.0}, 30.0, -1200.0, 1200.0, 0, 1000.0, -2000.0, 2000.0, 1, 1100.0, 600.0, 1100.0, 600.0, 1100.0f, 600.0f, 0, 0, 22.0f, 180.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room21_objects[10] = {
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_SOUTH_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 4, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{-1200.0,0.0,0.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM21_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{450.0,0.0,-150.0}, {1.0,5.5,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{0.0,0.0,0.0}, {1.0,1.100000023841858,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM21_PLATFORM1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.5,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM21_PLATFORM2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{-900.0,0.0,900.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room15_objects[17] = {
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM15_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,-10.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM15_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM15_CEILING_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.8799999952316284,0.8799999952316284,0.8799999952316284}, 0, 0, 7, 7, 12.0, 0.0, 0.0, 1000.0, &func_800AF9D0, &MoveTheater, 80, 36, 5, 12, AL_ROOM15_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,500.0,930.0}, {1.0,1.0,0.20000000298023224}, 0, 0, 7, 11, 0.0, 0.0, 930.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{0.0,500.0,-930.0}, {1.0,1.0,0.20000000298023224}, 0, 0, 7, 11, 0.0, 0.0, -930.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 512, 0, 2000.0, 1000.0, 300.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 524, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {{-800.0,0.0,0.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_roomUnk3_objects[15] = {
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,-10.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM15_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM15_CEILING_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 7, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.8799999952316284,0.8799999952316284,0.8799999952316284}, 0, 0, 7, 7, 10.0, 0.0, 0.0, 1000.0, &func_800AF9D0, &MoveTheater, 60, 32, 6, 12, AL_ROOM15_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,500.0,930.0}, {1.0,1.0,0.20000000298023224}, 0, 0, 7, 11, 0.0, 0.0, 930.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{0.0,500.0,-930.0}, {1.0,1.0,0.20000000298023224}, 0, 0, 7, 11, 0.0, 0.0, -930.0, 0.0, 1, 30, -1, 30, 0, 0, G_SPIN_DOOR_MODEL, -1, -1, 0, &func_800AFB2C, &func_800B06B0, 0, 0, 2, 4, 4, 0, 11, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 512, 0, 2000.0, 1000.0, 300.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 524, NULL, NULL, 0, 0, 7, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room16_objects[22] = {
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{-1501.0,-100.0,0.0}, {0.009999999776482582,11.0,32.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,-100.0,0.0}, {0.009999999776482582,11.0,32.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-900.0,-100.0,-1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{900.0,-100.0,-1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,300.0,-1501.0}, {4.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-900.0,-100.0,1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{900.0,-100.0,1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,300.0,1501.0}, {4.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM16_FLOOR1_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM16_FLOOR2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM16_GRATE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM16_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room16_actors[3] = {
    {GREY_ANT_SPAWNER, {1150.0,0.0,-1050.0}, 0.0, -1500.0, 0.0, -1500.0f, 1500.0, 0.0, -1500.0, 1, -1350.0, -1050.0, -1350.0, 0.0, 1350.0f, 0, 1350.0f, 1350.0f, 12.0f, 20.0f, 0, 0},
    {GREY_ANT_SPAWNER, {1350.0,0.0,-1050.0}, 0.0, -1500.0, 0.0, -1500.0f, 1500.0, 0.0, -1500.0, 1, 1350.0, -100.0, -1350.0, -100.0, -1350.0f, -100.0f, -1350.0f, 1150.0f, 12.0f, 20.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room17_objects[23] = {
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1700.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1700.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,1550.0}, {1.0,1.0,0.20000000298023224}, 0, 0, 7, 11, 0.0, 400.0, 1550.0, 0.0, 1, 15, -1, 40, 0, 0, G_BL_DOOR_MODEL, -1, -1, 9, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM17_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 4, 4, 0, -1, 0, 0},
    {{-1501.0,-100.0,0.0}, {0.009999999776482582,11.0,32.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{1501.0,-100.0,0.0}, {0.009999999776482582,11.0,32.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-900.0,-100.0,-1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{900.0,-100.0,-1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,300.0,-1501.0}, {4.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{-900.0,-100.0,1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{900.0,-100.0,1501.0}, {14.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,300.0,1501.0}, {4.0,11.0,0.009999999776482582}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM17_FLOOR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 0, 0},
    {{-1300.0,-200.0,1300.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM21_PLATFORM2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{100.0,-200.0,1300.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM21_PLATFORM2_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 0, 4, 0, -1, 0, 0},
    {{0.0,-1500.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 0, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room17_actors[5] = {
    {BULLET_HELL_ANT_SPAWNER, {-490.0,0.0,1600.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 45.0, 8.0, 0.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 0, 0},
    {BULLET_HELL_ANT_SPAWNER, {-970.0,0.0,1600.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 45.0, -8.0, 0.0, 0.0, 0, 0, 0, 0, 10.0f, 90.0f, 0, 0},
    {BULLET_HELL_ANT_SPAWNER, {490.0,0.0,1600.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 45.0, 8.0, 0.0, 0.0, 0, 0, 0, 0, 30.0f, 30.0f, 0, 0},
    {BULLET_HELL_ANT_SPAWNER, {970.0,0.0,1600.0}, 90.0, -1500.0, 1500.0, 0, 0.0, -1500.0, 1500.0, 1, 45.0, -8.0, 0.0, 0.0, 0, 0, 0, 0, 10.0f, 90.0f, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room18_objects[11] = {
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_BL_EXIT_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_WEST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,-1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_ROOM18_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, AL_EXIT4_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, G_EXIT_SHADOW_EAST_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 3, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {1.0,1.0,1.0}, 0, 0, 256, 0, 400.0, 400.0, 0.0, 0.0, 3, 1, 0, 0, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 2, -1, 1, 0, -1, 0, 0},
    {{0.0,0.0,1200.0}, {4.0,4.0,4.0}, 0, 0, 7, 0, 1400.0, 1000.0, -1000.0, 0.0, 0, 90, 0, 1000, 0, 0, 0, -1, -1, -1, NULL, NULL, 0, 0, 1, 0, 0, 0, -1, 0, 0},
    {{-900.0,0.0,-900.0}, {1.5,1.5,1.5}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_FIXED_CAM_PILLAR_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 34, 4, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomObject AntLand_room19_objects[3] = {
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, AL_ROOM0_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 2, 0, 4, 0, -1, 0, 0},
    {{0.0,0.0,0.0}, {1.0,1.0,1.0}, 0, 0, 7, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, G_POLE_MODEL, -1, -1, -1, NULL, NULL, 0, 0, 6, 4, 4, 0, -1, 1, 0},
    {{0.0,0.0,0.0}, {0.0,0.0,0.0}, 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

RoomActor AntLand_room19_actors[2] = {
    {YELLOW_ANT, {800.0,0.0,300.0}, 270.0, 300.0, 300.0, 0, 0.0, 0.0, 0.0, 1, 300.0, 300.0, 60.0, 12.0, 10.0f, 0, 0, 0, 0, 0, 0, 0},
    {ACTOR_NULL, {0.0,0.0,0.0}, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0}
};


// Sprites
s32 AntLand_spriteLib_Sprlib[] = {
    12,
    69,
    5,
    6,
    14,
    8,
    7,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    12,
    69,
    14,
    8,
    7,
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
    13,
    12,
    69,
    8,
    7,
    14,
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
    13,
    12,
    69,
    14,
    5,
    6,
    8,
    7,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    13,
    12,
    69,
    8,
    7,
    14,
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
    13,
    12,
    69,
    8,
    7,
    14,
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
    13,
    12,
    69,
    8,
    7,
    14,
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
};

SpriteActor AntLand_room0_sprites[8] = {
    {18, 0, {-700.0,0.0,-300.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0, {30, 1, 0, 0}},
    {3, 0, {900.0,400.0,-900.0}, {100.0,200.0,250.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {900.0,400.0,900.0}, {100.0,200.0,250.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {990.0,500.0,-900.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {900.0,500.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {990.0,500.0,900.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {900.0,500.0,990.0}, {100.0,100.0,150.0}, 1, 0, 90.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room1_sprites[19] = {
    {4, 0, {-250.0,50.0,-990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {0.0,50.0,-990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {250.0,50.0,-990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {-250.0,50.0,990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {0.0,50.0,990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {250.0,50.0,990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {3, 0, {-920.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-550.0,260.0,920.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {642.0,260.0,920.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 90.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {642.0,260.0,-920.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-550.0,260.0,-920.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-550.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {642.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 90.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {642.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-550.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room2_sprites[13] = {
    {3, 0, {-930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-550.0,260.0,930.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {642.0,260.0,930.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 90.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {642.0,260.0,-930.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-550.0,260.0,-930.0}, {100.0,100.0,150.0}, 1, 0, 81.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-550.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {642.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 90.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {642.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-550.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 81.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room3_sprites[25] = {
    {4, 0, {-600.0,50.0,-990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {700.0,50.0,-990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {-600.0,50.0,990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, -100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {700.0,50.0,990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, -100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {-990.0,50.0,400.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, 0, {-990.0,50.0,800.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, 0, {990.0,50.0,400.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, 0, {990.0,50.0,800.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-930.0,260.0,-642.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-550.0,260.0,930.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-550.0,260.0,-930.0}, {100.0,100.0,150.0}, 1, 0, 65.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {930.0,260.0,-642.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {642.0,260.0,930.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {642.0,260.0,-930.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-990.0,260.0,-642.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-550.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-550.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 65.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {990.0,260.0,-642.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {642.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {642.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room4_sprites[13] = {
    {3, 0, {-950.0,260.0,-650.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-950.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-550.0,260.0,950.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {650.0,260.0,950.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-950.0,260.0,-650.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {950.0,260.0,-650.0}, {100.0,100.0,150.0}, 1, 0, 74.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-990.0,260.0,-650.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-550.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {650.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-990.0,260.0,-650.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {990.0,260.0,-650.0}, {100.0,100.0,150.0}, 1, 0, 74.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room5_sprites[17] = {
    {4, 0, {-1190.0,50.0,1000.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, 0, {1190.0,50.0,1000.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, 0, {-700.0,50.0,-1190.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, -100.0f, 0, {255, 255, 255, 255}},
    {4, 0, {1190.0,50.0,700.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {1130.0,260.0,440.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-440.0,260.0,1130.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-1130.0,860.0,440.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {540.0,260.0,-1130.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {1130.0,260.0,-540.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-440.0,260.0,-1130.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {1190.0,260.0,440.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-440.0,260.0,1190.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-1190.0,860.0,440.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {540.0,260.0,-1190.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {1190.0,260.0,-540.0}, {100.0,100.0,150.0}, 1, 0, 8.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-440.0,260.0,-1190.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room6_sprites[9] = {
    {3, 0, {750.0,260.0,-1420.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-1420.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-1420.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-750.0,260.0,-1420.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room8_sprites[25] = {
    {3, 0, {-1430.0,260.0,2250.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-1430.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-1430.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-1430.0,260.0,-2250.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-750.0,260.0,-2930.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {750.0,260.0,-2930.0}, {100.0,100.0,150.0}, 1, 0, 48.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {1430.0,260.0,-2250.0}, {100.0,100.0,150.0}, 1, 0, 52.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {1430.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {1430.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 74.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {1430.0,260.0,2250.0}, {100.0,100.0,150.0}, 1, 0, 76.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {750.0,260.0,2930.0}, {100.0,100.0,150.0}, 1, 0, 90.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, 0, {-750.0,260.0,2930.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-1490.0,260.0,2250.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-1490.0,260.0,-2250.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-750.0,260.0,-2990.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {750.0,260.0,-2990.0}, {100.0,100.0,150.0}, 1, 0, 48.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {1490.0,260.0,-2250.0}, {100.0,100.0,150.0}, 1, 0, 52.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 74.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {1490.0,260.0,2250.0}, {100.0,100.0,150.0}, 1, 0, 76.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, 0, {750.0,260.0,2990.0}, {100.0,100.0,150.0}, 1, 0, 90.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, 0, {-750.0,260.0,2990.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, 0, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room9_sprites[1] = {
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room10_sprites[17] = {
    {3, SPRITE_BLANK, {1450.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {1450.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {750.0,260.0,-1450.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-750.0,260.0,1450.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1450.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1450.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-750.0,260.0,-1450.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {750.0,260.0,1450.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-750.0,260.0,1490.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {750.0,260.0,1490.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room11_sprites[13] = {
    {3, SPRITE_BLANK, {-920.0,260.0,-644.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-920.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-550.0,260.0,920.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {920.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {920.0,260.0,-644.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-550.0,260.0,-920.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-990.0,260.0,-644.0}, {100.0,100.0,150.0}, 1, 0, 80.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-550.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,-644.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-550.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room12_sprites[17] = {
    {3, SPRITE_BLANK, {750.0,260.0,-1430.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1430.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1430.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-750.0,260.0,1430.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {1430.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {1430.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-750.0,260.0,-1430.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {750.0,260.0,1430.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-750.0,260.0,1490.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {750.0,260.0,1490.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room13_sprites[11] = {
    {4, SPRITE_BLANK, {-1490.0,50.0,1200.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {1490.0,50.0,1200.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-1000.0,50.0,-1490.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {1490.0,50.0,1000.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-1090.0,50.0,200.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {1490.0,50.0,-1000.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1450.0,860.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1450.0,860.0,750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,860.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,860.0,750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room14_sprites[31] = {
    {4, SPRITE_BLANK, {-600.0,50.0,-1990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {600.0,50.0,1990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-600.0,50.0,1990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, -100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {600.0,50.0,-1990.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, -100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-990.0,50.0,100.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-990.0,50.0,600.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-990.0,50.0,1100.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {990.0,50.0,100.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {990.0,50.0,600.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {990.0,50.0,1100.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {990.0,50.0,-400.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-990.0,50.0,1600.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-550.0,260.0,1930.0}, {100.0,100.0,150.0}, 1, 0, 73.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {930.0,260.0,1644.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {930.0,260.0,450.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {930.0,260.0,-450.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {642.0,260.0,-1930.0}, {100.0,100.0,150.0}, 1, 0, 83.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-550.0,260.0,-1930.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-930.0,260.0,-450.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-930.0,260.0,450.0}, {100.0,100.0,150.0}, 1, 0, 69.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-930.0,260.0,1644.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-550.0,260.0,1990.0}, {100.0,100.0,150.0}, 1, 0, 73.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,1644.0}, {100.0,100.0,150.0}, 1, 0, 72.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,450.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,-450.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {642.0,260.0,-1990.0}, {100.0,100.0,150.0}, 1, 0, 83.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-550.0,260.0,-1990.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-990.0,260.0,-450.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-990.0,260.0,450.0}, {100.0,100.0,150.0}, 1, 0, 69.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-990.0,260.0,1644.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room16_sprites[1] = {
    -1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0} // Null sprite
};

SpriteActor AntLand_room17_sprites[21] = {
    {4, SPRITE_BLANK, {490.0,50.0,1490.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {970.0,50.0,1490.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-490.0,50.0,1490.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-970.0,50.0,1490.0}, {100.0,200.0,250.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {750.0,260.0,-1430.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1430.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-1430.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-750.0,260.0,1430.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {1430.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 64.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {1430.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-750.0,260.0,-1430.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {750.0,260.0,1430.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-750.0,260.0,1490.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {1490.0,260.0,750.0}, {100.0,100.0,150.0}, 1, 0, 64.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {1490.0,260.0,-750.0}, {100.0,100.0,150.0}, 1, 0, 66.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-750.0,260.0,-1490.0}, {100.0,100.0,150.0}, 1, 0, 62.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {750.0,260.0,1490.0}, {100.0,100.0,150.0}, 1, 0, 60.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room18_sprites[2] = {
    {18, SPRITE_BLANK, {-500.0,0.0,750.0}, {100.0,200.0,200.0}, 1, 0, 60.0, 0, 0, 0, 0, 0, {31, 13, 0, 0}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

SpriteActor AntLand_room20_sprites[19] = {
    {3, SPRITE_BLANK, {930.0,260.0,-644.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-550.0,260.0,930.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {642.0,260.0,930.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {642.0,260.0,-930.0}, {100.0,100.0,150.0}, 1, 0, 64.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-550.0,260.0,-930.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {3, SPRITE_BLANK, {-930.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 0, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,-644.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 78.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-550.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 88.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {642.0,260.0,990.0}, {100.0,100.0,150.0}, 1, 0, 58.0, 1, 0, -100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 68.0, 1, -100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {642.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 64.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-550.0,260.0,-990.0}, {100.0,100.0,150.0}, 1, 0, 70.0, 1, 0, 100.0f, 0, 0, {255, 255, 255, 255}},
    {8, SPRITE_BLANK, {-990.0,260.0,550.0}, {100.0,100.0,150.0}, 1, 0, 50.0, 1, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {800.0,50.0,990.0}, {100.0,200.0,200.0}, 1, 0, 1.0, 0, 0, 0, 100.0f, 0, {255, 255, 255, 255}},
    {4, SPRITE_BLANK, {-990.0,50.0,-700.0}, {100.0,200.0,200.0}, 1, 0, 1.0, 0, 100.0f, 0, 0, 0, {255, 255, 255, 255}},
    {-1, SPRITE_BLANK, {-1.0,-1.0,-1.0}, {-1.0,32.0,32.0}, 1, 0, 0.0, 0, 0, 0, 0, 0, {-1, -1, 0, 0}}
};

// Collectables
Collectable AntLand_room0_collectables[3] = {
    {R_HEART, {-849.0,0.0,-589.0}, -1, 0, 0, 0},
    {CROWN, {-555.0,0.0,-862.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0} // Null collectable
};

Collectable AntLand_room1_collectables[2] = {
    {CROWN, {-150.0,0.0,0.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0} // Null collectable
};

Collectable AntLand_room2_collectables[1] = {
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0} // Null collectable
};

Collectable AntLand_room3_collectables[2] = {
    {R_HEART, {815.0,0.0,667.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0} // Null collectable
};

Collectable AntLand_room20_collectables[7] = {
    {CROWN, {-800.0,1000.0,0.0}, -1, 0, 0, 0},
    {CROWN, {900.0,2000.0,-200.0}, -1, 0, 0, 0},
    {CROWN, {400.0,2500.0,800.0}, -1, 0, 0, 0},
    {CROWN, {-400.0,2500.0,-800.0}, -1, 0, 0, 0},
    {CROWN, {0.0,0.0,0.0}, -1, 0, 0, 0},
    {CROWN, {-800.0,2100.0,-500.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0} // Null collectable
};

Collectable AntLand_room5_collectables[3] = {
    {CROWN, {400.0,1200.0,1000.0}, 4, 0, 0, 0},
    {R_HEART, {-1120.0,300.0,300.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0} // Null collectable
};

Collectable AntLand_room6_collectables[4] = {
    {CROWN, {500.0,0.0,-1100.0}, -1, 0, 0, 0},
    {R_HEART, {1200.0,0.0,500.0}, -1, 0, 0, 0},
    {CROWN, {-1100.0,0.0,500.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room8_collectables[4] = {
    {R_HEART, {-1080.0,0.0,2400.0}, -1, 0, 0, 0},
    {R_HEART, {1020.0,0.0,-2500.0}, -1, 0, 0, 0},
    {R_HEART, {1020.0,0.0,-2300.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room9_collectables[3] = {
    {CROWN, {0.0,0.0,0.0}, -1, 0, 0, 0},
    {CROWN, {600.0,1500.0,800.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room10_collectables[5] = {
    {R_HEART, {50.0,0.0,-150.0}, -1, 0, 0, 0},
    {O_HEART, {-150.0,0.0,50.0}, -1, 0, 0, 0},
    {CROWN, {-50.0,0.0,-1250.0}, -1, 0, 0, 0},
    {CROWN, {-1250.0,0.0,-50.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room11_collectables[3] = {
    {CROWN, {900.0,0.0,-100.0}, -1, 0, 0, 0},
    {R_HEART, {900.0,0.0,100.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room12_collectables[3] = {
    {CROWN, {1350.0,0.0,1350.0}, -1, 0, 0, 0},
    {R_HEART, {1230.0,0.0,-250.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_roomUnk4_collectables[3] = {
    {CROWN, {1350.0,0.0,1350.0}, -1, 0, 0, 0},
    {R_HEART, {700.0,0.0,200.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room21_collectables[8] = {
    {CROWN, {850.0,880.0,-850.0}, -1, 0, 0, 0},
    {CROWN, {650.0,880.0,-850.0}, -1, 0, 0, 0},
    {CROWN, {450.0,880.0,-850.0}, -1, 0, 0, 0},
    {R_HEART, {850.0,880.0,-650.0}, -1, 0, 0, 0},
    {O_HEART, {650.0,880.0,-650.0}, -1, 0, 0, 0},
    {R_HEART, {450.0,880.0,-650.0}, -1, 0, 0, 0},
    {CARROT, {450.0,1100.0,-150.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room16_collectables[5] = {
    {CROWN, {1350.0,0.0,-1350.0}, -1, 0, 0, 0},
    {CROWN, {-1350.0,0.0,1350.0}, -1, 0, 0, 0},
    {R_HEART, {0.0,0.0,1050.0}, -1, 0, 0, 0},
    {TIME_STOP_POWER_UP, {-1400.0,0.0,-1400.0}, -1, 0, -1, 360},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room17_collectables[4] = {
    {CROWN, {500.0,0.0,500.0}, -1, 0, 0, 0},
    {CROWN, {-500.0,0.0,500.0}, -1, 0, 0, 0},
    {BIG_HEAD_POWER_UP, {1000.0,0.0,-400.0}, -1, 0, -1, 300},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

Collectable AntLand_room18_collectables[4] = {
    {R_HEART, {0.0,150.0,0.0}, -1, 0, 0, 0},
    {R_HEART, {0.0,300.0,0.0}, -1, 0, 0, 0},
    {CROWN, {0.0,450.0,0.0}, -1, 0, 0, 0},
    {0, {0.0,0.0,0.0}, -1, 0, 0, 0}
};

RoomInstance AntLand_room_instances[] = {
    {AntLand_room0_objects, AntLand_room0_actors, AntLand_room0_collectables, AntLand_room0_sprites, 0, 0, 1, 0, -1, 0, 0.0, 1, -900.0, 300.0, -900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room1_objects, AntLand_room1_actors, AntLand_room1_collectables, AntLand_room1_sprites, 0, 0, 1, 0, -1, 200, 0.0, 1, -900.0, 600.0, -900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room2_objects, AntLand_room2_actors, AntLand_room2_collectables, AntLand_room2_sprites, 0, 0, 2, 0, -1, 0, 0.0, 1, -900.0, 600.0, -900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room3_objects, AntLand_room3_actors, AntLand_room3_collectables, AntLand_room3_sprites, 1, 0, 0, 2, 14, 0, 0.0, 1, -900.0, 600.0, -900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room4_objects, AntLand_room4_actors, 0, AntLand_room4_sprites, 0, 0, 1, 0, -1, 0, 0.0, 2, -700.0, 800.0, -950.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room5_objects, AntLand_room5_actors, AntLand_room5_collectables, AntLand_room5_sprites, 1, 0, 1, 6, 4, 0, 0.0, 2, 0.0, 800.0, -1100.0, 0.0, 0.0, 1.7999999523162842, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room6_objects, AntLand_room6_actors, AntLand_room6_collectables, AntLand_room6_sprites, 0, 0, 1, 0, -1, 0, 0.0, 1, 1400.0, 500.0, -1400.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room7_objects, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0.0, 2, 0.0, 600.0, -800.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room8_objects, AntLand_room8_actors, AntLand_room8_collectables, AntLand_room8_sprites, 0, 0, 1, 0, -1, 0, 0.0, 1, 900.0, 800.0, 600.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room9_objects, AntLand_room9_actors, AntLand_room9_collectables, AntLand_room9_sprites, 0, 0, 2, 0, -1, 0, 0.0, 1, 1900.0, 600.0, -900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room10_objects, AntLand_room10_actors, AntLand_room10_collectables, AntLand_room10_sprites, 0, 0, 2, 0, -1, 200, 0.0, 2, -550.0, 800.0, -1100.0, 0.0, 0.0, -600.0, 0.699999988079071, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room11_objects, 0, AntLand_room11_collectables, AntLand_room11_sprites, 0, 0, 2, 0, -1, 0, 0.0, 2, -980.0, 700.0, 0.0, 0.0, 0.0, 0.0, 0.30000001192092896, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room12_objects, AntLand_room12_actors, AntLand_room12_collectables, AntLand_room12_sprites, 0, 0, 2, 0, -1, 400, 0.0, 10, -1000.0, 0.0, 1300.0, 0.0, 0.0, 3.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room13_objects, AntLand_room13_actors, 0, AntLand_room13_sprites, 1, 0, 2, 6, 6, 0, 0.0, 2, -1400.0, 900.0, 1400.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room14_objects, AntLand_room14_actors, 0, AntLand_room14_sprites, 1, 0, 0, 2, 7, 0, 0.0, 10, -900.0, 0.0, -150.0, 0.0, 0.0, 0.0, 2.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room15_objects, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0.0, 2, -800.0, 600.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room16_objects, AntLand_room16_actors, AntLand_room16_collectables, AntLand_room16_sprites, 0, 0, 5, 0, -1, 200, 0.0, 10, -500.0, 0.0, 1400.0, 0.0, 0.0, 0.0, 2.5, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room17_objects, AntLand_room17_actors, AntLand_room17_collectables, AntLand_room17_sprites, 1, 0, 6, 11, 9, 0, 0.0, 1, -400.0, 550.0, -1350.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room18_objects, 0, AntLand_room18_collectables, AntLand_room18_sprites, 0, 0, 2, 0, -1, 0, 0.0, 2, -900.0, 800.0, -900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room19_objects, AntLand_room19_actors, 0, 0, 1, 1, 2, 0, -1, 0, 0.0, 2, 0.0, 800.0, 1000.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room20_objects, AntLand_room20_actors, AntLand_room20_collectables, AntLand_room20_sprites, 0, 0, 2, 0, -1, 0, 0.0, 1, 900.0, 600.0, -900.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {AntLand_room21_objects, 0, AntLand_room21_collectables, 0, 0, 0, 4, 0, -1, 0, 0.0, 2, -900.0, 1150.0, 900.0, 0.0, 0.0, 0.0, 0.6000000238418579, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0},
    {0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0}   // Null room
};

s32 AntLand_rooms_map[10][8] = {
    {-1,  0,  1,  2,  3, 20, -1, -1},
    {-1, -1, -1, -1,  4,  5, -1, -1},
    {-1, 10,  9,  8,  7,  6, -1, -1},
    {-1, 11, -1, -1, -1, -1, -1, -1},
    {-1, 12, 13, 14, 21, -1, -1, -1},
    {-1, -1, -1, 15, -1, -1, -1, -1},
    {-1, -1, -1, 16, -1, -1, -1, -1},
    {-1, -1, -1, 17, -1, -1, -1, -1},
    {-1, -1, -1, 18, -1, -1, -1, -1},
    {-1, -1, -1, 19, -1, -1, -1, -1} 
};

StageMapData AntLand_map_data = {
    8, 10, AntLand_room_instances, AntLand_rooms_map, 
};

RoomInstance AntLand_nullOWRoom_Rmset = {
    0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, -1.0, 0.0
};

LevelScope AntLand_scope_Lvlscope = {
    0,
    0,
    0,
    255,
    20000,  // render distance
    60,
};

StageData AntLand_stageData = {
    &AntLand_map_data,
    0,
    AntLand_stageModels,            // Model array
    99,                             // Model count 
    0,
    AntLand_rabobjects_Bin,
    131072,
    &AntLand_spriteLib_Sprlib[0],
    &AntLand_scope_Lvlscope,
};


/* Asset Information that is not hardcoded */
Mtx AntLand_IMtx2 = IDENTITY;

#include "assets/levelGroup/AntLand/alScope.light.inc.c"

#include "assets/levelGroup/AntLand/exit2/exit2.vtx.inc.c"
Mtx AntLand_IMtx3 = IDENTITY;
unsigned char AntLand_Pad1[] = FILEPAD;
unsigned char AntLand_antWallw_i4_PNG[] = {
    #include "build/assets/levelGroup/AntLand/antWallw.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/exit2/exit2.gfx.inc.c"

#include "assets/levelGroup/AntLand/exit3/exit3.vtx.inc.c"
Mtx AntLand_IMtx4 = IDENTITY;

#include "assets/levelGroup/AntLand/exit3/exit3.gfx.inc.c"

#include "assets/levelGroup/AntLand/exit4/exit4.vtx.inc.c"
Mtx AntLand_IMtx5 = IDENTITY;

#include "assets/levelGroup/AntLand/exit4/exit4.gfx.inc.c"

#include "assets/levelGroup/AntLand/room0/room0.vtx.inc.c"
Mtx AntLand_IMtx6 = IDENTITY;
unsigned char AntLand_Pad2[] = FILEPAD;
unsigned char AntLand_antWallShine1_ci4_PNG[] = {
#include "build/assets/levelGroup/AntLand/antWallShine1.ci4.png.inc.c"
};
unsigned char AntLand_Pad3[] = FILEPAD;
unsigned char AntLand_antWallShine1_ci4_PAL[] = {
#include "build/assets/levelGroup/AntLand/antWallShine1.ci4.pal.inc.c"
};
unsigned char AntLand_Pad4[] = FILEPAD;
unsigned char AntLand_antWallShine2_ci4_PNG[] = {
#include "build/assets/levelGroup/AntLand/antWallShine2.ci4.png.inc.c"
};
unsigned char AntLand_Pad5[] = FILEPAD;
unsigned char AntLand_antWallShine2_ci4_PAL[] = {
#include "build/assets/levelGroup/AntLand/antWallShine2.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room0/room0.gfx.inc.c"

#include "assets/levelGroup/AntLand/room1/room1.vtx.inc.c"
Mtx AntLand_IMtx7 = IDENTITY;
unsigned char AntLand_Pad6[] = FILEPAD;
unsigned char AntLand_antWalli4_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/antWalli4.i4.png.inc.c"
};
unsigned char AntLand_Pad7[] = FILEPAD;
unsigned char AntLand_gooinga_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/gooinga.i4.png.inc.c"
};
unsigned char AntLand_Pad8[] = FILEPAD;
unsigned char AntLand_AntshineWall3_ci8_PNG[] = {
#include "build/assets/levelGroup/AntLand/AntshineWall3.ci8.png.inc.c"
};
unsigned char AntLand_Pad9[] = FILEPAD;
unsigned char AntLand_AntshineWall3_ci8_PAL[] = {
#include "build/assets/levelGroup/AntLand/AntshineWall3.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room1/room1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room2/room2.vtx.inc.c"
Mtx AntLand_IMtx8 = IDENTITY;
unsigned char AntLand_Pad10[] = FILEPAD;
unsigned char AntLand_horror_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/horror.i4.png.inc.c"
};
unsigned char AntLand_Pad11[] = FILEPAD;
unsigned char AntLand_antMural1_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/antMural1.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/room2/room2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room14/room14.vtx.inc.c"
Mtx AntLand_IMtx9 = IDENTITY;
unsigned char AntLand_Pad12[] = FILEPAD;
unsigned char AntLand_AlShinewall2_ci8_PNG[] = {
#include "build/assets/levelGroup/AntLand/AlShinewall2.ci8.png.inc.c"
};
unsigned char AntLand_Pad13[] = FILEPAD;
unsigned char AntLand_AlShinewall2_ci8_PAL[] = {
#include "build/assets/levelGroup/AntLand/AlShinewall2.ci8.pal.inc.c"
};
unsigned char AntLand_Pad14[] = FILEPAD;
unsigned char AntLand_wallawalwal_ci4_PNG[] = {
#include "build/assets/levelGroup/AntLand/wallawalwal.ci4.png.inc.c"
};
unsigned char AntLand_Pad15[] = FILEPAD;
unsigned char AntLand_wallawalwal_ci4_PAL[] = {
#include "build/assets/levelGroup/AntLand/wallawalwal.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room14/room14.gfx.inc.c"

#include "assets/levelGroup/AntLand/room4/room4.vtx.inc.c"
Mtx AntLand_IMtx10 = IDENTITY;
unsigned char AntLand_Pad16[] = FILEPAD;
unsigned char AntLand_ALWall2_ci8_PNG[] = {
#include "build/assets/levelGroup/AntLand/ALWall2.ci8.png.inc.c"
};
unsigned char AntLand_Pad17[] = FILEPAD;
unsigned char AntLand_ALWall2_ci8_PAL[] = {
#include "build/assets/levelGroup/AntLand/ALWall2.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room4/room4.gfx.inc.c"

#include "assets/levelGroup/AntLand/room5/room5.vtx.inc.c"
Mtx AntLand_IMtx11 = IDENTITY;
unsigned char AntLand_Pad18[] = FILEPAD;
unsigned char AntLand_ALShinewall_ci8_PNG[] = {
#include "build/assets/levelGroup/AntLand/ALShinewall.ci8.png.inc.c"
};
unsigned char AntLand_Pad19[] = FILEPAD;
unsigned char AntLand_ALShinewall_ci8_PAL[] = {
#include "build/assets/levelGroup/AntLand/ALShinewall.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room5/room5.gfx.inc.c"

#include "assets/levelGroup/AntLand/room6/room6.vtx.inc.c"
Mtx AntLand_IMtx12 = IDENTITY;
unsigned char AntLand_Pad20[] = FILEPAD;
unsigned char AntLand_antfadeee_ci8_PNG[] = {
#include "build/assets/levelGroup/AntLand/antfadeee.ci8.png.inc.c"
};
unsigned char AntLand_Pad21[] = FILEPAD;
unsigned char AntLand_antfadeee_ci8_PAL[] = {
#include "build/assets/levelGroup/AntLand/antfadeee.ci8.pal.inc.c"
};
unsigned char AntLand_Pad22[] = FILEPAD;
unsigned char AntLand_ALMural_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/ALMural.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/room6/room6.gfx.inc.c"

#include "assets/levelGroup/AntLand/room7/room7.vtx.inc.c"
Mtx AntLand_IMtx13 = IDENTITY;

#include "assets/levelGroup/AntLand/room7/room7.gfx.inc.c"

#include "assets/levelGroup/AntLand/room8/room8.vtx.inc.c"
Mtx AntLand_IMtx14 = IDENTITY;

#include "assets/levelGroup/AntLand/room8/room8.gfx.inc.c"

#include "assets/levelGroup/AntLand/room9/room9.vtx.inc.c"
Mtx AntLand_IMtx15 = IDENTITY;

#include "assets/levelGroup/AntLand/room9/room9.gfx.inc.c"

#include "assets/levelGroup/AntLand/room10/room10.vtx.inc.c"
Mtx AntLand_IMtx16 = IDENTITY;

#include "assets/levelGroup/AntLand/room10/room10.gfx.inc.c"

#include "assets/levelGroup/AntLand/room11/room11.vtx.inc.c"
Mtx AntLand_IMtx17 = IDENTITY;

#include "assets/levelGroup/AntLand/room11/room11.gfx.inc.c"

#include "assets/levelGroup/AntLand/room12/room12.vtx.inc.c"
Mtx AntLand_IMtx18 = IDENTITY;

#include "assets/levelGroup/AntLand/room12/room12.gfx.inc.c"

#include "assets/levelGroup/AntLand/room13/room13.vtx.inc.c"
Mtx AntLand_IMtx19 = IDENTITY;

#include "assets/levelGroup/AntLand/room13/room13.gfx.inc.c"

#include "assets/levelGroup/AntLand/room3/room3.vtx.inc.c"
Mtx AntLand_IMtx20 = IDENTITY;

#include "assets/levelGroup/AntLand/room3/room3.gfx.inc.c"

#include "assets/levelGroup/AntLand/room17/room17.vtx.inc.c"
Mtx AntLand_IMtx21 = IDENTITY;
unsigned char AntLand_Pad23[] = FILEPAD;
unsigned char AntLand_ALwall_ci8_PNG[] = {
#include "build/assets/levelGroup/AntLand/ALwall.ci8.png.inc.c"
};
unsigned char AntLand_Pad24[] = FILEPAD;
unsigned char AntLand_ALwall_ci8_PAL[] = {
#include "build/assets/levelGroup/AntLand/ALwall.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room17/room17.gfx.inc.c"

#include "assets/levelGroup/AntLand/room15/room15.vtx.inc.c"
Mtx AntLand_IMtx22 = IDENTITY;

#include "assets/levelGroup/AntLand/room15/room15.gfx.inc.c"

#include "assets/levelGroup/AntLand/room18/room18.vtx.inc.c"
Mtx AntLand_IMtx23 = IDENTITY;

#include "assets/levelGroup/AntLand/room18/room18.gfx.inc.c"

#include "assets/levelGroup/AntLand/room16/room16.vtx.inc.c"
Mtx AntLand_IMtx24 = IDENTITY;

#include "assets/levelGroup/AntLand/room16/room16.gfx.inc.c"

#include "assets/levelGroup/AntLand/room20/room20.vtx.inc.c"
Mtx AntLand_IMtx25 = IDENTITY;

#include "assets/levelGroup/AntLand/room20/room20.gfx.inc.c"

#include "assets/levelGroup/AntLand/room21/room21.vtx.inc.c"
Mtx AntLand_IMtx26 = IDENTITY;
unsigned char AntLand_Pad25[] = FILEPAD;
unsigned char AntLand_murals_ci4_PNG[] = {
#include "build/assets/levelGroup/AntLand/murals.ci4.png.inc.c"
};
unsigned char AntLand_Pad26[] = FILEPAD;
unsigned char AntLand_murals_ci4_PAL[] = {
#include "build/assets/levelGroup/AntLand/murals.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room21/room21.gfx.inc.c"

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.vtx.inc.c"
Mtx AntLand_IMtx27 = IDENTITY;

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.gfx.inc.c"

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.vtx.inc.c"
Mtx AntLand_IMtx28 = IDENTITY;

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.gfx.inc.c"

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.vtx.inc.c"
Mtx AntLand_IMtx29 = IDENTITY;

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.gfx.inc.c"

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.vtx.inc.c"
Mtx AntLand_IMtx30 = IDENTITY;

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.gfx.inc.c"

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.vtx.inc.c"
Mtx AntLand_IMtx31 = IDENTITY;

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.gfx.inc.c"

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.vtx.inc.c"
Mtx AntLand_IMtx32 = IDENTITY;
unsigned char AntLand_Pad27[] = FILEPAD;
unsigned char AntLand_hole_ci4_PNG[] = {
    #include "build/assets/levelGroup/AntLand/hole.ci4.png.inc.c"
};
unsigned char AntLand_Pad28[] = FILEPAD;
unsigned char AntLand_hole_ci4_PAL[] = {
    #include "build/assets/levelGroup/AntLand/hole.ci4.pal.inc.c"
};
unsigned char AntLand_Pad29[] = FILEPAD;
unsigned char AntLand_metallurgic_ci4_PNG[] = {
    #include "build/assets/levelGroup/AntLand/metallurgic.ci4.png.inc.c"
};
unsigned char AntLand_Pad30[] = FILEPAD;
unsigned char AntLand_metallurgic_ci4_PAL[] = {
    #include "build/assets/levelGroup/AntLand/metallurgic.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.gfx.inc.c"

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.vtx.inc.c"
Mtx AntLand_IMtx33 = IDENTITY;

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.vtx.inc.c"
Mtx AntLand_IMtx34 = IDENTITY;

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.vtx.inc.c"
Mtx AntLand_IMtx35 = IDENTITY;

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.gfx.inc.c"

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.vtx.inc.c"
Mtx AntLand_IMtx36 = IDENTITY;

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.gfx.inc.c"

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.vtx.inc.c"
Mtx AntLand_IMtx37 = IDENTITY;

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.gfx.inc.c"

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.vtx.inc.c"
Mtx AntLand_IMtx38 = IDENTITY;

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.vtx.inc.c"
Mtx AntLand_IMtx39 = IDENTITY;

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.vtx.inc.c"
Mtx AntLand_IMtx40 = IDENTITY;
unsigned char AntLand_Pad31[] = FILEPAD;
unsigned char AntLand_path_ci4_PNG[] = {
    #include "build/assets/levelGroup/AntLand/path.ci4.png.inc.c"
};
unsigned char AntLand_Pad32[] = FILEPAD;
unsigned char AntLand_path_ci4_PAL[] = {
    #include "build/assets/levelGroup/AntLand/path.ci4.pal.inc.c"
};
unsigned char AntLand_Pad33[] = FILEPAD;
unsigned char AntLand_stone_ci4_PNG[] = {
    #include "build/assets/levelGroup/AntLand/stone.ci4.png.inc.c"
};
unsigned char AntLand_Pad34[] = FILEPAD;
unsigned char AntLand_stone_ci4_PAL[] = {
#include "build/assets/levelGroup/AntLand/stone.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.vtx.inc.c"
Mtx AntLand_IMtx41 = IDENTITY;

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.vtx.inc.c"
Mtx AntLand_IMtx42 = IDENTITY;

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.vtx.inc.c"
Mtx AntLand_IMtx43 = IDENTITY;

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.vtx.inc.c"
Mtx AntLand_IMtx44 = IDENTITY;

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.gfx.inc.c"

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.vtx.inc.c"
Mtx AntLand_IMtx45 = IDENTITY;

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.gfx.inc.c"

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.vtx.inc.c"
Mtx AntLand_IMtx46 = IDENTITY;

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.gfx.inc.c"

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.vtx.inc.c"
Mtx AntLand_IMtx47 = IDENTITY;

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.gfx.inc.c"

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.vtx.inc.c"
Mtx AntLand_IMtx48 = IDENTITY;

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.gfx.inc.c"

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.vtx.inc.c"
Mtx AntLand_IMtx49 = IDENTITY;

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.vtx.inc.c"
Mtx AntLand_IMtx50 = IDENTITY;

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.vtx.inc.c"
Mtx AntLand_IMtx51 = IDENTITY;
unsigned char AntLand_Pad35[] = FILEPAD;
unsigned char AntLand_wallagain_i4_PNG[] = {
    #include "build/assets/levelGroup/AntLand/wallagain.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.vtx.inc.c"
Mtx AntLand_IMtx52 = IDENTITY;

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.vtx.inc.c"
Mtx AntLand_IMtx53 = IDENTITY;
unsigned char AntLand_Pad36[] = FILEPAD;
unsigned char AntLand_wallsss_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/wallsss.i4.png.inc.c"
};
unsigned char AntLand_Pad37[] = FILEPAD;
unsigned char AntLand_wallSmall_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/wallSmall.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.gfx.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.vtx.inc.c"
Mtx AntLand_IMtx54 = IDENTITY;
unsigned char AntLand_Pad38[] = FILEPAD;
unsigned char AntLand_muralllll_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/muralllll.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.vtx.inc.c"
Mtx AntLand_IMtx55 = IDENTITY;
unsigned char AntLand_Pad39[] = FILEPAD;
unsigned char AntLand_muralllll2_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/muralllll2.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.vtx.inc.c"
Mtx AntLand_IMtx56 = IDENTITY;

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.gfx.inc.c"

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.vtx.inc.c"
Mtx AntLand_IMtx57 = IDENTITY;
unsigned char AntLand_Pad40[] = FILEPAD;
unsigned char AntLand_wallFade32_ci4_PNG[] = {
#include "build/assets/levelGroup/AntLand/wallFade32.ci4.png.inc.c"
};
unsigned char AntLand_Pad41[] = FILEPAD;
unsigned char AntLand_wallFade32_ci4_PAL[] = {
#include "build/assets/levelGroup/AntLand/wallFade32.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.gfx.inc.c"

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.vtx.inc.c"
Mtx AntLand_IMtx58 = IDENTITY;

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.gfx.inc.c"

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.vtx.inc.c"
Mtx AntLand_IMtx59 = IDENTITY;
unsigned char AntLand_Pad42[] = FILEPAD;
unsigned char AntLand_the30thMural_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/the30thMural.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.gfx.inc.c"

#include "assets/levelGroup/AntLand/platform/platform.vtx.inc.c"
Mtx AntLand_IMtx60 = IDENTITY;

#include "assets/levelGroup/AntLand/platform/platform.gfx.inc.c"

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.vtx.inc.c"
Mtx AntLand_IMtx61 = IDENTITY;
unsigned char AntLand_Pad43[] = FILEPAD;
unsigned char AntLand_anotherMural_i4_PNG[] = {
#include "build/assets/levelGroup/AntLand/anotherMural.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.gfx.inc.c"

#include "assets/levelGroup/AntLand/quad/quad.vtx.inc.c"
Mtx AntLand_IMtx62 = IDENTITY;

#include "assets/levelGroup/AntLand/quad/quad.gfx.inc.c"

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.vtx.inc.c"
Mtx AntLand_IMtx63 = IDENTITY;

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.gfx.inc.c"

/* Models Collision Information */

Vec3f AntLand_exit2_collison_verts[] = {
    #include "assets/levelGroup/AntLand/exit2/exit2.colV.inc.c"
};

Vec3w AntLand_exit2_collision_tris[] = {
    #include "assets/levelGroup/AntLand/exit2/exit2.colT.inc.c"
};

#include "assets/levelGroup/AntLand/exit2/exit2.colS.inc.c"

ModelCollision AntLand_exit2_collision = {
    6, 4, AntLand_exit2_collison_verts, AntLand_exit2_collision_tris, &AntLand_exit2_ColS   // Nathan's data_only doesnt work for this rect3d
};

Vec3f AntLand_exit3_collison_verts[] = {
    #include "assets/levelGroup/AntLand/exit3/exit3.colV.inc.c"
};

Vec3w AntLand_exit3_collision_tris[] = {
    #include "assets/levelGroup/AntLand/exit3/exit3.colT.inc.c"
};

#include "assets/levelGroup/AntLand/exit3/exit3.colS.inc.c"

ModelCollision AntLand_exit3_collision = {
    6, 4, AntLand_exit3_collison_verts, AntLand_exit3_collision_tris, &AntLand_exit3_ColS
};

Vec3f AntLand_exit4_collison_verts[] = {
    #include "assets/levelGroup/AntLand/exit4/exit4.colV.inc.c"
};

Vec3w AntLand_exit4_collision_tris[] = {
    #include "assets/levelGroup/AntLand/exit4/exit4.colT.inc.c"
};

#include "assets/levelGroup/AntLand/exit4/exit4.colS.inc.c"

ModelCollision AntLand_exit4_ColH = {
    6, 4, AntLand_exit4_collison_verts, AntLand_exit4_collision_tris, &AntLand_exit4_ColS
};


// Room 0
Vec3f AntLand_room0_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room0/room0.colV.inc.c"
};

Vec3w AntLand_room0_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room0/room0.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room0/room0.colS.inc.c"

ModelCollision AntLand_room0_ColH = {
    35, 64, AntLand_room0_collision_verts, AntLand_room0_collision_tris, &AntLand_room0_ColS
};

// Room 1
Vec3f AntLand_room1_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room1/room1.colV.inc.c"
};

Vec3w AntLand_room1_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room1/room1.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room1/room1.colS.inc.c"

ModelCollision AntLand_room1_ColH = {
    48, 84, AntLand_room1_collision_verts, AntLand_room1_collision_tris, &AntLand_room1_ColS
};

// Room 2
Vec3f AntLand_room2_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room2/room2.colV.inc.c"
};

Vec3w AntLand_room2_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room2/room2.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room2/room2.colS.inc.c"

ModelCollision AntLand_room2_ColH = {
    52, 92, AntLand_room2_collision_verts, AntLand_room2_collision_tris, &AntLand_room2_ColS
};

// Room 14
Vec3f AntLand_room14_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room14/room14.colV.inc.c"
};

Vec3w AntLand_room14_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room14/room14.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room14/room14.colS.inc.c"

ModelCollision AntLand_room14_ColH = {
    66, 118, AntLand_room14_collision_verts, AntLand_room14_collision_tris, &AntLand_room14_ColS
};

// Room 4
Vec3f AntLand_room4_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room4/room4.colV.inc.c"
};

Vec3w AntLand_room4_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room4/room4.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room4/room4.colS.inc.c"

ModelCollision AntLand_room4_ColH = {
    53, 86, AntLand_room4_collision_verts, AntLand_room4_collision_tris, &AntLand_room4_ColS
};

// Room 5
Vec3f AntLand_room5_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room5/room5.colV.inc.c"
};

Vec3w AntLand_room5_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room5/room5.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room5/room5.colS.inc.c"

ModelCollision AntLand_room5_collision = {
    48, 84, AntLand_room5_collision_verts, AntLand_room5_collision_tris, &AntLand_room5_ColS
};

// Room 6
Vec3f AntLand_room6_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room6/room6.colV.inc.c"
};

Vec3w AntLand_room6_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room6/room6.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room6/room6.colS.inc.c"

ModelCollision AntLand_room6_collision = {
    76, 118, AntLand_room6_collision_verts, AntLand_room6_collision_tris, &AntLand_room6_ColS
};

// Room 7
Vec3f AntLand_room7_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room7/room7.colV.inc.c"
};

Vec3w AntLand_room7_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room7/room7.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room7/room7.colS.inc.c"

ModelCollision AntLand_room7_collision = {
    38, 45, AntLand_room7_collision_verts, AntLand_room7_collision_tris, &AntLand_room7_ColS
};

// Room 8
Vec3f AntLand_room8_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room8/room8.colV.inc.c"
};

Vec3w AntLand_room8_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room8/room8.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room8/room8.colS.inc.c"

ModelCollision AntLand_room8_collision = {
    82, 150, AntLand_room8_collision_verts, AntLand_room8_collision_tris, &AntLand_room8_ColS
};

// Room 9
Vec3f AntLand_room9_collision_verts[] = {
    #include "assets/levelGroup/AntLand/room9/room9.colV.inc.c"
};

Vec3w AntLand_room9_collision_tris[] = {
    #include "assets/levelGroup/AntLand/room9/room9.colT.inc.c"
};

#include "assets/levelGroup/AntLand/room9/room9.colS.inc.c"

ModelCollision AntLand_room9_collision = {
    24, 38, AntLand_room9_collision_verts, AntLand_room9_collision_tris, &AntLand_room9_ColS
};

#include "assets/levelGroup/AntLand/room10/room10.colV.inc.c"

#include "assets/levelGroup/AntLand/room10/room10.colT.inc.c"

#include "assets/levelGroup/AntLand/room10/room10.colS.inc.c"

ModelCollision AntLand_room10_ColH = {
    6, 1, &AntLand_room10_ColV[0], &AntLand_room10_ColT[0], &AntLand_room10_ColS
};

#include "assets/levelGroup/AntLand/room11/room11.colV.inc.c"

#include "assets/levelGroup/AntLand/room11/room11.colT.inc.c"

#include "assets/levelGroup/AntLand/room11/room11.colS.inc.c"

ModelCollision AntLand_room11_ColH = {
    52, 90, &AntLand_room11_ColV[0], &AntLand_room11_ColT[0], &AntLand_room11_ColS
};

#include "assets/levelGroup/AntLand/room12/room12.colV.inc.c"

#include "assets/levelGroup/AntLand/room12/room12.colT.inc.c"

#include "assets/levelGroup/AntLand/room12/room12.colS.inc.c"

ModelCollision AntLand_room12_ColH = {
    64, 110, &AntLand_room12_ColV[0], &AntLand_room12_ColT[0], &AntLand_room12_ColS
};

#include "assets/levelGroup/AntLand/room13/room13.colV.inc.c"

#include "assets/levelGroup/AntLand/room13/room13.colT.inc.c"

#include "assets/levelGroup/AntLand/room13/room13.colS.inc.c"

ModelCollision AntLand_room13_ColH = {
    56, 99, &AntLand_room13_ColV[0], &AntLand_room13_ColT[0], &AntLand_room13_ColS
};

#include "assets/levelGroup/AntLand/room3/room3.colV.inc.c"

#include "assets/levelGroup/AntLand/room3/room3.colT.inc.c"

#include "assets/levelGroup/AntLand/room3/room3.colS.inc.c"

ModelCollision AntLand_room3_ColH = {
    60, 108, &AntLand_room3_ColV[0], &AntLand_room3_ColT[0], &AntLand_room3_ColS
};

#include "assets/levelGroup/AntLand/room17/room17.colV.inc.c"

#include "assets/levelGroup/AntLand/room17/room17.colT.inc.c"

#include "assets/levelGroup/AntLand/room17/room17.colS.inc.c"

ModelCollision AntLand_room17_ColH = {
    60, 106, &AntLand_room17_ColV[0], &AntLand_room17_ColT[0], &AntLand_room17_ColS
};

#include "assets/levelGroup/AntLand/room15/room15.colV.inc.c"

#include "assets/levelGroup/AntLand/room15/room15.colT.inc.c"

#include "assets/levelGroup/AntLand/room15/room15.colS.inc.c"

ModelCollision AntLand_room15_ColH = {
    38, 47, &AntLand_room15_ColV[0], &AntLand_room15_ColT[0], &AntLand_room15_ColS
};

#include "assets/levelGroup/AntLand/room18/room18.colV.inc.c"

#include "assets/levelGroup/AntLand/room18/room18.colT.inc.c"

#include "assets/levelGroup/AntLand/room18/room18.colS.inc.c"

ModelCollision AntLand_room18_ColH = {
    32, 52, &AntLand_room18_ColV[0], &AntLand_room18_ColT[0], &AntLand_room18_ColS
};

#include "assets/levelGroup/AntLand/room16/room16.colV.inc.c"

#include "assets/levelGroup/AntLand/room16/room16.colT.inc.c"

#include "assets/levelGroup/AntLand/room16/room16.colS.inc.c"

ModelCollision AntLand_room16_ColH = {
    28, 40, &AntLand_room16_ColV[0], &AntLand_room16_ColT[0], &AntLand_room16_ColS
};

#include "assets/levelGroup/AntLand/room20/room20.colV.inc.c"

#include "assets/levelGroup/AntLand/room20/room20.colT.inc.c"

#include "assets/levelGroup/AntLand/room20/room20.colS.inc.c"

ModelCollision AntLand_room20_ColH = {
    40, 72, &AntLand_room20_ColV[0], &AntLand_room20_ColT[0], &AntLand_room20_ColS
};

#include "assets/levelGroup/AntLand/room21/room21.colV.inc.c"

#include "assets/levelGroup/AntLand/room21/room21.colT.inc.c"

#include "assets/levelGroup/AntLand/room21/room21.colS.inc.c"

ModelCollision AntLand_room21_ColH = {
    25, 35, &AntLand_room21_ColV[0], &AntLand_room21_ColT[0], &AntLand_room21_ColS
};

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.colV.inc.c"

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.colT.inc.c"

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.colS.inc.c"

ModelCollision AntLand_room4Platform_ColH = {
    8, 10, &AntLand_room4Platform_ColV[0], &AntLand_room4Platform_ColT[0], &AntLand_room4Platform_ColS
};

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.colS.inc.c"

ModelCollision AntLand_room4Floor_ColH = {
    13, 15, &AntLand_room4Floor_ColV[0], &AntLand_room4Floor_ColT[0], &AntLand_room4Floor_ColS
};

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.colS.inc.c"

ModelCollision AntLand_room6Floor_ColH = {
    28, 32, &AntLand_room6Floor_ColV[0], &AntLand_room6Floor_ColT[0], &AntLand_room6Floor_ColS
};

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.colS.inc.c"

ModelCollision AntLand_room8Floor_ColH = {
    21, 30, &AntLand_room8Floor_ColV[0], &AntLand_room8Floor_ColT[0], &AntLand_room8Floor_ColS
};

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.colS.inc.c"

ModelCollision AntLand_room17Floor_ColH = {
56, 80, &AntLand_room17Floor_ColV[0], &AntLand_room17Floor_ColT[0], &AntLand_room17Floor_ColS
};

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.colS.inc.c"

ModelCollision AntLand_room10Floor_ColH = {
53, 76, &AntLand_room10Floor_ColV[0], &AntLand_room10Floor_ColT[0], &AntLand_room10Floor_ColS
};

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.colS.inc.c"

ModelCollision AntLand_room10Platform1_ColH = {
8, 8, &AntLand_room10Platform1_ColV[0], &AntLand_room10Platform1_ColT[0], &AntLand_room10Platform1_ColS
};

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.colS.inc.c"

ModelCollision AntLand_room10Platform2_ColH = {
8, 8, &AntLand_room10Platform2_ColV[0], &AntLand_room10Platform2_ColT[0], &AntLand_room10Platform2_ColS
};

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.colS.inc.c"

ModelCollision AntLand_room10Platform3_ColH = {
8, 10, &AntLand_room10Platform3_ColV[0], &AntLand_room10Platform3_ColT[0], &AntLand_room10Platform3_ColS
};

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.colV.inc.c"

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.colT.inc.c"

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.colS.inc.c"

ModelCollision AntLand_room5Platform_ColH = {
16, 20, &AntLand_room5Platform_ColV[0], &AntLand_room5Platform_ColT[0], &AntLand_room5Platform_ColS
};

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.colV.inc.c"

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.colT.inc.c"

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.colS.inc.c"

ModelCollision AntLand_room13Platform_ColH = {
16, 20, &AntLand_room13Platform_ColV[0], &AntLand_room13Platform_ColT[0], &AntLand_room13Platform_ColS
};

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.colV.inc.c"

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.colT.inc.c"

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.colS.inc.c"

ModelCollision AntLand_room21Platform1_ColH = {
7, 6, &AntLand_room21Platform1_ColV[0], &AntLand_room21Platform1_ColT[0], &AntLand_room21Platform1_ColS
};

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.colV.inc.c"

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.colT.inc.c"

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.colS.inc.c"

ModelCollision AntLand_room21Platform2_ColH = {
7, 6, &AntLand_room21Platform2_ColV[0], &AntLand_room21Platform2_ColT[0], &AntLand_room21Platform2_ColS
};

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.colS.inc.c"

ModelCollision AntLand_room12Floor1_ColH = {
63, 94, &AntLand_room12Floor1_ColV[0], &AntLand_room12Floor1_ColT[0], &AntLand_room12Floor1_ColS
};

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.colS.inc.c"

ModelCollision AntLand_room12Floor2_ColH = {
13, 13, &AntLand_room12Floor2_ColV[0], &AntLand_room12Floor2_ColT[0], &AntLand_room12Floor2_ColS
};

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.colS.inc.c"

ModelCollision AntLand_room11Floor1_ColH = {
8, 8, &AntLand_room11Floor1_ColV[0], &AntLand_room11Floor1_ColT[0], &AntLand_room11Floor1_ColS
};

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.colS.inc.c"

ModelCollision AntLand_room11Floor2_ColH = {
8, 8, &AntLand_room11Floor2_ColV[0], &AntLand_room11Floor2_ColT[0], &AntLand_room11Floor2_ColS
};

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.colV.inc.c"

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.colT.inc.c"

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.colS.inc.c"

ModelCollision AntLand_room4Grate_ColH = {
4, 4, &AntLand_room4Grate_ColV[0], &AntLand_room4Grate_ColT[0], &AntLand_room4Grate_ColS
};

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.colS.inc.c"

ModelCollision AntLand_room7Floor_ColH = {
4, 2, &AntLand_room7Floor_ColV[0], &AntLand_room7Floor_ColT[0], &AntLand_room7Floor_ColS
};

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.colV.inc.c"

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.colT.inc.c"

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.colS.inc.c"

ModelCollision AntLand_room7Ceiling_ColH = {
4, 2, &AntLand_room7Ceiling_ColV[0], &AntLand_room7Ceiling_ColT[0], &AntLand_room7Ceiling_ColS
};

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.colS.inc.c"

ModelCollision AntLand_room15Floor_ColH = {
4, 2, &AntLand_room15Floor_ColV[0], &AntLand_room15Floor_ColT[0], &AntLand_room15Floor_ColS
};

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.colV.inc.c"

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.colT.inc.c"

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.colS.inc.c"

ModelCollision AntLand_room15Ceiling_ColH = {
4, 2, &AntLand_room15Ceiling_ColV[0], &AntLand_room15Ceiling_ColT[0], &AntLand_room15Ceiling_ColS
};

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.colS.inc.c"

ModelCollision AntLand_room8Floor1_ColH = {
10, 10, &AntLand_room8Floor1_ColV[0], &AntLand_room8Floor1_ColT[0], &AntLand_room8Floor1_ColS
};

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.colS.inc.c"

ModelCollision AntLand_room8Floor2_ColH = {
8, 8, &AntLand_room8Floor2_ColV[0], &AntLand_room8Floor2_ColT[0], &AntLand_room8Floor2_ColS
};

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.colS.inc.c"

ModelCollision AntLand_room0doorPillar1_ColH = {
6, 4, &AntLand_room0doorPillar1_ColV[0], &AntLand_room0doorPillar1_ColT[0], &AntLand_room0doorPillar1_ColS
};

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.colS.inc.c"

ModelCollision AntLand_room0doorPillar2_ColH = {
6, 4, &AntLand_room0doorPillar2_ColV[0], &AntLand_room0doorPillar2_ColT[0], &AntLand_room0doorPillar2_ColS
};

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.colS.inc.c"

ModelCollision AntLand_room0doorTop_ColH = {
8, 10, &AntLand_room0doorTop_ColV[0], &AntLand_room0doorTop_ColT[0], &AntLand_room0doorTop_ColS
};

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.colS.inc.c"

ModelCollision AntLand_room0doorTorchStand1_ColH = {
7, 6, &AntLand_room0doorTorchStand1_ColV[0], &AntLand_room0doorTorchStand1_ColT[0], &AntLand_room0doorTorchStand1_ColS
};

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.colS.inc.c"

ModelCollision AntLand_room0doorTorchStand2_ColH = {
7, 6, &AntLand_room0doorTorchStand2_ColV[0], &AntLand_room0doorTorchStand2_ColT[0], &AntLand_room0doorTorchStand2_ColS
};

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.colS.inc.c"

ModelCollision AntLand_room16Floor1_ColH = {
68, 106, &AntLand_room16Floor1_ColV[0], &AntLand_room16Floor1_ColT[0], &AntLand_room16Floor1_ColS
};

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.colS.inc.c"

ModelCollision AntLand_room16Floor2_ColH = {
12, 12, &AntLand_room16Floor2_ColV[0], &AntLand_room16Floor2_ColT[0], &AntLand_room16Floor2_ColS
};

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.colV.inc.c"

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.colT.inc.c"

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.colS.inc.c"

ModelCollision AntLand_room16Grate_ColH = {
4, 4, &AntLand_room16Grate_ColV[0], &AntLand_room16Grate_ColT[0], &AntLand_room16Grate_ColS
};

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.colV.inc.c"

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.colT.inc.c"

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.colS.inc.c"

ModelCollision AntLand_tiltPlatform_ColH = {
8, 12, &AntLand_tiltPlatform_ColV[0], &AntLand_tiltPlatform_ColT[0], &AntLand_tiltPlatform_ColS
};

#include "assets/levelGroup/AntLand/platform/platform.colV.inc.c"

#include "assets/levelGroup/AntLand/platform/platform.colT.inc.c"

#include "assets/levelGroup/AntLand/platform/platform.colS.inc.c"

ModelCollision AntLand_platform_ColH = {
8, 12, &AntLand_platform_ColV[0], &AntLand_platform_ColT[0], &AntLand_platform_ColS
};

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.colV.inc.c"

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.colT.inc.c"

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.colS.inc.c"

ModelCollision AntLand_movingPlatform_ColH = {
8, 12, &AntLand_movingPlatform_ColV[0], &AntLand_movingPlatform_ColT[0], &AntLand_movingPlatform_ColS
};

#include "assets/levelGroup/AntLand/quad/quad.colV.inc.c"

#include "assets/levelGroup/AntLand/quad/quad.colT.inc.c"

#include "assets/levelGroup/AntLand/quad/quad.colS.inc.c"

ModelCollision AntLand_quad_ColH = {
4, 2, &AntLand_quad_ColV[0], &AntLand_quad_ColT[0], &AntLand_quad_ColS
};

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.colV.inc.c"

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.colT.inc.c"

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.colS.inc.c"

ModelCollision AntLand_fixedCamPillar_ColH = {
    8, 8, &AntLand_fixedCamPillar_ColV[0], &AntLand_fixedCamPillar_ColT[0], &AntLand_fixedCamPillar_ColS
};

s32 alignment_Pad[] = {0, 0};

Mtx AntLand_IMtx64 = IDENTITY;

#include "assets/levelGroup/AntLand/alScope2.light.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx.vtx.inc.c"
Mtx AntLand_IMtx65 = IDENTITY;
unsigned char AntLand_Pad44[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowAntEye_ci8_PNG[] = {
#include "build/assets/levelGroup/AntLand/yellowAnt_yellowAntEye.ci8.png.inc.c"
};
unsigned char AntLand_Pad45[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowAntEye_ci8_PAL[] = {
#include "build/assets/levelGroup/AntLand/yellowAnt_yellowAntEye.ci8.pal.inc.c"
};
unsigned char AntLand_Pad46[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowEyeColor_ci4_PNG[] = {
#include "build/assets/levelGroup/AntLand/yellowAnt_yellowEyeColor.ci4.png.inc.c"
};
unsigned char AntLand_Pad47[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowEyeColor_ci4_PAL[] = {
#include "build/assets/levelGroup/AntLand/yellowAnt_yellowEyeColor.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/yellowAnt_gfx.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx2.vtx.inc.c"
Mtx AntLand_IMtx66 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx2.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx3.vtx.inc.c"
Mtx AntLand_IMtx67 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx3.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx4.vtx.inc.c"
Mtx AntLand_IMtx68 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx4.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx5.vtx.inc.c"
Mtx AntLand_IMtx69 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx5.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx6.vtx.inc.c"
Mtx AntLand_IMtx70 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx6.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx7.vtx.inc.c"
Mtx AntLand_IMtx71 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx7.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx8.vtx.inc.c"
Mtx AntLand_IMtx72 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx8.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx9.vtx.inc.c"
Mtx AntLand_IMtx73 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx9.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx10.vtx.inc.c"
Mtx AntLand_IMtx74 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx10.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx11.vtx.inc.c"
Mtx AntLand_IMtx75 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx11.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx12.vtx.inc.c"
Mtx AntLand_IMtx76 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx12.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx13.vtx.inc.c"
Mtx AntLand_IMtx77 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx13.gfx.inc.c"
Mtx AntLand_IMtx78 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx14.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAntAnim/yellowAntAnim.animH.inc.c"

#include "assets/levelGroup/AntLand/yellowAntAnim/yellowAntAnim.animArr.inc.c"

#include "assets/levelGroup/AntLand/yellowAntAnim/yellowAntAnimPointers.animP.inc.c"