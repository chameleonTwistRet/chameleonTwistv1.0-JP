#include "common.h"

//proper names
extern unsigned char Global_poleWood_ci8_PAL[]; // pole palette
extern unsigned char Global_poleWood_ci8_PNG[]; // pole img
//build names
extern unsigned char D_02028D30_Global[]; // pole palette
extern unsigned char D_02028528_Global[]; // pole img
extern Vtx D_800FE7D8_Global[];
extern Vtx D_800FE8C8_Global[];


Mtx Global_IMtx1 = IDENTITY;

Lights1 Global_globalScope_Light =
    #include "assets/levelGroup/Global/globalScope/globalScope.light.inc.c"

Vtx Global_cannon_Vtx[] = {
    #include "assets/levelGroup/Global/cannon/cannon.vtx.inc.c"
};
Mtx Global_IMtx2 = IDENTITY;
unsigned char Global_Pad1[] = FILEPAD;
unsigned char Global_cannonHole_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannon/cannonHole.rgba16.png.inc.c"
};
unsigned char Global_Pad2[] = FILEPAD;
unsigned char Global_cannonBarrel_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannon/cannonBarrel.rgba16.png.inc.c"
};
unsigned char Global_Pad3[] = FILEPAD;
unsigned char Global_black_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannon/black.rgba16.png.inc.c"
};

Gfx Global_cannon_Gfx[] = {
    #include "assets/levelGroup/Global/cannon/cannon.gfx.inc.c"
};

Vtx Global_cannonHolder_Vtx[] = {
    #include "assets/levelGroup/Global/cannonHolder/cannonHolder.vtx.inc.c"
};
Mtx Global_IMtx3 = IDENTITY;
unsigned char Global_Pad4[] = FILEPAD;
unsigned char Global_woodWithBolt_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/woodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad5[] = FILEPAD;
unsigned char Global_darkWoodWithBolt_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/darkWoodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad6[] = FILEPAD;
unsigned char Global_darkWood_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/darkWood.rgba16.png.inc.c"
};
unsigned char Global_Pad7[] = FILEPAD;
unsigned char Global_lightWood_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/lightWood.rgba16.png.inc.c"
};
unsigned char Global_Pad8[] = FILEPAD;
unsigned char Global_midWood_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/midWood.rgba16.png.inc.c"
};

Gfx Global_cannonHolder_Gfx[] = {
    #include "assets/levelGroup/Global/cannonHolder/cannonHolder.gfx.inc.c"
};

Vtx Global_pole_Vtx[] = {
    #include "assets/levelGroup/Global/pole/pole.vtx.inc.c"
};
Mtx Global_IMtx4 = IDENTITY;

Gfx Global_pole_Gfx[] = {
    #include "assets/levelGroup/Global/pole/pole.gfx.inc.c"
};

Vtx Global_unusedStructure_Vtx[] = {
    #include "assets/levelGroup/Global/unusedStructure/unusedStructure.vtx.inc.c"
};
Mtx Global_IMtx5 = IDENTITY;

Gfx Global_unusedStructure_Gfx[] = {
    #include "assets/levelGroup/Global/unusedStructure/unusedStructure.gfx.inc.c"
};

Vtx Global_shadow_Vtx[] = {
    #include "assets/levelGroup/Global/shadow/shadow.vtx.inc.c"
};
Mtx Global_IMtx6 = IDENTITY;
unsigned char Global_Pad9[] = FILEPAD;
unsigned char Global_shadow_ia8_PNG[] = {
#include "build/assets/levelGroup/Global/shadow/shadow.ia8.png.inc.c"
};

Gfx Global_shadow_Gfx[] = {
    #include "assets/levelGroup/Global/shadow/shadow.gfx.inc.c"
};

Gfx Global_shadow2_Gfx[] = {
    #include "assets/levelGroup/Global/shadow/shadow2.gfx.inc.c"
};

Vec3f Global_pole_ColVerts[] = {
    #include "assets/levelGroup/Global/pole/pole.colVerts.inc.c"
};

Vec3w Global_pole_ColTris[] = {
    #include "assets/levelGroup/Global/pole/pole.colTris.inc.c"
};

Rect3D Global_pole_BoundBox = {
    #include "assets/levelGroup/Global/pole/pole.boundBox.inc.c"
};

ModelCollision Global_pole_ColH = {
30, 10, Global_pole_ColVerts, Global_pole_ColTris, &Global_pole_BoundBox
};

Vec3f Global_unk1_ColVerts[] = {
    #include "assets/levelGroup/Global/unk1/unk1.colVerts.inc.c"
};

Vec3w Global_unk1_ColTris[] = {
    #include "assets/levelGroup/Global/unk1/unk1.colTris.inc.c"
};

Rect3D Global_unk1_BoundBox = {
    #include "assets/levelGroup/Global/unk1/unk1.boundBox.inc.c"
};

ModelCollision Global_unk1_ColH = {
8, 12, Global_unk1_ColVerts, Global_unk1_ColTris, &Global_unk1_BoundBox
};

Vec3f Global_unk2_ColVerts[] = {
    #include "assets/levelGroup/Global/unk2/unk2.colVerts.inc.c"
};

Vec3w Global_unk2_ColTris[] = {
    #include "assets/levelGroup/Global/unk2/unk2.colTris.inc.c"
};

Rect3D Global_unk2_BoundBox = {
    #include "assets/levelGroup/Global/unk2/unk2.boundBox.inc.c"
};

ModelCollision Global_unk2_ColH = {
8, 12, Global_unk2_ColVerts, Global_unk2_ColTris, &Global_unk2_BoundBox
};

