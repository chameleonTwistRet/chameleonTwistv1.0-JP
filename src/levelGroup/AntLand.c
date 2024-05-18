#include "common.h"

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
extern CollisionData Global_fallbackCube_ColH;
extern Gfx Global_exitShadowSouth_Gfx[];
extern CollisionData Global_exitShadowSouth_ColH;
extern Gfx Global_exitShadowNorth_Gfx[];
extern CollisionData Global_exitShadowNorth_ColH;
extern Gfx Global_exitShadowEast_Gfx[];
extern CollisionData Global_exitShadowEast_ColH;
extern Gfx Global_exitShadowWest_Gfx[];
extern CollisionData Global_exitShadowWest_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern CollisionData Global_ALBLExit_ColH;
extern Gfx Global_unk3_Gfx[];
extern CollisionData Global_unk3_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern CollisionData Global_BossBridge_ColH;
extern Gfx Global_ALPole_Gfx[];
extern CollisionData Global_ALPole_ColH;
extern Gfx Global_ALBLDoor_Gfx[];
extern CollisionData Global_ALBLDoor_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern CollisionData Global_ALSpinDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern CollisionData Global_BLLavaFloor_ColH;
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
extern Gfx Global_BLDestructableTop_Gfx[];
extern CollisionData Global_BLDestructableTop_ColH;
extern Gfx Global_BLMetalBridge_Gfx[];
extern CollisionData Global_BLMetalBridge_ColH;
extern Gfx Global_KLExit_Gfx[];
extern CollisionData Global_KLExit_ColH;
extern Gfx Global_KLDoor_Gfx[];
extern CollisionData Global_KLDoor_ColH;
extern Gfx Global_DCExit_Gfx[];
extern CollisionData Global_DCExit_ColH;
extern Gfx Global_TallExitShadow1_Gfx[];
extern CollisionData Global_TallExitShadow1_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern CollisionData Global_TallExitShadow2_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern CollisionData Global_GCExit1_ColH;
extern Gfx Global_GCExit2_Gfx[];
extern CollisionData Global_GCExit2_ColH;
extern Gfx Global_trainingRoomLight_Gfx[];
extern CollisionData Global_trainingRoomLight_ColH;
extern Gfx Global_JLCaveExit1_Gfx[];
extern CollisionData Global_JLCaveExit1_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern CollisionData Global_JLCaveExit2_ColH;
extern Gfx Global_JLCaveExit3_Gfx[];
extern CollisionData Global_JLCaveExit3_ColH;
extern Gfx Global_JLCaveExit4_Gfx[];
extern CollisionData Global_JLCaveExit4_ColH;
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern CollisionData Global_JLOutsideEntrance_ColH;
extern Gfx Global_JLFxCamPillar_Gfx[];
extern CollisionData Global_JLFxCamPillar_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern CollisionData Global_JLCaveDoor_ColH;
extern Gfx AntLand_exit2_Gfx[];
extern CollisionData AntLand_exit2_ColH;
extern Gfx AntLand_exit3_Gfx[];
extern CollisionData AntLand_exit3_ColH;
extern Gfx AntLand_exit4_Gfx[];
extern CollisionData AntLand_exit4_ColH;
extern Gfx AntLand_room0_Gfx[];
extern CollisionData AntLand_room0_ColH;
extern Gfx AntLand_room1_Gfx[];
extern CollisionData AntLand_room1_ColH;
extern Gfx AntLand_room2_Gfx[];
extern CollisionData AntLand_room2_ColH;
extern Gfx AntLand_room14_Gfx[];
extern CollisionData AntLand_room14_ColH;
extern Gfx AntLand_room4_Gfx[];
extern CollisionData AntLand_room4_ColH;
extern Gfx AntLand_room5_Gfx[];
extern CollisionData AntLand_room5_ColH;
extern Gfx AntLand_room6_Gfx[];
extern CollisionData AntLand_room6_ColH;
extern Gfx AntLand_room7_Gfx[];
extern CollisionData AntLand_room7_ColH;
extern Gfx AntLand_room8_Gfx[];
extern CollisionData AntLand_room8_ColH;
extern Gfx AntLand_room9_Gfx[];
extern CollisionData AntLand_room9_ColH;
extern Gfx AntLand_room10_Gfx[];
extern CollisionData AntLand_room10_ColH;
extern Gfx AntLand_room11_Gfx[];
extern CollisionData AntLand_room11_ColH;
extern Gfx AntLand_room12_Gfx[];
extern CollisionData AntLand_room12_ColH;
extern Gfx AntLand_room13_Gfx[];
extern CollisionData AntLand_room13_ColH;
extern Gfx AntLand_room3_Gfx[];
extern CollisionData AntLand_room3_ColH;
extern Gfx AntLand_room17_Gfx[];
extern CollisionData AntLand_room17_ColH;
extern Gfx AntLand_room15_Gfx[];
extern CollisionData AntLand_room15_ColH;
extern Gfx AntLand_room18_Gfx[];
extern CollisionData AntLand_room18_ColH;
extern Gfx AntLand_room16_Gfx[];
extern CollisionData AntLand_room16_ColH;
extern Gfx AntLand_room20_Gfx[];
extern CollisionData AntLand_room20_ColH;
extern Gfx AntLand_room21_Gfx[];
extern CollisionData AntLand_room21_ColH;
extern Gfx AntLand_room4Platform_Gfx[];
extern CollisionData AntLand_room4Platform_ColH;
extern Gfx AntLand_room4Floor_Gfx[];
extern CollisionData AntLand_room4Floor_ColH;
extern Gfx AntLand_room6Floor_Gfx[];
extern CollisionData AntLand_room6Floor_ColH;
extern Gfx AntLand_room8Floor_Gfx[];
extern CollisionData AntLand_room8Floor_ColH;
extern Gfx AntLand_room17Floor_Gfx[];
extern CollisionData AntLand_room17Floor_ColH;
extern Gfx AntLand_room10Floor_Gfx[];
extern CollisionData AntLand_room10Floor_ColH;
extern Gfx AntLand_room10Platform1_Gfx[];
extern CollisionData AntLand_room10Platform1_ColH;
extern Gfx AntLand_room10Platform2_Gfx[];
extern CollisionData AntLand_room10Platform2_ColH;
extern Gfx AntLand_room10Platform3_Gfx[];
extern CollisionData AntLand_room10Platform3_ColH;
extern Gfx AntLand_room5Platform_Gfx[];
extern CollisionData AntLand_room5Platform_ColH;
extern Gfx AntLand_room13Platform_Gfx[];
extern CollisionData AntLand_room13Platform_ColH;
extern Gfx AntLand_room21Platform1_Gfx[];
extern CollisionData AntLand_room21Platform1_ColH;
extern Gfx AntLand_room21Platform2_Gfx[];
extern CollisionData AntLand_room21Platform2_ColH;
extern Gfx AntLand_room12Floor1_Gfx[];
extern CollisionData AntLand_room12Floor1_ColH;
extern Gfx AntLand_room12Floor2_Gfx[];
extern CollisionData AntLand_room12Floor2_ColH;
extern Gfx AntLand_room11Floor1_Gfx[];
extern CollisionData AntLand_room11Floor1_ColH;
extern Gfx AntLand_room11Floor2_Gfx[];
extern CollisionData AntLand_room11Floor2_ColH;
extern Gfx AntLand_room4Grate_Gfx[];
extern CollisionData AntLand_room4Grate_ColH;
extern Gfx AntLand_room7Floor_Gfx[];
extern CollisionData AntLand_room7Floor_ColH;
extern Gfx AntLand_room7Ceiling_Gfx[];
extern CollisionData AntLand_room7Ceiling_ColH;
extern Gfx AntLand_room15Floor_Gfx[];
extern CollisionData AntLand_room15Floor_ColH;
extern Gfx AntLand_room15Ceiling_Gfx[];
extern CollisionData AntLand_room15Ceiling_ColH;
extern Gfx AntLand_room8Floor1_Gfx[];
extern CollisionData AntLand_room8Floor1_ColH;
extern Gfx AntLand_room8Floor2_Gfx[];
extern CollisionData AntLand_room8Floor2_ColH;
extern Gfx AntLand_room0doorPillar1_Gfx[];
extern CollisionData AntLand_room0doorPillar1_ColH;
extern Gfx AntLand_room0doorPillar2_Gfx[];
extern CollisionData AntLand_room0doorPillar2_ColH;
extern Gfx AntLand_room0doorTop_Gfx[];
extern CollisionData AntLand_room0doorTop_ColH;
extern Gfx AntLand_room0doorTorchStand1_Gfx[];
extern CollisionData AntLand_room0doorTorchStand1_ColH;
extern Gfx AntLand_room0doorTorchStand2_Gfx[];
extern CollisionData AntLand_room0doorTorchStand2_ColH;
extern Gfx AntLand_room16Floor1_Gfx[];
extern CollisionData AntLand_room16Floor1_ColH;
extern Gfx AntLand_room16Floor2_Gfx[];
extern CollisionData AntLand_room16Floor2_ColH;
extern Gfx AntLand_room16Grate_Gfx[];
extern CollisionData AntLand_room16Grate_ColH;
extern Gfx AntLand_tiltPlatform_Gfx[];
extern CollisionData AntLand_tiltPlatform_ColH;
extern Gfx AntLand_platform_Gfx[];
extern CollisionData AntLand_platform_ColH;
extern Gfx AntLand_movingPlatform_Gfx[];
extern CollisionData AntLand_movingPlatform_ColH;
extern Gfx AntLand_quad_Gfx[];
extern CollisionData AntLand_quad_ColH;
extern Gfx AntLand_fixedCamPillar_Gfx[];
extern CollisionData AntLand_fixedCamPillar_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;


