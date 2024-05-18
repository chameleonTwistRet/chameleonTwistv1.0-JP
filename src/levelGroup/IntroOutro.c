#include "common.h"

extern unsigned char Global_bigLog_ci4_PNG[];
extern unsigned char Global_bigLog_ci4_PAL[];
extern unsigned char Global_jlText3_ci4_PNG[];
extern unsigned char Global_jlText3_ci4_PAL[];
extern unsigned char Global_jlText1_ci4_PNG[];
extern unsigned char Global_jlText1_ci4_PAL[];
extern unsigned char Global_jlLog_ci4_PNG[];
extern unsigned char Global_jlLog_ci4_PAL[];
extern unsigned char Global_jllogTop_ci4_PNG[];
extern unsigned char Global_jllogTop_ci4_PAL[];

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
extern Gfx IntroOutro_model1_Gfx[];
extern CollisionData IntroOutro_unkCol1_ColH;
extern Gfx IntroOutro_model2_Gfx[];
extern CollisionData IntroOutro_unkCol2_ColH;
extern Gfx IntroOutro_model3_Gfx[];
extern CollisionData IntroOutro_unkCol3_ColH;
extern Gfx IntroOutro_model4_Gfx[];
extern CollisionData IntroOutro_unkCol4_ColH;
extern Gfx IntroOutro_model5_Gfx[];
extern CollisionData IntroOutro_unkCol5_ColH;
extern Gfx IntroOutro_model6_Gfx[];
extern CollisionData IntroOutro_unkCol6_ColH;
extern Gfx IntroOutro_model7_Gfx[];
extern CollisionData IntroOutro_unkCol7_ColH;
extern Gfx IntroOutro_model8_Gfx[];
extern CollisionData IntroOutro_unkCol8_ColH;
extern Gfx IntroOutro_model9_Gfx[];
extern CollisionData IntroOutro_unkCol9_ColH;
extern Gfx IntroOutro_model10_Gfx[];
extern CollisionData IntroOutro_unkCol10_ColH;
extern Gfx IntroOutro_model11_Gfx[];
extern CollisionData IntroOutro_unkCol11_ColH;
extern Gfx IntroOutro_model12_Gfx[];
extern CollisionData IntroOutro_unkCol12_ColH;
extern Gfx IntroOutro_model13_Gfx[];
extern CollisionData IntroOutro_unkCol13_ColH;
extern Gfx IntroOutro_model14_Gfx[];
extern CollisionData IntroOutro_unkCol14_ColH;
extern Gfx IntroOutro_model15_Gfx[];
extern CollisionData IntroOutro_unkCol15_ColH;
extern Gfx IntroOutro_model16_Gfx[];
extern CollisionData IntroOutro_unkCol16_ColH;
extern Gfx IntroOutro_model17_Gfx[];
extern CollisionData IntroOutro_unkCol17_ColH;
extern Gfx IntroOutro_model18_Gfx[];
extern CollisionData IntroOutro_unkCol18_ColH;
extern Gfx IntroOutro_model19_Gfx[];
extern CollisionData IntroOutro_unkCol19_ColH;
extern Gfx IntroOutro_model20_Gfx[];
extern CollisionData IntroOutro_unkCol20_ColH;
extern Gfx IntroOutro_model21_Gfx[];
extern CollisionData IntroOutro_unkCol21_ColH;
extern Gfx IntroOutro_model22_Gfx[];
extern CollisionData IntroOutro_unkCol22_ColH;
extern Gfx IntroOutro_model23_Gfx[];
extern CollisionData IntroOutro_unkCol23_ColH;
extern Gfx IntroOutro_model24_Gfx[];
extern CollisionData IntroOutro_unkCol24_ColH;
extern Gfx IntroOutro_model25_Gfx[];
extern CollisionData IntroOutro_unkCol25_ColH;
extern Gfx IntroOutro_model26_Gfx[];
extern CollisionData IntroOutro_unkCol26_ColH;
extern Gfx IntroOutro_model27_Gfx[];
extern CollisionData IntroOutro_unkCol27_ColH;
extern Gfx IntroOutro_model28_Gfx[];
extern CollisionData IntroOutro_unkCol28_ColH;
extern Gfx IntroOutro_model29_Gfx[];
extern CollisionData IntroOutro_unkCol29_ColH;
extern Gfx IntroOutro_model30_Gfx[];
extern CollisionData IntroOutro_unkCol30_ColH;
extern Gfx IntroOutro_model31_Gfx[];
extern CollisionData IntroOutro_unkCol31_ColH;
extern Gfx IntroOutro_model32_Gfx[];
extern CollisionData IntroOutro_unkCol32_ColH;
extern Gfx IntroOutro_model33_Gfx[];
extern CollisionData IntroOutro_unkCol33_ColH;
extern Gfx IntroOutro_model34_Gfx[];
extern CollisionData IntroOutro_unkCol34_ColH;
extern Gfx IntroOutro_model35_Gfx[];
extern CollisionData IntroOutro_unkCol35_ColH;
extern Gfx IntroOutro_model36_Gfx[];
extern CollisionData IntroOutro_unkCol36_ColH;
extern Gfx IntroOutro_model37_Gfx[];
extern CollisionData IntroOutro_unkCol37_ColH;
extern Gfx IntroOutro_model38_Gfx[];
extern CollisionData IntroOutro_unkCol38_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;


