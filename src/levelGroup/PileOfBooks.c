#include "common.h"

extern unsigned char Global_cabinet_ci4_PNG[];
extern unsigned char Global_cabinet_ci4_PAL[];
extern unsigned char Global_DCSandWallFadeUp_ci8_PNG[];
extern unsigned char Global_DCSandWallFadeUp_ci8_PAL[];
extern unsigned char Global_cabinetFade_ci8_PNG[];
extern unsigned char Global_cabinetFade_ci8_PAL[];
extern unsigned char Global_woodFade_ci8_PNG[];
extern unsigned char Global_woodFade_ci8_PAL[];
extern unsigned char Global_DCTiles_ci4_PNG[];
extern unsigned char Global_DCTiles_ci4_PAL[];
extern unsigned char Global_water_ci4_PNG[];
extern unsigned char Global_water_ci4_PAL[];
extern unsigned char Global_GCWood_ci4_PNG[];
extern unsigned char Global_GCWood_ci4_PAL[];
extern unsigned char Global_GCWall_ci4_PNG[];
extern unsigned char Global_GCWall_ci4_PAL[];
extern unsigned char Global_fogFade_ia8_PNG[];

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
extern Gfx PileOfBooks_model1_Gfx[];
extern CollisionData PileOfBooks_unkCol1_ColH;
extern Gfx PileOfBooks_model2_Gfx[];
extern CollisionData PileOfBooks_unkCol2_ColH;
extern Gfx PileOfBooks_model3_Gfx[];
extern CollisionData PileOfBooks_unkCol3_ColH;
extern Gfx PileOfBooks_model4_Gfx[];
extern CollisionData PileOfBooks_unkCol4_ColH;
extern Gfx PileOfBooks_model5_Gfx[];
extern CollisionData PileOfBooks_unkCol5_ColH;
extern Gfx PileOfBooks_model6_Gfx[];
extern CollisionData PileOfBooks_unkCol6_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;

Mtx PileOfBooks_IMtx1 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/pointers.lvp.inc.c"

#include "build/assets/levelGroup/PileOfBooks/rabObjects.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj1.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj2.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj3.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj4.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj5.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj6.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj7.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj8.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj9.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj10.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj11.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj12.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_obj13.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/roomMulti_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj1.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj2.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj3.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj4.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj5.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj6.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj7.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj8.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj9.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj10.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj11.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj12.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj13.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj14.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj15.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj16.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_obj17.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomActors/room0_act1.roomAct.inc.c"

#include "assets/levelGroup/PileOfBooks/roomActors/room0_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/PileOfBooks/roomActors/room1_act1.roomAct.inc.c"

#include "assets/levelGroup/PileOfBooks/roomActors/room1_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/PileOfBooks/spriteLib.sprLib.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj1.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj2.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj3.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj4.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj5.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj6.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj7.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj8.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj9.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj10.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj11.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_obj12.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/roomObjects/room3_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/PileOfBooks/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/PileOfBooks/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/PileOfBooks/rooms/room2.rmSet.inc.c"

#include "assets/levelGroup/PileOfBooks/rooms/room3.rmSet.inc.c"

#include "assets/levelGroup/PileOfBooks/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/PileOfBooks/map.lvmM.inc.c"

#include "assets/levelGroup/PileOfBooks/map.lvmH.inc.c"

#include "assets/levelGroup/PileOfBooks/spriteActor/roomUnk_spr1.sprite.inc.c"

#include "assets/levelGroup/PileOfBooks/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/PileOfBooks/scope.lvlScope.inc.c"

#include "assets/levelGroup/PileOfBooks/header.lvlHdr.inc.c"
s32 pob_pad2[3] = 0;
Mtx PileOfBooks_IMtx2 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/pobScope/pobScope.light.inc.c"

#include "assets/levelGroup/PileOfBooks/model1/model1.vtx.inc.c"
Mtx PileOfBooks_IMtx3 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/model1/model1.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/model2/model2.vtx.inc.c"
Mtx PileOfBooks_IMtx4 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/model2/model2.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/model3/model3.vtx.inc.c"
Mtx PileOfBooks_IMtx5 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/model3/model3.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/model4/model4.vtx.inc.c"
Mtx PileOfBooks_IMtx6 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/model4/model4.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/model5/model5.vtx.inc.c"
Mtx PileOfBooks_IMtx7 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/model5/model5.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/model6/model6.vtx.inc.c"
Mtx PileOfBooks_IMtx8 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/model6/model6.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colS.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colH.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colH.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol3/unkCol3.colV.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol3/unkCol3.colT.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol3/unkCol3.colS.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol3/unkCol3.colH.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol4/unkCol4.colV.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol4/unkCol4.colT.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol4/unkCol4.colS.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol4/unkCol4.colH.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol5/unkCol5.colV.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol5/unkCol5.colT.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol5/unkCol5.colS.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol5/unkCol5.colH.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol6/unkCol6.colV.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol6/unkCol6.colT.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol6/unkCol6.colS.inc.c"

#include "assets/levelGroup/PileOfBooks/unkCol6/unkCol6.colH.inc.c"
Mtx PileOfBooks_IMtx9 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/pobScope2/pobScope2.light.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model1/a_model1.vtx.inc.c"
Mtx PileOfBooks_IMtx10 = IDENTITY;
unsigned char PileOfBooks_Pad1[] = FILEPAD;
unsigned char PileOfBooks_cTbarrel_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/cTbarrel.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad2[] = FILEPAD;
unsigned char PileOfBooks_cTbarrel_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/cTbarrel.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad3[] = FILEPAD;
unsigned char PileOfBooks_barrelSide_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/barrelSide.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad4[] = FILEPAD;
unsigned char PileOfBooks_barrelSide_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/barrelSide.ci4.pal.inc.c"
};