unsigned char Global_what_Bin[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x6F, 0x4C
};
unsigned char Global_Pad10[] = FILEPAD;
unsigned char Global_brownBrickWall_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brownBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad11[] = FILEPAD;
unsigned char Global_brownBrickWall_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/brownBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad12[] = FILEPAD;
unsigned char Global_sandAgain_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sandAgain.ci4.png.inc.c"
};
unsigned char Global_Pad13[] = FILEPAD;
unsigned char Global_sandAgain_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sandAgain.ci4.pal.inc.c"
};
unsigned char Global_Pad14[] = FILEPAD;
unsigned char Global_gravel_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/gravel.i4.png.inc.c"
};
unsigned char Global_Pad15[] = FILEPAD;
unsigned char Global_wall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/wall.i4.png.inc.c"
};
unsigned char Global_Pad16[] = FILEPAD;
unsigned char Global_gateGray_ia4_PNG[] = {
#include "build/assets/levelGroup/Global/img/gateGray.ia4.png.inc.c"
};
unsigned char Global_Pad17[] = FILEPAD;
unsigned char Global_dcRockFloor_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/dcRockFloor.i4.png.inc.c"
};
unsigned char Global_Pad18[] = FILEPAD;
unsigned char Global_dcRockFloorColor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/dcRockFloorColor.ci4.png.inc.c"
};
unsigned char Global_Pad19[] = FILEPAD;
unsigned char Global_dcRockFloorColor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/dcRockFloorColor.ci4.pal.inc.c"
};
unsigned char Global_Pad20[] = FILEPAD;
unsigned char Global_smallBrickWall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/smallBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad21[] = FILEPAD;
unsigned char Global_longWoodTopper_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/longWoodTopper.ci4.png.inc.c"
};
unsigned char Global_Pad22[] = FILEPAD;
unsigned char Global_longWoodTopper_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/longWoodTopper.ci4.pal.inc.c"
};
unsigned char Global_Pad23[] = FILEPAD;
unsigned char Global_longWood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/longWood.ci4.png.inc.c"
};
unsigned char Global_Pad24[] = FILEPAD;
unsigned char Global_longWood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/longWood.ci4.pal.inc.c"
};
unsigned char Global_Pad25[] = FILEPAD;
unsigned char Global_yellowBrickWall_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/yellowBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad26[] = FILEPAD;
unsigned char Global_yellowBrickWall_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/yellowBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad27[] = FILEPAD;
unsigned char Global_bigBrickWall2_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/bigBrickWall2.i4.png.inc.c"
};
unsigned char Global_Pad28[] = FILEPAD;
unsigned char Global_bigBrickWall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/bigBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad29[] = FILEPAD;
unsigned char Global_waterKinda_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/waterKinda.ci4.png.inc.c"
};
unsigned char Global_Pad30[] = FILEPAD;
unsigned char Global_waterKinda_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/waterKinda.ci4.pal.inc.c"
};
unsigned char Global_Pad31[] = FILEPAD;
unsigned char Global_brickWall2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brickWall2.ci4.png.inc.c"
};
unsigned char Global_Pad32[] = FILEPAD;
unsigned char Global_brickWall2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/brickWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad33[] = FILEPAD;
unsigned char Global_unk12_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/unk12.i4.png.inc.c"
};
unsigned char Global_Pad34[] = FILEPAD;
unsigned char Global_goldStrip_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/goldStrip.ci4.png.inc.c"
};
unsigned char Global_Pad35[] = FILEPAD;
unsigned char Global_goldStrip_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/goldStrip.ci4.pal.inc.c"
};
unsigned char Global_Pad36[] = FILEPAD;
unsigned char Global_antMural4_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural4.i4.png.inc.c"
};
unsigned char Global_Pad37[] = FILEPAD;
unsigned char Global_antMural3_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural3.i4.png.inc.c"
};
unsigned char Global_Pad38[] = FILEPAD;
unsigned char Global_antMural2_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural2.i4.png.inc.c"
};
unsigned char Global_Pad39[] = FILEPAD;
unsigned char Global_antMural1_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural1.i4.png.inc.c"
};
unsigned char Global_Pad40[] = FILEPAD;
unsigned char Global_brickWall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brickWall.i4.png.inc.c"
};
unsigned char Global_Pad41[] = FILEPAD;
unsigned char Global_strip2_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/strip2.i4.png.inc.c"
};
unsigned char Global_Pad42[] = FILEPAD;
unsigned char Global_lavaSolid_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/lavaSolid.ci4.png.inc.c"
};
unsigned char Global_Pad43[] = FILEPAD;
unsigned char Global_lavaSolid_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/lavaSolid.ci4.pal.inc.c"
};
unsigned char Global_Pad44[] = FILEPAD;
unsigned char Global_fraMEd_ia4_PNG[] = {
#include "build/assets/levelGroup/Global/img/fraMEd.ia4.png.inc.c"
};
unsigned char Global_Pad45[] = FILEPAD;
unsigned char Global_squares_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/squares.i4.png.inc.c"
};
unsigned char Global_Pad46[] = FILEPAD;
unsigned char Global_metalPlate_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/metalPlate.i4.png.inc.c"
};
unsigned char Global_Pad47[] = FILEPAD;
unsigned char Global_factoryPlates_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/factoryPlates.i4.png.inc.c"
};
unsigned char Global_Pad48[] = FILEPAD;
unsigned char Global_steelPlate_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/steelPlate.i4.png.inc.c"
};
unsigned char Global_Pad49[] = FILEPAD;
unsigned char Global_metalPlates_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/metalPlates.i4.png.inc.c"
};
unsigned char Global_Pad50[] = FILEPAD;
unsigned char Global_ballGround_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/ballGround.i4.png.inc.c"
};
unsigned char Global_Pad51[] = FILEPAD;
unsigned char Global_cube_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/cube.i4.png.inc.c"
};
unsigned char Global_Pad52[] = FILEPAD;
unsigned char Global_hexComb_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/hexComb.i4.png.inc.c"
};
unsigned char Global_Pad53[] = FILEPAD;
unsigned char Global_hexCombFade_i8_PNG[] = {
#include "build/assets/levelGroup/Global/img/hexCombFade.i8.png.inc.c"
};
unsigned char Global_Pad54[] = FILEPAD;
unsigned char Global_brokenCube_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brokenCube.i4.png.inc.c"
};
unsigned char Global_Pad55[] = FILEPAD;
unsigned char Global_klTILE_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/klTILE.ci4.png.inc.c"
};
unsigned char Global_Pad56[] = FILEPAD;
unsigned char Global_klTILE_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/klTILE.ci4.pal.inc.c"
};
unsigned char Global_gateCompressed_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/gateCompressed.ci8.png.inc.c"
};
unsigned char Global_gateCompressed_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/gateCompressed.ci8.pal.inc.c"
};
unsigned char Global_Pad57[] = FILEPAD;
unsigned char Global_strip_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/strip.ci4.png.inc.c"
};
unsigned char Global_Pad58[] = FILEPAD;
unsigned char Global_strip_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/strip.ci4.pal.inc.c"
};
unsigned char Global_Pad59[] = FILEPAD;
unsigned char Global_chocoKidsLabel_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/chocoKidsLabel.ci4.png.inc.c"
};
unsigned char Global_Pad60[] = FILEPAD;
unsigned char Global_chocoKidsLabel_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/chocoKidsLabel.ci4.pal.inc.c"
};
unsigned char Global_Pad61[] = FILEPAD;
unsigned char Global_justBlack_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/justBlack.ci4.png.inc.c"
};
unsigned char Global_Pad62[] = FILEPAD;
unsigned char Global_justBlack_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/justBlack.ci4.pal.inc.c"
};
unsigned char Global_Pad63[] = FILEPAD;
unsigned char Global_cracker_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/cracker.ci4.png.inc.c"
};
unsigned char Global_Pad64[] = FILEPAD;
unsigned char Global_cracker_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/cracker.ci4.pal.inc.c"
};
unsigned char Global_Pad65[] = FILEPAD;
unsigned char Global_KLThing1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLThing1.ci4.png.inc.c"
};
unsigned char Global_Pad66[] = FILEPAD;
unsigned char Global_KLThing1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad67[] = FILEPAD;
unsigned char Global_KLFloor3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLFloor3.ci4.png.inc.c"
};
unsigned char Global_Pad68[] = FILEPAD;
unsigned char Global_KLFloor3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLFloor3.ci4.pal.inc.c"
};
unsigned char Global_Pad69[] = FILEPAD;
unsigned char Global_KLFloor2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad70[] = FILEPAD;
unsigned char Global_KLFloor2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad71[] = FILEPAD;
unsigned char Global_waferSide_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/waferSide.ci4.png.inc.c"
};
unsigned char Global_Pad72[] = FILEPAD;
unsigned char Global_waferSide_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/waferSide.ci4.pal.inc.c"
};
unsigned char Global_Pad73[] = FILEPAD;
unsigned char Global_chocoKIDS_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/chocoKIDS.ci8.png.inc.c"
};
unsigned char Global_Pad74[] = FILEPAD;
unsigned char Global_chocoKIDS_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/chocoKIDS.ci8.pal.inc.c"
};
unsigned char Global_Pad75[] = FILEPAD;
unsigned char Global_sandwSide_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sandwSide.ci4.png.inc.c"
};
unsigned char Global_Pad76[] = FILEPAD;
unsigned char Global_sandwSide_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sandwSide.ci4.pal.inc.c"
};
unsigned char Global_Pad77[] = FILEPAD;
unsigned char Global_giftSide_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/giftSide.ci4.png.inc.c"
};
unsigned char Global_Pad78[] = FILEPAD;
unsigned char Global_giftSide_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/giftSide.ci4.pal.inc.c"
};
unsigned char Global_Pad79[] = FILEPAD;
unsigned char Global_giftTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/giftTop.ci4.png.inc.c"
};
unsigned char Global_Pad80[] = FILEPAD;
unsigned char Global_giftTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/giftTop.ci4.pal.inc.c"
};
unsigned char Global_Pad81[] = FILEPAD;
unsigned char Global_blueBrickFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/blueBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad82[] = FILEPAD;
unsigned char Global_blueBrickFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/blueBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad83[] = FILEPAD;
unsigned char Global_rainbow_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/rainbow.ci8.png.inc.c"
};
unsigned char Global_Pad84[] = FILEPAD;
unsigned char Global_rainbow_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/rainbow.ci8.pal.inc.c"
};
unsigned char Global_Pad85[] = FILEPAD;
unsigned char Global_blueBrick_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/blueBrick.ci4.png.inc.c"
};
unsigned char Global_Pad86[] = FILEPAD;
unsigned char Global_blueBrick_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/blueBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad87[] = FILEPAD;
unsigned char Global_orangeBrick_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/orangeBrick.ci4.png.inc.c"
};
unsigned char Global_Pad88[] = FILEPAD;
unsigned char Global_orangeBrick_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/orangeBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad89[] = FILEPAD;
unsigned char Global_orangeLego_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/orangeLego.ci4.png.inc.c"
};
unsigned char Global_Pad90[] = FILEPAD;
unsigned char Global_orangeLego_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/orangeLego.ci4.pal.inc.c"
};
unsigned char Global_Pad91[] = FILEPAD;
unsigned char Global_blueLego_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/blueLego.ci4.png.inc.c"
};
unsigned char Global_Pad92[] = FILEPAD;
unsigned char Global_blueLego_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/blueLego.ci4.pal.inc.c"
};
unsigned char Global_ropeChroma_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/ropeChroma.ci8.png.inc.c"
};
unsigned char Global_ropeChroma_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/ropeChroma.ci8.pal.inc.c"
};
unsigned char Global_Pad93[] = FILEPAD;
unsigned char Global_pebbles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/pebbles.ci4.png.inc.c"
};
unsigned char Global_Pad94[] = FILEPAD;
unsigned char Global_pebbles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/pebbles.ci4.pal.inc.c"
};
unsigned char Global_Pad95[] = FILEPAD;
unsigned char Global_chain2_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/chain2.rgba16.png.inc.c"
};
unsigned char Global_Pad96[] = FILEPAD;
unsigned char Global_chain1_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/chain1.rgba16.png.inc.c"
};
unsigned char Global_Pad97[] = FILEPAD;
unsigned char Global_DCSmallTiles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCSmallTiles.ci4.png.inc.c"
};
unsigned char Global_Pad98[] = FILEPAD;
unsigned char Global_DCSmallTiles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCSmallTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad99[] = FILEPAD;
unsigned char Global_DCSandFloor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCSandFloor.ci4.png.inc.c"
};
unsigned char Global_Pad100[] = FILEPAD;
unsigned char Global_DCSandFloor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCSandFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad101[] = FILEPAD;
unsigned char Global_dcTHING2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/dcTHING2.ci4.png.inc.c"
};
unsigned char Global_Pad102[] = FILEPAD;
unsigned char Global_dcTHING2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/dcTHING2.ci4.pal.inc.c"
};
unsigned char Global_Pad103[] = FILEPAD;
unsigned char Global_jlText3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText3.ci4.png.inc.c"
};
unsigned char Global_Pad104[] = FILEPAD;
unsigned char Global_jlText3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText3.ci4.pal.inc.c"
};
unsigned char Global_Pad105[] = FILEPAD;
unsigned char Global_DCBricks_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCBricks.ci4.png.inc.c"
};
unsigned char Global_Pad106[] = FILEPAD;
unsigned char Global_DCBricks_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCBricks.ci4.pal.inc.c"
};
unsigned char Global_Pad107[] = FILEPAD;
unsigned char Global_DCFloor2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad108[] = FILEPAD;
unsigned char Global_DCFloor2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad109[] = FILEPAD;
unsigned char Global_DCWall3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCWall3.ci4.png.inc.c"
};
unsigned char Global_Pad110[] = FILEPAD;
unsigned char Global_DCWall3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCWall3.ci4.pal.inc.c"
};
unsigned char Global_Pad111[] = FILEPAD;
unsigned char Global_DCWall2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad112[] = FILEPAD;
unsigned char Global_DCWall2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad113[] = FILEPAD;
unsigned char Global_DCWall1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCWall1.ci4.png.inc.c"
};
unsigned char Global_Pad114[] = FILEPAD;
unsigned char Global_DCWall1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCWall1.ci4.pal.inc.c"
};
unsigned char Global_Pad115[] = FILEPAD;
unsigned char Global_DCThing3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCThing3.ci4.png.inc.c"
};
unsigned char Global_Pad116[] = FILEPAD;
unsigned char Global_DCThing3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCThing3.ci4.pal.inc.c"
};
unsigned char Global_Pad117[] = FILEPAD;
unsigned char Global_DCThing2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCThing2.ci4.png.inc.c"
};
unsigned char Global_Pad118[] = FILEPAD;
unsigned char Global_DCThing2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCThing2.ci4.pal.inc.c"
};
unsigned char Global_Pad119[] = FILEPAD;
unsigned char Global_DCThing1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad120[] = FILEPAD;
unsigned char Global_DCThing1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad121[] = FILEPAD;
unsigned char Global_DCSandWallFadeUp_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.png.inc.c"
};
unsigned char Global_Pad122[] = FILEPAD;
unsigned char Global_DCSandWallFadeUp_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.pal.inc.c"
};
unsigned char Global_Pad123[] = FILEPAD;
unsigned char Global_GCThing1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad124[] = FILEPAD;
unsigned char Global_GCThing1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad125[] = FILEPAD;
unsigned char Global_DCTiles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad126[] = FILEPAD;
unsigned char Global_DCTiles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad127[] = FILEPAD;
unsigned char Global_DCFloor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCFloor.ci4.png.inc.c"
};
unsigned char Global_Pad128[] = FILEPAD;
unsigned char Global_DCFloor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad129[] = FILEPAD;
unsigned char Global_rope_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/rope.rgba16.png.inc.c"
};
unsigned char Global_Pad130[] = FILEPAD;
unsigned char Global_ropeConnector_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/ropeConnector.ci4.png.inc.c"
};
unsigned char Global_Pad131[] = FILEPAD;
unsigned char Global_ropeConnector_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/ropeConnector.ci4.pal.inc.c"
};
unsigned char Global_Pad132[] = FILEPAD;
unsigned char Global_bigLog_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/bigLog.ci4.png.inc.c"
};
unsigned char Global_Pad133[] = FILEPAD;
unsigned char Global_bigLog_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/bigLog.ci4.pal.inc.c"
};
unsigned char Global_Pad134[] = FILEPAD;
unsigned char Global_sander_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sander.ci4.png.inc.c"
};
unsigned char Global_Pad135[] = FILEPAD;
unsigned char Global_sander_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sander.ci4.pal.inc.c"
};
unsigned char Global_Pad136[] = FILEPAD;
unsigned char Global_jllogTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jllogTop.ci4.png.inc.c"
};
unsigned char Global_Pad137[] = FILEPAD;
unsigned char Global_jllogTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jllogTop.ci4.pal.inc.c"
};
unsigned char Global_Pad138[] = FILEPAD;
unsigned char Global_jlLog_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlLog.ci4.png.inc.c"
};
unsigned char Global_Pad139[] = FILEPAD;
unsigned char Global_jlLog_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlLog.ci4.pal.inc.c"
};
unsigned char Global_Pad140[] = FILEPAD;
unsigned char Global_jlText1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText1.ci4.png.inc.c"
};
unsigned char Global_Pad141[] = FILEPAD;
unsigned char Global_jlText1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText1.ci4.pal.inc.c"
};
unsigned char Global_Pad142[] = FILEPAD;
unsigned char Global_gate_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/gate.rgba16.png.inc.c"
};
unsigned char Global_Pad143[] = FILEPAD;
unsigned char Global_poleWood_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/poleWood.ci8.png.inc.c"
};
unsigned char Global_Pad144[] = FILEPAD;
unsigned char Global_poleWood_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/poleWood.ci8.pal.inc.c"
};
unsigned char Global_Pad145[] = FILEPAD;
unsigned char Global_Darkwood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/Darkwood.ci4.png.inc.c"
};
unsigned char Global_Pad146[] = FILEPAD;
unsigned char Global_Darkwood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/Darkwood.ci4.pal.inc.c"
};
unsigned char Global_Pad147[] = FILEPAD;
unsigned char Global_wood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/wood.ci4.png.inc.c"
};
unsigned char Global_Pad148[] = FILEPAD;
unsigned char Global_wood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/wood.ci4.pal.inc.c"
};
unsigned char Global_Pad149[] = FILEPAD;
unsigned char Global_GCFloorboard_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCFloorboard.ci4.png.inc.c"
};
unsigned char Global_Pad150[] = FILEPAD;
unsigned char Global_GCFloorboard_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCFloorboard.ci4.pal.inc.c"
};
unsigned char Global_Pad151[] = FILEPAD;
unsigned char Global_GCTiles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad152[] = FILEPAD;
unsigned char Global_GCTiles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad153[] = FILEPAD;
unsigned char Global_GCWall2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad154[] = FILEPAD;
unsigned char Global_GCWall2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad155[] = FILEPAD;
unsigned char Global_windows_ia4_PNG[] = {
#include "build/assets/levelGroup/Global/img/windows.ia4.png.inc.c"
};
unsigned char Global_Pad156[] = FILEPAD;
unsigned char Global_water_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/water.ci4.png.inc.c"
};
unsigned char Global_Pad157[] = FILEPAD;
unsigned char Global_water_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/water.ci4.pal.inc.c"
};
unsigned char Global_Pad158[] = FILEPAD;
unsigned char Global_GCWall_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCWall.ci4.png.inc.c"
};
unsigned char Global_Pad159[] = FILEPAD;
unsigned char Global_GCWall_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCWall.ci4.pal.inc.c"
};
unsigned char Global_Pad160[] = FILEPAD;
unsigned char Global_GCBigCabinet_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCBigCabinet.ci4.png.inc.c"
};
unsigned char Global_Pad161[] = FILEPAD;
unsigned char Global_GCBigCabinet_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCBigCabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad162[] = FILEPAD;
unsigned char Global_GCWood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCWood.ci4.png.inc.c"
};
unsigned char Global_Pad163[] = FILEPAD;
unsigned char Global_GCWood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCWood.ci4.pal.inc.c"
};
unsigned char Global_Pad164[] = FILEPAD;
unsigned char Global_sandFadeTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sandFadeTop.ci4.png.inc.c"
};
unsigned char Global_Pad165[] = FILEPAD;
unsigned char Global_sandFadeTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sandFadeTop.ci4.pal.inc.c"
};
unsigned char Global_Pad166[] = FILEPAD;
unsigned char Global_JLMountain_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLMountain.ci4.png.inc.c"
};
unsigned char Global_Pad167[] = FILEPAD;
unsigned char Global_JLMountain_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLMountain.ci4.pal.inc.c"
};
unsigned char Global_Pad168[] = FILEPAD;
unsigned char Global_JLCaveFadeTop_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.png.inc.c"
};
unsigned char Global_Pad169[] = FILEPAD;
unsigned char Global_JLCaveFadeTop_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.pal.inc.c"
};
unsigned char Global_Pad170[] = FILEPAD;
unsigned char Global_jlText5_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText5.ci4.png.inc.c"
};
unsigned char Global_Pad171[] = FILEPAD;
unsigned char Global_jlText5_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText5.ci4.pal.inc.c"
};
unsigned char Global_Pad172[] = FILEPAD;
unsigned char Global_jlText2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText2.ci4.png.inc.c"
};
unsigned char Global_Pad173[] = FILEPAD;
unsigned char Global_jlText2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText2.ci4.pal.inc.c"
};
unsigned char Global_Pad174[] = FILEPAD;
unsigned char Global_jlText4_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText4.ci4.png.inc.c"
};
unsigned char Global_Pad175[] = FILEPAD;
unsigned char Global_jlText4_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText4.ci4.pal.inc.c"
};
unsigned char Global_Pad176[] = FILEPAD;
unsigned char Global_JLCave_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLCave.ci8.png.inc.c"
};
unsigned char Global_Pad177[] = FILEPAD;
unsigned char Global_JLCave_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLCave.ci8.pal.inc.c"
};
unsigned char Global_Pad178[] = FILEPAD;
unsigned char Global_JLCaveFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFade.ci8.png.inc.c"
};
unsigned char Global_Pad179[] = FILEPAD;
unsigned char Global_JLCaveFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFade.ci8.pal.inc.c"
};
unsigned char Global_Pad180[] = FILEPAD;
unsigned char Global_BLRedYellowPlate_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.png.inc.c"
};
unsigned char Global_Pad181[] = FILEPAD;
unsigned char Global_BLRedYellowPlate_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.pal.inc.c"
};
unsigned char Global_Pad182[] = FILEPAD;
unsigned char Global_KLOrangeBrickFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad183[] = FILEPAD;
unsigned char Global_KLOrangeBrickFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad184[] = FILEPAD;
unsigned char Global_KLCrackerFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLCrackerFade.ci8.png.inc.c"
};
unsigned char Global_Pad185[] = FILEPAD;
unsigned char Global_KLCrackerFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLCrackerFade.ci8.pal.inc.c"
};
unsigned char Global_Pad186[] = FILEPAD;
unsigned char Global_KLFloor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLFloor.ci4.png.inc.c"
};
unsigned char Global_Pad187[] = FILEPAD;
unsigned char Global_KLFloor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad188[] = FILEPAD;
unsigned char Global_woodFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/woodFade.ci8.png.inc.c"
};
unsigned char Global_Pad189[] = FILEPAD;
unsigned char Global_woodFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/woodFade.ci8.pal.inc.c"
};
unsigned char Global_Pad190[] = FILEPAD;
unsigned char Global_cabinetFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/cabinetFade.ci8.png.inc.c"
};
unsigned char Global_Pad191[] = FILEPAD;
unsigned char Global_cabinetFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/cabinetFade.ci8.pal.inc.c"
};
unsigned char Global_Pad192[] = FILEPAD;
unsigned char Global_cabinet_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/cabinet.ci4.png.inc.c"
};
unsigned char Global_Pad193[] = FILEPAD;
unsigned char Global_cabinet_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/cabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad194[] = FILEPAD;
unsigned char Global_fogFade_ia8_PNG[] = {
#include "build/assets/levelGroup/Global/img/fogFade.ia8.png.inc.c"
};

