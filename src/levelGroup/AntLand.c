#include "common.h"
#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to split useless files
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

extern Mtx D_80129730_AntLand; //s
extern Mtx D_80129770_AntLand; //s
extern Mtx D_801297B0_AntLand; //s
extern Mtx D_801297F0_AntLand; //s
extern Mtx D_80129830_AntLand; //s
extern Mtx D_80129870_AntLand; //s
extern Mtx D_801298B0_AntLand; //s
extern Mtx D_801298F0_AntLand; //s
extern Mtx D_80129930_AntLand; //s
extern Mtx D_80129970_AntLand; //s
extern Mtx D_801299B0_AntLand; //s
extern Mtx D_801299F0_AntLand; //s
extern Mtx D_80129A30_AntLand; //s

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
extern Gfx AntLand_gfx_Gfx[];
extern CollisionData AntLand_unkCol1_ColH;
extern Gfx AntLand_gfx2_Gfx[];
extern CollisionData AntLand_unkCol2_ColH;
extern Gfx AntLand_gfx3_Gfx[];
extern CollisionData AntLand_unkCol3_ColH;
extern Gfx AntLand_gfx4_Gfx[];
extern CollisionData AntLand_unkCol4_ColH;
extern Gfx AntLand_gfx5_Gfx[];
extern CollisionData AntLand_unkCol5_ColH;
extern Gfx AntLand_gfx6_Gfx[];
extern CollisionData AntLand_unkCol6_ColH;
extern Gfx AntLand_gfx7_Gfx[];
extern CollisionData AntLand_unkCol7_ColH;
extern Gfx AntLand_gfx8_Gfx[];
extern CollisionData AntLand_unkCol8_ColH;
extern Gfx AntLand_gfx9_Gfx[];
extern CollisionData AntLand_unkCol9_ColH;
extern Gfx AntLand_gfx10_Gfx[];
extern CollisionData AntLand_unkColA_ColH;
extern Gfx AntLand_gfx11_Gfx[];
extern CollisionData AntLand_unkColB_ColH;
extern Gfx AntLand_gfx12_Gfx[];
extern CollisionData AntLand_unkColC_ColH;
extern Gfx AntLand_gfx13_Gfx[];
extern CollisionData AntLand_unkColD_ColH;
extern Gfx AntLand_gfx14_Gfx[];
extern CollisionData AntLand_unkColE_ColH;
extern Gfx AntLand_gfx15_Gfx[];
extern CollisionData AntLand_unkCo3A_ColH;
extern Gfx AntLand_gfx16_Gfx[];
extern CollisionData AntLand_unkColF_ColH;
extern Gfx AntLand_gfx17_Gfx[];
extern CollisionData AntLand_unkCol10_ColH;
extern Gfx AntLand_gfx18_Gfx[];
extern CollisionData AntLand_unkCol11_ColH;
extern Gfx AntLand_gfx19_Gfx[];
extern CollisionData AntLand_unkCol12_ColH;
extern Gfx AntLand_gfx20_Gfx[];
extern CollisionData AntLand_unkCol13_ColH;
extern Gfx AntLand_gfx21_Gfx[];
extern CollisionData AntLand_unkCol14_ColH;
extern Gfx AntLand_gfx22_Gfx[];
extern CollisionData AntLand_unkCol15_ColH;
extern Gfx AntLand_gfx23_Gfx[];
extern CollisionData AntLand_unkCol16_ColH;
extern Gfx AntLand_gfx24_Gfx[];
extern CollisionData AntLand_unkCol17_ColH;
extern Gfx AntLand_gfx25_Gfx[];
extern CollisionData AntLand_unkCol18_ColH;
extern Gfx AntLand_gfx26_Gfx[];
extern CollisionData AntLand_unkCol19_ColH;
extern Gfx AntLand_gfx27_Gfx[];
extern CollisionData AntLand_unkCol1A_ColH;
extern Gfx AntLand_gfx28_Gfx[];
extern CollisionData AntLand_unkCol1B_ColH;
extern Gfx AntLand_gfx29_Gfx[];
extern CollisionData AntLand_unkCol1C_ColH;
extern Gfx AntLand_gfx30_Gfx[];
extern CollisionData AntLand_unkCol1D_ColH;
extern Gfx AntLand_gfx31_Gfx[];
extern CollisionData AntLand_unkCol1E_ColH;
extern Gfx AntLand_gfx32_Gfx[];
extern CollisionData AntLand_unkCol1F_ColH;
extern Gfx AntLand_gfx33_Gfx[];
extern CollisionData AntLand_unkCol20_ColH;
extern Gfx AntLand_gfx34_Gfx[];
extern CollisionData AntLand_unkCol21_ColH;
extern Gfx AntLand_gfx35_Gfx[];
extern CollisionData AntLand_unkCol22_ColH;
extern Gfx AntLand_gfx36_Gfx[];
extern CollisionData AntLand_unkCol23_ColH;
extern Gfx AntLand_gfx37_Gfx[];
extern CollisionData AntLand_unkCol24_ColH;
extern Gfx AntLand_gfx38_Gfx[];
extern CollisionData AntLand_unkCol25_ColH;
extern Gfx AntLand_gfx39_Gfx[];
extern CollisionData AntLand_unkCol26_ColH;
extern Gfx AntLand_gfx40_Gfx[];
extern CollisionData AntLand_unkCol27_ColH;
extern Gfx AntLand_gfx41_Gfx[];
extern CollisionData AntLand_unkCol28_ColH;
extern Gfx AntLand_gfx42_Gfx[];
extern CollisionData AntLand_unkCol29_ColH;
extern Gfx AntLand_gfx43_Gfx[];
extern CollisionData AntLand_unkCol2A_ColH;
extern Gfx AntLand_gfx44_Gfx[];
extern CollisionData AntLand_unkCol2B_ColH;
extern Gfx AntLand_gfx45_Gfx[];
extern CollisionData AntLand_unkCol2C_ColH;
extern Gfx AntLand_gfx46_Gfx[];
extern CollisionData AntLand_unkCol2D_ColH;
extern Gfx AntLand_gfx47_Gfx[];
extern CollisionData AntLand_unkCol2E_ColH;
extern Gfx AntLand_gfx48_Gfx[];
extern CollisionData AntLand_unkCol2F_ColH;
extern Gfx AntLand_gfx49_Gfx[];
extern CollisionData AntLand_unkCol30_ColH;
extern Gfx AntLand_gfx50_Gfx[];
extern CollisionData AntLand_unkCol31_ColH;
extern Gfx AntLand_gfx51_Gfx[];
extern CollisionData AntLand_unkCol32_ColH;
extern Gfx AntLand_gfx52_Gfx[];
extern CollisionData AntLand_unkCol33_ColH;
extern Gfx AntLand_gfx53_Gfx[];
extern CollisionData AntLand_unkCol34_ColH;
extern Gfx AntLand_gfx54_Gfx[];
extern CollisionData AntLand_unkCol35_ColH;
extern Gfx AntLand_gfx55_Gfx[];
extern CollisionData AntLand_unkCol36_ColH;
extern Gfx AntLand_gfx56_Gfx[];
extern CollisionData AntLand_unkCol37_ColH;
extern Gfx AntLand_gfx57_Gfx[];
extern CollisionData AntLand_unkCol38_ColH;
extern Gfx AntLand_gfx58_Gfx[];
extern CollisionData AntLand_unkCol39_ColH;
extern Gfx AntLand_gfx59_Gfx[];
extern CollisionData AntLand_unkCol3B_ColH;
extern Gfx AntLand_gfx60_Gfx[];
extern CollisionData AntLand_unkCol3C_ColH;
extern Gfx AntLand_gfx61_Gfx[];
extern CollisionData AntLand_unkCol3E_ColH;
extern Gfx Global_unk_Gfx[];
extern CollisionData Global_unkCol2_ColH;