Mtx IntroOutro_IMtx1 = IDENTITY;

#include "assets/levelGroup/IntroOutro/pointers.lvp.inc.c"

#include "build/assets/levelGroup/IntroOutro/rabObjects.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room1_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room2_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room2_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room2_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room2_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room2_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room2_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room5_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room6_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room7_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room10_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room10_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room10_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room10_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room10_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room10_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room11_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room11_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room11_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room11_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room11_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room12_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room12_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room12_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room12_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room12_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room12_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room15_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room16_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj11.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj12.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj13.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_obj14.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room17_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_obj11.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room20_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act1.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act2.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act3.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act4.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act5.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act6.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act7.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act8.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act9.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act10.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act11.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act12.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act13.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act14.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act15.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act16.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act17.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act18.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act19.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act20.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act21.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act22.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act23.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_act24.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomActors/room20_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_obj11.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room23_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj11.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_obj12.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room26_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj11.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj12.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj13.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj14.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj15.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_obj16.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room29_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/spriteActors/room32_spr1.sprite.inc.c"

#include "assets/levelGroup/IntroOutro/spriteActors/room32_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj3.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj4.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj5.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj6.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj7.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj8.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj9.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_obj10.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room32_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room33_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room33_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/room33_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/roomMulti_obj1.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/roomMulti_obj2.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/roomObjects/roomMulti_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/IntroOutro/spriteLib.sprLib.inc.c"

#include "assets/levelGroup/IntroOutro/rooms/fakeRoom.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/rooms/fakeRoomSTOP.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/map.lvmM.inc.c"

#include "assets/levelGroup/IntroOutro/map.lvmH.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room0.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room1.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room2.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room3.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room4.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room5.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room6.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room7.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room8.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room9.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room10.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room11.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room12.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room13.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room14.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room15.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room16.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room17.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room18.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room19.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room20.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room21.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room22.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room23.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room24.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room25.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room26.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room27.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room28.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room29.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room30.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room31.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room32.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room33.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room34.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room35.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room36.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room37.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room38.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/room39.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/extRooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/IntroOutro/scope.lvlScope.inc.c"

#include "assets/levelGroup/IntroOutro/header.lvlHdr.inc.c"
s32 introOutroPad[] = {0, 0};
Mtx IntroOutro_IMtx2 = IDENTITY;

#include "assets/levelGroup/IntroOutro/ioScope/ioScope.light.inc.c"

