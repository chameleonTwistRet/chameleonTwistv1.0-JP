#include "common.h"

extern unsigned char Global_antMural4_i4_PNG[];
extern unsigned char Global_yellowBrickWall_ci4_PAL[];
extern unsigned char Global_yellowBrickWall_ci4_PNG[];
extern unsigned char Global_antMural3_i4_PNG[];
extern unsigned char Global_antMural2_i4_PNG[];
extern unsigned char Global_bigBrickWall_i4_PNG[];
extern unsigned char Global_antMural1_i4_PNG[];

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
extern Gfx Quintella_model1_Gfx[];
extern CollisionData Quintella_unkCol1_ColH;
extern Gfx Quintella_model2_Gfx[];
extern CollisionData Quintella_unkCol2_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;


Mtx Quintella_IMtx1 = IDENTITY;

#include "assets/levelGroup/Quintella/pointers.lvp.inc.c"

#include "build/assets/levelGroup/Quintella/rabObjects.inc.c"

#include "assets/levelGroup/Quintella/spriteLib.sprLib.inc.c"

#include "assets/levelGroup/Quintella/collectables/roomUnk_clct1.clct.inc.c"

#include "assets/levelGroup/Quintella/collectables/roomUnk_clct2.clct.inc.c"

#include "assets/levelGroup/Quintella/collectables/roomUnk_clct3.clct.inc.c"

#include "assets/levelGroup/Quintella/collectables/roomUnk_clct4.clct.inc.c"

#include "assets/levelGroup/Quintella/collectables/roomUnk_clct5.clct.inc.c"

#include "assets/levelGroup/Quintella/collectables/roomUnk_clct6.clct.inc.c"

#include "assets/levelGroup/Quintella/collectables/roomUnk_clctSTOP.clct.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj1.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj2.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj3.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj4.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj5.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj6.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj7.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj8.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj9.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj10.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj11.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj12.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_obj13.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomObjects/roomMulti_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/Quintella/roomActors/room0_act1.roomAct.inc.c"

#include "assets/levelGroup/Quintella/roomActors/room0_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/Quintella/roomActors/room1_act1.roomAct.inc.c"

#include "assets/levelGroup/Quintella/roomActors/room1_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/Quintella/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/Quintella/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/Quintella/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/Quintella/map.lvmM.inc.c"

#include "assets/levelGroup/Quintella/map.lvmH.inc.c"

#include "assets/levelGroup/Quintella/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/Quintella/scope.lvlScope.inc.c"

#include "assets/levelGroup/Quintella/header.lvlHdr.inc.c"
s32 alignment_Quintella[2] = {0, 0};
Mtx Quintella_IMtx2 = IDENTITY;

#include "assets/levelGroup/Quintella/qtScope/qtScope.light.inc.c"

#include "assets/levelGroup/Quintella/model1/model1.vtx.inc.c"
Mtx Quintella_IMtx3 = IDENTITY;
unsigned char Quintella_Pad1[] = FILEPAD;
unsigned char Quintella_mural_i4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/mural.i4.png.inc.c"
};
unsigned char Quintella_Pad2[] = FILEPAD;
unsigned char Quintella_wallFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/wallFade.ci8.png.inc.c"
};
unsigned char Quintella_Pad3[] = FILEPAD;
unsigned char Quintella_wallFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/wallFade.ci8.pal.inc.c"
};

#include "assets/levelGroup/Quintella/model1/model1.gfx.inc.c"

#include "assets/levelGroup/Quintella/model2/model2.vtx.inc.c"
Mtx Quintella_IMtx4 = IDENTITY;

#include "assets/levelGroup/Quintella/model2/model2.gfx.inc.c"

#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colS.inc.c"

#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colH.inc.c"

#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colH.inc.c"
Mtx Quintella_IMtx5 = IDENTITY;

#include "assets/levelGroup/Quintella/qtScope2/qtScope2.light.inc.c"