Mtx_f AntLand_IMtx1 = IDENTITY;

#include "assets/levelGroup/AntLand/pointers.lvp.inc.c"
unsigned char AntLand_rabobjects_Bin[] = {
#include "build/include/assets/levelGroup/AntLand/rabobjects.inc.c"
};

#include "assets/levelGroup/AntLand/roomObjects/room0_obj0.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room0_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room1_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room1_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room1_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room1_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room1_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room2_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room2_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room2_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room2_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room2_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room3_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_act5.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_act6.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_act7.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room3_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/newType/g1.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g2.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g3.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g4.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g5.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g6.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g7.ut1.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj17.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_obj18.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room20_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room20_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room20_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room4_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room4_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room4_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/newType/g8.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g9.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g10.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g11.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g12.ut1.inc.c"

#include "assets/levelGroup/AntLand/newType/g13.ut1.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room5_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room5_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room5_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room5_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room5_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room5_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room6_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room6_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room6_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room7_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj17.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj18.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj19.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj20.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_obj21.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room8_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act5.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act6.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act7.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act8.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act9.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act10.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act11.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act12.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act13.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act14.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act15.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act16.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act17.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_act18.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room8_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room9_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act5.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act6.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act7.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_act8.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room9_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj17.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj18.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj19.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj20.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj21.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj22.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj23.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj24.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_obj25.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room10_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room10_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room10_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room11_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj17.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj18.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj19.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_obj20.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room12_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room12_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room12_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room13_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_act5.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_act6.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_act7.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room13_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj17.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj18.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj19.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj20.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj21.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj22.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj23.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj24.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj25.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_obj26.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room14_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act5.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act6.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act7.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act8.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act9.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act10.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_act11.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room14_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room21_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room15_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/roomUnk3_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj17.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj18.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj19.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj20.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_obj21.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room16_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room16_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room16_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room16_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj11.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj12.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj13.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj14.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj15.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj16.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj17.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj18.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj19.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj20.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj21.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_obj22.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room17_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room17_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room17_act2.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room17_act3.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room17_act4.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room17_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj3.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj4.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj5.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj6.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj7.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj8.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj9.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_obj10.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room18_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room19_obj1.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room19_obj2.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomObjects/room19_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room19_act1.roomAct.inc.c"