#include "assets/levelGroup/IntroOutro/model1/model1.vtx.inc.c"
Mtx IntroOutro_IMtx3 = IDENTITY;
unsigned char IntroOutro_Pad1[] = FILEPAD;
unsigned char IntroOutro_fadeWood_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model1/fadeWood.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad2[] = FILEPAD;
unsigned char IntroOutro_fadeWood_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model1/fadeWood.ci8.pal.inc.c"
};
unsigned char IntroOutro_Pad3[] = FILEPAD;
unsigned char IntroOutro_wood_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model1/wood.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad4[] = FILEPAD;
unsigned char IntroOutro_wood_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model1/wood.ci8.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model1/model1.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model2/model2.vtx.inc.c"
Mtx IntroOutro_IMtx4 = IDENTITY;
unsigned char IntroOutro_Pad5[] = FILEPAD;
unsigned char IntroOutro_fadeWood2_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model2/fadeWood2.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad6[] = FILEPAD;
unsigned char IntroOutro_fadeWood2_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model2/fadeWood2.ci8.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model2/model2.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model3/model3.vtx.inc.c"
Mtx IntroOutro_IMtx5 = IDENTITY;
unsigned char IntroOutro_Pad7[] = FILEPAD;
unsigned char IntroOutro_woodTopper_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model3/woodTopper.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad8[] = FILEPAD;
unsigned char IntroOutro_woodTopper_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model3/woodTopper.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model3/model3.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model4/model4.vtx.inc.c"
Mtx IntroOutro_IMtx6 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model4/model4.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model5/model5.vtx.inc.c"
Mtx IntroOutro_IMtx7 = IDENTITY;
unsigned char IntroOutro_Pad9[] = FILEPAD;
unsigned char IntroOutro_woodSide_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model5/woodSide.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad10[] = FILEPAD;
unsigned char IntroOutro_woodSide_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model5/woodSide.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad11[] = FILEPAD;
unsigned char IntroOutro_woodTile_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model5/woodTile.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad12[] = FILEPAD;
unsigned char IntroOutro_woodTile_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model5/woodTile.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad13[] = FILEPAD;
unsigned char IntroOutro_woodPlank_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model5/woodPlank.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad14[] = FILEPAD;
unsigned char IntroOutro_woodPlank_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model5/woodPlank.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model5/model5.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model6/model6.vtx.inc.c"
Mtx IntroOutro_IMtx8 = IDENTITY;
unsigned char IntroOutro_Pad15[] = FILEPAD;
unsigned char IntroOutro_woodBlocks_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model6/woodBlocks.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad16[] = FILEPAD;
unsigned char IntroOutro_woodBlocks_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model6/woodBlocks.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad17[] = FILEPAD;
unsigned char IntroOutro_woodBridge_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model6/woodBridge.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad18[] = FILEPAD;
unsigned char IntroOutro_woodBridge_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model6/woodBridge.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad19[] = FILEPAD;
unsigned char IntroOutro_woodBridgePlank_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model6/woodBridgePlank.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad20[] = FILEPAD;
unsigned char IntroOutro_woodBridgePlank_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model6/woodBridgePlank.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model6/model6.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model7/model7.vtx.inc.c"
Mtx IntroOutro_IMtx9 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model7/model7.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model8/model8.vtx.inc.c"
Mtx IntroOutro_IMtx10 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model8/model8.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model9/model9.vtx.inc.c"
Mtx IntroOutro_IMtx11 = IDENTITY;
unsigned char IntroOutro_Pad21[] = FILEPAD;
unsigned char IntroOutro_woodNoRopeBridge_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model9/woodNoRopeBridge.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad22[] = FILEPAD;
unsigned char IntroOutro_woodNoRopeBridge_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model9/woodNoRopeBridge.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model9/model9.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model10/model10.vtx.inc.c"
Mtx IntroOutro_IMtx12 = IDENTITY;
unsigned char IntroOutro_Pad23[] = FILEPAD;
unsigned char IntroOutro_standardPlanks_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model10/standardPlanks.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad24[] = FILEPAD;
unsigned char IntroOutro_standardPlanks_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model10/standardPlanks.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model10/model10.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model11/model11.vtx.inc.c"
Mtx IntroOutro_IMtx13 = IDENTITY;
unsigned char IntroOutro_Pad25[] = FILEPAD;
unsigned char IntroOutro_singleRopePlank_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model11/singleRopePlank.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad26[] = FILEPAD;
unsigned char IntroOutro_singleRopePlank_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model11/singleRopePlank.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model11/model11.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model12/model12.vtx.inc.c"
Mtx IntroOutro_IMtx14 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model12/model12.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model13/model13.vtx.inc.c"
Mtx IntroOutro_IMtx15 = IDENTITY;
unsigned char IntroOutro_Pad27[] = FILEPAD;
unsigned char IntroOutro_darkwoodFade_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model13/darkwoodFade.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad28[] = FILEPAD;
unsigned char IntroOutro_darkwoodFade_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model13/darkwoodFade.ci8.pal.inc.c"
};
unsigned char IntroOutro_Pad29[] = FILEPAD;
unsigned char IntroOutro_darkwood_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model13/darkwood.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad30[] = FILEPAD;
unsigned char IntroOutro_darkwood_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model13/darkwood.ci8.pal.inc.c"
};
unsigned char IntroOutro_Pad31[] = FILEPAD;
unsigned char IntroOutro_fadewood3_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model13/fadewood3.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad32[] = FILEPAD;
unsigned char IntroOutro_fadewood3_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model13/fadewood3.ci8.pal.inc.c"
};
unsigned char IntroOutro_Pad33[] = FILEPAD;
unsigned char IntroOutro_orangeWood_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model13/orangeWood.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad34[] = FILEPAD;
unsigned char IntroOutro_orangeWood_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model13/orangeWood.ci8.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model13/model13.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model14/model14.vtx.inc.c"
Mtx IntroOutro_IMtx16 = IDENTITY;
unsigned char IntroOutro_Pad35[] = FILEPAD;
unsigned char IntroOutro_boxFade_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model14/boxFade.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad36[] = FILEPAD;
unsigned char IntroOutro_boxFade_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model14/boxFade.ci8.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model14/model14.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model15/model15.vtx.inc.c"
Mtx IntroOutro_IMtx17 = IDENTITY;
unsigned char IntroOutro_Pad37[] = FILEPAD;
unsigned char IntroOutro_longBoxFade_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model15/longBoxFade.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad38[] = FILEPAD;
unsigned char IntroOutro_longBoxFade_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model15/longBoxFade.ci8.pal.inc.c"
};
unsigned char IntroOutro_Pad39[] = FILEPAD;
unsigned char IntroOutro_boxSide_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model15/boxSide.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad40[] = FILEPAD;
unsigned char IntroOutro_boxSide_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model15/boxSide.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model15/model15.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model16/model16.vtx.inc.c"
Mtx IntroOutro_IMtx18 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model16/model16.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model17/model17.vtx.inc.c"
Mtx IntroOutro_IMtx19 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model17/model17.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model18/model18.vtx.inc.c"
Mtx IntroOutro_IMtx20 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model18/model18.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model19/model19.vtx.inc.c"
Mtx IntroOutro_IMtx21 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model19/model19.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model20/model20.vtx.inc.c"
Mtx IntroOutro_IMtx22 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model20/model20.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model21/model21.vtx.inc.c"
Mtx IntroOutro_IMtx23 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model21/model21.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model22/model22.vtx.inc.c"
Mtx IntroOutro_IMtx24 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model22/model22.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model23/model23.vtx.inc.c"
Mtx IntroOutro_IMtx25 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model23/model23.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model24/model24.vtx.inc.c"
Mtx IntroOutro_IMtx26 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model24/model24.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model25/model25.vtx.inc.c"
Mtx IntroOutro_IMtx27 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model25/model25.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model26/model26.vtx.inc.c"
Mtx IntroOutro_IMtx28 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model26/model26.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model27/model27.vtx.inc.c"
Mtx IntroOutro_IMtx29 = IDENTITY;
unsigned char IntroOutro_Pad41[] = FILEPAD;
unsigned char IntroOutro_mountains1_rgba16_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model27/mountains1.rgba16.png.inc.c"
};
unsigned char IntroOutro_Pad42[] = FILEPAD;
unsigned char IntroOutro_mountains2_rgba16_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model27/mountains2.rgba16.png.inc.c"
};
unsigned char IntroOutro_Pad43[] = FILEPAD;
unsigned char IntroOutro_mountains3_rgba16_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model27/mountains3.rgba16.png.inc.c"
};

