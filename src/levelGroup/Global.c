#include "common.h"
//proper names
extern unsigned char Global_poleWood_Pal[]; // pole palette
extern unsigned char Global_poleWood_Png[]; // pole img
//build names
extern unsigned char D_02028D30_Global[]; // pole palette
extern unsigned char D_02028528_Global[]; // pole img
extern Vtx D_800FE7D8_Global[];
extern Vtx D_800FE8C8_Global[];
#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny

Mtx_f D_02000000_Global = {
#include "assets/levelGroup/Global/globalScope/globalScope.mtx.inc.c"
};
Lights1 D_02000040_Global =
#include "assets/levelGroup/Global/globalScope/globalScope.light.inc.c"
Vtx D_02000058_Global[] = {
#include "assets/levelGroup/Global/cannon/cannon.vtx.inc.c"
};
Mtx_f D_02000248_Global = {
#include "assets/levelGroup/Global/cannon/cannon.mtx.inc.c"
};
unsigned char Global_Pad1[] = FILEPAD;
unsigned char D_02000290_Global[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonHole.rgba16.png.inc.c"
};
unsigned char Global_Pad2[] = FILEPAD;
unsigned char D_02000A98_Global[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonBarrel.rgba16.png.inc.c"
};
unsigned char Global_Pad3[] = FILEPAD;
unsigned char D_02001AA0_Global[] = {
#include "build/include/assets/levelGroup/Global/cannon/black.rgba16.png.inc.c"
};
Gfx D_020022A0_Global[] = {
#include "assets/levelGroup/Global/cannon/cannon.gfx.inc.c"
};
Vtx D_020025C8_Global[] = {
#include "assets/levelGroup/Global/unkWood/unkWood.vtx.inc.c"
};
Mtx_f D_02002A28_Global = {
#include "assets/levelGroup/Global/unkWood/unkWood.mtx.inc.c"
};
unsigned char Global_Pad4[] = FILEPAD;
unsigned char D_02002A70_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/woodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad5[] = FILEPAD;
unsigned char D_02003278_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWoodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_Pad6[] = FILEPAD;
unsigned char D_02003A80_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWood.rgba16.png.inc.c"
};
unsigned char Global_Pad7[] = FILEPAD;
unsigned char D_02004288_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/lightWood.rgba16.png.inc.c"
};
unsigned char Global_Pad8[] = FILEPAD;
unsigned char D_02004A90_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/midWood.rgba16.png.inc.c"
};
Gfx D_02005290_Global[] = {
#include "assets/levelGroup/Global/unkWood/unkWood.gfx.inc.c"
};
Vtx D_02005A18_Global[] = {
#include "assets/levelGroup/Global/unk/unk.vtx.inc.c"
};
Mtx_f D_02005BF8_Global = {
#include "assets/levelGroup/Global/unk/unk.mtx.inc.c"
};
Gfx D_02005C38_Global[] = {
#include "assets/levelGroup/Global/unk/unk.gfx.inc.c"
};
Vtx D_02005FA0_Global[] = {
#include "assets/levelGroup/Global/unk2/unk2.vtx.inc.c"
};
Mtx_f D_02006120_Global = {
#include "assets/levelGroup/Global/unk2/unk2.mtx.inc.c"
};
Gfx D_02006160_Global[] = {
#include "assets/levelGroup/Global/unk2/unk2.gfx.inc.c"
};
Vtx D_020062C0_Global[] = {
#include "assets/levelGroup/Global/unk40/unk40.vtx.inc.c"
};
Mtx_f D_02006300_Global = {
#include "assets/levelGroup/Global/unk40/unk40.mtx.inc.c"
};
unsigned char Global_Pad9[] = FILEPAD;
unsigned char D_02006348_Global[] = {
#include "build/include/assets/levelGroup/Global/unk40/shadow.ia8.png.inc.c"
};
Gfx D_02006988_Global[] = {
#include "assets/levelGroup/Global/unk40/unk40.gfx.inc.c"
};
Gfx D_02006A48_Global[] = {
#include "assets/levelGroup/Global/unk40/unk402.gfx.inc.c"
};
Vec3f D_02006B08_Global[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colV.inc.c"
};
Vec3s D_02006C70_Global[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colT.inc.c"
};
Vec3f D_02006CE8_Global[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colS.inc.c"
};
CollisionData D_02006D00_Global[] = {
#include "assets/levelGroup/Global/unkCol2/unkCol2.colH.inc.c"
};
Vec3f D_02006D14_Global[] = {
#include "assets/levelGroup/Global/unk40/unk40.colV.inc.c"
};
Vec3s D_02006D74_Global[] = {
#include "assets/levelGroup/Global/unk40/unk40.colT.inc.c"
};
Vec3f D_02006E04_Global[] = {
#include "assets/levelGroup/Global/unk40/unk40.colS.inc.c"
};
CollisionData D_02006E1C_Global[] = {
#include "assets/levelGroup/Global/unk40/unk40.colH.inc.c"
};
Vec3f D_02006E30_Global[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colV.inc.c"
};
Vec3s D_02006E90_Global[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colT.inc.c"
};
Vec3f D_02006F20_Global[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colS.inc.c"
};
CollisionData D_02006F38_Global[] = {
#include "assets/levelGroup/Global/unkCol3/unkCol3.colH.inc.c"
};
unsigned char D_02006F4C_Global[] = {
#include "build/include/assets/levelGroup/Global/what.inc.c"
};
unsigned char Global_Pad10[] = FILEPAD;
unsigned char D_02006F80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad11[] = FILEPAD;
unsigned char D_02007188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad12[] = FILEPAD;
unsigned char D_02007390_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.png.inc.c"
};
unsigned char Global_Pad13[] = FILEPAD;
unsigned char D_02007B98_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.pal.inc.c"
};
unsigned char Global_Pad14[] = FILEPAD;
unsigned char D_02007DA0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gravel.i4.png.inc.c"
};
unsigned char Global_Pad15[] = FILEPAD;
unsigned char D_020085A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/wall.i4.png.inc.c"
};
unsigned char Global_Pad16[] = FILEPAD;
unsigned char D_020087B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gateGray.ia4.png.inc.c"
};
unsigned char Global_Pad17[] = FILEPAD;
unsigned char D_020089B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloor.i4.png.inc.c"
};
unsigned char Global_Pad18[] = FILEPAD;
unsigned char D_020091C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloorColor.ci4.png.inc.c"
};
unsigned char Global_Pad19[] = FILEPAD;
unsigned char D_020099C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloorColor.ci4.pal.inc.c"
};
unsigned char Global_Pad20[] = FILEPAD;
unsigned char D_02009BD0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/smallBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad21[] = FILEPAD;
unsigned char D_02009D58_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.png.inc.c"
};
unsigned char Global_Pad22[] = FILEPAD;
unsigned char D_02009F60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.pal.inc.c"
};
unsigned char Global_Pad23[] = FILEPAD;
unsigned char D_0200A168_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.png.inc.c"
};
unsigned char Global_Pad24[] = FILEPAD;
unsigned char D_0200A570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.pal.inc.c"
};
unsigned char Global_Pad25[] = FILEPAD;
unsigned char D_0200A778_Global[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.png.inc.c"
};
unsigned char Global_Pad26[] = FILEPAD;
unsigned char D_0200AF80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.pal.inc.c"
};
unsigned char Global_Pad27[] = FILEPAD;
unsigned char D_0200B188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall2.i4.png.inc.c"
};
unsigned char Global_Pad28[] = FILEPAD;
unsigned char D_0200B990_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall.i4.png.inc.c"
};
unsigned char Global_Pad29[] = FILEPAD;
unsigned char D_0200C198_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.png.inc.c"
};
unsigned char Global_Pad30[] = FILEPAD;
unsigned char D_0200C3A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.pal.inc.c"
};
unsigned char Global_Pad31[] = FILEPAD;
unsigned char D_0200C5A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.png.inc.c"
};
unsigned char Global_Pad32[] = FILEPAD;
unsigned char D_0200C7B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad33[] = FILEPAD;
unsigned char D_0200C9B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/unk12.i4.png.inc.c"
};
unsigned char Global_Pad34[] = FILEPAD;
unsigned char D_0200CBC0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.png.inc.c"
};
unsigned char Global_Pad35[] = FILEPAD;
unsigned char D_0200CC48_Global[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.pal.inc.c"
};
unsigned char Global_Pad36[] = FILEPAD;
unsigned char D_0200CE50_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural4.i4.png.inc.c"
};
unsigned char Global_Pad37[] = FILEPAD;
unsigned char D_0200D658_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural3.i4.png.inc.c"
};
unsigned char Global_Pad38[] = FILEPAD;
unsigned char D_0200DE60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural2.i4.png.inc.c"
};
unsigned char Global_Pad39[] = FILEPAD;
unsigned char D_0200E668_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural1.i4.png.inc.c"
};
unsigned char Global_Pad40[] = FILEPAD;
unsigned char D_02010670_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall.i4.png.inc.c"
};
unsigned char Global_Pad41[] = FILEPAD;
unsigned char D_02010878_Global[] = {
#include "build/include/assets/levelGroup/Global/img/strip2.i4.png.inc.c"
};
unsigned char Global_Pad42[] = FILEPAD;
unsigned char D_02010900_Global[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.png.inc.c"
};
unsigned char Global_Pad43[] = FILEPAD;
unsigned char D_02011108_Global[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.pal.inc.c"
};
unsigned char Global_Pad44[] = FILEPAD;
unsigned char D_02011310_Global[] = {
#include "build/include/assets/levelGroup/Global/img/fraMEd.ia4.png.inc.c"
};
unsigned char Global_Pad45[] = FILEPAD;
unsigned char D_02011B18_Global[] = {
#include "build/include/assets/levelGroup/Global/img/squares.i4.png.inc.c"
};
unsigned char Global_Pad46[] = FILEPAD;
unsigned char D_02011D20_Global[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlate.i4.png.inc.c"
};
unsigned char Global_Pad47[] = FILEPAD;
unsigned char D_02011F28_Global[] = {
#include "build/include/assets/levelGroup/Global/img/factoryPlates.i4.png.inc.c"
};
unsigned char Global_Pad48[] = FILEPAD;
unsigned char D_02012730_Global[] = {
#include "build/include/assets/levelGroup/Global/img/steelPlate.i4.png.inc.c"
};
unsigned char Global_Pad49[] = FILEPAD;
unsigned char D_02012F38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlates.i4.png.inc.c"
};
unsigned char Global_Pad50[] = FILEPAD;
unsigned char D_02013740_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ballGround.i4.png.inc.c"
};
unsigned char Global_Pad51[] = FILEPAD;
unsigned char D_02013948_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cube.i4.png.inc.c"
};
unsigned char Global_Pad52[] = FILEPAD;
unsigned char D_02014150_Global[] = {
#include "build/include/assets/levelGroup/Global/img/hexComb.i4.png.inc.c"
};
unsigned char Global_Pad53[] = FILEPAD;
unsigned char D_02014358_Global[] = {
#include "build/include/assets/levelGroup/Global/img/hexCombFade.i8.png.inc.c"
};
unsigned char Global_Pad54[] = FILEPAD;
unsigned char D_02014B60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brokenCube.i4.png.inc.c"
};
unsigned char Global_Pad55[] = FILEPAD;
unsigned char D_02015368_Global[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.png.inc.c"
};
unsigned char Global_Pad56[] = FILEPAD;
unsigned char D_02015570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.pal.inc.c"
};
unsigned char D_02015770_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.png.inc.c"
};
unsigned char D_02015B70_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.pal.inc.c"
};
unsigned char Global_Pad57[] = FILEPAD;
unsigned char D_02015D78_Global[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.png.inc.c"
};
unsigned char Global_Pad58[] = FILEPAD;
unsigned char D_02015E00_Global[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.pal.inc.c"
};
unsigned char Global_Pad59[] = FILEPAD;
unsigned char D_02016008_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.png.inc.c"
};
unsigned char Global_Pad60[] = FILEPAD;
unsigned char D_02016210_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.pal.inc.c"
};
unsigned char Global_Pad61[] = FILEPAD;
unsigned char D_02016418_Global[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.png.inc.c"
};
unsigned char Global_Pad62[] = FILEPAD;
unsigned char D_02016620_Global[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.pal.inc.c"
};
unsigned char Global_Pad63[] = FILEPAD;
unsigned char D_02016828_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.png.inc.c"
};
unsigned char Global_Pad64[] = FILEPAD;
unsigned char D_02016A30_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.pal.inc.c"
};
unsigned char Global_Pad65[] = FILEPAD;
unsigned char D_02016C38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.png.inc.c"
};
unsigned char Global_Pad66[] = FILEPAD;
unsigned char D_02016E40_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad67[] = FILEPAD;
unsigned char D_02017048_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.png.inc.c"
};
unsigned char Global_Pad68[] = FILEPAD;
unsigned char D_02017850_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.pal.inc.c"
};
unsigned char Global_Pad69[] = FILEPAD;
unsigned char D_02017A58_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad70[] = FILEPAD;
unsigned char D_02018260_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad71[] = FILEPAD;
unsigned char D_02018468_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.png.inc.c"
};
unsigned char Global_Pad72[] = FILEPAD;
unsigned char D_02018670_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.pal.inc.c"
};
unsigned char Global_Pad73[] = FILEPAD;
unsigned char D_02018878_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.png.inc.c"
};
unsigned char Global_Pad74[] = FILEPAD;
unsigned char D_02019080_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.pal.inc.c"
};
unsigned char Global_Pad75[] = FILEPAD;
unsigned char D_02019288_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.png.inc.c"
};
unsigned char Global_Pad76[] = FILEPAD;
unsigned char D_02019490_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.pal.inc.c"
};
unsigned char Global_Pad77[] = FILEPAD;
unsigned char D_02019698_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.png.inc.c"
};
unsigned char Global_Pad78[] = FILEPAD;
unsigned char D_020198A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.pal.inc.c"
};
unsigned char Global_Pad79[] = FILEPAD;
unsigned char D_02019AA8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.png.inc.c"
};
unsigned char Global_Pad80[] = FILEPAD;
unsigned char D_02019CB0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.pal.inc.c"
};
unsigned char Global_Pad81[] = FILEPAD;
unsigned char D_02019EB8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad82[] = FILEPAD;
unsigned char D_0201A2C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad83[] = FILEPAD;
unsigned char D_0201A4C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.png.inc.c"
};
unsigned char Global_Pad84[] = FILEPAD;
unsigned char D_0201A8D0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.pal.inc.c"
};
unsigned char Global_Pad85[] = FILEPAD;
unsigned char D_0201AAD8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.png.inc.c"
};
unsigned char Global_Pad86[] = FILEPAD;
unsigned char D_0201ACE0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad87[] = FILEPAD;
unsigned char D_0201AEE8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.png.inc.c"
};
unsigned char Global_Pad88[] = FILEPAD;
unsigned char D_0201B0F0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.pal.inc.c"
};
unsigned char Global_Pad89[] = FILEPAD;
unsigned char D_0201B2F8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.png.inc.c"
};
unsigned char Global_Pad90[] = FILEPAD;
unsigned char D_0201B500_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.pal.inc.c"
};
unsigned char Global_Pad91[] = FILEPAD;
unsigned char D_0201B708_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.png.inc.c"
};
unsigned char Global_Pad92[] = FILEPAD;
unsigned char D_0201B910_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.pal.inc.c"
};
unsigned char D_0201BB10_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.png.inc.c"
};
unsigned char D_0201BF10_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.pal.inc.c"
};
unsigned char Global_Pad93[] = FILEPAD;
unsigned char D_0201C118_Global[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.png.inc.c"
};
unsigned char Global_Pad94[] = FILEPAD;
unsigned char D_0201C920_Global[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.pal.inc.c"
};
unsigned char Global_Pad95[] = FILEPAD;
unsigned char D_0201CB28_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chain2.rgba16.png.inc.c"
};
unsigned char Global_Pad96[] = FILEPAD;
unsigned char D_0201D330_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chain1.rgba16.png.inc.c"
};
unsigned char Global_Pad97[] = FILEPAD;
unsigned char D_0201DB38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.png.inc.c"
};
unsigned char Global_Pad98[] = FILEPAD;
unsigned char D_0201DD40_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad99[] = FILEPAD;
unsigned char D_0201DF48_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.png.inc.c"
};
unsigned char Global_Pad100[] = FILEPAD;
unsigned char D_0201E750_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad101[] = FILEPAD;
unsigned char D_0201E958_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.png.inc.c"
};
unsigned char Global_Pad102[] = FILEPAD;
unsigned char D_0201F160_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.pal.inc.c"
};
unsigned char Global_Pad103[] = FILEPAD;
unsigned char D_0201F368_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.png.inc.c"
};
unsigned char Global_Pad104[] = FILEPAD;
unsigned char D_0201FB70_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.pal.inc.c"
};
unsigned char Global_Pad105[] = FILEPAD;
unsigned char D_0201FD78_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.png.inc.c"
};
unsigned char Global_Pad106[] = FILEPAD;
unsigned char D_02020580_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.pal.inc.c"
};
unsigned char Global_Pad107[] = FILEPAD;
unsigned char D_02020788_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.png.inc.c"
};
unsigned char Global_Pad108[] = FILEPAD;
unsigned char D_02020F90_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.pal.inc.c"
};
unsigned char Global_Pad109[] = FILEPAD;
unsigned char D_02021198_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.png.inc.c"
};
unsigned char Global_Pad110[] = FILEPAD;
unsigned char D_020213A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.pal.inc.c"
};
unsigned char Global_Pad111[] = FILEPAD;
unsigned char D_020215A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad112[] = FILEPAD;
unsigned char D_02021630_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad113[] = FILEPAD;
unsigned char D_02021838_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.png.inc.c"
};
unsigned char Global_Pad114[] = FILEPAD;
unsigned char D_02021940_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.pal.inc.c"
};
unsigned char Global_Pad115[] = FILEPAD;
unsigned char D_02021B48_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.png.inc.c"
};
unsigned char Global_Pad116[] = FILEPAD;
unsigned char D_02021D50_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.pal.inc.c"
};
unsigned char Global_Pad117[] = FILEPAD;
unsigned char D_02021F58_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.png.inc.c"
};
unsigned char Global_Pad118[] = FILEPAD;
unsigned char D_02022160_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.pal.inc.c"
};
unsigned char Global_Pad119[] = FILEPAD;
unsigned char D_02022368_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad120[] = FILEPAD;
unsigned char D_02022570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad121[] = FILEPAD;
unsigned char D_02022778_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.png.inc.c"
};
unsigned char Global_Pad122[] = FILEPAD;
unsigned char D_02022F80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.pal.inc.c"
};
unsigned char Global_Pad123[] = FILEPAD;
unsigned char D_02023188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.png.inc.c"
};
unsigned char Global_Pad124[] = FILEPAD;
unsigned char D_02023390_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.pal.inc.c"
};
unsigned char Global_Pad125[] = FILEPAD;
unsigned char D_02023598_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad126[] = FILEPAD;
unsigned char D_02023DA0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad127[] = FILEPAD;
unsigned char D_02023FA8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.png.inc.c"
};
unsigned char Global_Pad128[] = FILEPAD;
unsigned char D_020247B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad129[] = FILEPAD;
unsigned char D_020249B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/rope.rgba16.png.inc.c"
};
unsigned char Global_Pad130[] = FILEPAD;
unsigned char D_020251C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.png.inc.c"
};
unsigned char Global_Pad131[] = FILEPAD;
unsigned char D_020252C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.pal.inc.c"
};
unsigned char Global_Pad132[] = FILEPAD;
unsigned char D_020254D0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.png.inc.c"
};
unsigned char Global_Pad133[] = FILEPAD;
unsigned char D_020258D8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.pal.inc.c"
};
unsigned char Global_Pad134[] = FILEPAD;
unsigned char D_02025AE0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.png.inc.c"
};
unsigned char Global_Pad135[] = FILEPAD;
unsigned char D_02025CE8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.pal.inc.c"
};
unsigned char Global_Pad136[] = FILEPAD;
unsigned char D_02025EF0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.png.inc.c"
};
unsigned char Global_Pad137[] = FILEPAD;
unsigned char D_020266F8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.pal.inc.c"
};
unsigned char Global_Pad138[] = FILEPAD;
unsigned char D_02026900_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.png.inc.c"
};
unsigned char Global_Pad139[] = FILEPAD;
unsigned char D_02027108_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.pal.inc.c"
};
unsigned char Global_Pad140[] = FILEPAD;
unsigned char D_02027310_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.png.inc.c"
};
unsigned char Global_Pad141[] = FILEPAD;
unsigned char D_02027B18_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.pal.inc.c"
};
unsigned char Global_Pad142[] = FILEPAD;
unsigned char D_02027D20_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gate.rgba16.png.inc.c"
};
unsigned char Global_Pad143[] = FILEPAD;
unsigned char D_02028528_Global[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.png.inc.c"
};
unsigned char Global_Pad144[] = FILEPAD;
unsigned char D_02028D30_Global[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.pal.inc.c"
};
unsigned char Global_Pad145[] = FILEPAD;
unsigned char D_02028F38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.png.inc.c"
};
unsigned char Global_Pad146[] = FILEPAD;
unsigned char D_02029140_Global[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.pal.inc.c"
};
unsigned char Global_Pad147[] = FILEPAD;
unsigned char D_02029348_Global[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.png.inc.c"
};
unsigned char Global_Pad148[] = FILEPAD;
unsigned char D_02029550_Global[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.pal.inc.c"
};
unsigned char Global_Pad149[] = FILEPAD;
unsigned char D_02029758_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.png.inc.c"
};
unsigned char Global_Pad150[] = FILEPAD;
unsigned char D_02029B60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.pal.inc.c"
};
unsigned char Global_Pad151[] = FILEPAD;
unsigned char D_02029D68_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.png.inc.c"
};
unsigned char Global_Pad152[] = FILEPAD;
unsigned char D_0202A570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.pal.inc.c"
};
unsigned char Global_Pad153[] = FILEPAD;
unsigned char D_0202A778_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.png.inc.c"
};
unsigned char Global_Pad154[] = FILEPAD;
unsigned char D_0202AF80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.pal.inc.c"
};
unsigned char Global_Pad155[] = FILEPAD;
unsigned char D_0202B188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/windows.ia4.png.inc.c"
};
unsigned char Global_Pad156[] = FILEPAD;
unsigned char D_0202B990_Global[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.png.inc.c"
};
unsigned char Global_Pad157[] = FILEPAD;
unsigned char D_0202C198_Global[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.pal.inc.c"
};
unsigned char Global_Pad158[] = FILEPAD;
unsigned char D_0202C3A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.png.inc.c"
};
unsigned char Global_Pad159[] = FILEPAD;
unsigned char D_0202C5A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.pal.inc.c"
};
unsigned char Global_Pad160[] = FILEPAD;
unsigned char D_0202C7B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.png.inc.c"
};
unsigned char Global_Pad161[] = FILEPAD;
unsigned char D_0202CFB8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad162[] = FILEPAD;
unsigned char D_0202D1C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.png.inc.c"
};
unsigned char Global_Pad163[] = FILEPAD;
unsigned char D_0202D9C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.pal.inc.c"
};
unsigned char Global_Pad164[] = FILEPAD;
unsigned char D_0202DBD0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.png.inc.c"
};
unsigned char Global_Pad165[] = FILEPAD;
unsigned char D_0202DFD8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.pal.inc.c"
};
unsigned char Global_Pad166[] = FILEPAD;
unsigned char D_0202E1E0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.png.inc.c"
};
unsigned char Global_Pad167[] = FILEPAD;
unsigned char D_0202E5E8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.pal.inc.c"
};
unsigned char Global_Pad168[] = FILEPAD;
unsigned char D_0202E7F0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.png.inc.c"
};
unsigned char Global_Pad169[] = FILEPAD;
unsigned char D_0202EFF8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.pal.inc.c"
};
unsigned char Global_Pad170[] = FILEPAD;
unsigned char D_0202F200_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.png.inc.c"
};
unsigned char Global_Pad171[] = FILEPAD;
unsigned char D_0202FA08_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.pal.inc.c"
};
unsigned char Global_Pad172[] = FILEPAD;
unsigned char D_0202FC10_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.png.inc.c"
};
unsigned char Global_Pad173[] = FILEPAD;
unsigned char D_02030418_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.pal.inc.c"
};
unsigned char Global_Pad174[] = FILEPAD;
unsigned char D_02030620_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.png.inc.c"
};
unsigned char Global_Pad175[] = FILEPAD;
unsigned char D_02030E28_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.pal.inc.c"
};
unsigned char Global_Pad176[] = FILEPAD;
unsigned char D_02031030_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.png.inc.c"
};
unsigned char Global_Pad177[] = FILEPAD;
unsigned char D_02031838_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.pal.inc.c"
};
unsigned char Global_Pad178[] = FILEPAD;
unsigned char D_02031A40_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.png.inc.c"
};
unsigned char Global_Pad179[] = FILEPAD;
unsigned char D_02032248_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.pal.inc.c"
};
unsigned char Global_Pad180[] = FILEPAD;
unsigned char D_02032450_Global[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.png.inc.c"
};
unsigned char Global_Pad181[] = FILEPAD;
unsigned char D_02032658_Global[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.pal.inc.c"
};
unsigned char Global_Pad182[] = FILEPAD;
unsigned char D_02032860_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.png.inc.c"
};
unsigned char Global_Pad183[] = FILEPAD;
unsigned char D_02032C68_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.pal.inc.c"
};
unsigned char Global_Pad184[] = FILEPAD;
unsigned char D_02032E70_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.png.inc.c"
};
unsigned char Global_Pad185[] = FILEPAD;
unsigned char D_02033278_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.pal.inc.c"
};
unsigned char Global_Pad186[] = FILEPAD;
unsigned char D_02033480_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.png.inc.c"
};
unsigned char Global_Pad187[] = FILEPAD;
unsigned char D_02033C88_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.pal.inc.c"
};
unsigned char Global_Pad188[] = FILEPAD;
unsigned char D_02033E90_Global[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.png.inc.c"
};
unsigned char Global_Pad189[] = FILEPAD;
unsigned char D_02034298_Global[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.pal.inc.c"
};
unsigned char Global_Pad190[] = FILEPAD;
unsigned char D_020344A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.png.inc.c"
};
unsigned char Global_Pad191[] = FILEPAD;
unsigned char D_02034CA8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.pal.inc.c"
};
unsigned char Global_Pad192[] = FILEPAD;
unsigned char D_02034EB0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.png.inc.c"
};
unsigned char Global_Pad193[] = FILEPAD;
unsigned char D_020350B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.pal.inc.c"
};
unsigned char Global_Pad194[] = FILEPAD;
unsigned char D_020352C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/fogFade.ia8.png.inc.c"
};
Vtx D_020358C0_Global[] = {
#include "assets/levelGroup/Global/unk3/unk3.vtx.inc.c"
};
Mtx_f D_02035940_Global = {
#include "assets/levelGroup/Global/unk3/unk3.mtx.inc.c"
};
Gfx D_02035980_Global[] = {
#include "assets/levelGroup/Global/unk3/unk3.gfx.inc.c"
};
Vec3f D_02035A38_Global[] = {
#include "assets/levelGroup/Global/unk3/unk3.colV.inc.c"
};
Vec3s D_02035A98_Global[] = {
#include "assets/levelGroup/Global/unk3/unk3.colT.inc.c"
};
Vec3f D_02035B28_Global[] = {
#include "assets/levelGroup/Global/unk3/unk3.colS.inc.c"
};
CollisionData D_02035B40_Global[] = {
#include "assets/levelGroup/Global/unk3/unk3.colH.inc.c"
};
unsigned char D_02035B54_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo.inc.c"
};
Vtx D_02035B58_Global[] = {
#include "assets/levelGroup/Global/unk4/unk4.vtx.inc.c"
};
Mtx_f D_02035B98_Global = {
#include "assets/levelGroup/Global/unk4/unk4.mtx.inc.c"
};
Gfx D_02035BD8_Global[] = {
#include "assets/levelGroup/Global/unk4/unk4.gfx.inc.c"
};
Vec3f D_02035C40_Global[] = {
#include "assets/levelGroup/Global/unk4/unk4.colV.inc.c"
};
Vec3s D_02035C70_Global[] = {
#include "assets/levelGroup/Global/unk4/unk4.colT.inc.c"
};
Vec3f D_02035C88_Global[] = {
#include "assets/levelGroup/Global/unk4/unk4.colS.inc.c"
};
CollisionData D_02035CA0_Global[] = {
#include "assets/levelGroup/Global/unk4/unk4.colH.inc.c"
};
unsigned char D_02035CB4_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo2.inc.c"
};
Vtx D_02035CB8_Global[] = {
#include "assets/levelGroup/Global/unk5/unk5.vtx.inc.c"
};
Mtx_f D_02035CF8_Global = {
#include "assets/levelGroup/Global/unk5/unk5.mtx.inc.c"
};
Gfx D_02035D38_Global[] = {
#include "assets/levelGroup/Global/unk5/unk5.gfx.inc.c"
};
Vec3f D_02035DA0_Global[] = {
#include "assets/levelGroup/Global/unk5/unk5.colV.inc.c"
};
Vec3s D_02035DD0_Global[] = {
#include "assets/levelGroup/Global/unk5/unk5.colT.inc.c"
};
Vec3f D_02035DE8_Global[] = {
#include "assets/levelGroup/Global/unk5/unk5.colS.inc.c"
};
CollisionData D_02035E00_Global[] = {
#include "assets/levelGroup/Global/unk5/unk5.colH.inc.c"
};
unsigned char D_02035E14_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo3.inc.c"
};
Vtx D_02035E18_Global[] = {
#include "assets/levelGroup/Global/unk6/unk6.vtx.inc.c"
};
Mtx_f D_02035E58_Global = {
#include "assets/levelGroup/Global/unk6/unk6.mtx.inc.c"
};
Gfx D_02035E98_Global[] = {
#include "assets/levelGroup/Global/unk6/unk6.gfx.inc.c"
};
Vec3f D_02035F00_Global[] = {
#include "assets/levelGroup/Global/unk6/unk6.colV.inc.c"
};
Vec3s D_02035F30_Global[] = {
#include "assets/levelGroup/Global/unk6/unk6.colT.inc.c"
};
Vec3f D_02035F48_Global[] = {
#include "assets/levelGroup/Global/unk6/unk6.colS.inc.c"
};
CollisionData D_02035F60_Global[] = {
#include "assets/levelGroup/Global/unk6/unk6.colH.inc.c"
};
unsigned char D_02035F74_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo4.inc.c"
};
Vtx D_02035F78_Global[] = {
#include "assets/levelGroup/Global/unk7/unk7.vtx.inc.c"
};
Mtx_f D_02035FB8_Global = {
#include "assets/levelGroup/Global/unk7/unk7.mtx.inc.c"
};
Gfx D_02035FF8_Global[] = {
#include "assets/levelGroup/Global/unk7/unk7.gfx.inc.c"
};
Vec3f D_02036060_Global[] = {
#include "assets/levelGroup/Global/unk7/unk7.colV.inc.c"
};
Vec3s D_02036090_Global[] = {
#include "assets/levelGroup/Global/unk7/unk7.colT.inc.c"
};
Vec3f D_020360A8_Global[] = {
#include "assets/levelGroup/Global/unk7/unk7.colS.inc.c"
};
CollisionData D_020360C0_Global[] = {
#include "assets/levelGroup/Global/unk7/unk7.colH.inc.c"
};
unsigned char D_020360D4_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo5.inc.c"
};
Vtx D_020360D8_Global[] = {
#include "assets/levelGroup/Global/unk8/unk8.vtx.inc.c"
};
Mtx_f D_02036178_Global = {
#include "assets/levelGroup/Global/unk8/unk8.mtx.inc.c"
};
Gfx D_020361B8_Global[] = {
#include "assets/levelGroup/Global/unk8/unk8.gfx.inc.c"
};
Vec3f D_02036380_Global[] = {
#include "assets/levelGroup/Global/unk8/unk8.colV.inc.c"
};
Vec3s D_020363C8_Global[] = {
#include "assets/levelGroup/Global/unk8/unk8.colT.inc.c"
};
Vec3f D_020363F8_Global[] = {
#include "assets/levelGroup/Global/unk8/unk8.colS.inc.c"
};
CollisionData D_02036410_Global[] = {
#include "assets/levelGroup/Global/unk8/unk8.colH.inc.c"
};
unsigned char D_02036424_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo6.inc.c"
};
Mtx_f D_02036428_Global = {
#include "assets/levelGroup/Global/unk9/unk9.mtx.inc.c"
};
Gfx D_02036468_Global[] = {
#include "assets/levelGroup/Global/unk9/unk9.gfx.inc.c"
};
Vec3f D_020365B8_Global[] = {
#include "assets/levelGroup/Global/unk9/unk9.colV.inc.c"
};
Vec3s D_0203660C_Global[] = {
#include "assets/levelGroup/Global/unk9/unk9.colT.inc.c"
};
Vec3f D_02036654_Global[] = {
#include "assets/levelGroup/Global/unk9/unk9.colS.inc.c"
};
CollisionData D_0203666C_Global[] = {
#include "assets/levelGroup/Global/unk9/unk9.colH.inc.c"
};
Vtx D_02036680_Global[] = {
#include "assets/levelGroup/Global/unkA/unkA.vtx.inc.c"
};
Mtx_f D_020367C0_Global = {
#include "assets/levelGroup/Global/unkA/unkA.mtx.inc.c"
};
Gfx D_02036800_Global[] = {
#include "assets/levelGroup/Global/unkA/unkA.gfx.inc.c"
};
Vec3f D_02036BE8_Global[] = {
#include "assets/levelGroup/Global/unkA/unkA.colV.inc.c"
};
Vec3s D_02036C48_Global[] = {
#include "assets/levelGroup/Global/unkA/unkA.colT.inc.c"
};
Vec3f D_02036CC0_Global[] = {
#include "assets/levelGroup/Global/unkA/unkA.colS.inc.c"
};
CollisionData D_02036CD8_Global[] = {
#include "assets/levelGroup/Global/unkA/unkA.colH.inc.c"
};
unsigned char D_02036CEC_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo7.inc.c"
};
Vtx D_02036CF0_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.vtx.inc.c"
};
Mtx_f D_02036E30_Global = {
#include "assets/levelGroup/Global/unkB/unkB.mtx.inc.c"
};
unsigned char Global_Pad195[] = FILEPAD;
unsigned char D_02036E78_Global[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB1.i4.png.inc.c"
};
unsigned char Global_Pad196[] = FILEPAD;
unsigned char D_02037280_Global[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB2.i4.png.inc.c"
};
Gfx D_02037300_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.gfx.inc.c"
};
Vec3f D_020375B8_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.colV.inc.c"
};
Vec3s D_02037618_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.colT.inc.c"
};
Vec3f D_02037690_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.colS.inc.c"
};
CollisionData D_020376A8_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.colH.inc.c"
};
unsigned char D_020376BC_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo8.inc.c"
};
Vtx D_020376C0_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.vtx.inc.c"
};
Mtx_f D_020377C0_Global = {
#include "assets/levelGroup/Global/unkC/unkC.mtx.inc.c"
};
unsigned char Global_Pad197[] = FILEPAD;
unsigned char D_02037808_Global[] = {
#include "build/include/assets/levelGroup/Global/unkC/unkC.i4.png.inc.c"
};
Gfx D_02037A08_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.gfx.inc.c"
};
Vec3f D_02037BC0_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.colV.inc.c"
};
Vec3s D_02037C20_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.colT.inc.c"
};
Vec3f D_02037C80_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.colS.inc.c"
};
CollisionData D_02037C98_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.colH.inc.c"
};
unsigned char D_02037CAC_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo9.inc.c"
};
Vtx D_02037CB0_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.vtx.inc.c"
};
Mtx_f D_02037DB0_Global = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.mtx.inc.c"
};
unsigned char Global_Pad198[] = FILEPAD;
unsigned char D_02037DF8_Global[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.png.inc.c"
};
unsigned char Global_Pad199[] = FILEPAD;
unsigned char D_02038000_Global[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.pal.inc.c"
};
Gfx D_02038200_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.gfx.inc.c"
};
Vec3f D_02038418_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colV.inc.c"
};
Vec3s D_02038478_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colT.inc.c"
};
Vec3f D_020384D8_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colS.inc.c"
};
CollisionData D_020384F0_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colH.inc.c"
};
unsigned char D_02038504_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo10.inc.c"
};
Vtx D_02038508_Global[] = {
#include "assets/levelGroup/Global/unkD/unkD.vtx.inc.c"
};
Mtx_f D_02038548_Global = {
#include "assets/levelGroup/Global/unkD/unkD.mtx.inc.c"
};
Gfx D_02038588_Global[] = {
#include "assets/levelGroup/Global/unkD/unkD.gfx.inc.c"
};
Vec3f D_02038690_Global[] = {
#include "assets/levelGroup/Global/unkD/unkD.colV.inc.c"
};
Vec3s D_020386C0_Global[] = {
#include "assets/levelGroup/Global/unkD/unkD.colT.inc.c"
};
Vec3f D_020386D8_Global[] = {
#include "assets/levelGroup/Global/unkD/unkD.colS.inc.c"
};
CollisionData D_020386F0_Global[] = {
#include "assets/levelGroup/Global/unkD/unkD.colH.inc.c"
};
unsigned char D_02038704_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo11.inc.c"
};
Vtx D_02038708_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.vtx.inc.c"
};
Mtx_f D_02038748_Global = {
#include "assets/levelGroup/Global/BLLava/BLLava.mtx.inc.c"
};
unsigned char Global_Pad200[] = FILEPAD;
unsigned char D_02038790_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.png.inc.c"
};
unsigned char Global_Pad201[] = FILEPAD;
unsigned char D_02038F98_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.pal.inc.c"
};
Gfx D_02039198_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.gfx.inc.c"
};
Vec3f D_020392A0_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colV.inc.c"
};
Vec3s D_020392D0_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colT.inc.c"
};
Vec3f D_020392E8_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colS.inc.c"
};
CollisionData D_02039300_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.colH.inc.c"
};
unsigned char D_02039314_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo12.inc.c"
};
Vtx D_02039318_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.vtx.inc.c"
};
Mtx_f D_02039358_Global = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.mtx.inc.c"
};
unsigned char Global_Pad202[] = FILEPAD;
unsigned char D_020393A0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.png.inc.c"
};
unsigned char Global_Pad203[] = FILEPAD;
unsigned char D_02039BA8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.pal.inc.c"
};
Gfx D_02039DA8_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.gfx.inc.c"
};
Vec3f D_02039EB0_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colV.inc.c"
};
Vec3s D_02039EE0_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colT.inc.c"
};
Vec3f D_02039EF8_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colS.inc.c"
};
CollisionData D_02039F10_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.colH.inc.c"
};
unsigned char D_02039F24_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo13.inc.c"
};
Vtx D_02039F28_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.vtx.inc.c"
};
Mtx_f D_02039F68_Global = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.mtx.inc.c"
};
unsigned char Global_Pad204[] = FILEPAD;
unsigned char D_02039FB0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.png.inc.c"
};
unsigned char Global_Pad205[] = FILEPAD;
unsigned char D_0203A7B8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.pal.inc.c"
};
Gfx D_0203A9B8_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.gfx.inc.c"
};
Vec3f D_0203AAC0_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colV.inc.c"
};
Vec3s D_0203AAF0_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colT.inc.c"
};
Vec3f D_0203AB08_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colS.inc.c"
};
CollisionData D_0203AB20_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.colH.inc.c"
};
unsigned char D_0203AB34_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo14.inc.c"
};
Vtx D_0203AB38_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.vtx.inc.c"
};
Mtx_f D_0203AB78_Global = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.mtx.inc.c"
};
unsigned char Global_Pad206[] = FILEPAD;
unsigned char D_0203ABC0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.png.inc.c"
};
unsigned char Global_Pad207[] = FILEPAD;
unsigned char D_0203B3C8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.pal.inc.c"
};
Gfx D_0203B5C8_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.gfx.inc.c"
};
Vec3f D_0203B6D0_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colV.inc.c"
};
Vec3s D_0203B700_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colT.inc.c"
};
Vec3f D_0203B718_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colS.inc.c"
};
CollisionData D_0203B730_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.colH.inc.c"
};
unsigned char D_0203B744_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo15.inc.c"
};
Vtx D_0203B748_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.vtx.inc.c"
};
Mtx_f D_0203B788_Global = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.mtx.inc.c"
};
unsigned char Global_Pad208[] = FILEPAD;
unsigned char D_0203B7D0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.png.inc.c"
};
unsigned char Global_Pad209[] = FILEPAD;
unsigned char D_0203BFD8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.pal.inc.c"
};
Gfx D_0203C1D8_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.gfx.inc.c"
};
Vec3f D_0203C2E0_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colV.inc.c"
};
Vec3s D_0203C310_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colT.inc.c"
};
Vec3f D_0203C328_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colS.inc.c"
};
CollisionData D_0203C340_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.colH.inc.c"
};
unsigned char D_0203C354_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo16.inc.c"
};
Vtx D_0203C358_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.vtx.inc.c"
};
Mtx_f D_0203C398_Global = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.mtx.inc.c"
};
unsigned char Global_Pad210[] = FILEPAD;
unsigned char D_0203C3E0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.png.inc.c"
};
unsigned char Global_Pad211[] = FILEPAD;
unsigned char D_0203CBE8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.pal.inc.c"
};
Gfx D_0203CDE8_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.gfx.inc.c"
};
Vec3f D_0203CEF0_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colV.inc.c"
};
Vec3s D_0203CF20_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colT.inc.c"
};
Vec3f D_0203CF38_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colS.inc.c"
};
CollisionData D_0203CF50_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.colH.inc.c"
};
unsigned char D_0203CF64_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo17.inc.c"
};
Vtx D_0203CF68_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.vtx.inc.c"
};
Mtx_f D_0203CFA8_Global = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.mtx.inc.c"
};
unsigned char Global_Pad212[] = FILEPAD;
unsigned char D_0203CFF0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.png.inc.c"
};
unsigned char Global_Pad213[] = FILEPAD;
unsigned char D_0203D7F8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.pal.inc.c"
};
Gfx D_0203D9F8_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.gfx.inc.c"
};
Vec3f D_0203DB00_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colV.inc.c"
};
Vec3s D_0203DB30_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colT.inc.c"
};
Vec3f D_0203DB48_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colS.inc.c"
};
CollisionData D_0203DB60_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.colH.inc.c"
};
unsigned char D_0203DB74_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo18.inc.c"
};
Vtx D_0203DB78_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.vtx.inc.c"
};
Mtx_f D_0203DBB8_Global = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.mtx.inc.c"
};
unsigned char Global_Pad214[] = FILEPAD;
unsigned char D_0203DC00_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.png.inc.c"
};
unsigned char Global_Pad215[] = FILEPAD;
unsigned char D_0203E408_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.pal.inc.c"
};
Gfx D_0203E608_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.gfx.inc.c"
};
Vec3f D_0203E710_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colV.inc.c"
};
Vec3s D_0203E740_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colT.inc.c"
};
Vec3f D_0203E758_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colS.inc.c"
};
CollisionData D_0203E770_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.colH.inc.c"
};
unsigned char D_0203E784_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo19.inc.c"
};
Vtx D_0203E788_Global[] = {
#include "assets/levelGroup/Global/unkE/unkE.vtx.inc.c"
};
Mtx_f D_0203E7C8_Global = {
#include "assets/levelGroup/Global/unkE/unkE.mtx.inc.c"
};
Gfx D_0203E808_Global[] = {
#include "assets/levelGroup/Global/unkE/unkE.gfx.inc.c"
};
Vec3f D_0203E8E0_Global[] = {
#include "assets/levelGroup/Global/unkE/unkE.colV.inc.c"
};
Vec3s D_0203E910_Global[] = {
#include "assets/levelGroup/Global/unkE/unkE.colT.inc.c"
};
Vec3f D_0203E928_Global[] = {
#include "assets/levelGroup/Global/unkE/unkE.colS.inc.c"
};
CollisionData D_0203E940_Global[] = {
#include "assets/levelGroup/Global/unkE/unkE.colH.inc.c"
};
unsigned char D_0203E954_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo20.inc.c"
};
Vtx D_0203E958_Global[] = {
#include "assets/levelGroup/Global/unkF/unkF.vtx.inc.c"
};
Mtx_f D_0203EA98_Global = {
#include "assets/levelGroup/Global/unkF/unkF.mtx.inc.c"
};
Gfx D_0203EAD8_Global[] = {
#include "assets/levelGroup/Global/unkF/unkF.gfx.inc.c"
};
Vec3f D_0203ED50_Global[] = {
#include "assets/levelGroup/Global/unkF/unkF.colV.inc.c"
};
Vec3s D_0203EDB0_Global[] = {
#include "assets/levelGroup/Global/unkF/unkF.colT.inc.c"
};
Vec3f D_0203EE28_Global[] = {
#include "assets/levelGroup/Global/unkF/unkF.colS.inc.c"
};
CollisionData D_0203EE40_Global[] = {
#include "assets/levelGroup/Global/unkF/unkF.colH.inc.c"
};
unsigned char D_0203EE54_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo21.inc.c"
};
Vtx D_0203EE58_Global[] = {
#include "assets/levelGroup/Global/unk10/unk10.vtx.inc.c"
};
Mtx_f D_0203EEF8_Global = {
#include "assets/levelGroup/Global/unk10/unk10.mtx.inc.c"
};
Gfx D_0203EF38_Global[] = {
#include "assets/levelGroup/Global/unk10/unk10.gfx.inc.c"
};
Vec3f D_0203F130_Global[] = {
#include "assets/levelGroup/Global/unk10/unk10.colV.inc.c"
};
Vec3s D_0203F178_Global[] = {
#include "assets/levelGroup/Global/unk10/unk10.colT.inc.c"
};
Vec3f D_0203F1A8_Global[] = {
#include "assets/levelGroup/Global/unk10/unk10.colS.inc.c"
};
CollisionData D_0203F1C0_Global[] = {
#include "assets/levelGroup/Global/unk10/unk10.colH.inc.c"
};
unsigned char D_0203F1D4_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo22.inc.c"
};
Vtx D_0203F1D8_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.vtx.inc.c"
};
Mtx_f D_0203F2D8_Global = {
#include "assets/levelGroup/Global/Door1/Door1.mtx.inc.c"
};
unsigned char Global_Pad216[] = FILEPAD;
unsigned char D_0203F320_Global[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.png.inc.c"
};
unsigned char Global_Pad217[] = FILEPAD;
unsigned char D_0203FB28_Global[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.pal.inc.c"
};
Gfx D_0203FD28_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.gfx.inc.c"
};
Vec3f D_0203FF40_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.colV.inc.c"
};
Vec3s D_0203FFA0_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.colT.inc.c"
};
Vec3f D_02040000_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.colS.inc.c"
};
CollisionData D_02040018_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.colH.inc.c"
};
unsigned char D_0204002C_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo23.inc.c"
};
Vtx D_02040030_Global[] = {
#include "assets/levelGroup/Global/unk12/unk12.vtx.inc.c"
};
Mtx_f D_020400D0_Global = {
#include "assets/levelGroup/Global/unk12/unk12.mtx.inc.c"
};
Gfx D_02040110_Global[] = {
#include "assets/levelGroup/Global/unk12/unk12.gfx.inc.c"
};
Vec3f D_02040308_Global[] = {
#include "assets/levelGroup/Global/unk12/unk12.colV.inc.c"
};
Vec3s D_02040350_Global[] = {
#include "assets/levelGroup/Global/unk12/unk12.colT.inc.c"
};
Vec3f D_02040380_Global[] = {
#include "assets/levelGroup/Global/unk12/unk12.colS.inc.c"
};
CollisionData D_02040398_Global[] = {
#include "assets/levelGroup/Global/unk12/unk12.colH.inc.c"
};
unsigned char D_020403AC_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo24.inc.c"
};
Vtx D_020403B0_Global[] = {
#include "assets/levelGroup/Global/unk13/unk13.vtx.inc.c"
};
Mtx_f D_020403F0_Global = {
#include "assets/levelGroup/Global/unk13/unk13.mtx.inc.c"
};
Gfx D_02040430_Global[] = {
#include "assets/levelGroup/Global/unk13/unk13.gfx.inc.c"
};
Vec3f D_02040498_Global[] = {
#include "assets/levelGroup/Global/unk13/unk13.colV.inc.c"
};
Vec3s D_020404C8_Global[] = {
#include "assets/levelGroup/Global/unk13/unk13.colT.inc.c"
};
Vec3f D_020404E0_Global[] = {
#include "assets/levelGroup/Global/unk13/unk13.colS.inc.c"
};
CollisionData D_020404F8_Global[] = {
#include "assets/levelGroup/Global/unk13/unk13.colH.inc.c"
};
unsigned char D_0204050C_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo25.inc.c"
};
Vtx D_02040510_Global[] = {
#include "assets/levelGroup/Global/unk14/unk14.vtx.inc.c"
};
Mtx_f D_02040550_Global = {
#include "assets/levelGroup/Global/unk14/unk14.mtx.inc.c"
};
Gfx D_02040590_Global[] = {
#include "assets/levelGroup/Global/unk14/unk14.gfx.inc.c"
};
Vec3f D_020405F8_Global[] = {
#include "assets/levelGroup/Global/unk14/unk14.colV.inc.c"
};
Vec3s D_02040628_Global[] = {
#include "assets/levelGroup/Global/unk14/unk14.colT.inc.c"
};
Vec3f D_02040640_Global[] = {
#include "assets/levelGroup/Global/unk14/unk14.colS.inc.c"
};
CollisionData D_02040658_Global[] = {
#include "assets/levelGroup/Global/unk14/unk14.colH.inc.c"
};
unsigned char D_0204066C_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo26.inc.c"
};
Vtx D_02040670_Global[] = {
#include "assets/levelGroup/Global/unk15/unk15.vtx.inc.c"
};
Mtx_f D_02040710_Global = {
#include "assets/levelGroup/Global/unk15/unk15.mtx.inc.c"
};
Gfx D_02040750_Global[] = {
#include "assets/levelGroup/Global/unk15/unk15.gfx.inc.c"
};
Vec3f D_02040948_Global[] = {
#include "assets/levelGroup/Global/unk15/unk15.colV.inc.c"
};
Vec3s D_02040990_Global[] = {
#include "assets/levelGroup/Global/unk15/unk15.colT.inc.c"
};
Vec3f D_020409C0_Global[] = {
#include "assets/levelGroup/Global/unk15/unk15.colS.inc.c"
};
CollisionData D_020409D8_Global[] = {
#include "assets/levelGroup/Global/unk15/unk15.colH.inc.c"
};
unsigned char D_020409EC_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo27.inc.c"
};
Vtx D_020409F0_Global[] = {
#include "assets/levelGroup/Global/unk16/unk16.vtx.inc.c"
};
Mtx_f D_02040A90_Global = {
#include "assets/levelGroup/Global/unk16/unk16.mtx.inc.c"
};
Gfx D_02040AD0_Global[] = {
#include "assets/levelGroup/Global/unk16/unk16.gfx.inc.c"
};
Vec3f D_02040CC8_Global[] = {
#include "assets/levelGroup/Global/unk16/unk16.colV.inc.c"
};
Vec3s D_02040D10_Global[] = {
#include "assets/levelGroup/Global/unk16/unk16.colT.inc.c"
};
Vec3f D_02040D40_Global[] = {
#include "assets/levelGroup/Global/unk16/unk16.colS.inc.c"
};
CollisionData D_02040D58_Global[] = {
#include "assets/levelGroup/Global/unk16/unk16.colH.inc.c"
};
unsigned char D_02040D6C_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo28.inc.c"
};
Vtx D_02040D70_Global[] = {
#include "assets/levelGroup/Global/unk17/unk17.vtx.inc.c"
};
Mtx_f D_02040EF0_Global = {
#include "assets/levelGroup/Global/unk17/unk17.mtx.inc.c"
};
Gfx D_02040F30_Global[] = {
#include "assets/levelGroup/Global/unk17/unk17.gfx.inc.c"
};
Vec3f D_020411D8_Global[] = {
#include "assets/levelGroup/Global/unk17/unk17.colV.inc.c"
};
Vec3s D_02041268_Global[] = {
#include "assets/levelGroup/Global/unk17/unk17.colT.inc.c"
};
Vec3f D_02041328_Global[] = {
#include "assets/levelGroup/Global/unk17/unk17.colS.inc.c"
};
CollisionData D_02041340_Global[] = {
#include "assets/levelGroup/Global/unk17/unk17.colH.inc.c"
};
unsigned char D_02041354_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo29.inc.c"
};
Vtx D_02041358_Global[] = {
#include "assets/levelGroup/Global/unk18/unk18.vtx.inc.c"
};
Mtx_f D_020413F8_Global = {
#include "assets/levelGroup/Global/unk18/unk18.mtx.inc.c"
};
Gfx D_02041438_Global[] = {
#include "assets/levelGroup/Global/unk18/unk18.gfx.inc.c"
};
Vec3f D_02041630_Global[] = {
#include "assets/levelGroup/Global/unk18/unk18.colV.inc.c"
};
Vec3s D_02041678_Global[] = {
#include "assets/levelGroup/Global/unk18/unk18.colT.inc.c"
};
Vec3f D_020416A8_Global[] = {
#include "assets/levelGroup/Global/unk18/unk18.colS.inc.c"
};
CollisionData D_020416C0_Global[] = {
#include "assets/levelGroup/Global/unk18/unk18.colH.inc.c"
};
unsigned char D_020416D4_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo30.inc.c"
};
Vtx D_020416D8_Global[] = {
#include "assets/levelGroup/Global/unk19/unk19.vtx.inc.c"
};
Mtx_f D_02041778_Global = {
#include "assets/levelGroup/Global/unk19/unk19.mtx.inc.c"
};
Gfx D_020417B8_Global[] = {
#include "assets/levelGroup/Global/unk19/unk19.gfx.inc.c"
};
Vec3f D_020419B0_Global[] = {
#include "assets/levelGroup/Global/unk19/unk19.colV.inc.c"
};
Vec3s D_020419F8_Global[] = {
#include "assets/levelGroup/Global/unk19/unk19.colT.inc.c"
};
Vec3f D_02041A28_Global[] = {
#include "assets/levelGroup/Global/unk19/unk19.colS.inc.c"
};
CollisionData D_02041A40_Global[] = {
#include "assets/levelGroup/Global/unk19/unk19.colH.inc.c"
};
unsigned char D_02041A54_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo31.inc.c"
};
Vtx D_02041A58_Global[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.vtx.inc.c"
};
Mtx_f D_02041AF8_Global = {
#include "assets/levelGroup/Global/unk1A/unk1A.mtx.inc.c"
};
Gfx D_02041B38_Global[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.gfx.inc.c"
};
Vec3f D_02041D30_Global[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colV.inc.c"
};
Vec3s D_02041D78_Global[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colT.inc.c"
};
Vec3f D_02041DA8_Global[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colS.inc.c"
};
CollisionData D_02041DC0_Global[] = {
#include "assets/levelGroup/Global/unk1A/unk1A.colH.inc.c"
};
unsigned char D_02041DD4_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo32.inc.c"
};
Vtx D_02041DD8_Global[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.vtx.inc.c"
};
Mtx_f D_02041E78_Global = {
#include "assets/levelGroup/Global/unk1B/unk1B.mtx.inc.c"
};
Gfx D_02041EB8_Global[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.gfx.inc.c"
};
Vec3f D_020420B0_Global[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colV.inc.c"
};
Vec3s D_020420F8_Global[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colT.inc.c"
};
Vec3f D_02042128_Global[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colS.inc.c"
};
CollisionData D_02042140_Global[] = {
#include "assets/levelGroup/Global/unk1B/unk1B.colH.inc.c"
};
unsigned char D_02042154_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo33.inc.c"
};
Vtx D_02042158_Global[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.vtx.inc.c"
};
Mtx_f D_020422B8_Global = {
#include "assets/levelGroup/Global/unk1C/unk1C.mtx.inc.c"
};
Gfx D_020422F8_Global[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.gfx.inc.c"
};
Vec3f D_02042590_Global[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colV.inc.c"
};
Vec3s D_02042620_Global[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colT.inc.c"
};
Vec3f D_020426E0_Global[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colS.inc.c"
};
CollisionData D_020426F8_Global[] = {
#include "assets/levelGroup/Global/unk1C/unk1C.colH.inc.c"
};
unsigned char D_0204270C_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo34.inc.c"
};
Vtx D_02042710_Global[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.vtx.inc.c"
};
Mtx_f D_02042850_Global = {
#include "assets/levelGroup/Global/unk1D/unk1D.mtx.inc.c"
};
Gfx D_02042890_Global[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.gfx.inc.c"
};
Vec3f D_02042AC8_Global[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colV.inc.c"
};
Vec3s D_02042B58_Global[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colT.inc.c"
};
Vec3f D_02042BE8_Global[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colS.inc.c"
};
CollisionData D_02042C00_Global[] = {
#include "assets/levelGroup/Global/unk1D/unk1D.colH.inc.c"
};
unsigned char D_02042C14_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo35.inc.c"
};
Vtx D_02042C18_Global[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.vtx.inc.c"
};
Mtx_f D_02042D18_Global = {
#include "assets/levelGroup/Global/unk1E/unk1E.mtx.inc.c"
};
Gfx D_02042D58_Global[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.gfx.inc.c"
};
Vec3f D_02042F70_Global[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colV.inc.c"
};
Vec3s D_02042FD0_Global[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colT.inc.c"
};
Vec3f D_02043030_Global[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colS.inc.c"
};
CollisionData D_02043048_Global[] = {
#include "assets/levelGroup/Global/unk1E/unk1E.colH.inc.c"
};
unsigned char D_0204305C_Global[] = {
#include "build/include/assets/levelGroup/Global/zeroooo36.inc.c"
};
