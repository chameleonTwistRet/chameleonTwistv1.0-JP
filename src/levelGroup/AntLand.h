#ifndef ANTLAND_H
#define ANTLAND_H

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

#include "global_models.h"

extern Gfx AntLand_exit2_Gfx[];
extern ModelCollision AntLand_exit2_collision;
extern Gfx AntLand_exit3_Gfx[];
extern ModelCollision AntLand_exit3_collision;
extern Gfx AntLand_exit4_Gfx[];
extern ModelCollision AntLand_exit4_collision;
extern Gfx AntLand_room0_Gfx[];
extern ModelCollision AntLand_room0_collision;
extern Gfx AntLand_room1_Gfx[];
extern ModelCollision AntLand_room1_collision;
extern Gfx AntLand_room2_Gfx[];
extern ModelCollision AntLand_room2_collision;
extern Gfx AntLand_room14_Gfx[];
extern ModelCollision AntLand_room14_collision;
extern Gfx AntLand_room4_Gfx[];
extern ModelCollision AntLand_room4_collision;
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
extern ModelCollision AntLand_room10_collision;
extern Gfx AntLand_room11_Gfx[];
extern ModelCollision AntLand_room11_collision;
extern Gfx AntLand_room12_Gfx[];
extern ModelCollision AntLand_room12_collision;
extern Gfx AntLand_room13_Gfx[];
extern ModelCollision AntLand_room13_collision;
extern Gfx AntLand_room3_Gfx[];
extern ModelCollision AntLand_room3_collision;
extern Gfx AntLand_room17_Gfx[];
extern ModelCollision AntLand_room17_collision;
extern Gfx AntLand_room15_Gfx[];
extern ModelCollision AntLand_room15_collision;
extern Gfx AntLand_room18_Gfx[];
extern ModelCollision AntLand_room18_collision;
extern Gfx AntLand_room16_Gfx[];
extern ModelCollision AntLand_room16_collision;
extern Gfx AntLand_room20_Gfx[];
extern ModelCollision AntLand_room20_collision;
extern Gfx AntLand_room21_Gfx[];
extern ModelCollision AntLand_room21_collision;
extern Gfx AntLand_room4Platform_Gfx[];
extern ModelCollision AntLand_room4Platform_collision;
extern Gfx AntLand_room4Floor_Gfx[];
extern ModelCollision AntLand_room4Floor_collision;
extern Gfx AntLand_room6Floor_Gfx[];
extern ModelCollision AntLand_room6Floor_collision;
extern Gfx AntLand_room8Floor_Gfx[];
extern ModelCollision AntLand_room8Floor_collision;
extern Gfx AntLand_room17Floor_Gfx[];
extern ModelCollision AntLand_room17Floor_collision;
extern Gfx AntLand_room10Floor_Gfx[];
extern ModelCollision AntLand_room10Floor_collision;
extern Gfx AntLand_room10Platform1_Gfx[];
extern ModelCollision AntLand_room10Platform1_collision;
extern Gfx AntLand_room10Platform2_Gfx[];
extern ModelCollision AntLand_room10Platform2_collision;
extern Gfx AntLand_room10Platform3_Gfx[];
extern ModelCollision AntLand_room10Platform3_collision;
extern Gfx AntLand_room5Platform_Gfx[];
extern ModelCollision AntLand_room5Platform_collision;
extern Gfx AntLand_room13Platform_Gfx[];
extern ModelCollision AntLand_room13Platform_collision;
extern Gfx AntLand_room21Platform1_Gfx[];
extern ModelCollision AntLand_room21Platform1_collision;
extern Gfx AntLand_room21Platform2_Gfx[];
extern ModelCollision AntLand_room21Platform2_collision;
extern Gfx AntLand_room12Floor1_Gfx[];
extern ModelCollision AntLand_room12Floor1_collision;
extern Gfx AntLand_room12Floor2_Gfx[];
extern ModelCollision AntLand_room12Floor2_collision;
extern Gfx AntLand_room11Floor1_Gfx[];
extern ModelCollision AntLand_room11Floor1_collision;
extern Gfx AntLand_room11Floor2_Gfx[];
extern ModelCollision AntLand_room11Floor2_collision;
extern Gfx AntLand_room4Grate_Gfx[];
extern ModelCollision AntLand_room4Grate_collision;
extern Gfx AntLand_room7Floor_Gfx[];
extern ModelCollision AntLand_room7Floor_collision;
extern Gfx AntLand_room7Ceiling_Gfx[];
extern ModelCollision AntLand_room7Ceiling_collision;
extern Gfx AntLand_room15Floor_Gfx[];
extern ModelCollision AntLand_room15Floor_collision;
extern Gfx AntLand_room15Ceiling_Gfx[];
extern ModelCollision AntLand_room15Ceiling_collision;
extern Gfx AntLand_room8Floor1_Gfx[];
extern ModelCollision AntLand_room8Floor1_collision;
extern Gfx AntLand_room8Floor2_Gfx[];
extern ModelCollision AntLand_room8Floor2_collision;
extern Gfx AntLand_room0doorPillar1_Gfx[];
extern ModelCollision AntLand_room0doorPillar1_collision;
extern Gfx AntLand_room0doorPillar2_Gfx[];
extern ModelCollision AntLand_room0doorPillar2_collision;
extern Gfx AntLand_room0doorTop_Gfx[];
extern ModelCollision AntLand_room0doorTop_collision;
extern Gfx AntLand_room0doorTorchStand1_Gfx[];
extern ModelCollision AntLand_room0doorTorchStand1_collision;
extern Gfx AntLand_room0doorTorchStand2_Gfx[];
extern ModelCollision AntLand_room0doorTorchStand2_collision;
extern Gfx AntLand_room16Floor1_Gfx[];
extern ModelCollision AntLand_room16Floor1_collision;
extern Gfx AntLand_room16Floor2_Gfx[];
extern ModelCollision AntLand_room16Floor2_collision;
extern Gfx AntLand_room16Grate_Gfx[];
extern ModelCollision AntLand_room16Grate_collision;
extern Gfx AntLand_tiltPlatform_Gfx[];
extern ModelCollision AntLand_tiltPlatform_collision;
extern Gfx AntLand_platform_Gfx[];
extern ModelCollision AntLand_platform_collision;
extern Gfx AntLand_movingPlatform_Gfx[];
extern ModelCollision AntLand_movingPlatform_collision;
extern Gfx AntLand_quad_Gfx[];
extern ModelCollision AntLand_quad_collision;
extern Gfx AntLand_fixedCamPillar_Gfx[];
extern ModelCollision AntLand_fixedCamPillar_collision;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_collision;

#endif