Mtx AntLand_IMtx1 = IDENTITY;

#include "assets/levelGroup/AntLand/pointers.lvp.inc.c"

#include "build/assets/levelGroup/AntLand/rabobjects.inc.c"

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

#include "assets/levelGroup/AntLand/spriteLib.sprLib.inc.c"

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

#include "assets/levelGroup/AntLand/exit2/exit2.colV.inc.c"

#include "assets/levelGroup/AntLand/exit2/exit2.colT.inc.c"

#include "assets/levelGroup/AntLand/exit2/exit2.colS.inc.c"

#include "assets/levelGroup/AntLand/exit2/exit2.colH.inc.c"

#include "assets/levelGroup/AntLand/exit3/exit3.colV.inc.c"

#include "assets/levelGroup/AntLand/exit3/exit3.colT.inc.c"

#include "assets/levelGroup/AntLand/exit3/exit3.colS.inc.c"

#include "assets/levelGroup/AntLand/exit3/exit3.colH.inc.c"

#include "assets/levelGroup/AntLand/exit4/exit4.colV.inc.c"

#include "assets/levelGroup/AntLand/exit4/exit4.colT.inc.c"

#include "assets/levelGroup/AntLand/exit4/exit4.colS.inc.c"

#include "assets/levelGroup/AntLand/exit4/exit4.colH.inc.c"