Vtx Global_fallbackCube_Vtx[] = {
    #include "assets/levelGroup/Global/fallbackCube/fallbackCube.vtx.inc.c"
};
Mtx Global_IMtx7 = IDENTITY;

Gfx Global_fallbackCube_Gfx[] = {
    #include "assets/levelGroup/Global/fallbackCube/fallbackCube.gfx.inc.c"
};

Vec3f Global_fallbackCube_ColVerts[] = {
    #include "assets/levelGroup/Global/fallbackCube/fallbackCube.colVerts.inc.c"
};

Vec3w Global_fallbackCube_ColTris[] = {
    #include "assets/levelGroup/Global/fallbackCube/fallbackCube.colTris.inc.c"
};

Rect3D Global_fallbackCube_BoundBox = {
    #include "assets/levelGroup/Global/fallbackCube/fallbackCube.boundBox.inc.c"
};

ModelCollision Global_fallbackCube_ColH = {
8, 12, Global_fallbackCube_ColVerts, Global_fallbackCube_ColTris, &Global_fallbackCube_BoundBox
};

Vtx Global_exitShadowSouth_Vtx[] = {
    #include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.vtx.inc.c"
};
Mtx Global_IMtx8 = IDENTITY;

Gfx Global_exitShadowSouth_Gfx[] = {
    #include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.gfx.inc.c"
};