#include "assets/levelGroup/AntLand/roomActors/room19_actSTOP.roomAct.inc.c"
unsigned char AntLand_idkType1_Bin[] = {
#include "build/include/assets/levelGroup/AntLand/newType/idkType1.inc.c"
};

#include "assets/levelGroup/AntLand/spriteActors/room0_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room0_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room0_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room0_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room0_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room0_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room0_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room0_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr17.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_spr18.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room1_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room2_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr17.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr18.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr19.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr20.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr21.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr22.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr23.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_spr24.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room3_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room4_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room5_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room6_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr17.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr18.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr19.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr20.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr21.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr22.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr23.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_spr24.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room8_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room9_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room10_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room11_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room12_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room13_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr17.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr18.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr19.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr20.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr21.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr22.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr23.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr24.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr25.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr26.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr27.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr28.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr29.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_spr30.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room14_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room16_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr17.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr18.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr19.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_spr20.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room17_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room18_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room18_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr1.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr2.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr3.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr4.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr5.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr6.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr7.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr8.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr9.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr10.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr11.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr12.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr13.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr14.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr15.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr16.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr17.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_spr18.sprite.inc.c"

#include "assets/levelGroup/AntLand/spriteActors/room20_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/AntLand/collectables/room0_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room0_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room0_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room1_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room1_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room2_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room3_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room3_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room20_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room20_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room20_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room20_clct4.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room20_clct5.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room20_clct6.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room20_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room5_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room5_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room5_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room6_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room6_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room6_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room6_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room8_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room8_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room8_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room8_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room9_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room9_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room9_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room10_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room10_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room10_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room10_clct4.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room10_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room11_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room11_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room11_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room12_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room12_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room12_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/roomUnk4_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/roomUnk4_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/roomUnk4_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clct4.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clct5.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clct6.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clct7.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room21_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room16_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room16_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room16_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room16_clct4.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room16_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room17_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room17_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room17_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room17_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room18_clct1.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room18_clct2.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room18_clct3.clct.inc.c"

#include "assets/levelGroup/AntLand/collectables/room18_clctSTOP.clct.inc.c"

#include "assets/levelGroup/AntLand/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room2.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room3.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room4.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room5.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room6.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room7.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room8.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room9.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room10.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room11.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room12.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room13.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room14.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room15.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room16.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room17.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room18.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room19.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room20.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/room21.rmSet.inc.c"

#include "assets/levelGroup/AntLand/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/AntLand/map.lvmM.inc.c"

#include "assets/levelGroup/AntLand/map.lvmH.inc.c"

#include "assets/levelGroup/AntLand/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/AntLand/scope.lvlScope.inc.c"

#include "assets/levelGroup/AntLand/header.lvlHdr.inc.c"
Mtx_f AntLand_IMtx2 = IDENTITY;

#include "assets/levelGroup/AntLand/alScope.light.inc.c"