#include "assets/levelGroup/IntroOutro/model27/model27.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model28/model28.vtx.inc.c"
Mtx IntroOutro_IMtx30 = IDENTITY;
unsigned char IntroOutro_Pad44[] = FILEPAD;
unsigned char IntroOutro_sky_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model28/sky.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad45[] = FILEPAD;
unsigned char IntroOutro_sky_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model28/sky.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad46[] = FILEPAD;
unsigned char IntroOutro_sun_rgba16_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model28/sun.rgba16.png.inc.c"
};
unsigned char IntroOutro_Pad47[] = FILEPAD;
unsigned char IntroOutro_realisticMountain_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model28/realisticMountain.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad48[] = FILEPAD;
unsigned char IntroOutro_realisticMountain_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model28/realisticMountain.ci8.pal.inc.c"
};
unsigned char IntroOutro_Pad49[] = FILEPAD;
unsigned char IntroOutro_realisticMountain2_ci8_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model28/realisticMountain2.ci8.png.inc.c"
};
unsigned char IntroOutro_Pad50[] = FILEPAD;
unsigned char IntroOutro_realisticMountain2_ci8_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model28/realisticMountain2.ci8.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model28/model28.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model29/model29.vtx.inc.c"
Mtx IntroOutro_IMtx31 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model29/model29.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model30/model30.vtx.inc.c"
Mtx IntroOutro_IMtx32 = IDENTITY;
unsigned char IntroOutro_Pad51[] = FILEPAD;
unsigned char IntroOutro_introPlant_rgba16_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model30/introPlant.rgba16.png.inc.c"
};

