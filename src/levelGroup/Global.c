#include "common.h"
//proper names
extern unsigned char Global_poleWood_ci8_PAL[]; // pole palette
extern unsigned char Global_poleWood_ci8_PNG[]; // pole img
//build names
extern unsigned char D_02028D30_Global[]; // pole palette
extern unsigned char D_02028528_Global[]; // pole img
extern Vtx D_800FE7D8_Global[];
extern Vtx D_800FE8C8_Global[];
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny
#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to split useless files


Mtx_f Global_IMtx1 = IDENTITY;

#include "assets/levelGroup/Global/globalScope/globalScope.light.inc.c"

#include "assets/levelGroup/Global/cannon/cannon.vtx.inc.c"
Mtx_f Global_IMtx2 = IDENTITY;
unsigned char Global_Pad1[] = FILEPAD;
unsigned char Global_cannonHole_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonHole.rgba16.png.inc.c"
};
unsigned char Global_Pad2[] = FILEPAD;
unsigned char Global_cannonBarrel_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonBarrel.rgba16.png.inc.c"
};
unsigned char Global_Pad3[] = FILEPAD;
unsigned char Global_black_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/cannon/black.rgba16.png.inc.c"
};

#include "assets/levelGroup/Global/cannon/cannon.gfx.inc.c"

#include "assets/levelGroup/Global/unkWood/unkWood.vtx.inc.c"
Mtx_f Global_IMtx3 = IDENTITY;
unsigned char Global_Pad4[] = FILEPAD;
unsigned char Global_woodWithBolt_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/woodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad5[] = FILEPAD;
unsigned char Global_darkWoodWithBolt_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWoodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad6[] = FILEPAD;
unsigned char Global_darkWood_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWood.rgba16.png.inc.c"
};
unsigned char Global_Pad7[] = FILEPAD;
unsigned char Global_lightWood_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/lightWood.rgba16.png.inc.c"
};
unsigned char Global_Pad8[] = FILEPAD;
unsigned char Global_midWood_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkWood/midWood.rgba16.png.inc.c"
};

#include "assets/levelGroup/Global/unkWood/unkWood.gfx.inc.c"

#include "assets/levelGroup/Global/unk/unk.vtx.inc.c"
Mtx_f Global_IMtx4 = IDENTITY;

#include "assets/levelGroup/Global/unk/unk.gfx.inc.c"

#include "assets/levelGroup/Global/unk2/unk2.vtx.inc.c"
Mtx_f Global_IMtx5 = IDENTITY;

#include "assets/levelGroup/Global/unk2/unk2.gfx.inc.c"

#include "assets/levelGroup/Global/unk40/unk40.vtx.inc.c"
Mtx_f Global_IMtx6 = IDENTITY;
unsigned char Global_Pad9[] = FILEPAD;
unsigned char Global_shadow_ia8_PNG[] = {
#include "build/include/assets/levelGroup/Global/unk40/shadow.ia8.png.inc.c"
};

#include "assets/levelGroup/Global/unk40/unk40.gfx.inc.c"

#include "assets/levelGroup/Global/unk40/unk402.gfx.inc.c"

#include "assets/levelGroup/Global/unkCol2/unkCol2.colV.inc.c"

#include "assets/levelGroup/Global/unkCol2/unkCol2.colT.inc.c"

#include "assets/levelGroup/Global/unkCol2/unkCol2.colS.inc.c"

#include "assets/levelGroup/Global/unkCol2/unkCol2.colH.inc.c"

#include "assets/levelGroup/Global/unk40/unk40.colV.inc.c"

#include "assets/levelGroup/Global/unk40/unk40.colT.inc.c"

#include "assets/levelGroup/Global/unk40/unk40.colS.inc.c"

#include "assets/levelGroup/Global/unk40/unk40.colH.inc.c"

#include "assets/levelGroup/Global/unkCol3/unkCol3.colV.inc.c"

#include "assets/levelGroup/Global/unkCol3/unkCol3.colT.inc.c"

#include "assets/levelGroup/Global/unkCol3/unkCol3.colS.inc.c"