#include "assets/levelGroup/AntLand/vtx.vtx.inc.c"
Mtx_f AntLand_IMtx3 = IDENTITY;
unsigned char AntLand_Pad1[] = FILEPAD;
unsigned char AntLand_antWallw_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/antWallw.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx2.vtx.inc.c"
Mtx_f AntLand_IMtx4 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx2.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx3.vtx.inc.c"
Mtx_f AntLand_IMtx5 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx3.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx4.vtx.inc.c"
Mtx_f AntLand_IMtx6 = IDENTITY;
unsigned char AntLand_Pad2[] = FILEPAD;
unsigned char AntLand_antWallShine1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/antWallShine1.ci4.png.inc.c"
};
unsigned char AntLand_Pad3[] = FILEPAD;
unsigned char AntLand_antWallShine1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/antWallShine1.ci4.pal.inc.c"
};
unsigned char AntLand_Pad4[] = FILEPAD;
unsigned char AntLand_antWallShine2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/antWallShine2.ci4.png.inc.c"
};
unsigned char AntLand_Pad5[] = FILEPAD;
unsigned char AntLand_antWallShine2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/antWallShine2.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx4.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx5.vtx.inc.c"
Mtx_f AntLand_IMtx7 = IDENTITY;
unsigned char AntLand_Pad6[] = FILEPAD;
unsigned char AntLand_antWalli4_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/antWalli4.i4.png.inc.c"
};
unsigned char AntLand_Pad7[] = FILEPAD;
unsigned char AntLand_gooinga_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/gooinga.i4.png.inc.c"
};
unsigned char AntLand_Pad8[] = FILEPAD;
unsigned char AntLand_AntshineWall3_ci8_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/AntshineWall3.ci8.png.inc.c"
};
unsigned char AntLand_Pad9[] = FILEPAD;
unsigned char AntLand_AntshineWall3_ci8_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/AntshineWall3.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx5.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx6.vtx.inc.c"
Mtx_f AntLand_IMtx8 = IDENTITY;
unsigned char AntLand_Pad10[] = FILEPAD;
unsigned char AntLand_horror_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/horror.i4.png.inc.c"
};
unsigned char AntLand_Pad11[] = FILEPAD;
unsigned char AntLand_antMural1_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/antMural1.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx6.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx7.vtx.inc.c"
Mtx_f AntLand_IMtx9 = IDENTITY;
unsigned char AntLand_Pad12[] = FILEPAD;
unsigned char AntLand_AlShinewall2_ci8_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/AlShinewall2.ci8.png.inc.c"
};
unsigned char AntLand_Pad13[] = FILEPAD;
unsigned char AntLand_AlShinewall2_ci8_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/AlShinewall2.ci8.pal.inc.c"
};
unsigned char AntLand_Pad14[] = FILEPAD;
unsigned char AntLand_wallawalwal_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/wallawalwal.ci4.png.inc.c"
};
unsigned char AntLand_Pad15[] = FILEPAD;
unsigned char AntLand_wallawalwal_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/wallawalwal.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx7.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx8.vtx.inc.c"
Mtx_f AntLand_IMtx10 = IDENTITY;
unsigned char AntLand_Pad16[] = FILEPAD;
unsigned char AntLand_ALWall2_ci8_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/ALWall2.ci8.png.inc.c"
};
unsigned char AntLand_Pad17[] = FILEPAD;
unsigned char AntLand_ALWall2_ci8_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/ALWall2.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx8.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx9.vtx.inc.c"
Mtx_f AntLand_IMtx11 = IDENTITY;
unsigned char AntLand_Pad18[] = FILEPAD;
unsigned char AntLand_ALShinewall_ci8_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/ALShinewall.ci8.png.inc.c"
};
unsigned char AntLand_Pad19[] = FILEPAD;
unsigned char AntLand_ALShinewall_ci8_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/ALShinewall.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx9.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx10.vtx.inc.c"
Mtx_f AntLand_IMtx12 = IDENTITY;
unsigned char AntLand_Pad20[] = FILEPAD;
unsigned char AntLand_antfadeee_ci8_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/antfadeee.ci8.png.inc.c"
};
unsigned char AntLand_Pad21[] = FILEPAD;
unsigned char AntLand_antfadeee_ci8_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/antfadeee.ci8.pal.inc.c"
};
unsigned char AntLand_Pad22[] = FILEPAD;
unsigned char AntLand_ALMural_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/ALMural.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx10.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx11.vtx.inc.c"
Mtx_f AntLand_IMtx13 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx11.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx12.vtx.inc.c"
Mtx_f AntLand_IMtx14 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx12.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx13.vtx.inc.c"
Mtx_f AntLand_IMtx15 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx13.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx14.vtx.inc.c"
Mtx_f AntLand_IMtx16 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx14.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx15.vtx.inc.c"
Mtx_f AntLand_IMtx17 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx15.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx16.vtx.inc.c"
Mtx_f AntLand_IMtx18 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx16.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx17.vtx.inc.c"
Mtx_f AntLand_IMtx19 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx17.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx18.vtx.inc.c"
Mtx_f AntLand_IMtx20 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx18.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx19.vtx.inc.c"
Mtx_f AntLand_IMtx21 = IDENTITY;
unsigned char AntLand_Pad23[] = FILEPAD;
unsigned char AntLand_ALwall_ci8_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/ALwall.ci8.png.inc.c"
};
unsigned char AntLand_Pad24[] = FILEPAD;
unsigned char AntLand_ALwall_ci8_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/ALwall.ci8.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx19.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx20.vtx.inc.c"
Mtx_f AntLand_IMtx22 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx20.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx21.vtx.inc.c"
Mtx_f AntLand_IMtx23 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx21.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx22.vtx.inc.c"
Mtx_f AntLand_IMtx24 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx22.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx23.vtx.inc.c"
Mtx_f AntLand_IMtx25 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx23.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx24.vtx.inc.c"
Mtx_f AntLand_IMtx26 = IDENTITY;
unsigned char AntLand_Pad25[] = FILEPAD;
unsigned char AntLand_murals_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/murals.ci4.png.inc.c"
};
unsigned char AntLand_Pad26[] = FILEPAD;
unsigned char AntLand_murals_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/murals.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx24.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx25.vtx.inc.c"
Mtx_f AntLand_IMtx27 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx25.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx26.vtx.inc.c"
Mtx_f AntLand_IMtx28 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx26.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx27.vtx.inc.c"
Mtx_f AntLand_IMtx29 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx27.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx28.vtx.inc.c"
Mtx_f AntLand_IMtx30 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx28.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx29.vtx.inc.c"
Mtx_f AntLand_IMtx31 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx29.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx30.vtx.inc.c"
Mtx_f AntLand_IMtx32 = IDENTITY;
unsigned char AntLand_Pad27[] = FILEPAD;
unsigned char AntLand_hole_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/hole.ci4.png.inc.c"
};
unsigned char AntLand_Pad28[] = FILEPAD;
unsigned char AntLand_hole_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/hole.ci4.pal.inc.c"
};
unsigned char AntLand_Pad29[] = FILEPAD;
unsigned char AntLand_metallurgic_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/metallurgic.ci4.png.inc.c"
};
unsigned char AntLand_Pad30[] = FILEPAD;
unsigned char AntLand_metallurgic_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/metallurgic.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx30.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx31.vtx.inc.c"
Mtx_f AntLand_IMtx33 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx31.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx32.vtx.inc.c"
Mtx_f AntLand_IMtx34 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx32.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx33.vtx.inc.c"
Mtx_f AntLand_IMtx35 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx33.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx34.vtx.inc.c"
Mtx_f AntLand_IMtx36 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx34.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx35.vtx.inc.c"
Mtx_f AntLand_IMtx37 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx35.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx36.vtx.inc.c"
Mtx_f AntLand_IMtx38 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx36.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx37.vtx.inc.c"
Mtx_f AntLand_IMtx39 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx37.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx38.vtx.inc.c"
Mtx_f AntLand_IMtx40 = IDENTITY;
unsigned char AntLand_Pad31[] = FILEPAD;
unsigned char AntLand_path_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/path.ci4.png.inc.c"
};
unsigned char AntLand_Pad32[] = FILEPAD;
unsigned char AntLand_path_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/path.ci4.pal.inc.c"
};
unsigned char AntLand_Pad33[] = FILEPAD;
unsigned char AntLand_stone_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/stone.ci4.png.inc.c"
};
unsigned char AntLand_Pad34[] = FILEPAD;
unsigned char AntLand_stone_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/stone.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx38.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx39.vtx.inc.c"
Mtx_f AntLand_IMtx41 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx39.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx40.vtx.inc.c"
Mtx_f AntLand_IMtx42 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx40.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx41.vtx.inc.c"
Mtx_f AntLand_IMtx43 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx41.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx42.vtx.inc.c"
Mtx_f AntLand_IMtx44 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx42.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx43.vtx.inc.c"
Mtx_f AntLand_IMtx45 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx43.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx44.vtx.inc.c"
Mtx_f AntLand_IMtx46 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx44.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx45.vtx.inc.c"
Mtx_f AntLand_IMtx47 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx45.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx46.vtx.inc.c"
Mtx_f AntLand_IMtx48 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx46.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx47.vtx.inc.c"
Mtx_f AntLand_IMtx49 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx47.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx48.vtx.inc.c"
Mtx_f AntLand_IMtx50 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx48.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx49.vtx.inc.c"
Mtx_f AntLand_IMtx51 = IDENTITY;
unsigned char AntLand_Pad35[] = FILEPAD;
unsigned char AntLand_wallagain_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/wallagain.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx49.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx50.vtx.inc.c"
Mtx_f AntLand_IMtx52 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx50.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx51.vtx.inc.c"
Mtx_f AntLand_IMtx53 = IDENTITY;
unsigned char AntLand_Pad36[] = FILEPAD;
unsigned char AntLand_wallsss_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/wallsss.i4.png.inc.c"
};
unsigned char AntLand_Pad37[] = FILEPAD;
unsigned char AntLand_wallSmall_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/wallSmall.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx51.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx52.vtx.inc.c"
Mtx_f AntLand_IMtx54 = IDENTITY;
unsigned char AntLand_Pad38[] = FILEPAD;
unsigned char AntLand_muralllll_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/muralllll.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx52.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx53.vtx.inc.c"
Mtx_f AntLand_IMtx55 = IDENTITY;
unsigned char AntLand_Pad39[] = FILEPAD;
unsigned char AntLand_muralllll2_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/muralllll2.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx53.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx54.vtx.inc.c"
Mtx_f AntLand_IMtx56 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx54.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx55.vtx.inc.c"
Mtx_f AntLand_IMtx57 = IDENTITY;
unsigned char AntLand_Pad40[] = FILEPAD;
unsigned char AntLand_wallFade32_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/wallFade32.ci4.png.inc.c"
};
unsigned char AntLand_Pad41[] = FILEPAD;
unsigned char AntLand_wallFade32_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/wallFade32.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/gfx55.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx56.vtx.inc.c"
Mtx_f AntLand_IMtx58 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx56.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx57.vtx.inc.c"
Mtx_f AntLand_IMtx59 = IDENTITY;
unsigned char AntLand_Pad42[] = FILEPAD;
unsigned char AntLand_the30thMural_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/the30thMural.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx57.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx58.vtx.inc.c"
Mtx_f AntLand_IMtx60 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx58.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx59.vtx.inc.c"
Mtx_f AntLand_IMtx61 = IDENTITY;
unsigned char AntLand_Pad43[] = FILEPAD;
unsigned char AntLand_anotherMural_i4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/anotherMural.i4.png.inc.c"
};