#include "assets/levelGroup/IntroOutro/model30/model30.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model31/model31.vtx.inc.c"
Mtx IntroOutro_IMtx33 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model31/model31.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model32/model32.vtx.inc.c"
Mtx IntroOutro_IMtx34 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model32/model32.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model33/model33.vtx.inc.c"
Mtx IntroOutro_IMtx35 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model33/model33.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model34/model34.vtx.inc.c"
Mtx IntroOutro_IMtx36 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model34/model34.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model35/model35.vtx.inc.c"
Mtx IntroOutro_IMtx37 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model35/model35.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model36/model36.vtx.inc.c"
Mtx IntroOutro_IMtx38 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model36/model36.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model37/model37.vtx.inc.c"
Mtx IntroOutro_IMtx39 = IDENTITY;
unsigned char IntroOutro_Pad52[] = FILEPAD;
unsigned char IntroOutro_pot1_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model37/pot1.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad53[] = FILEPAD;
unsigned char IntroOutro_pot1_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model37/pot1.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad54[] = FILEPAD;
unsigned char IntroOutro_pot2_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model37/pot2.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad55[] = FILEPAD;
unsigned char IntroOutro_pot2_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model37/pot2.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad56[] = FILEPAD;
unsigned char IntroOutro_pot3_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/model37/pot3.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad57[] = FILEPAD;
unsigned char IntroOutro_pot3_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/model37/pot3.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/model37/model37.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/model38/model38.vtx.inc.c"
Mtx IntroOutro_IMtx40 = IDENTITY;

#include "assets/levelGroup/IntroOutro/model38/model38.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol1/unkCol1.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol1/unkCol1.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol2/unkCol2.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol3/unkCol3.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol3/unkCol3.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol3/unkCol3.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol3/unkCol3.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol4/unkCol4.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol4/unkCol4.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol4/unkCol4.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol4/unkCol4.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol5/unkCol5.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol5/unkCol5.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol5/unkCol5.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol5/unkCol5.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol6/unkCol6.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol6/unkCol6.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol6/unkCol6.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol6/unkCol6.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol7/unkCol7.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol7/unkCol7.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol7/unkCol7.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol7/unkCol7.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol8/unkCol8.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol8/unkCol8.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol8/unkCol8.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol8/unkCol8.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol9/unkCol9.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol9/unkCol9.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol9/unkCol9.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol9/unkCol9.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol10/unkCol10.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol10/unkCol10.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol10/unkCol10.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol10/unkCol10.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol11/unkCol11.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol11/unkCol11.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol11/unkCol11.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol11/unkCol11.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol12/unkCol12.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol12/unkCol12.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol12/unkCol12.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol12/unkCol12.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol13/unkCol13.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol13/unkCol13.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol13/unkCol13.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol13/unkCol13.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol14/unkCol14.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol14/unkCol14.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol14/unkCol14.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol14/unkCol14.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol15/unkCol15.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol15/unkCol15.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol15/unkCol15.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol15/unkCol15.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol16/unkCol16.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol16/unkCol16.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol16/unkCol16.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol16/unkCol16.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol17/unkCol17.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol17/unkCol17.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol17/unkCol17.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol17/unkCol17.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol18/unkCol18.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol18/unkCol18.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol18/unkCol18.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol18/unkCol18.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol19/unkCol19.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol19/unkCol19.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol19/unkCol19.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol19/unkCol19.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol20/unkCol20.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol20/unkCol20.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol20/unkCol20.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol20/unkCol20.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol21/unkCol21.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol21/unkCol21.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol21/unkCol21.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol21/unkCol21.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol22/unkCol22.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol22/unkCol22.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol22/unkCol22.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol22/unkCol22.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol23/unkCol23.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol23/unkCol23.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol23/unkCol23.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol23/unkCol23.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol24/unkCol24.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol24/unkCol24.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol24/unkCol24.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol24/unkCol24.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol25/unkCol25.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol25/unkCol25.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol25/unkCol25.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol25/unkCol25.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol26/unkCol26.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol26/unkCol26.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol26/unkCol26.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol26/unkCol26.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol27/unkCol27.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol27/unkCol27.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol27/unkCol27.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol27/unkCol27.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol28/unkCol28.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol28/unkCol28.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol28/unkCol28.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol28/unkCol28.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol29/unkCol29.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol29/unkCol29.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol29/unkCol29.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol29/unkCol29.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol30/unkCol30.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol30/unkCol30.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol30/unkCol30.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol30/unkCol30.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol31/unkCol31.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol31/unkCol31.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol31/unkCol31.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol31/unkCol31.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol32/unkCol32.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol32/unkCol32.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol32/unkCol32.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol32/unkCol32.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol33/unkCol33.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol33/unkCol33.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol33/unkCol33.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol33/unkCol33.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol34/unkCol34.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol34/unkCol34.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol34/unkCol34.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol34/unkCol34.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol35/unkCol35.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol35/unkCol35.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol35/unkCol35.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol35/unkCol35.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol36/unkCol36.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol36/unkCol36.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol36/unkCol36.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol36/unkCol36.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol37/unkCol37.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol37/unkCol37.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol37/unkCol37.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol37/unkCol37.colH.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol38/unkCol38.colV.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol38/unkCol38.colT.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol38/unkCol38.colS.inc.c"

