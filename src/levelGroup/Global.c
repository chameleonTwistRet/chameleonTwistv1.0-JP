#include "common.h"
extern unsigned char D_02028D30_Global[]; // pole palette
extern unsigned char D_02028528_Global[]; // pole img
extern Vtx D_800FE7D8_Global[];
extern Vtx D_800FE8C8_Global[];

#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny


Mtx_f Global_globalScope_Mtx = {
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
unsigned char D_02000288_Global[] = FILEPAD;
unsigned char D_02000290_Global[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonHole.rgba16.png.inc.c"
};
unsigned char D_02000A90_Global[] = FILEPAD;
unsigned char D_02000A98_Global[] = {
#include "build/include/assets/levelGroup/Global/cannon/cannonBarrel.rgba16.png.inc.c"
};
unsigned char D_02001A98_Global[] = FILEPAD;
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
unsigned char D_02002A68_Global[] = FILEPAD;
unsigned char D_02002A70_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/woodWithBolt.rgba16.png.inc.c"
};
unsigned char D_02003270_Global[] = FILEPAD;
unsigned char D_02003278_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWoodWithBolt.rgba16.png.inc.c"
};
unsigned char D_02003A78_Global[] = FILEPAD;
unsigned char D_02003A80_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/darkWood.rgba16.png.inc.c"
};
unsigned char D_02004280_Global[] = FILEPAD;
unsigned char D_02004288_Global[] = {
#include "build/include/assets/levelGroup/Global/unkWood/lightWood.rgba16.png.inc.c"
};
unsigned char D_02004A88_Global[] = FILEPAD;
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
unsigned char D_02006340_Global[] = FILEPAD;
unsigned char D_02006348_Global[] = {
#include "build/include/assets/levelGroup/Global/unk40/shadow.ia8.png.inc.c"
};
Gfx D_02006988_Global[] = {
#include "assets/levelGroup/Global/unk40/unk40.gfx.inc.c"
};
Gfx D_02006A48_Global[] = {
#include "assets/levelGroup/Global/unk40/unk402.gfx.inc.c"
};
/*Vec3f fuck[] = {
    {19.0, 190.0, 19.0},
    {19.0, 0.0, -19.0},
    {19.0, 0.0, 19.0},
    {-19.0, 190.0, -19.0},
    {-19.0, 0.0, 19.0},
    {-19.0, 0.0, -19.0},
    {-19.0, 0.0, 19.0},
    {-19.0, 190.0, -19.0},
    {-19.0, 190.0, 19.0},
    {19.0, 0.0, -19.0},
    {19.0, 190.0, 19.0},
    {19.0, 190.0, -19.0},
    {-19.0, 190.0, -19.0},
    {19.0, 190.0, 19.0},
    {-19.0, 190.0, 19.0},
    {19.0, 190.0, 19.0},
    {-19.0, 190.0, -19.0},
    {19.0, 190.0, -19.0},
    {-19.0, 190.0, 19.0},
    {19.0, 0.0, 19.0},
    {-19.0, 0.0, 19.0},
    {19.0, 190.0, -19.0},
    {-19.0, 0.0, -19.0},
    {19.0, 0.0, -19.0},
    {-19.0, 0.0, -19.0},
    {19.0, 190.0, -19.0},
    {-19.0, 190.0, -19.0},
    {19.0, 0.0, 19.0},
    {-19.0, 190.0, 19.0},
    {19.0, 190.0, 19.0},
};
Vec3s you[] = {
    {2, 1, 0},
    {5, 4, 3},
    {8, 7, 6},
    {11, 10, 9},
    {14, 13, 12},
    {17, 16, 15},
    {20, 19, 18},
    {23, 22, 21},
    {26, 25, 24},
    {29, 28, 27},
};
CollisionData collisionFailure = {
    {-19, 0, -19},
    {19, 190, 19},
    30, 10,
    0x02006B08, 0x02006C70, 0x02006CE8
};*/
unsigned char D_02006B08_Global[] = {
#include "build/include/assets/levelGroup/Global/unk40/unk40.col.inc.c"
};
unsigned char D_02006F78_Global[] = FILEPAD;
unsigned char D_02006F80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.png.inc.c"
};
unsigned char D_02007180_Global[] = FILEPAD;
unsigned char D_02007188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brownBrickWall.ci4.pal.inc.c"
};
unsigned char D_02007388_Global[] = FILEPAD;
unsigned char D_02007390_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.png.inc.c"
};
unsigned char D_02007B90_Global[] = FILEPAD;
unsigned char D_02007B98_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandAgain.ci4.pal.inc.c"
};
unsigned char D_02007D98_Global[] = FILEPAD;
unsigned char D_02007DA0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gravel.i4.png.inc.c"
};
unsigned char D_020085A0_Global[] = FILEPAD;
unsigned char D_020085A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/wall.i4.png.inc.c"
};
unsigned char D_020087A8_Global[] = FILEPAD;
unsigned char D_020087B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gateGray.ia4.png.inc.c"
};
unsigned char D_020089B0_Global[] = FILEPAD;
unsigned char D_020089B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloor.i4.png.inc.c"
};
unsigned char D_020091B8_Global[] = FILEPAD;
unsigned char D_020091C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloor.ci4.png.inc.c"
};
unsigned char D_020099C0_Global[] = FILEPAD;
unsigned char D_020099C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcRockFloor.ci4.pal.inc.c"
};
unsigned char D_02009BC8_Global[] = FILEPAD;
unsigned char D_02009BD0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/smallBrickWall.i4.png.inc.c"
};
unsigned char D_02009D50_Global[] = FILEPAD;
unsigned char D_02009D58_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.png.inc.c"
};
unsigned char D_02009F58_Global[] = FILEPAD;
unsigned char D_02009F60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWoodTopper.ci4.pal.inc.c"
};
unsigned char D_0200A160_Global[] = FILEPAD;
unsigned char D_0200A168_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.png.inc.c"
};
unsigned char D_0200A568_Global[] = FILEPAD;
unsigned char D_0200A570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/longWood.ci4.pal.inc.c"
};
unsigned char D_0200A770_Global[] = FILEPAD;
unsigned char D_0200A778_Global[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.png.inc.c"
};
unsigned char D_0200AF78_Global[] = FILEPAD;
unsigned char D_0200AF80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/yellowBrickWall.ci4.pal.inc.c"
};
unsigned char D_0200B180_Global[] = FILEPAD;
unsigned char D_0200B188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall2.i4.png.inc.c"
};
unsigned char D_0200B988_Global[] = FILEPAD;
unsigned char D_0200B990_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigBrickWall.i4.png.inc.c"
};
unsigned char D_0200C190_Global[] = FILEPAD;
unsigned char D_0200C198_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.png.inc.c"
};
unsigned char D_0200C398_Global[] = FILEPAD;
unsigned char D_0200C3A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waterKinda.ci4.pal.inc.c"
};
unsigned char D_0200C5A0_Global[] = FILEPAD;
unsigned char D_0200C5A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.png.inc.c"
};
unsigned char D_0200C7A8_Global[] = FILEPAD;
unsigned char D_0200C7B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall2.ci4.pal.inc.c"
};
unsigned char D_0200C9B0_Global[] = FILEPAD;
unsigned char D_0200C9B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/unk12.i4.png.inc.c"
};
unsigned char D_0200CBB8_Global[] = FILEPAD;
unsigned char D_0200CBC0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.png.inc.c"
};
unsigned char D_0200CC40_Global[] = FILEPAD;
unsigned char D_0200CC48_Global[] = {
#include "build/include/assets/levelGroup/Global/img/goldStrip.ci4.pal.inc.c"
};
unsigned char D_0200CE48_Global[] = FILEPAD;
unsigned char D_0200CE50_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural4.i4.png.inc.c"
};
unsigned char D_0200D650_Global[] = FILEPAD;
unsigned char D_0200D658_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural3.i4.png.inc.c"
};
unsigned char D_0200DE58_Global[] = FILEPAD;
unsigned char D_0200DE60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural2.i4.png.inc.c"
};
unsigned char D_0200E660_Global[] = FILEPAD;
unsigned char D_0200E668_Global[] = {
#include "build/include/assets/levelGroup/Global/img/antMural1.i4.png.inc.c"
};
unsigned char D_02010668_Global[] = FILEPAD;
unsigned char D_02010670_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brickWall.i4.png.inc.c"
};
unsigned char D_02010870_Global[] = FILEPAD;
unsigned char D_02010878_Global[] = {
#include "build/include/assets/levelGroup/Global/img/strip2.i4.png.inc.c"
};
unsigned char D_020108F8_Global[] = FILEPAD;
unsigned char D_02010900_Global[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.png.inc.c"
};
unsigned char D_02011100_Global[] = FILEPAD;
unsigned char D_02011108_Global[] = {
#include "build/include/assets/levelGroup/Global/img/lavaSolid.ci4.pal.inc.c"
};
unsigned char D_02011308_Global[] = FILEPAD;
unsigned char D_02011310_Global[] = {
#include "build/include/assets/levelGroup/Global/img/fraMEd.ia4.png.inc.c"
};
unsigned char D_02011B10_Global[] = FILEPAD;
unsigned char D_02011B18_Global[] = {
#include "build/include/assets/levelGroup/Global/img/squares.i4.png.inc.c"
};
unsigned char D_02011D18_Global[] = FILEPAD;
unsigned char D_02011D20_Global[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlate.i4.png.inc.c"
};
unsigned char D_02011F20_Global[] = FILEPAD;
unsigned char D_02011F28_Global[] = {
#include "build/include/assets/levelGroup/Global/img/factoryPlates.i4.png.inc.c"
};
unsigned char D_02012728_Global[] = FILEPAD;
unsigned char D_02012730_Global[] = {
#include "build/include/assets/levelGroup/Global/img/steelPlate.i4.png.inc.c"
};
unsigned char D_02012F30_Global[] = FILEPAD;
unsigned char D_02012F38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/metalPlates.i4.png.inc.c"
};
unsigned char D_02013738_Global[] = FILEPAD;
unsigned char D_02013740_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ballGround.i4.png.inc.c"
};
unsigned char D_02013940_Global[] = FILEPAD;
unsigned char D_02013948_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cube.i4.png.inc.c"
};
unsigned char D_02014148_Global[] = FILEPAD;
unsigned char D_02014150_Global[] = {
#include "build/include/assets/levelGroup/Global/img/hexComb.i4.png.inc.c"
};
unsigned char D_02014350_Global[] = FILEPAD;
unsigned char D_02014358_Global[] = {
#include "build/include/assets/levelGroup/Global/img/hexCombFade.i8.png.inc.c"
};
unsigned char D_02014B58_Global[] = FILEPAD;
unsigned char D_02014B60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/brokenCube.i4.png.inc.c"
};
unsigned char D_02015360_Global[] = FILEPAD;
unsigned char D_02015368_Global[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.png.inc.c"
};
unsigned char D_02015568_Global[] = FILEPAD;
unsigned char D_02015570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/klTILE.ci4.pal.inc.c"
};
unsigned char D_02015770_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.png.inc.c"
};
unsigned char D_02015B70_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gateCompressed.ci8.pal.inc.c"
};
unsigned char D_02015D70_Global[] = FILEPAD;
unsigned char D_02015D78_Global[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.png.inc.c"
};
unsigned char D_02015DF8_Global[] = FILEPAD;
unsigned char D_02015E00_Global[] = {
#include "build/include/assets/levelGroup/Global/img/strip.ci4.pal.inc.c"
};
unsigned char D_02016000_Global[] = FILEPAD;
unsigned char D_02016008_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.png.inc.c"
};
unsigned char D_02016208_Global[] = FILEPAD;
unsigned char D_02016210_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKidsLabel.ci4.pal.inc.c"
};
unsigned char D_02016410_Global[] = FILEPAD;
unsigned char D_02016418_Global[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.png.inc.c"
};
unsigned char D_02016618_Global[] = FILEPAD;
unsigned char D_02016620_Global[] = {
#include "build/include/assets/levelGroup/Global/img/justBlack.ci4.pal.inc.c"
};
unsigned char D_02016820_Global[] = FILEPAD;
unsigned char D_02016828_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.png.inc.c"
};
unsigned char D_02016A28_Global[] = FILEPAD;
unsigned char D_02016A30_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cracker.ci4.pal.inc.c"
};
unsigned char D_02016C30_Global[] = FILEPAD;
unsigned char D_02016C38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.png.inc.c"
};
unsigned char D_02016E38_Global[] = FILEPAD;
unsigned char D_02016E40_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLThing1.ci4.pal.inc.c"
};
unsigned char D_02017040_Global[] = FILEPAD;
unsigned char D_02017048_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.png.inc.c"
};
unsigned char D_02017848_Global[] = FILEPAD;
unsigned char D_02017850_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor3.ci4.pal.inc.c"
};
unsigned char D_02017A50_Global[] = FILEPAD;
unsigned char D_02017A58_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.png.inc.c"
};
unsigned char D_02018258_Global[] = FILEPAD;
unsigned char D_02018260_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor2.ci4.pal.inc.c"
};
unsigned char D_02018460_Global[] = FILEPAD;
unsigned char D_02018468_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.png.inc.c"
};
unsigned char D_02018668_Global[] = FILEPAD;
unsigned char D_02018670_Global[] = {
#include "build/include/assets/levelGroup/Global/img/waferSide.ci4.pal.inc.c"
};
unsigned char D_02018870_Global[] = FILEPAD;
unsigned char D_02018878_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.png.inc.c"
};
unsigned char D_02019078_Global[] = FILEPAD;
unsigned char D_02019080_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chocoKIDS.ci8.pal.inc.c"
};
unsigned char D_02019280_Global[] = FILEPAD;
unsigned char D_02019288_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.png.inc.c"
};
unsigned char D_02019488_Global[] = FILEPAD;
unsigned char D_02019490_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandwSide.ci4.pal.inc.c"
};
unsigned char D_02019690_Global[] = FILEPAD;
unsigned char D_02019698_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.png.inc.c"
};
unsigned char D_02019898_Global[] = FILEPAD;
unsigned char D_020198A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftSide.ci4.pal.inc.c"
};
unsigned char D_02019AA0_Global[] = FILEPAD;
unsigned char D_02019AA8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.png.inc.c"
};
unsigned char D_02019CA8_Global[] = FILEPAD;
unsigned char D_02019CB0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/giftTop.ci4.pal.inc.c"
};
unsigned char D_02019EB0_Global[] = FILEPAD;
unsigned char D_02019EB8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.png.inc.c"
};
unsigned char D_0201A2B8_Global[] = FILEPAD;
unsigned char D_0201A2C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrickFade.ci8.pal.inc.c"
};
unsigned char D_0201A4C0_Global[] = FILEPAD;
unsigned char D_0201A4C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.png.inc.c"
};
unsigned char D_0201A8C8_Global[] = FILEPAD;
unsigned char D_0201A8D0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/rainbow.ci8.pal.inc.c"
};
unsigned char D_0201AAD0_Global[] = FILEPAD;
unsigned char D_0201AAD8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.png.inc.c"
};
unsigned char D_0201ACD8_Global[] = FILEPAD;
unsigned char D_0201ACE0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueBrick.ci4.pal.inc.c"
};
unsigned char D_0201AEE0_Global[] = FILEPAD;
unsigned char D_0201AEE8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.png.inc.c"
};
unsigned char D_0201B0E8_Global[] = FILEPAD;
unsigned char D_0201B0F0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeBrick.ci4.pal.inc.c"
};
unsigned char D_0201B2F0_Global[] = FILEPAD;
unsigned char D_0201B2F8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.png.inc.c"
};
unsigned char D_0201B4F8_Global[] = FILEPAD;
unsigned char D_0201B500_Global[] = {
#include "build/include/assets/levelGroup/Global/img/orangeLego.ci4.pal.inc.c"
};
unsigned char D_0201B700_Global[] = FILEPAD;
unsigned char D_0201B708_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.png.inc.c"
};
unsigned char D_0201B908_Global[] = FILEPAD;
unsigned char D_0201B910_Global[] = {
#include "build/include/assets/levelGroup/Global/img/blueLego.ci4.pal.inc.c"
};
unsigned char D_0201BB10_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.png.inc.c"
};
unsigned char D_0201BF10_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeChroma.ci8.pal.inc.c"
};
unsigned char D_0201C110_Global[] = FILEPAD;
unsigned char D_0201C118_Global[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.png.inc.c"
};
unsigned char D_0201C918_Global[] = FILEPAD;
unsigned char D_0201C920_Global[] = {
#include "build/include/assets/levelGroup/Global/img/pebbles.ci4.pal.inc.c"
};
unsigned char D_0201CB20_Global[] = FILEPAD;
unsigned char D_0201CB28_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chain2.rgba16.png.inc.c"
};
unsigned char D_0201D328_Global[] = FILEPAD;
unsigned char D_0201D330_Global[] = {
#include "build/include/assets/levelGroup/Global/img/chain1.rgba16.png.inc.c"
};
unsigned char D_0201DB30_Global[] = FILEPAD;
unsigned char D_0201DB38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.png.inc.c"
};
unsigned char D_0201DD38_Global[] = FILEPAD;
unsigned char D_0201DD40_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSmallTiles.ci4.pal.inc.c"
};
unsigned char D_0201DF40_Global[] = FILEPAD;
unsigned char D_0201DF48_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.png.inc.c"
};
unsigned char D_0201E748_Global[] = FILEPAD;
unsigned char D_0201E750_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandFloor.ci4.pal.inc.c"
};
unsigned char D_0201E950_Global[] = FILEPAD;
unsigned char D_0201E958_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.png.inc.c"
};
unsigned char D_0201F158_Global[] = FILEPAD;
unsigned char D_0201F160_Global[] = {
#include "build/include/assets/levelGroup/Global/img/dcTHING2.ci4.pal.inc.c"
};
unsigned char D_0201F360_Global[] = FILEPAD;
unsigned char D_0201F368_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.png.inc.c"
};
unsigned char D_0201FB68_Global[] = FILEPAD;
unsigned char D_0201FB70_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText3.ci4.pal.inc.c"
};
unsigned char D_0201FD70_Global[] = FILEPAD;
unsigned char D_0201FD78_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.png.inc.c"
};
unsigned char D_02020578_Global[] = FILEPAD;
unsigned char D_02020580_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCBricks.ci4.pal.inc.c"
};
unsigned char D_02020780_Global[] = FILEPAD;
unsigned char D_02020788_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.png.inc.c"
};
unsigned char D_02020F88_Global[] = FILEPAD;
unsigned char D_02020F90_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor2.ci4.pal.inc.c"
};
unsigned char D_02021190_Global[] = FILEPAD;
unsigned char D_02021198_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.png.inc.c"
};
unsigned char D_02021398_Global[] = FILEPAD;
unsigned char D_020213A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall3.ci4.pal.inc.c"
};
unsigned char D_020215A0_Global[] = FILEPAD;
unsigned char D_020215A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.png.inc.c"
};
unsigned char D_02021628_Global[] = FILEPAD;
unsigned char D_02021630_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall2.ci4.pal.inc.c"
};
unsigned char D_02021830_Global[] = FILEPAD;
unsigned char D_02021838_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.png.inc.c"
};
unsigned char D_02021938_Global[] = FILEPAD;
unsigned char D_02021940_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCWall1.ci4.pal.inc.c"
};
unsigned char D_02021B40_Global[] = FILEPAD;
unsigned char D_02021B48_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.png.inc.c"
};
unsigned char D_02021D48_Global[] = FILEPAD;
unsigned char D_02021D50_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing3.ci4.pal.inc.c"
};
unsigned char D_02021F50_Global[] = FILEPAD;
unsigned char D_02021F58_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.png.inc.c"
};
unsigned char D_02022158_Global[] = FILEPAD;
unsigned char D_02022160_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing2.ci4.pal.inc.c"
};
unsigned char D_02022360_Global[] = FILEPAD;
unsigned char D_02022368_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.png.inc.c"
};
unsigned char D_02022568_Global[] = FILEPAD;
unsigned char D_02022570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCThing1.ci4.pal.inc.c"
};
unsigned char D_02022770_Global[] = FILEPAD;
unsigned char D_02022778_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.png.inc.c"
};
unsigned char D_02022F78_Global[] = FILEPAD;
unsigned char D_02022F80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.pal.inc.c"
};
unsigned char D_02023180_Global[] = FILEPAD;
unsigned char D_02023188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.png.inc.c"
};
unsigned char D_02023388_Global[] = FILEPAD;
unsigned char D_02023390_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCThing1.ci4.pal.inc.c"
};
unsigned char D_02023590_Global[] = FILEPAD;
unsigned char D_02023598_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.png.inc.c"
};
unsigned char D_02023D98_Global[] = FILEPAD;
unsigned char D_02023DA0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCTiles.ci4.pal.inc.c"
};
unsigned char D_02023FA0_Global[] = FILEPAD;
unsigned char D_02023FA8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.png.inc.c"
};
unsigned char D_020247A8_Global[] = FILEPAD;
unsigned char D_020247B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/DCFloor.ci4.pal.inc.c"
};
unsigned char D_020249B0_Global[] = FILEPAD;
unsigned char D_020249B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/rope.rgba16.png.inc.c"
};
unsigned char D_020251B8_Global[] = FILEPAD;
unsigned char D_020251C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.png.inc.c"
};
unsigned char D_020252C0_Global[] = FILEPAD;
unsigned char D_020252C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/ropeConnector.ci4.pal.inc.c"
};
unsigned char D_020254C8_Global[] = FILEPAD;
unsigned char D_020254D0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.png.inc.c"
};
unsigned char D_020258D0_Global[] = FILEPAD;
unsigned char D_020258D8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/bigLog.ci4.pal.inc.c"
};
unsigned char D_02025AD8_Global[] = FILEPAD;
unsigned char D_02025AE0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.png.inc.c"
};
unsigned char D_02025CE0_Global[] = FILEPAD;
unsigned char D_02025CE8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sander.ci4.pal.inc.c"
};
unsigned char D_02025EE8_Global[] = FILEPAD;
unsigned char D_02025EF0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.png.inc.c"
};
unsigned char D_020266F0_Global[] = FILEPAD;
unsigned char D_020266F8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jllogTop.ci4.pal.inc.c"
};
unsigned char D_020268F8_Global[] = FILEPAD;
unsigned char D_02026900_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.png.inc.c"
};
unsigned char D_02027100_Global[] = FILEPAD;
unsigned char D_02027108_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlLog.ci4.pal.inc.c"
};
unsigned char D_02027308_Global[] = FILEPAD;
unsigned char D_02027310_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.png.inc.c"
};
unsigned char D_02027B10_Global[] = FILEPAD;
unsigned char D_02027B18_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText1.ci4.pal.inc.c"
};
unsigned char D_02027D18_Global[] = FILEPAD;
unsigned char D_02027D20_Global[] = {
#include "build/include/assets/levelGroup/Global/img/gate.rgba16.png.inc.c"
};
unsigned char D_02028520_Global[] = FILEPAD;
unsigned char D_02028528_Global[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.png.inc.c"
};
unsigned char D_02028D28_Global[] = FILEPAD;
unsigned char D_02028D30_Global[] = {
#include "build/include/assets/levelGroup/Global/img/poleWood.ci8.pal.inc.c"
};
unsigned char D_02028F30_Global[] = FILEPAD;
unsigned char D_02028F38_Global[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.png.inc.c"
};
unsigned char D_02029138_Global[] = FILEPAD;
unsigned char D_02029140_Global[] = {
#include "build/include/assets/levelGroup/Global/img/Darkwood.ci4.pal.inc.c"
};
unsigned char D_02029340_Global[] = FILEPAD;
unsigned char D_02029348_Global[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.png.inc.c"
};
unsigned char D_02029548_Global[] = FILEPAD;
unsigned char D_02029550_Global[] = {
#include "build/include/assets/levelGroup/Global/img/wood.ci4.pal.inc.c"
};
unsigned char D_02029750_Global[] = FILEPAD;
unsigned char D_02029758_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.png.inc.c"
};
unsigned char D_02029B58_Global[] = FILEPAD;
unsigned char D_02029B60_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCFloorboard.ci4.pal.inc.c"
};
unsigned char D_02029D60_Global[] = FILEPAD;
unsigned char D_02029D68_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.png.inc.c"
};
unsigned char D_0202A568_Global[] = FILEPAD;
unsigned char D_0202A570_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCTiles.ci4.pal.inc.c"
};
unsigned char D_0202A770_Global[] = FILEPAD;
unsigned char D_0202A778_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.png.inc.c"
};
unsigned char D_0202AF78_Global[] = FILEPAD;
unsigned char D_0202AF80_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall2.ci4.pal.inc.c"
};
unsigned char D_0202B180_Global[] = FILEPAD;
unsigned char D_0202B188_Global[] = {
#include "build/include/assets/levelGroup/Global/img/windows.ia4.png.inc.c"
};
unsigned char D_0202B988_Global[] = FILEPAD;
unsigned char D_0202B990_Global[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.png.inc.c"
};
unsigned char D_0202C190_Global[] = FILEPAD;
unsigned char D_0202C198_Global[] = {
#include "build/include/assets/levelGroup/Global/img/water.ci4.pal.inc.c"
};
unsigned char D_0202C398_Global[] = FILEPAD;
unsigned char D_0202C3A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.png.inc.c"
};
unsigned char D_0202C5A0_Global[] = FILEPAD;
unsigned char D_0202C5A8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWall.ci4.pal.inc.c"
};
unsigned char D_0202C7A8_Global[] = FILEPAD;
unsigned char D_0202C7B0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.png.inc.c"
};
unsigned char D_0202CFB0_Global[] = FILEPAD;
unsigned char D_0202CFB8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCBigCabinet.ci4.pal.inc.c"
};
unsigned char D_0202D1B8_Global[] = FILEPAD;
unsigned char D_0202D1C0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.png.inc.c"
};
unsigned char D_0202D9C0_Global[] = FILEPAD;
unsigned char D_0202D9C8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/GCWood.ci4.pal.inc.c"
};
unsigned char D_0202DBC8_Global[] = FILEPAD;
unsigned char D_0202DBD0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.png.inc.c"
};
unsigned char D_0202DFD0_Global[] = FILEPAD;
unsigned char D_0202DFD8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/sandFadeTop.ci4.pal.inc.c"
};
unsigned char D_0202E1D8_Global[] = FILEPAD;
unsigned char D_0202E1E0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.png.inc.c"
};
unsigned char D_0202E5E0_Global[] = FILEPAD;
unsigned char D_0202E5E8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLMountain.ci4.pal.inc.c"
};
unsigned char D_0202E7E8_Global[] = FILEPAD;
unsigned char D_0202E7F0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.png.inc.c"
};
unsigned char D_0202EFF0_Global[] = FILEPAD;
unsigned char D_0202EFF8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.pal.inc.c"
};
unsigned char D_0202F1F8_Global[] = FILEPAD;
unsigned char D_0202F200_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.png.inc.c"
};
unsigned char D_0202FA00_Global[] = FILEPAD;
unsigned char D_0202FA08_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText5.ci4.pal.inc.c"
};
unsigned char D_0202FC08_Global[] = FILEPAD;
unsigned char D_0202FC10_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.png.inc.c"
};
unsigned char D_02030410_Global[] = FILEPAD;
unsigned char D_02030418_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText2.ci4.pal.inc.c"
};
unsigned char D_02030618_Global[] = FILEPAD;
unsigned char D_02030620_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.png.inc.c"
};
unsigned char D_02030E20_Global[] = FILEPAD;
unsigned char D_02030E28_Global[] = {
#include "build/include/assets/levelGroup/Global/img/jlText4.ci4.pal.inc.c"
};
unsigned char D_02031028_Global[] = FILEPAD;
unsigned char D_02031030_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.png.inc.c"
};
unsigned char D_02031830_Global[] = FILEPAD;
unsigned char D_02031838_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCave.ci8.pal.inc.c"
};
unsigned char D_02031A38_Global[] = FILEPAD;
unsigned char D_02031A40_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.png.inc.c"
};
unsigned char D_02032240_Global[] = FILEPAD;
unsigned char D_02032248_Global[] = {
#include "build/include/assets/levelGroup/Global/img/JLCaveFade.ci8.pal.inc.c"
};
unsigned char D_02032448_Global[] = FILEPAD;
unsigned char D_02032450_Global[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.png.inc.c"
};
unsigned char D_02032650_Global[] = FILEPAD;
unsigned char D_02032658_Global[] = {
#include "build/include/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.pal.inc.c"
};
unsigned char D_02032858_Global[] = FILEPAD;
unsigned char D_02032860_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.png.inc.c"
};
unsigned char D_02032C60_Global[] = FILEPAD;
unsigned char D_02032C68_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.pal.inc.c"
};
unsigned char D_02032E68_Global[] = FILEPAD;
unsigned char D_02032E70_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.png.inc.c"
};
unsigned char D_02033270_Global[] = FILEPAD;
unsigned char D_02033278_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLCrackerFade.ci8.pal.inc.c"
};
unsigned char D_02033478_Global[] = FILEPAD;
unsigned char D_02033480_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.png.inc.c"
};
unsigned char D_02033C80_Global[] = FILEPAD;
unsigned char D_02033C88_Global[] = {
#include "build/include/assets/levelGroup/Global/img/KLFloor.ci4.pal.inc.c"
};
unsigned char D_02033E88_Global[] = FILEPAD;
unsigned char D_02033E90_Global[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.png.inc.c"
};
unsigned char D_02034290_Global[] = FILEPAD;
unsigned char D_02034298_Global[] = {
#include "build/include/assets/levelGroup/Global/img/woodFade.ci8.pal.inc.c"
};
unsigned char D_02034498_Global[] = FILEPAD;
unsigned char D_020344A0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.png.inc.c"
};
unsigned char D_02034CA0_Global[] = FILEPAD;
unsigned char D_02034CA8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinetFade.ci8.pal.inc.c"
};
unsigned char D_02034EA8_Global[] = FILEPAD;
unsigned char D_02034EB0_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.png.inc.c"
};
unsigned char D_020350B0_Global[] = FILEPAD;
unsigned char D_020350B8_Global[] = {
#include "build/include/assets/levelGroup/Global/img/cabinet.ci4.pal.inc.c"
};
unsigned char D_020352B8_Global[] = FILEPAD;
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
unsigned char D_02035A38_Global[] = {
#include "build/include/assets/levelGroup/Global/unk3/unk3.col.inc.c"
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
unsigned char D_02035C40_Global[] = {
#include "build/include/assets/levelGroup/Global/unk4/unk4.col.inc.c"
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
unsigned char D_02035DA0_Global[] = {
#include "build/include/assets/levelGroup/Global/unk5/unk5.col.inc.c"
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
unsigned char D_02035F00_Global[] = {
#include "build/include/assets/levelGroup/Global/unk6/unk6.col.inc.c"
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
unsigned char D_02036060_Global[] = {
#include "build/include/assets/levelGroup/Global/unk7/unk7.col.inc.c"
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
unsigned char D_02036380_Global[] = {
#include "build/include/assets/levelGroup/Global/unk8/unk8.col.inc.c"
};
Mtx_f D_02036428_Global = {
#include "assets/levelGroup/Global/unk9/unk9.mtx.inc.c"
};
Gfx D_02036468_Global[] = {
#include "assets/levelGroup/Global/unk9/unk9.gfx.inc.c"
};
unsigned char D_020365B8_Global[] = {
#include "build/include/assets/levelGroup/Global/unk9/unk9.col.inc.c"
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
unsigned char D_02036BE8_Global[] = {
#include "build/include/assets/levelGroup/Global/unkA/unkA.col.inc.c"
};
Vtx D_02036CF0_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.vtx.inc.c"
};
Mtx_f D_02036E30_Global = {
#include "assets/levelGroup/Global/unkB/unkB.mtx.inc.c"
};
unsigned char D_02036E70_Global[] = FILEPAD;
unsigned char D_02036E78_Global[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB1.i4.png.inc.c"
};
unsigned char D_02037278_Global[] = FILEPAD;
unsigned char D_02037280_Global[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB2.i4.png.inc.c"
};
Gfx D_02037300_Global[] = {
#include "assets/levelGroup/Global/unkB/unkB.gfx.inc.c"
};
unsigned char D_020375B8_Global[] = {
#include "build/include/assets/levelGroup/Global/unkB/unkB.col.inc.c"
};
Vtx D_020376C0_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.vtx.inc.c"
};
Mtx_f D_020377C0_Global = {
#include "assets/levelGroup/Global/unkC/unkC.mtx.inc.c"
};
unsigned char D_02037800_Global[] = FILEPAD;
unsigned char D_02037808_Global[] = {
#include "build/include/assets/levelGroup/Global/unkC/unkC.i4.png.inc.c"
};
Gfx D_02037A08_Global[] = {
#include "assets/levelGroup/Global/unkC/unkC.gfx.inc.c"
};
unsigned char D_02037BC0_Global[] = {
#include "build/include/assets/levelGroup/Global/unkC/unkC.col.inc.c"
};
Vtx D_02037CB0_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.vtx.inc.c"
};
Mtx_f D_02037DB0_Global = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.mtx.inc.c"
};
unsigned char D_02037DF0_Global[] = FILEPAD;
unsigned char D_02037DF8_Global[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.png.inc.c"
};
unsigned char D_02037FF8_Global[] = FILEPAD;
unsigned char D_02038000_Global[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.pal.inc.c"
};
Gfx D_02038200_Global[] = {
#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.gfx.inc.c"
};
unsigned char D_02038418_Global[] = {
#include "build/include/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.col.inc.c"
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
unsigned char D_02038690_Global[] = {
#include "build/include/assets/levelGroup/Global/unkD/unkD.col.inc.c"
};
Vtx D_02038708_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.vtx.inc.c"
};
Mtx_f D_02038748_Global = {
#include "assets/levelGroup/Global/BLLava/BLLava.mtx.inc.c"
};
unsigned char D_02038788_Global[] = FILEPAD;
unsigned char D_02038790_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.png.inc.c"
};
unsigned char D_02038F90_Global[] = FILEPAD;
unsigned char D_02038F98_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.ci4.pal.inc.c"
};
Gfx D_02039198_Global[] = {
#include "assets/levelGroup/Global/BLLava/BLLava.gfx.inc.c"
};
unsigned char D_020392A0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava/BLLava.col.inc.c"
};
Vtx D_02039318_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.vtx.inc.c"
};
Mtx_f D_02039358_Global = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.mtx.inc.c"
};
unsigned char D_02039398_Global[] = FILEPAD;
unsigned char D_020393A0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.png.inc.c"
};
unsigned char D_02039BA0_Global[] = FILEPAD;
unsigned char D_02039BA8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.ci4.pal.inc.c"
};
Gfx D_02039DA8_Global[] = {
#include "assets/levelGroup/Global/BLLava2/BLLava2.gfx.inc.c"
};
unsigned char D_02039EB0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava2/BLLava2.col.inc.c"
};
Vtx D_02039F28_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.vtx.inc.c"
};
Mtx_f D_02039F68_Global = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.mtx.inc.c"
};
unsigned char D_02039FA8_Global[] = FILEPAD;
unsigned char D_02039FB0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.png.inc.c"
};
unsigned char D_0203A7B0_Global[] = FILEPAD;
unsigned char D_0203A7B8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.ci4.pal.inc.c"
};
Gfx D_0203A9B8_Global[] = {
#include "assets/levelGroup/Global/BLLava3/BLLava3.gfx.inc.c"
};
unsigned char D_0203AAC0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava3/BLLava3.col.inc.c"
};
Vtx D_0203AB38_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.vtx.inc.c"
};
Mtx_f D_0203AB78_Global = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.mtx.inc.c"
};
unsigned char D_0203ABB8_Global[] = FILEPAD;
unsigned char D_0203ABC0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.png.inc.c"
};
unsigned char D_0203B3C0_Global[] = FILEPAD;
unsigned char D_0203B3C8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.ci4.pal.inc.c"
};
Gfx D_0203B5C8_Global[] = {
#include "assets/levelGroup/Global/BLLava4/BLLava4.gfx.inc.c"
};
unsigned char D_0203B6D0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava4/BLLava4.col.inc.c"
};
Vtx D_0203B748_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.vtx.inc.c"
};
Mtx_f D_0203B788_Global = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.mtx.inc.c"
};
unsigned char D_0203B7C8_Global[] = FILEPAD;
unsigned char D_0203B7D0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.png.inc.c"
};
unsigned char D_0203BFD0_Global[] = FILEPAD;
unsigned char D_0203BFD8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.ci4.pal.inc.c"
};
Gfx D_0203C1D8_Global[] = {
#include "assets/levelGroup/Global/BLLava5/BLLava5.gfx.inc.c"
};
unsigned char D_0203C2E0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava5/BLLava5.col.inc.c"
};
Vtx D_0203C358_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.vtx.inc.c"
};
Mtx_f D_0203C398_Global = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.mtx.inc.c"
};
unsigned char D_0203C3D8_Global[] = FILEPAD;
unsigned char D_0203C3E0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.png.inc.c"
};
unsigned char D_0203CBE0_Global[] = FILEPAD;
unsigned char D_0203CBE8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.ci4.pal.inc.c"
};
Gfx D_0203CDE8_Global[] = {
#include "assets/levelGroup/Global/BLLava6/BLLava6.gfx.inc.c"
};
unsigned char D_0203CEF0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava6/BLLava6.col.inc.c"
};
Vtx D_0203CF68_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.vtx.inc.c"
};
Mtx_f D_0203CFA8_Global = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.mtx.inc.c"
};
unsigned char D_0203CFE8_Global[] = FILEPAD;
unsigned char D_0203CFF0_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.png.inc.c"
};
unsigned char D_0203D7F0_Global[] = FILEPAD;
unsigned char D_0203D7F8_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.ci4.pal.inc.c"
};
Gfx D_0203D9F8_Global[] = {
#include "assets/levelGroup/Global/BLLava7/BLLava7.gfx.inc.c"
};
unsigned char D_0203DB00_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava7/BLLava7.col.inc.c"
};
Vtx D_0203DB78_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.vtx.inc.c"
};
Mtx_f D_0203DBB8_Global = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.mtx.inc.c"
};
unsigned char D_0203DBF8_Global[] = FILEPAD;
unsigned char D_0203DC00_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.png.inc.c"
};
unsigned char D_0203E400_Global[] = FILEPAD;
unsigned char D_0203E408_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.ci4.pal.inc.c"
};
Gfx D_0203E608_Global[] = {
#include "assets/levelGroup/Global/BLLava8/BLLava8.gfx.inc.c"
};
unsigned char D_0203E710_Global[] = {
#include "build/include/assets/levelGroup/Global/BLLava8/BLLava8.col.inc.c"
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
unsigned char D_0203E8E0_Global[] = {
#include "build/include/assets/levelGroup/Global/unkE/unkE.col.inc.c"
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
unsigned char D_0203ED50_Global[] = {
#include "build/include/assets/levelGroup/Global/unkF/unkF.col.inc.c"
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
unsigned char D_0203F130_Global[] = {
#include "build/include/assets/levelGroup/Global/unk10/unk10.col.inc.c"
};
Vtx D_0203F1D8_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.vtx.inc.c"
};
Mtx_f D_0203F2D8_Global = {
#include "assets/levelGroup/Global/Door1/Door1.mtx.inc.c"
};
unsigned char D_0203F318_Global[] = FILEPAD;
unsigned char D_0203F320_Global[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.png.inc.c"
};
unsigned char D_0203FB20_Global[] = FILEPAD;
unsigned char D_0203FB28_Global[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.ci4.pal.inc.c"
};
Gfx D_0203FD28_Global[] = {
#include "assets/levelGroup/Global/Door1/Door1.gfx.inc.c"
};
unsigned char D_0203FF40_Global[] = {
#include "build/include/assets/levelGroup/Global/Door1/Door1.col.inc.c"
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
unsigned char D_02040308_Global[] = {
#include "build/include/assets/levelGroup/Global/unk12/unk12.col.inc.c"
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
unsigned char D_02040498_Global[] = {
#include "build/include/assets/levelGroup/Global/unk13/unk13.col.inc.c"
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
unsigned char D_020405F8_Global[] = {
#include "build/include/assets/levelGroup/Global/unk14/unk14.col.inc.c"
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
unsigned char D_02040948_Global[] = {
#include "build/include/assets/levelGroup/Global/unk15/unk15.col.inc.c"
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
unsigned char D_02040CC8_Global[] = {
#include "build/include/assets/levelGroup/Global/unk16/unk16.col.inc.c"
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
unsigned char D_020411D8_Global[] = {
#include "build/include/assets/levelGroup/Global/unk17/unk17.col.inc.c"
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
unsigned char D_02041630_Global[] = {
#include "build/include/assets/levelGroup/Global/unk18/unk18.col.inc.c"
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
unsigned char D_020419B0_Global[] = {
#include "build/include/assets/levelGroup/Global/unk19/unk19.col.inc.c"
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
unsigned char D_02041D30_Global[] = {
#include "build/include/assets/levelGroup/Global/unk1A/unk1A.col.inc.c"
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
unsigned char D_020420B0_Global[] = {
#include "build/include/assets/levelGroup/Global/unk1B/unk1B.col.inc.c"
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
unsigned char D_02042590_Global[] = {
#include "build/include/assets/levelGroup/Global/unk1C/unk1C.col.inc.c"
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
unsigned char D_02042AC8_Global[] = {
#include "build/include/assets/levelGroup/Global/unk1D/unk1D.col.inc.c"
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
unsigned char D_02042F70_Global[] = {
#include "build/include/assets/levelGroup/Global/unk1E/unk1E.col.inc.c"
};