#include "assets/levelGroup/AntLand/gfx59.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx60.vtx.inc.c"
Mtx_f AntLand_IMtx62 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx60.gfx.inc.c"

#include "assets/levelGroup/AntLand/vtx61.vtx.inc.c"
Mtx_f AntLand_IMtx63 = IDENTITY;

#include "assets/levelGroup/AntLand/gfx61.gfx.inc.c"

#include "assets/levelGroup/AntLand/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol1/unkCol1.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol1/unkCol1.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol2/unkCol2.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol3/unkCol3.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol3/unkCol3.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol3/unkCol3.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol3/unkCol3.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol4/unkCol4.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol4/unkCol4.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol4/unkCol4.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol4/unkCol4.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol5/unkCol5.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol5/unkCol5.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol5/unkCol5.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol5/unkCol5.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol6/unkCol6.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol6/unkCol6.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol6/unkCol6.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol6/unkCol6.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol7/unkCol7.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol7/unkCol7.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol7/unkCol7.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol7/unkCol7.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol8/unkCol8.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol8/unkCol8.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol8/unkCol8.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol8/unkCol8.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol9/unkCol9.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol9/unkCol9.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol9/unkCol9.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol9/unkCol9.colH.inc.c"