#include "assets/levelGroup/Global/unkCol3/unkCol3.colH.inc.c"
unsigned char Global_what_Bin[] = {
#include "build/include/assets/levelGroup/Global/what.inc.c"
};
unsigned char Global_Pad10[] = FILEPAD;
unsigned char Global_brownBrickWall_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad11[] = FILEPAD;
unsigned char Global_brownBrickWall_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad12[] = FILEPAD;
unsigned char Global_sandAgain_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.png.inc.c"
};
unsigned char Global_Pad13[] = FILEPAD;
unsigned char Global_sandAgain_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.pal.inc.c"
};
unsigned char Global_Pad14[] = FILEPAD;
unsigned char Global_gravel_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gravel.i4.png.inc.c"
};
unsigned char Global_Pad15[] = FILEPAD;
unsigned char Global_wall_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/wall.i4.png.inc.c"
};
unsigned char Global_Pad16[] = FILEPAD;
unsigned char Global_gateGray_ia4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gateGray.ia4.png.inc.c"
};
unsigned char Global_Pad17[] = FILEPAD;
unsigned char Global_dcRockFloor_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloor.i4.png.inc.c"
};
unsigned char Global_Pad18[] = FILEPAD;
unsigned char Global_dcRockFloorColor_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloorColor.ci4.png.inc.c"
};
unsigned char Global_Pad19[] = FILEPAD;
unsigned char Global_dcRockFloorColor_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloorColor.ci4.pal.inc.c"
};
unsigned char Global_Pad20[] = FILEPAD;
unsigned char Global_smallBrickWall_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/smallBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad21[] = FILEPAD;
unsigned char Global_longWoodTopper_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.png.inc.c"
};
unsigned char Global_Pad22[] = FILEPAD;
unsigned char Global_longWoodTopper_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.pal.inc.c"
};
unsigned char Global_Pad23[] = FILEPAD;
unsigned char Global_longWood_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.png.inc.c"
};
unsigned char Global_Pad24[] = FILEPAD;
unsigned char Global_longWood_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.pal.inc.c"
};
unsigned char Global_Pad25[] = FILEPAD;
unsigned char Global_yellowBrickWall_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad26[] = FILEPAD;
unsigned char Global_yellowBrickWall_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad27[] = FILEPAD;
unsigned char Global_bigBrickWall2_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall2.i4.png.inc.c"
};
unsigned char Global_Pad28[] = FILEPAD;
unsigned char Global_bigBrickWall_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad29[] = FILEPAD;
unsigned char Global_waterKinda_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.png.inc.c"
};
unsigned char Global_Pad30[] = FILEPAD;
unsigned char Global_waterKinda_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.pal.inc.c"
};
unsigned char Global_Pad31[] = FILEPAD;
unsigned char Global_brickWall2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.png.inc.c"
};
unsigned char Global_Pad32[] = FILEPAD;
unsigned char Global_brickWall2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad33[] = FILEPAD;
unsigned char Global_unk12_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/unk12.i4.png.inc.c"
};
unsigned char Global_Pad34[] = FILEPAD;
unsigned char Global_goldStrip_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.png.inc.c"
};
unsigned char Global_Pad35[] = FILEPAD;
unsigned char Global_goldStrip_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.pal.inc.c"
};
unsigned char Global_Pad36[] = FILEPAD;
unsigned char Global_antMural4_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural4.i4.png.inc.c"
};
unsigned char Global_Pad37[] = FILEPAD;
unsigned char Global_antMural3_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural3.i4.png.inc.c"
};
unsigned char Global_Pad38[] = FILEPAD;
unsigned char Global_antMural2_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural2.i4.png.inc.c"
};
unsigned char Global_Pad39[] = FILEPAD;
unsigned char Global_antMural1_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/antMural1.i4.png.inc.c"
};
unsigned char Global_Pad40[] = FILEPAD;
unsigned char Global_brickWall_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall.i4.png.inc.c"
};
unsigned char Global_Pad41[] = FILEPAD;
unsigned char Global_strip2_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/strip2.i4.png.inc.c"
};
unsigned char Global_Pad42[] = FILEPAD;
unsigned char Global_lavaSolid_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.png.inc.c"
};
unsigned char Global_Pad43[] = FILEPAD;
unsigned char Global_lavaSolid_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.pal.inc.c"
};
unsigned char Global_Pad44[] = FILEPAD;
unsigned char Global_fraMEd_ia4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/fraMEd.ia4.png.inc.c"
};
unsigned char Global_Pad45[] = FILEPAD;
unsigned char Global_squares_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/squares.i4.png.inc.c"
};
unsigned char Global_Pad46[] = FILEPAD;
unsigned char Global_metalPlate_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlate.i4.png.inc.c"
};
unsigned char Global_Pad47[] = FILEPAD;
unsigned char Global_factoryPlates_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/factoryPlates.i4.png.inc.c"
};
unsigned char Global_Pad48[] = FILEPAD;
unsigned char Global_steelPlate_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/steelPlate.i4.png.inc.c"
};
unsigned char Global_Pad49[] = FILEPAD;
unsigned char Global_metalPlates_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlates.i4.png.inc.c"
};
unsigned char Global_Pad50[] = FILEPAD;
unsigned char Global_ballGround_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/ballGround.i4.png.inc.c"
};
unsigned char Global_Pad51[] = FILEPAD;
unsigned char Global_cube_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cube.i4.png.inc.c"
};
unsigned char Global_Pad52[] = FILEPAD;
unsigned char Global_hexComb_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/hexComb.i4.png.inc.c"
};
unsigned char Global_Pad53[] = FILEPAD;
unsigned char Global_hexCombFade_i8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/hexCombFade.i8.png.inc.c"
};
unsigned char Global_Pad54[] = FILEPAD;
unsigned char Global_brokenCube_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/brokenCube.i4.png.inc.c"
};
unsigned char Global_Pad55[] = FILEPAD;
unsigned char Global_klTILE_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.png.inc.c"
};
unsigned char Global_Pad56[] = FILEPAD;
unsigned char Global_klTILE_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.pal.inc.c"
};
unsigned char Global_gateCompressed_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.png.inc.c"
};
unsigned char Global_gateCompressed_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.pal.inc.c"
};
unsigned char Global_Pad57[] = FILEPAD;
unsigned char Global_strip_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.png.inc.c"
};
unsigned char Global_Pad58[] = FILEPAD;
unsigned char Global_strip_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.pal.inc.c"
};
unsigned char Global_Pad59[] = FILEPAD;
unsigned char Global_chocoKidsLabel_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.png.inc.c"
};
unsigned char Global_Pad60[] = FILEPAD;
unsigned char Global_chocoKidsLabel_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.pal.inc.c"
};
unsigned char Global_Pad61[] = FILEPAD;
unsigned char Global_justBlack_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.png.inc.c"
};
unsigned char Global_Pad62[] = FILEPAD;
unsigned char Global_justBlack_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.pal.inc.c"
};
unsigned char Global_Pad63[] = FILEPAD;
unsigned char Global_cracker_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.png.inc.c"
};
unsigned char Global_Pad64[] = FILEPAD;
unsigned char Global_cracker_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.pal.inc.c"
};
unsigned char Global_Pad65[] = FILEPAD;
unsigned char Global_KLThing1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.png.inc.c"
};
unsigned char Global_Pad66[] = FILEPAD;
unsigned char Global_KLThing1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad67[] = FILEPAD;
unsigned char Global_KLFloor3_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.png.inc.c"
};
unsigned char Global_Pad68[] = FILEPAD;
unsigned char Global_KLFloor3_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.pal.inc.c"
};
unsigned char Global_Pad69[] = FILEPAD;
unsigned char Global_KLFloor2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad70[] = FILEPAD;
unsigned char Global_KLFloor2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad71[] = FILEPAD;
unsigned char Global_waferSide_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.png.inc.c"
};
unsigned char Global_Pad72[] = FILEPAD;
unsigned char Global_waferSide_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.pal.inc.c"
};
unsigned char Global_Pad73[] = FILEPAD;
unsigned char Global_chocoKIDS_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.png.inc.c"
};
unsigned char Global_Pad74[] = FILEPAD;
unsigned char Global_chocoKIDS_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.pal.inc.c"
};
unsigned char Global_Pad75[] = FILEPAD;
unsigned char Global_sandwSide_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.png.inc.c"
};
unsigned char Global_Pad76[] = FILEPAD;
unsigned char Global_sandwSide_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.pal.inc.c"
};
unsigned char Global_Pad77[] = FILEPAD;
unsigned char Global_giftSide_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.png.inc.c"
};
unsigned char Global_Pad78[] = FILEPAD;
unsigned char Global_giftSide_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.pal.inc.c"
};
unsigned char Global_Pad79[] = FILEPAD;
unsigned char Global_giftTop_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.png.inc.c"
};
unsigned char Global_Pad80[] = FILEPAD;
unsigned char Global_giftTop_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.pal.inc.c"
};
unsigned char Global_Pad81[] = FILEPAD;
unsigned char Global_blueBrickFade_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad82[] = FILEPAD;
unsigned char Global_blueBrickFade_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad83[] = FILEPAD;
unsigned char Global_rainbow_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.png.inc.c"
};
unsigned char Global_Pad84[] = FILEPAD;
unsigned char Global_rainbow_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.pal.inc.c"
};
unsigned char Global_Pad85[] = FILEPAD;
unsigned char Global_blueBrick_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.png.inc.c"
};
unsigned char Global_Pad86[] = FILEPAD;
unsigned char Global_blueBrick_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad87[] = FILEPAD;
unsigned char Global_orangeBrick_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.png.inc.c"
};
unsigned char Global_Pad88[] = FILEPAD;
unsigned char Global_orangeBrick_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad89[] = FILEPAD;
unsigned char Global_orangeLego_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.png.inc.c"
};
unsigned char Global_Pad90[] = FILEPAD;
unsigned char Global_orangeLego_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.pal.inc.c"
};
unsigned char Global_Pad91[] = FILEPAD;
unsigned char Global_blueLego_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.png.inc.c"
};
unsigned char Global_Pad92[] = FILEPAD;
unsigned char Global_blueLego_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.pal.inc.c"
};
unsigned char Global_ropeChroma_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.png.inc.c"
};
unsigned char Global_ropeChroma_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.pal.inc.c"
};
unsigned char Global_Pad93[] = FILEPAD;
unsigned char Global_pebbles_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.png.inc.c"
};
unsigned char Global_Pad94[] = FILEPAD;
unsigned char Global_pebbles_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.pal.inc.c"
};
unsigned char Global_Pad95[] = FILEPAD;
unsigned char Global_chain2_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chain2.rgba16.png.inc.c"
};
unsigned char Global_Pad96[] = FILEPAD;
unsigned char Global_chain1_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/chain1.rgba16.png.inc.c"
};
unsigned char Global_Pad97[] = FILEPAD;
unsigned char Global_DCSmallTiles_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.png.inc.c"
};
unsigned char Global_Pad98[] = FILEPAD;
unsigned char Global_DCSmallTiles_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad99[] = FILEPAD;
unsigned char Global_DCSandFloor_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.png.inc.c"
};
unsigned char Global_Pad100[] = FILEPAD;
unsigned char Global_DCSandFloor_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad101[] = FILEPAD;
unsigned char Global_dcTHING2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.png.inc.c"
};
unsigned char Global_Pad102[] = FILEPAD;
unsigned char Global_dcTHING2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.pal.inc.c"
};
unsigned char Global_Pad103[] = FILEPAD;
unsigned char Global_jlText3_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.png.inc.c"
};
unsigned char Global_Pad104[] = FILEPAD;
unsigned char Global_jlText3_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.pal.inc.c"
};
unsigned char Global_Pad105[] = FILEPAD;
unsigned char Global_DCBricks_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.png.inc.c"
};
unsigned char Global_Pad106[] = FILEPAD;
unsigned char Global_DCBricks_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.pal.inc.c"
};
unsigned char Global_Pad107[] = FILEPAD;
unsigned char Global_DCFloor2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad108[] = FILEPAD;
unsigned char Global_DCFloor2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad109[] = FILEPAD;
unsigned char Global_DCWall3_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.png.inc.c"
};
unsigned char Global_Pad110[] = FILEPAD;
unsigned char Global_DCWall3_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.pal.inc.c"
};
unsigned char Global_Pad111[] = FILEPAD;
unsigned char Global_DCWall2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad112[] = FILEPAD;
unsigned char Global_DCWall2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad113[] = FILEPAD;
unsigned char Global_DCWall1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.png.inc.c"
};
unsigned char Global_Pad114[] = FILEPAD;
unsigned char Global_DCWall1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.pal.inc.c"
};
unsigned char Global_Pad115[] = FILEPAD;
unsigned char Global_DCThing3_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.png.inc.c"
};
unsigned char Global_Pad116[] = FILEPAD;
unsigned char Global_DCThing3_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.pal.inc.c"
};
unsigned char Global_Pad117[] = FILEPAD;
unsigned char Global_DCThing2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.png.inc.c"
};
unsigned char Global_Pad118[] = FILEPAD;
unsigned char Global_DCThing2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.pal.inc.c"
};
unsigned char Global_Pad119[] = FILEPAD;
unsigned char Global_DCThing1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad120[] = FILEPAD;
unsigned char Global_DCThing1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad121[] = FILEPAD;
unsigned char Global_DCSandWallFadeUp_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.png.inc.c"
};
unsigned char Global_Pad122[] = FILEPAD;
unsigned char Global_DCSandWallFadeUp_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.pal.inc.c"
};
unsigned char Global_Pad123[] = FILEPAD;
unsigned char Global_GCThing1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad124[] = FILEPAD;
unsigned char Global_GCThing1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad125[] = FILEPAD;
unsigned char Global_DCTiles_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad126[] = FILEPAD;
unsigned char Global_DCTiles_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad127[] = FILEPAD;
unsigned char Global_DCFloor_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.png.inc.c"
};
unsigned char Global_Pad128[] = FILEPAD;
unsigned char Global_DCFloor_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad129[] = FILEPAD;
unsigned char Global_rope_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/rope.rgba16.png.inc.c"
};
unsigned char Global_Pad130[] = FILEPAD;
unsigned char Global_ropeConnector_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.png.inc.c"
};
unsigned char Global_Pad131[] = FILEPAD;
unsigned char Global_ropeConnector_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.pal.inc.c"
};
unsigned char Global_Pad132[] = FILEPAD;
unsigned char Global_bigLog_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.png.inc.c"
};
unsigned char Global_Pad133[] = FILEPAD;
unsigned char Global_bigLog_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.pal.inc.c"
};
unsigned char Global_Pad134[] = FILEPAD;
unsigned char Global_sander_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.png.inc.c"
};
unsigned char Global_Pad135[] = FILEPAD;
unsigned char Global_sander_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.pal.inc.c"
};
unsigned char Global_Pad136[] = FILEPAD;
unsigned char Global_jllogTop_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.png.inc.c"
};
unsigned char Global_Pad137[] = FILEPAD;
unsigned char Global_jllogTop_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.pal.inc.c"
};
unsigned char Global_Pad138[] = FILEPAD;
unsigned char Global_jlLog_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.png.inc.c"
};
unsigned char Global_Pad139[] = FILEPAD;
unsigned char Global_jlLog_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.pal.inc.c"
};
unsigned char Global_Pad140[] = FILEPAD;
unsigned char Global_jlText1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.png.inc.c"
};
unsigned char Global_Pad141[] = FILEPAD;
unsigned char Global_jlText1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.pal.inc.c"
};
unsigned char Global_Pad142[] = FILEPAD;
unsigned char Global_gate_rgba16_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/gate.rgba16.png.inc.c"
};
unsigned char Global_Pad143[] = FILEPAD;
unsigned char Global_poleWood_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.png.inc.c"
};
unsigned char Global_Pad144[] = FILEPAD;
unsigned char Global_poleWood_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.pal.inc.c"
};
unsigned char Global_Pad145[] = FILEPAD;
unsigned char Global_Darkwood_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.png.inc.c"
};
unsigned char Global_Pad146[] = FILEPAD;
unsigned char Global_Darkwood_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.pal.inc.c"
};
unsigned char Global_Pad147[] = FILEPAD;
unsigned char Global_wood_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.png.inc.c"
};
unsigned char Global_Pad148[] = FILEPAD;
unsigned char Global_wood_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.pal.inc.c"
};
unsigned char Global_Pad149[] = FILEPAD;
unsigned char Global_GCFloorboard_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.png.inc.c"
};
unsigned char Global_Pad150[] = FILEPAD;
unsigned char Global_GCFloorboard_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.pal.inc.c"
};
unsigned char Global_Pad151[] = FILEPAD;
unsigned char Global_GCTiles_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad152[] = FILEPAD;
unsigned char Global_GCTiles_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad153[] = FILEPAD;
unsigned char Global_GCWall2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad154[] = FILEPAD;
unsigned char Global_GCWall2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad155[] = FILEPAD;
unsigned char Global_windows_ia4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/windows.ia4.png.inc.c"
};
unsigned char Global_Pad156[] = FILEPAD;
unsigned char Global_water_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.png.inc.c"
};
unsigned char Global_Pad157[] = FILEPAD;
unsigned char Global_water_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.pal.inc.c"
};
unsigned char Global_Pad158[] = FILEPAD;
unsigned char Global_GCWall_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.png.inc.c"
};
unsigned char Global_Pad159[] = FILEPAD;
unsigned char Global_GCWall_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.pal.inc.c"
};
unsigned char Global_Pad160[] = FILEPAD;
unsigned char Global_GCBigCabinet_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.png.inc.c"
};
unsigned char Global_Pad161[] = FILEPAD;
unsigned char Global_GCBigCabinet_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad162[] = FILEPAD;
unsigned char Global_GCWood_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.png.inc.c"
};
unsigned char Global_Pad163[] = FILEPAD;
unsigned char Global_GCWood_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.pal.inc.c"
};
unsigned char Global_Pad164[] = FILEPAD;
unsigned char Global_sandFadeTop_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.png.inc.c"
};
unsigned char Global_Pad165[] = FILEPAD;
unsigned char Global_sandFadeTop_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.pal.inc.c"
};
unsigned char Global_Pad166[] = FILEPAD;
unsigned char Global_JLMountain_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.png.inc.c"
};
unsigned char Global_Pad167[] = FILEPAD;
unsigned char Global_JLMountain_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.pal.inc.c"
};
unsigned char Global_Pad168[] = FILEPAD;
unsigned char Global_JLCaveFadeTop_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.png.inc.c"
};
unsigned char Global_Pad169[] = FILEPAD;
unsigned char Global_JLCaveFadeTop_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.pal.inc.c"
};
unsigned char Global_Pad170[] = FILEPAD;
unsigned char Global_jlText5_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.png.inc.c"
};
unsigned char Global_Pad171[] = FILEPAD;
unsigned char Global_jlText5_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.pal.inc.c"
};
unsigned char Global_Pad172[] = FILEPAD;
unsigned char Global_jlText2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.png.inc.c"
};
unsigned char Global_Pad173[] = FILEPAD;
unsigned char Global_jlText2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.pal.inc.c"
};
unsigned char Global_Pad174[] = FILEPAD;
unsigned char Global_jlText4_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.png.inc.c"
};
unsigned char Global_Pad175[] = FILEPAD;
unsigned char Global_jlText4_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.pal.inc.c"
};
unsigned char Global_Pad176[] = FILEPAD;
unsigned char Global_JLCave_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.png.inc.c"
};
unsigned char Global_Pad177[] = FILEPAD;
unsigned char Global_JLCave_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.pal.inc.c"
};
unsigned char Global_Pad178[] = FILEPAD;
unsigned char Global_JLCaveFade_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.png.inc.c"
};
unsigned char Global_Pad179[] = FILEPAD;
unsigned char Global_JLCaveFade_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.pal.inc.c"
};
unsigned char Global_Pad180[] = FILEPAD;
unsigned char Global_BLRedYellowPlate_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.png.inc.c"
};
unsigned char Global_Pad181[] = FILEPAD;
unsigned char Global_BLRedYellowPlate_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.pal.inc.c"
};
unsigned char Global_Pad182[] = FILEPAD;
unsigned char Global_KLOrangeBrickFade_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad183[] = FILEPAD;
unsigned char Global_KLOrangeBrickFade_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad184[] = FILEPAD;
unsigned char Global_KLCrackerFade_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.png.inc.c"
};
unsigned char Global_Pad185[] = FILEPAD;
unsigned char Global_KLCrackerFade_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.pal.inc.c"
};
unsigned char Global_Pad186[] = FILEPAD;
unsigned char Global_KLFloor_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.png.inc.c"
};
unsigned char Global_Pad187[] = FILEPAD;
unsigned char Global_KLFloor_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad188[] = FILEPAD;
unsigned char Global_woodFade_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.png.inc.c"
};
unsigned char Global_Pad189[] = FILEPAD;
unsigned char Global_woodFade_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.pal.inc.c"
};
unsigned char Global_Pad190[] = FILEPAD;
unsigned char Global_cabinetFade_ci8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.png.inc.c"
};
unsigned char Global_Pad191[] = FILEPAD;
unsigned char Global_cabinetFade_ci8_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.pal.inc.c"
};
unsigned char Global_Pad192[] = FILEPAD;
unsigned char Global_cabinet_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.png.inc.c"
};
unsigned char Global_Pad193[] = FILEPAD;
unsigned char Global_cabinet_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad194[] = FILEPAD;
unsigned char Global_fogFade_ia8_PNG[] = {
#include "build/include/assets/levelGroup/Global/img/fogFade.ia8.png.inc.c"
};

