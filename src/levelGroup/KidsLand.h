#ifndef KIDSLAND_H
#define KIDSLAND_H

#include "common.h"

extern unsigned char Global_rainbow_ci8_PNG[];
extern unsigned char Global_rainbow_ci8_PAL[];
extern unsigned char Global_KLFloor_ci4_PNG[];
extern unsigned char Global_KLFloor_ci4_PAL[];
extern unsigned char Global_KLFloor2_ci4_PNG[];
extern unsigned char Global_KLFloor2_ci4_PAL[];
extern unsigned char Global_klTILE_ci4_PNG[];
extern unsigned char Global_klTILE_ci4_PAL[];
extern unsigned char Global_KLFloor3_ci4_PNG[];
extern unsigned char Global_KLFloor3_ci4_PAL[];
extern unsigned char Global_blueBrickFade_ci8_PNG[];
extern unsigned char Global_blueBrickFade_ci8_PAL[];
extern unsigned char Global_blueBrick_ci4_PNG[];
extern unsigned char Global_blueBrick_ci4_PAL[];
extern unsigned char Global_blueLego_ci4_PNG[];
extern unsigned char Global_blueLego_ci4_PAL[];
extern unsigned char Global_orangeBrick_ci4_PNG[];
extern unsigned char Global_orangeBrick_ci4_PAL[];
extern unsigned char Global_KLOrangeBrickFade_ci8_PNG[];
extern unsigned char Global_KLOrangeBrickFade_ci8_PAL[];
extern unsigned char Global_cracker_ci4_PNG[];
extern unsigned char Global_cracker_ci4_PAL[];
extern unsigned char Global_KLCrackerFade_ci8_PNG[];
extern unsigned char Global_KLCrackerFade_ci8_PAL[];
extern unsigned char Global_sandwSide_ci4_PNG[];
extern unsigned char Global_sandwSide_ci4_PAL[];
extern unsigned char Global_orangeLego_ci4_PNG[];
extern unsigned char Global_orangeLego_ci4_PAL[];
extern unsigned char Global_gateCompressed_ci8_PNG[];
extern unsigned char Global_gateCompressed_ci8_PAL[];
extern unsigned char Global_giftSide_ci4_PNG[];
extern unsigned char Global_giftSide_ci4_PAL[];
extern unsigned char Global_giftTop_ci4_PNG[];
extern unsigned char Global_giftTop_ci4_PAL[];
extern unsigned char Global_justBlack_ci4_PNG[];
extern unsigned char Global_justBlack_ci4_PAL[];
extern unsigned char Global_chocoKidsLabel_ci4_PNG[];
extern unsigned char Global_chocoKidsLabel_ci4_PAL[];
extern unsigned char Global_chocoKIDS_ci8_PNG[];
extern unsigned char Global_chocoKIDS_ci8_PAL[];
extern unsigned char Global_waferSide_ci4_PNG[];
extern unsigned char Global_waferSide_ci4_PAL[];
extern unsigned char Global_KLThing1_ci4_PNG[];
extern unsigned char Global_KLThing1_ci4_PAL[];

enum KidsLand_Models {
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
    KL_POLE_MODEL = 118
};