#include "assets/levelGroup/AntLand/unkColA/unkColA.colV.inc.c"

#include "assets/levelGroup/AntLand/unkColA/unkColA.colT.inc.c"

#include "assets/levelGroup/AntLand/unkColA/unkColA.colS.inc.c"

#include "assets/levelGroup/AntLand/unkColA/unkColA.colH.inc.c"

#include "assets/levelGroup/AntLand/unkColB/unkColB.colV.inc.c"

#include "assets/levelGroup/AntLand/unkColB/unkColB.colT.inc.c"

#include "assets/levelGroup/AntLand/unkColB/unkColB.colS.inc.c"

#include "assets/levelGroup/AntLand/unkColB/unkColB.colH.inc.c"

#include "assets/levelGroup/AntLand/unkColC/unkColC.colV.inc.c"

#include "assets/levelGroup/AntLand/unkColC/unkColC.colT.inc.c"

#include "assets/levelGroup/AntLand/unkColC/unkColC.colS.inc.c"

#include "assets/levelGroup/AntLand/unkColC/unkColC.colH.inc.c"

#include "assets/levelGroup/AntLand/unkColD/unkColD.colV.inc.c"

#include "assets/levelGroup/AntLand/unkColD/unkColD.colT.inc.c"

#include "assets/levelGroup/AntLand/unkColD/unkColD.colS.inc.c"

#include "assets/levelGroup/AntLand/unkColD/unkColD.colH.inc.c"

#include "assets/levelGroup/AntLand/unkColE/unkColE.colV.inc.c"