#include "assets/levelGroup/Global/unk3/unk3.vtx.inc.c"
Mtx_f Global_IMtx7 = IDENTITY;

#include "assets/levelGroup/Global/unk3/unk3.gfx.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colV.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colT.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colS.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colH.inc.c"
unsigned char Global_zeroooo_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo.inc.c"
};

#include "assets/levelGroup/Global/unk4/unk4.vtx.inc.c"
Mtx_f Global_IMtx8 = IDENTITY;

#include "assets/levelGroup/Global/unk4/unk4.gfx.inc.c"

#include "assets/levelGroup/Global/unk4/unk4.colV.inc.c"

#include "assets/levelGroup/Global/unk4/unk4.colT.inc.c"

#include "assets/levelGroup/Global/unk4/unk4.colS.inc.c"

#include "assets/levelGroup/Global/unk4/unk4.colH.inc.c"
unsigned char Global_zeroooo2_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo2.inc.c"
};

#include "assets/levelGroup/Global/unk5/unk5.vtx.inc.c"
Mtx_f Global_IMtx9 = IDENTITY;

#include "assets/levelGroup/Global/unk5/unk5.gfx.inc.c"

#include "assets/levelGroup/Global/unk5/unk5.colV.inc.c"

#include "assets/levelGroup/Global/unk5/unk5.colT.inc.c"