#include "global_models.h"
extern Gfx KidsLand_model1_Gfx[];
extern ModelCollision KidsLand_unkCol1_collision;
extern Gfx KidsLand_model2_Gfx[];
extern ModelCollision KidsLand_unkCol2_collision;
extern Gfx KidsLand_model3_Gfx[];
extern ModelCollision KidsLand_unkCol3_collision;
extern Gfx KidsLand_model4_Gfx[];
extern ModelCollision KidsLand_unkCol4_collision;
extern Gfx KidsLand_model5_Gfx[];
extern ModelCollision KidsLand_unkCol5_collision;
extern Gfx KidsLand_model6_Gfx[];
extern ModelCollision KidsLand_unkCol6_collision;
extern Gfx KidsLand_model7_Gfx[];
extern ModelCollision KidsLand_unkCol7_collision;
extern Gfx KidsLand_model8_Gfx[];
extern ModelCollision KidsLand_unkCol8_collision;
extern Gfx KidsLand_model9_Gfx[];
extern ModelCollision KidsLand_unkCol9_collision;
extern Gfx KidsLand_model10_Gfx[];
extern ModelCollision KidsLand_unkCol10_collision;
extern Gfx KidsLand_model11_Gfx[];
extern ModelCollision KidsLand_unkCol11_collision;
extern Gfx KidsLand_model12_Gfx[];
extern ModelCollision KidsLand_unkCol12_collision;
extern Gfx KidsLand_model13_Gfx[];
extern ModelCollision KidsLand_unkCol13_collision;
extern Gfx KidsLand_model14_Gfx[];
extern ModelCollision KidsLand_unkCol14_collision;
extern Gfx KidsLand_model15_Gfx[];
extern ModelCollision KidsLand_unkCol15_collision;
extern Gfx KidsLand_model16_Gfx[];
extern ModelCollision KidsLand_unkCol16_collision;
extern Gfx KidsLand_model17_Gfx[];
extern ModelCollision KidsLand_unkCol17_collision;
extern Gfx KidsLand_model18_Gfx[];
extern ModelCollision KidsLand_unkCol18_collision;
extern Gfx KidsLand_model19_Gfx[];
extern ModelCollision KidsLand_unkCol19_collision;
extern Gfx KidsLand_model20_Gfx[];
extern ModelCollision KidsLand_unkCol20_collision;
extern Gfx KidsLand_model21_Gfx[];
extern ModelCollision KidsLand_unkCol21_collision;
extern Gfx KidsLand_model22_Gfx[];
extern ModelCollision KidsLand_unkCol22_collision;
extern Gfx KidsLand_model23_Gfx[];
extern ModelCollision KidsLand_unkCol23_collision;
extern Gfx KidsLand_model24_Gfx[];
extern ModelCollision KidsLand_unkCol24_collision;
extern Gfx KidsLand_model25_Gfx[];
extern ModelCollision KidsLand_unkCol25_collision;
extern Gfx KidsLand_model26_Gfx[];
extern ModelCollision KidsLand_unkCol26_collision;
extern Gfx KidsLand_model27_Gfx[];
extern ModelCollision KidsLand_unkCol27_collision;
extern Gfx KidsLand_model28_Gfx[];
extern ModelCollision KidsLand_unkCol28_collision;
extern Gfx KidsLand_model29_Gfx[];
extern ModelCollision KidsLand_unkCol29_collision;
extern Gfx KidsLand_model30_Gfx[];
extern ModelCollision KidsLand_unkCol30_collision;
extern Gfx KidsLand_model31_Gfx[];
extern ModelCollision KidsLand_unkCol31_collision;
extern Gfx KidsLand_model32_Gfx[];
extern ModelCollision KidsLand_unkCol32_collision;
extern Gfx KidsLand_model33_Gfx[];
extern ModelCollision KidsLand_unkCol33_collision;
extern Gfx KidsLand_model34_Gfx[];
extern ModelCollision KidsLand_unkCol34_collision;
extern Gfx KidsLand_model35_Gfx[];
extern ModelCollision KidsLand_unkCol35_collision;
extern Gfx KidsLand_model36_Gfx[];
extern ModelCollision KidsLand_unkCol36_collision;
extern Gfx KidsLand_model37_Gfx[];
extern ModelCollision KidsLand_unkCol37_collision;
extern Gfx KidsLand_model38_Gfx[];
extern ModelCollision KidsLand_unkCol38_collision;
extern Gfx KidsLand_model39_Gfx[];
extern ModelCollision KidsLand_unkCol39_collision;
extern Gfx KidsLand_model40_Gfx[];
extern ModelCollision KidsLand_unkCol40_collision;
extern Gfx KidsLand_model41_Gfx[];
extern ModelCollision KidsLand_unkCol41_collision;
extern Gfx KidsLand_model42_Gfx[];
extern ModelCollision KidsLand_unkCol42_collision;
extern Gfx KidsLand_model43_Gfx[];
extern ModelCollision KidsLand_unkCol43_collision;
extern Gfx KidsLand_model44_Gfx[];
extern ModelCollision KidsLand_unkCol44_collision;
extern Gfx KidsLand_model45_Gfx[];
extern ModelCollision KidsLand_unkCol45_collision;
extern Gfx KidsLand_model46_Gfx[];
extern ModelCollision KidsLand_unkCol46_collision;
extern Gfx KidsLand_model47_Gfx[];
extern ModelCollision KidsLand_unkCol47_collision;
extern Gfx KidsLand_model48_Gfx[];
extern ModelCollision KidsLand_unkCol48_collision;
extern Gfx KidsLand_model49_Gfx[];
extern ModelCollision KidsLand_unkCol49_collision;
extern Gfx KidsLand_model50_Gfx[];
extern ModelCollision KidsLand_unkCol50_collision;
extern Gfx KidsLand_model51_Gfx[];
extern ModelCollision KidsLand_unkCol51_collision;
extern Gfx KidsLand_model52_Gfx[];
extern ModelCollision KidsLand_unkCol52_collision;
extern Gfx KidsLand_model53_Gfx[];
extern ModelCollision KidsLand_unkCol53_collision;
extern Gfx KidsLand_model54_Gfx[];
extern ModelCollision KidsLand_unkCol54_collision;
extern Gfx KidsLand_model55_Gfx[];
extern ModelCollision KidsLand_unkCol55_collision;
extern Gfx KidsLand_model56_Gfx[];
extern ModelCollision KidsLand_unkCol56_collision;
extern Gfx KidsLand_model57_Gfx[];
extern ModelCollision KidsLand_unkCol57_collision;
extern Gfx KidsLand_model58_Gfx[];
extern ModelCollision KidsLand_unkCol58_collision;
extern Gfx KidsLand_model59_Gfx[];
extern ModelCollision KidsLand_unkCol59_collision;
extern Gfx KidsLand_model60_Gfx[];
extern ModelCollision KidsLand_unkCol60_collision;
extern Gfx KidsLand_model61_Gfx[];
extern ModelCollision KidsLand_unkCol61_collision;
extern Gfx KidsLand_model62_Gfx[];
extern ModelCollision KidsLand_unkCol62_collision;
extern Gfx KidsLand_model63_Gfx[];
extern ModelCollision KidsLand_unkCol63_collision;
extern Gfx KidsLand_model64_Gfx[];
extern ModelCollision KidsLand_unkCol64_collision;
extern Gfx KidsLand_model65_Gfx[];
extern ModelCollision KidsLand_unkCol65_collision;
extern Gfx KidsLand_model66_Gfx[];
extern ModelCollision KidsLand_unkCol66_collision;
extern Gfx KidsLand_model67_Gfx[];
extern ModelCollision KidsLand_unkCol67_collision;
extern Gfx KidsLand_model68_Gfx[];
extern ModelCollision KidsLand_unkCol68_collision;
extern Gfx KidsLand_model69_Gfx[];
extern ModelCollision KidsLand_unkCol69_collision;
extern Gfx KidsLand_model70_Gfx[];
extern ModelCollision KidsLand_unkCol70_collision;
extern Gfx KidsLand_model71_Gfx[];
extern ModelCollision KidsLand_unkCol71_collision;
extern Gfx KidsLand_model72_Gfx[];
extern ModelCollision KidsLand_unkCol72_collision;
extern Gfx KidsLand_model73_Gfx[];
extern ModelCollision KidsLand_unkCol73_collision;
extern Gfx KidsLand_model74_Gfx[];
extern ModelCollision KidsLand_unkCol74_collision;
extern Gfx KidsLand_model75_Gfx[];
extern ModelCollision KidsLand_unkCol75_collision;
extern Gfx KidsLand_model76_Gfx[];
extern ModelCollision KidsLand_unkCol76_collision;
extern Gfx KidsLand_model77_Gfx[];
extern ModelCollision KidsLand_unkCol77_collision;
extern Gfx KidsLand_model78_Gfx[];
extern ModelCollision KidsLand_unkCol78_collision;
extern Gfx KidsLand_model79_Gfx[];
extern ModelCollision KidsLand_unkCol79_collision;
extern Gfx KidsLand_model80_Gfx[];
extern ModelCollision KidsLand_unkCol80_collision;
extern Gfx KidsLand_model81_Gfx[];
extern ModelCollision KidsLand_unkCol81_collision;
extern Gfx Global_pole_Gfx[];
extern ModelCollision Global_pole_collision;


#endif