Vec3f Global_exitShadowSouth_ColVerts[] = {
    #include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.colVerts.inc.c"
};

Vec3w Global_exitShadowSouth_ColTris[] = {
    #include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.colTris.inc.c"
};

Rect3D Global_exitShadowSouth_BoundBox = {
    #include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.boundBox.inc.c"
};

ModelCollision Global_exitShadowSouth_ColH = {
4, 2, Global_exitShadowSouth_ColVerts, Global_exitShadowSouth_ColTris, &Global_exitShadowSouth_BoundBox
};

Vtx Global_exitShadowNorth_Vtx[] = {
    #include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.vtx.inc.c"
};
Mtx Global_IMtx9 = IDENTITY;

Gfx Global_exitShadowNorth_Gfx[] = {
    #include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.gfx.inc.c"
};

Vec3f Global_exitShadowNorth_ColVerts[] = {
    #include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.colVerts.inc.c"
};

Vec3w Global_exitShadowNorth_ColTris[] = {
    #include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.colTris.inc.c"
};

Rect3D Global_exitShadowNorth_BoundBox = {
    #include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.boundBox.inc.c"
};

ModelCollision Global_exitShadowNorth_ColH = {
4, 2, Global_exitShadowNorth_ColVerts, Global_exitShadowNorth_ColTris, &Global_exitShadowNorth_BoundBox
};