#include "assets/levelGroup/Global/unk5/unk5.colS.inc.c"

#include "assets/levelGroup/Global/unk5/unk5.colH.inc.c"
unsigned char Global_zeroooo3_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo3.inc.c"
};

#include "assets/levelGroup/Global/unk6/unk6.vtx.inc.c"
Mtx_f Global_IMtx10 = IDENTITY;

#include "assets/levelGroup/Global/unk6/unk6.gfx.inc.c"

#include "assets/levelGroup/Global/unk6/unk6.colV.inc.c"

#include "assets/levelGroup/Global/unk6/unk6.colT.inc.c"

#include "assets/levelGroup/Global/unk6/unk6.colS.inc.c"

#include "assets/levelGroup/Global/unk6/unk6.colH.inc.c"
unsigned char Global_zeroooo4_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo4.inc.c"
};

#include "assets/levelGroup/Global/unk7/unk7.vtx.inc.c"
Mtx_f Global_IMtx11 = IDENTITY;

#include "assets/levelGroup/Global/unk7/unk7.gfx.inc.c"

#include "assets/levelGroup/Global/unk7/unk7.colV.inc.c"

#include "assets/levelGroup/Global/unk7/unk7.colT.inc.c"

#include "assets/levelGroup/Global/unk7/unk7.colS.inc.c"