#include "assets/levelGroup/AntLand/room0/room0.colV.inc.c"

#include "assets/levelGroup/AntLand/room0/room0.colT.inc.c"

#include "assets/levelGroup/AntLand/room0/room0.colS.inc.c"

#include "assets/levelGroup/AntLand/room0/room0.colH.inc.c"

#include "assets/levelGroup/AntLand/room1/room1.colV.inc.c"

#include "assets/levelGroup/AntLand/room1/room1.colT.inc.c"

#include "assets/levelGroup/AntLand/room1/room1.colS.inc.c"

#include "assets/levelGroup/AntLand/room1/room1.colH.inc.c"

#include "assets/levelGroup/AntLand/room2/room2.colV.inc.c"

#include "assets/levelGroup/AntLand/room2/room2.colT.inc.c"

#include "assets/levelGroup/AntLand/room2/room2.colS.inc.c"

#include "assets/levelGroup/AntLand/room2/room2.colH.inc.c"

#include "assets/levelGroup/AntLand/room14/room14.colV.inc.c"

#include "assets/levelGroup/AntLand/room14/room14.colT.inc.c"

#include "assets/levelGroup/AntLand/room14/room14.colS.inc.c"

#include "assets/levelGroup/AntLand/room14/room14.colH.inc.c"