#include "assets/levelGroup/IntroOutro/unkCol38/unkCol38.colH.inc.c"
Mtx IntroOutro_IMtx41 = IDENTITY;

#include "assets/levelGroup/IntroOutro/ioScope2/ioScope2.light.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx42 = IDENTITY;
unsigned char IntroOutro_Pad58[] = FILEPAD;
unsigned char IntroOutro_davyBlue_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/davyChameleon/davyBlue.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad59[] = FILEPAD;
unsigned char IntroOutro_davyBlue_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/davyChameleon/davyBlue.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx43 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx44 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx45 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx46 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx47 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx48 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_topLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_eyeR.vtx.inc.c"
Mtx IntroOutro_IMtx49 = IDENTITY;
unsigned char IntroOutro_Pad60[] = FILEPAD;
unsigned char IntroOutro_tinyEye1_ia4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/davyChameleon/tinyEye1.ia4.png.inc.c"
};

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_eyeR.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_eyeL.vtx.inc.c"
Mtx IntroOutro_IMtx50 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_eyeL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_head.vtx.inc.c"
Mtx IntroOutro_IMtx51 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_head.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_tail.vtx.inc.c"
Mtx IntroOutro_IMtx52 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_tail.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_body.vtx.inc.c"
Mtx IntroOutro_IMtx53 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_body.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx54 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_bottomRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_mouth.vtx.inc.c"
Mtx IntroOutro_IMtx55 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_mouth.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_backpack1.vtx.inc.c"
Mtx IntroOutro_IMtx56 = IDENTITY;
unsigned char IntroOutro_Pad61[] = FILEPAD;
unsigned char IntroOutro_davyBackpack_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/davyChameleon/davyBackpack.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad62[] = FILEPAD;
unsigned char IntroOutro_davyBackpack_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/davyChameleon/davyBackpack.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_backpack1.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_backpack2.vtx.inc.c"
Mtx IntroOutro_IMtx57 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_backpack2.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_backpack3.vtx.inc.c"
Mtx IntroOutro_IMtx58 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon_backpack4.gfx.inc.c"
Mtx IntroOutro_IMtx59 = IDENTITY;

#include "assets/levelGroup/IntroOutro/davyChameleon/davyChameleon.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx60 = IDENTITY;
unsigned char IntroOutro_Pad63[] = FILEPAD;
unsigned char IntroOutro_jackGreen_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/jackChameleon/jackGreen.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad64[] = FILEPAD;
unsigned char IntroOutro_jackGreen_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/jackChameleon/jackGreen.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx61 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx62 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx63 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx64 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx65 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx66 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_topLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_eyeR.vtx.inc.c"
Mtx IntroOutro_IMtx67 = IDENTITY;
unsigned char IntroOutro_Pad65[] = FILEPAD;
unsigned char IntroOutro_tinyEye2_ia4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/jackChameleon/tinyEye2.ia4.png.inc.c"
};

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_eyeR.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_eyeL.vtx.inc.c"
Mtx IntroOutro_IMtx68 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_eyeL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_head.vtx.inc.c"
Mtx IntroOutro_IMtx69 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_head.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_tail.vtx.inc.c"
Mtx IntroOutro_IMtx70 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_tail.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_body.vtx.inc.c"
Mtx IntroOutro_IMtx71 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_body.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx72 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_bottomRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_mouth.vtx.inc.c"
Mtx IntroOutro_IMtx73 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_mouth.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_backpack1.vtx.inc.c"
Mtx IntroOutro_IMtx74 = IDENTITY;
unsigned char IntroOutro_Pad66[] = FILEPAD;
unsigned char IntroOutro_jackBackpack_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/jackChameleon/jackBackpack.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad67[] = FILEPAD;
unsigned char IntroOutro_jackBackpack_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/jackChameleon/jackBackpack.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_backpack1.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_backpack2.vtx.inc.c"
Mtx IntroOutro_IMtx75 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_backpack2.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_backpack3.vtx.inc.c"
Mtx IntroOutro_IMtx76 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon_backpack4.gfx.inc.c"
Mtx IntroOutro_IMtx77 = IDENTITY;