#include "assets/levelGroup/Global/unk7/unk7.colH.inc.c"
unsigned char Global_zeroooo5_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo5.inc.c"
};

#include "assets/levelGroup/Global/unk8/unk8.vtx.inc.c"
Mtx_f Global_IMtx12 = IDENTITY;

#include "assets/levelGroup/Global/unk8/unk8.gfx.inc.c"

#include "assets/levelGroup/Global/unk8/unk8.colV.inc.c"

#include "assets/levelGroup/Global/unk8/unk8.colT.inc.c"

#include "assets/levelGroup/Global/unk8/unk8.colS.inc.c"

#include "assets/levelGroup/Global/unk8/unk8.colH.inc.c"
unsigned char Global_zeroooo6_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo6.inc.c"
};
Mtx_f Global_IMtx13 = IDENTITY;

#include "assets/levelGroup/Global/unk9/unk9.gfx.inc.c"

#include "assets/levelGroup/Global/unk9/unk9.colV.inc.c"

#include "assets/levelGroup/Global/unk9/unk9.colT.inc.c"

#include "assets/levelGroup/Global/unk9/unk9.colS.inc.c"

#include "assets/levelGroup/Global/unk9/unk9.colH.inc.c"

#include "assets/levelGroup/Global/unkA/unkA.vtx.inc.c"
Mtx_f Global_IMtx14 = IDENTITY;

#include "assets/levelGroup/Global/unkA/unkA.gfx.inc.c"