#include "assets/levelGroup/AntLand/room4/room4.colV.inc.c"

#include "assets/levelGroup/AntLand/room4/room4.colT.inc.c"

#include "assets/levelGroup/AntLand/room4/room4.colS.inc.c"

#include "assets/levelGroup/AntLand/room4/room4.colH.inc.c"

#include "assets/levelGroup/AntLand/room5/room5.colV.inc.c"

#include "assets/levelGroup/AntLand/room5/room5.colT.inc.c"

#include "assets/levelGroup/AntLand/room5/room5.colS.inc.c"

#include "assets/levelGroup/AntLand/room5/room5.colH.inc.c"

#include "assets/levelGroup/AntLand/room6/room6.colV.inc.c"

#include "assets/levelGroup/AntLand/room6/room6.colT.inc.c"

#include "assets/levelGroup/AntLand/room6/room6.colS.inc.c"

#include "assets/levelGroup/AntLand/room6/room6.colH.inc.c"

#include "assets/levelGroup/AntLand/room7/room7.colV.inc.c"

#include "assets/levelGroup/AntLand/room7/room7.colT.inc.c"

#include "assets/levelGroup/AntLand/room7/room7.colS.inc.c"

#include "assets/levelGroup/AntLand/room7/room7.colH.inc.c"

#include "assets/levelGroup/AntLand/room8/room8.colV.inc.c"

#include "assets/levelGroup/AntLand/room8/room8.colT.inc.c"

#include "assets/levelGroup/AntLand/room8/room8.colS.inc.c"

#include "assets/levelGroup/AntLand/room8/room8.colH.inc.c"

#include "assets/levelGroup/AntLand/room9/room9.colV.inc.c"

#include "assets/levelGroup/AntLand/room9/room9.colT.inc.c"

#include "assets/levelGroup/AntLand/room9/room9.colS.inc.c"

#include "assets/levelGroup/AntLand/room9/room9.colH.inc.c"

#include "assets/levelGroup/AntLand/room10/room10.colV.inc.c"

#include "assets/levelGroup/AntLand/room10/room10.colT.inc.c"

#include "assets/levelGroup/AntLand/room10/room10.colS.inc.c"

#include "assets/levelGroup/AntLand/room10/room10.colH.inc.c"

#include "assets/levelGroup/AntLand/room11/room11.colV.inc.c"

#include "assets/levelGroup/AntLand/room11/room11.colT.inc.c"

#include "assets/levelGroup/AntLand/room11/room11.colS.inc.c"

#include "assets/levelGroup/AntLand/room11/room11.colH.inc.c"

#include "assets/levelGroup/AntLand/room12/room12.colV.inc.c"

#include "assets/levelGroup/AntLand/room12/room12.colT.inc.c"

#include "assets/levelGroup/AntLand/room12/room12.colS.inc.c"

#include "assets/levelGroup/AntLand/room12/room12.colH.inc.c"

#include "assets/levelGroup/AntLand/room13/room13.colV.inc.c"

#include "assets/levelGroup/AntLand/room13/room13.colT.inc.c"

#include "assets/levelGroup/AntLand/room13/room13.colS.inc.c"

#include "assets/levelGroup/AntLand/room13/room13.colH.inc.c"

#include "assets/levelGroup/AntLand/room3/room3.colV.inc.c"

#include "assets/levelGroup/AntLand/room3/room3.colT.inc.c"