#include "assets/levelGroup/IntroOutro/jackChameleon/jackChameleon.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx78 = IDENTITY;
unsigned char IntroOutro_Pad68[] = FILEPAD;
unsigned char IntroOutro_fredOrange_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/fredChameleon/fredOrange.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad69[] = FILEPAD;
unsigned char IntroOutro_fredOrange_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/fredChameleon/fredOrange.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx79 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx80 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx81 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx82 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx83 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx84 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_topLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_eyeR.vtx.inc.c"
Mtx IntroOutro_IMtx85 = IDENTITY;
unsigned char IntroOutro_Pad70[] = FILEPAD;
unsigned char IntroOutro_tinyEye3_ia4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/fredChameleon/tinyEye3.ia4.png.inc.c"
};

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_eyeR.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_eyeL.vtx.inc.c"
Mtx IntroOutro_IMtx86 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_eyeL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_head.vtx.inc.c"
Mtx IntroOutro_IMtx87 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_head.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_tail.vtx.inc.c"
Mtx IntroOutro_IMtx88 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_tail.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_body.vtx.inc.c"
Mtx IntroOutro_IMtx89 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_body.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx90 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_bottomRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_mouth.vtx.inc.c"
Mtx IntroOutro_IMtx91 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_mouth.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_backpack1.vtx.inc.c"
Mtx IntroOutro_IMtx92 = IDENTITY;
unsigned char IntroOutro_Pad71[] = FILEPAD;
unsigned char IntroOutro_fredBackpack_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/fredChameleon/fredBackpack.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad72[] = FILEPAD;
unsigned char IntroOutro_fredBackpack_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/fredChameleon/fredBackpack.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_backpack1.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_backpack2.vtx.inc.c"
Mtx IntroOutro_IMtx93 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_backpack2.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_backpack3.vtx.inc.c"
Mtx IntroOutro_IMtx94 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon_backpack4.gfx.inc.c"
Mtx IntroOutro_IMtx95 = IDENTITY;

#include "assets/levelGroup/IntroOutro/fredChameleon/fredChameleon.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx96 = IDENTITY;
unsigned char IntroOutro_Pad73[] = FILEPAD;
unsigned char IntroOutro_lindaPink_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/lindaChameleon/lindaPink.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad74[] = FILEPAD;
unsigned char IntroOutro_lindaPink_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/lindaChameleon/lindaPink.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx97 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx98 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx99 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx100 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx101 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx102 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_topLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_eyeR.vtx.inc.c"
Mtx IntroOutro_IMtx103 = IDENTITY;
unsigned char IntroOutro_Pad75[] = FILEPAD;
unsigned char IntroOutro_tinyEye4_ia4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/lindaChameleon/tinyEye4.ia4.png.inc.c"
};

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_eyeR.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_eyeL.vtx.inc.c"
Mtx IntroOutro_IMtx104 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_eyeL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_head.vtx.inc.c"
Mtx IntroOutro_IMtx105 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_head.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_tail.vtx.inc.c"
Mtx IntroOutro_IMtx106 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_tail.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_body.vtx.inc.c"
Mtx IntroOutro_IMtx107 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_body.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx108 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_bottomRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_mouth.vtx.inc.c"
Mtx IntroOutro_IMtx109 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_mouth.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_backpack1.vtx.inc.c"
Mtx IntroOutro_IMtx110 = IDENTITY;
unsigned char IntroOutro_Pad76[] = FILEPAD;
unsigned char IntroOutro_lindaBackpack_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/lindaChameleon/lindaBackpack.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad77[] = FILEPAD;
unsigned char IntroOutro_lindaBackpack_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/lindaChameleon/lindaBackpack.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_backpack1.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_backpack2.vtx.inc.c"
Mtx IntroOutro_IMtx111 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_backpack2.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_backpack3.vtx.inc.c"
Mtx IntroOutro_IMtx112 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon_backpack4.gfx.inc.c"
Mtx IntroOutro_IMtx113 = IDENTITY;