#include "assets/levelGroup/Global/unkA/unkA.colV.inc.c"

#include "assets/levelGroup/Global/unkA/unkA.colT.inc.c"

#include "assets/levelGroup/Global/unkA/unkA.colS.inc.c"

#include "assets/levelGroup/Global/unkA/unkA.colH.inc.c"
unsigned char Global_zeroooo7_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo7.inc.c"
};

#include "assets/levelGroup/Global/unkB/unkB.vtx.inc.c"
Mtx_f Global_IMtx15 = IDENTITY;
unsigned char Global_Pad195[] = FILEPAD;
unsigned char Global_unkB1_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB1.i4.png.inc.c"
};
unsigned char Global_Pad196[] = FILEPAD;
unsigned char Global_unkB2_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB2.i4.png.inc.c"
};

#include "assets/levelGroup/Global/unkB/unkB.gfx.inc.c"

#include "assets/levelGroup/Global/unkB/unkB.colV.inc.c"

#include "assets/levelGroup/Global/unkB/unkB.colT.inc.c"

#include "assets/levelGroup/Global/unkB/unkB.colS.inc.c"

#include "assets/levelGroup/Global/unkB/unkB.colH.inc.c"
unsigned char Global_zeroooo8_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo8.inc.c"
};

#include "assets/levelGroup/Global/unkC/unkC.vtx.inc.c"
Mtx_f Global_IMtx16 = IDENTITY;
unsigned char Global_Pad197[] = FILEPAD;
unsigned char Global_unkC_i4_PNG[] = {
#include "build/include/assets/levelGroup/Global/unkC/unkC.i4.png.inc.c"
};

#include "assets/levelGroup/Global/unkC/unkC.gfx.inc.c"

#include "assets/levelGroup/Global/unkC/unkC.colV.inc.c"

#include "assets/levelGroup/Global/unkC/unkC.colT.inc.c"

#include "assets/levelGroup/Global/unkC/unkC.colS.inc.c"

#include "assets/levelGroup/Global/unkC/unkC.colH.inc.c"
unsigned char Global_zeroooo9_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo9.inc.c"
};

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.vtx.inc.c"
Mtx_f Global_IMtx17 = IDENTITY;
unsigned char Global_Pad198[] = FILEPAD;
unsigned char Global_ALSpinDoor_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.png.inc.c"
};
unsigned char Global_Pad199[] = FILEPAD;
unsigned char Global_ALSpinDoor_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.gfx.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colV.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colT.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colS.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colH.inc.c"
unsigned char Global_zeroooo10_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo10.inc.c"
};

#include "assets/levelGroup/Global/unkD/unkD.vtx.inc.c"
Mtx_f Global_IMtx18 = IDENTITY;

#include "assets/levelGroup/Global/unkD/unkD.gfx.inc.c"

#include "assets/levelGroup/Global/unkD/unkD.colV.inc.c"

#include "assets/levelGroup/Global/unkD/unkD.colT.inc.c"

#include "assets/levelGroup/Global/unkD/unkD.colS.inc.c"

#include "assets/levelGroup/Global/unkD/unkD.colH.inc.c"
unsigned char Global_zeroooo11_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo11.inc.c"
};

#include "assets/levelGroup/Global/BLLava/BLLava.vtx.inc.c"
Mtx_f Global_IMtx19 = IDENTITY;
unsigned char Global_Pad200[] = FILEPAD;
unsigned char Global_BLLava_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.png.inc.c"
};
unsigned char Global_Pad201[] = FILEPAD;
unsigned char Global_BLLava_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava/BLLava.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colV.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colT.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colS.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colH.inc.c"
unsigned char Global_zeroooo12_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo12.inc.c"
};

#include "assets/levelGroup/Global/BLLava2/BLLava2.vtx.inc.c"
Mtx_f Global_IMtx20 = IDENTITY;
unsigned char Global_Pad202[] = FILEPAD;
unsigned char Global_BLLava2_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.png.inc.c"
};
unsigned char Global_Pad203[] = FILEPAD;
unsigned char Global_BLLava2_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava2/BLLava2.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colV.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colT.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colS.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colH.inc.c"
unsigned char Global_zeroooo13_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo13.inc.c"
};

#include "assets/levelGroup/Global/BLLava3/BLLava3.vtx.inc.c"
Mtx_f Global_IMtx21 = IDENTITY;
unsigned char Global_Pad204[] = FILEPAD;
unsigned char Global_BLLava3_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.png.inc.c"
};
unsigned char Global_Pad205[] = FILEPAD;
unsigned char Global_BLLava3_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava3/BLLava3.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colV.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colT.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colS.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colH.inc.c"
unsigned char Global_zeroooo14_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo14.inc.c"
};

#include "assets/levelGroup/Global/BLLava4/BLLava4.vtx.inc.c"
Mtx_f Global_IMtx22 = IDENTITY;
unsigned char Global_Pad206[] = FILEPAD;
unsigned char Global_BLLava4_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.png.inc.c"
};
unsigned char Global_Pad207[] = FILEPAD;
unsigned char Global_BLLava4_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava4/BLLava4.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colV.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colT.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colS.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colH.inc.c"
unsigned char Global_zeroooo15_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo15.inc.c"
};

#include "assets/levelGroup/Global/BLLava5/BLLava5.vtx.inc.c"
Mtx_f Global_IMtx23 = IDENTITY;
unsigned char Global_Pad208[] = FILEPAD;
unsigned char Global_BLLava5_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.png.inc.c"
};
unsigned char Global_Pad209[] = FILEPAD;
unsigned char Global_BLLava5_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava5/BLLava5.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colV.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colT.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colS.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colH.inc.c"
unsigned char Global_zeroooo16_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo16.inc.c"
};

#include "assets/levelGroup/Global/BLLava6/BLLava6.vtx.inc.c"
Mtx_f Global_IMtx24 = IDENTITY;
unsigned char Global_Pad210[] = FILEPAD;
unsigned char Global_BLLava6_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.png.inc.c"
};
unsigned char Global_Pad211[] = FILEPAD;
unsigned char Global_BLLava6_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava6/BLLava6.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colV.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colT.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colS.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colH.inc.c"
unsigned char Global_zeroooo17_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo17.inc.c"
};

