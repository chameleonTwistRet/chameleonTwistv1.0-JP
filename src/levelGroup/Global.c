#include "common.h"
//proper names
extern unsigned char Global_poleWood_PAL[]; // pole palette
extern unsigned char Global_poleWood_PNG[]; // pole img
//build names
extern unsigned char D_02028D30_Global[]; // pole palette
extern unsigned char D_02028528_Global[]; // pole img
extern Vtx D_800FE7D8_Global[];
extern Vtx D_800FE8C8_Global[];
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

Mtx_f Global_globalScope_Mtx = {
#include "assets/levelGroup/Global/globalScope/globalScope.mtx.inc.c"
};
Lights1 Global_globalScope_Light =
#include "assets/levelGroup/Global/globalScope/globalScope.light.inc.c"
Vtx Global_cannon_Vtx[] = {
#include "assets/levelGroup/Global/cannon/cannon.vtx.inc.c"
};
Mtx_f Global_cannon_Mtx = {
#include "assets/levelGroup/Global/cannon/cannon.mtx.inc.c"
};
unsigned char Global_Pad1[] = FILEPAD;
unsigned char Global_cannonHole_PNG[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonHole.rgba16.png.inc.c"
};
unsigned char Global_Pad2[] = FILEPAD;
unsigned char Global_cannonBarrel_PNG[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonBarrel.rgba16.png.inc.c"
};
unsigned char Global_Pad3[] = FILEPAD;
unsigned char Global_black_PNG[] = {
#include "build/include/assets/levelGroup/Global/cannon/black.rgba16.png.inc.c"
};
Gfx Global_cannon_Gfx[] = {
#include "assets/levelGroup/Global/cannon/cannon.gfx.inc.c"
};
Vtx Global_unkWood_Vtx[] = {
#include "assets/levelGroup/Global/unkWood/unkWood.vtx.inc.c"
};
Mtx_f Global_unkWood_Mtx = {
#include "assets/levelGroup/Global/unkWood/unkWood.mtx.inc.c"
};
unsigned char Global_Pad4[] = FILEPAD;
unsigned char Global_woodWithBolt_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/woodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad5[] = FILEPAD;
unsigned char Global_darkWoodWithBolt_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWoodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad6[] = FILEPAD;
unsigned char Global_darkWood_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWood.rgba16.png.inc.c"
};
unsigned char Global_Pad7[] = FILEPAD;
unsigned char Global_lightWood_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/lightWood.rgba16.png.inc.c"
};
unsigned char Global_Pad8[] = FILEPAD;
unsigned char Global_midWood_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/midWood.rgba16.png.inc.c"
};
Gfx Global_unkWood_Gfx[] = {
#include "assets/levelGroup/Global/unkWood/unkWood.gfx.inc.c"
};
Vtx Global_unk_Vtx[] = {
#include "assets/levelGroup/Global/unk/unk.vtx.inc.c"
};
Mtx_f Global_unk_Mtx = {
#include "assets/levelGroup/Global/unk/unk.mtx.inc.c"
};
Gfx Global_unk_Gfx[] = {
#include "assets/levelGroup/Global/unk/unk.gfx.inc.c"
};
Vtx Global_unk2_Vtx[] = {
#include "assets/levelGroup/Global/unk2/unk2.vtx.inc.c"
};
Mtx_f Global_unk2_Mtx = {
#include "assets/levelGroup/Global/unk2/unk2.mtx.inc.c"
};
Gfx Global_unk2_Gfx[] = {
#include "assets/levelGroup/Global/unk2/unk2.gfx.inc.c"
};
Vtx Global_unk40_Vtx[] = {
#include "assets/levelGroup/Global/unk40/unk40.vtx.inc.c"
};
Mtx_f Global_unk40_Mtx = {
#include "assets/levelGroup/Global/unk40/unk40.mtx.inc.c"
};
unsigned char Global_Pad9[] = FILEPAD;
unsigned char Global_shadow_PNG[] = {
#include "build/include/assets/levelGroup/Global/unk40/shadow.ia8.png.inc.c"
};
Gfx Global_unk40_Gfx[] = {
#include "assets/levelGroup/Global/unk40/unk40.gfx.inc.c"
};
Gfx Global_unk402_Gfx[] = {
#include "assets/levelGroup/Global/unk40/unk402.gfx.inc.c"
};
Vec3f Global_unkCol2_Verts[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colV.inc.c"
};
Vec3s Global_unkCol2_Tris[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colT.inc.c"
};
Vec3f Global_unkCol2_Settings[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colS.inc.c"
};
CollisionData Global_unkCol2_Header[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colH.inc.c"
};
Vec3f Global_unk40_Verts[] = {
#include "assets/levelGroup/Global/unk40/unk40.colV.inc.c"
};
Vec3s Global_unk40_Tris[] = {
#include "assets/levelGroup/Global/unk40/unk40.colT.inc.c"
};
Vec3f Global_unk40_Settings[] = {
#include "assets/levelGroup/Global/unk40/unk40.colS.inc.c"
};
CollisionData Global_unk40_Header[] = {
#include "assets/levelGroup/Global/unk40/unk40.colH.inc.c"
};
Vec3f Global_unkCol3_Verts[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colV.inc.c"
};
Vec3s Global_unkCol3_Tris[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colT.inc.c"
};
Vec3f Global_unkCol3_Settings[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colS.inc.c"
};
CollisionData Global_unkCol3_Header[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colH.inc.c"
};
unsigned char Global_what_Bin[] = {
#include "build/include/assets/levelGroup/Global/what.inc.c"
};
unsigned char Global_Pad10[] = FILEPAD;
unsigned char Global_brownBrickWall_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad11[] = FILEPAD;
unsigned char Global_brownBrickWall_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad12[] = FILEPAD;
unsigned char Global_sandAgain_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.png.inc.c"
};
unsigned char Global_Pad13[] = FILEPAD;
unsigned char Global_sandAgain_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.pal.inc.c"
};
unsigned char Global_Pad14[] = FILEPAD;
unsigned char Global_gravel_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gravel.i4.png.inc.c"
};
unsigned char Global_Pad15[] = FILEPAD;
unsigned char Global_wall_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/wall.i4.png.inc.c"
};
unsigned char Global_Pad16[] = FILEPAD;
unsigned char Global_gateGray_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gateGray.ia4.png.inc.c"
};
unsigned char Global_Pad17[] = FILEPAD;
unsigned char Global_dcRockFloor_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloor.i4.png.inc.c"
};
unsigned char Global_Pad18[] = FILEPAD;
unsigned char Global_dcRockFloorColor_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloorColor.ci4.png.inc.c"
};
unsigned char Global_Pad19[] = FILEPAD;
unsigned char Global_dcRockFloorColor_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloorColor.ci4.pal.inc.c"
};
unsigned char Global_Pad20[] = FILEPAD;
unsigned char Global_smallBrickWall_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/smallBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad21[] = FILEPAD;
unsigned char Global_longWoodTopper_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.png.inc.c"
};
unsigned char Global_Pad22[] = FILEPAD;
unsigned char Global_longWoodTopper_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.pal.inc.c"
};
unsigned char Global_Pad23[] = FILEPAD;
unsigned char Global_longWood_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.png.inc.c"
};
unsigned char Global_Pad24[] = FILEPAD;
unsigned char Global_longWood_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.pal.inc.c"
};
unsigned char Global_Pad25[] = FILEPAD;
unsigned char Global_yellowBrickWall_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad26[] = FILEPAD;
unsigned char Global_yellowBrickWall_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad27[] = FILEPAD;
unsigned char Global_bigBrickWall2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall2.i4.png.inc.c"
};
unsigned char Global_Pad28[] = FILEPAD;
unsigned char Global_bigBrickWall_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad29[] = FILEPAD;
unsigned char Global_waterKinda_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.png.inc.c"
};
unsigned char Global_Pad30[] = FILEPAD;
unsigned char Global_waterKinda_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.pal.inc.c"
};
unsigned char Global_Pad31[] = FILEPAD;
unsigned char Global_brickWall2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.png.inc.c"
};
unsigned char Global_Pad32[] = FILEPAD;
unsigned char Global_brickWall2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad33[] = FILEPAD;
unsigned char Global_unk12_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/unk12.i4.png.inc.c"
};
unsigned char Global_Pad34[] = FILEPAD;
unsigned char Global_goldStrip_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.png.inc.c"
};
unsigned char Global_Pad35[] = FILEPAD;
unsigned char Global_goldStrip_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.pal.inc.c"
};
unsigned char Global_Pad36[] = FILEPAD;
unsigned char Global_antMural4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural4.i4.png.inc.c"
};
unsigned char Global_Pad37[] = FILEPAD;
unsigned char Global_antMural3_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural3.i4.png.inc.c"
};
unsigned char Global_Pad38[] = FILEPAD;
unsigned char Global_antMural2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural2.i4.png.inc.c"
};
unsigned char Global_Pad39[] = FILEPAD;
unsigned char Global_antMural1_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural1.i4.png.inc.c"
};
unsigned char Global_Pad40[] = FILEPAD;
unsigned char Global_brickWall_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall.i4.png.inc.c"
};
unsigned char Global_Pad41[] = FILEPAD;
unsigned char Global_strip2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/strip2.i4.png.inc.c"
};
unsigned char Global_Pad42[] = FILEPAD;
unsigned char Global_lavaSolid_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.png.inc.c"
};
unsigned char Global_Pad43[] = FILEPAD;
unsigned char Global_lavaSolid_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.pal.inc.c"
};
unsigned char Global_Pad44[] = FILEPAD;
unsigned char Global_fraMEd_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/fraMEd.ia4.png.inc.c"
};
unsigned char Global_Pad45[] = FILEPAD;
unsigned char Global_squares_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/squares.i4.png.inc.c"
};
unsigned char Global_Pad46[] = FILEPAD;
unsigned char Global_metalPlate_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlate.i4.png.inc.c"
};
unsigned char Global_Pad47[] = FILEPAD;
unsigned char Global_factoryPlates_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/factoryPlates.i4.png.inc.c"
};
unsigned char Global_Pad48[] = FILEPAD;
unsigned char Global_steelPlate_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/steelPlate.i4.png.inc.c"
};
unsigned char Global_Pad49[] = FILEPAD;
unsigned char Global_metalPlates_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlates.i4.png.inc.c"
};
unsigned char Global_Pad50[] = FILEPAD;
unsigned char Global_ballGround_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/ballGround.i4.png.inc.c"
};
unsigned char Global_Pad51[] = FILEPAD;
unsigned char Global_cube_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cube.i4.png.inc.c"
};
unsigned char Global_Pad52[] = FILEPAD;
unsigned char Global_hexComb_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/hexComb.i4.png.inc.c"
};
unsigned char Global_Pad53[] = FILEPAD;
unsigned char Global_hexCombFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/hexCombFade.i8.png.inc.c"
};
unsigned char Global_Pad54[] = FILEPAD;
unsigned char Global_brokenCube_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brokenCube.i4.png.inc.c"
};
unsigned char Global_Pad55[] = FILEPAD;
unsigned char Global_klTILE_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.png.inc.c"
};
unsigned char Global_Pad56[] = FILEPAD;
unsigned char Global_klTILE_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.pal.inc.c"
};
unsigned char Global_gateCompressed_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.png.inc.c"
};
unsigned char Global_gateCompressed_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.pal.inc.c"
};
unsigned char Global_Pad57[] = FILEPAD;
unsigned char Global_strip_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.png.inc.c"
};
unsigned char Global_Pad58[] = FILEPAD;
unsigned char Global_strip_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.pal.inc.c"
};
unsigned char Global_Pad59[] = FILEPAD;
unsigned char Global_chocoKidsLabel_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.png.inc.c"
};
unsigned char Global_Pad60[] = FILEPAD;
unsigned char Global_chocoKidsLabel_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.pal.inc.c"
};
unsigned char Global_Pad61[] = FILEPAD;
unsigned char Global_justBlack_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.png.inc.c"
};
unsigned char Global_Pad62[] = FILEPAD;
unsigned char Global_justBlack_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.pal.inc.c"
};
unsigned char Global_Pad63[] = FILEPAD;
unsigned char Global_cracker_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.png.inc.c"
};
unsigned char Global_Pad64[] = FILEPAD;
unsigned char Global_cracker_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.pal.inc.c"
};
unsigned char Global_Pad65[] = FILEPAD;
unsigned char Global_KLThing1_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.png.inc.c"
};
unsigned char Global_Pad66[] = FILEPAD;
unsigned char Global_KLThing1_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad67[] = FILEPAD;
unsigned char Global_KLFloor3_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.png.inc.c"
};
unsigned char Global_Pad68[] = FILEPAD;
unsigned char Global_KLFloor3_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.pal.inc.c"
};
unsigned char Global_Pad69[] = FILEPAD;
unsigned char Global_KLFloor2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad70[] = FILEPAD;
unsigned char Global_KLFloor2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad71[] = FILEPAD;
unsigned char Global_waferSide_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.png.inc.c"
};
unsigned char Global_Pad72[] = FILEPAD;
unsigned char Global_waferSide_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.pal.inc.c"
};
unsigned char Global_Pad73[] = FILEPAD;
unsigned char Global_chocoKIDS_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.png.inc.c"
};
unsigned char Global_Pad74[] = FILEPAD;
unsigned char Global_chocoKIDS_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.pal.inc.c"
};
unsigned char Global_Pad75[] = FILEPAD;
unsigned char Global_sandwSide_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.png.inc.c"
};
unsigned char Global_Pad76[] = FILEPAD;
unsigned char Global_sandwSide_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.pal.inc.c"
};
unsigned char Global_Pad77[] = FILEPAD;
unsigned char Global_giftSide_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.png.inc.c"
};
unsigned char Global_Pad78[] = FILEPAD;
unsigned char Global_giftSide_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.pal.inc.c"
};
unsigned char Global_Pad79[] = FILEPAD;
unsigned char Global_giftTop_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.png.inc.c"
};
unsigned char Global_Pad80[] = FILEPAD;
unsigned char Global_giftTop_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.pal.inc.c"
};
unsigned char Global_Pad81[] = FILEPAD;
unsigned char Global_blueBrickFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad82[] = FILEPAD;
unsigned char Global_blueBrickFade_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad83[] = FILEPAD;
unsigned char Global_rainbow_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.png.inc.c"
};
unsigned char Global_Pad84[] = FILEPAD;
unsigned char Global_rainbow_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.pal.inc.c"
};
unsigned char Global_Pad85[] = FILEPAD;
unsigned char Global_blueBrick_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.png.inc.c"
};
unsigned char Global_Pad86[] = FILEPAD;
unsigned char Global_blueBrick_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad87[] = FILEPAD;
unsigned char Global_orangeBrick_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.png.inc.c"
};
unsigned char Global_Pad88[] = FILEPAD;
unsigned char Global_orangeBrick_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad89[] = FILEPAD;
unsigned char Global_orangeLego_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.png.inc.c"
};
unsigned char Global_Pad90[] = FILEPAD;
unsigned char Global_orangeLego_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.pal.inc.c"
};
unsigned char Global_Pad91[] = FILEPAD;
unsigned char Global_blueLego_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.png.inc.c"
};
unsigned char Global_Pad92[] = FILEPAD;
unsigned char Global_blueLego_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.pal.inc.c"
};
unsigned char Global_ropeChroma_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.png.inc.c"
};
unsigned char Global_ropeChroma_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.pal.inc.c"
};
unsigned char Global_Pad93[] = FILEPAD;
unsigned char Global_pebbles_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.png.inc.c"
};
unsigned char Global_Pad94[] = FILEPAD;
unsigned char Global_pebbles_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.pal.inc.c"
};
unsigned char Global_Pad95[] = FILEPAD;
unsigned char Global_chain2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chain2.rgba16.png.inc.c"
};
unsigned char Global_Pad96[] = FILEPAD;
unsigned char Global_chain1_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chain1.rgba16.png.inc.c"
};
unsigned char Global_Pad97[] = FILEPAD;
unsigned char Global_DCSmallTiles_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.png.inc.c"
};
unsigned char Global_Pad98[] = FILEPAD;
unsigned char Global_DCSmallTiles_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad99[] = FILEPAD;
unsigned char Global_DCSandFloor_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.png.inc.c"
};
unsigned char Global_Pad100[] = FILEPAD;
unsigned char Global_DCSandFloor_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad101[] = FILEPAD;
unsigned char Global_dcTHING2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.png.inc.c"
};
unsigned char Global_Pad102[] = FILEPAD;
unsigned char Global_dcTHING2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.pal.inc.c"
};
unsigned char Global_Pad103[] = FILEPAD;
unsigned char Global_jlText3_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.png.inc.c"
};
unsigned char Global_Pad104[] = FILEPAD;
unsigned char Global_jlText3_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.pal.inc.c"
};
unsigned char Global_Pad105[] = FILEPAD;
unsigned char Global_DCBricks_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.png.inc.c"
};
unsigned char Global_Pad106[] = FILEPAD;
unsigned char Global_DCBricks_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.pal.inc.c"
};
unsigned char Global_Pad107[] = FILEPAD;
unsigned char Global_DCFloor2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad108[] = FILEPAD;
unsigned char Global_DCFloor2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad109[] = FILEPAD;
unsigned char Global_DCWall3_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.png.inc.c"
};
unsigned char Global_Pad110[] = FILEPAD;
unsigned char Global_DCWall3_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.pal.inc.c"
};
unsigned char Global_Pad111[] = FILEPAD;
unsigned char Global_DCWall2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad112[] = FILEPAD;
unsigned char Global_DCWall2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad113[] = FILEPAD;
unsigned char Global_DCWall1_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.png.inc.c"
};
unsigned char Global_Pad114[] = FILEPAD;
unsigned char Global_DCWall1_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.pal.inc.c"
};
unsigned char Global_Pad115[] = FILEPAD;
unsigned char Global_DCThing3_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.png.inc.c"
};
unsigned char Global_Pad116[] = FILEPAD;
unsigned char Global_DCThing3_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.pal.inc.c"
};
unsigned char Global_Pad117[] = FILEPAD;
unsigned char Global_DCThing2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.png.inc.c"
};
unsigned char Global_Pad118[] = FILEPAD;
unsigned char Global_DCThing2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.pal.inc.c"
};
unsigned char Global_Pad119[] = FILEPAD;
unsigned char Global_DCThing1_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad120[] = FILEPAD;
unsigned char Global_DCThing1_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad121[] = FILEPAD;
unsigned char Global_DCSandWallFadeUp_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.png.inc.c"
};
unsigned char Global_Pad122[] = FILEPAD;
unsigned char Global_DCSandWallFadeUp_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.pal.inc.c"
};
unsigned char Global_Pad123[] = FILEPAD;
unsigned char Global_GCThing1_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad124[] = FILEPAD;
unsigned char Global_GCThing1_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad125[] = FILEPAD;
unsigned char Global_DCTiles_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad126[] = FILEPAD;
unsigned char Global_DCTiles_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad127[] = FILEPAD;
unsigned char Global_DCFloor_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.png.inc.c"
};
unsigned char Global_Pad128[] = FILEPAD;
unsigned char Global_DCFloor_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad129[] = FILEPAD;
unsigned char Global_rope_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/rope.rgba16.png.inc.c"
};
unsigned char Global_Pad130[] = FILEPAD;
unsigned char Global_ropeConnector_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.png.inc.c"
};
unsigned char Global_Pad131[] = FILEPAD;
unsigned char Global_ropeConnector_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.pal.inc.c"
};
unsigned char Global_Pad132[] = FILEPAD;
unsigned char Global_bigLog_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.png.inc.c"
};
unsigned char Global_Pad133[] = FILEPAD;
unsigned char Global_bigLog_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.pal.inc.c"
};
unsigned char Global_Pad134[] = FILEPAD;
unsigned char Global_sander_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.png.inc.c"
};
unsigned char Global_Pad135[] = FILEPAD;
unsigned char Global_sander_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.pal.inc.c"
};
unsigned char Global_Pad136[] = FILEPAD;
unsigned char Global_jllogTop_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.png.inc.c"
};
unsigned char Global_Pad137[] = FILEPAD;
unsigned char Global_jllogTop_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.pal.inc.c"
};
unsigned char Global_Pad138[] = FILEPAD;
unsigned char Global_jlLog_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.png.inc.c"
};
unsigned char Global_Pad139[] = FILEPAD;
unsigned char Global_jlLog_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.pal.inc.c"
};
unsigned char Global_Pad140[] = FILEPAD;
unsigned char Global_jlText1_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.png.inc.c"
};
unsigned char Global_Pad141[] = FILEPAD;
unsigned char Global_jlText1_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.pal.inc.c"
};
unsigned char Global_Pad142[] = FILEPAD;
unsigned char Global_gate_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gate.rgba16.png.inc.c"
};
unsigned char Global_Pad143[] = FILEPAD;
unsigned char Global_poleWood_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.png.inc.c"
};
unsigned char Global_Pad144[] = FILEPAD;
unsigned char Global_poleWood_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.pal.inc.c"
};
unsigned char Global_Pad145[] = FILEPAD;
unsigned char Global_Darkwood_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.png.inc.c"
};
unsigned char Global_Pad146[] = FILEPAD;
unsigned char Global_Darkwood_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.pal.inc.c"
};
unsigned char Global_Pad147[] = FILEPAD;
unsigned char Global_wood_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.png.inc.c"
};
unsigned char Global_Pad148[] = FILEPAD;
unsigned char Global_wood_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.pal.inc.c"
};
unsigned char Global_Pad149[] = FILEPAD;
unsigned char Global_GCFloorboard_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.png.inc.c"
};
unsigned char Global_Pad150[] = FILEPAD;
unsigned char Global_GCFloorboard_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.pal.inc.c"
};
unsigned char Global_Pad151[] = FILEPAD;
unsigned char Global_GCTiles_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad152[] = FILEPAD;
unsigned char Global_GCTiles_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad153[] = FILEPAD;
unsigned char Global_GCWall2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad154[] = FILEPAD;
unsigned char Global_GCWall2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad155[] = FILEPAD;
unsigned char Global_windows_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/windows.ia4.png.inc.c"
};
unsigned char Global_Pad156[] = FILEPAD;
unsigned char Global_water_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.png.inc.c"
};
unsigned char Global_Pad157[] = FILEPAD;
unsigned char Global_water_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.pal.inc.c"
};
unsigned char Global_Pad158[] = FILEPAD;
unsigned char Global_GCWall_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.png.inc.c"
};
unsigned char Global_Pad159[] = FILEPAD;
unsigned char Global_GCWall_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.pal.inc.c"
};
unsigned char Global_Pad160[] = FILEPAD;
unsigned char Global_GCBigCabinet_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.png.inc.c"
};
unsigned char Global_Pad161[] = FILEPAD;
unsigned char Global_GCBigCabinet_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad162[] = FILEPAD;
unsigned char Global_GCWood_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.png.inc.c"
};
unsigned char Global_Pad163[] = FILEPAD;
unsigned char Global_GCWood_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.pal.inc.c"
};
unsigned char Global_Pad164[] = FILEPAD;
unsigned char Global_sandFadeTop_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.png.inc.c"
};
unsigned char Global_Pad165[] = FILEPAD;
unsigned char Global_sandFadeTop_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.pal.inc.c"
};
unsigned char Global_Pad166[] = FILEPAD;
unsigned char Global_JLMountain_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.png.inc.c"
};
unsigned char Global_Pad167[] = FILEPAD;
unsigned char Global_JLMountain_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.pal.inc.c"
};
unsigned char Global_Pad168[] = FILEPAD;
unsigned char Global_JLCaveFadeTop_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.png.inc.c"
};
unsigned char Global_Pad169[] = FILEPAD;
unsigned char Global_JLCaveFadeTop_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.pal.inc.c"
};
unsigned char Global_Pad170[] = FILEPAD;
unsigned char Global_jlText5_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.png.inc.c"
};
unsigned char Global_Pad171[] = FILEPAD;
unsigned char Global_jlText5_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.pal.inc.c"
};
unsigned char Global_Pad172[] = FILEPAD;
unsigned char Global_jlText2_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.png.inc.c"
};
unsigned char Global_Pad173[] = FILEPAD;
unsigned char Global_jlText2_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.pal.inc.c"
};
unsigned char Global_Pad174[] = FILEPAD;
unsigned char Global_jlText4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.png.inc.c"
};
unsigned char Global_Pad175[] = FILEPAD;
unsigned char Global_jlText4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.pal.inc.c"
};
unsigned char Global_Pad176[] = FILEPAD;
unsigned char Global_JLCave_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.png.inc.c"
};
unsigned char Global_Pad177[] = FILEPAD;
unsigned char Global_JLCave_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.pal.inc.c"
};
unsigned char Global_Pad178[] = FILEPAD;
unsigned char Global_JLCaveFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.png.inc.c"
};
unsigned char Global_Pad179[] = FILEPAD;
unsigned char Global_JLCaveFade_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.pal.inc.c"
};
unsigned char Global_Pad180[] = FILEPAD;
unsigned char Global_BLRedYellowPlate_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.png.inc.c"
};
unsigned char Global_Pad181[] = FILEPAD;
unsigned char Global_BLRedYellowPlate_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.pal.inc.c"
};
unsigned char Global_Pad182[] = FILEPAD;
unsigned char Global_KLOrangeBrickFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad183[] = FILEPAD;
unsigned char Global_KLOrangeBrickFade_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad184[] = FILEPAD;
unsigned char Global_KLCrackerFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.png.inc.c"
};
unsigned char Global_Pad185[] = FILEPAD;
unsigned char Global_KLCrackerFade_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.pal.inc.c"
};
unsigned char Global_Pad186[] = FILEPAD;
unsigned char Global_KLFloor_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.png.inc.c"
};
unsigned char Global_Pad187[] = FILEPAD;
unsigned char Global_KLFloor_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad188[] = FILEPAD;
unsigned char Global_woodFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.png.inc.c"
};
unsigned char Global_Pad189[] = FILEPAD;
unsigned char Global_woodFade_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.pal.inc.c"
};
unsigned char Global_Pad190[] = FILEPAD;
unsigned char Global_cabinetFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.png.inc.c"
};
unsigned char Global_Pad191[] = FILEPAD;
unsigned char Global_cabinetFade_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.pal.inc.c"
};
unsigned char Global_Pad192[] = FILEPAD;
unsigned char Global_cabinet_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.png.inc.c"
};
unsigned char Global_Pad193[] = FILEPAD;
unsigned char Global_cabinet_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad194[] = FILEPAD;
unsigned char Global_fogFade_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/fogFade.ia8.png.inc.c"
};
Vtx Global_unk3_Vtx[] = {
#include "assets/levelGroup/Global/unk3/unk3.vtx.inc.c"
};
Mtx_f Global_unk3_Mtx = {
#include "assets/levelGroup/Global/unk3/unk3.mtx.inc.c"
};
Gfx Global_unk3_Gfx[] = {
#include "assets/levelGroup/Global/unk3/unk3.gfx.inc.c"
};
Vec3f Global_unk3_Verts[] = {
#include "assets/levelGroup/Global/unk3/unk3.colV.inc.c"
};
Vec3s Global_unk3_Tris[] = {
#include "assets/levelGroup/Global/unk3/unk3.colT.inc.c"
};
Vec3f Global_unk3_Settings[] = {
#include "assets/levelGroup/Global/unk3/unk3.colS.inc.c"
};
CollisionData Global_unk3_Header[] = {
#include "assets/levelGroup/Global/unk3/unk3.colH.inc.c"
};
unsigned char Global_zeroooo_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo.inc.c"
};
Vtx Global_unk4_Vtx[] = {
#include "assets/levelGroup/Global/unk4/unk4.vtx.inc.c"
};
Mtx_f Global_unk4_Mtx = {
#include "assets/levelGroup/Global/unk4/unk4.mtx.inc.c"
};
Gfx Global_unk4_Gfx[] = {
#include "assets/levelGroup/Global/unk4/unk4.gfx.inc.c"
};
Vec3f Global_unk4_Verts[] = {
#include "assets/levelGroup/Global/unk4/unk4.colV.inc.c"
};
Vec3s Global_unk4_Tris[] = {
#include "assets/levelGroup/Global/unk4/unk4.colT.inc.c"
};
Vec3f Global_unk4_Settings[] = {
#include "assets/levelGroup/Global/unk4/unk4.colS.inc.c"
};
CollisionData Global_unk4_Header[] = {
#include "assets/levelGroup/Global/unk4/unk4.colH.inc.c"
};
unsigned char Global_zeroooo2_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo2.inc.c"
};
Vtx Global_unk5_Vtx[] = {
#include "assets/levelGroup/Global/unk5/unk5.vtx.inc.c"
};
Mtx_f Global_unk5_Mtx = {
#include "assets/levelGroup/Global/unk5/unk5.mtx.inc.c"
};
Gfx Global_unk5_Gfx[] = {
#include "assets/levelGroup/Global/unk5/unk5.gfx.inc.c"
};
Vec3f Global_unk5_Verts[] = {
#include "assets/levelGroup/Global/unk5/unk5.colV.inc.c"
};
Vec3s Global_unk5_Tris[] = {
#include "assets/levelGroup/Global/unk5/unk5.colT.inc.c"
};
Vec3f Global_unk5_Settings[] = {
#include "assets/levelGroup/Global/unk5/unk5.colS.inc.c"
};
CollisionData Global_unk5_Header[] = {
#include "assets/levelGroup/Global/unk5/unk5.colH.inc.c"
};
unsigned char Global_zeroooo3_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo3.inc.c"
};
Vtx Global_unk6_Vtx[] = {
#include "assets/levelGroup/Global/unk6/unk6.vtx.inc.c"
};
Mtx_f Global_unk6_Mtx = {
#include "assets/levelGroup/Global/unk6/unk6.mtx.inc.c"
};
Gfx Global_unk6_Gfx[] = {
#include "assets/levelGroup/Global/unk6/unk6.gfx.inc.c"
};
Vec3f Global_unk6_Verts[] = {
#include "assets/levelGroup/Global/unk6/unk6.colV.inc.c"
};
Vec3s Global_unk6_Tris[] = {
#include "assets/levelGroup/Global/unk6/unk6.colT.inc.c"
};
Vec3f Global_unk6_Settings[] = {
#include "assets/levelGroup/Global/unk6/unk6.colS.inc.c"
};
CollisionData Global_unk6_Header[] = {
#include "assets/levelGroup/Global/unk6/unk6.colH.inc.c"
};
unsigned char Global_zeroooo4_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo4.inc.c"
};
Vtx Global_unk7_Vtx[] = {
#include "assets/levelGroup/Global/unk7/unk7.vtx.inc.c"
};
Mtx_f Global_unk7_Mtx = {
#include "assets/levelGroup/Global/unk7/unk7.mtx.inc.c"
};
Gfx Global_unk7_Gfx[] = {
#include "assets/levelGroup/Global/unk7/unk7.gfx.inc.c"
};
Vec3f Global_unk7_Verts[] = {
#include "assets/levelGroup/Global/unk7/unk7.colV.inc.c"
};
Vec3s Global_unk7_Tris[] = {
#include "assets/levelGroup/Global/unk7/unk7.colT.inc.c"
};
Vec3f Global_unk7_Settings[] = {
#include "assets/levelGroup/Global/unk7/unk7.colS.inc.c"
};
CollisionData Global_unk7_Header[] = {
#include "assets/levelGroup/Global/unk7/unk7.colH.inc.c"
};
unsigned char Global_zeroooo5_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo5.inc.c"
};
Vtx Global_unk8_Vtx[] = {
#include "assets/levelGroup/Global/unk8/unk8.vtx.inc.c"
};
Mtx_f Global_unk8_Mtx = {
#include "assets/levelGroup/Global/unk8/unk8.mtx.inc.c"
};
Gfx Global_unk8_Gfx[] = {
#include "assets/levelGroup/Global/unk8/unk8.gfx.inc.c"
};
Vec3f Global_unk8_Verts[] = {
#include "assets/levelGroup/Global/unk8/unk8.colV.inc.c"
};
Vec3s Global_unk8_Tris[] = {
#include "assets/levelGroup/Global/unk8/unk8.colT.inc.c"
};
Vec3f Global_unk8_Settings[] = {
#include "assets/levelGroup/Global/unk8/unk8.colS.inc.c"
};
CollisionData Global_unk8_Header[] = {
#include "assets/levelGroup/Global/unk8/unk8.colH.inc.c"
};
unsigned char Global_zeroooo6_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo6.inc.c"
};
Mtx_f Global_unk9_Mtx = {
#include "assets/levelGroup/Global/unk9/unk9.mtx.inc.c"
};
Gfx Global_unk9_Gfx[] = {
#include "assets/levelGroup/Global/unk9/unk9.gfx.inc.c"
};
Vec3f Global_unk9_Verts[] = {
#include "assets/levelGroup/Global/unk9/unk9.colV.inc.c"
};
Vec3s Global_unk9_Tris[] = {
#include "assets/levelGroup/Global/unk9/unk9.colT.inc.c"
};
Vec3f Global_unk9_Settings[] = {
#include "assets/levelGroup/Global/unk9/unk9.colS.inc.c"
};
CollisionData Global_unk9_Header[] = {
#include "assets/levelGroup/Global/unk9/unk9.colH.inc.c"
};
Vtx Global_unkA_Vtx[] = {
#include "assets/levelGroup/Global/unkA/unkA.vtx.inc.c"
};
Mtx_f Global_unkA_Mtx = {
#include "assets/levelGroup/Global/unkA/unkA.mtx.inc.c"
};
Gfx Global_unkA_Gfx[] = {
#include "assets/levelGroup/Global/unkA/unkA.gfx.inc.c"
};
Vec3f Global_unkA_Verts[] = {
#include "assets/levelGroup/Global/unkA/unkA.colV.inc.c"
};
Vec3s Global_unkA_Tris[] = {
#include "assets/levelGroup/Global/unkA/unkA.colT.inc.c"
};
Vec3f Global_unkA_Settings[] = {
#include "assets/levelGroup/Global/unkA/unkA.colS.inc.c"
};
CollisionData Global_unkA_Header[] = {
#include "assets/levelGroup/Global/unkA/unkA.colH.inc.c"
};
unsigned char Global_zeroooo7_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo7.inc.c"
};
Vtx Global_unkB_Vtx[] = {
#include "assets/levelGroup/Global/unkB/unkB.vtx.inc.c"
};
Mtx_f Global_unkB_Mtx = {
#include "assets/levelGroup/Global/unkB/unkB.mtx.inc.c"
};
unsigned char Global_Pad195[] = FILEPAD;
unsigned char Global_unkB1_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB1.i4.png.inc.c"
};
unsigned char Global_Pad196[] = FILEPAD;
unsigned char Global_unkB2_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB2.i4.png.inc.c"
};
Gfx Global_unkB_Gfx[] = {
#include "assets/levelGroup/Global/unkB/unkB.gfx.inc.c"
};
Vec3f Global_unkB_Verts[] = {
#include "assets/levelGroup/Global/unkB/unkB.colV.inc.c"
};
Vec3s Global_unkB_Tris[] = {
#include "assets/levelGroup/Global/unkB/unkB.colT.inc.c"
};
Vec3f Global_unkB_Settings[] = {
#include "assets/levelGroup/Global/unkB/unkB.colS.inc.c"
};
CollisionData Global_unkB_Header[] = {
#include "assets/levelGroup/Global/unkB/unkB.colH.inc.c"
};
unsigned char Global_zeroooo8_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo8.inc.c"
};
Vtx Global_unkC_Vtx[] = {
#include "assets/levelGroup/Global/unkC/unkC.vtx.inc.c"
};
Mtx_f Global_unkC_Mtx = {
#include "assets/levelGroup/Global/unkC/unkC.mtx.inc.c"
};
unsigned char Global_Pad197[] = FILEPAD;
unsigned char Global_unkC_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkC/unkC.i4.png.inc.c"
};
Gfx Global_unkC_Gfx[] = {
#include "assets/levelGroup/Global/unkC/unkC.gfx.inc.c"
};
Vec3f Global_unkC_Verts[] = {
#include "assets/levelGroup/Global/unkC/unkC.colV.inc.c"
};
Vec3s Global_unkC_Tris[] = {
#include "assets/levelGroup/Global/unkC/unkC.colT.inc.c"
};
Vec3f Global_unkC_Settings[] = {
#include "assets/levelGroup/Global/unkC/unkC.colS.inc.c"
};
CollisionData Global_unkC_Header[] = {
#include "assets/levelGroup/Global/unkC/unkC.colH.inc.c"
};
unsigned char Global_zeroooo9_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo9.inc.c"
};
Vtx Global_ALSpinDoor_Vtx[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.vtx.inc.c"
};
Mtx_f Global_ALSpinDoor_Mtx = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.mtx.inc.c"
};
unsigned char Global_Pad198[] = FILEPAD;
unsigned char Global_ALSpinDoor_PNG[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.png.inc.c"
};
unsigned char Global_Pad199[] = FILEPAD;
unsigned char Global_ALSpinDoor_PAL[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.pal.inc.c"
};
Gfx Global_ALSpinDoor_Gfx[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.gfx.inc.c"
};
Vec3f Global_ALSpinDoor_Verts[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colV.inc.c"
};
Vec3s Global_ALSpinDoor_Tris[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colT.inc.c"
};
Vec3f Global_ALSpinDoor_Settings[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colS.inc.c"
};
CollisionData Global_ALSpinDoor_Header[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colH.inc.c"
};
unsigned char Global_zeroooo10_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo10.inc.c"
};
Vtx Global_unkD_Vtx[] = {
#include "assets/levelGroup/Global/unkD/unkD.vtx.inc.c"
};
Mtx_f Global_unkD_Mtx = {
#include "assets/levelGroup/Global/unkD/unkD.mtx.inc.c"
};
Gfx Global_unkD_Gfx[] = {
#include "assets/levelGroup/Global/unkD/unkD.gfx.inc.c"
};
Vec3f Global_unkD_Verts[] = {
#include "assets/levelGroup/Global/unkD/unkD.colV.inc.c"
};
Vec3s Global_unkD_Tris[] = {
#include "assets/levelGroup/Global/unkD/unkD.colT.inc.c"
};
Vec3f Global_unkD_Settings[] = {
#include "assets/levelGroup/Global/unkD/unkD.colS.inc.c"
};
CollisionData Global_unkD_Header[] = {
#include "assets/levelGroup/Global/unkD/unkD.colH.inc.c"
};
unsigned char Global_zeroooo11_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo11.inc.c"
};
Vtx Global_BLLava_Vtx[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.vtx.inc.c"
};
Mtx_f Global_BLLava_Mtx = {
#include "assets/levelGroup/Global/BLLava/BLLava.mtx.inc.c"
};
unsigned char Global_Pad200[] = FILEPAD;
unsigned char Global_BLLava_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.png.inc.c"
};
unsigned char Global_Pad201[] = FILEPAD;
unsigned char Global_BLLava_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.pal.inc.c"
};
Gfx Global_BLLava_Gfx[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.gfx.inc.c"
};
Vec3f Global_BLLava_Verts[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colV.inc.c"
};
Vec3s Global_BLLava_Tris[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colT.inc.c"
};
Vec3f Global_BLLava_Settings[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colS.inc.c"
};
CollisionData Global_BLLava_Header[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colH.inc.c"
};
unsigned char Global_zeroooo12_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo12.inc.c"
};
Vtx Global_BLLava2_Vtx[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.vtx.inc.c"
};
Mtx_f Global_BLLava2_Mtx = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.mtx.inc.c"
};
unsigned char Global_Pad202[] = FILEPAD;
unsigned char Global_BLLava2_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.png.inc.c"
};
unsigned char Global_Pad203[] = FILEPAD;
unsigned char Global_BLLava2_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.pal.inc.c"
};
Gfx Global_BLLava2_Gfx[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.gfx.inc.c"
};
Vec3f Global_BLLava2_Verts[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colV.inc.c"
};
Vec3s Global_BLLava2_Tris[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colT.inc.c"
};
Vec3f Global_BLLava2_Settings[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colS.inc.c"
};
CollisionData Global_BLLava2_Header[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colH.inc.c"
};
unsigned char Global_zeroooo13_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo13.inc.c"
};
Vtx Global_BLLava3_Vtx[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.vtx.inc.c"
};
Mtx_f Global_BLLava3_Mtx = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.mtx.inc.c"
};
unsigned char Global_Pad204[] = FILEPAD;
unsigned char Global_BLLava3_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.png.inc.c"
};
unsigned char Global_Pad205[] = FILEPAD;
unsigned char Global_BLLava3_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.pal.inc.c"
};
Gfx Global_BLLava3_Gfx[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.gfx.inc.c"
};
Vec3f Global_BLLava3_Verts[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colV.inc.c"
};
Vec3s Global_BLLava3_Tris[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colT.inc.c"
};
Vec3f Global_BLLava3_Settings[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colS.inc.c"
};
CollisionData Global_BLLava3_Header[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colH.inc.c"
};
unsigned char Global_zeroooo14_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo14.inc.c"
};
Vtx Global_BLLava4_Vtx[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.vtx.inc.c"
};
Mtx_f Global_BLLava4_Mtx = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.mtx.inc.c"
};
unsigned char Global_Pad206[] = FILEPAD;
unsigned char Global_BLLava4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.png.inc.c"
};
unsigned char Global_Pad207[] = FILEPAD;
unsigned char Global_BLLava4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.pal.inc.c"
};
Gfx Global_BLLava4_Gfx[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.gfx.inc.c"
};
Vec3f Global_BLLava4_Verts[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colV.inc.c"
};
Vec3s Global_BLLava4_Tris[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colT.inc.c"
};
Vec3f Global_BLLava4_Settings[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colS.inc.c"
};
CollisionData Global_BLLava4_Header[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colH.inc.c"
};
unsigned char Global_zeroooo15_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo15.inc.c"
};
Vtx Global_BLLava5_Vtx[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.vtx.inc.c"
};
Mtx_f Global_BLLava5_Mtx = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.mtx.inc.c"
};
unsigned char Global_Pad208[] = FILEPAD;
unsigned char Global_BLLava5_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.png.inc.c"
};
unsigned char Global_Pad209[] = FILEPAD;
unsigned char Global_BLLava5_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.pal.inc.c"
};
Gfx Global_BLLava5_Gfx[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.gfx.inc.c"
};
Vec3f Global_BLLava5_Verts[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colV.inc.c"
};
Vec3s Global_BLLava5_Tris[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colT.inc.c"
};
Vec3f Global_BLLava5_Settings[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colS.inc.c"
};
CollisionData Global_BLLava5_Header[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colH.inc.c"
};
unsigned char Global_zeroooo16_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo16.inc.c"
};
Vtx Global_BLLava6_Vtx[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.vtx.inc.c"
};
Mtx_f Global_BLLava6_Mtx = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.mtx.inc.c"
};
unsigned char Global_Pad210[] = FILEPAD;
unsigned char Global_BLLava6_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.png.inc.c"
};
unsigned char Global_Pad211[] = FILEPAD;
unsigned char Global_BLLava6_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.pal.inc.c"
};
Gfx Global_BLLava6_Gfx[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.gfx.inc.c"
};
Vec3f Global_BLLava6_Verts[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colV.inc.c"
};
Vec3s Global_BLLava6_Tris[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colT.inc.c"
};
Vec3f Global_BLLava6_Settings[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colS.inc.c"
};
CollisionData Global_BLLava6_Header[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colH.inc.c"
};
unsigned char Global_zeroooo17_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo17.inc.c"
};
Vtx Global_BLLava7_Vtx[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.vtx.inc.c"
};
Mtx_f Global_BLLava7_Mtx = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.mtx.inc.c"
};
unsigned char Global_Pad212[] = FILEPAD;
unsigned char Global_BLLava7_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.png.inc.c"
};
unsigned char Global_Pad213[] = FILEPAD;
unsigned char Global_BLLava7_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.pal.inc.c"
};
Gfx Global_BLLava7_Gfx[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.gfx.inc.c"
};
Vec3f Global_BLLava7_Verts[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colV.inc.c"
};
Vec3s Global_BLLava7_Tris[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colT.inc.c"
};
Vec3f Global_BLLava7_Settings[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colS.inc.c"
};
CollisionData Global_BLLava7_Header[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colH.inc.c"
};
unsigned char Global_zeroooo18_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo18.inc.c"
};
Vtx Global_BLLava8_Vtx[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.vtx.inc.c"
};
Mtx_f Global_BLLava8_Mtx = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.mtx.inc.c"
};
unsigned char Global_Pad214[] = FILEPAD;
unsigned char Global_BLLava8_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.png.inc.c"
};
unsigned char Global_Pad215[] = FILEPAD;
unsigned char Global_BLLava8_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.pal.inc.c"
};
Gfx Global_BLLava8_Gfx[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.gfx.inc.c"
};
Vec3f Global_BLLava8_Verts[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colV.inc.c"
};
Vec3s Global_BLLava8_Tris[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colT.inc.c"
};
Vec3f Global_BLLava8_Settings[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colS.inc.c"
};
CollisionData Global_BLLava8_Header[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colH.inc.c"
};
unsigned char Global_zeroooo19_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo19.inc.c"
};
Vtx Global_unkE_Vtx[] = {
#include "assets/levelGroup/Global/unkE/unkE.vtx.inc.c"
};
Mtx_f Global_unkE_Mtx = {
#include "assets/levelGroup/Global/unkE/unkE.mtx.inc.c"
};
Gfx Global_unkE_Gfx[] = {
#include "assets/levelGroup/Global/unkE/unkE.gfx.inc.c"
};
Vec3f Global_unkE_Verts[] = {
#include "assets/levelGroup/Global/unkE/unkE.colV.inc.c"
};
Vec3s Global_unkE_Tris[] = {
#include "assets/levelGroup/Global/unkE/unkE.colT.inc.c"
};
Vec3f Global_unkE_Settings[] = {
#include "assets/levelGroup/Global/unkE/unkE.colS.inc.c"
};
CollisionData Global_unkE_Header[] = {
#include "assets/levelGroup/Global/unkE/unkE.colH.inc.c"
};
unsigned char Global_zeroooo20_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo20.inc.c"
};
Vtx Global_unkF_Vtx[] = {
#include "assets/levelGroup/Global/unkF/unkF.vtx.inc.c"
};
Mtx_f Global_unkF_Mtx = {
#include "assets/levelGroup/Global/unkF/unkF.mtx.inc.c"
};
Gfx Global_unkF_Gfx[] = {
#include "assets/levelGroup/Global/unkF/unkF.gfx.inc.c"
};
Vec3f Global_unkF_Verts[] = {
#include "assets/levelGroup/Global/unkF/unkF.colV.inc.c"
};
Vec3s Global_unkF_Tris[] = {
#include "assets/levelGroup/Global/unkF/unkF.colT.inc.c"
};
Vec3f Global_unkF_Settings[] = {
#include "assets/levelGroup/Global/unkF/unkF.colS.inc.c"
};
CollisionData Global_unkF_Header[] = {
#include "assets/levelGroup/Global/unkF/unkF.colH.inc.c"
};
unsigned char Global_zeroooo21_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo21.inc.c"
};
Vtx Global_unk10_Vtx[] = {
#include "assets/levelGroup/Global/unk10/unk10.vtx.inc.c"
};
Mtx_f Global_unk10_Mtx = {
#include "assets/levelGroup/Global/unk10/unk10.mtx.inc.c"
};
Gfx Global_unk10_Gfx[] = {
#include "assets/levelGroup/Global/unk10/unk10.gfx.inc.c"
};
Vec3f Global_unk10_Verts[] = {
#include "assets/levelGroup/Global/unk10/unk10.colV.inc.c"
};
Vec3s Global_unk10_Tris[] = {
#include "assets/levelGroup/Global/unk10/unk10.colT.inc.c"
};
Vec3f Global_unk10_Settings[] = {
#include "assets/levelGroup/Global/unk10/unk10.colS.inc.c"
};
CollisionData Global_unk10_Header[] = {
#include "assets/levelGroup/Global/unk10/unk10.colH.inc.c"
};
unsigned char Global_zeroooo22_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo22.inc.c"
};
Vtx Global_Door1_Vtx[] = {
#include "assets/levelGroup/Global/Door1/Door1.vtx.inc.c"
};
Mtx_f Global_Door1_Mtx = {
#include "assets/levelGroup/Global/Door1/Door1.mtx.inc.c"
};
unsigned char Global_Pad216[] = FILEPAD;
unsigned char Global_Door1_PNG[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.png.inc.c"
};
unsigned char Global_Pad217[] = FILEPAD;
unsigned char Global_Door1_PAL[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.pal.inc.c"
};
Gfx Global_Door1_Gfx[] = {
#include "assets/levelGroup/Global/Door1/Door1.gfx.inc.c"
};
Vec3f Global_Door1_Verts[] = {
#include "assets/levelGroup/Global/Door1/Door1.colV.inc.c"
};
Vec3s Global_Door1_Tris[] = {
#include "assets/levelGroup/Global/Door1/Door1.colT.inc.c"
};
Vec3f Global_Door1_Settings[] = {
#include "assets/levelGroup/Global/Door1/Door1.colS.inc.c"
};
CollisionData Global_Door1_Header[] = {
#include "assets/levelGroup/Global/Door1/Door1.colH.inc.c"
};
unsigned char Global_zeroooo23_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo23.inc.c"
};
Vtx Global_unk12_Vtx[] = {
#include "assets/levelGroup/Global/unk12/unk12.vtx.inc.c"
};
Mtx_f Global_unk12_Mtx = {
#include "assets/levelGroup/Global/unk12/unk12.mtx.inc.c"
};
Gfx Global_unk12_Gfx[] = {
#include "assets/levelGroup/Global/unk12/unk12.gfx.inc.c"
};
Vec3f Global_unk12_Verts[] = {
#include "assets/levelGroup/Global/unk12/unk12.colV.inc.c"
};
Vec3s Global_unk12_Tris[] = {
#include "assets/levelGroup/Global/unk12/unk12.colT.inc.c"
};
Vec3f Global_unk12_Settings[] = {
#include "assets/levelGroup/Global/unk12/unk12.colS.inc.c"
};
CollisionData Global_unk12_Header[] = {
#include "assets/levelGroup/Global/unk12/unk12.colH.inc.c"
};
unsigned char Global_zeroooo24_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo24.inc.c"
};
Vtx Global_unk13_Vtx[] = {
#include "assets/levelGroup/Global/unk13/unk13.vtx.inc.c"
};
Mtx_f Global_unk13_Mtx = {
#include "assets/levelGroup/Global/unk13/unk13.mtx.inc.c"
};
Gfx Global_unk13_Gfx[] = {
#include "assets/levelGroup/Global/unk13/unk13.gfx.inc.c"
};
Vec3f Global_unk13_Verts[] = {
#include "assets/levelGroup/Global/unk13/unk13.colV.inc.c"
};
Vec3s Global_unk13_Tris[] = {
#include "assets/levelGroup/Global/unk13/unk13.colT.inc.c"
};
Vec3f Global_unk13_Settings[] = {
#include "assets/levelGroup/Global/unk13/unk13.colS.inc.c"
};
CollisionData Global_unk13_Header[] = {
#include "assets/levelGroup/Global/unk13/unk13.colH.inc.c"
};
unsigned char Global_zeroooo25_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo25.inc.c"
};
Vtx Global_unk14_Vtx[] = {
#include "assets/levelGroup/Global/unk14/unk14.vtx.inc.c"
};
Mtx_f Global_unk14_Mtx = {
#include "assets/levelGroup/Global/unk14/unk14.mtx.inc.c"
};
Gfx Global_unk14_Gfx[] = {
#include "assets/levelGroup/Global/unk14/unk14.gfx.inc.c"
};
Vec3f Global_unk14_Verts[] = {
#include "assets/levelGroup/Global/unk14/unk14.colV.inc.c"
};
Vec3s Global_unk14_Tris[] = {
#include "assets/levelGroup/Global/unk14/unk14.colT.inc.c"
};
Vec3f Global_unk14_Settings[] = {
#include "assets/levelGroup/Global/unk14/unk14.colS.inc.c"
};
CollisionData Global_unk14_Header[] = {
#include "assets/levelGroup/Global/unk14/unk14.colH.inc.c"
};
unsigned char Global_zeroooo26_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo26.inc.c"
};
Vtx Global_unk15_Vtx[] = {
#include "assets/levelGroup/Global/unk15/unk15.vtx.inc.c"
};
Mtx_f Global_unk15_Mtx = {
#include "assets/levelGroup/Global/unk15/unk15.mtx.inc.c"
};
Gfx Global_unk15_Gfx[] = {
#include "assets/levelGroup/Global/unk15/unk15.gfx.inc.c"
};
Vec3f Global_unk15_Verts[] = {
#include "assets/levelGroup/Global/unk15/unk15.colV.inc.c"
};
Vec3s Global_unk15_Tris[] = {
#include "assets/levelGroup/Global/unk15/unk15.colT.inc.c"
};
Vec3f Global_unk15_Settings[] = {
#include "assets/levelGroup/Global/unk15/unk15.colS.inc.c"
};
CollisionData Global_unk15_Header[] = {
#include "assets/levelGroup/Global/unk15/unk15.colH.inc.c"
};
unsigned char Global_zeroooo27_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo27.inc.c"
};
Vtx Global_unk16_Vtx[] = {
#include "assets/levelGroup/Global/unk16/unk16.vtx.inc.c"
};
Mtx_f Global_unk16_Mtx = {
#include "assets/levelGroup/Global/unk16/unk16.mtx.inc.c"
};
Gfx Global_unk16_Gfx[] = {
#include "assets/levelGroup/Global/unk16/unk16.gfx.inc.c"
};
Vec3f Global_unk16_Verts[] = {
#include "assets/levelGroup/Global/unk16/unk16.colV.inc.c"
};
Vec3s Global_unk16_Tris[] = {
#include "assets/levelGroup/Global/unk16/unk16.colT.inc.c"
};
Vec3f Global_unk16_Settings[] = {
#include "assets/levelGroup/Global/unk16/unk16.colS.inc.c"
};
CollisionData Global_unk16_Header[] = {
#include "assets/levelGroup/Global/unk16/unk16.colH.inc.c"
};
unsigned char Global_zeroooo28_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo28.inc.c"
};
Vtx Global_unk17_Vtx[] = {
#include "assets/levelGroup/Global/unk17/unk17.vtx.inc.c"
};
Mtx_f Global_unk17_Mtx = {
#include "assets/levelGroup/Global/unk17/unk17.mtx.inc.c"
};
Gfx Global_unk17_Gfx[] = {
#include "assets/levelGroup/Global/unk17/unk17.gfx.inc.c"
};
Vec3f Global_unk17_Verts[] = {
#include "assets/levelGroup/Global/unk17/unk17.colV.inc.c"
};
Vec3s Global_unk17_Tris[] = {
#include "assets/levelGroup/Global/unk17/unk17.colT.inc.c"
};
Vec3f Global_unk17_Settings[] = {
#include "assets/levelGroup/Global/unk17/unk17.colS.inc.c"
};
CollisionData Global_unk17_Header[] = {
#include "assets/levelGroup/Global/unk17/unk17.colH.inc.c"
};
unsigned char Global_zeroooo29_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo29.inc.c"
};
Vtx Global_unk18_Vtx[] = {
#include "assets/levelGroup/Global/unk18/unk18.vtx.inc.c"
};
Mtx_f Global_unk18_Mtx = {
#include "assets/levelGroup/Global/unk18/unk18.mtx.inc.c"
};
Gfx Global_unk18_Gfx[] = {
#include "assets/levelGroup/Global/unk18/unk18.gfx.inc.c"
};
Vec3f Global_unk18_Verts[] = {
#include "assets/levelGroup/Global/unk18/unk18.colV.inc.c"
};
Vec3s Global_unk18_Tris[] = {
#include "assets/levelGroup/Global/unk18/unk18.colT.inc.c"
};
Vec3f Global_unk18_Settings[] = {
#include "assets/levelGroup/Global/unk18/unk18.colS.inc.c"
};
CollisionData Global_unk18_Header[] = {
#include "assets/levelGroup/Global/unk18/unk18.colH.inc.c"
};
unsigned char Global_zeroooo30_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo30.inc.c"
};
Vtx Global_unk19_Vtx[] = {
#include "assets/levelGroup/Global/unk19/unk19.vtx.inc.c"
};
Mtx_f Global_unk19_Mtx = {
#include "assets/levelGroup/Global/unk19/unk19.mtx.inc.c"
};
Gfx Global_unk19_Gfx[] = {
#include "assets/levelGroup/Global/unk19/unk19.gfx.inc.c"
};
Vec3f Global_unk19_Verts[] = {
#include "assets/levelGroup/Global/unk19/unk19.colV.inc.c"
};
Vec3s Global_unk19_Tris[] = {
#include "assets/levelGroup/Global/unk19/unk19.colT.inc.c"
};
Vec3f Global_unk19_Settings[] = {
#include "assets/levelGroup/Global/unk19/unk19.colS.inc.c"
};
CollisionData Global_unk19_Header[] = {
#include "assets/levelGroup/Global/unk19/unk19.colH.inc.c"
};
unsigned char Global_zeroooo31_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo31.inc.c"
};
Vtx Global_unk1A_Vtx[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.vtx.inc.c"
};
Mtx_f Global_unk1A_Mtx = {
#include "assets/levelGroup/Global/unk1A/unk1A.mtx.inc.c"
};
Gfx Global_unk1A_Gfx[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.gfx.inc.c"
};
Vec3f Global_unk1A_Verts[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colV.inc.c"
};
Vec3s Global_unk1A_Tris[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colT.inc.c"
};
Vec3f Global_unk1A_Settings[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colS.inc.c"
};
CollisionData Global_unk1A_Header[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colH.inc.c"
};
unsigned char Global_zeroooo32_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo32.inc.c"
};
Vtx Global_unk1B_Vtx[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.vtx.inc.c"
};
Mtx_f Global_unk1B_Mtx = {
#include "assets/levelGroup/Global/unk1B/unk1B.mtx.inc.c"
};
Gfx Global_unk1B_Gfx[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.gfx.inc.c"
};
Vec3f Global_unk1B_Verts[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colV.inc.c"
};
Vec3s Global_unk1B_Tris[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colT.inc.c"
};
Vec3f Global_unk1B_Settings[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colS.inc.c"
};
CollisionData Global_unk1B_Header[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colH.inc.c"
};
unsigned char Global_zeroooo33_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo33.inc.c"
};
Vtx Global_unk1C_Vtx[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.vtx.inc.c"
};
Mtx_f Global_unk1C_Mtx = {
#include "assets/levelGroup/Global/unk1C/unk1C.mtx.inc.c"
};
Gfx Global_unk1C_Gfx[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.gfx.inc.c"
};
Vec3f Global_unk1C_Verts[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colV.inc.c"
};
Vec3s Global_unk1C_Tris[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colT.inc.c"
};
Vec3f Global_unk1C_Settings[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colS.inc.c"
};
CollisionData Global_unk1C_Header[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colH.inc.c"
};
unsigned char Global_zeroooo34_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo34.inc.c"
};
Vtx Global_unk1D_Vtx[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.vtx.inc.c"
};
Mtx_f Global_unk1D_Mtx = {
#include "assets/levelGroup/Global/unk1D/unk1D.mtx.inc.c"
};
Gfx Global_unk1D_Gfx[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.gfx.inc.c"
};
Vec3f Global_unk1D_Verts[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colV.inc.c"
};
Vec3s Global_unk1D_Tris[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colT.inc.c"
};
Vec3f Global_unk1D_Settings[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colS.inc.c"
};
CollisionData Global_unk1D_Header[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colH.inc.c"
};
unsigned char Global_zeroooo35_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo35.inc.c"
};
Vtx Global_unk1E_Vtx[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.vtx.inc.c"
};
Mtx_f Global_unk1E_Mtx = {
#include "assets/levelGroup/Global/unk1E/unk1E.mtx.inc.c"
};
Gfx Global_unk1E_Gfx[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.gfx.inc.c"
};
Vec3f Global_unk1E_Verts[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colV.inc.c"
};
Vec3s Global_unk1E_Tris[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colT.inc.c"
};
Vec3f Global_unk1E_Settings[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colS.inc.c"
};
CollisionData Global_unk1E_Header[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colH.inc.c"
};
unsigned char Global_zeroooo36_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo36.inc.c"
};