Vtx Global_exitShadowEast_Vtx[] = {
    #include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.vtx.inc.c"
};
Mtx Global_IMtx10 = IDENTITY;

Gfx Global_exitShadowEast_Gfx[] = {
    #include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.gfx.inc.c"
};

Vec3f Global_exitShadowEast_ColVerts[] = {
    #include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.colVerts.inc.c"
};

Vec3w Global_exitShadowEast_ColTris[] = {
    #include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.colTris.inc.c"
};

Rect3D Global_exitShadowEast_BoundBox = {
    #include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.boundBox.inc.c"
};

ModelCollision Global_exitShadowEast_ColH = {
4, 2, Global_exitShadowEast_ColVerts, Global_exitShadowEast_ColTris, &Global_exitShadowEast_BoundBox
};

Vtx Global_exitShadowWest_Vtx[] = {
    #include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.vtx.inc.c"
};
Mtx Global_IMtx11 = IDENTITY;

Gfx Global_exitShadowWest_Gfx[] = {
    #include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.gfx.inc.c"
};

Vec3f Global_exitShadowWest_ColVerts[] = {
    #include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.colVerts.inc.c"
};

Vec3w Global_exitShadowWest_ColTris[] = {
    #include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.colTris.inc.c"
};

Rect3D Global_exitShadowWest_BoundBox = {
    #include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.boundBox.inc.c"
};

ModelCollision Global_exitShadowWest_ColH = {
4, 2, Global_exitShadowWest_ColVerts, Global_exitShadowWest_ColTris, &Global_exitShadowWest_BoundBox
};

Vtx Global_ALBLExit_Vtx[] = {
    #include "assets/levelGroup/Global/ALBLExit/ALBLExit.vtx.inc.c"
};
Mtx Global_IMtx12 = IDENTITY;

Gfx Global_ALBLExit_Gfx[] = {
    #include "assets/levelGroup/Global/ALBLExit/ALBLExit.gfx.inc.c"
};

Vec3f Global_ALBLExit_ColVerts[] = {
    #include "assets/levelGroup/Global/ALBLExit/ALBLExit.colVerts.inc.c"
};

Vec3w Global_ALBLExit_ColTris[] = {
    #include "assets/levelGroup/Global/ALBLExit/ALBLExit.colTris.inc.c"
};

Rect3D Global_ALBLExit_BoundBox = {
    #include "assets/levelGroup/Global/ALBLExit/ALBLExit.boundBox.inc.c"
};

ModelCollision Global_ALBLExit_ColH = {
6, 4, Global_ALBLExit_ColVerts, Global_ALBLExit_ColTris, &Global_ALBLExit_BoundBox
};

Mtx Global_IMtx13 = IDENTITY;

Gfx Global_sandPit_Gfx[] = {
    #include "assets/levelGroup/Global/unk3/unk3.gfx.inc.c"
};

Vec3f Global_unk3_ColVerts[] = {
    #include "assets/levelGroup/Global/unk3/unk3.colVerts.inc.c"
};

Vec3w Global_unk3_ColTris[] = {
    #include "assets/levelGroup/Global/unk3/unk3.colTris.inc.c"
};

Rect3D Global_unk3_BoundBox = {
    #include "assets/levelGroup/Global/unk3/unk3.boundBox.inc.c"
};

ModelCollision Global_sandPit_ColH = {
7, 6, Global_unk3_ColVerts, Global_unk3_ColTris, &Global_unk3_BoundBox
};

Vtx Global_BossBridge_Vtx[] = {
    #include "assets/levelGroup/Global/BossBridge/BossBridge.vtx.inc.c"
};
Mtx Global_IMtx14 = IDENTITY;

Gfx Global_BossBridge_Gfx[] = {
    #include "assets/levelGroup/Global/BossBridge/BossBridge.gfx.inc.c"
};

Vec3f Global_BossBridge_ColVerts[] = {
    #include "assets/levelGroup/Global/BossBridge/BossBridge.colVerts.inc.c"
};

Vec3w Global_BossBridge_ColTris[] = {
    #include "assets/levelGroup/Global/BossBridge/BossBridge.colTris.inc.c"
};

Rect3D Global_BossBridge_BoundBox = {
    #include "assets/levelGroup/Global/BossBridge/BossBridge.boundBox.inc.c"
};

ModelCollision Global_BossBridge_ColH = {
8, 10, Global_BossBridge_ColVerts, Global_BossBridge_ColTris, &Global_BossBridge_BoundBox
};

Vtx Global_ALPole_Vtx[] = {
    #include "assets/levelGroup/Global/ALPole/ALPole.vtx.inc.c"
};
Mtx Global_IMtx15 = IDENTITY;
unsigned char Global_Pad195[] = FILEPAD;
unsigned char Global_side_i4_PNG[] = {
#include "build/assets/levelGroup/Global/ALPole/side.i4.png.inc.c"
};
unsigned char Global_Pad196[] = FILEPAD;
unsigned char Global_topper_i4_PNG[] = {
#include "build/assets/levelGroup/Global/ALPole/topper.i4.png.inc.c"
};

Gfx Global_ALPole_Gfx[] = {
    #include "assets/levelGroup/Global/ALPole/ALPole.gfx.inc.c"
};

Vec3f Global_ALPole_ColVerts[] = {
    #include "assets/levelGroup/Global/ALPole/ALPole.colVerts.inc.c"
};

Vec3w Global_ALPole_ColTris[] = {
    #include "assets/levelGroup/Global/ALPole/ALPole.colTris.inc.c"
};

Rect3D Global_ALPole_BoundBox = {
    #include "assets/levelGroup/Global/ALPole/ALPole.boundBox.inc.c"
};

ModelCollision Global_ALPole_ColH = {
8, 10, Global_ALPole_ColVerts, Global_ALPole_ColTris, &Global_ALPole_BoundBox
};

Vtx Global_ALBLDoor_Vtx[] = {
    #include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.vtx.inc.c"
};
Mtx Global_IMtx16 = IDENTITY;
unsigned char Global_Pad197[] = FILEPAD;
unsigned char Global_ALBLDoor_i4_PNG[] = {
#include "build/assets/levelGroup/Global/ALBLDoor/ALBLDoor.i4.png.inc.c"
};

Gfx Global_ALBLDoor_Gfx[] = {
    #include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.gfx.inc.c"
};

Vec3f Global_ALBLDoor_ColVerts[] = {
    #include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.colVerts.inc.c"
};

Vec3w Global_ALBLDoor_ColTris[] = {
    #include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.colTris.inc.c"
};

Rect3D Global_ALBLDoor_BoundBox = {
    #include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.boundBox.inc.c"
};

ModelCollision Global_ALBLDoor_ColH = {
8, 8, Global_ALBLDoor_ColVerts, Global_ALBLDoor_ColTris, &Global_ALBLDoor_BoundBox
};

Vtx Global_ALSpinDoor_Vtx[] = {
    #include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.vtx.inc.c"
};
Mtx Global_IMtx17 = IDENTITY;
unsigned char Global_Pad198[] = FILEPAD;
unsigned char Global_ALSpinDoor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.png.inc.c"
};
unsigned char Global_Pad199[] = FILEPAD;
unsigned char Global_ALSpinDoor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.pal.inc.c"
};

Gfx Global_ALSpinDoor_Gfx[] = {
    #include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.gfx.inc.c"
};

Vec3f Global_ALSpinDoor_ColVerts[] = {
    #include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colVerts.inc.c"
};

Vec3w Global_ALSpinDoor_ColTris[] = {
    #include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colTris.inc.c"
};

Rect3D Global_ALSpinDoor_BoundBox = {
    #include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.boundBox.inc.c"
};

ModelCollision Global_ALSpinDoor_ColH = {
8, 8, Global_ALSpinDoor_ColVerts, Global_ALSpinDoor_ColTris, &Global_ALSpinDoor_BoundBox
};