#include "assets/levelGroup/PileOfBooks/a_model1/a_model1.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model2/a_model2.vtx.inc.c"
Mtx PileOfBooks_IMtx11 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model2/a_model2.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model3/a_model3.vtx.inc.c"
Mtx PileOfBooks_IMtx12 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model3/a_model3.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model4/a_model4.vtx.inc.c"
Mtx PileOfBooks_IMtx13 = IDENTITY;
unsigned char PileOfBooks_Pad5[] = FILEPAD;
unsigned char PileOfBooks_painting_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/painting.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad6[] = FILEPAD;
unsigned char PileOfBooks_painting_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/painting.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad7[] = FILEPAD;
unsigned char PileOfBooks_color_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad8[] = FILEPAD;
unsigned char PileOfBooks_color_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color.ci4.pal.inc.c"
};

#include "assets/levelGroup/PileOfBooks/a_model4/a_model4.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model5/a_model5.vtx.inc.c"
Mtx PileOfBooks_IMtx14 = IDENTITY;
unsigned char PileOfBooks_Pad9[] = FILEPAD;
unsigned char PileOfBooks_crate_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/crate.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad10[] = FILEPAD;
unsigned char PileOfBooks_crate_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/crate.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad11[] = FILEPAD;
unsigned char PileOfBooks_wood_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/wood.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad12[] = FILEPAD;
unsigned char PileOfBooks_wood_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/wood.ci4.pal.inc.c"
};

#include "assets/levelGroup/PileOfBooks/a_model5/a_model5.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model6/a_model6.vtx.inc.c"
Mtx PileOfBooks_IMtx15 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model6/a_model6.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model7/a_model7.vtx.inc.c"
Mtx PileOfBooks_IMtx16 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model7/a_model7.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model8/a_model8.vtx.inc.c"
Mtx PileOfBooks_IMtx17 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model8/a_model8.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model9/a_model9.vtx.inc.c"
Mtx PileOfBooks_IMtx18 = IDENTITY;
unsigned char PileOfBooks_Pad13[] = FILEPAD;
unsigned char PileOfBooks_drawer_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/drawer.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad14[] = FILEPAD;
unsigned char PileOfBooks_drawer_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/drawer.ci4.pal.inc.c"
};

#include "assets/levelGroup/PileOfBooks/a_model9/a_model9.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model19/a_model19.vtx.inc.c"
Mtx PileOfBooks_IMtx19 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model19/a_model19.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model10/a_model10.vtx.inc.c"
Mtx PileOfBooks_IMtx20 = IDENTITY;
unsigned char PileOfBooks_Pad15[] = FILEPAD;
unsigned char PileOfBooks_color2_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color2.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad16[] = FILEPAD;
unsigned char PileOfBooks_color2_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color2.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad17[] = FILEPAD;
unsigned char PileOfBooks_scroll_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/scroll.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad18[] = FILEPAD;
unsigned char PileOfBooks_scroll_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/scroll.ci4.pal.inc.c"
};

#include "assets/levelGroup/PileOfBooks/a_model10/a_model10.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model11/a_model11.vtx.inc.c"
Mtx PileOfBooks_IMtx21 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model11/a_model11.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model12/a_model12.vtx.inc.c"
Mtx PileOfBooks_IMtx22 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model12/a_model12.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model13/a_model13.vtx.inc.c"
Mtx PileOfBooks_IMtx23 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model13/a_model13.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model14/a_model14.vtx.inc.c"
Mtx PileOfBooks_IMtx24 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model14/a_model14.gfx.inc.c"
Mtx PileOfBooks_IMtx25 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model15/a_model15.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model16/a_model16.vtx.inc.c"
Mtx PileOfBooks_IMtx26 = IDENTITY;
unsigned char PileOfBooks_Pad19[] = FILEPAD;
unsigned char PileOfBooks_sandal_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/sandal.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad20[] = FILEPAD;
unsigned char PileOfBooks_sandal_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/sandal.ci8.pal.inc.c"
};
unsigned char PileOfBooks_Pad21[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_face_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_face.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad22[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_face_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_face.ci8.pal.inc.c"
};
unsigned char PileOfBooks_Pad23[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_side_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_side.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad24[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_side_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_side.ci8.pal.inc.c"
};

#include "assets/levelGroup/PileOfBooks/a_model16/a_model16.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/a_model17/a_model17.vtx.inc.c"
Mtx PileOfBooks_IMtx27 = IDENTITY;
unsigned char PileOfBooks_Pad25[] = FILEPAD;
unsigned char PileOfBooks_thing_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/thing.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad26[] = FILEPAD;
unsigned char PileOfBooks_thing_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/thing.ci8.pal.inc.c"
};

#include "assets/levelGroup/PileOfBooks/a_model17/a_model17.gfx.inc.c"
Mtx PileOfBooks_IMtx28 = IDENTITY;

#include "assets/levelGroup/PileOfBooks/a_model18/a_model18.gfx.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk4Pointers.animP.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk5Header.animH.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk5.animArr.inc.c"

#include "assets/levelGroup/PileOfBooks/anim/unk5Pointers.animP.inc.c"
