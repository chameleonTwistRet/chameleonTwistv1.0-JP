#include "common.h"

extern unsigned char Global_dcTHING2_ci4_PNG[];
extern unsigned char Global_dcTHING2_ci4_PAL[];
extern unsigned char Global_squares_i4_PNG[];
extern unsigned char Global_DCSmallTiles_ci4_PNG[];
extern unsigned char Global_DCSmallTiles_ci4_PAL[];
extern unsigned char Global_DCTiles_ci4_PNG[];
extern unsigned char Global_DCTiles_ci4_PAL[];
extern unsigned char Global_hexCombFade_i8_PNG[];
extern unsigned char Global_fogFade_ia8_PNG[];
extern unsigned char Global_GCThing1_ci4_PNG[];
extern unsigned char Global_GCThing1_ci4_PAL[];
extern unsigned char Global_pebbles_ci4_PNG[];
extern unsigned char Global_pebbles_ci4_PAL[];
extern unsigned char Global_strip2_i4_PNG[];
extern unsigned char Global_smallBrickWall_i4_PNG[];
extern unsigned char Global_fraMEd_ia4_PNG[];

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
extern Gfx BossRush_model1_Gfx[];
extern CollisionData BossRush_unkCol1_ColH;
extern Gfx BossRush_model2_Gfx[];
extern CollisionData BossRush_unkCol2_ColH;
extern Gfx BossRush_model3_Gfx[];
extern CollisionData BossRush_unkCol3_ColH;
extern Gfx BossRush_model4_Gfx[];
extern CollisionData BossRush_unkCol4_ColH;
extern Gfx BossRush_model5_Gfx[];
extern CollisionData BossRush_unkCol5_ColH;
extern Gfx BossRush_model6_Gfx[];
extern CollisionData BossRush_unkCol6_ColH;
extern Gfx BossRush_model7_Gfx[];
extern CollisionData BossRush_unkCol7_ColH;
extern Gfx BossRush_model8_Gfx[];
extern CollisionData BossRush_unkCol8_ColH;
extern Gfx BossRush_model9_Gfx[];
extern CollisionData BossRush_unkCol9_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;


Mtx BossRush_IMtx1 = IDENTITY;

#include "assets/levelGroup/BossRush/pointers.lvp.inc.c"

#include "build/assets/levelGroup/BossRush/rabObjects.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj1.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj2.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj3.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj4.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj5.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj6.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj7.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj8.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj9.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj10.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj11.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj12.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj13.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj14.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj15.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj16.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj17.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj18.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj19.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj20.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj21.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj22.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj23.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj24.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj25.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj26.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj27.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj28.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj29.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj30.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj31.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj32.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj33.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj34.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj35.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj36.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj37.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj38.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj39.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj40.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj41.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj42.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_obj43.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BossRush/spriteActors/roomMulti_spr1.sprite.inc.c"

#include "assets/levelGroup/BossRush/spriteActors/roomMulti_spr2.sprite.inc.c"

#include "assets/levelGroup/BossRush/spriteActors/roomMulti_spr3.sprite.inc.c"

#include "assets/levelGroup/BossRush/spriteActors/roomMulti_spr4.sprite.inc.c"

#include "assets/levelGroup/BossRush/spriteActors/roomMulti_spr5.sprite.inc.c"

#include "assets/levelGroup/BossRush/spriteActors/roomMulti_spr6.sprite.inc.c"

#include "assets/levelGroup/BossRush/spriteActors/roomMulti_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room1_obj1.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room1_obj2.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room1_obj3.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/room1_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti2_obj1.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti2_obj2.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti2_obj3.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti3_obj1.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti3_obj2.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti3_obj3.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti3_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti4_obj1.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti4_obj2.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti4_obj3.roomObj.inc.c"

#include "assets/levelGroup/BossRush/roomObjects/roomMulti4_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BossRush/spriteLib.sprLib.inc.c"

#include "assets/levelGroup/BossRush/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room2.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room3.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room4.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room5.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room6.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room7.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/room8.rmSet.inc.c"