#include "assets/levelGroup/Global/BLLava7/BLLava7.vtx.inc.c"
Mtx_f Global_IMtx25 = IDENTITY;
unsigned char Global_Pad212[] = FILEPAD;
unsigned char Global_BLLava7_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.png.inc.c"
};
unsigned char Global_Pad213[] = FILEPAD;
unsigned char Global_BLLava7_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava7/BLLava7.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colV.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colT.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colS.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colH.inc.c"
unsigned char Global_zeroooo18_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo18.inc.c"
};

#include "assets/levelGroup/Global/BLLava8/BLLava8.vtx.inc.c"
Mtx_f Global_IMtx26 = IDENTITY;
unsigned char Global_Pad214[] = FILEPAD;
unsigned char Global_BLLava8_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.png.inc.c"
};
unsigned char Global_Pad215[] = FILEPAD;
unsigned char Global_BLLava8_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava8/BLLava8.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colV.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colT.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colS.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colH.inc.c"
unsigned char Global_zeroooo19_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo19.inc.c"
};

#include "assets/levelGroup/Global/unkE/unkE.vtx.inc.c"
Mtx_f Global_IMtx27 = IDENTITY;

#include "assets/levelGroup/Global/unkE/unkE.gfx.inc.c"

#include "assets/levelGroup/Global/unkE/unkE.colV.inc.c"

#include "assets/levelGroup/Global/unkE/unkE.colT.inc.c"

#include "assets/levelGroup/Global/unkE/unkE.colS.inc.c"

#include "assets/levelGroup/Global/unkE/unkE.colH.inc.c"
unsigned char Global_zeroooo20_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo20.inc.c"
};

#include "assets/levelGroup/Global/unkF/unkF.vtx.inc.c"
Mtx_f Global_IMtx28 = IDENTITY;

#include "assets/levelGroup/Global/unkF/unkF.gfx.inc.c"

#include "assets/levelGroup/Global/unkF/unkF.colV.inc.c"

#include "assets/levelGroup/Global/unkF/unkF.colT.inc.c"

#include "assets/levelGroup/Global/unkF/unkF.colS.inc.c"

#include "assets/levelGroup/Global/unkF/unkF.colH.inc.c"
unsigned char Global_zeroooo21_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo21.inc.c"
};

#include "assets/levelGroup/Global/unk10/unk10.vtx.inc.c"
Mtx_f Global_IMtx29 = IDENTITY;

#include "assets/levelGroup/Global/unk10/unk10.gfx.inc.c"

#include "assets/levelGroup/Global/unk10/unk10.colV.inc.c"

#include "assets/levelGroup/Global/unk10/unk10.colT.inc.c"

#include "assets/levelGroup/Global/unk10/unk10.colS.inc.c"

#include "assets/levelGroup/Global/unk10/unk10.colH.inc.c"
unsigned char Global_zeroooo22_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo22.inc.c"
};

#include "assets/levelGroup/Global/Door1/Door1.vtx.inc.c"
Mtx_f Global_IMtx30 = IDENTITY;
unsigned char Global_Pad216[] = FILEPAD;
unsigned char Global_Door1_ci4_PNG[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.png.inc.c"
};
unsigned char Global_Pad217[] = FILEPAD;
unsigned char Global_Door1_ci4_PAL[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/Door1/Door1.gfx.inc.c"

#include "assets/levelGroup/Global/Door1/Door1.colV.inc.c"

#include "assets/levelGroup/Global/Door1/Door1.colT.inc.c"

#include "assets/levelGroup/Global/Door1/Door1.colS.inc.c"

#include "assets/levelGroup/Global/Door1/Door1.colH.inc.c"
unsigned char Global_zeroooo23_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo23.inc.c"
};

#include "assets/levelGroup/Global/unk12/unk12.vtx.inc.c"
Mtx_f Global_IMtx31 = IDENTITY;

#include "assets/levelGroup/Global/unk12/unk12.gfx.inc.c"

#include "assets/levelGroup/Global/unk12/unk12.colV.inc.c"

#include "assets/levelGroup/Global/unk12/unk12.colT.inc.c"

#include "assets/levelGroup/Global/unk12/unk12.colS.inc.c"

#include "assets/levelGroup/Global/unk12/unk12.colH.inc.c"
unsigned char Global_zeroooo24_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo24.inc.c"
};

#include "assets/levelGroup/Global/unk13/unk13.vtx.inc.c"
Mtx_f Global_IMtx32 = IDENTITY;

#include "assets/levelGroup/Global/unk13/unk13.gfx.inc.c"

#include "assets/levelGroup/Global/unk13/unk13.colV.inc.c"

#include "assets/levelGroup/Global/unk13/unk13.colT.inc.c"

#include "assets/levelGroup/Global/unk13/unk13.colS.inc.c"

#include "assets/levelGroup/Global/unk13/unk13.colH.inc.c"
unsigned char Global_zeroooo25_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo25.inc.c"
};

#include "assets/levelGroup/Global/unk14/unk14.vtx.inc.c"
Mtx_f Global_IMtx33 = IDENTITY;

#include "assets/levelGroup/Global/unk14/unk14.gfx.inc.c"

#include "assets/levelGroup/Global/unk14/unk14.colV.inc.c"

#include "assets/levelGroup/Global/unk14/unk14.colT.inc.c"

#include "assets/levelGroup/Global/unk14/unk14.colS.inc.c"

#include "assets/levelGroup/Global/unk14/unk14.colH.inc.c"
unsigned char Global_zeroooo26_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo26.inc.c"
};

#include "assets/levelGroup/Global/unk15/unk15.vtx.inc.c"
Mtx_f Global_IMtx34 = IDENTITY;

#include "assets/levelGroup/Global/unk15/unk15.gfx.inc.c"

#include "assets/levelGroup/Global/unk15/unk15.colV.inc.c"

