#include "common.h"


extern unsigned char Global_JLCaveFadeTop_ci8_PAL[];
extern unsigned char Global_JLCaveFadeTop_ci8_PNG[];
extern unsigned char Global_JLCaveFade_ci8_PAL[];
extern unsigned char Global_JLCaveFade_ci8_PNG[];
extern unsigned char Global_jlText5_ci4_PAL[];
extern unsigned char Global_jlText5_ci4_PNG[];

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
extern Gfx LizardKong_model1_Gfx[];
extern CollisionData LizardKong_unkCol1_ColH;
extern Gfx LizardKong_model2_Gfx[];
extern CollisionData LizardKong_unkCol2_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;

Mtx LizardKong_IMtx1 = IDENTITY;

#include "assets/levelGroup/LizardKong/pointers.lvp.inc.c"

#include "build/assets/levelGroup/LizardKong/rabObjects.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj1.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj2.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj3.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj4.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj5.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj6.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj7.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_obj8.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room0_act1.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room0_act2.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room0_act3.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room0_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room1_act1.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room1_act2.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room1_act3.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/roomActors/room1_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/LizardKong/spriteLib.sprLib.inc.c"

#include "assets/levelGroup/LizardKong/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/LizardKong/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/LizardKong/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/LizardKong/map.lvmM.inc.c"

#include "assets/levelGroup/LizardKong/map.lvmH.inc.c"

#include "assets/levelGroup/LizardKong/scope.lvlScope.inc.c"

#include "assets/levelGroup/LizardKong/header.lvlHdr.inc.c"
Mtx LizardKong_IMtx2 = IDENTITY;

#include "assets/levelGroup/LizardKong/lkScope/lkScope.light.inc.c"