#include "assets/levelGroup/AntLand/unkColE/unkColE.colT.inc.c"

#include "assets/levelGroup/AntLand/unkColE/unkColE.colS.inc.c"

#include "assets/levelGroup/AntLand/unkColE/unkColE.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCo3A/unkCo3A.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCo3A/unkCo3A.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCo3A/unkCo3A.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCo3A/unkCo3A.colH.inc.c"

#include "assets/levelGroup/AntLand/unkColF/unkColF.colV.inc.c"

#include "assets/levelGroup/AntLand/unkColF/unkColF.colT.inc.c"

#include "assets/levelGroup/AntLand/unkColF/unkColF.colS.inc.c"

#include "assets/levelGroup/AntLand/unkColF/unkColF.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol10/unkCol10.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol10/unkCol10.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol10/unkCol10.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol10/unkCol10.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol11/unkCol11.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol11/unkCol11.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol11/unkCol11.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol11/unkCol11.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol12/unkCol12.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol12/unkCol12.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol12/unkCol12.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol12/unkCol12.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol13/unkCol13.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol13/unkCol13.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol13/unkCol13.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol13/unkCol13.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol14/unkCol14.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol14/unkCol14.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol14/unkCol14.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol14/unkCol14.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol15/unkCol15.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol15/unkCol15.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol15/unkCol15.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol15/unkCol15.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol16/unkCol16.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol16/unkCol16.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol16/unkCol16.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol16/unkCol16.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol17/unkCol17.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol17/unkCol17.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol17/unkCol17.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol17/unkCol17.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol18/unkCol18.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol18/unkCol18.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol18/unkCol18.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol18/unkCol18.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol19/unkCol19.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol19/unkCol19.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol19/unkCol19.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol19/unkCol19.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol1A/unkCol1A.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol1A/unkCol1A.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol1A/unkCol1A.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol1A/unkCol1A.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol1B/unkCol1B.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol1B/unkCol1B.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol1B/unkCol1B.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol1B/unkCol1B.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol1C/unkCol1C.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol1C/unkCol1C.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol1C/unkCol1C.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol1C/unkCol1C.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol1D/unkCol1D.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol1D/unkCol1D.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol1D/unkCol1D.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol1D/unkCol1D.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol1E/unkCol1E.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol1E/unkCol1E.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol1E/unkCol1E.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol1E/unkCol1E.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol1F/unkCol1F.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol1F/unkCol1F.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol1F/unkCol1F.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol1F/unkCol1F.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol20/unkCol20.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol20/unkCol20.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol20/unkCol20.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol20/unkCol20.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol21/unkCol21.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol21/unkCol21.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol21/unkCol21.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol21/unkCol21.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol22/unkCol22.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol22/unkCol22.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol22/unkCol22.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol22/unkCol22.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol23/unkCol23.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol23/unkCol23.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol23/unkCol23.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol23/unkCol23.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol24/unkCol24.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol24/unkCol24.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol24/unkCol24.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol24/unkCol24.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol25/unkCol25.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol25/unkCol25.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol25/unkCol25.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol25/unkCol25.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol26/unkCol26.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol26/unkCol26.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol26/unkCol26.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol26/unkCol26.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol27/unkCol27.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol27/unkCol27.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol27/unkCol27.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol27/unkCol27.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol28/unkCol28.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol28/unkCol28.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol28/unkCol28.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol28/unkCol28.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol29/unkCol29.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol29/unkCol29.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol29/unkCol29.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol29/unkCol29.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol2A/unkCol2A.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol2A/unkCol2A.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol2A/unkCol2A.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol2A/unkCol2A.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol2B/unkCol2B.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol2B/unkCol2B.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol2B/unkCol2B.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol2B/unkCol2B.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol2C/unkCol2C.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol2C/unkCol2C.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol2C/unkCol2C.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol2C/unkCol2C.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol2D/unkCol2D.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol2D/unkCol2D.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol2D/unkCol2D.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol2D/unkCol2D.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol2E/unkCol2E.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol2E/unkCol2E.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol2E/unkCol2E.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol2E/unkCol2E.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol2F/unkCol2F.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol2F/unkCol2F.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol2F/unkCol2F.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol2F/unkCol2F.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol30/unkCol30.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol30/unkCol30.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol30/unkCol30.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol30/unkCol30.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol31/unkCol31.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol31/unkCol31.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol31/unkCol31.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol31/unkCol31.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol32/unkCol32.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol32/unkCol32.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol32/unkCol32.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol32/unkCol32.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol33/unkCol33.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol33/unkCol33.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol33/unkCol33.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol33/unkCol33.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol34/unkCol34.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol34/unkCol34.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol34/unkCol34.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol34/unkCol34.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol35/unkCol35.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol35/unkCol35.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol35/unkCol35.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol35/unkCol35.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol36/unkCol36.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol36/unkCol36.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol36/unkCol36.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol36/unkCol36.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol37/unkCol37.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol37/unkCol37.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol37/unkCol37.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol37/unkCol37.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol38/unkCol38.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol38/unkCol38.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol38/unkCol38.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol38/unkCol38.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol39/unkCol39.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol39/unkCol39.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol39/unkCol39.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol39/unkCol39.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol3B/unkCol3B.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol3B/unkCol3B.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol3B/unkCol3B.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol3B/unkCol3B.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol3C/unkCol3C.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol3C/unkCol3C.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol3C/unkCol3C.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol3C/unkCol3C.colH.inc.c"