Vtx Global_BLLavaFloor_Vtx[] = {
    #include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.vtx.inc.c"
};
Mtx Global_IMtx18 = IDENTITY;

Gfx Global_BLLavaFloor_Gfx[] = {
    #include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.gfx.inc.c"
};

Vec3f Global_BLLavaFloor_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.colVerts.inc.c"
};

Vec3w Global_BLLavaFloor_ColTris[] = {
    #include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.colTris.inc.c"
};

Rect3D Global_BLLavaFloor_BoundBox = {
    #include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.boundBox.inc.c"
};

ModelCollision Global_BLLavaFloor_ColH = {
4, 2, Global_BLLavaFloor_ColVerts, Global_BLLavaFloor_ColTris, &Global_BLLavaFloor_BoundBox
};

Vtx Global_BLLava_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava/BLLava.vtx.inc.c"
};
Mtx Global_IMtx19 = IDENTITY;
unsigned char Global_Pad200[] = FILEPAD;
unsigned char Global_BLLava_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava/BLLava.ci4.png.inc.c"
};
unsigned char Global_Pad201[] = FILEPAD;
unsigned char Global_BLLava_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava/BLLava.ci4.pal.inc.c"
};

Gfx Global_BLLava_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava/BLLava.gfx.inc.c"
};

Vec3f Global_BLLava_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava/BLLava.colVerts.inc.c"
};

Vec3w Global_BLLava_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava/BLLava.colTris.inc.c"
};

Rect3D Global_BLLava_BoundBox = {
    #include "assets/levelGroup/Global/BLLava/BLLava.boundBox.inc.c"
};

ModelCollision Global_BLLava_ColH = {
4, 2, Global_BLLava_ColVerts, Global_BLLava_ColTris, &Global_BLLava_BoundBox
};

Vtx Global_BLLava2_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava2/BLLava2.vtx.inc.c"
};
Mtx Global_IMtx20 = IDENTITY;
unsigned char Global_Pad202[] = FILEPAD;
unsigned char Global_BLLava2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava2/BLLava2.ci4.png.inc.c"
};
unsigned char Global_Pad203[] = FILEPAD;
unsigned char Global_BLLava2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava2/BLLava2.ci4.pal.inc.c"
};

Gfx Global_BLLava2_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava2/BLLava2.gfx.inc.c"
};

Vec3f Global_BLLava2_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava2/BLLava2.colVerts.inc.c"
};

Vec3w Global_BLLava2_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava2/BLLava2.colTris.inc.c"
};

Rect3D Global_BLLava2_BoundBox = {
    #include "assets/levelGroup/Global/BLLava2/BLLava2.boundBox.inc.c"
};

ModelCollision Global_BLLava2_ColH = {
4, 2, Global_BLLava2_ColVerts, Global_BLLava2_ColTris, &Global_BLLava2_BoundBox
};

Vtx Global_BLLava3_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava3/BLLava3.vtx.inc.c"
};
Mtx Global_IMtx21 = IDENTITY;
unsigned char Global_Pad204[] = FILEPAD;
unsigned char Global_BLLava3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava3/BLLava3.ci4.png.inc.c"
};
unsigned char Global_Pad205[] = FILEPAD;
unsigned char Global_BLLava3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava3/BLLava3.ci4.pal.inc.c"
};

Gfx Global_BLLava3_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava3/BLLava3.gfx.inc.c"
};

Vec3f Global_BLLava3_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava3/BLLava3.colVerts.inc.c"
};

Vec3w Global_BLLava3_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava3/BLLava3.colTris.inc.c"
};

Rect3D Global_BLLava3_BoundBox = {
    #include "assets/levelGroup/Global/BLLava3/BLLava3.boundBox.inc.c"
};

ModelCollision Global_BLLava3_ColH = {
4, 2, Global_BLLava3_ColVerts, Global_BLLava3_ColTris, &Global_BLLava3_BoundBox
};

Vtx Global_BLLava4_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava4/BLLava4.vtx.inc.c"
};
Mtx Global_IMtx22 = IDENTITY;
unsigned char Global_Pad206[] = FILEPAD;
unsigned char Global_BLLava4_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava4/BLLava4.ci4.png.inc.c"
};
unsigned char Global_Pad207[] = FILEPAD;
unsigned char Global_BLLava4_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava4/BLLava4.ci4.pal.inc.c"
};

Gfx Global_BLLava4_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava4/BLLava4.gfx.inc.c"
};

Vec3f Global_BLLava4_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava4/BLLava4.colVerts.inc.c"
};

Vec3w Global_BLLava4_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava4/BLLava4.colTris.inc.c"
};

Rect3D Global_BLLava4_BoundBox = {
    #include "assets/levelGroup/Global/BLLava4/BLLava4.boundBox.inc.c"
};

ModelCollision Global_BLLava4_ColH = {
4, 2, Global_BLLava4_ColVerts, Global_BLLava4_ColTris, &Global_BLLava4_BoundBox
};

Vtx Global_BLLava5_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava5/BLLava5.vtx.inc.c"
};
Mtx Global_IMtx23 = IDENTITY;
unsigned char Global_Pad208[] = FILEPAD;
unsigned char Global_BLLava5_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava5/BLLava5.ci4.png.inc.c"
};
unsigned char Global_Pad209[] = FILEPAD;
unsigned char Global_BLLava5_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava5/BLLava5.ci4.pal.inc.c"
};

Gfx Global_BLLava5_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava5/BLLava5.gfx.inc.c"
};

Vec3f Global_BLLava5_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava5/BLLava5.colVerts.inc.c"
};

Vec3w Global_BLLava5_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava5/BLLava5.colTris.inc.c"
};

Rect3D Global_BLLava5_BoundBox = {
    #include "assets/levelGroup/Global/BLLava5/BLLava5.boundBox.inc.c"
};

ModelCollision Global_BLLava5_ColH = {
4, 2, Global_BLLava5_ColVerts, Global_BLLava5_ColTris, &Global_BLLava5_BoundBox
};

Vtx Global_BLLava6_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava6/BLLava6.vtx.inc.c"
};
Mtx Global_IMtx24 = IDENTITY;
unsigned char Global_Pad210[] = FILEPAD;
unsigned char Global_BLLava6_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava6/BLLava6.ci4.png.inc.c"
};
unsigned char Global_Pad211[] = FILEPAD;
unsigned char Global_BLLava6_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava6/BLLava6.ci4.pal.inc.c"
};

Gfx Global_BLLava6_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava6/BLLava6.gfx.inc.c"
};

Vec3f Global_BLLava6_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava6/BLLava6.colVerts.inc.c"
};

Vec3w Global_BLLava6_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava6/BLLava6.colTris.inc.c"
};

Rect3D Global_BLLava6_BoundBox = {
    #include "assets/levelGroup/Global/BLLava6/BLLava6.boundBox.inc.c"
};

ModelCollision Global_BLLava6_ColH = {
4, 2, Global_BLLava6_ColVerts, Global_BLLava6_ColTris, &Global_BLLava6_BoundBox
};

Vtx Global_BLLava7_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava7/BLLava7.vtx.inc.c"
};
Mtx Global_IMtx25 = IDENTITY;
unsigned char Global_Pad212[] = FILEPAD;
unsigned char Global_BLLava7_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava7/BLLava7.ci4.png.inc.c"
};
unsigned char Global_Pad213[] = FILEPAD;
unsigned char Global_BLLava7_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava7/BLLava7.ci4.pal.inc.c"
};

Gfx Global_BLLava7_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava7/BLLava7.gfx.inc.c"
};

Vec3f Global_BLLava7_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava7/BLLava7.colVerts.inc.c"
};

Vec3w Global_BLLava7_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava7/BLLava7.colTris.inc.c"
};

Rect3D Global_BLLava7_BoundBox = {
    #include "assets/levelGroup/Global/BLLava7/BLLava7.boundBox.inc.c"
};

ModelCollision Global_BLLava7_ColH = {
4, 2, Global_BLLava7_ColVerts, Global_BLLava7_ColTris, &Global_BLLava7_BoundBox
};