#include "assets/levelGroup/AntLand/room3/room3.colS.inc.c"

#include "assets/levelGroup/AntLand/room3/room3.colH.inc.c"

#include "assets/levelGroup/AntLand/room17/room17.colV.inc.c"

#include "assets/levelGroup/AntLand/room17/room17.colT.inc.c"

#include "assets/levelGroup/AntLand/room17/room17.colS.inc.c"

#include "assets/levelGroup/AntLand/room17/room17.colH.inc.c"

#include "assets/levelGroup/AntLand/room15/room15.colV.inc.c"

#include "assets/levelGroup/AntLand/room15/room15.colT.inc.c"

#include "assets/levelGroup/AntLand/room15/room15.colS.inc.c"

#include "assets/levelGroup/AntLand/room15/room15.colH.inc.c"

#include "assets/levelGroup/AntLand/room18/room18.colV.inc.c"

#include "assets/levelGroup/AntLand/room18/room18.colT.inc.c"

#include "assets/levelGroup/AntLand/room18/room18.colS.inc.c"

#include "assets/levelGroup/AntLand/room18/room18.colH.inc.c"

#include "assets/levelGroup/AntLand/room16/room16.colV.inc.c"

#include "assets/levelGroup/AntLand/room16/room16.colT.inc.c"

#include "assets/levelGroup/AntLand/room16/room16.colS.inc.c"

#include "assets/levelGroup/AntLand/room16/room16.colH.inc.c"

#include "assets/levelGroup/AntLand/room20/room20.colV.inc.c"

#include "assets/levelGroup/AntLand/room20/room20.colT.inc.c"

#include "assets/levelGroup/AntLand/room20/room20.colS.inc.c"

#include "assets/levelGroup/AntLand/room20/room20.colH.inc.c"

#include "assets/levelGroup/AntLand/room21/room21.colV.inc.c"

#include "assets/levelGroup/AntLand/room21/room21.colT.inc.c"

#include "assets/levelGroup/AntLand/room21/room21.colS.inc.c"

#include "assets/levelGroup/AntLand/room21/room21.colH.inc.c"

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.colV.inc.c"

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.colT.inc.c"

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.colS.inc.c"

#include "assets/levelGroup/AntLand/room4Platform/room4Platform.colH.inc.c"

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.colS.inc.c"

#include "assets/levelGroup/AntLand/room4Floor/room4Floor.colH.inc.c"

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.colS.inc.c"

#include "assets/levelGroup/AntLand/room6Floor/room6Floor.colH.inc.c"

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.colS.inc.c"

#include "assets/levelGroup/AntLand/room8Floor/room8Floor.colH.inc.c"

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.colS.inc.c"

#include "assets/levelGroup/AntLand/room17Floor/room17Floor.colH.inc.c"

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.colS.inc.c"

#include "assets/levelGroup/AntLand/room10Floor/room10Floor.colH.inc.c"

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.colS.inc.c"

#include "assets/levelGroup/AntLand/room10Platform1/room10Platform1.colH.inc.c"

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.colS.inc.c"

#include "assets/levelGroup/AntLand/room10Platform2/room10Platform2.colH.inc.c"

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.colV.inc.c"

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.colT.inc.c"

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.colS.inc.c"

#include "assets/levelGroup/AntLand/room10Platform3/room10Platform3.colH.inc.c"

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.colV.inc.c"

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.colT.inc.c"

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.colS.inc.c"

#include "assets/levelGroup/AntLand/room5Platform/room5Platform.colH.inc.c"

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.colV.inc.c"

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.colT.inc.c"

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.colS.inc.c"

#include "assets/levelGroup/AntLand/room13Platform/room13Platform.colH.inc.c"

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.colV.inc.c"

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.colT.inc.c"

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.colS.inc.c"

#include "assets/levelGroup/AntLand/room21Platform1/room21Platform1.colH.inc.c"

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.colV.inc.c"

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.colT.inc.c"

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.colS.inc.c"