#include "assets/levelGroup/AntLand/unkCol3E/unkCol3E.colV.inc.c"

#include "assets/levelGroup/AntLand/unkCol3E/unkCol3E.colT.inc.c"

#include "assets/levelGroup/AntLand/unkCol3E/unkCol3E.colS.inc.c"

#include "assets/levelGroup/AntLand/unkCol3E/unkCol3E.colH.inc.c"
unsigned char AntLand_ALPADD_Bin[] = {
#include "build/include/assets/levelGroup/AntLand/ALPADD.inc.c"
};
Mtx_f AntLand_IMtx64 = IDENTITY;

#include "assets/levelGroup/AntLand/alScope2.light.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx.vtx.inc.c"
Mtx_f AntLand_IMtx65 = IDENTITY;
unsigned char AntLand_Pad44[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowAntEye_ci8_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/yellowAnt_yellowAntEye.ci8.png.inc.c"
};
unsigned char AntLand_Pad45[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowAntEye_ci8_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/yellowAnt_yellowAntEye.ci8.pal.inc.c"
};
unsigned char AntLand_Pad46[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowEyeColor_ci4_PNG[] = {
#include "build/include/assets/levelGroup/AntLand/yellowAnt_yellowEyeColor.ci4.png.inc.c"
};
unsigned char AntLand_Pad47[] = FILEPAD;
unsigned char AntLand_yellowAnt_yellowEyeColor_ci4_PAL[] = {
#include "build/include/assets/levelGroup/AntLand/yellowAnt_yellowEyeColor.ci4.pal.inc.c"
};

#include "assets/levelGroup/AntLand/yellowAnt_gfx.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx2.vtx.inc.c"
Mtx_f AntLand_IMtx66 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx2.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx3.vtx.inc.c"
Mtx_f AntLand_IMtx67 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx3.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx4.vtx.inc.c"
Mtx_f AntLand_IMtx68 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx4.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx5.vtx.inc.c"
Mtx_f AntLand_IMtx69 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx5.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx6.vtx.inc.c"
Mtx_f AntLand_IMtx70 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx6.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx7.vtx.inc.c"
Mtx_f AntLand_IMtx71 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx7.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx8.vtx.inc.c"
Mtx_f AntLand_IMtx72 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx8.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx9.vtx.inc.c"
Mtx_f AntLand_IMtx73 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx9.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx10.vtx.inc.c"
Mtx_f AntLand_IMtx74 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx10.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx11.vtx.inc.c"
Mtx_f AntLand_IMtx75 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx11.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx12.vtx.inc.c"
Mtx_f AntLand_IMtx76 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx12.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAnt_vtx13.vtx.inc.c"
Mtx_f AntLand_IMtx77 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx13.gfx.inc.c"
Mtx_f AntLand_IMtx78 = IDENTITY;

#include "assets/levelGroup/AntLand/yellowAnt_gfx14.gfx.inc.c"

#include "assets/levelGroup/AntLand/yellowAntAnim/yellowAntAnim.animH.inc.c"

#include "assets/levelGroup/AntLand/yellowAntAnim/yellowAntAnim.animArr.inc.c"
unsigned char AntLand_yellowAntAnimPointers_Bin[] = {
#include "build/include/assets/levelGroup/AntLand/yellowAntAnim/yellowAntAnimPointers.inc.c"
};