#include "assets/levelGroup/Quintella/a_model1/a_model1.vtx.inc.c"
Mtx Quintella_IMtx6 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model1/a_model1.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model2/a_model2.vtx.inc.c"
Mtx Quintella_IMtx7 = IDENTITY;
unsigned char Quintella_Pad4[] = FILEPAD;
unsigned char Quintella_color_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color.ci4.png.inc.c"
};
unsigned char Quintella_Pad5[] = FILEPAD;
unsigned char Quintella_color_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color.ci4.pal.inc.c"
};
unsigned char Quintella_Pad6[] = FILEPAD;
unsigned char Quintella_color2_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color2.ci4.png.inc.c"
};
unsigned char Quintella_Pad7[] = FILEPAD;
unsigned char Quintella_color2_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color2.ci4.pal.inc.c"
};
unsigned char Quintella_Pad8[] = FILEPAD;
unsigned char Quintella_gaster_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/gaster.ci4.png.inc.c"
};
unsigned char Quintella_Pad9[] = FILEPAD;
unsigned char Quintella_gaster_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/gaster.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model2/a_model2.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model3/a_model3.vtx.inc.c"
Mtx Quintella_IMtx8 = IDENTITY;
unsigned char Quintella_Pad10[] = FILEPAD;
unsigned char Quintella_eye_ci8_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/eye.ci8.png.inc.c"
};
unsigned char Quintella_Pad11[] = FILEPAD;
unsigned char Quintella_eye_ci8_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/eye.ci8.pal.inc.c"
};
unsigned char Quintella_Pad12[] = FILEPAD;
unsigned char Quintella_color3_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color3.ci4.png.inc.c"
};
unsigned char Quintella_Pad13[] = FILEPAD;
unsigned char Quintella_color3_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color3.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model3/a_model3.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model4/a_model4.vtx.inc.c"
Mtx Quintella_IMtx9 = IDENTITY;
unsigned char Quintella_Pad14[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.png.inc.c"
};
unsigned char Quintella_Pad15[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model4/a_model4.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model5/a_model5.vtx.inc.c"
Mtx Quintella_IMtx10 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model5/a_model5.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model6/a_model6.vtx.inc.c"
Mtx Quintella_IMtx11 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model6/a_model6.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model7/a_model7.vtx.inc.c"
Mtx Quintella_IMtx12 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model7/a_model7.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model8/a_model8.vtx.inc.c"
Mtx Quintella_IMtx13 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model8/a_model8.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model9/a_model9.vtx.inc.c"
Mtx Quintella_IMtx14 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model9/a_model9.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model10/a_model10.vtx.inc.c"
Mtx Quintella_IMtx15 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model10/a_model10.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model11/a_model11.vtx.inc.c"
Mtx Quintella_IMtx16 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model11/a_model11.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model12/a_model12.vtx.inc.c"
Mtx Quintella_IMtx17 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model12/a_model12.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model13/a_model13.vtx.inc.c"
Mtx Quintella_IMtx18 = IDENTITY;
unsigned char Quintella_Pad16[] = FILEPAD;
unsigned char Quintella_dressTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dressTop.ci4.png.inc.c"
};
unsigned char Quintella_Pad17[] = FILEPAD;
unsigned char Quintella_dressTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/dressTop.ci4.pal.inc.c"
};
unsigned char Quintella_Pad18[] = FILEPAD;
unsigned char Quintella_dressUncompressed_rgba16_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dressUncompressed.rgba16.png.inc.c"
};
unsigned char Quintella_Pad19[] = FILEPAD;
unsigned char Quintella_dress_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dress.ci4.png.inc.c"
};
unsigned char Quintella_Pad20[] = FILEPAD;
unsigned char Quintella_dress_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/dress.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model13/a_model13.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model14/a_model14.vtx.inc.c"
Mtx Quintella_IMtx19 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model14/a_model14.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model15/a_model15.vtx.inc.c"
Mtx Quintella_IMtx20 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model15/a_model15.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model16/a_model16.vtx.inc.c"
Mtx Quintella_IMtx21 = IDENTITY;
unsigned char Quintella_Pad21[] = FILEPAD;
unsigned char Quintella_fan_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.png.inc.c"
};
unsigned char Quintella_Pad22[] = FILEPAD;
unsigned char Quintella_fan_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.pal.inc.c"
};

#include "assets/levelGroup/Quintella/a_model16/a_model16.gfx.inc.c"

#include "assets/levelGroup/Quintella/a_model17/a_model17.vtx.inc.c"
Mtx Quintella_IMtx22 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model17/a_model17.gfx.inc.c"
Mtx Quintella_IMtx23 = IDENTITY;

#include "assets/levelGroup/Quintella/a_model18/a_model18.gfx.inc.c"

#include "assets/levelGroup/Quintella/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk5Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk5.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk6Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk6.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk7Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk7.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk8Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk8.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk9Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk9.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk10Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk10.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk11Header.animH.inc.c"

#include "assets/levelGroup/Quintella/anim/unk11.animArr.inc.c"

#include "assets/levelGroup/Quintella/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk4Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk5Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk6Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk7Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk8Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk9Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk10Pointers.animP.inc.c"

#include "assets/levelGroup/Quintella/anim/unk11Pointers.animP.inc.c"