Vtx Global_BLLava8_Vtx[] = {
    #include "assets/levelGroup/Global/BLLava8/BLLava8.vtx.inc.c"
};
Mtx Global_IMtx26 = IDENTITY;
unsigned char Global_Pad214[] = FILEPAD;
unsigned char Global_BLLava8_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava8/BLLava8.ci4.png.inc.c"
};
unsigned char Global_Pad215[] = FILEPAD;
unsigned char Global_BLLava8_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava8/BLLava8.ci4.pal.inc.c"
};

Gfx Global_BLLava8_Gfx[] = {
    #include "assets/levelGroup/Global/BLLava8/BLLava8.gfx.inc.c"
};

Vec3f Global_BLLava8_ColVerts[] = {
    #include "assets/levelGroup/Global/BLLava8/BLLava8.colVerts.inc.c"
};

Vec3w Global_BLLava8_ColTris[] = {
    #include "assets/levelGroup/Global/BLLava8/BLLava8.colTris.inc.c"
};

Rect3D Global_BLLava8_BoundBox = {
    #include "assets/levelGroup/Global/BLLava8/BLLava8.boundBox.inc.c"
};

ModelCollision Global_BLLava8_ColH = {
4, 2, Global_BLLava8_ColVerts, Global_BLLava8_ColTris, &Global_BLLava8_BoundBox
};

Vtx Global_BLDestructableTop_Vtx[] = {
    #include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.vtx.inc.c"
};
Mtx Global_IMtx27 = IDENTITY;

Gfx Global_BLDestructableTop_Gfx[] = {
    #include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.gfx.inc.c"
};

Vec3f Global_BLDestructableTop_ColVerts[] = {
    #include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.colVerts.inc.c"
};

Vec3w Global_BLDestructableTop_ColTris[] = {
    #include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.colTris.inc.c"
};

Rect3D Global_BLDestructableTop_BoundBox = {
    #include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.boundBox.inc.c"
};

ModelCollision Global_BLDestructableTop_ColH = {
4, 2, Global_BLDestructableTop_ColVerts, Global_BLDestructableTop_ColTris, &Global_BLDestructableTop_BoundBox
};

Vtx Global_BLMetalBridge_Vtx[] = {
    #include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.vtx.inc.c"
};
Mtx Global_IMtx28 = IDENTITY;

Gfx Global_BLMetalBridge_Gfx[] = {
    #include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.gfx.inc.c"
};

Vec3f Global_BLMetalBridge_ColVerts[] = {
    #include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.colVerts.inc.c"
};

Vec3w Global_BLMetalBridge_ColTris[] = {
    #include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.colTris.inc.c"
};

Rect3D Global_BLMetalBridge_BoundBox = {
    #include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.boundBox.inc.c"
};

ModelCollision Global_BLMetalBridge_ColH = {
8, 10, Global_BLMetalBridge_ColVerts, Global_BLMetalBridge_ColTris, &Global_BLMetalBridge_BoundBox
};

Vtx Global_KLExit_Vtx[] = {
    #include "assets/levelGroup/Global/KLExit/KLExit.vtx.inc.c"
};
Mtx Global_IMtx29 = IDENTITY;

Gfx Global_KLExit_Gfx[] = {
    #include "assets/levelGroup/Global/KLExit/KLExit.gfx.inc.c"
};

Vec3f Global_KLExit_ColVerts[] = {
    #include "assets/levelGroup/Global/KLExit/KLExit.colVerts.inc.c"
};

Vec3w Global_KLExit_ColTris[] = {
    #include "assets/levelGroup/Global/KLExit/KLExit.colTris.inc.c"
};

Rect3D Global_KLExit_BoundBox = {
    #include "assets/levelGroup/Global/KLExit/KLExit.boundBox.inc.c"
};

ModelCollision Global_KLExit_ColH = {
6, 4, Global_KLExit_ColVerts, Global_KLExit_ColTris, &Global_KLExit_BoundBox
};

Vtx Global_KLDoor_Vtx[] = {
    #include "assets/levelGroup/Global/KLDoor/KLDoor.vtx.inc.c"
};
Mtx Global_IMtx30 = IDENTITY;
unsigned char Global_Pad216[] = FILEPAD;
unsigned char Global_KLDoor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/KLDoor/KLDoor.ci4.png.inc.c"
};
unsigned char Global_Pad217[] = FILEPAD;
unsigned char Global_KLDoor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/KLDoor/KLDoor.ci4.pal.inc.c"
};

Gfx Global_KLDoor_Gfx[] = {
    #include "assets/levelGroup/Global/KLDoor/KLDoor.gfx.inc.c"
};

Vec3f Global_KLDoor_ColVerts[] = {
    #include "assets/levelGroup/Global/KLDoor/KLDoor.colVerts.inc.c"
};

Vec3w Global_KLDoor_ColTris[] = {
    #include "assets/levelGroup/Global/KLDoor/KLDoor.colTris.inc.c"
};

Rect3D Global_KLDoor_BoundBox = {
    #include "assets/levelGroup/Global/KLDoor/KLDoor.boundBox.inc.c"
};

ModelCollision Global_KLDoor_ColH = {
8, 8, Global_KLDoor_ColVerts, Global_KLDoor_ColTris, &Global_KLDoor_BoundBox
};

Vtx Global_DCExit_Vtx[] = {
    #include "assets/levelGroup/Global/DCExit/DCExit.vtx.inc.c"
};
Mtx Global_IMtx31 = IDENTITY;

Gfx Global_DCExit_Gfx[] = {
    #include "assets/levelGroup/Global/DCExit/DCExit.gfx.inc.c"
};

Vec3f Global_DCExit_ColVerts[] = {
    #include "assets/levelGroup/Global/DCExit/DCExit.colVerts.inc.c"
};

Vec3w Global_DCExit_ColTris[] = {
    #include "assets/levelGroup/Global/DCExit/DCExit.colTris.inc.c"
};

Rect3D Global_DCExit_BoundBox = {
    #include "assets/levelGroup/Global/DCExit/DCExit.boundBox.inc.c"
};

ModelCollision Global_DCExit_ColH = {
6, 4, Global_DCExit_ColVerts, Global_DCExit_ColTris, &Global_DCExit_BoundBox
};

Vtx Global_TallExitShadow1_Vtx[] = {
    #include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.vtx.inc.c"
};
Mtx Global_IMtx32 = IDENTITY;

Gfx Global_TallExitShadow1_Gfx[] = {
    #include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.gfx.inc.c"
};

Vec3f Global_TallExitShadow1_ColVerts[] = {
    #include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.colVerts.inc.c"
};

Vec3w Global_TallExitShadow1_ColTris[] = {
    #include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.colTris.inc.c"
};

Rect3D Global_TallExitShadow1_BoundBox = {
    #include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.boundBox.inc.c"
};

ModelCollision Global_TallExitShadow1_ColH = {
4, 2, Global_TallExitShadow1_ColVerts, Global_TallExitShadow1_ColTris, &Global_TallExitShadow1_BoundBox
};

Vtx Global_TallExitShadow2_Vtx[] = {
    #include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.vtx.inc.c"
};
Mtx Global_IMtx33 = IDENTITY;

Gfx Global_TallExitShadow2_Gfx[] = {
    #include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.gfx.inc.c"
};

Vec3f Global_TallExitShadow2_ColVerts[] = {
    #include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.colVerts.inc.c"
};

Vec3w Global_TallExitShadow2_ColTris[] = {
    #include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.colTris.inc.c"
};

Rect3D Global_TallExitShadow2_BoundBox = {
    #include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.boundBox.inc.c"
};

ModelCollision Global_TallExitShadow2_ColH = {
4, 2, Global_TallExitShadow2_ColVerts, Global_TallExitShadow2_ColTris, &Global_TallExitShadow2_BoundBox
};

Vtx Global_GCExit1_Vtx[] = {
    #include "assets/levelGroup/Global/GCExit1/GCExit1.vtx.inc.c"
};
Mtx Global_IMtx34 = IDENTITY;

Gfx Global_GCExit1_Gfx[] = {
    #include "assets/levelGroup/Global/GCExit1/GCExit1.gfx.inc.c"
};