#include "assets/levelGroup/BossRush/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/BossRush/map.lvmM.inc.c"

#include "assets/levelGroup/BossRush/map.lvmH.inc.c"

#include "assets/levelGroup/BossRush/extRooms/roomUnk.rmSet.inc.c"

#include "assets/levelGroup/BossRush/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/BossRush/scope.lvlScope.inc.c"

#include "assets/levelGroup/BossRush/header.lvlHdr.inc.c"
Mtx BossRush_IMtx2 = IDENTITY;

#include "assets/levelGroup/BossRush/bossScope1/bossScope1.light.inc.c"

#include "assets/levelGroup/BossRush/model1/model1.vtx.inc.c"
Mtx BossRush_IMtx3 = IDENTITY;

#include "assets/levelGroup/BossRush/model1/model1.gfx.inc.c"

#include "assets/levelGroup/BossRush/model2/model2.vtx.inc.c"
Mtx BossRush_IMtx4 = IDENTITY;

#include "assets/levelGroup/BossRush/model2/model2.gfx.inc.c"

#include "assets/levelGroup/BossRush/model3/model3.vtx.inc.c"
Mtx BossRush_IMtx5 = IDENTITY;

#include "assets/levelGroup/BossRush/model3/model3.gfx.inc.c"

#include "assets/levelGroup/BossRush/model4/model4.vtx.inc.c"
Mtx BossRush_IMtx6 = IDENTITY;

#include "assets/levelGroup/BossRush/model4/model4.gfx.inc.c"

#include "assets/levelGroup/BossRush/model5/model5.vtx.inc.c"
Mtx BossRush_IMtx7 = IDENTITY;

#include "assets/levelGroup/BossRush/model5/model5.gfx.inc.c"

#include "assets/levelGroup/BossRush/model6/model6.vtx.inc.c"
Mtx BossRush_IMtx8 = IDENTITY;

#include "assets/levelGroup/BossRush/model6/model6.gfx.inc.c"

#include "assets/levelGroup/BossRush/model7/model7.vtx.inc.c"
Mtx BossRush_IMtx9 = IDENTITY;

#include "assets/levelGroup/BossRush/model7/model7.gfx.inc.c"

#include "assets/levelGroup/BossRush/model8/model8.vtx.inc.c"
Mtx BossRush_IMtx10 = IDENTITY;

#include "assets/levelGroup/BossRush/model8/model8.gfx.inc.c"

#include "assets/levelGroup/BossRush/model9/model9.vtx.inc.c"
Mtx BossRush_IMtx11 = IDENTITY;

#include "assets/levelGroup/BossRush/model9/model9.gfx.inc.c"

#include "assets/levelGroup/BossRush/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol1/unkCol1.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol1/unkCol1.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol2/unkCol2.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol3/unkCol3.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol3/unkCol3.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol3/unkCol3.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol3/unkCol3.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol4/unkCol4.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol4/unkCol4.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol4/unkCol4.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol4/unkCol4.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol5/unkCol5.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol5/unkCol5.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol5/unkCol5.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol5/unkCol5.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol6/unkCol6.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol6/unkCol6.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol6/unkCol6.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol6/unkCol6.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol7/unkCol7.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol7/unkCol7.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol7/unkCol7.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol7/unkCol7.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol8/unkCol8.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol8/unkCol8.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol8/unkCol8.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol8/unkCol8.colH.inc.c"

#include "assets/levelGroup/BossRush/unkCol9/unkCol9.colV.inc.c"

#include "assets/levelGroup/BossRush/unkCol9/unkCol9.colT.inc.c"

#include "assets/levelGroup/BossRush/unkCol9/unkCol9.colS.inc.c"

#include "assets/levelGroup/BossRush/unkCol9/unkCol9.colH.inc.c"
s32 bossRush_pad[2] = {0, 0};
Mtx BossRush_IMtx12 = IDENTITY;