#include "assets/levelGroup/IntroOutro/lindaChameleon/lindaChameleon.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx114 = IDENTITY;
unsigned char IntroOutro_Pad78[] = FILEPAD;
unsigned char IntroOutro_whiteWhite_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/whiteChameleon/whiteWhite.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad79[] = FILEPAD;
unsigned char IntroOutro_whiteWhite_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/whiteChameleon/whiteWhite.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx115 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomRightAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx116 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomRightAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx117 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx118 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topLeftAnkle.vtx.inc.c"
Mtx IntroOutro_IMtx119 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topLeftAnkle.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topLeftFoot.vtx.inc.c"
Mtx IntroOutro_IMtx120 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_topLeftFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_eyeR.vtx.inc.c"
Mtx IntroOutro_IMtx121 = IDENTITY;
unsigned char IntroOutro_Pad80[] = FILEPAD;
unsigned char IntroOutro_tinyEye5_ia4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/whiteChameleon/tinyEye5.ia4.png.inc.c"
};

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_eyeR.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_eyeL.vtx.inc.c"
Mtx IntroOutro_IMtx122 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_eyeL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_head.vtx.inc.c"
Mtx IntroOutro_IMtx123 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_head.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_tail.vtx.inc.c"
Mtx IntroOutro_IMtx124 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_tail.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_body.vtx.inc.c"
Mtx IntroOutro_IMtx125 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_body.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomRightFoot.vtx.inc.c"
Mtx IntroOutro_IMtx126 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_bottomRightFoot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_mouth.vtx.inc.c"
Mtx IntroOutro_IMtx127 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_mouth.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_backpack1.vtx.inc.c"
Mtx IntroOutro_IMtx128 = IDENTITY;
unsigned char IntroOutro_Pad81[] = FILEPAD;
unsigned char IntroOutro_whiteBackpack_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/whiteChameleon/whiteBackpack.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad82[] = FILEPAD;
unsigned char IntroOutro_whiteBackpack_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/whiteChameleon/whiteBackpack.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_backpack1.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_backpack2.vtx.inc.c"
Mtx IntroOutro_IMtx129 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_backpack2.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_backpack3.vtx.inc.c"
Mtx IntroOutro_IMtx130 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon_backpack4.gfx.inc.c"
Mtx IntroOutro_IMtx131 = IDENTITY;

#include "assets/levelGroup/IntroOutro/whiteChameleon/whiteChameleon.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_ear.vtx.inc.c"
Mtx IntroOutro_IMtx132 = IDENTITY;
unsigned char IntroOutro_Pad83[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_ear1_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_ear1.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad84[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_ear1_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_ear1.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad85[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_ear2_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_ear2.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad86[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_ear2_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_ear2.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_ear.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_earL.vtx.inc.c"
Mtx IntroOutro_IMtx133 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_earL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_head.vtx.inc.c"
Mtx IntroOutro_IMtx134 = IDENTITY;
unsigned char IntroOutro_Pad87[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_eye_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_eye.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad88[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_eye_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_eye.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad89[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_mouth_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_mouth.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad90[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_mouth_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_mouth.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_head.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_foot.vtx.inc.c"
Mtx IntroOutro_IMtx135 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_foot.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_footL.vtx.inc.c"
Mtx IntroOutro_IMtx136 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_footL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_leg.vtx.inc.c"
Mtx IntroOutro_IMtx137 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_leg.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_body.vtx.inc.c"
Mtx IntroOutro_IMtx138 = IDENTITY;
unsigned char IntroOutro_Pad91[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_tuxedo_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_tuxedo.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad92[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_tuxedo_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_tuxedo.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad93[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_tuxedoTop_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_tuxedoTop.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad94[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_tuxedoTop_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_tuxedoTop.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_body.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_legL.vtx.inc.c"
Mtx IntroOutro_IMtx139 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_legL.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_tail.vtx.inc.c"
Mtx IntroOutro_IMtx140 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_tail.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_watch.vtx.inc.c"
Mtx IntroOutro_IMtx141 = IDENTITY;
unsigned char IntroOutro_Pad95[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_watch_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_watch.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad96[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_watch_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_watch.ci4.pal.inc.c"
};
unsigned char IntroOutro_Pad97[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_watchColor_ci4_PNG[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_watchColor.ci4.png.inc.c"
};
unsigned char IntroOutro_Pad98[] = FILEPAD;
unsigned char IntroOutro_rabbitCutscene_watchColor_ci4_PAL[] = {
#include "build/assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_watchColor.ci4.pal.inc.c"
};

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_watch.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_unk1.vtx.inc.c"
Mtx IntroOutro_IMtx142 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_unk1.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_unk2.vtx.inc.c"
Mtx IntroOutro_IMtx143 = IDENTITY;

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_unk2.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_restassociate.mtx.inc.c"

#include "assets/levelGroup/IntroOutro/rabbitCutscene/rabbitCutscene_restassociate.gfx.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk4Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk5Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk5.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk5Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk6Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk6.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk6Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk7Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk7.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk7Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk8Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk8.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk8Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk9Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk9.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk9Pointers.animP.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk10Header.animH.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk10.animArr.inc.c"

#include "assets/levelGroup/IntroOutro/anim/unk19Pointers.animP.inc.c"