Vec3f Global_GCExit1_ColVerts[] = {
    #include "assets/levelGroup/Global/GCExit1/GCExit1.colVerts.inc.c"
};

Vec3w Global_GCExit1_ColTris[] = {
    #include "assets/levelGroup/Global/GCExit1/GCExit1.colTris.inc.c"
};

Rect3D Global_GCExit1_BoundBox = {
    #include "assets/levelGroup/Global/GCExit1/GCExit1.boundBox.inc.c"
};

ModelCollision Global_GCExit1_ColH = {
6, 4, Global_GCExit1_ColVerts, Global_GCExit1_ColTris, &Global_GCExit1_BoundBox
};

Vtx Global_GCExit2_Vtx[] = {
    #include "assets/levelGroup/Global/GCExit2/GCExit2.vtx.inc.c"
};
Mtx Global_IMtx35 = IDENTITY;

Gfx Global_GCExit2_Gfx[] = {
    #include "assets/levelGroup/Global/GCExit2/GCExit2.gfx.inc.c"
};

Vec3f Global_GCExit2_ColVerts[] = {
    #include "assets/levelGroup/Global/GCExit2/GCExit2.colVerts.inc.c"
};

Vec3w Global_GCExit2_ColTris[] = {
    #include "assets/levelGroup/Global/GCExit2/GCExit2.colTris.inc.c"
};

Rect3D Global_GCExit2_BoundBox = {
    #include "assets/levelGroup/Global/GCExit2/GCExit2.boundBox.inc.c"
};

ModelCollision Global_GCExit2_ColH = {
6, 4, Global_GCExit2_ColVerts, Global_GCExit2_ColTris, &Global_GCExit2_BoundBox
};

Vtx Global_trainingRoomLight_Vtx[] = {
    #include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.vtx.inc.c"
};
Mtx Global_IMtx36 = IDENTITY;

Gfx Global_trainingRoomLight_Gfx[] = {
    #include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.gfx.inc.c"
};

Vec3f Global_trainingRoomLight_ColVerts[] = {
    #include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.colVerts.inc.c"
};

Vec3w Global_trainingRoomLight_ColTris[] = {
    #include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.colTris.inc.c"
};

Rect3D Global_trainingRoomLight_BoundBox = {
    #include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.boundBox.inc.c"
};

ModelCollision Global_trainingRoomLight_ColH = {
12, 16, Global_trainingRoomLight_ColVerts, Global_trainingRoomLight_ColTris, &Global_trainingRoomLight_BoundBox
};

Vtx Global_JLCaveExit1_Vtx[] = {
    #include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.vtx.inc.c"
};
Mtx Global_IMtx37 = IDENTITY;

Gfx Global_JLCaveExit1_Gfx[] = {
    #include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.gfx.inc.c"
};

Vec3f Global_JLCaveExit1_ColVerts[] = {
    #include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.colVerts.inc.c"
};

Vec3w Global_JLCaveExit1_ColTris[] = {
    #include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.colTris.inc.c"
};

Rect3D Global_JLCaveExit1_BoundBox = {
    #include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.boundBox.inc.c"
};

ModelCollision Global_JLCaveExit1_ColH = {
6, 4, Global_JLCaveExit1_ColVerts, Global_JLCaveExit1_ColTris, &Global_JLCaveExit1_BoundBox
};

Vtx Global_JLCaveExit2_Vtx[] = {
    #include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.vtx.inc.c"
};
Mtx Global_IMtx38 = IDENTITY;

Gfx Global_JLCaveExit2_Gfx[] = {
    #include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.gfx.inc.c"
};

Vec3f Global_JLCaveExit2_ColVerts[] = {
    #include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.colVerts.inc.c"
};

Vec3w Global_JLCaveExit2_ColTris[] = {
    #include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.colTris.inc.c"
};

Rect3D Global_JLCaveExit2_BoundBox = {
    #include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.boundBox.inc.c"
};

ModelCollision Global_JLCaveExit2_ColH = {
6, 4, Global_JLCaveExit2_ColVerts, Global_JLCaveExit2_ColTris, &Global_JLCaveExit2_BoundBox
};

Vtx Global_JLCaveExit3_Vtx[] = {
    #include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.vtx.inc.c"
};
Mtx Global_IMtx39 = IDENTITY;

Gfx Global_JLCaveExit3_Gfx[] = {
    #include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.gfx.inc.c"
};

Vec3f Global_JLCaveExit3_ColVerts[] = {
    #include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.colVerts.inc.c"
};

Vec3w Global_JLCaveExit3_ColTris[] = {
    #include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.colTris.inc.c"
};

Rect3D Global_JLCaveExit3_BoundBox = {
    #include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.boundBox.inc.c"
};

ModelCollision Global_JLCaveExit3_ColH = {
6, 4, Global_JLCaveExit3_ColVerts, Global_JLCaveExit3_ColTris, &Global_JLCaveExit3_BoundBox
};

Vtx Global_JLCaveExit4_Vtx[] = {
    #include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.vtx.inc.c"
};
Mtx Global_IMtx40 = IDENTITY;

Gfx Global_JLCaveExit4_Gfx[] = {
    #include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.gfx.inc.c"
};

Vec3f Global_JLCaveExit4_ColVerts[] = {
    #include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.colVerts.inc.c"
};

Vec3w Global_JLCaveExit4_ColTris[] = {
    #include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.colTris.inc.c"
};

Rect3D Global_JLCaveExit4_BoundBox = {
    #include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.boundBox.inc.c"
};

ModelCollision Global_JLCaveExit4_ColH = {
6, 4, Global_JLCaveExit4_ColVerts, Global_JLCaveExit4_ColTris, &Global_JLCaveExit4_BoundBox
};

Vtx Global_JLOutsideEntrance_Vtx[] = {
    #include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.vtx.inc.c"
};
Mtx Global_IMtx41 = IDENTITY;

Gfx Global_JLOutsideEntrance_Gfx[] = {
    #include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.gfx.inc.c"
};

Vec3f Global_JLOutsideEntrance_ColVerts[] = {
    #include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.colVerts.inc.c"
};

Vec3w Global_JLOutsideEntrance_ColTris[] = {
    #include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.colTris.inc.c"
};

Rect3D Global_JLOutsideEntrance_BoundBox = {
    #include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.boundBox.inc.c"
};

ModelCollision Global_JLOutsideEntrance_ColH = {
12, 16, Global_JLOutsideEntrance_ColVerts, Global_JLOutsideEntrance_ColTris, &Global_JLOutsideEntrance_BoundBox
};

Vtx Global_JLFxCamPillar_Vtx[] = {
    #include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.vtx.inc.c"
};
Mtx Global_IMtx42 = IDENTITY;

Gfx Global_JLFxCamPillar_Gfx[] = {
    #include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.gfx.inc.c"
};

Vec3f Global_JLFxCamPillar_ColVerts[] = {
    #include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.colVerts.inc.c"
};

Vec3w Global_JLFxCamPillar_ColTris[] = {
    #include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.colTris.inc.c"
};

Rect3D Global_JLFxCamPillar_BoundBox = {
    #include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.boundBox.inc.c"
};

ModelCollision Global_JLFxCamPillar_ColH = {
12, 12, Global_JLFxCamPillar_ColVerts, Global_JLFxCamPillar_ColTris, &Global_JLFxCamPillar_BoundBox
};

Vtx Global_JLCaveDoor_Vtx[] = {
    #include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.vtx.inc.c"
};
Mtx Global_IMtx43 = IDENTITY;

Gfx Global_JLCaveDoor_Gfx[] = {
    #include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.gfx.inc.c"
};

Vec3f Global_JLCaveDoor_ColVerts[] = {
    #include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.colVerts.inc.c"
};

Vec3w Global_JLCaveDoor_ColTris[] = {
    #include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.colTris.inc.c"
};

Rect3D Global_JLCaveDoor_BoundBox = {
    #include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.boundBox.inc.c"
};

ModelCollision Global_JLCaveDoor_ColH = {
8, 8, Global_JLCaveDoor_ColVerts, Global_JLCaveDoor_ColTris, &Global_JLCaveDoor_BoundBox
};