#include "assets/levelGroup/Global/unk15/unk15.colT.inc.c"

#include "assets/levelGroup/Global/unk15/unk15.colS.inc.c"

#include "assets/levelGroup/Global/unk15/unk15.colH.inc.c"
unsigned char Global_zeroooo27_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo27.inc.c"
};

#include "assets/levelGroup/Global/unk16/unk16.vtx.inc.c"
Mtx_f Global_IMtx35 = IDENTITY;

#include "assets/levelGroup/Global/unk16/unk16.gfx.inc.c"

#include "assets/levelGroup/Global/unk16/unk16.colV.inc.c"

#include "assets/levelGroup/Global/unk16/unk16.colT.inc.c"

#include "assets/levelGroup/Global/unk16/unk16.colS.inc.c"

#include "assets/levelGroup/Global/unk16/unk16.colH.inc.c"
unsigned char Global_zeroooo28_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo28.inc.c"
};

#include "assets/levelGroup/Global/unk17/unk17.vtx.inc.c"
Mtx_f Global_IMtx36 = IDENTITY;

#include "assets/levelGroup/Global/unk17/unk17.gfx.inc.c"

#include "assets/levelGroup/Global/unk17/unk17.colV.inc.c"

#include "assets/levelGroup/Global/unk17/unk17.colT.inc.c"

#include "assets/levelGroup/Global/unk17/unk17.colS.inc.c"

#include "assets/levelGroup/Global/unk17/unk17.colH.inc.c"
unsigned char Global_zeroooo29_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo29.inc.c"
};

#include "assets/levelGroup/Global/unk18/unk18.vtx.inc.c"
Mtx_f Global_IMtx37 = IDENTITY;

#include "assets/levelGroup/Global/unk18/unk18.gfx.inc.c"

#include "assets/levelGroup/Global/unk18/unk18.colV.inc.c"

#include "assets/levelGroup/Global/unk18/unk18.colT.inc.c"

#include "assets/levelGroup/Global/unk18/unk18.colS.inc.c"

#include "assets/levelGroup/Global/unk18/unk18.colH.inc.c"
unsigned char Global_zeroooo30_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo30.inc.c"
};

#include "assets/levelGroup/Global/unk19/unk19.vtx.inc.c"
Mtx_f Global_IMtx38 = IDENTITY;

#include "assets/levelGroup/Global/unk19/unk19.gfx.inc.c"

#include "assets/levelGroup/Global/unk19/unk19.colV.inc.c"

#include "assets/levelGroup/Global/unk19/unk19.colT.inc.c"

#include "assets/levelGroup/Global/unk19/unk19.colS.inc.c"

#include "assets/levelGroup/Global/unk19/unk19.colH.inc.c"
unsigned char Global_zeroooo31_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo31.inc.c"
};

#include "assets/levelGroup/Global/unk1A/unk1A.vtx.inc.c"
Mtx_f Global_IMtx39 = IDENTITY;

#include "assets/levelGroup/Global/unk1A/unk1A.gfx.inc.c"

#include "assets/levelGroup/Global/unk1A/unk1A.colV.inc.c"

#include "assets/levelGroup/Global/unk1A/unk1A.colT.inc.c"

#include "assets/levelGroup/Global/unk1A/unk1A.colS.inc.c"

#include "assets/levelGroup/Global/unk1A/unk1A.colH.inc.c"
unsigned char Global_zeroooo32_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo32.inc.c"
};

#include "assets/levelGroup/Global/unk1B/unk1B.vtx.inc.c"
Mtx_f Global_IMtx40 = IDENTITY;

#include "assets/levelGroup/Global/unk1B/unk1B.gfx.inc.c"

#include "assets/levelGroup/Global/unk1B/unk1B.colV.inc.c"

#include "assets/levelGroup/Global/unk1B/unk1B.colT.inc.c"

#include "assets/levelGroup/Global/unk1B/unk1B.colS.inc.c"

#include "assets/levelGroup/Global/unk1B/unk1B.colH.inc.c"
unsigned char Global_zeroooo33_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo33.inc.c"
};

#include "assets/levelGroup/Global/unk1C/unk1C.vtx.inc.c"
Mtx_f Global_IMtx41 = IDENTITY;

#include "assets/levelGroup/Global/unk1C/unk1C.gfx.inc.c"

#include "assets/levelGroup/Global/unk1C/unk1C.colV.inc.c"

#include "assets/levelGroup/Global/unk1C/unk1C.colT.inc.c"

#include "assets/levelGroup/Global/unk1C/unk1C.colS.inc.c"

#include "assets/levelGroup/Global/unk1C/unk1C.colH.inc.c"
unsigned char Global_zeroooo34_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo34.inc.c"
};

#include "assets/levelGroup/Global/unk1D/unk1D.vtx.inc.c"
Mtx_f Global_IMtx42 = IDENTITY;

#include "assets/levelGroup/Global/unk1D/unk1D.gfx.inc.c"

#include "assets/levelGroup/Global/unk1D/unk1D.colV.inc.c"

#include "assets/levelGroup/Global/unk1D/unk1D.colT.inc.c"

#include "assets/levelGroup/Global/unk1D/unk1D.colS.inc.c"

#include "assets/levelGroup/Global/unk1D/unk1D.colH.inc.c"
unsigned char Global_zeroooo35_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo35.inc.c"
};

#include "assets/levelGroup/Global/unk1E/unk1E.vtx.inc.c"
Mtx_f Global_IMtx43 = IDENTITY;

#include "assets/levelGroup/Global/unk1E/unk1E.gfx.inc.c"

#include "assets/levelGroup/Global/unk1E/unk1E.colV.inc.c"

#include "assets/levelGroup/Global/unk1E/unk1E.colT.inc.c"

#include "assets/levelGroup/Global/unk1E/unk1E.colS.inc.c"

#include "assets/levelGroup/Global/unk1E/unk1E.colH.inc.c"
unsigned char Global_zeroooo36_Bin[] = {
#include "build/include/assets/levelGroup/Global/zeroooo36.inc.c"
};