#include "assets/levelGroup/LizardKong/model1/model1.vtx.inc.c"
Mtx LizardKong_IMtx3 = IDENTITY;
unsigned char LizardKong_Pad1[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.png.inc.c"
};
unsigned char LizardKong_Pad2[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/model1/model1.gfx.inc.c"

#include "assets/levelGroup/LizardKong/model2/model2.vtx.inc.c"
Mtx LizardKong_IMtx4 = IDENTITY;

#include "assets/levelGroup/LizardKong/model2/model2.gfx.inc.c"

#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colV.inc.c"

#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colT.inc.c"

#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colS.inc.c"

#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colH.inc.c"

#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colH.inc.c"
Mtx LizardKong_IMtx5 = IDENTITY;

#include "assets/levelGroup/LizardKong/lkScope2/lkScope2.light.inc.c"

#include "assets/levelGroup/LizardKong/a_model1/a_model1.vtx.inc.c"
Mtx LizardKong_IMtx6 = IDENTITY;
unsigned char LizardKong_Pad3[] = FILEPAD;
unsigned char LizardKong_hair1_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/hair1.ci8.png.inc.c"
};
unsigned char LizardKong_Pad4[] = FILEPAD;
unsigned char LizardKong_hair1_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/hair1.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad5[] = FILEPAD;
unsigned char LizardKong_color_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/color.ci4.png.inc.c"
};
unsigned char LizardKong_Pad6[] = FILEPAD;
unsigned char LizardKong_color_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/color.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad7[] = FILEPAD;
unsigned char LizardKong_ear_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/ear.ci4.png.inc.c"
};
unsigned char LizardKong_Pad8[] = FILEPAD;
unsigned char LizardKong_ear_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/ear.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad9[] = FILEPAD;
unsigned char LizardKong_hair2_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/hair2.ci8.png.inc.c"
};
unsigned char LizardKong_Pad10[] = FILEPAD;
unsigned char LizardKong_hair2_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/hair2.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad11[] = FILEPAD;
unsigned char LizardKong_face_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/face.ci4.png.inc.c"
};
unsigned char LizardKong_Pad12[] = FILEPAD;
unsigned char LizardKong_face_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/face.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model1/a_model1.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model2/a_model2.vtx.inc.c"
Mtx LizardKong_IMtx7 = IDENTITY;
unsigned char LizardKong_Pad13[] = FILEPAD;
unsigned char LizardKong_fur_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fur.ci4.png.inc.c"
};
unsigned char LizardKong_Pad14[] = FILEPAD;
unsigned char LizardKong_fur_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fur.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad15[] = FILEPAD;
unsigned char LizardKong_arm_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/arm.ci4.png.inc.c"
};
unsigned char LizardKong_Pad16[] = FILEPAD;
unsigned char LizardKong_arm_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/arm.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model2/a_model2.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model3/a_model3.vtx.inc.c"
Mtx LizardKong_IMtx8 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model3/a_model3.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model4/a_model4.vtx.inc.c"
Mtx LizardKong_IMtx9 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model4/a_model4.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model5/a_model5.vtx.inc.c"
Mtx LizardKong_IMtx10 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model5/a_model5.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model6/a_model6.vtx.inc.c"
Mtx LizardKong_IMtx11 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model6/a_model6.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model7/a_model7.vtx.inc.c"
Mtx LizardKong_IMtx12 = IDENTITY;
unsigned char LizardKong_Pad17[] = FILEPAD;
unsigned char LizardKong_fist1_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist1.ci4.png.inc.c"
};
unsigned char LizardKong_Pad18[] = FILEPAD;
unsigned char LizardKong_fist1_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist1.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad19[] = FILEPAD;
unsigned char LizardKong_fist2_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist2.ci4.png.inc.c"
};
unsigned char LizardKong_Pad20[] = FILEPAD;
unsigned char LizardKong_fist2_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist2.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad21[] = FILEPAD;
unsigned char LizardKong_fist3_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist3.ci4.png.inc.c"
};
unsigned char LizardKong_Pad22[] = FILEPAD;
unsigned char LizardKong_fist3_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist3.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad23[] = FILEPAD;
unsigned char LizardKong_fist4_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist4.ci4.png.inc.c"
};
unsigned char LizardKong_Pad24[] = FILEPAD;
unsigned char LizardKong_fist4_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist4.ci4.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model7/a_model7.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model8/a_model8.vtx.inc.c"
Mtx LizardKong_IMtx13 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model8/a_model8.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model9/a_model9.vtx.inc.c"
Mtx LizardKong_IMtx14 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model9/a_model9.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model10/a_model10.vtx.inc.c"
Mtx LizardKong_IMtx15 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model10/a_model10.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model11/a_model11.vtx.inc.c"
Mtx LizardKong_IMtx16 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model11/a_model11.gfx.inc.c"
Mtx LizardKong_IMtx17 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model12/a_model12.gfx.inc.c"

#include "assets/levelGroup/LizardKong/a_model13/a_model13.vtx.inc.c"
Mtx LizardKong_IMtx18 = IDENTITY;
unsigned char LizardKong_Pad25[] = FILEPAD;
unsigned char LizardKong_boulder_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder.ci8.png.inc.c"
};
unsigned char LizardKong_Pad26[] = FILEPAD;
unsigned char LizardKong_boulder_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad27[] = FILEPAD;
unsigned char LizardKong_boulder2_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder2.ci8.png.inc.c"
};
unsigned char LizardKong_Pad28[] = FILEPAD;
unsigned char LizardKong_boulder2_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder2.ci8.pal.inc.c"
};

#include "assets/levelGroup/LizardKong/a_model13/a_model13.gfx.inc.c"
Mtx LizardKong_IMtx19 = IDENTITY;

#include "assets/levelGroup/LizardKong/a_model14/a_model14.gfx.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk1Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk1.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk1Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk2Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk2.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk2Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk3Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk3.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk3Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk4Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk4.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk4Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk5Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk5.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk5Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk6Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk6.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk6Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk7Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk7.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk7Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk8Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk8.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk8Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk9Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk9.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk9Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk10Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk10.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk10Pointers.animP.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk11Header.animH.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk11.animArr.inc.c"

#include "assets/levelGroup/LizardKong/anim/unk11Pointers.animP.inc.c"