#include "assets/levelGroup/AntLand/room21Platform2/room21Platform2.colH.inc.c"

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.colS.inc.c"

#include "assets/levelGroup/AntLand/room12Floor1/room12Floor1.colH.inc.c"

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.colS.inc.c"

#include "assets/levelGroup/AntLand/room12Floor2/room12Floor2.colH.inc.c"

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.colS.inc.c"

#include "assets/levelGroup/AntLand/room11Floor1/room11Floor1.colH.inc.c"

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.colS.inc.c"

#include "assets/levelGroup/AntLand/room11Floor2/room11Floor2.colH.inc.c"

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.colV.inc.c"

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.colT.inc.c"

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.colS.inc.c"

#include "assets/levelGroup/AntLand/room4Grate/room4Grate.colH.inc.c"

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.colS.inc.c"

#include "assets/levelGroup/AntLand/room7Floor/room7Floor.colH.inc.c"

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.colV.inc.c"

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.colT.inc.c"

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.colS.inc.c"

#include "assets/levelGroup/AntLand/room7Ceiling/room7Ceiling.colH.inc.c"

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.colV.inc.c"

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.colT.inc.c"

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.colS.inc.c"

#include "assets/levelGroup/AntLand/room15Floor/room15Floor.colH.inc.c"

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.colV.inc.c"

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.colT.inc.c"

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.colS.inc.c"

#include "assets/levelGroup/AntLand/room15Ceiling/room15Ceiling.colH.inc.c"

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.colS.inc.c"

#include "assets/levelGroup/AntLand/room8Floor1/room8Floor1.colH.inc.c"

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.colS.inc.c"

#include "assets/levelGroup/AntLand/room8Floor2/room8Floor2.colH.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.colS.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar1/room0doorPillar1.colH.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.colS.inc.c"

#include "assets/levelGroup/AntLand/room0doorPillar2/room0doorPillar2.colH.inc.c"

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.colS.inc.c"

#include "assets/levelGroup/AntLand/room0doorTop/room0doorTop.colH.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.colS.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand1/room0doorTorchStand1.colH.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.colV.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.colT.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.colS.inc.c"

#include "assets/levelGroup/AntLand/room0doorTorchStand2/room0doorTorchStand2.colH.inc.c"

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.colV.inc.c"

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.colT.inc.c"

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.colS.inc.c"

#include "assets/levelGroup/AntLand/room16Floor1/room16Floor1.colH.inc.c"

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.colV.inc.c"

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.colT.inc.c"

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.colS.inc.c"

#include "assets/levelGroup/AntLand/room16Floor2/room16Floor2.colH.inc.c"

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.colV.inc.c"

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.colT.inc.c"

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.colS.inc.c"

#include "assets/levelGroup/AntLand/room16Grate/room16Grate.colH.inc.c"

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.colV.inc.c"

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.colT.inc.c"

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.colS.inc.c"

#include "assets/levelGroup/AntLand/tiltPlatform/tiltPlatform.colH.inc.c"

#include "assets/levelGroup/AntLand/platform/platform.colV.inc.c"

#include "assets/levelGroup/AntLand/platform/platform.colT.inc.c"

#include "assets/levelGroup/AntLand/platform/platform.colS.inc.c"

#include "assets/levelGroup/AntLand/platform/platform.colH.inc.c"

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.colV.inc.c"

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.colT.inc.c"

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.colS.inc.c"

#include "assets/levelGroup/AntLand/movingPlatform/movingPlatform.colH.inc.c"

#include "assets/levelGroup/AntLand/quad/quad.colV.inc.c"

#include "assets/levelGroup/AntLand/quad/quad.colT.inc.c"

#include "assets/levelGroup/AntLand/quad/quad.colS.inc.c"

#include "assets/levelGroup/AntLand/quad/quad.colH.inc.c"

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.colV.inc.c"

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.colT.inc.c"

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.colS.inc.c"

#include "assets/levelGroup/AntLand/fixedCamPillar/fixedCamPillar.colH.inc.c"

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
