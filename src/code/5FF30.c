#include "common.h"
#include "5FF30.h"
#include "1050.h"
#include "sprite.h"
#include "ld_addrs.h"

u8 D_800FEDC0[226][8] = {
{104, 136, 1, 4, 1, 5, 25, 0},
{104, 136, 1, 4, 1, 5, 25, 0},
{72, 136, 1, 4, 1, 5, 25, 0},
{72, 136, 1, 4, 1, 5, 25, 0},
{111, 255, 1, 4, 1, 10, 25, 0},
{79, 255, 1, 4, 1, 5, 25, 0},
{104, 136, 1, 4, 1, 5, 25, 0},
{104, 136, 1, 4, 1, 5, 25, 0},
{79, 255, 1, 4, 1, 0, 25, 0},
{79, 255, 1, 4, 1, 0, 25, 0},
{79, 255, 1, 8, 1, 0, 25, 0},
{56, 136, 1, 8, 1, 0, 25, 0},
{111, 255, 1, 8, 1, 5, 25, 0},
{111, 255, 1, 8, 1, 5, 25, 0},
{111, 255, 1, 8, 1, 0, 25, 0},
{95, 255, 1, 8, 1, 0, 25, 0},
{111, 255, 1, 8, 1, 0, 25, 0},
{95, 255, 1, 8, 1, 0, 25, 0},
{79, 255, 1, 8, 1, 0, 25, 0},
{79, 255, 1, 2, 1, 10, 25, 0},
{47, 255, 1, 2, 1, 10, 25, 0},
{120, 136, 1, 8, 1, 15, 25, 0},
{111, 255, 1, 8, 1, 5, 25, 0},
{111, 255, 1, 8, 1, 5, 25, 0},
{79, 255, 1, 8, 1, 10, 25, 0},
{63, 255, 1, 8, 1, 5, 25, 0},
{40, 136, 1, 8, 1, 100, 25, 0},
{79, 255, 1, 2, 1, 0, 25, 0},
{79, 255, 1, 2, 1, 0, 25, 0},
{95, 255, 1, 2, 1, 5, 25, 0},
{104, 136, 1, 2, 1, 5, 25, 0},
{104, 136, 1, 2, 1, 5, 25, 0},
{104, 136, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 10, 30, 0},
{79, 255, 1, 2, 1, 10, 28, 0},
{95, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{104, 136, 1, 2, 1, 5, 26, 0},
{79, 255, 1, 2, 1, 10, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 5, 15, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 10, 25, 0},
{79, 255, 1, 2, 1, 20, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{63, 255, 1, 1, 2, 20, 25, 0},
{72, 136, 1, 1, 2, 10, 25, 0},
{79, 255, 1, 1, 2, 80, 25, 0},
{79, 255, 1, 1, 2, 10, 25, 0},
{47, 255, 1, 1, 2, 20, 25, 0},
{72, 136, 1, 1, 2, 10, 25, 0},
{40, 136, 1, 1, 2, 5, 25, 0},
{53, 85, 1, 1, 2, 5, 25, 0},
{79, 255, 1, 8, 2, 10, 25, 0},
{79, 255, 1, 8, 1, 15, 25, 0},
{79, 255, 1, 8, 1, 15, 25, 0},
{95, 255, 1, 1, 1, 15, 25, 0},
{79, 255, 1, 1, 1, 10, 25, 0},
{95, 255, 1, 1, 3, 5, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{111, 255, 1, 1, 1, 15, 27, 0},
{127, 255, 1, 1, 4, 0, 25, 0},
{67, 51, 1, 1, 1, 25, 25, 0},
{63, 255, 1, 1, 1, 0, 25, 0},
{51, 51, 1, 1, 1, 25, 25, 0},
{111, 255, 1, 1, 2, 10, 25, 0},
{111, 255, 1, 1, 2, 10, 25, 0},
{111, 255, 1, 1, 2, 20, 25, 0},
{111, 255, 1, 1, 2, 20, 25, 0},
{127, 255, 1, 1, 2, 30, 25, 0},
{111, 255, 1, 1, 2, 20, 25, 0},
{88, 136, 1, 1, 2, 5, 16, 0},
{88, 136, 1, 1, 2, 5, 16, 0},
{95, 255, 1, 4, 2, 5, 25, 0},
{111, 255, 1, 2, 2, 5, 25, 0},
{79, 255, 1, 1, 2, 5, 25, 0},
{56, 136, 1, 1, 1, 100, 25, 0},
{56, 136, 1, 1, 1, 100, 25, 0},
{56, 136, 1, 1, 1, 100, 25, 0},
{40, 136, 1, 1, 1, 100, 25, 0},
{40, 136, 1, 1, 1, 100, 25, 0},
{40, 136, 1, 1, 1, 100, 25, 0},
{48, 0, 1, 3, 2, 30, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{63, 255, 1, 1, 2, 15, 25, 0},
{63, 255, 1, 1, 1, 15, 25, 0},
{79, 255, 1, 2, 2, 15, 25, 0},
{111, 255, 1, 2, 3, 127, 25, 0},
{79, 255, 1, 1, 1, 10, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{56, 136, 1, 1, 0, 0, 25, 0},
{56, 136, 1, 1, 0, 0, 23, 0},
{56, 136, 1, 1, 0, 0, 25, 0},
{56, 136, 1, 1, 0, 0, 23, 0},
{56, 136, 1, 1, 0, 0, 25, 0},
{56, 136, 1, 1, 0, 0, 23, 0},
{95, 255, 1, 1, 3, 5, 25, 0},
{79, 255, 1, 1, 3, 10, 25, 0},
{79, 255, 1, 1, 3, 10, 25, 0},
{127, 255, 1, 1, 3, 5, 25, 0},
{127, 255, 1, 1, 3, 20, 25, 0},
{79, 255, 1, 1, 3, 50, 25, 0},
{79, 255, 1, 1, 3, 10, 25, 0},
{111, 255, 1, 1, 3, 10, 25, 0},
{79, 255, 1, 1, 4, 0, 25, 0},
{104, 136, 1, 2, 4, 100, 25, 0},
{63, 255, 1, 1, 1, 10, 25, 0},
{79, 255, 1, 1, 1, 10, 25, 0},
{63, 255, 1, 1, 0, 10, 25, 0},
{79, 255, 1, 1, 1, 10, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 3, 25, 25, 0},
{111, 255, 1, 1, 3, 30, 20, 0},
{79, 255, 1, 1, 3, 10, 18, 0},
{111, 255, 1, 1, 3, 50, 25, 0},
{95, 255, 1, 1, 3, 25, 25, 0},
{95, 255, 1, 1, 3, 5, 20, 0},
{63, 255, 1, 1, 2, 0, 25, 0},
{111, 255, 1, 1, 2, 5, 25, 0},
{47, 255, 1, 1, 1, 5, 25, 0},
{63, 255, 1, 1, 1, 5, 25, 0},
{63, 255, 1, 3, 1, 5, 25, 0},
{111, 255, 1, 1, 2, 10, 25, 0},
{127, 255, 1, 1, 4, 10, 25, 0},
{127, 255, 1, 1, 2, 10, 25, 0},
{95, 255, 1, 1, 2, 50, 25, 0},
{127, 255, 1, 1, 2, 25, 25, 0},
{104, 136, 1, 1, 2, 15, 20, 0},
{72, 136, 1, 3, 1, 25, 25, 0},
{111, 255, 1, 2, 1, 25, 25, 0},
{79, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 2, 2, 10, 25, 0},
{79, 255, 1, 2, 1, 0, 25, 0},
{95, 255, 1, 3, 1, 0, 25, 0},
{95, 255, 1, 2, 1, 5, 25, 0},
{95, 255, 1, 2, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 10, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{95, 255, 1, 1, 2, 10, 25, 0},
{79, 255, 1, 1, 1, 10, 25, 0},
{63, 255, 1, 1, 1, 5, 25, 0},
{47, 255, 1, 1, 1, 25, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{63, 255, 1, 1, 1, 10, 25, 0},
{63, 255, 1, 1, 1, 10, 25, 0},
{79, 255, 1, 1, 2, 30, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 15, 25, 0},
{79, 255, 1, 1, 1, 15, 25, 0},
{111, 255, 1, 1, 3, 10, 25, 0},
{79, 255, 1, 1, 7, 5, 25, 0},
{79, 255, 1, 8, 7, 5, 25, 0},
{79, 255, 1, 2, 8, 10, 25, 0},
{95, 255, 1, 1, 1, 5, 25, 0},
{95, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 4, 20, 25, 0},
{111, 255, 1, 1, 3, 50, 25, 0},
{79, 255, 1, 1, 1, 25, 20, 0},
{79, 255, 1, 1, 2, 5, 25, 0},
{79, 255, 1, 1, 2, 20, 25, 0},
{111, 255, 1, 1, 3, 50, 25, 0},
{79, 255, 1, 8, 1, 5, 25, 0},
{95, 255, 1, 8, 4, 0, 25, 0},
{95, 255, 1, 8, 4, 0, 25, 0},
{111, 255, 1, 3, 4, 0, 25, 0},
{111, 255, 1, 8, 4, 0, 25, 0},
{111, 255, 1, 1, 4, 0, 25, 0},
{95, 255, 1, 8, 4, 0, 25, 0},
{111, 255, 1, 8, 4, 0, 25, 0},
{111, 255, 1, 8, 4, 0, 25, 0},
{95, 255, 1, 8, 4, 0, 20, 0},
{127, 255, 1, 1, 4, 0, 25, 0},
{111, 255, 1, 1, 4, 0, 25, 0},
{111, 255, 1, 11, 4, 0, 25, 0},
{111, 255, 1, 11, 4, 0, 25, 0},
{111, 255, 1, 11, 4, 0, 25, 0},
{79, 255, 9, 1, 0, 0, 25, 0},
{79, 255, 1, 1, 0, 0, 25, 0},
{95, 255, 1, 4, 3, 5, 25, 0},
{79, 255, 1, 1, 10, 5, 25, 0},
{79, 255, 1, 4, 1, 0, 25, 0},
{79, 255, 1, 4, 1, 0, 25, 0},
{79, 255, 1, 4, 1, 0, 25, 0},
{79, 255, 1, 4, 1, 0, 25, 0},
{79, 255, 1, 4, 1, 0, 25, 0},
{56, 136, 1, 8, 1, 0, 25, 0},
{79, 255, 1, 3, 10, 0, 25, 0},
{79, 255, 1, 1, 2, 0, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{31, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 2, 0, 25, 0},
{63, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 4, 0, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 1, 2, 0, 25, 0},
{79, 255, 1, 1, 1, 5, 25, 0},
{79, 255, 1, 1, 1, 0, 25, 0},
{79, 255, 1, 2, 1, 0, 25, 0},
{79, 255, 1, 2, 1, 0, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{79, 255, 1, 1, 3, 0, 25, 0},
{79, 255, 1, 1, 0, 0, 25, 0},
{79, 255, 1, 1, 0, 0, 25, 0},
{79, 255, 1, 1, 0, 0, 25, 0},
{79, 255, 1, 1, 0, 0, 25, 0}};


BGMVolume volumesBGM[] = {
{0x00005AFF, 0x00000000},
{0x00006555, 0x00000000},
{0x00005FFF, 0x00000000},
{0x00005FFF, 0x00000000},
{0x00005FFF, 0x00000000},
{0x000058FF, 0x00000000},
{0x00005FFF, 0x00000000},
{0x000053FF, 0x00000000},
{0x00005FFF, 0x00000000},
{0x000058FF, 0x00000000},
{0x000053FF, 0x00000000},
{0x00006FFF, 0x00000000},
{0x000053FF, 0x00000000},
{0x000053FF, 0x00000000},
{0x000051FF, 0x00000000},
{0x00006000, 0x00000000},
{0x000058FF, 0x00000000},
{0x00005000, 0x00000000},
{0x000063FF, 0x00000000},
{0x000063FF, 0x00000000},
{0x000063FF, 0x00000000},
{0x000063FF, 0x00000000},
{0x000063FF, 0x00000000},
{0x00007FFF, 0x00000000},
{0x00007FFF, 0x00000000},
{0x000063FF, 0x00000000},
{0x00006FFF, 0x00000000},
{0x000063FF, 0x00000000},
{0x000063FF, 0x00000000},
{0x000053FF, 0x00000000}
};

s32 D_800FF5C0 = 0; //padding?

s16 gSchedReset = 0;
s32 gGfxTaskPending = 0;
s16 D_800FF5CC = 3;
s32 D_800FF5D0 = -1;
s16 D_800FF5D4 = 0;
s16 gGfxTaskStarted = 1;
s16 D_800FF5DC[2] = {-1, -1};
s16 D_800FF5E0 = 0;
s32 D_800FF5E4 = 0;
s32 D_800FF5E8 = 0;
s16 gGfxTaskRunning = 0;
s16 gAudioTaskState = 0;
s16 D_800FF5F4 = 0;
s16 gIsPaused = 0;
s16 gIsStero = 1;
s16 gSFXMute = -1;
s16 D_800FF604 = 0;
s16 D_800FF608 = 0;
u8 gGfxTaskYielded = 0;
Camera* gCameraP = gCamera;

extern ALCSPlayer gBGMPlayer;
extern ALCSeq gBGMSeq;
extern ALSndPlayer gSFXPlayer;

ALCSPlayer* gBGMPlayerP = &gBGMPlayer;
ALCSeq* gBGMSeqP = &gBGMSeq;
ALSndPlayer* gSFXPlayerP = &gSFXPlayer;
s32 currLoadingBGM = -1;
s32 currBGMIndex = -1;
s16 D_800FF628[] = {0, 0, 0, 0};
s32 D_800FF630 = 3;
s32 gAudioIOMsgIndex = 0;
s32 D_800FF638 = 0; //padding?
s32 D_800FF63C = 0;
s32 D_800FF640 = 0; //padding?
s32 D_800FF644 = 0;
s32 D_800FF648 = 1;
u8 D_800FF64C = 0;
u8 D_800FF650 = 0;
s32 D_800FF654[] = {0x00000008, 0x000032C8, 0x00000000, 0x00000140, 0x00000000, 0xFFFFD99A, 0x00000E10, 0x000007D0, 0x00001388, 0x00000000, 0x00000140, 0x000001E0, 0x00002666, 0xFFFFD99A, 0x00002B84, 0x000007D0, 0x00001388, 0x00005000, 0x00000668, 0x00001400, 0x00004000, 0xFFFFC000, 0x000011EB, 0x0000094C, 0x00001388, 0x00000000, 0x00000708, 0x00001018, 0x00002000, 0xFFFFE000, 0x00000000, 0x0000094C, 0x00001388, 0x00000000, 0x00001950, 0x00002C10, 0x00004000, 0xFFFFC000, 0x000011EB, 0x0000094C, 0x00001388, 0x00006000, 0x000019F0, 0x00002530, 0x00002000, 0xFFFFE000, 0x00000000, 0x0000094C, 0x00001388, 0x00000000, 0x00002530, 0x000029E0, 0x00002000, 0xFFFFE000, 0x00000000, 0x0000094C, 0x00001388, 0x00000000, 0x00000000, 0x00002EB8, 0x00004650, 0x00000000, 0x00000000, 0x0000094C, 0x00001388, 0x00007000};
s32 D_800FF75C = 1;
s32 D_800FF760 = 0x40;


typedef struct Unk800FF764 {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
    const char* unk_08;
} Unk800FF764;

//story
extern const char D_8010D840[];
extern const char D_8010D850[];
extern const char D_8010D85C[];
extern const char D_8010D874[];

Unk800FF764 D_800FF764[] = {
    {0x0070, 0x0058, 0, 0, D_8010D840},
    {0x0080, 0x0078, 0x0002, 0x0000, D_8010D850},
    {0x0050, 0x0098, 0x0001, 0x0000, D_8010D85C},
    {0x0080, 0x00B8, 0x0007, 0x0000, D_8010D874},
    {0, 0, 0}
};

//training (during round)
extern const char D_8010D880[];
extern const char D_8010D890[];
extern const char D_8010D8A0[];

Unk800FF764 D_800FF7A0[] = {
    {0x0070, 0x0058, 0, 0, D_8010D880},
    {0x0068, 0x0078, 0x0006, 0x0000, D_8010D890},
    {0x0080, 0x0098, 0x0007, 0x0000, D_8010D8A0},
    {0, 0, 0},
};

//training (normal)
extern const char D_8010D8AC[];
extern const char D_8010D8BC[];

Unk800FF764 D_800FF7D0[] = {
    {0x0070, 0x0058, 0, 0, D_8010D8AC},
    {0x0080, 0x0078, 0x0007, 0x0000, D_8010D8BC},
    {0, 0, 0}
};

extern const char D_8010D8C8[];
extern const char D_8010D8D0[];

Unk800FF764 D_800FF7F4[] = {
    {0x0088, 0x0068, 0x0009, 0x0000, D_8010D8C8},
    {0x008E, 0x0088, 0x0008, 0x0000, D_8010D8D0},
    {0, 0, 0}
};

extern const char D_8010D8D8[];
extern const char D_8010D8E0[];

Unk800FF764 D_800FF818[] = {
    {0x0088, 0x0058, 0x0001, 0x0000, D_8010D8D8},
    {0x008E, 0x0078, 0x0008, 0x0000, D_8010D8E0},
    {0, 0, 0}
};

Unk800FF764* D_800FF83C[] = {D_800FF764, D_800FF7D0, D_800FF7A0};
Unk800FF764* D_800FF848[] = {D_800FF7F4, D_800FF818, NULL};

s16 sStageBGMs[] = {
    BGM_JUNGLE_EXT,
    BGM_ANT,
    BGM_BOMB,
    BGM_DESERT,
    BGM_KIDS,
    BGM_GHOST,
    BGM_INTRO,
    BGM_BATTLE1,
    BGM_TRAINING,
    BGM_BOSS1,
    BGM_ANTBOSS,
    BGM_BOSS2,
    BGM_BOSS1,
    BGM_KIDSBOSS,
    BGM_GHOSTBOSS1,
    BGM_BATTLE1,
    BGM_BATTLE1,
    BGM_BATTLE1,
    BGM_BATTLE1,
};

s16 D_800FF87C[] = {0, 0, 0, 0};
u32 D_800FF884 = 0;
s32 Timing_DelayAudioInterval = 0;
u32 Timing_StartAudioTime = 0;
s32 D_800FF890[] = {0, 0};
s32 Timing_StopGfxTime = 0;
u32 Timing_StartGfxTime = 0;
u32 Timing_EndFrameTime = 0;
s32 Timing_StopProcessTime = 0;
s32 Timing_StartProcessTime = 0;
s32 D_800FF8AC = 0;
s32 D_800FF8B0 = 0;
s32 D_800FF8B4 = 0;
u32 D_800FF8B8 = 0;
s16 D_800FF8BC = 0;
s16 D_800FF8C0[] = {0x3737, 0x3700, 0x00FF, 0x00FF, 0xFFFF, 0xFF00, 0xFF00, 0xFFFF, 0xFFFF};
Mtx* D_800FF8D4 = NULL;
s32 D_800FF8D8 = 0;
u8 D_800FF8DC = 0;
u8 D_800FF8E0 = 0;
u8 D_800FF8E4 = 0;
s32 D_800FF8E8 = 0;
s32 D_800FF8EC = 0;

typedef struct Unk800FF8F0 {
    s32 unk_00;
    void* unk_04;
    void* unk_08;
    void* unk_0C;
    void* unk_10;
    s32 unk_14;
} Unk800FF8F0;

void func_8009DC40(CTTask*);

Unk800FF8F0 D_800FF8F0 = {0, CTTask_Run, func_8009DC40, CTTask_Run, func_800A0E3C, 0x00000000};

typedef struct Unk800FF908 {
    void* unk_00;
    void* unk_04;
    void* unk_08;
    void* unk_0C;
    s32 unk_10;
} Unk800FF908;

extern Mtx static0_GetupFromKnockback_Animarr[];
extern Anim static0_GetupFromKnockback_Animh;

Unk_800FFB74 D_800FF908 = {
    static0_GetupFromKnockback_Animarr,
    Davy_restAssociate_Gfx,
    &static0_GetupFromKnockback_Animh.objects,
    &static0_GetupFromKnockback_Animh.frames,
    LIST_END,
};

Unk_800FFB74 D_800FF91C = {
    static0_GetupFromKnockback_Animarr,
    Davy_restAssociate_Gfx,
    &static0_GetupFromKnockback_Animh.objects,
    &static0_GetupFromKnockback_Animh.frames,
    LIST_END,
};


extern Mtx static0_Idle_Animarr[];
extern Anim static0_Idle_Animh;

Unk_800FFB74 D_800FF930 = {
    static0_Idle_Animarr,
    Davy_restAssociate_Gfx,
    &static0_Idle_Animh.objects,
    &static0_Idle_Animh.frames,
    0,
};


extern Mtx static0_Walk_Animarr[];
extern Anim static0_Walk_Animh;

Unk_800FFB74 D_800FF944 = {
    static0_Walk_Animarr,
    Davy_restAssociate_Gfx,
    &static0_Walk_Animh.objects,
    &static0_Walk_Animh.frames,
    0,
};


extern Mtx static0_Run_Animarr[];
extern Anim static0_Run_Animh;

Unk_800FFB74 D_800FF958 = {
    static0_Run_Animarr,
    Davy_restAssociate_Gfx,
    &static0_Run_Animh.objects,
    &static0_Run_Animh.frames,
    0,
};


extern Mtx static0_LandFromKnockback_Animarr[];
extern Anim static0_LandFromKnockback_Animh;

Unk_800FFB74 D_800FF96C = {
    static0_LandFromKnockback_Animarr,
    Davy_restAssociate_Gfx,
    &static0_LandFromKnockback_Animh.objects,
    &static0_LandFromKnockback_Animh.frames,
    LIST_END,
};


extern Mtx static0_Jump_Animarr[];
extern Anim static0_Jump_Animh;

Unk_800FFB74 D_800FF980 = {
    static0_Jump_Animarr,
    Davy_restAssociate_Gfx,
    &static0_Jump_Animh.objects,
    &static0_Jump_Animh.frames,
    LIST_END,
};

Unk_800FFB74 D_800FF994 = {
    static0_Jump_Animarr,
    Davy_restAssociate_Gfx,
    &static0_Jump_Animh.objects,
    &static0_Jump_Animh.frames,
    LIST_END,
};


extern Mtx Animations_unk1_Animarr[];
extern Anim Animations_unk1Header_Animh;

Unk_800FFB74 D_800FF9A8 = {
    Animations_unk1_Animarr,
    Davy_restAssociate_Gfx,
    &Animations_unk1Header_Animh.objects,
    &Animations_unk1Header_Animh.frames,
    LIST_END,
};


extern Mtx Animations_unk2_Animarr[];
extern Anim Animations_unk2Header_Animh;

Unk_800FFB74 D_800FF9BC = {
    Animations_unk2_Animarr,
    Davy_restAssociate_Gfx,
    &Animations_unk2Header_Animh.objects,
    &Animations_unk2Header_Animh.frames,
    LIST_END,
};


extern Gfx BombSnake_unkF_Gfx[];
extern Mtx BombSnake_unk1_Animarr[];
extern Anim BombSnake_unk1Header_Animh;

Unk_800FFB74 D_800FF9D0 = {
BombSnake_unk1_Animarr,
BombSnake_unkF_Gfx,
&BombSnake_unk1Header_Animh.objects,
&BombSnake_unk1Header_Animh.frames,
LIST_END,
};


extern Gfx BombSnake_unk11_Gfx[];
extern Mtx BombSnake_unk2_Animarr[];
extern Anim BombSnake_unk2Header_Animh;

Unk_800FFB74 D_800FF9E4 = {
BombSnake_unk2_Animarr,
BombSnake_unk11_Gfx,
&BombSnake_unk2Header_Animh.objects,
&BombSnake_unk2Header_Animh.frames,
LIST_END,
};

extern Mtx BombSnake_unk3_Animarr[];
extern Anim BombSnake_unk3Header_Animh;

Unk_800FFB74 D_800FF9F8 = {
BombSnake_unk3_Animarr,
BombSnake_unk11_Gfx,
&BombSnake_unk3Header_Animh.objects,
&BombSnake_unk3Header_Animh.frames,
LIST_END,
};

extern Mtx BombSnake_unk4_Animarr[];
extern Anim BombSnake_unk4Header_Animh;

Unk_800FFB74 D_800FFA0C = {
BombSnake_unk4_Animarr,
BombSnake_unk11_Gfx,
&BombSnake_unk4Header_Animh.objects,
&BombSnake_unk4Header_Animh.frames,
LIST_END,
};


extern Gfx Quintella_a_model18_Gfx[];
extern Mtx Quintella_unk7_Animarr[];
extern Anim Quintella_unk7Header_Animh;

Unk_800FFB74 D_800FFA20 = {
Quintella_unk7_Animarr,
Quintella_a_model18_Gfx,
&Quintella_unk7Header_Animh.objects,
&Quintella_unk7Header_Animh.frames,
LIST_END,
};

extern Mtx Quintella_unk8_Animarr[];
extern Anim Quintella_unk8Header_Animh;

Unk_800FFB74 D_800FFA34 = {
Quintella_unk8_Animarr,
Quintella_a_model18_Gfx,
&Quintella_unk8Header_Animh.objects,
&Quintella_unk8Header_Animh.frames,
0,
};

extern Mtx Quintella_unk9_Animarr[];
extern Anim Quintella_unk9Header_Animh;

Unk_800FFB74 D_800FFA48 = {
Quintella_unk9_Animarr,
Quintella_a_model18_Gfx,
&Quintella_unk9Header_Animh.objects,
&Quintella_unk9Header_Animh.frames,
LIST_END,
};

extern Mtx Quintella_unk10_Animarr[];
extern Anim Quintella_unk10Header_Animh;

Unk_800FFB74 D_800FFA5C = {
Quintella_unk10_Animarr,
Quintella_a_model18_Gfx,
&Quintella_unk10Header_Animh.objects,
&Quintella_unk10Header_Animh.frames,
LIST_END,
};

extern Mtx Quintella_unk11_Animarr[];
extern Anim Quintella_unk11Header_Animh;

Unk_800FFB74 D_800FFA70 = {
Quintella_unk11_Animarr,
Quintella_a_model18_Gfx,
&Quintella_unk11Header_Animh.objects,
&Quintella_unk11Header_Animh.frames,
LIST_END,
};


extern Gfx LizardKong_a_model12_Gfx[];
extern Mtx LizardKong_unk5_Animarr[];
extern Anim LizardKong_unk5Header_Animh;

Unk_800FFB74 D_800FFA84 = {
LizardKong_unk5_Animarr,
LizardKong_a_model12_Gfx,
&LizardKong_unk5Header_Animh.objects,
&LizardKong_unk5Header_Animh.frames,
LIST_END,
};

extern Mtx LizardKong_unk6_Animarr[];
extern Anim LizardKong_unk6Header_Animh;

Unk_800FFB74 D_800FFA98 = {
LizardKong_unk6_Animarr,
LizardKong_a_model12_Gfx,
&LizardKong_unk6Header_Animh.objects,
&LizardKong_unk6Header_Animh.frames,
LIST_END,
};

extern Mtx LizardKong_unk7_Animarr[];
extern Anim LizardKong_unk7Header_Animh;

Unk_800FFB74 D_800FFAAC = {
LizardKong_unk7_Animarr,
LizardKong_a_model12_Gfx,
&LizardKong_unk7Header_Animh.objects,
&LizardKong_unk7Header_Animh.frames,
LIST_END,
};

extern Mtx LizardKong_unk8_Animarr[];
extern Anim LizardKong_unk8Header_Animh;

Unk_800FFB74 D_800FFAC0 = {
LizardKong_unk8_Animarr,
LizardKong_a_model12_Gfx,
&LizardKong_unk8Header_Animh.objects,
&LizardKong_unk8Header_Animh.frames,
LIST_END,
};

extern Mtx LizardKong_unk9_Animarr[];
extern Anim LizardKong_unk9Header_Animh;

Unk_800FFB74 D_800FFAD4 = {
LizardKong_unk9_Animarr,
LizardKong_a_model14_Gfx,
&LizardKong_unk9Header_Animh.objects,
&LizardKong_unk9Header_Animh.frames,
LIST_END,
};


extern Gfx Armadillo_a_model21_Gfx[];
extern Mtx Armadillo_unk3_Animarr[];
extern Anim Armadillo_unk3Header_Animh;

Unk_800FFB74 D_800FFAE8 = {
Armadillo_unk3_Animarr,
Armadillo_a_model21_Gfx,
&Armadillo_unk3Header_Animh.objects,
&Armadillo_unk3Header_Animh.frames,
LIST_END,
};

extern Mtx Armadillo_unk4_Animarr[];
extern Anim Armadillo_unk4Header_Animh;

Unk_800FFB74 D_800FFAFC = {
Armadillo_unk4_Animarr,
Armadillo_a_model21_Gfx,
&Armadillo_unk4Header_Animh.objects,
&Armadillo_unk4Header_Animh.frames,
LIST_END,
};

extern Mtx Armadillo_unk5_Animarr[];
extern Anim Armadillo_unk5Header_Animh;

Unk_800FFB74 D_800FFB10 = {
Armadillo_unk5_Animarr,
Armadillo_a_model21_Gfx,
&Armadillo_unk5Header_Animh.objects,
&Armadillo_unk5Header_Animh.frames,
LIST_END,
};

extern Mtx Armadillo_unk6_Animarr[];
extern Anim Armadillo_unk6Header_Animh;

Unk_800FFB74 D_800FFB24 = {
Armadillo_unk6_Animarr,
Armadillo_a_model21_Gfx,
&Armadillo_unk6Header_Animh.objects,
&Armadillo_unk6Header_Animh.frames,
LIST_END,
};

extern Mtx GiantCake_unk4_Animarr[];
extern Gfx GiantCake_a_model33_Gfx[];
extern Anim GiantCake_unk4Header_Animh;

Unk_800FFB74 D_800FFB38 = {
    GiantCake_unk4_Animarr,
    GiantCake_a_model33_Gfx,
    &GiantCake_unk4Header_Animh.objects,
    &GiantCake_unk4Header_Animh.frames,
    LIST_END,
};


extern Gfx GiantCake_a_model15_Gfx[];
extern Mtx GiantCake_unk3_Animarr[];
extern Anim GiantCake_unk3Header_Animh;

Unk_800FFB74 D_800FFB4C = {
GiantCake_unk3_Animarr,
GiantCake_a_model15_Gfx,
&GiantCake_unk3Header_Animh.objects,
&GiantCake_unk3Header_Animh.frames,
LIST_END,
};

extern Mtx GiantCake_unk5_Animarr[];
extern Gfx GiantCake_a_model51_Gfx[];
extern Anim GiantCake_unk5Header_Animh;

Unk_800FFB74 D_800FFB60 = {
    GiantCake_unk5_Animarr,
    GiantCake_a_model51_Gfx,
    &GiantCake_unk5Header_Animh.objects,
    &GiantCake_unk5Header_Animh.frames,
    LIST_END,
};

Unk_800FFB74* D_800FFB74[] = {
    NULL, &D_800FF91C, &D_800FF930, &D_800FF944,
    &D_800FF958, &D_800FF96C, &D_800FF994, &D_800FF980,
    &D_800FF9A8, &D_800FF9BC, &D_800FFA20, &D_800FFA34,
    &D_800FFA48, &D_800FFA5C, &D_800FFA70, &D_800FF9D0,
    &D_800FF9E4, &D_800FF9F8, &D_800FFA0C, &D_800FFA84,
    &D_800FFA98, &D_800FFAAC, &D_800FFAC0, &D_800FFAD4,
    &D_800FFAE8, &D_800FFAFC, &D_800FFB10, &D_800FFB24,
    &D_800FFB38, &D_800FFB4C, &D_800FFB60, &D_800FF908,
    NULL
};
//unknown what these are supposed to be
Unk_800FFDDC D_800FFBF8[] = {
    {0x0001, 0x0000, 0x0000, 0x0000, 0x000E},
    {0x0001, 0x0001, 0x0000, 0x0000, 0x000E},
    {0x0001, 0x0002, 0x0000, 0x0000, 0x000E},
    {0x0001, 0x0003, 0x0000, 0x0000, 0x000E},
    {-2, 0x0000, 0x0000, 0x0000, 0x0000},
};

Unk_800FFDDC D_800FFC2C[] = {
    {0x0001, 0x0000, 0x0000, 0x0000, 0x000E},
    {0x0001, 0x0001, 0x0000, 0x0000, 0x000E},
    {0x0001, 0x0002, 0x0000, 0x0000, 0x000E},
    {0x0001, 0x0003, 0x0000, 0x0000, 0x000E},
    {-2, 0x0000, 0x0000, 0x0000, 0x0000},
};

Unk_800FFDDC D_800FFC60[] = {
    {0x0001, 0x0000, 0x0000, 0x0000, 0x004A},
    {0x0001, 0x0001, 0x0000, 0x0000, 0x004A},
    {0x0001, 0x0002, 0x0000, 0x0000, 0x004A},
    {-1, 0x0000, 0x0000, 0x0000, 0x0000}
};
Unk_800FFDDC D_800FFC88[] = {
    {0x0001, 0x0000, 0x0000, 0x0000, 0x0027},
    {0x0001, 0x0001, 0x0000, 0x0000, 0x0027},
    {0x0001, 0x0002, 0x0000, 0x0000, 0x0027},
    {0x0001, 0x0003, 0x0000, 0x0000, 0x0027},
    {-2, 0x0000, 0x0000, 0x0000, 0x0000},
};
Unk_800FFDDC D_800FFCBC[] = {
    {0x0001, 0x0000, 0x0000, 0x0000, 0x0027},
    {0x0001, 0x0001, 0x0000, 0x0000, 0x0027},
    {0x0001, 0x0002, 0x0000, 0x0000, 0x0027},
    {0x0001, 0x0003, 0x0000, 0x0000, 0x0027},
    {-2, 0x0000, 0x0000, 0x0000, 0x0000},
};
Unk_800FFDDC D_800FFCF0[] = {
    {0x003C, 0x0000, 0x0080, 0x0048, 0x005D},
    {0x0002, 0x0001, 0x007C, 0x0046, 0x005D},
    {0x0002, 0x0002, 0x007C, 0x004C, 0x005D},
    {0x0002, 0x0002, 0x0075, 0x0049, 0x005D},
    {0x0002, 0x0003, 0x006C, 0x0042, 0x005D},
    {0x0002, 0x0003, 0x0068, 0x003B, 0x005D},
    {0x0002, 0x0004, 0x006B, 0x0034, 0x005D},
    {0x0002, 0x0004, 0x0074, 0x002F, 0x005D},
    {0x0002, 0x0005, 0x007F, 0x0035, 0x005D},
    {0x0002, 0x0005, 0x0088, 0x003E, 0x005D},
    {0x0002, 0x0006, 0x008A, 0x0042, 0x005D},
    {0x0002, 0x0006, 0x0083, 0x0046, 0x005D},
    {0x001E, 0x0000, 0x0080, 0x0048, 0x005D},
    {-1, 0x0000, 0x0000, 0x0000, 0x0000}
};

Unk_800FFDDC* D_800FFD7C[] = {
    NULL, D_800FFCF0, D_800FFBF8, D_800FFC2C,
    D_800FFC60, D_800FFC88, D_800FFCBC, NULL
};

Unk_800FFDDC D_800FFD9C[] = {
    {0x0005, 0x0000, 0x0000, 0x0006, 0x0024},
    {0x0004, 0x0000, 0x0000, 0x0006, 0x0024},
    {-1, 0x0000, 0x0000, 0x0000, 0x0000},
};
Unk_800FFDDC D_800FFDBC[] = {
    {0x0005, 0x0000, 0x0000, 0x0006, 0x001C},
    {0x0004, 0xFFF4, 0x0000, 0x0006, 0x001D},
    {-1, 0x0000, 0x0000, 0x0000, 0x0000},
};

Unk_800FFDDC* D_800FFDDC[] = {0, D_800FFD9C, D_800FFDBC, NULL};
s32 D_800FFDEC = 0;
s16 D_800FFDF0 = 3;
s16 D_800FFDF4 = 1;

UnkBg D_800FFDF8[] = {
    {0x0000, 0xFFE0, 0x0040},
    {0x0040, 0xFFE0, 0x0041},
    {0x0080, 0xFFE0, 0x0042},
    {0x00C0, 0xFFE0, 0x0043},
    {0x0100, 0xFFE0, 0x0044},
    {0x0000, 0x0000, LIST_END}
};

UnkBg D_800FFE1C[] = {
    {0x0000, 0xFFE0, 0x003B},
    {0x0040, 0xFFE0, 0x003C},
    {0x0080, 0xFFE0, 0x003D},
    {0x00C0, 0xFFE0, 0x003E},
    {0x0100, 0xFFE0, 0x003F},
    {0x0000, 0x0000, LIST_END}
};

UnkBg D_800FFE40[] = {
    {0x0000, 0x0000, 0x00BB},
    {0x0000, 0x0000, LIST_END}
};

UnkBg D_800FFE4C[] = {
    {0x0000, 0x0000, 0x00BC},
    {0x0000, 0x0000, LIST_END}
};

UnkBg* D_800FFE58[] = {D_800FFDF8, D_800FFE1C, D_800FFE40, D_800FFE4C, NULL, NULL};
u64 D_800FFE70 = 0;
char D_800FFE78[] = "０１２３４５６７８９";
char D_800FFE90[] = "０１２３４５６７８９ＡＢＣＤＥＦ";

s32 gGameModeCurrent = 0;
s32 gGameModeState = 0;
s16 D_800FFEBC = 0;
s16 D_800FFEC0 = 2;

char D_800FFEC4[] = "ＣＯＮＧＲＡＴＵＬＡＴＩＯＮＳ！";
f32 D_800FFEE8 = 0.0f;
s16 D_800FFEEC[] = {0x18, 0x19, 0x1A, 0x1B, LIST_END};

extern StageData JungleLand_stageData;
extern StageData AntLand_stageData;
extern StageData BombLand_header_Lvlhdr;
extern StageData DesertCastle_header_Lvlhdr;
extern StageData KidsLand_header_Lvlhdr;
extern StageData GhostCastle_header_Lvlhdr;
extern StageData IntroOutro_header_Lvlhdr;
extern StageData BattleMode_header_Lvlhdr;
extern StageData Training_header_Lvlhdr;
extern StageData LizardKong_header_Lvlhdr;
extern StageData Quintella_header_Lvlhdr;
extern StageData BombSnake_header_Lvlhdr;
extern StageData Armadillo_header_Lvlhdr;
extern StageData GiantCake_header_Lvlhdr;
extern StageData PileOfBooks_header_Lvlhdr;
extern StageData BossRush_header_Lvlhdr;

//TODO: fix the segmented pointers here
StageLoadData gStageLoadData[] = {
    {&JungleLand_stageData, JungleLand_ROM_START, JungleLand_VRAM, JungleLand_VRAM_END, 0},
    {&AntLand_stageData, AntLand_ROM_START, AntLand_VRAM, AntLand_VRAM_END, 1},
    {&BombLand_header_Lvlhdr, BombLand_ROM_START, BombLand_VRAM, BombLand_VRAM_END, 2},
    {&DesertCastle_header_Lvlhdr, DesertCastle_ROM_START, DesertCastle_VRAM, DesertCastle_VRAM_END, 3},
    {&KidsLand_header_Lvlhdr, KidsLand_ROM_START, KidsLand_VRAM, KidsLand_VRAM_END, 4},
    {&GhostCastle_header_Lvlhdr, GhostCastle_ROM_START, GhostCastle_VRAM, GhostCastle_VRAM_END, 5},
    {&IntroOutro_header_Lvlhdr, IntroOutro_ROM_START, IntroOutro_VRAM, IntroOutro_VRAM_END, 6},
    {&BattleMode_header_Lvlhdr, BattleMode_ROM_START, BattleMode_VRAM, BattleMode_VRAM_END, 7},
    {&Training_header_Lvlhdr, Training_ROM_START, Training_VRAM, Training_VRAM_END, 8},
    {&LizardKong_header_Lvlhdr, LizardKong_ROM_START, LizardKong_VRAM, LizardKong_VRAM_END, 9},
    {&Quintella_header_Lvlhdr, Quintella_ROM_START, Quintella_VRAM, Quintella_VRAM_END, 10},
    {&BombSnake_header_Lvlhdr, BombSnake_ROM_START, BombSnake_VRAM, BombSnake_VRAM_END, 11},
    {&Armadillo_header_Lvlhdr, Armadillo_ROM_START, Armadillo_VRAM, Armadillo_VRAM_END, 12},
    {&GiantCake_header_Lvlhdr, GiantCake_ROM_START, GiantCake_VRAM, GiantCake_VRAM_END, 13},
    {&PileOfBooks_header_Lvlhdr, PileOfBooks_ROM_START, PileOfBooks_VRAM, PileOfBooks_VRAM_END, 14},
    {&BossRush_header_Lvlhdr, BossRush_ROM_START, BossRush_VRAM, BossRush_VRAM_END, 15},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1},
    {0, 0, 0, 0, -1}
};
s32 gStageToLoad = -1;

extern const char segNameCode[];
extern const char segNameStatic[];
extern const char segNameCommon[];
extern const char segNameFieldOfPlay[];
extern const char segNameFieldCommon[];
extern const char segNameRabbit[];
extern const char segNameSubAnimation[];
extern const char segNameCompetition[];
extern const char segNameBlue[];
extern const char segNameGreen[];
extern const char segNameYellow[];
extern const char segNamePink[];
extern const char segNameBlack[];
extern const char segNameWhite[];
extern const char segNameSpace[];
extern const char segNameDemo[];

segTableEntry gSegTable[16] = {
    {segNameCode, main_ROM_START, main_ROM_END, main_VRAM, main_VRAM_END},
    {segNameStatic, static0_ROM_START, static0_ROM_END, static0_VRAM, static0_VRAM_END},
    {segNameCommon, Global_ROM_START, Global_ROM_END, Global_VRAM, Global_VRAM_END},
    {segNameFieldOfPlay, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    {segNameFieldCommon, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    {segNameRabbit, Rabbit_ROM_START, Rabbit_ROM_END, Rabbit_VRAM, Rabbit_VRAM_END},
    {segNameSubAnimation, Animations_ROM_START, Animations_ROM_END, Animations_VRAM, Animations_VRAM_END},
    {segNameCompetition, Battle_Chameleons_ROM_START, Battle_Chameleons_ROM_END, Battle_Chameleons_VRAM, Battle_Chameleons_VRAM_END},
    {segNameBlue, Davy_ROM_START, Davy_ROM_END, Davy_VRAM, Davy_VRAM_END},
    {segNameGreen, Jack_ROM_START, Jack_ROM_END, Jack_VRAM, Jack_VRAM_END},
    {segNameYellow, Fred_ROM_START, Fred_ROM_END, Fred_VRAM, Fred_VRAM_END},
    {segNamePink, Linda_ROM_START, Linda_ROM_END, Linda_VRAM, Linda_VRAM_END},
    {segNameBlack, Black_ROM_START, Black_ROM_END, Black_VRAM, Black_VRAM_END},
    {segNameWhite, White_ROM_START, White_ROM_END, White_VRAM, White_VRAM_END},
    {segNameSpace, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    {segNameDemo, 0x00000000, 0x00000000, 0x00000000, 0x00000000}
};

typedef struct StageSelectData {
/* 0x00 */ s16 xPos;
/* 0x02 */ s16 yPos;
/* 0x04 */ s16 spriteID;
/* 0x06 */ s16 upPathID;
/* 0x08 */ s16 upRightPathID;
/* 0x0A */ s16 rightPathID;
/* 0x0C */ s16 downRightPathID;
/* 0x0E */ s16 downPathID;
/* 0x10 */ s16 downLeftPathID;
/* 0x12 */ s16 leftPathID;
/* 0x14 */ s16 upLeftPathID;
/* 0x16 */ u8 unk_16;
} StageSelectData; //sizeof 0x18 (with padding)

enum StageSelectStages{
    NONE = -1,
    JL, // 0
    AL, // 1
    BL, // 2
    DC, // 3
    KL, // 4
    GC, // 5
    BOSSRUSH // 6
};

#define canAccess(stage) TRUE << stage

StageSelectData StageSelect[] = {                                                                               //?        
    { 56, 192, SPRITE_JL_ICON,          BOSSRUSH,   AL,     BL,     BL,     NONE,   NONE,   NONE,       NONE,   -1},
    {108, 112, SPRITE_AL_ICON,          NONE,       DC,     DC,     KL,     BL,     JL,     BOSSRUSH,   NONE,   canAccess(JL) | canAccess(BL) | canAccess(DC) | canAccess(KL)},
    {148, 184, SPRITE_BL_ICON,          DC,         DC,     KL,     KL,     NONE,   JL,     JL,         AL,     canAccess(JL) | canAccess(AL) | canAccess(DC) | canAccess(KL)},
    {186,  80, SPRITE_DC_ICON,          NONE,       GC,     GC,     KL,     KL,     BL,     AL,         NONE,   canAccess(AL) | canAccess(BL) | canAccess(KL) | canAccess(GC)},
    {228, 152, SPRITE_KL_ICON,          DC,         GC,     NONE,   NONE,   NONE,   BL,     BL,         AL,     canAccess(AL) | canAccess(BL) | canAccess(DC) | canAccess(GC)},
    {258,  56, SPRITE_GC_ICON,          NONE,       NONE,   NONE,   KL,     KL,     KL,     DC,         NONE,   canAccess(DC) | canAccess(KL)},
    { 56, 110, SPRITE_BOSSRUSH_ICON,    NONE,       NONE,   AL,     NONE,   JL,     NONE,   NONE,       NONE,   0},
    {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

s16 NameSpriteIDs[] = {
    SPRITE_TEXT_JL2,
    SPRITE_TEXT_AL2,
    SPRITE_TEXT_BL2,
    SPRITE_TEXT_DC2,
    SPRITE_TEXT_KL2,
    SPRITE_TEXT_GC2,
    SPRITE_BOSS_RUSH_LABEL
};

extern const char stageNameJungleLand[];
extern const char stageNameAntLand[];
extern const char stageNameBombLand[];
extern const char stageNameDesertCastle[];
extern const char stageNameKidsLand[];
extern const char stageNameGhostCastle[];
extern const char stageNameSecret[];
extern const char stageNamePadding[];

const char* stageNames[] = {stageNameJungleLand, stageNameAntLand, stageNameBombLand, stageNameDesertCastle, stageNameKidsLand, stageNameGhostCastle, stageNameSecret, stageNamePadding};

s16 D_80100348[] = {-1, 0x800, 0x900, 0x100, 0x500, 0x400, 0x600, 0x200, 0xA00};

//save
extern const char D_8010E0CC[];
extern const char D_8010E0D4[];
extern const char D_8010E0DC[];
extern const char D_8010E0E4[];

const char* D_8010035C[] = {D_8010E0CC, D_8010E0D4, D_8010E0DC, D_8010E0E4, NULL};

s16 LoadFilePositions[] = {
    //X,   Y
     44,  64,
    188,  64,
     44, 136,
    188, 136
};

//????
extern const char D_8010E0EC[];
extern const char D_8010E0FC[];
extern const char D_8010E10C[];
extern const char D_8010E118[];
//???? part 2
extern const char D_8010E128[];
extern const char D_8010E138[];
extern const char D_8010E148[];
extern const char D_8010E154[];
//???? part 3
extern const char D_8010E164[];
extern const char D_8010E174[];
extern const char D_8010E184[];
extern const char D_8010E190[];
//???? part 4
extern const char D_8010E1A0[];
extern const char D_8010E1B0[];
extern const char D_8010E1BC[];
extern const char D_8010E1CC[];
extern const char D_8010E1DC[];
extern const char D_8010E1E8[];

const char* D_80100380[] = {
    D_8010E0EC, D_8010E0FC, D_8010E10C, D_8010E118,
    D_8010E128, D_8010E138, D_8010E148, D_8010E154,
    D_8010E164, D_8010E174, D_8010E184, D_8010E190,
    D_8010E1A0, D_8010E1B0, D_8010E1BC, D_8010E1CC,
    D_8010E1DC, D_8010E1E8, NULL
};

s16 D_801003CC[] = {0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D};
s16 gSelectedBattleBGM = -1;

//very unsure how this is supposed to be typed
stuff D_801003DC = {
    {2, 0, 0x0100},
    {0, 0, 0, 0, 0, 0}
};

s16 D_801003E8[] = {0x0040, 0x0080, 0x0080, 0x0080, 0x00C0, 0x0080, 0x0100, 0x0080};
s16 D_801003F8[] = {0x0044, 0x0080, 0x0080, 0x0080, 0x00BE, 0x0080, 0x00FC, 0x0080};

typedef struct unkStruct5FF30 {
    s32 unk0;
    const char* name;
} unkStruct5FF30;

//battle mode
extern const char D_8010E60C[];
extern const char D_8010E618[];
extern const char D_8010E624[];
extern const char D_8010E630[];
extern const char D_8010E63C[];
extern const char D_8010E648[];

unkStruct5FF30 D_80100408[] = {
    {0xFFF00060, D_8010E60C},
    {0xFFF00060, D_8010E618},
    {0xFFF00060, D_8010E624},
    {0xFFEC0060, D_8010E630},
    {0xFFEC0060, D_8010E63C},
    {0xFFEC0060, D_8010E648},
};

void schedproc(s32 arg0) {
    s32 var_s2;
    OSMesg mesg;

    var_s2 = 1;
    func_800A7844();
    osCreateMesgQueue(&gSchedMessageQueue, gSchedMessageQueueMsgs, ARRAY_COUNT(gSchedMessageQueueMsgs));
    osSetEventMesg(OS_EVENT_PRENMI, &gSchedMessageQueue, (OSMesg)SCHED_MESG_RESET);
    osSetEventMesg(OS_EVENT_DP, &gSchedMessageQueue, (OSMesg)SCHED_MESG_DP_TASK_DONE);
    osSetEventMesg(OS_EVENT_SP, &gSchedMessageQueue, (OSMesg)SCHED_MESG_SP_TASK_DONE);
    osViSetEvent(&gSchedMessageQueue, (OSMesg)SCHED_MESG_VINTR, 2); // 30 fps
    Timing_MeasureFrameDuration();

    while (1) {
        osRecvMesg(&gSchedMessageQueue, &mesg, OS_MESG_BLOCK);
        switch ((u32) mesg) {
            case SCHED_MESG_VINTR:
                arg0 = var_s2 + 1;
                osSetTimer(&D_801B3148, 586116, 0, &gSchedMessageQueue, (OSMesg) SCHED_MESG_TIMEOUT); // wait ~12.5 msec, then start audio
                if (arg0 != 0) {
                    // command main thread to update game and draw frame
                    if (osSendMesg(&gSyncMessageQueue, NULL, OS_MESG_NOBLOCK) == -1) {
                        DummiedPrintf("Gfx送信失敗\n");
                    } else {
                        var_s2 ^= 1;
                    }
                } else {
                    var_s2 ^= 1;
                }
                func_800A78D0();
                continue;
            case SCHED_MESG_SP_TASK_DONE:
                if (gAudioTaskState == AUDIO_TASK_STATE_RUNNING) {
                    DummiedPrintf("Ae"); // audio end
                    Timing_StopAudio();
                    gAudioTaskState = AUDIO_TASK_STATE_IDLE;
                    osSendMesg(&gAudioDoneMessageQueue, (OSMesg)1, OS_MESG_NOBLOCK);
                } else if (gAudioTaskState == AUDIO_TASK_STATE_PENDING) {
                    DummiedPrintf("Gy"); // gfx yield
                    Timing_StopGfx(); // when gfx task is resumed, this timer is not resumed, so duration might be incorrect
                    gGfxTaskRunning = FALSE;
                    // this queue is also used to report audio thread that gfx task yielded or finished
                    osSendMesg(&gAudioDoneMessageQueue, (OSMesg)1, OS_MESG_NOBLOCK);
                } else {
                    DummiedPrintf("Ge"); // gfx end
                    Timing_StopGfx();
                    gGfxTaskRunning = FALSE;
                }
                if (gGfxTaskPending) {
                    osSendMesg(&gSchedMessageQueue, (OSMesg)SCHED_MESG_START_VIDEO_TASK, OS_MESG_NOBLOCK);
                }
                continue;
            case SCHED_MESG_DP_TASK_DONE:
                DummiedPrintf("D"); // done
                if (D_800FF5CC != 0) {
                    D_800FF5CC--;
                    if (D_800FF5CC == 0) {
                        osViBlack(FALSE);
                    }
                }
                if (gGfxTaskStarted == TRUE) {
                    gGfxTaskStarted = FALSE;
                }
                osSendMesg(&gFrameDrawnMessageQueue, (OSMesg)2, OS_MESG_NOBLOCK);
                Timing_EndFrame();
                continue;
            case SCHED_MESG_START_VIDEO_TASK:
                if (gSchedReset) {
                    DummiedPrintf("Res "); // reset
                } else if (gAudioTaskState != AUDIO_TASK_STATE_IDLE) {
                    // wait until audio task is finished
                    gGfxTaskPending = TRUE;
                    DummiedPrintf("Sw "); // ??
                } else {
                    DummiedPrintf("Gs "); // gfx start
                    gGfxTaskPending = FALSE;
                    osWritebackDCacheAll();
                    osSpTaskStart(gCurrentGfxTask);
                    Timing_StartGfx();
                    gGfxTaskRunning = TRUE;
                    gGfxTaskStarted = TRUE;
                }
                continue;
            case SCHED_MESG_UNK_4:
                continue;
            case SCHED_MESG_START_AUDIO_TASK:
                if (!gSchedReset) {
                    // clear queue
                    osRecvMesg(&gAudioDoneMessageQueue, NULL, OS_MESG_NOBLOCK);
                    DummiedPrintf("As"); // audio start
                    gAudioTaskState = AUDIO_TASK_STATE_RUNNING;
                    osWritebackDCacheAll();
                    osSpTaskStart(gCurrentAudioTask);
                    Timing_StartAudio();
                }
                continue;
            case SCHED_MESG_TIMEOUT:
                // start audio task
                break;
            case SCHED_MESG_RESET:
                gSchedReset = TRUE;
                osViBlack(TRUE);
                osViSetYScale(1.0f);
                func_8007B174();
                Rumble_StopAll();
                continue;
            default:
                continue;
        }
        
        gAudioTaskState = AUDIO_TASK_STATE_PENDING;
        if (osSendMesg(&gSyncAudioMessageQueue, NULL, OS_MESG_NOBLOCK) == -1) {
            DummiedPrintf("Audio送信失敗\n");
        }
        // continue;   
    }
}

void Sched_SetGfxTask(OSTask* task, s32 fbIndex) {
    gCurrentGfxTask = task;
    D_800FF5D0 = fbIndex;
    osSendMesg(&gSchedMessageQueue, (OSMesg)SCHED_MESG_START_VIDEO_TASK, OS_MESG_NOBLOCK);
}

void Sched_SetAudioTask(OSTask* arg0) {
    gCurrentAudioTask = arg0;
    osSendMesg(&gSchedMessageQueue, (OSMesg)SCHED_MESG_START_AUDIO_TASK, OS_MESG_NOBLOCK);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_DMACallback.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_Dma.s")

void func_80085290(void) {
    void* temp_s1;
    unk_D_801FFB90* phi_s0 = D_801FFB90.unk_04;

    D_800FF63C = 0;
    if (phi_s0 != NULL) {
        do {
            temp_s1 = phi_s0->unk_00;
            D_800FF63C += 1;
            if ((u32) (phi_s0->unk_0C + 2) < D_80200054) {
                if (phi_s0 == D_801FFB90.unk_04) {
                    D_801FFB90.unk_04 = phi_s0->unk_00;
                }
                alUnlink((void*)phi_s0);
                if (D_801FFB90.unk_08 != 0) {
                    alLink((void*)phi_s0, D_801FFB90.unk_08);
                } else {
                    D_801FFB90.unk_08 = phi_s0;
                    phi_s0->unk_00 = NULL;
                    phi_s0->unk_04 = 0;
                }
            }
            phi_s0 = temp_s1;
        } while (temp_s1 != NULL);
    }
}

f32 func_80085364(u8 arg0) {
    f32 var_f0;
    f32 var_f2;
    
    var_f0 = 1.030992985;
    var_f2 = 1.0f;

    while ((u32)arg0 != 0) {
        s32 temp;
        if (arg0 & 1) {
            var_f2 *= var_f0;
        }
        temp = arg0;
        var_f0 *= var_f0;
        arg0 = ((u32)temp >> 1);
    } 

    return var_f2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_InitOsc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_UpdateOsc.s")

void Audio_StopOsc(struct UnkList* arg0) {
    arg0->unk0 = D_80200060.unk0;
    D_80200060.unk0 = arg0;
}

void Audio_RomCopy(u32 devAddr, void* vAddr, u32 size) {
    osWritebackDCacheAll();
    osPiStartDma(&D_801FF7F0, 0, 0, devAddr, vAddr, size, &D_801FF750);
    osRecvMesg(&D_801FF750, NULL, OS_MESG_BLOCK);
}

void func_80085C90(u32 arg0, void* arg1, s32 arg2) {
    osInvalICache(arg1, arg2);
    osInvalDCache(arg1, arg2);
    osPiStartDma(&D_801FF7F0, 0, 0, arg0, arg1, (u32) arg2, &D_801FF750);
    osRecvMesg(&D_801FF750, NULL, 1);
}

void func_80085D14(void) {
    D_800FF5E4 = 0;
    D_800FF5E8 = 0;
    D_801FCA00 = 0.0;
    gGfxTaskRunning = 0;
    gAudioTaskState = 0;
    D_800FF5F4 = 0;
    gIsPaused = 0;
    D_800FF604 = 0;
    D_800FF608 = 0;
    D_800FF64C = 0;
    D_800FF650 = 0;
    gIsStero = 0;
    TempoBGMBool = 0;
    TempoToSetBGM = 0;
    D_801FC9A0 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_Init.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/audioproc.s")

void Audio_StartThread(void) {
    Audio_Init();
    osCreateThread(&gAudioThread, 4, (void*) audioproc, NULL, &D_801FF710, 0x5A);
    osStartThread(&gAudioThread);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086C7C.s")

unk0* func_80086EB4(s32 arg0) {
    unk0* next;
    unk0* prev;

    prev = D_801FFB84->unk50;
    next = prev->unk50;
    
    while (next != NULL) {
        if (arg0 == prev->unk40) {
            return prev;
        }
        prev = next;
        next = next->unk50;
    }
    return 0;
}

s16 func_80086EFC(s32 arg0) {
    unk0* next;
    unk0* prev;

    prev = D_801FFB84->unk50;
    next = prev->unk50;
    
    while (next != NULL) {
        if (arg0 == prev->unk40) {
            return prev->unk42;
        }
        prev = next;
        next = next->unk50;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086F44.s")

void func_80087088(unk0* arg0) {
    unk0* temp_v0;
    unk0* temp_v1_2;
    s16 temp = arg0->unk22;
    
    if (D_801FFB88[temp].unk0 > 0) {
        D_801FFB88[temp].unk0--;
    }
    if (arg0->unk20 != 0) {
        temp_v0 = arg0->unk54;
        if (temp_v0 != NULL) {
            temp_v1_2 = arg0->unk50;
            if (temp_v1_2 != NULL) {
                if ((arg0->unk48 >= 0) && (arg0->unk48 < 0x10)) {
                    DummiedPrintf("音鳴ってます (%d)\n", arg0->unk48);
                    return;
                }
                temp_v1_2->unk54 = temp_v0;
                temp_v0->unk50 = temp_v1_2;
                arg0->unk48 = -1;
                arg0->unk20 = 0;
                arg0->unk0 = 0;
                arg0->unk4 = 0;
                arg0->unk8 = 0;                
            }
        }
    }
}

s32 func_80087130(unk0* arg0, unk0* arg1) {
    unk0* temp_v1;

    temp_v1 = arg1->unk50;
    arg1->unk50 = arg0;
    arg0->unk54 = arg1;
    arg0->unk50 = temp_v1;
    temp_v1->unk54 = arg0;
    return 0;
}

//theres a lot of things wrong with this one
s32 func_8008714C(unk0* arg0, s32 arg1) {
    unk0* temp_v0 = arg0->unk50;
    unk0* temp_a1 = arg0->unk54;
    temp_a1->unk50 = arg0->unk50;
    temp_v0->unk54 = temp_a1;
    func_80087130(arg0, temp_a1);
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087290.s")

s32 StopSoundEffect(s32 arg0) {
    unk0* temp_v0 = func_80086EB4(arg0);

    if (temp_v0 == NULL) {
        return -1;
    }

    return func_80087290(temp_v0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008746C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800874E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087824.s")

s16 func_8008788C(s32 arg0, f32 arg1) {
    s32 var_v0 = 0;
    unk0* var_v1 = D_801FFB84->unk50;
    unk0* var_a1 = var_v1->unk50;

    while (var_a1 != NULL) {
        if (arg0 == var_v1->unk22) {
            var_v0 = 1;
            if (arg1 <= var_v1->unk18) {
                return var_v1->unk40;
            }
        }
        var_v1 = var_a1;
        var_a1 = var_a1->unk50;
    }
    
    if (var_v0 == 0) {
        return -1;
    }
    
    return -2;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/AddSoundEffect.s")

void func_80087E60(f32* arg0, f32* arg1, f32* arg2, f32* arg3) {
    *arg0 = gPlayerActors[D_800FF8E8].pos.x;
    *arg1 = gPlayerActors[D_800FF8E8].pos.y;
    *arg2 = gPlayerActors[D_800FF8E8].pos.z;
    *arg3 = gCameraP->f1.y;
}

s32 PlaySoundEffect(s32 id, f32* posX, f32* posY, f32* posZ, s32 arg4, s32 flag) {
    if (gSFXMute > 0) {
        return -1;
    }
    if ((id >= D_80200A90->unk_0E) || (id < 0)) {
        return -1;
    }
    if ((D_800FF5E4 > 0) && !(flag & 8)) {
        return -1;
    }
    if (flag & 0x40) {
        flag |= 0x10;
    }
    else if (gIsPaused == 1) {
        return -1;
    }
    if (D_80168DA0 >= 2) {
        flag |= 0x10;
    }
    return AddSoundEffect(id, posX, posY, posZ, arg4, flag);
}

void func_80087FA4(u32 arg0) {
    D_800FF5E8 = arg0;
    D_800FF5E4 = arg0;
    
    if (arg0 == 0) {
        D_801FCA00 = 0.0;
        return;
    }
    
    D_801FCA00 = 1.0 / arg0;
}

void func_8008800C(s32 arg0) {
    D_800FF5E8 = arg0;
    D_800FF5E4 = arg0;
    D_801FCA00 = 0.0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800882D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088528.s")

s32 func_800885EC(s32 arg0, s32 arg1) {
    s32 v1;
    unk0 *temp_v0;
    
    temp_v0 = func_80086EB4(arg0);
    if (temp_v0 == 0) {
        return -1;
    }
    
    if (arg1 < 0) {
        arg1 = 0;
    } else {
        if (arg1 < 0x7F) {
            v1 = arg1;
        } else {
            v1 = 0x7F;
        }
        arg1 = v1;
    }
    
    if (arg1 == temp_v0->unk3D) {
        return 0;
    } else {
        temp_v0->unk3D = arg1;
        if ((temp_v0->unk48 >= 0) && (temp_v0->unk48 < 0x10)) {
            alSndpSetSound(gSFXPlayerP, temp_v0->unk48);
            alSndpSetFXMix(gSFXPlayerP, arg1);
        }
    }
    
    return 0;
}

s32 func_80088698(s32 arg0) {
    unk0* temp_v0 = func_80086EB4(arg0);

    if (temp_v0 == 0) {
        return -1;
    }

    temp_v0->unk20 |= 0x20;
    return 0;
}

s32 func_800886D8(s32 arg0, s16 arg1, s16 arg2) {
    unk0* temp_v0;

    temp_v0 = func_80086EB4(arg0);
    if (temp_v0 == NULL) {
        return -1;
    }
    
    temp_v0->unk30 = arg1;
    temp_v0->unk2C = (f32)(arg1 - temp_v0->unk32) / arg2;
    return 0;
}

s32 func_8008873C(f32* arg0, f32* arg1, f32* arg2) {
    if (++D_800FF64C >= 0x80) {
        D_800FF64C = 0;
    }
    
    if (D_800FF64C == D_800FF650 ) {
        return 0;
    }
    DummiedPrintf("TALK = %d\n", D_80200A98[D_800FF64C]);
    return AddSoundEffect(D_80200A98[D_800FF64C], arg0, arg1, arg2, 0, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800887F0.s")

void func_80088B7C(u8* arg0, u8* arg1, u8* arg2, u8* arg3, u8* arg4, u8* arg5) {
    f32 temp_f0;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_v1;
    
    temp_v0 = D_80174998 & 7;
    temp_t6 = (D_80174998 & 0x18) / 8;
    if (temp_t6 == 0) {
        temp_f0 = (ABS2(temp_v0)) / (Eight);
        *arg0 = (0 * temp_f0) + 255;
        *arg1 = (-175 * (temp_f0)) + 255;
        *arg2 = 0 * temp_f0;
        *arg3 = 0xFF;
        *arg4 = 0xFF;
        *arg5 = 0;
    } else if (temp_t6 == 1) {
        temp_f0 = (ABS2(temp_v0)) / (Eight);
        *arg0 = 0xFF;
        *arg1 = 0x50;
        *arg2 = 0;
        *arg3 = (0 * temp_f0) + 255;
        *arg4 = (-175 * temp_f0) + 255;
        *arg5 = 0 * temp_f0;
    } else if (temp_t6 == 2) {
        temp_f0 = (8 - (ABS2(temp_v0))) / (Eight);
        *arg0 = (0 * temp_f0) + 255;
        *arg1 = (-175 * temp_f0) + 255;
        *arg2 = 0 * temp_f0;
        *arg3 = 0xFF;
        *arg4 = 0x50;
        *arg5 = 0;
    } else {
        temp_f0 = (8 - (ABS2(temp_v0))) / (Eight);
        *arg0 = 0xFF;
        *arg1 = 0xFF;
        *arg2 = 0;
        *arg3 = (0 * temp_f0) + 255;
        *arg4 = (-175 * temp_f0) + 255;
        *arg5 = 0 * temp_f0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800893C0.s")

//story
const char D_8010D840[] = "ＣＡＮＣＥＬ";
const char D_8010D850[] = "ＳＡＶＥ";
const char D_8010D85C[] = "ＳＴＡＧＥ  ＱＵＩＴ";
const char D_8010D874[] = "ＥＸＩＴ";

//training (during round)
const char D_8010D880[] = "ＣＡＮＣＥＬ";
const char D_8010D890[] = "ＲＥＳＴＡＲＴ";
const char D_8010D8A0[] = "ＥＸＩＴ";

//training (normal)
const char D_8010D8AC[] = "ＣＡＮＣＥＬ";
const char D_8010D8BC[] = "ＥＸＩＴ";

const char D_8010D8C8[] = "ＹＥＳ";
const char D_8010D8D0[] = "ＮＯ";

const char D_8010D8D8[] = "ＹＥＳ";
const char D_8010D8E0[] = "ＮＯ";

// Display In Game Timer
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089BA0.s")

// Exit Stage Menu?
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089E24.s")

void PlayJungleExtSfx(void) {
    if (isInOverworld == FALSE) {
        if (gIsNotInCave == 1) {
            PlayBGM(BGM_JUNGLE_INT);
        }
    } else if (((s32) gTimer % 300) == 299) {
        PLAY_SFX(Random(0, 5) + SFX_4F_unkSnd, 1, 0x10);
    }
    gIsNotInCave = isInOverworld;
}

void PlayJungleExtSfxWrapper(void) {
    if ((gGameModeCurrent == GAME_MODE_OVERWORLD) && (gCurrentStage == STAGE_JUNGLE)) {
        PlayJungleExtSfx();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008A2EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/ManagePauseMenu.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008B458.s")

s32 LoadBGM(void) {
    //possibly a struct on the stack?
    s32 sp24;
    s32 sp28; //unused
    s32 devAddr;
    s32 temp_t4; //unused
    s32 temp_v0;
    s32 var_v0; //unused
    s32 var_v1; //unused
    BGMVolume* temp_t2;
    s32 anotherTemp;

    if ((gGameModeCurrent == GAME_MODE_DEMO) || (gGameModeCurrent == GAME_MODE_CREDITS_DEMO)) {
        return 0;
    }

    if ((gIsPaused != 0) && (D_800FF604 == 0)) {
        if (alCSPGetState(gBGMPlayerP) == AL_PLAYING) {
            alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, 0);
            alCSPStop(gBGMPlayerP);
            D_800FF608 = 1;
        } else {
            D_800FF608 = 0;
        }
        D_800FF604 = gIsPaused;
        return 0;
    }

    if ((gIsPaused == 0) && (D_800FF604 != 0)) {
        if ((alCSPGetState(gBGMPlayerP) != AL_PLAYING) || (D_800FF608 != 0)) {
            if ((gGameModeCurrent != GAME_MODE_DEMO) && (gGameModeCurrent != GAME_MODE_CREDITS_DEMO)) {
                alCSPPlay(gBGMPlayerP);
            }
            alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, D_801FCA22);
        }
        D_800FF604 = gIsPaused;
        return 0;
    }
    
    if (gIsPaused != 0) {
        return 0;
    }
    
    if (D_801FC9A0 != 0) {
        if (volBGM.vol > 0) {
            volBGM.vol = volBGM.vol - D_801FC9A0;
            if (volBGM.vol < 0) {
                volBGM.vol = 0;
            }
            alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, volBGM.vol);
        } 
    }
    
    // Is always 0 (dead code)
    if (TempoBGMBool != 0) {
        alCSPSetTempo(gBGMPlayerP, TempoToSetBGM);
    } else {
        TempoBGM = alCSPGetTempo(gBGMPlayerP);
    }
    
    temp_v0 = alCSPGetState(gBGMPlayerP);
    
    if (currLoadingBGM == -1) {
        if ((temp_v0 == AL_STOPPED) && (doesBGMLoop != 0)) {
            currLoadingBGM = currBGMIndex;
        } else {
            return 0;
        }
    }
    else if (temp_v0 != AL_STOPPED) {
        return 0;
    }
    
    currBGMIndex = currLoadingBGM;
    sp24 = gBGMALSeqFileP->seqArray[currBGMIndex].len; 
    devAddr = (s32)gBGMALSeqFileP->seqArray[currBGMIndex].offset;
    
    if (sp24 & 1) {
        sp24++;
    }
    
    osInvalDCache(D_801FD550, sp24);
    Audio_RomCopy(devAddr, D_801FD550, sp24);
    alCSeqNew(gBGMSeqP, (u8*)D_801FD550);
    alCSPSetSeq(gBGMPlayerP, gBGMSeqP);
    volBGM = volumesBGM[currBGMIndex];
    alCSPPlay(gBGMPlayerP);
    alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, D_801FCA22);
    currLoadingBGM = -1;
    TempoBGMBool = 0;
    TempoToSetBGM = 0;
    TempoBGM = 0;
    return 1;
}

//uses "BGM_*" #defines
s32 PlayBGM(s32 index) {
    if ((index >= gBGMALSeqFileP->seqCount) || (index < 0)) {
        return -1;
    }
    if (gBGMPlayerP->state == AL_PLAYING) {
        alCSPStop(gBGMPlayerP);
    }
    currLoadingBGM = index;
    D_801FC9A0 = 0;
    return 0;
}

s32 func_8008BE14(void) {
    doesBGMLoop = 0;
    if (gBGMPlayerP->state == AL_PLAYING) {
        alCSPStop(gBGMPlayerP);
    }
    func_80088198();
    D_800FF5E4 = 0;
    D_800FF5E8 = 0;
    D_801FCA00 = 0.0;
    D_800FF5F4 = 0;
    gIsPaused = 0;
    D_800FF604 = 0;
    D_800FF608 = 0;
    D_800FF64C = 0;
    D_800FF650 = 0;
    TempoBGMBool = 0;
    TempoToSetBGM = 0;
    D_801FC9A0 = 0;
    currLoadingBGM = -1;
    D_801FCA48 = 1;
    return 0;
}

s32 StopBGM(void) {
    doesBGMLoop = 0;
    if (gBGMPlayerP->state == AL_PLAYING) {
        alCSPStop(gBGMPlayerP);
    }
    return 0;
}

s32 func_8008BF20(void) {
    volBGM = volumesBGM[currBGMIndex];
    if ((gBGMPlayerP->state != AL_PLAYING) && (gGameModeCurrent != GAME_MODE_DEMO) && (gGameModeCurrent != GAME_MODE_CREDITS_DEMO)) {
        alCSPPlay(gBGMPlayerP);
    }
    return 0;
}

s32 func_8008BFA8(s32 vol) {
    alSeqpSetVol((ALSeqPlayer*)gBGMPlayerP, vol);
    volBGM.vol = vol;
    return 0;
}

s32 func_8008BFE0(s32 arg0) {
    D_801FC9A0 = (s32) ((f32)volBGM.vol / (f32)arg0) + 1;
    return 0;
}

s32 alCSPGetTempoWrapper(void) {
    return alCSPGetTempo(gBGMPlayerP);
}

// This code is never run
s32 func_8008C040(s32 arg0) {
    if (arg0 > 0) {
        TempoToSetBGM = arg0;
        TempoBGMBool = 1;
    } else {
        TempoBGMBool = 0;
    }
    return 0;
}

void func_8008C070(s32 arg0) {
    if (arg0 != 0) {
        gIsStero = 1;
        return;
    }
    gIsStero = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C094.s")

void func_8008C1C8(Gfx** arg0) {
    Gfx* sp4C = *arg0;

    if ((gSelectedCharacters[0] == CHARA_WHITE) && (gGameModeCurrent == 0)) {
        if ((D_80176F58[0] == 0) && (gOneRun != 0)) {
            if ((gNoHit != 0) && (gCurrentStage != STAGE_TRAINING)) {
                SetTextGradient_TopBottom(255, 255, 0, 255, 255, 0, 0, 255);
                printUISprite(276.0f, 204.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, SPRITE_STAR2);
            }
        }
    }

    ManagePauseMenu();
    func_8008C094();
    func_8008A2EC();
    PlayJungleExtSfxWrapper();
    func_8008D060();
    func_8008C438();
    *arg0 = sp4C;
}

void PlayStageBGM(s32 arg0) {
    PlayBGM(sStageBGMs[arg0]);
}

void func_8008C35C(Gfx** arg0) {

}

s32 Actor_PlaySound(Actor* actor, s32 sfxID, s32 unused1, s32 unused2) {
    s32 ret;

    if (gGameModeCurrent == GAME_MODE_BATTLE_MENU) {
        ret = PLAY_SFX(sfxID, 1, 0x10);
    } else {
        ret = PLAY_SFX_AT(sfxID, actor->pos, 0, 0);
    }
    return ret;
}

void func_8008C3F0(Actor* actor, s32 sfxID, s32 unused) {
    PLAY_SFX_AT(sfxID, actor->pos, 1, 0);
}

s32 func_8008C438(void) {
    return 0;
}

void Timing_StartGfx(void) {
    Timing_StartGfxTime = (u32) osGetTime();
}

void Timing_StopGfx(void) {
    Timing_StopGfxTime = osGetTime() - Timing_StartGfxTime;
}

void Timing_StartProcess(void) {
    Timing_StartProcessTime = (u32) osGetTime();
}

void Timing_StopProcess(void) {
    Timing_StopProcessTime = osGetTime() - Timing_StartProcessTime;
}

void Timing_EndFrame(void) {
    Timing_EndFrameTime = osGetTime() - Timing_StartGfxTime;
    Timing_BusyTime = (f32) (Timing_EndFrameTime / 1563000.0); // between 0 and 1
}

void func_8008C554(void) {
    D_800FF8AC = osGetTime() - Timing_StartProcessTime;
}

void Timing_WaitForNextFrame(void) {
    OSMesg mesg;

    while (1) {
        if (osRecvMesg(&gSchedMessageQueue, &mesg, OS_MESG_NOBLOCK) == -1) {
            continue;
        }
        if (mesg == SCHED_MESG_VINTR) {
            //"/* Ｖ割り込みだったらブレイク */\n"("Break if V interrupt")
            DummiedPrintf("/* Ｖ割り込みだったらブレイク */\n", mesg);
            break;
        } else {
            //"%d\n"
            DummiedPrintf("%d\n", mesg);
        }
    }
}

void Timing_MeasureFrameDuration(void) {
    while (1) {
        if (osRecvMesg(&gSchedMessageQueue, NULL, OS_MESG_NOBLOCK) == -1) {
            break;
        }
    }
    Timing_WaitForNextFrame();
    D_800FF884 = osGetTime();
    Timing_WaitForNextFrame();
    D_800FF884 = osGetTime() - D_800FF884;
    //"１フレーム時間 %d\n" ("1 frame time %d")
    DummiedPrintf("１フレーム時間 %d\n", D_800FF884);
}

void Timing_StartAudio(void) {
    Timing_StartAudioTime = osGetCount();
    Timing_DelayAudioInterval = Timing_StartAudioTime - Timing_StartProcessTime;
}

void Timing_StopAudio(void) {
    D_800FF890[D_800FF8BC] = osGetCount() - Timing_StartAudioTime;
}

// not used
void func_8008C714(void) {
    D_800FF8B8 = osGetTime();
    D_801B3168 = D_800FF8B8 - Timing_StartProcessTime;
}

// not used
void func_8008C750(void) {
    D_800FF8B4 = osGetTime() - D_800FF8B8;
}

s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2) {
    Mtx* sp64;
    Gfx* sp60;
    s32 var_s2;
    Gfx* var_v1;
    s32 mtxArrayIndex;

    sp64 = *arg0;
    var_s2 = 1;
    sp60 = *arg1;
    
    DummiedPrintf("S_PutDList In\n");
    DummiedPrintf("%X\n", arg2);
    while (1) {
        if (!IS_SEGMENTED(arg2)) {
            var_v1 = arg2;
        } else {
            var_v1 = SEGMENTED_TO_VIRTUAL(arg2);
        }

        switch (var_v1->words.w0 >> 0x18) {
            default:
                var_s2 = 0;
                gSPDisplayList(sp60++, arg2);
                break;
            case G_MTX:
                //this calculation is bizzare...var_v1->words.w1 can be a segmented addr -
                mtxArrayIndex = (var_v1->words.w1 - (u32)AnimationSlots) / sizeof(Mtx);
                if ((mtxArrayIndex >= 0) && (mtxArrayIndex < 40)) {
                    gSPMatrix(sp60++, sp64, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                    sp64++;
                } else {
                    gSPMatrix(sp60++, var_v1->words.w1, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                }
                break;
            case G_DL:
                PutDList(&sp64, &sp60, (Gfx*)var_v1->words.w1);
                break;
        }
        arg2++;
        if (var_s2 == 0) {
            break;
        }
    }
    *arg1 = sp60;
    *arg0 = sp64;
    DummiedPrintf("S_PutDList Out\n");
    return 0;
}

// Uses Dlist
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C940.s")

void strcpy(u8* arg0, u8* arg1) {
    while ((*arg0++ = *arg1++)) {}
}

/**
 * @brief Run a CTTask's assigned function
 * 
 * @param task 
 */
void CTTask_Run(CTTask* task) {
    void (*temp)(CTTask*); //?
    void (*taskFunc)(CTTask*);
    
    temp = taskFunc = task->function;
    if (taskFunc == 0) {
        DummiedPrintf("NULL POINTER %d\n", task->taskID);
        taskFunc = task->function;
    }
    // If function ptr is not in virtual memory space
    else if ((u32)taskFunc < 0x80000000) {
        DummiedPrintf("BAD POINTER %d, %X\n", task->taskID, (u32)task->function);
        taskFunc = task->function;
    }
    
    if ((u32)taskFunc & 1) {
        DummiedPrintf("ERROR POINTER %X\n", task);
    }
    
    taskFunc(task);
}


/**
 * @brief Remove a CTTask from the linked list by linking its surrounding tasks together (sets task to inactive)
 * 
 * @param taskToRemove 
 */
void CTTask_Unlink(CTTask* taskToRemove) {
    CTTask* nextTask = taskToRemove->next;
    CTTask* prevTask = taskToRemove->prev;

    nextTask->prev = prevTask;
    prevTask->next = nextTask;
    taskToRemove->runType = 0;
}

/**
 * @brief Clear the CTTask linked list by freeing all tasks
 */
void CTTaskList_Clear(void) {
    CTTask* prev;
    CTTask* curr = gCTTaskHead->next;
    
    while (curr->next != 0) {
        prev = curr;
        CTTask_Unlink(curr);
        curr = curr->next;
        Free(prev);
    }
}

//rain did this one but didnt add it
void Task_ClearMost(void) {
    CTTask* temp_s0;
    CTTask* var_s1;

    var_s1 = gCTTaskHead->next;
    while (var_s1->next != NULL) {
        temp_s0 = var_s1;
        var_s1 = var_s1->next;
        if (temp_s0->taskID != 240) {
            CTTask_Unlink(temp_s0);
            Free(temp_s0);
        }           
    }
}

/**
 * @brief Initialize the CTTask linked list
 */
void CTTaskList_Init(void) {
    gCTTaskHead = _malloc(sizeof(CTTask));
    gCTTaskTail = _malloc(sizeof(CTTask));
    if (gCTTaskHead == NULL) {
        DummiedPrintf("TaskInit()メモリ足りません\n", &gCTTaskTail);
    }
    if (gCTTaskTail == NULL) {
        DummiedPrintf("TaskInit()メモリ足りません\n", &gCTTaskTail);
    }
    gCTTaskHead->taskID = 0;
    gCTTaskHead->next = gCTTaskTail;
    gCTTaskHead->prev = NULL;
    gCTTaskTail->taskID = 0xFF;
    gCTTaskTail->next = NULL;
    gCTTaskTail->prev = gCTTaskHead;
}

const char D_8010DA14[] = "壊された %X\n";

void CTTask_Unlink_2(CTTask* task) {
    CTTask* nextTask;
    CTTask* prevTask;

    nextTask = task->next;
    prevTask = task->prev;
    nextTask->prev = prevTask;
    prevTask->next = nextTask;
    task->runType = 0;
    Free(task);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/bzero32.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/CTTask_Alloc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D060.s")

void func_8008D114(GraphicStruct* arg0, s32 fbIndex) {
    Video_SetTask(arg0, arg0->UnkGroup.dlist, fbIndex);
    osWritebackDCache(arg0, sizeof(GraphicStruct));
    Sched_SetGfxTask(&D_800F04E0[fbIndex], fbIndex);
}

Gfx* func_8008D168(Gfx* gfxPos, s32 arg1, s32 arg2) {
    s32 i;

    gSPSegment(gfxPos++, 0x00, 0);
    gSPSegment(gfxPos++, 0x01, OS_K0_TO_PHYSICAL(_ALIGN((u32)gFrameBuffers - (u32)static0_VRAM_END + (u32)static0_VRAM, 16)));

    for (i = 2; i < 16; i++) {
        if (D_80100F50[i].base_address != NULL) {
            gSPSegment(gfxPos++, i, OS_K0_TO_PHYSICAL(D_80100F50[i].base_address));
        }
    }

    if (D_800FFEC0 != 0) {
        gSPDisplayList(gfxPos++, D_1015AE8);
    } else {
        gSPDisplayList(gfxPos++, D_1015AB8);
    }
    gSPDisplayList(gfxPos++, D_1015A70);

    if (D_800FFEC0 != 0) {
        gDPSetCycleType(gfxPos++, G_CYC_FILL);
        gDPSetRenderMode(gfxPos++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(gfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, OS_K0_TO_PHYSICAL(&gFrameBuffers[arg1]));
        gDPSetFillColor(gfxPos++, PACK_FILL_COLOR(D_800FF8DC, D_800FF8E0, D_800FF8E4, 1));
        gDPFillRectangle(gfxPos++, 0, 0, 319, 239);
        gDPPipeSync(gfxPos++);
    } else {
        gDPSetCycleType(gfxPos++, G_CYC_FILL);
        gDPSetRenderMode(gfxPos++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(gfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, OS_K0_TO_PHYSICAL(&gFrameBuffers[arg1]));
        gDPSetFillColor(gfxPos++, PACK_FILL_COLOR(D_800FF8DC, D_800FF8E0, D_800FF8E4, 1));
        gDPFillRectangle(gfxPos++, 18, 16, 337, 247);
        gDPPipeSync(gfxPos++);
    }

    if (D_800FFEC0 != 0){
        D_800FFEC0--;
    }
    gSPDisplayList(gfxPos++, D_1015B18);
    gDPSetColorImage(gfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, OS_K0_TO_PHYSICAL(&gFrameBuffers[arg1]));
    return gfxPos;
}

s32 func_8008D5DC(ContMain* controller) {
    //CANNOT be a Vec2f.
    f32 stickX = controller->stickX;
    f32 stickY = controller->stickY;
    s32 result = 0;

    if (NORM_2(stickX, stickY) < 20.0) {
        return 0;
    }
    if (stickX >= 25) {
        result = 0x100;
    }
    if (stickX <= -25) {
        result |= 0x200;
    }
    if (stickY >= 25) {
        result |= 0x800;
    }
    if (stickY <= -25) {
        result |= 0x400;
    }
    return result;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D6B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D6E4.s")

s32 func_8008D7B0(CTTask* task) {
    s32 funcResult = func_8008D7FC(task);
    task->unk50 = ChameleonGfxs[gSelectedCharacters[D_800FF8E8]];
    return funcResult;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D7FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D950.s")

//macros???
void func_8008DAB8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 unused, s16 arg6, s16 arg7) {
    func_8005747C(arg0, 180 - arg1, arg2 - 80, arg3, arg4, arg6, arg7);
}

void func_8008DB24(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s16 unused, s16 arg6, s16 arg7) {
    func_8005747C(arg0, 180.0f - arg1, arg2 - 80.0f, arg3, arg4, arg6, arg7);
}

void func_8008DB90(Gfx** pGfxPos, GraphicStruct* arg1) {
    CTTask* task;
    Mtx* var_a0;
    s32* var_t0;
    s32 i;
    s32 v12;
    Gfx* gfxPos;
    Mtx* mtxTranslate;
    Mtx* mtxRotate;
    Mtx* mtxScale;    
    u32 mtxCount;
    Mtx* s4;
    Unk_800FFB74* v1;
    
    gfxPos = *pGfxPos;
    D_800FF8D4 = arg1->unk1e880;

    if (D_800FFDEC) { } // required for matching

    task = gCTTaskHead->next;
    while (task->next != NULL) {
        if ((task->unk4E & 1) && task->unk46 > 0) {
            v1 = D_800FFB74[task->unk46];

            if (!IS_SEGMENTED(v1->unk_00)) {
                var_a0 = v1->unk_00;
            } else {
                var_a0 = SEGMENTED_TO_VIRTUAL(v1->unk_00);
            }

            if (!IS_SEGMENTED(v1->unk_08)) {
                var_t0 = v1->unk_08;
            } else {
                var_t0 = SEGMENTED_TO_VIRTUAL(v1->unk_08);
            }
            v12 = *var_t0;
            for (i = 0; i < v12; i++) {
                *D_800FF8D4++ = var_a0[v12 * (s32)task->unk40 + i];
            }
        }
        task = task->next;
    }

    D_800FF8D4 = arg1->unk1e880;
    
    mtxTranslate = arg1->actorTranslate;
    mtxScale = arg1->actorScale;
    mtxRotate = arg1->actorRotate;    

    task = gCTTaskHead->next;
    while (task->next != NULL) {
        if ((task->unk4E & 1) && task->unk46 > 0) {
            s4 = D_800FF8D4;

            if (D_801FC9AC == 1) {
                guTranslate(mtxTranslate, task->pos.x, 180.0f - task->pos.y, task->pos.z);
            } else {
                guTranslate(mtxTranslate, task->pos.x, 180.0f - task->pos.y, task->pos.z);
            }
            guRotate(mtxRotate, task->rotA, task->rot.x, task->rot.y, task->rot.z);
            guScale(mtxScale, task->scale.x, task->scale.y, task->scale.z);

            gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(mtxTranslate), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
            gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(mtxRotate), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
            gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(mtxScale), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            PutDList(&D_800FF8D4, &gfxPos, task->unk50);
            gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);

            if (task->unk4E & 2) {
                f32 sp8C = 0.0f;
                f32 sp88 = 0.0f;
                f32 sp84 = 0.0f;
                Unk_800FFDDC* s0 = D_800FFDDC[task->unk_04];

                for (i = 0; s0[i].unk_00 >= 0; i++) {
                    guMtxXFML(mtxRotate, sp8C, sp88, sp84, &sp8C, &sp88, &sp84);
                    guMtxXFML(mtxScale, sp8C, sp88, sp84, &sp8C, &sp88, &sp84);
                    guMtxCatL(&s4[s0[i].unk_00], mtxRotate, &s4[s0[i].unk_00]);
                    guMtxCatL(&s4[s0[i].unk_00], mtxScale, &s4[s0[i].unk_00]);
                    if (s0[i].unk_00 == 5) {
                        func_80059254(&s4[s0[i].unk_00], 
                            s0[i].unk_02 + (task->pos.x + sp8C),
                            s0[i].unk_02 + (180.0f - task->pos.y - sp88),
                            task->pos.z + sp84,
                            s0[i].unk_06, s0[i].unk_06,
                            task->unk4C, s0[i].unk_08);
                    } else {
                        func_800598C4(&s4[s0[i].unk_00], 
                            s0[i].unk_02 + (task->pos.x + sp8C),
                            s0[i].unk_02 + (180.0f - task->pos.y - sp88),
                            task->pos.z + sp84,
                            s0[i].unk_06, s0[i].unk_06,
                            task->unk4C, s0[i].unk_08);
                    }
                }
            }

            mtxTranslate++;
            mtxRotate++;
            mtxScale++;
        }
        task = task->next;
    }

    mtxCount = ((u32)D_800FF8D4 - (u32)arg1->unk1e880) / sizeof(Mtx);
    if (D_800FFDEC < mtxCount) {
        DummiedPrintf("Mtx Max = %u\n", mtxCount);
        D_800FFDEC = mtxCount;
    }
    if (mtxCount > 64) {
        DummiedPrintf("マトリクスの数をオーバーしました( %u )\n", mtxCount);
    }
    *pGfxPos = gfxPos;
}

Gfx* func_8008E314(Gfx* gfxPos, Tongue* tongues, PlayerActor* players, Camera* cameras, s32 fbIndex) {
    u16 perspNorm;
    Camera* camera = &cameras[0];

    camera->f4.x = 0.0f;
    camera->f4.y = 0.0f;
    camera->f4.z = 100.0f;

    camera->f3.x = 0.0f;
    camera->f3.y = 0.0f;
    camera->f3.z = 0.0f;
    
    camera->f5.x = 0.0f;
    camera->f5.y = 0.0f;
    camera->f5.z = 0.0f;

    camera->f1.z = 0.0f;
    camera->f2.x = 0.0f;
    camera->f2.y = 100.0f;    

    guPerspective(&D_801B3180[fbIndex], &perspNorm, 60.0f, 4.0f / 3.0f, 1.0f, 1000.0f, 1.0f);
    gSPPerspNormalize(gfxPos++, perspNorm);
    guLookAt(&D_801B3240[fbIndex],
                 camera->f4.x, camera->f4.y, camera->f4.z, // Eye
                 camera->f5.x, camera->f5.y, camera->f5.z, // At
                 0, 1, 0); // Up
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&D_801B3180[fbIndex]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&D_801B3240[fbIndex]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    return gfxPos;
}

Gfx* func_8008E488(Gfx* gfxPos, Tongue* tongues, PlayerActor* players, Camera* cameras, s32 fbIndex) {
    u16 perspNorm;
    Camera* camera = &cameras[0];

    camera->f4.x = 0.0f;
    camera->f4.y = 0.0f;
    camera->f4.z = 5.0f;

    camera->f3.x = 0.0f;
    camera->f3.y = 0.0f;
    camera->f3.z = 0.0f;
    
    camera->f5.x = 0.0f;
    camera->f5.y = 0.0f;
    camera->f5.z = 0.0f;

    camera->f1.z = 0.0f;
    camera->f2.x = 0.0f;
    camera->f2.y = 5.0f;    

    guPerspective(&D_801B3300[fbIndex], &perspNorm, 60.0f, 4.0f / 3.0f, 1.0f, 20000.0f, 1.0f);
    gSPPerspNormalize(gfxPos++, perspNorm);
    guLookAt(&D_801B33C0[fbIndex],
                 camera->f4.x, camera->f4.y, camera->f4.z, // Eye
                 camera->f5.x, camera->f5.y, camera->f5.z, // At
                 0, 1, 0); // Up
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&D_801B3300[fbIndex]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&D_801B33C0[fbIndex]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    return gfxPos;
}

Gfx* setFrustum(Gfx* gfxPos, s32 fbIndex) {
    guOrtho(&D_801B3480[fbIndex], 0.0f, 320.0f, 0.0f, 240.0f, -2000.0f, 2000.0f, 1.0f);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&D_801B3480[fbIndex]), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    return gfxPos;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E698.s")

void func_8008E7B8(CTTask* arg0) {
    //more research needed? is it just getting the right half???
    setPrimColor(arg0->unk5E, arg0->unk60, arg0->unk_62, arg0->unk66);
    printUISprite(2.0f, 2.0f, 0.0f, 0.0f, 1.0f, 316.0f, 236.0f, 0.0f, SPRITE_BLANK);
    CTTask_Unlink(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E840.s")

// UNK58 typing is confusing due to this
CTTask* func_8008E9AC(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4) {
    CTTask* task;

    task = CTTask_Alloc(1, 0xF0, 0);
    if (task == NULL) {
        DummiedPrintf("エラー\n");
        while (1) {}
    }
    task->unk_5C = arg0;
    task->unk_64 = -24 - arg0;
    task->unk5E = arg1;
    task->unk60 = arg2;
    task->unk_62 = arg3;
    task->function = func_8008E840;
    task->pos.x = 0.0f;
    task->pos.y = 0.0f;
    task->pos.z = 0.0f;
    task->unk58 = (CTTask*)arg4; //TODO: probably fix this
    D_801B3540 = 1;
    
    return task;
}

CTTask* func_8008EA60(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4) {
    CTTask* task = CTTask_Alloc(1, 240, 0);
    if (task == NULL) {
        DummiedPrintf("エラー\n"); // error
        while(1){}
    }
    task->unk_5C = -arg0;
    task->unk_64 = arg0 + 280;
    task->unk5E = arg1;
    task->unk60 = arg2;
    task->unk_62 = arg3;
    task->function = func_8008E840;
    task->pos.x = 0;
    task->pos.y = 0;
    task->pos.z = 0;
    D_801B3540 = 1;
    return task;
}

CTTask* func_8008EB08(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s16 arg9) {
    CTTask* newTask = CTTask_Alloc(1, arg9, NULL);
    if (newTask == NULL) {
        DummiedPrintf("エラー\n");
        while(1){}
    }
    *arg4 = 0;
    newTask->unk_5C = -arg0;
    newTask->unk_64 = 279;
    newTask->unk5E = arg1;
    newTask->unk60 = arg2;
    newTask->unk_62 = arg3;
    newTask->unk7C = arg7;
    newTask->unk80 = arg8;
    newTask->pos.x = arg5;
    newTask->pos.y = arg6;
    newTask->pos.z = 0;
    newTask->function = func_8008E698;
    newTask->unk58 = (CTTask*)arg4; //TODO: figure out the type problem here
    return newTask;
}

CTTask* func_8008EBCC(s16 arg0, s16 arg1, s16 arg2, s16 arg3, CTTask* arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s16 arg9) {
    CTTask* newTask = CTTask_Alloc(1, arg9, NULL);
    if (newTask == NULL) {
        DummiedPrintf("エラー\n");
        while(1){}
    }
    arg4->runType = 0;
    newTask->unk_5C = arg0;
    newTask->unk_64 = -23;
    newTask->unk5E = arg1;
    newTask->unk60 = arg2;
    newTask->unk_62 = arg3;
    newTask->unk7C = arg7;
    newTask->unk80 = arg8;
    newTask->pos.x = arg5;
    newTask->pos.y = arg6;
    newTask->pos.z = 0;
    newTask->function = func_8008E698;
    newTask->unk58 = arg4;
    arg4->runType = 0;
    return newTask;
}

s32 func_8008EC90(void) {
    if (D_801B3540 == 1) {
        return FALSE;
    }
    return TRUE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008ECB8.s")

void func_8008EF78(CTTask* task) {
    func_8008ECB8();
    CTTask_Unlink(task);
}

void func_8008EFA0(CTTask* arg0) {
    arg0->unk_64 += arg0->unk_5C;
    arg0->unk66 += arg0->unk_5C;
    if (arg0->unk_64 >= 0xA1) {
        arg0->unk_64 = 0xA0;
    }
    if (arg0->unk_64 < 0) {
        arg0->unk_64 = 0;
    }
    if (arg0->unk66 >= 0x79) {
        arg0->unk66 = 0x78;
    }
    if (arg0->unk66 < 0) {
        arg0->unk66 = 0;
    }
    func_8008ECB8();
    if (arg0->unk_64 == 0) {
        arg0->unk58->runType = 1;
        arg0->function = func_8008EF78;
    }
}

CTTask* func_8008F050(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4) {
    CTTask* task = CTTask_Alloc(1, 240, 0);
    if (task == 0) {
        DummiedPrintf("エラー\n");
        while(1){}
    }
    task->unk_5C = -arg0;
    task->unk_64 = 160;
    task->unk66 = 120;
    task->unk5E = arg1;
    task->unk60 = arg2;
    task->unk_62 = arg3;
    task->function = func_8008EFA0;
    task->unk58 = (CTTask* )arg4;
    task->pos.x = 160;
    task->pos.y = 120;
    task->pos.z = 0;
    *arg4 = 0;
    return task;
}

void func_8008F114(void){
    if(MQ_IS_FULL(&gSyncMessageQueue)){
        osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    }
    osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    Timing_StartProcess();
}

void func_8008F16C(void) {
    if (D_800FFDF0 != 0) {
        osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_NOBLOCK);
        gMainGfxPos = gGraphicsList[gFramebufferIndex].UnkGroup.dlist;
        gMainGfxPos = func_8008D168(gMainGfxPos, gFramebufferIndex, D_800FFDF0);
        func_8005CA38();
        if (D_800FFDF0 == 3) {
            func_8002E0CC();
            gCamera->f4.x = 0.0f;
            gCamera->f4.y = 0.0f;
            gCamera->f4.z = 0.0f;
            gCamera->f5.x = 1000.0f;
            gCamera->f5.y = 1000.0f;
            gCamera->f5.z = 1000.0f;
        }
        func_80056F48(0, gTongues, gPlayerActors, gCamera);
        setPrimColor(D_800FF8DC, D_800FF8E0, D_800FF8E4, 255);
        printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
        gMainGfxPos = func_8008E314(gMainGfxPos, gTongues, gPlayerActors, gCamera, gFramebufferIndex);
        gMainGfxPos = func_8005F408(gMainGfxPos);
        gMainGfxPos = func_8005CA44(gMainGfxPos);
        gDPFullSync(gMainGfxPos++);
        gSPEndDisplayList(gMainGfxPos++);
        func_8008D114(&gGraphicsList[gFramebufferIndex], gFramebufferIndex);
    } else {
        Controller_StartRead();
        func_8005CA38();
        func_80056F48(0, gTongues, gPlayerActors, gCamera);
        func_8008D114(&gGraphicsList[1 - gFramebufferIndex], 1 - gFramebufferIndex);
        gMainGfxPos = gGraphicsList[gFramebufferIndex].UnkGroup.dlist;
        gMainGfxPos = func_8008D168(gMainGfxPos, gFramebufferIndex, D_800FFDF0);
        func_8004E784(gContMain, 4, 0, 0);
        Controller_ParseJoystick(gContMain);
        func_8008D060();
        gMainGfxPos = func_8008E314(gMainGfxPos, gTongues, gPlayerActors, gCamera, gFramebufferIndex);
        gMainGfxPos = func_8005F408(gMainGfxPos);
        if (gGameModeCurrent != GAME_MODE_SAVE_MENU) {
            gMainGfxPos = func_80084884(gMainGfxPos);
        }
        func_80084A04();
        if (D_801FC9AC == 1) {
            gMainGfxPos = setFrustum(gMainGfxPos, gFramebufferIndex);
            func_8008DB90(&gMainGfxPos, &gGraphicsList[gFramebufferIndex]);
            gMainGfxPos = func_8005CA44(gMainGfxPos);
        } else {
            gMainGfxPos = setFrustum(gMainGfxPos, gFramebufferIndex);
            func_8008DB90(&gMainGfxPos, &gGraphicsList[gFramebufferIndex]);
            gMainGfxPos = func_8008E488(gMainGfxPos, gTongues, gPlayerActors, gCamera, gFramebufferIndex);
            gMainGfxPos = func_8005CA44(gMainGfxPos);
        }
        func_8008C438();
        gDPFullSync(gMainGfxPos++);
        gSPEndDisplayList(gMainGfxPos++);
    }
    Timing_StopProcess();
    osRecvMesg(&gFrameDrawnMessageQueue, NULL, OS_MESG_BLOCK);
    gFramebufferIndex = 1 - gFramebufferIndex;
    if (D_800FFDF0 == 0) {
        osViSwapBuffer(gFrameBuffers[gFramebufferIndex].data);
    }
    osViSetSpecialFeatures(OS_VI_GAMMA_ON|OS_VI_GAMMA_DITHER_ON);
    if (D_800FFDF0 != 0) {
        D_800FFDF0--;
    }
    func_8008C554();
    if(MQ_IS_FULL(&gSyncMessageQueue)){
        osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    }
    osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    Timing_StartProcess();
}

s32 DrawBackground(s32 arg0) {
    s32 var_a1;
    UnkBg* var_s0;

    var_s0 = D_800FFE58[arg0];
    for (; var_s0->spriteID != -1; var_s0++) {
            if (LoadSprite(var_s0->spriteID) != 0) {
                DummiedPrintf("ＢＧロードエラー %d\n", var_s0->spriteID);
            }        
    }
    return 0;
}

void func_8008F710(CTTask* task) {
    UnkBg* var_s0;
    
    var_s0 = D_800FFE58[task->unk_04];
    for (; var_s0->spriteID != -1; var_s0++) {
        s32 temp0 = var_s0->unk0;
        s32 temp1 = var_s0->unk2;
        func_8005C454(temp0, temp1, 0.0f, var_s0->spriteID);    
    }
}

CTTask* func_8008F7A4(s16 arg0, s16 arg1) {
    CTTask* newTask = CTTask_Alloc(1, arg1, NULL);
    if (newTask == NULL) {
        DummiedPrintf("Ｂｇ表示タスク作製エラー\n");
        while(1){}
    }
    newTask->function = func_8008F710;
    newTask->unk_04 = arg0;
    D_800FFDF4 = 1;
    return newTask;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/ParseIntToBase10.s")

//parse int to hex string
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/parseIntToHex.s")

s32 ReturnInputS32(s32 n) {
    switch (n) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;
    case 7:
        return 7;
    case 8:
        return 8;
    case 9:
        return 9;
    default:
        return 0;
    }
}

s32 GetBaseStage(s32 stageID) {
    s32 ret;

    switch (stageID) {
    case STAGE_JUNGLE:
    case STAGE_JUNGLEBOSS:
        ret = STAGE_JUNGLE;
        break;
    case STAGE_ANT:
    case STAGE_ANTBOSS:
        ret = STAGE_ANT;
        break;
    case STAGE_BOMB:
    case STAGE_BOMBBOSS:
        ret = STAGE_BOMB;
        break;
    case STAGE_DESERT:
    case STAGE_DESERTBOSS:
        ret = STAGE_DESERT;
        break;
    case STAGE_KIDS:
    case STAGE_KIDSBOSS:
        ret = STAGE_KIDS;
        break;
    case STAGE_GHOST:
    case STAGE_GHOSTBOSS:
        ret = STAGE_GHOST;
        break;
    case STAGE_BOSSRUSH:
        ret = 6;
        break;
    default:
        return -1;
    }
    return ret;
}

/**
 * @brief Scans the memory in quantities of 10KB to find the maximum amount of memory that can be allocated
 * 
 * @return s32 - free memory in bytes
 */
s32 MemsizeCheck(void) {
    s32 bytes = 10 * 1024;
    s32 flag = 0;
    void* memoryLoc;
    s32 one = TRUE;

    while (one) {
        memoryLoc = _malloc(bytes);
        if (memoryLoc == NULL) {
            DummiedPrintf("For MemsizeCheck\n");
            flag |= 1;
            if (flag != 3) {
                bytes -= 1024;
            }
        } else {
            flag |= 2;
            if (flag != 3) {
                bytes += 1024;
            }
            Free(memoryLoc);
        }
        if (flag == 3) {
            DummiedPrintf("最大確保可能サイズ %d KB\n", bytes / 1024);
            break;
        }
    }

    return bytes;
}

//Uses "GameModes" enum
void SetProcessType(s32 gameMode) {
    DummiedPrintf(" 元%d %d\n", gGameModeCurrent, gGameModeState);
    gGameModeState = 0;
    gGameModeCurrent = gameMode;
    DummiedPrintf(" 後%d %d\n", gGameModeCurrent, gGameModeState);
}

void func_8008FD68(void) {
    DMAStruct_Print();
    D_80174878++;
    if (D_800F06EC >= 0) {
        D_80174878 = D_800F06EC;
    }
    D_80174878 = LoadStageByIndex(D_80174878);
    func_8002E0CC();
    InitField();
    func_80056EB4();
    Effect_Init();
    func_8005C9B8();
    func_80084788();
    CTTaskList_Init();
}

void func_8008FDF8(void) {
}

void func_8008FE00(void) {
    LoadPlayerEyes(gSelectedCharacters[0]);
    SetPlayerContextEyes(gSelectedCharacters[0], 0, 0);
    FreePlayerEyes(gSelectedCharacters[0]);
    LoadPlayerEyes(gSelectedCharacters[0]);
}

void func_8008FE50(void) {
    s32 i;
    
    for (i = CHARA_DAVY; i <= CHARA_WHITE; i++) {
        LoadPlayerEyes(i);
        SetPlayerContextEyes(i, 0, 0);
        FreePlayerEyes(i);
    }
}

//unfinished naming
void func_8008FEA8(s32 arg0, s32 arg1) {
    s32* var_a0; //unknown what this is
    Vec3f* var_a0_2;

    if (arg1 == 0) {
        if ((arg0 != 1) && (arg0 != 2) && (arg0 != 4)) {
            if (arg0 != 5) {
                return;
            }
        }

        // set to the virtual base address of the stage
        if (!IS_SEGMENTED(gStageLoadData[arg0].stageData)) {
            var_a0 = (s32*)gStageLoadData[arg0].stageData;
        } else {
            var_a0 = (s32*)SEGMENTED_TO_VIRTUAL2(gStageLoadData[arg0].stageData);
        }
        

        if (!IS_SEGMENTED(var_a0[7])) {
            var_a0_2 = (Vec3f*)var_a0[7];
        } else {
            var_a0_2 = SEGMENTED_TO_VIRTUAL(var_a0[7]);
        }
        
        gPlayerActors->pos.x = var_a0_2->x;
        gPlayerActors->pos.y = var_a0_2->y;
        gPlayerActors->pos.z = var_a0_2->z;
    }
}

void Porocess_Mode0(void) {
    u32 temp_s0;
    s32 sp28;
    s32 sp24;
    s32 i;

    switch (gGameModeState) {
    case 0:
        D_800FFDF0 = 3;
        DMAStruct_Print();
        D_80174878 += 1;
        
        if (D_800F06EC >= 0) {
            D_80174878 = D_800F06EC;
        }
        
        D_80174878 = LoadStageByIndex(D_80174878);
        if (gCurrentStage == STAGE_VS) {
            D_80168DA0 = gControllerNo;
            Battle_GameType = 2;
        } else {
            Battle_GameType = 0;
            D_80168DA0 = 1;
        }

        //required 1 liner to match
        for (i = 0; i < D_80168DA0; i++) {gPlayerActors[i].active = 1;}

        for (; i < ARRAY_COUNT(gPlayerActors); i++) {
            gPlayerActors[i].active = 0;
        }            
        for (i = 0; i < ARRAY_COUNT(gTongues); i++) {
            _bzero(&gTongues[i], sizeof(Tongue));
        }
    
        func_8002E0CC();
        InitField();
        func_80056EB4();
        Effect_Init();
        func_8005C9B8();
        func_80084788();
        
        D_80174980 = 0;
        if (gCurrentStage == STAGE_VS) {
            Battle_Init();
        } else {
            func_8008FE00();
        }
        if (gCurrentStage == STAGE_BOMB) {
            LoadPlayerEyes(4);
            SetPlayerContextEyes(4, 0, 0);
            FreePlayerEyes(4);
        }
        CTTaskList_Init();
        if ((gCurrentStage == STAGE_BOSSRUSH) || (gCurrentStage == STAGE_TRAINING)) {
            func_800C1458(0);
        }
        func_8008BE14();
        func_8008800C(8);
        gGameModeState++;
        func_8008F114();
        gCurrentStageTime = 0;
        return;
    case 1:
        func_8002CE54();
        return;
    case 2:
        gGameModeState = 1;
        return;
    case 3:
        Battle_GameType = 0;
        temp_s0 = gPlayerActors->hp;
        sp28 = currentStageCrowns;
        sp24 = D_80247904;
        DMAStruct_Print();
        D_80174878++;
        if (D_800F06EC >= 0) {
            D_80174878 = D_800F06EC;
        }
        D_80174878 = LoadStageByIndex(D_80174878);
        func_8002E0CC();
        InitField();
        gPlayerActors->hp = temp_s0;
        func_80056EB4();
        Effect_Init();
        func_8005C9B8();
        func_80084788();
        CTTaskList_Init();
        if (D_800FFEBC != 0) {
            func_800C1458(1);
        } else {
            func_800C1458(0);
        }
        gGameModeState = 1;
        func_8008F114();
        currentStageCrowns = sp28;
        D_80247904 = sp24;
        func_8008FE00();
        if (gCurrentStage == STAGE_BOMB) {
            LoadPlayerEyes(4);
            SetPlayerContextEyes(4, 0, 0);
            FreePlayerEyes(4);
            return;
        }
    default:
        return;
    case 4:
        for (i = 0; i < 4; i++) {
            _bzero(&gTongues[i], sizeof(Tongue));
        }
        
        gPlayerActors[0].active = 1;
        for (i = 1; i < ARRAY_COUNT(gPlayerActors); i++) {
            gPlayerActors[i].active = 0;
        }
        
        gNoHit = 0;
        gOneRun = 0;
        D_80200B38 = 0;
        Battle_GameType = 0;
        SaveData_ReadFile(&gGameState);
        D_80174878 = gCurrentStage - 1;
        func_8008FD68();
        SaveData_ReadFile(&gGameState);
        if (isInOverworld == TRUE) {
            if (gCurrentStage == STAGE_JUNGLE) {
                D_80236978 = 1;
            }
            func_800C2820(gGameState.gCurrentZone, &gPlayerActors[0], &gGameState);
        } else {
            D_80236978 = 0;
            func_800C1510(gGameState.gCurrentZone, gGameState.unk33);
            func_800B4574(&gGameState.unk2, &gGameState.UNK_22);
            func_800C0760(gGameState.gCurrentZone);
        }
        currentStageCrowns = (s32) gGameState.stageCrowns;
        DummiedPrintf("\n");
        func_8008FEA8(gCurrentStage, gGameState.gCurrentZone);
        gGameModeState = 1;
        func_8008F114();
        func_8008FE00();
        if (gCurrentStage == STAGE_BOMB) {
            LoadPlayerEyes(4);
            SetPlayerContextEyes(4, 0, 0);
            FreePlayerEyes(4);
        }
        func_8008800C(8);
        return;
    case 5:
        SetProcessType(1);
        func_8008F114();
        return;
    case 6:
        SetProcessType(6);
        return;
    case 7:
        gNoHit = 0;
        gOneRun = 0;
        D_80200B38 = 0;
        D_80168DA0 = 1;
        Battle_GameType = 0;
        SaveData_ReadFile(&gSaveFile);
        D_80174878 = gCurrentStage - 1;
        for (i = 0; i < ARRAY_COUNT(gTongues); i++) {
            _bzero(&gTongues[i], sizeof(Tongue));
        }
        func_8008FD68();
        SaveData_ReadFile(&gSaveFile);
        if (isInOverworld == TRUE) {
            if (gCurrentStage == STAGE_JUNGLE) {
                D_80236978 = 1;
            }
            func_800C2820(gSaveFile.gCurrentZone, &gPlayerActors[0], &gSaveFile);
        } else {
            D_80236978 = 0;
            func_800C1510(gSaveFile.gCurrentZone, gSaveFile.unk33);
            func_800B4574(&gSaveFile.unk2, &gSaveFile.UNK_22);
            func_800C0760(gSaveFile.gCurrentZone);
        }
        func_8008FEA8(gCurrentStage, gSaveFile.gCurrentZone);
        currentStageCrowns = (s32) gSaveFile.stageCrowns;
        gGameModeState = 1;
        func_8008F114();
        func_8008FE00();
        if (gCurrentStage == STAGE_BOMB) {
            LoadPlayerEyes(4);
            SetPlayerContextEyes(4, 0, 0);
            FreePlayerEyes(4);
        }
        break;
    }
}

void MainLoop(void) {
    func_8002D080();
    if (sGameModeStart != -1) {
        gGameModeCurrent = sGameModeStart;
    }
    gGameModeState = 0;
    osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    SaveData_LoadRecords(gGameRecords.flags);
    if (SaveData_RecordChecksum() != gGameRecords.flags[0]) {
        SaveData_ClearRecords();
    }
    gIsStero = gGameRecords.flags[1] & 1;
    osRecvMesg(&gSyncMessageQueue, NULL, OS_MESG_BLOCK);
    while(1){
        switch (gGameModeCurrent) {
        case 0:
            Porocess_Mode0();
            continue;
        case 1:
            Process_StageSelect();
            continue;
        case 2:
            FileWork();
            continue;
        case 3:
            func_8009C904();
            continue;
        case 4:
            func_800A9F84();
            continue;
        case 5:
            func_800AA3F0();
            continue;
        case 20:
            func_800ADE70();
            continue;
        case 21:
            func_800AE4AC();
            continue;
        case 6:
            Process_TitleMenu();
            continue;
        case 7:
            Process_BattleMenu();
            continue;
        case 8:
            Process_OptionsMenu();
            continue;
        case 9:
            Process_GameOver();
            continue;
        case 10:
            Process_JSSLogo();
            continue;
        case 11:
            Process_PreCredits();
            continue;
        case 12:
            Process_NewGameMenu();
            continue;
        case 13:
            func_800A6DD8();
            continue;
        case 14:
            func_800A07E0();
            continue;
        case 16:
            Process_Ranking();
            continue;
        case 17:
            func_800557F8();
            continue;
        case 18:
            Process_Boot();
            continue;
        case 19:
            Process_SunsoftLogo();
            continue;
        }
        DummiedPrintf("No Process = %d\n", gGameModeCurrent);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800908C0.s")

s32 func_80090B10(s32 time, s32 stageID) {
    s32 baseStage;
    s32 recordTime;
    s32 ret = 0;
    
    baseStage = GetBaseStage(stageID);
    
    if (baseStage < 0) {
        return 0;
    }
    if (time == 0) {
        return 0;
    }
    
    time /= 30;
    recordTime = RecordTime_ParseToSecs(&gGameState.stageTimes[baseStage]);
    
    if ((time < recordTime) || (recordTime == 0)) {
        RecordTime_SetTo(time, &gGameState.stageTimes[baseStage]);
        ret = 1;
    }
    
    return ret;
}

void func_80090BC0(void) {
    LoadSprite(SPRITE_SPECIFIC_SYMBOLS);
    switch (gCurrentStage) {
    case STAGE_KIDSBOSS:
        LoadSprite(SPRITE_PUFF2);
        LoadSprite(SPRITE_CHOCOKID);
        break;
    case STAGE_ANTBOSS:
        LoadSprite(SPRITE_GRAYANT);
        break;
    case STAGE_BOMBBOSS:
        LoadSprite(SPRITE_BOMBDOKKAN_PART);
        LoadSprite(SPRITE_BOMBDOKKAN_EYE);
        LoadSprite(SPRITE_EYEBLINK_UNUSED);
        LoadSprite(SPRITE_EYETWIRL_UNUSED);
    default:
    case STAGE_JUNGLEBOSS:
    case STAGE_DESERTBOSS:
        break;
    }
}

void func_80090C54(CTTask* arg0) {
    //why
    f32 sp1C = arg0->pos.x;
    f32 sp18 = arg0->pos.y;
    if (func_8008D950(arg0) == -1) {
        arg0->pos.x += sp1C;
        arg0->pos.y += sp18;
    }
}

s32 func_80090CB0(CTTask* task) {
    task->unk7C += task->unk84;
    task->pos.x += task->unk80;
    task->pos.y += task->unk7C;
    if ((task->unk88 <= task->pos.y) && (task->unk7C >= 0.0f)) {
        task->pos.y = task->unk88;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090D28.s")

void func_80090E2C(void) {
    CTTask* task = CTTask_Alloc(1, 100, NULL);
    if (task == NULL) {
        DummiedPrintf("エラー\n");
        while(1){}
    }
    task->function = func_80090E78;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090E78.s")

void func_800910E4(CTTask* task) {
    task->unk44 = 6;
    task->function = func_800911D0;
    task->scale.z = 0.4f;
    task->scale.y = 0.4f;
    task->scale.x = 0.4f;
    task->pos.x = 380;
    task->pos.y = 86;
    task->unk80 = -8;
    task->rot.x = 0;
    task->rot.z = 0;
    task->rotA = 0;
    task->pos.z = 0;
    task->rot.y = 1;
    task->unk3C = 1;
    task->unk84 = 1.5f;
    task->unk7C = -20;
    switch (gCurrentStage) {
    case STAGE_JUNGLEBOSS:
        task->unk88 = 95;
        break;
    case STAGE_BOMBBOSS:
        task->unk88 = 102;
        break;
    case STAGE_DESERTBOSS:
        task->unk88 = 90;
        break;
    }
    task->unk4E = 0;
}

void func_800911D0(CTTask* task) {
    CTTask* temp_v0 = task->unk58;

    if (((gCurrentStage == STAGE_ANTBOSS) && (temp_v0->unk54 == 1)) || (temp_v0->unk54 == 7)) {
        task->function = func_8009131C;
        task->unk4E = 1;
        task->unk88 = 110;
        task->pos.x = 320;
        task->unk80 = -3;
        task->unk7C = -20;
        task->unk84 = 3;
        task->rotA = -60;
        func_8008D7B0(task);
        PLAY_SFX(SFX_ChameleonJump, 0, 16);
    } else if (temp_v0->unk54 == 7) {
        task->unk4E = 1;
        task->function = func_80091694;
        task->unk60 = 8;
        task->unk44 = 1;
        task->unk88 = 150;
        task->unk7C = -15;
        task->unk84 = 1.5f;
        while (func_8008D7B0(task) == 0){}
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009131C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091420.s")

void func_800914CC(CTTask* task) {
    if (!(task->unk7C < 0)) {
        task->rotA = 0;
    }
    if (func_80090D28(task) != 0) {
        task->unk60 = 4;
        task->function = func_80091548;
        task->unk_5C = 2;
        task->unk80 = 0;
        task->unk7C = -15;
    }
    func_8008D7B0(task);
}

void func_80091548(CTTask* task) {
    task->unk44 = 1;
    while (func_8008D7B0(task) == 0){}
    task->unk60 -= 1;
    if (task->unk60 <= 0) {
        task->function = func_800915C0;
        task->unk84 = 1.5f;
    }
}

void func_800915C0(CTTask* arg0) {
    if (func_80090D28(arg0) != 0) {
        arg0->unk_5C--;
        if (arg0->unk_5C <= 0) {
            arg0->function = func_80091694;
            arg0->unk60 = 8;
            arg0->unk44 = 1;
            arg0->unk88 = 150.0f;
            arg0->unk7C = -15.0f;
            arg0->unk84 = 1.5f;
            while (func_8008D7B0(arg0) == 0) { }
        } else {
            arg0->unk7C = -15.0f;
            arg0->unk60 = 4;
            arg0->function = func_80091548;
            goto func; //pls match better
        }
    } else {
func:
        func_8008D7B0(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091694.s")

void func_80091758(CTTask* arg0) {
    CTTask* task;
    if (arg0->unk60) {
        arg0->unk60--;
        return;
    }
    arg0->unk44 = 9;
    task = arg0->unk58;
    if (func_8008D7B0(arg0)) {
        task->unk54 = 8;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800917A8.s")

void func_800919D8(s32 arg0, s32 arg1) {
    CTTask* task;

    if ((arg0 >= 0) || (arg1 != 0)) {
        task = CTTask_Alloc(1, 100, NULL);
        task->function = func_800917A8;
        task->unk_62 = 128;
        task->unk_5C = arg0;
        task->unk_64 = arg1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091A38.s")

void func_80092208(CTTask* arg0) {
    if ((func_8008EC90() != 0) && (arg0->unk54 == 8)) {
        arg0->function = &func_80092254;
        arg0->unk60 = 0;
        arg0->unk_5C = 4;
    }
}

void func_80092254(CTTask* arg0) {
    arg0->unk_5C--;
    if (arg0->unk_5C <= 0) {
        arg0->unk60++;
        arg0->unk_5C = 8;
        if (arg0->unk60 == 4) {
            func_800919D8(arg0->unk66, arg0->unk_62);
        }
    }
    func_80091A38(arg0);
    if ((gContMain->buttons2 & 0x8000) || (gContMain->buttons2 & 0x1000)) {
        arg0->unk60 = 0x10;
    }
    if (arg0->unk60 >= 0x10) {
        arg0->unk_64 = 0;
        func_8008E9AC(0x20, 0, 0, 0, &arg0->unk_64);
        arg0->function = func_80092324;
    }
}

void func_80092324(CTTask* arg0) {              // Cy
    if (func_8008EC90() != 0) {
        SetProcessType(GAME_MODE_LEVEL_INTRO_MENU);
        return;
    }
    DummiedPrintf("フェード待ち\n");
    func_80091A38(arg0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009236C.s")

void func_8009244C(CTTask* task) {
    if (task->unk60 != 0) {
        task->unk60--;
    } else {
        task->function = &func_80092474;
    }
}

void func_80092474(CTTask* task) {
    CTTask* temp_v0;
    task->rotA += 5.0;
    if (task->rotA >= 360) {
        task->rotA -= 360;
    }
    if (func_80090CB0(task) != 0) {
        if (task->unk_5C == 0) {
            temp_v0 = task->unk58;
            task->unk60 = 0;
            task->unk88 += 5;
            task->unk7C = 1;
            if (temp_v0->unk54 == 0) {
                temp_v0->unk54 = 1;
            }
        } else {
            task->rot.z = 0.8f;
            task->unk80 = -5;
            task->unk7C = -30;
            task->unk88 = 150;
        }
        task->unk_5C += 1;
    }
    if ((task->pos.x > 500) || (task->pos.x < -100)) {
        CTTask_Unlink(task);
    }
}

void func_800925A8(CTTask* task) {
    Effect_BossDeadEyes_Init(75);
    task->unk44 = 19;
    task->unk4E = 1;
    task->unk48 = -1;
    func_8008D7FC(task);
    task->rot.z = -0.0f;
    task->unk_5C = 0;
    task->unk5E = 0;
    task->function = func_80092690;
    task->scale.z = 0.7f;
    task->scale.y = 0.7f;
    task->scale.x = 0.7f;
    task->unk3C = 1.0f;
    task->rot.y = 1.0f;
    task->rotA = -80;
    task->pos.x = 145;
    task->pos.y = -110;
    task->pos.z = -30;
    task->rot.x = 0.0f;
    task->unk80 = 0.0f;
    task->unk7C = 0.0f;
    task->unk84 = 3;
    task->unk88 = 96;
}

void func_80092690(CTTask* task) {

    if (task->unk5E != 0) {
        func_8008D7FC(task);
    }
    if (func_80090CB0(task) != 0) {
        task->unk5E = 1;
        if (task->unk_5C < 5) {
            task->unk7C *= -1.0f;
            task->unk7C *= 0.7;
            task->unk_5C++;
        }
        else {
            task->function = func_8009273C;
            task->unk44 = 20;
            task->unk60 = 30;
        }
    }
}

void func_8009273C(CTTask* task) {
    if (task->unk60 != 0) {
        task->unk60--;
    }
    else if (func_8008D7FC(task) != 0) {
        task->unk44 = 21;
        task->function = func_800927A8;
        func_8009236C(task);
        task->unk3C = 1;
    }
}

void func_800927A8(CTTask* task) {
    if (func_8008D7FC(task) != 0) {
        task->function = func_800927E8;
        task->unk3C = 1;
    }
}

void func_800927E8(CTTask* task) {
    //why not just check for 1??
    if ((task->unk54 != 0) && (task->unk54 == 1)) {
        task->function = func_80092864;
        task->unk44 = 22;
        PLAY_SFX(SFX_Lizard_Kong_Hit, 0, 16);
        task->unk60 = 15;
        func_8008D7FC(task);
    }
}

void func_80092864(CTTask* task) {
    task->function = &func_8009288C;
    func_8008D7FC(task);
}

void func_8009288C(CTTask* task) {
    if (task->unk60 != 0) {
        task->unk60--;
    }
    else if (func_8008D7FC(task) != 0) {
        if (task->unk58->unk54 < 7) {
            task->unk58->unk54 = 7;
        }
        task->function = func_800928F0;
    }
}

void func_800928F0(CTTask* arg0) {

}

void func_800928F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    CTTask* task = CTTask_Alloc(1, 240, NULL);
    task->pos.x = arg0;
    task->pos.y = arg1;
    task->pos.z = 0.0f;
    task->unk55 = 255;
    task->unk80 = arg2;
    task->unk7C = arg3;
    task->unk_04 = 74;
    task->unk44 = 4;
    task->function = func_80092990;
    task->scale.x = 0.1f;
    task->scale.y = 0.1f;
    task->scale.z = 0.1f;
}

void func_80092990(CTTask* task) {
    task->scale.x += 0.1;
    task->pos.x += task->unk80;
    task->pos.y += task->unk7C;
    if (task->scale.x >= 1.0) {
        if (task->unk55 < 11) {
            task->unk55 = 0;
        } else {
            task->unk55 = task->unk55 - 10;
        }
    }
    func_8008DAB8(task->pos.x, task->pos.y, task->pos.z, task->scale.x * 32, task->scale.x * 32, task->unk55, 0, task->unk_04);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092A64.s")

s32 func_80092C0C(CTTask* task) {
    s32 flag = FALSE;
    task->pos.x += task->unk80;
    if (task->pos.x >= 160.0f) {
        flag = TRUE;
        task->unk90 = 90.0f;
    }
    return flag;
}

CTTask* func_80092C54(s32 task) {
    CTTask* newTask = CTTask_Alloc(1, 100, NULL);
    newTask->unk4E = 1;
    newTask->unk44 = 16;
    newTask->unk48 = -1;
    newTask->unk3C = 1;
    func_8008D7FC(newTask);
    newTask->unk80 = 4;
    newTask->rot.y = 1;
    newTask->rotA = 80;
    newTask->pos.x = -80 - (task * 30);
    newTask->function = func_80092D68;
    newTask->unk_62 = task + 1;
    newTask->scale.z = 1.5f;
    newTask->scale.y = 1.5f;
    newTask->scale.x = 1.5f;
    newTask->pos.y = 96;
    newTask->unk88 = 96;
    newTask->unk84 = 3;
    newTask->rot.x = 0;
    newTask->rot.z = 0;
    newTask->pos.z = 0;
    newTask->unk7C = -20;
    newTask->unk90 = -5;
    return newTask;
}

void func_80092D68(CTTask* task) {
    if (func_80092C0C(task) != 0) {
        task->function = func_80092E10;
        task->unk90 = 90;
    }
    else{
        //must be like this
        task->rotA = task->unk90 + task->rotA;
        if (task->rotA > 115) {
            task->unk90 = -5;
        }
        if (task->rotA < 65) {
            task->unk90 = 5;
        }
    }
}

void func_80092E10(CTTask* arg0) {
    CTTask* temp_v0 = arg0->unk58;
    
    func_80092A64(arg0, temp_v0->unk8C);
    if (temp_v0->unk54 == 5) {
        arg0->function = func_80092E9C;
        arg0->unk_5C = 3;
        arg0->unk44 = 17;
        arg0->unk80 = 0.0f;
        arg0->rotA = 80.0f;
        func_8008D7FC(arg0);
        arg0->pos.z = -50.0f;
    }
}

void func_80092E9C(CTTask* task) {
    CTTask* sp1C = task->unk58;
    if (func_80090CB0(task) != 0) {
        if (task->unk_5C != 0) {
            task->unk_5C--;
            task->unk7C *= -0.6;
        } else {
            task->function = func_80092F44;
            task->unk44 = 0x11;
            task->unk_5C = 3;
        }
    }
    task->pos.x = sp1C->pos.x - (task->unk_62 * 0x19);
}

void func_80092F44(CTTask* task) {
    if (func_8008D7FC(task)) {
        if (task->unk_5C) {
            task->unk_5C--;
            task->unk7C *= -0.6;
        } else {
            task->unk44 = 18;
            task->function = func_80092FB8;
            task->unk40 = 0;
        }
    }
}

void func_80092FB8(CTTask* task) {
    CTTask* taskNext = task->unk58;
    if (func_8008D7FC(task)) {
        taskNext->unk54 = 6;
    }
}

CTTask* func_80092FEC(s32 arg0) {
    CTTask* temp_v0 = CTTask_Alloc(1, 100, NULL);
    temp_v0->rot.y = 1;
    temp_v0->rotA = 80;
    temp_v0->unk55 = 255;
    temp_v0->unk_04 = 43;
    temp_v0->pos.x = -90 - (arg0 * 40);
    temp_v0->function = func_80093110;
    temp_v0->scale.z = 1.1f;
    temp_v0->scale.y = 1.1f;
    temp_v0->scale.x = 1.1f;
    temp_v0->unk80 = 4;
    temp_v0->pos.y = 81;
    temp_v0->unk84 = 3;
    temp_v0->rot.x = 0;
    temp_v0->rot.z = 0;
    temp_v0->pos.z = 0;
    temp_v0->unk7C = -20;
    temp_v0->unk90 = 5;
    if (arg0 != 0) {
        temp_v0->scale.z = 0.8f;
        temp_v0->scale.y = 0.8f;
        temp_v0->pos.y += 4;
        temp_v0->scale.x = 0.8f;
    }
    temp_v0->unk_62 = arg0 + 1;
    temp_v0->unk88 = temp_v0->pos.y;
    return temp_v0;
}

void func_80093110(CTTask* task) {
    func_8008DAB8(task->pos.x, task->pos.y, task->pos.z, task->scale.x * 40.0, task->scale.x * 40.0, task->unk55, 0, task->unk_04);
    if (func_80092C0C(task) != 0) {
        task->function = func_8009319C;
        task->unk90 = 90;
    }
}

void func_8009319C(CTTask* task) {
    CTTask* newTask = task->unk58;
    func_8008DAB8(task->pos.x + D_800FFEE8, task->pos.y, task->pos.z, task->scale.x * 40.0, task->scale.x * 40.0, (s32) task->unk55, 0, (s32) task->unk_04);
    func_80092A64(task, newTask->unk8C);
    if (newTask->unk54 == 5) {
        task->function = func_80093260;
        task->unk_5C = 4;
        task->unk80 = 0;
        task->pos.z = -50;
    }
}

void func_80093260(CTTask* task) {
    CTTask* newTask = task->unk58;
    func_8008DAB8(task->pos.x, task->pos.y, task->pos.z, task->scale.x * 40.0, task->scale.x * 40.0, task->unk55, 0, task->unk_04);
    if (func_80090CB0(task) != 0) {
        if (task->unk_5C != 0) {
            task->unk_5C--;
            task->unk7C *= -0.6;
        } else {
            task->function = func_8009336C;
            task->unk44 = 17;
            task->unk_5C = 3;
        }
    }
    task->pos.x = newTask->pos.x - (task->unk_62 * 30);
    if (task->unk_62 != 1) {
        task->pos.x -= 5;
    }
}

void func_8009336C(CTTask* task) {
    func_8008DAB8(task->pos.x, task->pos.y, task->pos.z, task->scale.x * 40.0, task->scale.x * 40.0, task->unk55, 0, task->unk_04);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800933CC.s")

void func_80093500(CTTask* task) {
    if (func_80092C0C(task) != 0) {
        task->function = func_80093600;
        task->unk60 = 45;
        task->unk_5C = 30;
        task->unk_62 = 30;
        task->unk90 = 90;
    }
    else{
        if ((gTimer % 28) == 0) {
            PLAY_SFX(SFX_Bomb_Caterpillar_Slither, 0, 16);
        }
        //must be like this
        task->rotA = task->unk90 + task->rotA;
        if (task->rotA > 115) {
            task->unk90 = -5;
        }
        if (task->rotA < 65) {
            task->unk90 = 5;
        }
    }
}

void func_800935F8(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093600.s")

void func_800937FC(CTTask* arg0) {
    if (arg0->unk60 != 0) {
        arg0->unk60--;
    }
    arg0->function = func_8009384C;
    arg0->unk54 = 5;
    arg0->unk_5C = 3;
    arg0->pos.x = 208.0f;
    arg0->unk80 = 0.0f;
    arg0->rotA = 80.0f;
}

void func_8009384C(CTTask* task) {
    if (func_80090CB0(task) != 0) {
        if (task->unk_5C != 0) {
            task->unk_5C--;
            task->unk7C *= -0.6;
        } else {
            task->function = func_800938B0;
        }
    }
}

void func_800938B0(CTTask* task) {
    CTTask* otherTask = task->unk58;
    if ((task->unk54 == 6) && (otherTask->unk54 < 7)) {
        otherTask->unk54 = 7;
    }
}

void func_800938E4(s32 xMult) {
    CTTask* task = CTTask_Alloc(1, 100, 0);
    task->function = func_800939B0;
    task->scale.x = 0.8f;
    task->unk3C = 1.0f;
    task->unk48 = -1;
    task->unk44 = 2;
    task->pos.x = (xMult * 24) - 146;
    task->pos.y = 130.0f;
    task->unk88 = 130.0f;
    task->pos.z = -10.0f;
    task->rotA = 80.0f;
    task->unk84 = 3.0f;
    task->unk7C = -20.0f;
    task->unk80 = 4.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800939B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093CD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093ECC.s")

void func_80093FC8(CTTask* task) {
    if (task->unk60 != 0) {
        task->unk60--;
    } else {
        task->unk54 = 3;
        task->function = func_8009403C;
        task->unk60 = 30;
        PLAY_SFX(SFX_Yellow_Ant_Fall, 0, 16);
    }
}

void func_8009403C(CTTask* task) {
    func_8008D7FC(task);
    if (task->unk7C < 0) {
        func_80090CB0(task);
    }
    else{
        task->unk44 = 11;
        if (task->unk60 != 0) {
            task->unk60--;
        
        } else {
            task->function = func_800940B8;
            task->unk_5C = 3;
        }
    }
}

void func_800940B8(CTTask* task) {
    func_8008D7FC(task);
    if (func_80090CB0(task) != 0) {
        task->function = func_80094120;
        PLAY_SFX(SFX_Standard_Bounce, 0, 16);
        task->unk44 = 12;
    }
}

void func_80094120(CTTask* task) {
    if (func_8008D7FC(task) != 0) {
        task->unk60 = 15;
        task->function = func_800941C0;
        task->unk44 = 13;
        PLAY_SFX(SFX_Standard_Bounce, 0, 16);
    }
    if (task->unk40 == 16) {
        PLAY_SFX(SFX_Standard_Bounce, 0, 16);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800941C0.s")

void func_80094220(CTTask* task) {

}

void func_80094228(CTTask* task) {
    Effect_BossDeadEyes_Init(30);
    D_801FC9AC = 0;
    task->unk4E = 1;
    task->unk44 = 24;
    task->unk48 = -1;
    func_8008D7FC(task);
    task->unk3C = 1;
    task->rot.z = 1;
    task->function = func_8009430C;
    task->unk54 = 0;
    task->unk84 = 1;
    task->unk_5C = 30;
    task->scale.z = 0.7f;
    task->scale.y = 0.7f;
    task->scale.x = 0.7f;
    task->pos.y = 83;
    task->unk88 = 83;
    task->unk80 = -4;
    task->pos.x = 340;
    task->rot.x = 0;
    task->rot.y = 0;
    task->rotA = 0;
    task->pos.z = -30;
    task->unk7C = -14;
}

void func_8009430C(CTTask* task) {
    task->rotA += task->unk_5C;
    if (func_80090CB0(task) != 0) {
        PLAY_SFX(SFX_Standard_Bounce, 0, 16);
        task->unk7C = -14;
    }
    if (task->pos.x < 40) {
        task->unk80 = 5.8f;
        if (task->unk7C > 0) {
            task->unk7C *= -1.2;
        } else {
            task->unk7C *= 1.2;
        }
        task->function = func_80094410;
        task->unk60 = 4;
        task->unk7C = -10;
    }
}

void func_80094410(CTTask* task) {
    task->rotA += task->unk_5C;
    if (func_80090CB0(task) != 0) {
        PLAY_SFX(SFX_Standard_Bounce, 0, 16);
        task->unk7C *= -0.8;
        task->unk80 = 0;
        if (task->unk60 != 0) {
            task->unk60--;
        } else{
            task->function = func_80094540;
            task->rotA = 0;
        }
    }
}

void func_800944C0(CTTask* task) {
    task->rotA += task->unk_5C;
    if (func_80090CB0(task) != 0) {
        PLAY_SFX(SFX_Standard_Bounce, 0, 16);
        task->unk60 = 0;
        task->function = func_80094540;
        task->rotA = 0;
    }
}

void func_80094540(CTTask* task) {
    CTTask* newTask;
    if (task->unk60 != 0) {
        task->unk5E = 0;
        task->unk60--;
        task->unk44 = D_800FFEEC[task->unk5E];
    } else if (func_8008D7FC(task) != 0) {
        task->unk5E += 1;
        if (D_800FFEEC[task->unk5E] == -1) {
            task->function = func_800945E4;
            newTask = task->unk58;
            newTask->unk54 = 7;
        } else {
            task->unk44 = D_800FFEEC[task->unk5E];
        }
    }
}

void func_800945E4(CTTask* arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800945EC.s")

void func_800946F4(CTTask* task) {
    f32 var_f2 = (task->rotA < 0) ? -task->rotA : task->rotA;
    task->pos.y = (96.0 - (sinf(DEGREES_TO_RADIANS_2PI(var_f2)) * (task->scale.x * 40.0))) + 13.0;
}

void func_800947B0(CTTask* task) {
    task->pos.x += task->unk80;
    func_800946F4(task);
    if (task->pos.x < -120) {
        task->function = func_8009483C;
        task->scale.z = 1;
        task->scale.y = 1;
        task->scale.x = 1;
        task->rotA = 20;
        task->unk80 = 8;
    }
    task->unk4E = 1;
}

void func_8009483C(CTTask* task) {
    task->pos.x += task->unk80;
    func_800946F4(task);
    if (task->pos.x > 100) {
        task->function = func_8009489C;
    }
    task->unk4E = 1;
}

void func_8009489C(CTTask* task) {
    task->rotA -= 10;
    if (task->rotA < -45.0) {
        task->rotA = -45;
    }
    func_800946F4(task);
    task->pos.x += task->unk80;
    if (task->unk80 > 0) {
        task->unk80 -= 0.5;
    } else {
        task->unk80 = 0;
        task->function = func_80094958;
    }
    task->unk4E = 1;
}

void func_80094958(CTTask* task) {
    task->rotA += task->unk80;
    func_800946F4(task);
    if (task->rotA > 0.0f) {
        task->rotA = 0.0f;
        task->function = func_800949D8;
    } else {
        task->unk80 += 2.0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800949D8.s")

//thanks rain
void func_80094ABC(CTTask* task) {
    CTTask* temp;
    
    task->unk_04 = 39;
    task->unk44 = 5;
    task->pos.y = 72;
    temp = task->unk58;
    task->pos.z = temp->pos.z;
    task->unk55 = 255;
    task->unk88 = 88;
    task->unk84 = 1;
    task->unk7C = -6;
    task->scale.y = 0.75f;
    task->function = func_80094B2C;
}

void func_80094B2C(CTTask* task) {
    func_800612F0(1);
    func_80090C54(task);
    func_8008DAB8(task->pos.x, task->pos.y, task->pos.z, task->scale.x * 40.0, task->scale.y * 40.0, task->unk55, task->unk4C, task->unk_04);
    if (task->unk_5C != 0) {
        task->unk_5C--;
    }
    else {
        task->function = func_80094BDC;
    }
}

void func_80094BDC(CTTask* task) {
    func_800612F0(1);
    func_80090C54(task);
    func_8008DAB8(task->pos.x, task->pos.y, task->pos.z, task->scale.x * 40.0, task->scale.y * 40.0, task->unk55, task->unk4C, task->unk_04);
    if (func_80090CB0(task) != 0) {
        task->function = func_80094C84;
    }
}

void func_80094C84(CTTask* task) {
    task->pos.x += task->unk80;
    func_800612F0(1);
    func_80090C54(task);
    func_8008DAB8(task->pos.x, task->pos.y, task->pos.z, task->scale.x * 40.0, task->scale.y * 40.0, task->unk55, task->unk4C, task->unk_04);
    if ((task->pos.x > 350.0f) || (task->pos.x < -50.0f)) {
        CTTask_Unlink(task);
    }
}

void func_80094D64(CTTask* arg0) {
    if (arg0->unk54 == 1) {
        arg0->function = func_80094DBC;
        arg0->unk44 = 30;
        arg0->unk48 = -1;
        arg0->unk_5C = 8;
        return;
    }
    arg0->unk44 = 28;
    func_8008D7FC(arg0);
}

void func_80094DBC(CTTask* task) {
    CTTask* taskUnk;
    
    func_8008D7FC(task);
    if (task->unk_5C != 0) {
        task->unk_5C--;
        return;
    }
    taskUnk = task->unk58;
    taskUnk->unk54 = 7;
    task->function = &func_80094E0C;
}

void func_80094E0C(CTTask* arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094FC8.s")

void func_800950C0(CTTask* task) {
    task->unk4E = 1;
    task->unk44 = 29;
    task->unk48 = -1;
    func_8008D7FC(task);
    task->unk3C = 1;
    task->rot.z = 1;
    task->function = func_80095184;
    task->unk54 = 0;
    task->unk84 = 1;
    task->scale.z = 2.7f;
    task->scale.y = 2.7f;
    task->scale.x = 2.7f;
    task->pos.y = -14;
    task->unk88 = -14;
    task->unk80 = -8;
    task->rotA = 90;
    task->rot.x = 0;
    task->rot.y = 0;
    task->unk7C = 0;
    task->pos.x = 500;
    task->pos.z = -30;
}

void func_80095184(CTTask* task) {
    task->pos.x += task->unk80;
    if (task->pos.x < -200) {
        task->unk80 = 6;
        task->function = func_80095264;
        task->scale.z = 3;
        task->scale.y = 3;
        task->rotA *= -1;
        task->scale.x = 3;
        task->pos.y -= 30;
    }
    if (gTimer & 1) {
        func_80094FC8(task->pos.x + 10, task->pos.y, task->pos.z, 4, 0, 10, 32);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095264.s")

void func_80095500(CTTask* task) {
    CTTask* temp;
    
    if (task->unk_5C != 0) {
        task->unk_5C--;
        return;
    }
    temp = task->unk58;
    temp->unk54 = 1;
    CTTask_Unlink(task);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Process_PreCredits.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095E44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095EC8.s")

const char segNameCode[] = "コード";
const char segNameStatic[] = "スタティック";
const char segNameCommon[] = "共通";
const char segNameFieldOfPlay[] = "フィールド";
const char segNameFieldCommon[] = "フィールド共通";
const char segNameRabbit[] = "ウサギ";
const char segNameSubAnimation[] = "サブアニメ";
const char segNameCompetition[] = "対戦";
const char segNameBlue[] = "青";
const char segNameGreen[] = "緑";
const char segNameYellow[] = "黄色";
const char segNamePink[] = "ピンク";
const char segNameBlack[] = "黒";
const char segNameWhite[] = "白";
const char segNameSpace[] = "スペ";
const char segNameDemo[] = "デモ";

/* Segment Loading? */
s32 func_8009603C(s32 segmentID, s32 arg1) {
    s32 temp_s0;
    s32 size;
    unk80100F50* temp_s3;
    segTableEntry* segment;

    segment = &gSegTable[segmentID];                            
    temp_s3 = &D_80100F50[segmentID];                            
    size = (u32) segment->ramAddrEnd - (u32) segment->ramAddrStart;
    temp_s3->base_address = arg1 - size;
    temp_s3->unk4 = (u32) arg1;
    temp_s0 = DMA_Copy(segment->romAddrStart, (void* ) temp_s3->base_address, size);
    temp_s3->unk4 = temp_s3->base_address + size;
    if (temp_s0 < 0) {
        DummiedPrintf("エラー %d\n", temp_s0);
        return 0;
    }
    while (func_800A72E8(temp_s0) == 0) {}
    DummiedPrintf("%sセグメント(%dk)読み込み(%X)\n", segment->name, (u32) size / 1024, size);
    return (s32) temp_s3->base_address;
}

/* Stage Loading? */
u32 func_80096128(s32 stageToLoad, s32 inpAddr) {
    StageLoadData* stageData = &gStageLoadData[stageToLoad];
    s32 size = (u32) stageData->ramEnd - (u32) stageData->ramStart;
    s32 dmaResult;
    
    D_80100F50[0x3].base_address = inpAddr - size;
    D_80100F50[0x3].unk4 = D_80100F50[0x3].base_address + size;
    dmaResult = DMA_Copy(stageData->romStart, (void*)D_80100F50[0x3].base_address, size);
    if (dmaResult < 0) {
        DummiedPrintf("エラー %d\n", dmaResult);    //Error
        return 0;
    } else {
        while (func_800A72E8(dmaResult) == 0);
        DummiedPrintf("マップデータ(%dk)読み込み(%X)\n", (u32)size / 1024, size);
        // Map data(%dk),  read(%X)
        return D_80100F50[3].base_address;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/LoadStageByIndex.s")

void func_800966E0(void) {
    D_80100F50[1].base_address = (u32)&gFrameBuffers - _ALIGN((u32)static0_VRAM_END - (u32)static0_VRAM, 16);
    D_80100F50[1].unk4 = (u32)&gFrameBuffers;
    D_801FFB78 = func_8009603C(gSelectedCharacters[0] + 8, D_80100F50[1].base_address);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/CanAccessStage.s")

//need to fix type of D_8010026E
// s32 CanAccessStage(s32 stageIndex) {
//     s32 trueBits;
//     u8 temp_v0;
//     s32 var;
    
//     temp_v0 = D_8010026E[stageIndex].temp0;
//     if (stageIndex == 0) {
//         return 1;
//     }

//     if (temp_v0 == 0) {
//         int i = 0;
//         trueBits = 0;
//         for (i = 0; i < 6; i++) {
//             if (D_80200B68 & (1 << i)) {
//                 trueBits++;
//             }
//         }
//         if (trueBits >= 6) {
//             return TRUE;
//         }
//         if (sDebugLevelAccess >= 0) {
//             return TRUE;
//         }
//         return FALSE;
//     }
    
//     if (gGameState.stageAccess & temp_v0) {
//         return TRUE;
//     }
//     return FALSE;
// }

f32 func_80096898(u16 arg0) {
    f32 floatVar = 0.0f;
    switch (arg0) {
        default:
            break;
        case 0x800:
            floatVar = 180.0f;
            break;
        case 0x900:
            floatVar = 135.0f;
            break;
        case 0x100:
            floatVar = 90.0f;
            break;
        case 0xC00:
            floatVar = 45.0f;
            break;
        case 0x600:
            floatVar = -45.0f;
            break;
        case 0x200:
            floatVar = -90.0f;
            break;
        case 0xA00:
            floatVar = -135.0f;
        case 0x400:
            break;
    }
    return floatVar;
}

void func_80096964(CTTask* task) {
    task->unk44 = 3;
    task->unk4E = 1;
    task->function = Stage_Select_ChameleonWalk;
    task->scale.x = 0.6f;
    task->scale.y = 0.6f;
    task->scale.z = 0.6f;
    task->pos.z = 0.0f;
    task->pos.y = 0.0f;
    task->pos.x = 0.0f;
    task->rot.x = 0.0f;
    task->rot.z = 0.0f;
    task->unk40 = 0.0f;
    task->unk7C = 0.0f;
    task->unk80 = 0.0f;
    task->rot.y = 1.0f;
    task->unk3C = 1.0f;
    task->rotA = 50.0f;
    func_8008D7FC(task);
    task->unk50 = ChameleonGfxs[gSelectedCharacters[D_800FF8E8]];
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Stage_Select_ChameleonWalk.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096CA0.s")



const char stageNameJungleLand[] = "ＪＵＮＧＬＥ　ＬＡＮＤ";
const char stageNameAntLand[] = "　ＡＮＴ　ＬＡＮＤ";
const char stageNameBombLand[] = "　ＢＯＭＢ　ＬＡＮＤ";
const char stageNameDesertCastle[] = "ＤＥＳＥＲＴ　ＣＡＳＴＬＥ";
const char stageNameKidsLand[] = "　ＫＩＤＳ　ＬＡＮＤ";
const char stageNameGhostCastle[] = "ＧＨＯＳＴ　ＣＡＳＴＬＥ";
const char stageNameSecret[] = "　　ＳＥＣＲＥＴ";
const char stageNamePadding[] = "\0\0\0";

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096D40.s")

s32 func_80097414(s32 arg0, s32 arg1) {
    s32 result = -1;
    s32 i;
    s16 xPos;
    s16 yPos;

    for (i = 0; i != 6; i++) {
        xPos = StageSelect[i].xPos;
        yPos = StageSelect[i].yPos;
        if ((arg0 >= (xPos - 0x10)) && ((xPos + 0x10) >= arg0) && (arg1 >= (yPos - 0x18)) && ((yPos + 0x18) >= arg1)) {
            result = i;
            break;
        }
    }
    return result;
}

CTTask* func_80097498(void) {
    CTTask* temp_v0 = CTTask_Alloc(1, 0x64, 0);
    if (temp_v0 == NULL) {
        DummiedPrintf("エラー\n");
        while (1){}
    }
    temp_v0->function = func_80097508;
    temp_v0->unk66 = 0;
    temp_v0->pos.x = 64.0f;
    temp_v0->pos.y = 64.0f;
    temp_v0->pos.z = 0.0f;
    return temp_v0;
}

void func_80097508(CTTask* task) {
    func_8008F7A4(3, 8);
    task->function = &func_80097540;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Process_StageSelect.s")

void func_80097CF8(CTTask* task) {
    CTTask* temp = task->unk58;
    func_80096D40(temp->unk7A);
}

//save
const char D_8010E0CC[] = "DATA A";
const char D_8010E0D4[] = "DATA B";
const char D_8010E0DC[] = "DATA C";
const char D_8010E0E4[] = "DATA D";
//????
const char D_8010E0EC[] = "Ｓ  ＮＯＲＭ";
const char D_8010E0FC[] = "Ｓ  ＹＥＳＮＯ";
const char D_8010E10C[] = "Ｓ  ＯＫ";
const char D_8010E118[] = "Ｓ  ＱＵＩＴ";
//???? part 2
const char D_8010E128[] = "Ｌ  ＮＯＲＭ";
const char D_8010E138[] = "Ｌ  ＹＥＳＮＯ";
const char D_8010E148[] = "Ｌ  ＯＫ";
const char D_8010E154[] = "Ｌ  ＱＵＩＴ";
//???? part 3
const char D_8010E164[] = "Ｄ  ＮＯＲＭ";
const char D_8010E174[] = "Ｄ  ＹＥＳＮＯ";
const char D_8010E184[] = "Ｄ  ＯＫ";
const char D_8010E190[] = "Ｄ  ＱＵＩＴ";
//???? part 4
const char D_8010E1A0[] = "Ｃ  ＮＯＲＭ";
const char D_8010E1B0[] = "Ｃ  ＴＯ";
const char D_8010E1BC[] = "Ｃ  ＢＡＣＫ";
const char D_8010E1CC[] = "Ｃ  ＹＥＳＮＯ";
const char D_8010E1DC[] = "Ｃ  ＯＫ";
const char D_8010E1E8[] = "Ｃ  ＱＵＩＴ";

void func_80097D1C(CTTask* task) {
    s16 i;
    CTTask* newTask = task->unk58;

    setPrimColor(0xCD, 0xFF, 0x4F, 0xFF);
    func_80059F28(0, 0, 0, 0, 1, 320, 240, 0, SPRITE_BLANK);
    func_800610B8();
    printUISprite(80, 16, 0, 0, 1, 0, 0, 0, SPRITE_BATTLE_STAGETITLEBOARD);
    printUISprite(208, 16, 0, 0, 1, 0, 0, 2, SPRITE_BATTLE_STAGETITLEBOARD);
    for (i = 0x70; i < 0xB1; i += 0x20){
        printUISprite(i, 16, 0, 0, 1, 0, 0, 1, SPRITE_BATTLE_STAGETITLEBOARD);
    }
    func_800610A8();
    SetTextGradient_TopBottom(240, 20, 10, 255, 220, 220, 1, 255);
    PrintText(92, 20, 1, 1, 0, 0, "ＤＡＴＡ", 1);
    if (newTask->unk54 >= 0xC) {
        PrintText(164, 20, 1, 1, 0, 0, "ＣＯＰＹ", 1);
    } else if (newTask->unk54 >= 8) {
        PrintText(164, 20, 1, 1, 13, 24, "ＣＬＥＡＲ", 1);
    } else if (newTask->unk54 >= 4) {
        PrintText(164, 20, 1, 1, 0, 0, "ＬＯＡＤ", 1);
    } else {
        PrintText(164, 20, 1, 1, 0, 0, "ＳＡＶＥ", 1);
    }
    func_800610A8();
    SetTextGradient_TopBottom(22, 200, 10, 255, 220, 220, 1, 255);
    if (newTask->unk54 >= 4) {
        PrintText(47, 209, 1, 1, 8, 14, "ＯＫ", 1);
        PrintText(101, 209, 1, 1, 8, 14, "ＣＡＮＣＥＬ", 1);
        PrintText(187, 209, 1, 1, 8, 14, "ＣＬＥＡＲ", 1);
        PrintText(265, 209, 1, 1, 8, 14, "ＣＯＰＹ", 1);
        printUISprite(24, 208, 0, 0, 1, 0, 0, 0, SPRITE_SPECIFIC_SYMBOLS); // A
        printUISprite(78, 208, 0, 0, 1, 0, 0, 1, SPRITE_SPECIFIC_SYMBOLS); // B
        printUISprite(164, 208, 0, 0, 1, 0, 0, 3, SPRITE_SPECIFIC_SYMBOLS); // L
        printUISprite(242, 208, 0, 0, 1, 0, 0, 2, SPRITE_SPECIFIC_SYMBOLS); // R
    } else {
        PrintText(117, 209, 1, 1, 8, 14, "ＯＫ", 1);
        PrintText(191, 209, 1, 1, 8, 14, "ＣＡＮＣＥＬ", 1);
        printUISprite(94, 208, 0, 0, 1, 0, 0, 0, SPRITE_SPECIFIC_SYMBOLS); // A
        printUISprite(168, 208, 0, 0, 1, 0, 0, 1, SPRITE_SPECIFIC_SYMBOLS); // B
    }
    func_800610B8();
}

void func_800983C8(CTTask* task) {
    f32 x = task->pos.x - 20;
    f32 y = task->pos.y - 8;
    f32 i;

    func_800610B8();
    //drawing the board manually??
    func_80059F28(x, y, 0, 0, 1, 0, 0, 0, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(x, y + 24, 0, 0, 1, 32, 16, 3, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(x, y + 40, 0, 0, 1, 0, 0, 6, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(x + 96, y, 0, 0, 1, 0, 0, 2, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(x + 96, y + 24, 0, 0, 1, 0, 0, 5, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(x + 96, y + 40, 0, 0, 1, 0, 0, 8, SPRITE_BATTLE_BIGBOARD);
    for (i = x + 32; i <= x + 64; i += 32){
        func_80059F28(i, y, 0, 0, 1, 0, 0, 1, SPRITE_BATTLE_BIGBOARD);
        func_80059F28(i, y + 24, 0, 0, 1, 0, 0, 4, SPRITE_BATTLE_BIGBOARD);
        func_80059F28(i, y + 40, 0, 0, 1, 0, 0, 7, SPRITE_BATTLE_BIGBOARD);
    }
}

void func_80098684(u8* arg0, u8* arg1, u8* arg2, u8* arg3, u8* arg4, u8* arg5) {
    f32 temp_f0;
    s32 temp_t6;
    s32 temp_v0;

    temp_v0 = D_80174998 & 7;
    temp_t6 = (D_80174998 & 0x18) / 8;
    if (temp_t6 == 0) {
        temp_f0 = (ABS2(temp_v0)) / (Eight);
        *arg0 = (-198 * temp_f0) + 220;
        *arg1 = (-20 * temp_f0) + 220;
        *arg2 = (9 * temp_f0) + 1;
        *arg3 = 220;
        *arg4 = 220;
        *arg5 = 1;
    } else if (temp_t6 == 1) {
         temp_f0 = (ABS2(temp_v0)) / (Eight);
        *arg0 = 22;
        *arg1 = 200;
        *arg2 = 10;
        *arg3 = (-198 * temp_f0) + 220;
        *arg4 = (-20 * temp_f0) + 220;
        *arg5 = (9 * temp_f0) + 1;
    } else if (temp_t6 == 2) {
        temp_f0 = (8 - (ABS2(temp_v0))) / (Eight);
        *arg0 = (-198 * temp_f0) + 220;
        *arg1 = (-20 * temp_f0) + 220;
        *arg2 = (9 * temp_f0) + 1;
        *arg3 = 22;
        *arg4 = 200;
        *arg5 = 10;
    } else{
        temp_f0 = (8 - (ABS2(temp_v0))) / (Eight);
        *arg0 = 220;
        *arg1 = 220;
        *arg2 = 1;
        *arg3 = (-198 * temp_f0) + 220;
        *arg4 = (-20 * temp_f0) + 220;
        *arg5 = (9 * temp_f0) + 1;
    }
}

//ty rain
void func_80098F50(CTTask* task) {
    CTTask* newTask;
    f32 x;
    f32 y;
    char pad3[8];
    char pad2[4];
    char resultChar[1];
    s32 unk62;
    s32 temp;
    u8 r1;
    u8 r2;
    u8 g1;
    u8 g2;
    u8 b1;
    u8 b2;
    
    unk62 = task->unk_62;
    newTask = task->unk58;
    x = task->pos.x;
    y = task->pos.y;
    func_800610A8();
    if ((task->unk_62 == newTask->unk6A) && (newTask->unk54 == 6)) {
        D_80174998 += 1;
        func_80098684(&r1, &g1, &b1, &r2, &g2, &b2);
        SetTextGradient_TopBottom(255, 0, 0, 255, 255, 128, 0, 255);
    } else if (task->unk_62 == newTask->unk6A) {
        func_80098684(&r1, &g1, &b1, &r2, &g2, &b2);
        SetTextGradient_TopBottom(r1, g1, b1, 255, r2, g2, b2, 255);
    } else if ((task->unk_62 == newTask->unk_64) && (newTask->unk54 == 0xD)) {
        SetTextGradient(200, 22, 160, task->unk_68, 220, 220, 20, task->unk_68, 200, 22, 160, task->unk_68, 200, 220, 20, task->unk_68);
    } else {
        SetTextGradient_TopBottom(127, 127, 60, task->unk_68, 30, 30, 20, task->unk_68);
    }
    PrintText(x, y, 0, 1, 0, 0, "ＤＡＴＡ", 1);
    PrintText(x + 72, y, 0, 1, 0, 0, ParseIntToBase10(unk62 + 1, &resultChar[0]), 1);
    func_800610B8();
    if ((u16) task->unk72 == 1) {
        temp = task->unk_64;
        func_80059F28(x, y + 33, 0, 0, 1, 0, 0, 0,D_801003CC[task->unk66]);
        printUISprite(x + 28, y + 33, 0, 0, 1, 0, 0, 0, SPRITE_CROWN_ICON);
        SetTextGradient_TopBottom(20, 100, 1, 255, 240, 220, 0, 255);
        func_800612F0(1);
        printUISprite(x + 20 + 16 + 9, y + 33, 0, 0, 1, 16, 16, 20, SPRITE_TEXTBIG);
        func_800612F0(0);
        SetTextGradient_TopBottom(20, 100, 1, 255, 240, 220, 0, 255);
        PrintText(x + 20 + 32 + 10, y + 30, 0, 1, 12, 20, ParseIntToBase10(temp, &resultChar[0]), 1);
    } else{
        SetTextGradient_LeftRight(1, 1, 1, 255, 1, 1, 1, 128);
        PrintText(x + 16, y + 32, 0, 1, 8, 16, "ＮＯ  ＤＡＴＡ！", 1);
    }
}

void func_80099570(CTTask* task) {
    func_800983C8(task);
    func_80098F50(task);
}

void func_80099598(CTTask* arg0) {
    _bzero(&gSaveFiles[arg0->unk_62], sizeof(SaveFile));
    SaveData_LoadFile(arg0->unk_62, &gSaveFiles[arg0->unk_62]);
    arg0->function = Task_LoadSaveFileAt;
}

void func_8009960C(CTTask* arg0) {
    arg0->function = &Task_LoadSaveFileAt;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Task_LoadSaveFileAt.s")

void func_8009984C(CTTask* arg0) {
    arg0->unk_68 = 0xFF;
    func_80099570(arg0);
}

void func_80099870(CTTask* arg0) {
    CTTask* sp1C = arg0->unk58;
    arg0->unk_68 -= 32;
    func_80099570(arg0);
    if (arg0->unk_68 <= 0) {
        arg0->function = func_80099598;
        sp1C->unk5E = 1;
    }
}

void func_800998CC(CTTask* arg0) {
    arg0->function = &func_8009984C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800998DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80099AF4.s")

void func_8009A57C(CTTask* task) {
    CTTask* temp_v1 = task->unk58;
    if (temp_v1->unk54 == 1) {
        task->function = func_8009A64C;
    } else if (temp_v1->unk54 == 0) {
        if (gContMain[task->unk_62].buttons2 & 0x8000) {
            temp_v1->unk54 = 1;
            PLAY_SFX(SFX_Select, 0, 80);
        } else if (gContMain[task->unk_62].buttons2 & 0x4000) {
            temp_v1->unk54 = 3;
            PLAY_SFX(SFX_Decline, 0, 80);
        } else {
            func_800998DC(task);
        }
    }
}

void func_8009A64C(CTTask* task) {
    CTTask* newTask = task->unk58;
    if (newTask->unk54 != 1) {
        task->function = func_8009A57C;
    } else if (gContMain[task->unk_62].buttons2 & 0x8000) {
        newTask->unk54 = 2;
        task->function = func_8009A57C;
        PLAY_SFX(SFX_Select, 0, 80);
    } else if (gContMain[task->unk_62].buttons2 & 0x4000) {
        newTask->unk54 = 0;
        task->function = func_8009A57C;
        PLAY_SFX(SFX_Decline, 0, 80);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A868.s")

void func_8009A988(CTTask* arg0) {
    CTTask* temp_v1 = arg0->unk58;
    if (temp_v1->unk54 == 0xD) {
        func_8009A724(arg0);
        arg0->unk60 = 0;
    }
    if (temp_v1->unk54 == 0x10) {
        arg0->unk5E = 8;
        arg0->unk60++;
        if (arg0->unk5E >= arg0->unk60) {
            func_8009A868(arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MakeSaveMaster.s")

void func_8009ABF4(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        if (arg0->unk54 == 1) {
            arg0->function = func_8009AC74;
        }
        else if (arg0->unk54 == 3) {
            arg0->function = func_8009AFFC;
            arg0->unk5E = 0;
            func_8008E9AC(0x20, 0, 0, 0, &arg0->unk5E);
        }
    }
}

void func_8009AC74(CTTask* arg0) {
    func_80099AF4(arg0);
    if (arg0->unk54 == 2) {
        arg0->function = func_8009ACC8;
    }
    else if (arg0->unk54 == 0) {
        arg0->function = func_8009ABF4;
    }
}

void func_8009ACC8(CTTask* task) {
    DummiedPrintf("ＥＥＰチェック\n");
    SaveData_WriteFile(&gGameState);
    gGameState.flags |= 2;
    gGameState.checksum = SaveData_FileChecksum(&gGameState.checksum);
    task->unk_68 = 4;
    if (SaveData_UpdateFile(task->unk6A, &gGameState) != 0) {
        task->function = func_8009AE38;
        task->unk_68 = 0x3C;
    }
    else {
        task->function = func_8009ADDC;
        *(&D_80200C08 + 0x69) = task->unk6A;
        D_801FC9A4 = 0;
    }
}

void func_8009AD74(CTTask* task) {
    CTTask* var_v0 = gCTTaskHead;
    CTTask* var_v1 = var_v0->next;
    while (var_v1 != NULL){
        if ((var_v0->runType == 3) && (task->unk6A == var_v0->unk_62)) {
            var_v1 = var_v0->next;
            var_v0->function = func_80099598;
        }
        var_v0 = var_v1;
        var_v1 = var_v1->next;
    }
    task->unk_68 = 4;
    task->function = func_8009AF98;
}

void func_8009ADDC(CTTask* task) {
    //eugh
    s16 temp_v0 = task->unk_68;
    task->unk_68 = temp_v0 - 1;
    if (temp_v0 == 0) {
        DummiedPrintf("元に戻る\n", task);
        task->function = func_8009AD74;
        gGameRecords.flags[0] = SaveData_RecordChecksum();
        SaveData_UpdateRecords();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AE38.s")

void func_8009AF98(CTTask* task) {
    DummiedPrintf("元に戻る\n");
    if (func_8008EC90() != 0) {
        task->function = func_8009AFFC;
        task->unk5E = 0;
        func_8008E9AC(0x20, 0, 0, 0, &task->unk5E);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AFFC.s")

void func_8009B08C(CTTask* task) {
    setPrimColor(0, 0, 0, 255);
    printUISprite(2, 2, 0, 0, 1, 316, 236, 0, SPRITE_BLANK);
    gGameModeState = 3;
    task->function = func_8009B120;
}

void func_8009B120(CTTask* task) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/FileWork.s")

void func_8009B45C(CTTask* task) {

}

void func_8009B464(CTTask* task) {
    CTTask* newTask = task->unk58;
    if (gContMain[task->unk_62].buttons2 & 0x8000) {
        if (gSaveFiles[newTask->unk6A].flags & 2) {
            newTask->unk54 = 6;
            task->function = func_8009B45C;
            PLAY_SFX(SFX_Select, 0, 80);
            return;
        }
        else{
            PLAY_SFX(SFX_Save_Delete_Decline, 0, 80);
        }
    }
    if (gContMain[task->unk_62].buttons2 & 0x4000) {
        newTask->unk54 = 7;
        task->function = func_8009B45C;
        PLAY_SFX(SFX_Decline, 0, 80);
    }
    else if (gContMain[task->unk_62].buttons2 & 0x20) {
        if (!(gSaveFiles[newTask->unk6A].flags & 2)) {
            PLAY_SFX(SFX_Save_Delete_Decline, 0, 80);
        } else{
            newTask->unk54 = 9;
            task->function = func_8009BEC4;
            PLAY_SFX(SFX_Select, 0, 80);
        }
    }
    else if (gContMain[task->unk_62].buttons2 & 0x10) {
        if (!(gSaveFiles[newTask->unk6A].flags & 2)) {
            PLAY_SFX(SFX_Save_Delete_Decline, 0, 80);
        } else {
            newTask->unk54 = 0xD;
            task->function = func_8009C74C;
            newTask->unk_64 = newTask->unk6A;
            PLAY_SFX(SFX_Select, 0, 80);
        }
    }
    else{
        func_800998DC(task);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MakeLoadMaster.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B914.s")

void func_8009BA38(CTTask* task) {
    if (func_8008EC90() != 0) {
        if (task->unk54 == 6) {
            task->function = func_8009BAF4;
            return;
        }
        if (task->unk54 == 7) {
            task->function = func_8009BC60;
            task->unk5E = 0;
            func_8008E9AC(32, 0, 0, 0, &task->unk5E);
            return;
        }
        if (task->unk54 == 9) {
            task->function = func_8009BC98;
            return;
        }
        if (task->unk54 == 13) {
            task->unk54 = 13;
            task->function = func_8009C2FC;
        }
    }
}

void func_8009BAF4(CTTask* task) {
    SaveData_LoadFile(task->unk6A, &gGameState);
    (&D_80200C08)[105] = task->unk6A;
    D_800FF8EC = task->unk6A;
    task->unk_68 = 8;
    task->function = func_8009BB54;
}

void func_8009BB54(CTTask* task) {
    //eugh
    s16 temp_v0 = task->unk_68;
    task->unk_68 = temp_v0 - 1;
    if (temp_v0 == 0) {
        DummiedPrintf("元に戻る\n");
        task->function = func_8009BBD8;
        task->unk5E = 0;
        func_8008E9AC(32, 255, 255, 255, &task->unk5E);
        gGameRecords.flags[0] = SaveData_RecordChecksum();
        D_801FC9A4 = 0;
    }
}

void func_8009BBD8(CTTask* task) {
    if (func_8008EC90() != 0) {
        //has to be like this
        D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 255;
        task->function = func_8009BC30;
    }
}

// Save Wrapper? [arg0 probably used somehow]
void func_8009BC30(CTTask* arg0) {
    SaveData_UpdateRecords();
    gGameModeState++;
}

void func_8009BC60(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        gGameModeState += 2;
    }
}

void func_8009BC98(CTTask* arg0) {
    func_80099AF4(arg0);
    
    if (arg0->unk54 == 0xA) {
        arg0->function = func_8009BCF0;
    }
    else if (arg0->unk54 == 4) {
        arg0->function = func_8009BA38;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BCF0.s")

void func_8009BDA8(CTTask* arg0) {
    arg0->unk_68 = 4;
    arg0->function = &func_8009BDE4;
}

void func_8009BDC0(CTTask* arg0) {
    if (arg0->unk_68--) {
        return;
    }
    arg0->function = &func_8009BDA8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BDE4.s")

void func_8009BEC4(CTTask* task) {
    CTTask* newTask = task->unk58;
    if (newTask->unk54 != 9) {
        task->function = func_8009C278;
    }  else if (gContMain[task->unk_62].buttons2 & 0x8000) {
        newTask->unk54 = 10;
        task->function = func_8009C278;
        PLAY_SFX(SFX_Select, 0, 80);
    } else if (gContMain[task->unk_62].buttons2 & 0x4000) {
        newTask->unk54 = 4;
        task->function = func_8009C278;
        PLAY_SFX(SFX_Decline, 0, 80);
    }
}

void func_8009BFA0(CTTask* arg0) {
    func_80099AF4(arg0);
    if (arg0->unk54 == 19) {
        arg0->function = func_8009BFF8;
    }
    else if (arg0->unk54 == 4) {
        arg0->function = func_8009BA38;
    }
}

void func_8009BFF8(CTTask* arg0) {
    func_80099AF4(arg0);
    SaveData_ClearRecords();
    arg0->function = &func_8009C038;
    arg0->unk_68 = 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C038.s")

void func_8009C19C(CTTask* task) {
    CTTask* newTask = task->unk58;
    if (newTask->unk54 != 18) {
        task->function = func_8009C278;
    } else if (gContMain[task->unk_62].buttons2 & 0x8000) {
        newTask->unk54 = 19;
        task->function = func_8009C278;
        PLAY_SFX(SFX_Select, 0, 80);
    } else if (gContMain[task->unk_62].buttons2 & 0x4000) {
        newTask->unk54 = 4;
        task->function = func_8009C278;
        PLAY_SFX(SFX_Decline, 0, 80);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C278.s")

void func_8009C2FC(CTTask* arg0) {
    if (arg0->unk54 == 0xF) {
        arg0->function = &func_8009C33C;
    }
    else if (arg0->unk54 == 0xE) {
        arg0->unk54 = 4;
        arg0->function = &func_8009BA38;
    }
}

//ellie did this one she just didnt put it in the repo
void func_8009C33C(CTTask* task) {
    func_80099AF4(task);
    if (task->unk54 == 16) {
        task->function = func_8009C394;
    }
    else if (task->unk54 == 4) {
        task->function = func_8009BA38;
    }
}

void func_8009C394(CTTask* task) {
    CTTask* newTask;
    CTTask* next;

    for (newTask = gCTTaskHead, next = newTask->next;
    next != NULL; newTask = next, next = next->next){
        if (newTask->runType == 3) {
            if (task->unk_64 == newTask->unk_62) {
                newTask->function = func_800998CC;
                newTask->unk74 = task->unk6A;
            }
            if (task->unk6A == newTask->unk_62) {
                newTask->function = func_80099870;
            }
            next = newTask->next;
        }
    }
    SaveData_LoadFile(task->unk_64, &gSaveFiles[task->unk_64]);
    gSaveFiles[task->unk_64].checksum = SaveData_FileChecksum(&gSaveFiles[task->unk_64].checksum);
    if (SaveData_UpdateFile(task->unk6A, &gSaveFiles[task->unk_64]) != 0) {
        task->unk_68 = 0x3C;
        task->function = func_8009C4E0;
    } else {
        task->unk_68 = 8;
        task->function = func_8009C700;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C4E0.s")

void func_8009C644(CTTask* task) {
    CTTask* at;
    CTTask* next;

    for (at = gCTTaskHead, next = at->next;
        next != NULL;
        at = next, next = next->next){
        if ((at->runType == 3) && (task->unk6A == at->unk_62)) {
            next = at->next;
            at->function = func_80099598;
        }
    }
    task->unk_68 = 8;
    task->function = func_8009C6AC;
}

void func_8009C6AC(CTTask* arg0) {
    s16 save = arg0->unk_68;
    arg0->unk_68 = save-1;
    if (save == 0) {
        DummiedPrintf("元に戻る\n", arg0);
        arg0->function = func_8009BA38;
        arg0->unk54 = 4;
    }
}

void func_8009C700(CTTask* task) {
    if (task->unk_68--) {
        return;
    } else {
        DummiedPrintf("元に戻る\n", task);
        task->function = &func_8009C644;
    }
}

void func_8009C74C(CTTask* task) {
    CTTask* newTask = task->unk58;
    if (newTask->unk54 == 0xD) {
        if (gContMain[task->unk_62].buttons2 & 0x8000) {
            newTask->unk54 = 15;
            task->function = func_8009C828;
            PLAY_SFX(SFX_Select, 0, 80);
        } else if (gContMain[task->unk_62].buttons2 & 0x4000) {
            newTask->unk54 = 14;
            task->function = func_8009B464;
            PLAY_SFX(SFX_Decline, 0, 80);
        } else {
            func_800998DC(task);
        }
    }
}

void func_8009C828(CTTask* task) {
    CTTask* newTask = task->unk58;
    if (newTask->unk54 != 15) {
        task->function = func_8009C278;
    } else if (gContMain[task->unk_62].buttons2 & 0x8000) {
        newTask->unk54 = 16;
        task->function = func_8009C278;
        PLAY_SFX(SFX_Select, 0, 80);
    } else if (gContMain[task->unk_62].buttons2 & 0x4000) {
        newTask->unk54 = 4;
        task->function = func_8009C278;
        PLAY_SFX(SFX_Decline, 0, 80);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009CB14.s")

void func_8009CBC0(void) {
    s32 i, j;

    //drawing the board manually??
    setPrimColor(205, 255, 79, 255);
    func_80059F28(0, 0, 0, 0, 1, 320, 240, 0, SPRITE_BLANK);
    func_800610B8();
    func_80059F28(48, 16, 0, 0, 1, 32, 32, 0, SPRITE_BATTLE_STAGETITLEBOARD);
    for (i = 80; i < 209; i += 0x20){
        func_80059F28(i, 16, 0, 0, 1, 32, 32, 1, SPRITE_BATTLE_STAGETITLEBOARD);
    }
    func_80059F28(240, 16, 0, 0, 1, 32, 32, 2, SPRITE_BATTLE_STAGETITLEBOARD);
    func_80059F28(32, 56, 0, 0, 1, 32, 24, 0, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(256, 56, 0, 0, 1, 32, 24, 2, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(32, 200, 0, 0, 1, 32, 24, 6, SPRITE_BATTLE_BIGBOARD);
    func_80059F28(256, 200, 0, 0, 1, 32, 24, 8, SPRITE_BATTLE_BIGBOARD);
    for (i = 0x40; i < 225; i += 0x20){
        func_80059F28(i, 56, 0, 0, 1, 32, 24, 1, SPRITE_BATTLE_BIGBOARD);
    }
    for (i = 0x40; i != 0x100; i += 0x20){
        func_80059F28(i, 200, 0, 0, 1, 32, 24, 7, SPRITE_BATTLE_BIGBOARD);
    }
    for (j = 80; j < 177; j += 0x18){
        func_80059F28(32, j, 0, 0, 1, 32, 24, 3, SPRITE_BATTLE_BIGBOARD);
    }
    for (j = 80; j != 200; j += 0x18){
        func_80059F28(256, j, 0, 0, 1, 32, 24, 5, SPRITE_BATTLE_BIGBOARD);
    }
    for (i = 0x40; i != 0x100; i += 0x20){
        for (j = 80; j != 200; j += 0x18){
            func_80059F28(i, j, 0, 0, 1, 32, 24, 4, SPRITE_BATTLE_BIGBOARD);
        }
    }
}

void func_8009CFA8(void) {
    s32 i, j;
    func_800610B8();
    for (i = 0; i != 5; i++){
        for (j = 0; j != 8; j++){
            func_800612F0(i);
            func_80059F28(j * 40, i * 48, 0, 0, 1, 0, 0, j, SPRITE_BATTLE_CHAMELEONBACKGROUND);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D08C.s")

//battle mode
const char D_8010E60C[] = "ＤＡＶＹ";
const char D_8010E618[] = "ＪＡＣＫ";
const char D_8010E624[] = "ＦＲＥＤ";
const char D_8010E630[] = "ＬＩＮＤＡ";
const char D_8010E63C[] = "ＢＬＡＣＫ";
const char D_8010E648[] = "ＷＨＩＴＥ";

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D0EC.s")

void func_8009D19C(CTTask* task) {
    if (func_8008EC90()) {
        SetProcessType(GAME_MODE_TITLE_SCREEN);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D1CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D45C.s")

//battle mode
void func_8009D954(CTTask* task) {
    func_800610B8();
    SetTextGradient_TopBottom(70, 192, 235, 255, 0, 143, 36, 255);
    func_80080864(72.0f, 208.0f, 0.0f, 1.0f, 16.0f, 16.0f, "ＰＲＥＳＳ  ＳＴＡＲＴ", 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DA20.s")

void func_8009DB98(CTTask* arg0) {
    CTTask* head;
    CTTask* next;

    if (func_8008EC90() != 0) {
        head = gCTTaskHead;
        next = head->next;
        while (next != NULL){
            if (head->runType == 2) {
                head->unk4E = 0;
                head->function = func_8009F314;
                next = head->next;
            }
            head = next;
            next = next->next;
        }
        arg0->unk54 = 7;
        arg0->function = func_8009F0C8;
        arg0->unk5E = 0;
        arg0->unk_64 = 0;
        func_8008EA60(32, 0, 0, 0, &arg0->unk_64);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DC40.s")

u16 func_8009DDEC(CTTask* task) {
    return func_8008D6E4(task, &gContMain[task->unk_62]);
}

void func_8009DE1C(CTTask* task) {
    u16 result;
    CTTask* temp_t1;

    temp_t1 = task->unk58;
    task->unk54 = 0;
    task->unk44 = 3;
    if (temp_t1->unk54 == 15) return;
    while (temp_t1->unk94[task->unk_5C] != 0xFF){
        task->unk_5C++;
        if ((task->unk_5C == 4) && (D_80200B2C == 0)) {
            task->unk_5C++;
        }
        if ((task->unk_5C == 5) && (D_80200B30 == 0)) {
            task->unk_5C++;
        }
        if (task->unk_5C >= 6) {
            task->unk_5C = 0;
        }
    }
    result = func_8009DDEC(task);
    temp_t1 = task->unk58;
    if (gContMain[task->unk_62].buttons2 & 0x8000) {
        task->unk72 = 2;
        task->function = func_8009E24C;
        task->unk60 = 8;
        temp_t1->unk94[task->unk_5C] = task->unk_62;
        PLAY_SFX(0x28, 0, 0x10);
    }
    if (gContMain[task->unk_62].buttons2 & 0x4000) {
        temp_t1->unk54 = 15;
        PLAY_SFX(0xC4, 0, 0x10);
        return;
    }
    if (result == 0) return;
    if (result & 0x200) {
        task->unk_5C--;
        if (task->unk_5C < 0) {
            task->unk_5C = 5;
        }
        if ((task->unk_5C == 5) && (D_80200B30 == 0)) {
            task->unk_5C--;
        }
        if ((task->unk_5C == 4) && (D_80200B2C == 0)) {
            task->unk_5C--;
        }
        PLAY_SFX(0x2A, 0, 0x10);
        while (temp_t1->unk94[task->unk_5C] != 0xFF){
            task->unk_5C--;
            if (task->unk_5C < 0) {
                task->unk_5C = 5;
            }
            if ((task->unk_5C == 5) && (D_80200B30 == 0)) {
                task->unk_5C--;
            }
            if ((task->unk_5C == 4) && (D_80200B2C == 0)) {
                task->unk_5C--;
            }
        }
    }
    if (result & 0x100) {
        task->unk_5C++;
        if ((task->unk_5C == 4) && (D_80200B2C == 0)) {
            task->unk_5C++;
        }
        if ((task->unk_5C == 5) && (D_80200B30 == 0)) {
            task->unk_5C++;
        }
        if (task->unk_5C >= 6) {
            task->unk_5C = 0;
        }
        PLAY_SFX(0x2A, 0, 0x10);
        while (temp_t1->unk94[task->unk_5C] != 0xFF){
            task->unk_5C++;
            if ((task->unk_5C == 4) && (D_80200B2C == 0)) {
                task->unk_5C++;
            }
            if ((task->unk_5C == 5) && (D_80200B30 == 0)) {
                task->unk_5C++;
            }
            if (task->unk_5C >= 6) {
                task->unk_5C = 0;
            }
        }
    }
}

void func_8009E24C(CTTask* task) {
    task->unk44 = 4;
    task->pos.y -= 4;
    if (task->pos.y <= 96) {
        task->pos.y = 96;
        task->function = func_8009E504;
        gSelectedCharacters[task->unk_62] = task->unk_5C;
    }
}

void func_8009E2B0(CTTask* arg0) {
    arg0->unk44 = 3;
    arg0->pos.y += 4.0f;
    if (arg0->pos.y >= 128.0f) {
        arg0->pos.y = 128.0f;
        arg0->function = func_8009DE1C;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E6D0.s")

void func_8009E784(CTTask* task) {
    CTTask* newTask = task->unk58;
    while (newTask->unk94[task->unk_5C] != 0xFF){
        task->unk_5C++;
        if ((task->unk_5C == 4) && (D_80200B2C == 0)) {
            task->unk_5C++;
        }
        if ((task->unk_5C == 5) && (D_80200B30 == 0)) {
            task->unk_5C++;
        }
        if (task->unk_5C >= 6) {
            task->unk_5C = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E82C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009EE44.s")

void func_8009F0C8(CTTask* task) {
    func_8009E82C(task);
    if (func_8008EC90() != 0) {
        if (task->unk54 == 14) {
            task->unk_64 = 0;
            func_8008E9AC(32, 0, 0, 0, &task->unk_64);
            task->function = func_8009F5B0;
            D_80200B18 = task->unk5E;
        } else if (task->unk54 == 9) {
            task->unk_64 = 0;
            func_8008E9AC(32, 0, 0, 0, &task->unk_64);
            task->function = func_8009F7F4;
        } else if (task->unk54 == 8) {
            task->unk_64 = 0;
            func_8008E9AC(32, 0, 0, 0, &task->unk_64);
            task->function = func_8009F1B4;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F1B4.s")

void func_8009F314(CTTask* task) {
    CTTask* pad;
    CTTask* newTask = task->unk58;
    u16 funcResult;

    if (func_8008EC90() != 0) {
        if (newTask->unk54 == 11) {
            task->function = func_800A03B8;
        } else if (newTask->unk54 >= 14) {
            CTTask_Unlink(task);
        } else if (newTask->unk54 < 9) {
            funcResult = func_8009DDEC(task);
            if ((gContMain[task->unk_62].buttons2 & 0x1000) || (gContMain[task->unk_62].buttons2 & 0x8000)) {
                newTask->unk54 = 14;
                PLAY_SFX(40, 0, 0x10);
            } else if (gContMain[task->unk_62].buttons2 & 0x4000) {
                newTask->unk54 = 8;
                PLAY_SFX(196, 0, 0x10);
            } else if (gContMain[task->unk_62].buttons2 & 0x0010) {
                newTask->unk54 = 9;
                PLAY_SFX(40, 0, 0x10);
            } else if (funcResult != 0) {
                if (funcResult & 0x400) {
                    if (newTask->unk5E < 4) {
                        newTask->unk5E += 4;
                        PLAY_SFX(42, 0, 0x10);
                    }
                } else if (funcResult & 0x800) {
                    if (newTask->unk5E >= 4) {
                        newTask->unk5E -= 4;
                        PLAY_SFX(42, 0, 0x10);
                    }
                } else if (funcResult & 0x100) {
                    newTask->unk5E++;
                    PLAY_SFX(42, 0, 0x10);
                    if ((newTask->unk5E == 4) || (newTask->unk5E == 8)) {
                        newTask->unk5E -= 4;
                    }
                } else if (funcResult & 0x200) {
                    newTask->unk5E--;
                    PLAY_SFX(42, 0, 0x10);
                    if ((newTask->unk5E == -1) || (newTask->unk5E == 3)) {
                        newTask->unk5E += 4;
                    }
                }
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F5B0.s")

void func_8009F7F4(CTTask* task) {
    func_8009E82C(task);
    if (func_8008EC90() != 0) {
        task->unk54 = 11;
        task->function = func_800A02C4;
        task->unk66 = gSelectedBattleBGM + 1;
        task->unk_62 = D_80200B1A;
        task->unk_68 = D_80200B1C;
        task->unk6A = D_801003DC.unk0[0];
        task->unk_64 = 0;
        func_8008EA60(32, 0, 0, 0, &task->unk_64);
    }
}

//battle mode
const char D_8010E754[] = "ＢＧＭ　ＳＥＬＥＣＴ";
const char D_8010E76C[] = "ＴＩＭＥ　ＬＩＭＩＴ";
const char D_8010E784[] = "ＣＯＭ　ＰＬＡＹＥＲ　ＮＵＭ";
const char D_8010E7A4[] = "ＣＯＭ　ＬＥＶＥＬ";
const char D_8010E7B8[] = "ＥＸＩＴ";

//music options for ^
const char D_8010E7C4[] = "ＲＡＮＤＯＭ";
const char D_8010E7D4[] = "ＢＧＭ１";
const char D_8010E7E0[] = "ＢＧＭ２";
const char D_8010E7EC[] = "ＢＧＭ３";

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F890.s")

void func_800A02C4(CTTask* task) {
    func_8009F890();
    if (task->unk54 == 12) {
        D_80200B1A = task->unk_62;
        gSelectedBattleBGM = task->unk66 - 1;
        D_80200B1C = task->unk_68;
        D_801003DC.unk0[0] = task->unk6A;
        func_8008E9AC(32, 0, 0, 0, &task->unk_64);
        task->function = func_800A0354;
    }
}

void func_800A0354(CTTask* arg0) {
    func_8009F890();
    if (func_8008EC90() != 0) {
        arg0->function = func_8009F0C8;
        func_8008EA60(0x20, 0, 0, 0, &arg0->unk_64);
        arg0->unk54 = 7;
    }
}

void func_800A03B8(CTTask* task) {
    u16 funcResult;
    CTTask* newTask = task->unk58;
    funcResult = func_8009DDEC(task);
    if (newTask->unk54 == 12) {
        task->function = func_8009F314;
    } else if (newTask->unk54 == 11) {
        if ((gContMain[task->unk_62].buttons2 & 0x1000) || (gContMain[task->unk_62].buttons2 & 0x8000)) {
            if (newTask->unk60 == 4) {
                newTask->unk54 = 12;
                PLAY_SFX(40, 0, 0x10);
                task->function = func_8009F314;
            }
        } else if (funcResult != 0) {
            if (funcResult & 0x400) {
                newTask->unk60++;
                if (newTask->unk60 >= 5) {
                    newTask->unk60 = 0;
                }
                PLAY_SFX(42, 0, 0x10);
            } else if (funcResult & 0x800) {
                newTask->unk60--;
                if (newTask->unk60 < 0) {
                    newTask->unk60 = 4;
                }
                PLAY_SFX(42, 0, 0x10);
            } else {
                if (funcResult & 0x100) {
                    if (newTask->unk60 == 3) {
                        newTask->unk6A++;
                        if (newTask->unk6A >= 5) {
                            newTask->unk6A = 0;
                        }
                        PLAY_SFX(42, 0, 0x10);
                    } else if (newTask->unk60 == 0) {
                        newTask->unk66++;
                        if (newTask->unk66 >= 4) {
                            newTask->unk66 = 0;
                        }
                        PLAY_SFX(42, 0, 0x10);
                    } else if (newTask->unk60 == 1) {
                        newTask->unk_62++;
                        if (newTask->unk_62 >= 9) {
                            newTask->unk_62 = 0;
                        }
                        PLAY_SFX(42, 0, 0x10);
                    } else if (newTask->unk60 == 2) {
                        PLAY_SFX(42, 0, 0x10);
                        newTask->unk_68++;
                        if (D_80200B1E < newTask->unk_68) {
                            newTask->unk_68 = D_801003DC.unk6[-D_80200B1E + 1];
                        }
                    }
                }
                if (funcResult & 0x200) {
                    if (newTask->unk60 == 3) {
                        newTask->unk6A--;
                        if (newTask->unk6A < 0) {
                            newTask->unk6A = 4;
                        }
                        PLAY_SFX(42, 0, 0x10);
                    } else if (newTask->unk60 == 0) {
                        newTask->unk66--;
                        if (newTask->unk66 < 0) {
                            newTask->unk66 = 3;
                        }
                        PLAY_SFX(42, 0, 0x10);
                    } else if (newTask->unk60 == 1) {
                        newTask->unk_62--;
                        if (newTask->unk_62 < 0) {
                            newTask->unk_62 = 8;
                        }
                        PLAY_SFX(42, 0, 0x10);
                    } else if (newTask->unk60 == 2) {
                        newTask->unk_68--;
                        if (newTask->unk_68 < D_801003DC.unk6[-D_80200B1E + 1]) {
                            newTask->unk_68 = D_80200B1E;
                        }
                        PLAY_SFX(42, 0, 0x10);
                    }
                }
            }
        }
    }
}

void func_800A07E0(void) {
    func_8008F16C();
    gGameModeCurrent = GAME_MODE_BATTLE_MENU;
    gGameModeState = 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Process_BattleMenu.s")

void func_800A0D90(void) {
    s32 i;
    s32 address;
    D_80100F50[1].base_address = (u32)gFrameBuffers - ALIGN16((u32)static0_VRAM_END - (u32)static0_VRAM);
    D_80100F50[1].unk4 = (u32)gFrameBuffers; //TODO: is the a singular frame buffer or both?
    address = D_80100F50[1].base_address;
    for (i = 8; i < 14; i++){
        address = func_8009603C(i, address);
    }
    D_801FFB78 = address;
    func_80056EB4();
    Effect_Init();
    func_8005C9B8();
    func_80084788();
}

void func_800A0E3C(CTTask* task) {
    void (*taskFunc)(CTTask*);
    CTTask* sp20;

    sp20 = task->unk58;
    taskFunc = task->function;
    if (taskFunc == NULL) {
        DummiedPrintf("NULL POINTER %d\n", task->taskID);
    } else {
        taskFunc(task);
    }
    func_8008D7FC(task);
    task->unk50 = ChameleonGfxs[sp20->unk5E];
}

u16 func_800A0EB8(CTTask* task) {
    return func_8008D6E4(task, &gContMain[task->unk_62]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0EE8.s")

void func_800A10E8(CTTask* task) {

}

//chameleon names
//if you can somehow get it to build with them being one string be my guest
const char D_8010E878[] = "Ｄ";
const char D_8010E87C[] = "Ａ";
const char D_8010E880[] = "Ｖ";
const char D_8010E884[] = "Ｙ";

const char D_8010E888[] = "Ｊ";
const char D_8010E88C[] = "Ａ";
const char D_8010E890[] = "Ｃ";
const char D_8010E894[] = "Ｋ";

const char D_8010E898[] = "Ｆ";
const char D_8010E89C[] = "Ｒ";
const char D_8010E8A0[] = "Ｅ";
const char D_8010E8A4[] = "Ｄ";

const char D_8010E8A8[] = "Ｌ";
const char D_8010E8AC[] = "Ｉ";
const char D_8010E8B0[] = "Ｎ";
const char D_8010E8B4[] = "Ｄ";
const char D_8010E8B8[] = "Ａ";

const char D_8010E8BC[] = "Ｂ";
const char D_8010E8C0[] = "Ｌ";
const char D_8010E8C4[] = "Ａ";
const char D_8010E8C8[] = "Ｃ";
const char D_8010E8CC[] = "Ｋ";

const char D_8010E8D0[] = "Ｗ";
const char D_8010E8D4[] = "Ｈ";
const char D_8010E8D8[] = "Ｉ";
const char D_8010E8DC[] = "Ｔ";
const char D_8010E8E0[] = "Ｅ";

/*chameleonLetter D_801004F0[] = {
    {0x58, 0x4B, &D_8010E878},
    {0x80, 0x44, &D_8010E87C},
    {0xB0, 0x44, &D_8010E880},
    {0xD8, 0x4B, &D_8010E884},
    {0, 0, 0},
};*/

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A10F0.s")

CTTask* func_800A18C8(void) {
    CTTask* task = CTTask_Alloc(1, 100, NULL);
    if (task == NULL) {
        DummiedPrintf("エラー\n");
        while(1){}
    }
    task->function = func_800A1944;
    return task;
}

void func_800A191C(CTTask* task) {
    CTTask* unkTask = task->unk58;
    
    if (!(task->unk60-- > 0)) {
        unkTask->unk54 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1B34.s")

void func_800A1CCC(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        if (arg0->unk60 == 1) {
            D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 0xFF;
        }
        gSelectedCharacters[0] = arg0->unk5E;
        SetProcessType(arg0->unk60);
    }
}

void Process_NewGameMenu(void) {
    switch (gGameModeState) {
    case 0:
        D_800FFDF0 = 3;
        D_800FFDF4 = 1;
        //must be like this
        D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 0;
        DummiedPrintf("色選択プロセス\n");
        DMAStruct_Print();
        func_8008F16C();
        func_800A0D90();
        LoadSprite(SPRITE_BATTLE_BIGBOARD);
        LoadSprite(SPRITE_BATTLE_STAGETITLEBOARD);
        LoadSprite(SPRITE_SPECIFIC_SYMBOLS);
        LoadSprite(SPRITE_BATTLE_OPTIONSARROWS);
        CTTaskList_Init();
        D_80168DA0 = 1;
        gGameModeState++;
        gTimer = 0;
        UseFixedRNGSeed = 0;
        func_80088198();
        func_8008BE14();
        D_801FC9AC = 0;
        func_800A878C(&gGameState);
        func_8008FE50();
        LockEyeChange();
        func_8008F16C();
        break;
    case 1:
        PlayBGM(BGM_TRAINING);
        func_800A18C8();
        gGameModeState++;
        func_8008F16C();
        break;
    case 2:
        func_8008F16C();
        gTimer++;
        break;
    }
    func_8008C094();
}

void func_800A1EC4(void) {
    D_80100F50[1].base_address = (u32)gFrameBuffers - (u32)_ALIGN(((u32)static0_VRAM_END - (u32)static0_VRAM), 16);
    D_80100F50[1].unk4 = (u32)gFrameBuffers;
    D_801FFB78 = D_80100F50[1].base_address;
    func_80056EB4();
    Effect_Init();
    func_8005C9B8();
    func_80084788();
}

void PrintPerfectCode(CTTask* task) {
    char sp50[38];
    SetTextGradient_TopBottom(255, 144, 242, 255, 255, 56, 100, 255);
    PrintText(144.0f, 24.0f, 0.0f, 0.7f, 0.0f, 0.0f, "ＰＥＲＦＥＣＴ  ＣＯＤＥ", 1);
    SetTextGradient_TopBottom(144, 242, 255, 255, 56, 100, 255, 255);
    PrintText(160.0f, 40.0f, 0.0f, 0.7f, 0.0f, 0.0f, parseIntToHex(perfectCode, 8, sp50), 1);
}

CTTask* func_800A20CC(void) {
    CTTask* task;
    DummiedPrintf("マスタ作成\n"); // Master creation
    task = CTTask_Alloc(1, 100, 0);
    if (!task) {
        DummiedPrintf("エラー\n"); // error
        while(1){}
    }
    task->function = func_800A2164;
    task->pos.x = 64.0f;
    task->pos.y = 64.0f;
    task->pos.z = 0;
    func_8008EA60(32, 0, 0, 0, &task->unk_64);
    return task;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A22D4.s")

const char D_8010E9A0[] = "０１";
const char D_8010E9A8[] = "２３";
const char D_8010E9B0[] = "４５";
const char D_8010E9B8[] = "６７";
const char D_8010E9C0[] = "８９";
const char D_8010E9C8[] = "ＡＢ";

//title screen
void func_800A250C(CTTask* task) {
    if (task->unk6A > 0) {
        SetTextGradient_TopBottom(110, 210, 255, 255, 0, 222, 0, 255);
        PrintTextWrapper(72.0f, 176.0f, 0.0f, 1.0f, "ＰＲＥＳＳ  ＳＴＡＲＴ", 1);
    }
    
    task->unk6A++;
    
    if (task->unk6A >= 0x11) {
        task->unk6A = -0xA;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A25F0.s")

void func_800A272C(CTTask* task) {
    s16 dontNeed;
    func_800A25F0(task, 162);
    if (func_8008EC90() != 0) {
        dontNeed = task->unk_5C;
        task->unk_5C = dontNeed - 1;
        if (dontNeed < 0) {
            task->function = func_800A2B9C;
            D_80200058 = 4;
            task->unk_64 = 0;
            func_8008E9AC(32, 0, 0, 0, &task->unk_64);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A27B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A28B8.s")

void func_800A2B9C(CTTask* task) {
    func_800A25F0(task, 162.0f);
    if (func_8008EC90() != 0) {
        gGameModeState++;
    }
}

void Process_TitleMenu(void) {
    switch (gGameModeState) {
    case 0:
        func_80061394();
        D_800FFDF0 = 3;
        D_801FC9AC = 0;
        D_800FFDF4 = 1;
        //required
        D_800FF8DC = D_800FF8E0 = 0;
        D_800FF8E4 = 0;
        DummiedPrintf("タイトルプロセス\n");
        DMAStruct_Print();
        func_800A1EC4();
        LoadSprite(SPRITE_MENUOPTIONS);
        CTTaskList_Init();
        func_8008F16C();
        D_80168DA0 = 4;
        gGameModeState++;
        UseFixedRNGSeed = 0;
        func_8008BE14();
        func_80088198();
        DrawBackground(BG_TITLESCREEN);
        func_8008F16C();
        break;
    case 1:
        LoadSprite(SPRITE_BATTLE_BIGBOARD); // the bg for menu options
        LoadSprite(SPRITE_BATTLE_STAGETITLEBOARD); // ?
        LoadSprite(SPRITE_CHAMELEON); // CHAMELEON
        LoadSprite(SPRITE_TWIST); // TWIST
        PlayBGM(BGM_TITLE);
        func_800A20CC();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        gGameModeState++;
        func_8008F114();
        break;
    case 3:
        func_8008F16C();
        gTimer++;
        break;
    case 4:
        SetProcessType(D_80200058);
        func_80061394();
        break;
    }
    func_8008C094();
}

CTTask* func_800A2D84(void) {
    CTTask* temp_v0 = CTTask_Alloc(1, 100, NULL);
    if (temp_v0 == NULL) {
        DummiedPrintf("エラー\n");
        while(1){}
    }
    temp_v0->function = func_800A2E18;
    temp_v0->rot.y = 1;
    temp_v0->scale.z = 1;
    temp_v0->scale.y = 1;
    temp_v0->scale.x = 1;
    temp_v0->pos.z = 0;
    temp_v0->rot.x = 0;
    temp_v0->rot.z = 0;
    temp_v0->pos.x = 160;
    temp_v0->pos.y = 120;
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2E18.s")

const char D_8010EA24[] = "ＳＯＵＮＤ  ＭＯＤＥ";
const char D_8010EA3C[] = "ＳＯＵＮＤ  ＴＥＳＴ";
const char D_8010EA54[] = "ＭＵＳＩＣ  ＴＥＳＴ";
const char D_8010EA6C[] = "ＲＡＮＫＩＮＧ  ＤＡＴＡ  ＣＬＥＡＲ";
const char D_8010EA94[] = "　　　　　　　ＥＸＩＴ　　　　　　　";

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2EF4.s")

void func_800A38B8(CTTask* task) {
    func_800A2EF4(task);
    if ((func_8008EC90() != 0) && (task->unk66 == 5)) {
        task->unk_64 = 0;
        func_8008E9AC(32, 0, 0, 0, &task->unk_64);
        task->function = func_800A3928;
    }
}

void func_800A3928(CTTask* task) {
    func_800A2EF4(task);
    if (func_8008EC90() != 0) {
        task->unk_62 = 15;
        if (gIsStero != (gGameRecords.flags[1] & 1)) {
            task->function = func_800A3990;
        } else{
            SetProcessType(GAME_MODE_TITLE_SCREEN);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A39EC.s")

void func_800A3DC0(CTTask* arg0) {
    CTTask* temp_v0 = CTTask_Alloc(1, 0x64, NULL);
    temp_v0->unk58 = arg0;
    temp_v0->function = func_800A4074;
    temp_v0->unk_62 = 0;
 
}

void PrintDataClearConfirm(void) {
    setPrimColor(0, 0, 0, 200);
    printUISprite(64, 72, 0, 0, 1, 192, 88, 0, SPRITE_BLANK);
    func_800610A8();
    SetTextGradient_TopBottom(255, 10, 10, 255, 200, 200, 0, 255);
    PrintText(76, 88, 0, 1, 0, 0, "ＤＡＴＡ", 1);
    PrintText(148, 88, 0, 1, 0, 0, "ＣＬＥＡＲ？", 1);
    func_800612F0(0);
    printUISprite(96, 128, 0, 0, 1, 0, 0, 0, SPRITE_SPECIFIC_SYMBOLS); // A
    printUISprite(152, 128, 0, 0, 1, 0, 0, 1, SPRITE_SPECIFIC_SYMBOLS); // B
    PrintText(120, 129, 0, 1, 8, 14, "ＯＫ", 1);
    PrintText(176, 129, 0, 1, 8, 14, "ＣＡＮＣＥＬ", 1);
    func_800610B8();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4074.s")

void func_800A41C0(CTTask* task) {
    CTTask* newTask = task->unk58;
    PrintDataClearConfirm();
    if (task->unk_62 != 0) {
        task->unk_62--;
        setPrimColor(0, 0, 0, 200);
        printUISprite(64, 160, 0, 0, 1, 192, 32, 0, SPRITE_BLANK);
        SetTextGradient_TopBottom(255, 10, 10, 255, 200, 200, 0, 255);
        PrintText(136, 160, 0, 1, 24, 24, "ＯＫ！", 1);
    } else {
        newTask->unk54 = 0;
        CTTask_Unlink(task);
    }
}

void Process_OptionsMenu(void) {
    switch (gGameModeState) {
    case 0:
        D_800FFDF4 = 1;
        DummiedPrintf("オプションプロセス\n", &gGameModeState);
        DMAStruct_Print();
        func_800A1EC4();
        UseFixedRNGSeed = 0;
        LoadSprite(SPRITE_SPECIFIC_SYMBOLS);
        LoadSprite(SPRITE_BATTLE_BIGBOARD);
        LoadSprite(SPRITE_BATTLE_STAGETITLEBOARD);
        LoadSprite(SPRITE_BATTLE_OPTIONSARROWS);
        //??????
        LoadSprite(SPRITE_TEXT_JL2);
        LoadSprite(SPRITE_GRAYANT);
        CTTaskList_Init();
        D_80168DA0 = 4;
        gGameModeState++;
        D_800FFDF0 = 3;
        func_8008BE14();
        func_80088198();
        D_801FC9AC = 0;
        func_8008F114();
        break;
    case 1:
        func_800A2D84();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        gGameModeState++;
        func_8008F114();
        break;
    case 3:
        func_8008F16C();
        gTimer++;
        break;
    }
    func_8008C094();
}

// Create Game Over Task?
CTTask* func_800A4484(void) {
    CTTask* task = CTTask_Alloc(1, 100, NULL);
    
    if (task == NULL) {
        DummiedPrintf("エラー\n");
        while (1) {}
    }
    task->function = &GameOverMaster;
    return task;
}

void func_800A44D8(CTTask* arg0) {
    f32 temp_f22;
    f32 temp_f24;
    s32 i;

    if (arg0->unk60 < 0xFF) {
        arg0->unk60++;
    }
    
    setPrimColor(0, 0, 0, arg0->unk60);
    
    for (i = 0; D_80100DF0[i].letter != 0; i++) {
        temp_f22 = D_80100DF0[i].x;
        temp_f24 = D_80100DF0[i].y;
        if (i == arg0->unk66) {
            SetTextGradient_TopBottom(10, 255, 10, 255, 200, 200, 0, 255);
        } else {
            SetTextGradient_TopBottom(160, 160, 160, 204, 40, 40, 40, 204);
        }
        func_80080864(temp_f22, temp_f24, 0.0f, 1.0f, 0.0f, 0.0f, D_80100DF0[i].letter, 1);        
    }
}

const char D_8010EB40[] = "ＣＯＮＴＩＮＵＥ";
const char D_8010EB54[] = "ＥＸＩＴ";

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/GameOverMaster.s")

void func_800A4820(CTTask* task) {
    task->unk_5C--;
    if (task->unk_5C == 0) {
        task->function = &func_800A4868;
        task->unk_5C = 30;
        func_800A4BCC(task);
    }
}

void func_800A4868(CTTask* task) {
    task->unk_5C--;
    if (task->unk_5C == 0) {
        task->function = &func_800A4904;
        task->unk60 = 0;
        func_8008EB08(32, 0, 0, 0, &task->unk_64, 10.0f, 120.0f, 168.0f, 55.0f, 240);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4904.s")

void func_800A49B0(CTTask* task) {
    if (task->unk5E != -1) {
        func_8008E9AC(32, 0, 0, 0, &task->unk_64);
        task->function = func_800A4A10;
    }
    func_800A44D8(task);
}

void func_800A4A10(CTTask* task) {
    func_800A44D8(task);
    if (func_8008EC90() != 0) {
        SetProcessType((s32) task->unk5E);
        if (task->unk5E == 0) {
            gGameModeState = 7;
        }
    }
}

void Task_GameOverLetter(CTTask* task) {
    //cannot +=
    task->pos.y = task->unk7C + task->pos.y;
    if (task->unk7C > 0.0f) {
        if (task->unk88 <= task->pos.y) {
            task->pos.y = task->unk88;
            task->unk7C = (task->unk7C / 3.0) * -2.0;
        }
    }
    task->unk7C += 2.5;
    func_800612F0(task->unk_64);
    SetTextGradient_TopBottom(240, 20, 10, 255, 220, 120, 1, 255);
    func_80059F28(task->pos.x, task->pos.y, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, task->unk_04, SPRITE_TEXTBIGGER);
}

CTTask* func_800A4BCC(CTTask* task) {
    CTTask* newTask;
    newTask = CTTask_Alloc(1, 120, NULL);
    newTask->unk4E = 1;
    newTask->unk44 = 5;
    newTask->function = func_800A4D0C;
    newTask->scale.z = 1;
    newTask->scale.y = 1;
    newTask->scale.x = 1;
    newTask->pos.x = 216;
    newTask->pos.y = 144;
    newTask->pos.z = 0;
    newTask->rot.z = 0;
    newTask->rot.x = 0;
    newTask->rotA = 45;
    newTask->rot.y = -45;
    newTask->unk58 = task;
    newTask->unk3C = 1;
    while (func_8008D7FC(newTask) == 0){}
    func_8008EB08(32, 0, 0, 0, &newTask->unk_64, newTask->pos.x - 58, newTask->pos.y - 38, newTask->pos.x + 64, newTask->pos.y + 60, 121);
    return newTask;
}

void func_800A4D0C(CTTask* arg0) {
    func_8008D7FC(arg0);
    arg0->unk50 = ChameleonGfxs[gSelectedCharacters[D_800FF8E8]];
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4D58.s")

void Process_GameOver(void) {
    switch (gGameModeState) {
        case 0:
            func_80061394();
            SaveData_WriteFile(&gSaveFile);
            D_800FFDF4 = 1;
            D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 0;
            DummiedPrintf("ゲームオーバープロセス\n");
            DMAStruct_Print();
            func_800A0D90();
            CTTaskList_Init();
            LoadSprite(SPRITE_TEXTBIGGER);
            D_80168DA0 = 4;
            gGameModeState++;
            UseFixedRNGSeed = 0;
            D_800FFDF0 = 3;
            func_8008BE14();
            func_80088198();
            D_801FC9AC = 0;
            func_8008F114();
            func_8008FE00();
            LoadPlayerEyes(gSelectedCharacters[0]);
            SetPlayerContextEyes(gSelectedCharacters[0], 2, 0);
            break;
        case 1:
            func_800A4484();
            gGameModeState++;
            func_8008F114();
            break;
        case 2:
            gGameModeState++;
            func_8008F114();
            break;
        case 3:
            func_8008F16C();
            gTimer++;
            break;
    }

    func_8008C094();
}

CTTask* func_800A5060(void){
    CTTask* t = CTTask_Alloc(1, 0x64, NULL);

    if(!t){
        DummiedPrintf("エラー\n");
        while(1){}
    }
    t->function = func_800A50B4;
    return t;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A50B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A51DC.s")

void func_800A5444(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        arg0->function = func_800A5488;
        arg0->unk54 = 1;
        arg0->unk60 = 0x96;
    }
}

void func_800A5488(CTTask* task) {
    if (task->unk_62 != -1) {
        task->unk_64 = 0;
        func_8008E9AC(0x20, 0, 0, 0, &task->unk_64);
        task->function = &func_800A54F4;
        task->unk54 = 2;
    }
}

void func_800A54EC(CTTask* arg0) { //probably CTTask*

}

void func_800A54F4(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        SetProcessType(arg0->unk_62);
    }
}

void func_800A5524(CTTask* arg0) {
    CTTask* temp_v0;
    u16 temp_v1;

    temp_v0 = arg0->unk58;
    temp_v1 = gContMain[arg0->unk_62].buttons2;
    if (((temp_v1 & 0x1000) || (temp_v1 & 0x8000)) && (temp_v0->unk54 == 1)) {
        temp_v0->unk_62 = 6;
    }
}

void Process_JSSLogo(void) {
    switch (gGameModeState) {
    case 0:
        D_800FF8DC = D_800FF8E0 = D_800FF8E4 = 0;
        func_80061394();
        D_800FFDF4 = 1;
        DummiedPrintf("ロゴプロセス\n"); //Logo process
        DMAStruct_Print();
        func_800A1EC4();
        LoadSprite(SPRITE_JSSLOGO_BG);
        LoadSprite(SPRITE_JSSLOGO_CAT);
        CTTaskList_Init();
        D_80168DA0 = 4;
        UseFixedRNGSeed = 0;
        D_800FFDF0 = 3;
        func_8008BE14();
        func_80088198();
        D_801FC9AC = 0;
        func_8008F114();
        gGameModeState++;
        break;
    case 1:
        func_800A5060();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        gGameModeState++;
        func_8008F114();
        break;
    case 3:
        func_8008F16C();
        gTimer++;
        break;
    }
    func_8008C094();
}

void func_800A56D4(void) {
    D_80100F50[1].base_address = (u32)&gFrameBuffers - _ALIGN((u32)static0_VRAM_END - (u32)static0_VRAM, 16);
    D_80100F50[1].unk4 = (u32)&gFrameBuffers;
    D_801FFB78 = D_80100F50[1].base_address;
    func_80056EB4();
    func_8005C9B8();
    Effect_Init();
    func_80084788();
    LoadSprite(D_80100EB4[D_801B317C]);
    LoadSprite(SPRITE_BATTLE_BIGBOARD);
    LoadSprite(SPRITE_BATTLE_STAGETITLEBOARD);
}

s32 func_800A5778(s32 arg0) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 15:
        return 6;
    default:
        return 0;
    }
}

//feel free to copy back all the suffixes if you want
//i just dont enjoy having 5 copies of the same word
#define land "ＬＡＮＤ"
#define castle "ＣＡＳＴＬＥ"
const char D_8010EBA4[] = "ＪＵＮＧＬＥ";
const char D_8010EBB4[] = land;
const char D_8010EBC0[] = "ＡＮＴ";
const char D_8010EBC8[] = land;
const char D_8010EBD4[] = "ＢＯＭＢ";
const char D_8010EBE0[] = land;
const char D_8010EBEC[] = "ＤＥＳＥＲＴ";
const char D_8010EBFC[] = castle;
const char D_8010EC0C[] = "ＫＩＤＳ";
const char D_8010EC18[] = land;
const char D_8010EC24[] = "ＧＨＯＳＴ";
const char D_8010EC30[] = castle;

//https://decomp.me/scratch/8wPlV
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/PrintSelectedStageInfo.s")

void func_800A6B34(void) {
    CTTask* task = CTTask_Alloc(1, 100, NULL);
    if (task == NULL) {
        DummiedPrintf("エラー\n");
        while (1) {}
    }
    task->function = &func_800A6B80;
}

void func_800A6B80(CTTask* task) {
    task->unk_04 = 0;
    task->function = func_800A6C04;
    task->unk_62 = D_800FF8E8;
    task->unk_5C = 1;
    task->unk_64 = 0;
    
    func_8008EA60(32, 0, 0, 0, &task->unk_64);
    CTTask_Alloc(1, 0x62, NULL)->function = PrintSelectedStageInfo;
}

void func_800A6C04(CTTask* task) {
    if (func_8008EC90() != 0) {
        if ((D_801FC9BC[task->unk_62].unk_00 & 0x1000) || (D_801FC9BC[task->unk_62].unk_00 & 0x8000)) {
            func_8008E9AC(32, 0, 0, 0, &task->unk_64);
            task->function = &func_800A6CF4;
        } else if (task->unk_5C != 0) {
            task->unk_5C--;
            if (task->unk_5C == 0) {
                gCurrentDemoTimer = D_801FCA08;
            } else {
                return;
            }
        }
        if (gCurrentDemoTimer < 3) {
            task->unk_64 = 0;
            func_8008E9AC(32, 0, 0, 0, &task->unk_64);
            task->function = &func_800A6CF4;
        }
    }
}

void func_800A6CF4(CTTask* task) {
    if (func_8008EC90() != 0) {
        if (D_800F0704 != 0) {
            gGameModeState = 3;
        } else {
            gGameModeState = 4;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6DD8.s")

s32 func_800A72E8(s32 arg0) {
    s32 i, j;
    //needed for reg alloc
    s32 zero = 0;

    if (arg0 < 0) {
        DummiedPrintf("無効ＩＤ(%d)\n", arg0); //無効ＩＤ(%d)\n    //invalid ID (%d)\n
        return -1;
    }

    j = 0;
    for (i = zero; i < 50; i++) {
        if (arg0 == D_801FCFD8[i].index) {
            j++;
            if (osRecvMesg(&D_801FCA50[i], NULL, OS_MESG_NOBLOCK) != -1) {
                j--;
                D_801FCFD8[i].index = -1;
            }
        }
    }
    
    DummiedPrintf("Id(%d)残り %d\n", arg0, j); //Id(%d)残り %d\n     //Id(%d)%d\n remaining
    
    if (j > 0) {
        return 0;
    }
    
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A73EC.s")

s32 DMA_Copy(void* arg0, void* arg1, s32 size) {
    s32 dmaSizeCalc;
    s32 j;
    s32 i;
    s32 temp_v0;

    dmaSizeCalc = (size / 20480) + 1;
    //"ピース %d\n"("piece %d")
    DummiedPrintf("ピース %d\n", dmaSizeCalc );
    for (i = 0, j = 0; i < ARRAY_COUNT(D_801FCFD8); i++) {
        if (D_801FCFD8[i].index < 0) {
            j++;
            if (!(j < dmaSizeCalc )) {
                break;
            }
        }
    }
    
    if (i >= ARRAY_COUNT(D_801FCFD8)) {
        //"満タン\n"("full tank"?)
        DummiedPrintf("満タン\n");
        return -1;
    }
    
    osInvalICache(arg1, size);
    osInvalDCache(arg1, size);
    
    temp_v0 = func_800A73EC(arg0, arg1, size, dmaSizeCalc);

    if (temp_v0 < 0) {
        //"ＤＭＡ生成エラー\n"("DMA generation error")
        DummiedPrintf("ＤＭＡ生成エラー\n");
        //"満kkkkタン\n"("full kkkk tank"?)
        DummiedPrintf("満kkkkタン\n");
    } else {
        //"読み(%X)書き(%X)サイズ(%d)\n"("read (%X) write (%X) size (%d)")
        DummiedPrintf("読み(%X)書き(%X)サイズ(%d)\n", arg0, arg1, size);
        //"書き終わり(%X)\n"("end of write (%x)")
        DummiedPrintf("書き終わり(%X)\n", ((s32)arg1 + size));
        //"%d\n"
        DummiedPrintf("%d\n", temp_v0);
    }
    return temp_v0;
}

s32 func_800A772C(void* arg0, void* arg1, s32 size) {
    s32 dmaSizeCalc;
    s32 j;
    s32 i;
    s32 temp_v0;

    dmaSizeCalc = (size / 20480) + 1;
    //"ピース %d\n"("piece %d")
    DummiedPrintf("ピース %d\n", dmaSizeCalc );
    for (i = 0, j = 0; i < ARRAY_COUNT(D_801FCFD8); i++) {
        if (D_801FCFD8[i].index < 0) {
            j++;
            if (!(j < dmaSizeCalc )) {
                break;
            }
        }
    }
    
    if (i >= ARRAY_COUNT(D_801FCFD8)) {
        return -1;
    }
    //"読み(%X)書き(%X)サイズ(%d)\n"("read (%X) write (%X) size (%d)")
    DummiedPrintf("読み(%X)書き(%X)サイズ(%d)\n", arg0, arg1, size);
    //"書き終わり(%X)\n"("end of write (%x)")
    DummiedPrintf("書き終わり(%X)\n", (s32)arg1 + size);    
    osInvalICache(arg1, size);
    osInvalDCache(arg1, size);
    
    temp_v0 = func_800A73EC(arg0, arg1, size, dmaSizeCalc );

    if (temp_v0 < 0) {
        //"ＤＭＡ生成エラー\n"("DMA generation error")
        DummiedPrintf("ＤＭＡ生成エラー\n");
    }
    return temp_v0;
}

void func_800A7844(void) {
    s32 i;
    D_801FD558 = 0;
    
    for (i = 0; i < ARRAY_COUNT(D_801FCA50); i++) {
        osCreateMesgQueue(&D_801FCA50[i], &D_801FCF08[i], 1);
        D_801FCFD8[i].index = -1;
    }
}

s32 func_800A78D0(void) {
    s32 i;
    s32 j = 0;
    
    for (i = 0; i < ARRAY_COUNT(D_801FCA50); i++) {
        if (D_801FCFD8[i].index >= 0) {
            if (osRecvMesg(&D_801FCA50[i], NULL, OS_MESG_NOBLOCK) != -1) {
                D_801FCFD8[i].index = -1;
                //TODO fake match
                do {
                    j++;
                } while (0);
            }
        }
    }

    return j;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/DMAStruct_Print.s")

//the following three programs are used in generating the "Perfect Code"
s32 func_800A7A18(u32 arg0) {
    s32 i;
    s32 j;

    for (i = 0, j = 0; i < 32; i++) {
        if (((i < 7) || (i >= 0xF)) && ((arg0 >> i) & 1)) {
            j++;
        }
    }
    return j;
}

//this takes (u32)osGetTime() as the arg
s32 GeneratePerfectCode(u32 time) {
    s32 temp_v0;
    s32 i;
    s32 perfectCode;

    time |= 0x01400000;
    temp_v0 = func_800A7A18(time);
    
    for (i = 0, perfectCode = 0; i < 32; i++) {
        if ((i >= 7) && (i < 0xF)) {
            if (temp_v0 << 7 >> i & 1) {
                perfectCode |= 1 << i;
            }
        } else if (time >> i & 1) {
            perfectCode |= 1 << i;
        }
    }
    return perfectCode;
}

s32 func_800A7C58(u32 time) {
    s32 perfectCode;
    s32 temp_a0;
    s32 i;

    temp_a0 = func_800A7A18(time) << 7;
    if (temp_a0 == 0) {
        return -1;
    }

    for (i = 0, perfectCode = 0; i < 32; i++) {
        if (((i >= 7) && (i < 0xF)) && (((temp_a0 >> i) & 1) != ((time >> i) & 1))) {
            perfectCode = -1;
        }
    }
    return perfectCode;
}

//parses record time, returns minutes and seconds.
s32 RecordTime_GetMinsSecs(TimeVal* record, s32* mins, s32* secs) {
    s32 time;

    time = RecordTime_ParseToSecs(record);
    *secs = time % 60;
    *mins = time / 60;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/RecordTime_GetByStageRank.s")

//parses time kept on record.
s32 RecordTime_ParseToSecs(TimeVal* arg0) {
    s32 time = arg0->b0 & 15;
    time <<= 8;
    time += arg0->b1;
    time <<= 8;
    time += arg0->b2;
    return time;
}

//sets record time arg1 to time arg0
void RecordTime_SetTo(s32 arg0, TimeVal* arg1) {
    u8 temp = arg1->b0 & 0xF0;

    arg1->b2 = arg0 & 0xFF;    
    arg1->b1 = (arg0 & 0xFF00) >> 8;
    arg1->b0 = (arg0 & 0xFF0000) >> 16;

    arg1->b0 |= temp; // keep higher 4 bits
}

//file split? following functions deal with save data.
//TODO: fake match

/**
 * @brief Generates an 8-bit checksum for the save data by summing the bytes together.
 * 
 * @param saveData: Passed as a u8* to be iterated over
 * @return (s32) Checksum value
 */
s32 SaveData_FileChecksum(u8 *saveData) {
    s32 checksum;
    int one;
    s32 hasNoNonZeroBytes;
    u8 *tempSaveData;
    s32 hasNoNonFFBytes;
    s32 i;
    
    checksum = 0;
    one = 1;                            // set to 1, (skips the checksum var in the struct)
    hasNoNonZeroBytes = 1;
    hasNoNonFFBytes = 1;
    tempSaveData = saveData;
    
    // Iterate through the save data (excluding the old checksum), adding each byte to the new checksum
    for (i = 1; i < sizeof(SaveFile); i++) {
        checksum += saveData[i];
        checksum &= 0xff;               // keep checksum in the byte range
        
        // 0x00 or 0xFF checks
        do { 
            if (tempSaveData[i] != 0) { 
                hasNoNonZeroBytes = 0; 
            } 
        } while (0);
        
        if (tempSaveData[i] != 0xFF) {
            hasNoNonFFBytes = 0;
        }
    }
    
    // If all bytes are 0 or 0xFF, return the checksum + 5 so the checksum is different
    if ((hasNoNonZeroBytes == one) || (hasNoNonFFBytes == one)) {
        DummiedPrintf(" SaveData FILLER\n", &saveData[i], checksum, tempSaveData);
        return ((*saveData) + 5) & 0xFF;
    }
    
    return checksum;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_RecordChecksum.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_Wait.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_VerifyFile.s")

s32 SaveData_Compare(u8 *arg0, u8 *arg1) {
    s32 i;
    s32 var_s7 = 0;
    u8 *new_var;
    new_var = arg1;
    
    for (i = 0; i < 128; i++) {
        if (arg0){}
        if (arg0[i] != new_var[i]) {
            var_s7 = 1;
            do {
                //"%dバイト目違う [%X][%X}\n"("%d bytes wrong [%X][%X}\n")(sic) 
                DummiedPrintf("%dバイト目違う [%X][%X}\n", i, arg0[i], arg1[i]); 
            } while (0);
        }
    }
    
    return var_s7;
}

void SaveData_LoadFile(s32 arg0, SaveFile* arg1) {
    osRecvMesg(&gEepromMsgQ, NULL, OS_MESG_NOBLOCK);
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    
    DummiedPrintf("ロード開始\n");
    
    if (osEepromLongRead(&gEepromMsgQ, ((arg0 * 0x60) / 8) & 0xFF, (u8*)arg1, 0x60) != 0) {
        DummiedPrintf("ＥＥＰロム読み込みエラー %d ブロック目から %d バイトを読めません\n", arg0, 0x60);
    }
    
    SaveData_Wait();
}

void SaveData_LoadAllFiles(u8* arg0) {
    osRecvMesg(&gEepromMsgQ, NULL, OS_MESG_NOBLOCK);
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    
    DummiedPrintf("ロード開始\n");
    
    if (osEepromLongRead(&gEepromMsgQ, 0, arg0, 0x180) != 0) {
        DummiedPrintf("ＥＥＰロム読み込みエラー %d ブロック目から %d バイトを読めません\n", 0, 0x180);
    }
    
    SaveData_Wait();
}

void SaveData_LoadRecords(u8* arg0) {
    osRecvMesg(&gEepromMsgQ, NULL, OS_MESG_NOBLOCK);
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    //"メインロード開始" ("main road start"?)
    DummiedPrintf("メインロード開始\n");
    
    if (osEepromLongRead(&gEepromMsgQ, 0x30, arg0, sizeof(SaveRecord)) != 0) {
        //"ＥＥＰロム読み込みエラー 共通部分(Main)から %d バイトを読めません"
        //("EEP ROM read error Cannot read %d bytes from common part (Main)")
        DummiedPrintf("ＥＥＰロム読み込みエラー 共通部分(Main)から %d バイトを読めません\n", sizeof(SaveRecord));
    }
    
    SaveData_Wait();
}

/**
 * @brief Save a given SaveFile to the EEPROM.
 * 
 * @param saveIndex: File number minus one 
 * @param saveFile: SaveFile to be saved 
 */
void SaveData_SaveFile(s32 saveIndex, SaveFile* saveFile) { 
    //"%d 番目のファイルにセーブ  %dバイト目\n"("saving to %d-th file, %d bytes"?)
    DummiedPrintf("%d 番目のファイルにセーブ  %dバイト目\n", saveIndex, (s32) (saveIndex * 0x60) / 8);
    osRecvMesg(&gEepromMsgQ, NULL, OS_MESG_NOBLOCK);
    
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        //"ＥＥＰロムエラー \n"("EEP rom error")
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    //"セーブ開始\n" ("start save")
    DummiedPrintf("セーブ開始\n");
    
    if (osEepromLongWrite(&gEepromMsgQ, (saveIndex * 0x60) / 8, (u8*)saveFile, 0x60) != 0) {
        //"ＥＥＰロム書き込みエラー \n"("EEProm write error")
        DummiedPrintf("ＥＥＰロム書き込みエラー \n");
    }
    
    SaveData_Wait();
    SaveData_Wait();
}

/**
 * @brief Attempt to update a save file, comparing the file being saved with the file when reloaded.
 * 
 * @param saveIndex: Index to save file to
 * @param saveFile: SaveFile to be updated 
 * @return (s32) 0 for success, 1 for error 
 */
s32 SaveData_UpdateFile(s32 saveIndex, SaveFile* saveFile) {
    s32 i;
    SaveFile newFile;

    i = 0;

    // Attempt update 3 times before returning error
    while (1) {
        SaveData_SaveFile(saveIndex, saveFile);
        SaveData_LoadFile(saveIndex, &newFile);
        if (SaveData_VerifyFile(saveFile, &newFile) == 0) {
            return 0;   // no error
        }

        i++;

        if (i == 3) {
            return 1;   // error
        }
    }
}

void SaveData_SaveRecords(void) {
    gGameRecords.flags[0] = SaveData_RecordChecksum();
    
    osRecvMesg(&gEepromMsgQ, NULL, OS_MESG_NOBLOCK);
    
    if (osEepromProbe(&gEepromMsgQ) != 1) {
        DummiedPrintf("ＥＥＰロムエラー \n");
    }
    
    DummiedPrintf("セーブ開始\n");
    
    if (osEepromLongWrite(&gEepromMsgQ, 0x30, &gGameRecords.flags[0], 0x80) != 0) {
        //"ＥＥＰロム書き込みエラー \n"("EEPRom write error")
        DummiedPrintf("ＥＥＰロム書き込みエラー \n");
    }
    
    SaveData_Wait();
    SaveData_Wait();
}

/**
 * @brief Attempt to update game records, comparing the records being saved with the records when reloaded.
 * 
 * @return (s32) 0 for success, 1 for error 
 */
s32 SaveData_UpdateRecords(void) {
    s32 i;
    unkStruct09 sp28;

    for (i = 0; i < 3; i++) {
        SaveData_SaveRecords();
        SaveData_LoadRecords((u8*)&sp28);
        if (SaveData_Compare((u8*)&gGameRecords, (u8*)&sp28) == 0) {
            return 0;
        }
    }
    return 1;
}

void func_800A878C(SaveFile* arg0) {
    _bzero(arg0, sizeof(SaveFile));
    //"ファイルクリア"("file clear")
    DummiedPrintf("ファイルクリア\n");
    RecordTime_SetTo(300, &arg0->stageTimes[6]);
    arg0->carrotBitfield = 0;
}

void func_800A87D4(s32 arg0) {
    SaveFile sp18;

    //"ファイルクリア"("file clear")
    DummiedPrintf("ファイルクリア\n");
    func_800A878C(&sp18);
    sp18.checksum = SaveData_FileChecksum((u8*)&sp18);
    SaveData_UpdateFile(arg0, &sp18);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_ResetRecords.s")

/**
 * @brief Clear all records data. 
 */
void SaveData_ClearRecords(void) {
    DummiedPrintf("ファイルクリア\n");
    _bzero(&gGameRecords, 0x60);
    SaveData_ResetRecords();
    SaveData_UpdateRecords();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_WriteFile.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_ReadFile.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SetLevelBitfield.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A903C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9298.s")

const char D_8010F028[] = "Jun";
const char D_8010F02C[] = "Ant";
const char D_8010F030[] = "Bom";
const char D_8010F034[] = "Des";
const char D_8010F038[] = "Kid";
const char D_8010F03C[] = "Gho";
const char D_8010F040[] = "Bos";
const char D_8010F044[] = "0";
const char D_8010F048[] = "1";
const char D_8010F04C[] = "2";
const char D_8010F050[] = "3";
const char D_8010F054[] = "4";
const char D_8010F058[] = "5";
const char D_8010F05C[] = "6";
const char D_8010F060[] = "7";
const char D_8010F064[] = "8";
const char D_8010F068[] = "9";
const char D_8010F06C[] = "10";

void func_800A93AC(ContMain* arg0) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (gPlayerActors[i].active == FALSE) {
            continue;
        }
        DummiedPrintf("{0x%04X,%d,%d},\n", D_80175650[i].button, D_80175650[i].stick_x, D_80175650[i].stick_y);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9450.s")

void func_800A9690(void) {
    CTTask* task = CTTask_Alloc(1, 100, NULL);

    if (task == NULL) {
        //"エラー\n"("error")
        DummiedPrintf("エラー\n");
        while (1);
    }
    task->function = &func_800A96DC;
}

void func_800A96DC(CTTask* task) {
    task->unk_04 = 0;
    task->function = func_800A9728;
    task->unk_62 = (s16) D_800FF8E8;
    task->unk_5C = 1;
    task->unk_64 = 0;
    //this is required
    D_800FF8DC = D_800FF8E4 = D_800FF8E0 = 0;
}

void func_800A9728(CTTask* arg0) {
    if (arg0->unk_5C != 0) {
        arg0->unk_5C--;
        if (arg0->unk_5C != 0) {
            return;
        }
        gCurrentDemoTimer = D_801FCA08;
    }
    
    if ((D_80100D64[gCurrentDemo] + 0xA) >= gCurrentDemoTimer) {
        arg0->unk_64 = 0;
        if (gGameModeCurrent != GAME_MODE_CREDITS_DEMO) {
            func_8008E9AC(0x20, 0, 0, 0, &arg0->unk_64);
        }
        arg0->function = &func_800A97E4;
    }
}

void func_800A97E4(CTTask* arg0) {
    if (func_8008EC90() != 0) {
        setPrimColor(0, 0, 0, 0xFF);
        printUISprite(2.0f, 2.0f, 0.0f, 0.0f, 1.0f, 316.0f, 236.0f, 0.0f, SPRITE_BLANK);
        if (D_800F0704 != 0) {
            gGameModeState = 3;
            return;
        }
        gGameModeState = 5;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/InitDemo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/InitGCDemo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA3F0.s")

/**
 * @brief 
 * 
 * @param zone: room number 
 */
void func_800AA844(s32 zone) {
    gCurrentZone = zone;
    func_800C29D8(gCurrentZone);
}

// Loads demo data, stage / player start position
void func_800AA86C(void) {
    if (D_80101048.unk_00 == gCurrentDemoTimer) {
        func_800AA844(0);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 600.0f;
    }
    if (D_80101048.unk_04 == gCurrentDemoTimer) {
        func_800AA844(1);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = -1400.0f;
    }
    if (D_80101048.unk_08 == gCurrentDemoTimer) {
        func_800AA844(0xA);
        gPlayerActors->pos.x = 20.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 620.0f;
    }
    if (D_80101048.unk_0C == gCurrentDemoTimer) {
        func_800AA844(0xF);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 700.0f;
    }
    if (D_80101048.unk_10 == gCurrentDemoTimer) {
        func_800AA844(0x14);
        gPlayerActors->pos.x = 2700.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 0.0f;
    }
    if (D_80101048.unk_14 == gCurrentDemoTimer) {
        func_800AA844(0x17);
        gPlayerActors->pos.x = 1700.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 0.0f;
    }
    if (D_80101048.unk_18 == gCurrentDemoTimer) {
        func_800AA844(0x1A);
        gPlayerActors->pos.x = 2700.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 0.0f;
    }
    if (D_80101048.unk_1C == gCurrentDemoTimer) {
        func_800AA844(0x1D);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 2700.0f;
    }
    if (D_80101048.unk_20 == gCurrentDemoTimer) {
        func_800AA844(0x20);
        gPlayerActors->pos.x = 0.0f;
        gPlayerActors->pos.y = 100.0f;
        gPlayerActors->pos.z = 2700.0f;
    }
}

void func_800AAAC8(void) {
    func_800AA844(0);
    gPlayerActors->pos.x = 0.0f;
    gPlayerActors->pos.y = 100.0f;
    gPlayerActors->pos.z = 600.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AAB0C.s")
/*
void func_800AAB0C(s32 arg0) {
    s32 dmaResult;
    s32 dmaSize;
    s32 i;
    DMAStruct_Print();
    LoadStageByIndex(arg0);
    DMAStruct_Print();
    _bzero(gPlayerActors, sizeof(gPlayerActors));
    _bzero(&gCamera[0], sizeof(Camera));
    D_80168DA0 = 1;
    *(u32*)&gPlayerActors[0].active = 1; //required u32 here but usually requires s32?
    gPlayerActors[1].active = 0;
    gPlayerActors[2].active = 0;
    gPlayerActors[3].active = 0;
    D_80175668[0] = 0;
    func_8002E0CC();
    InitField();
    func_80056EB4();
    Effect_Init();
    func_8005C9B8();
    func_80084788();
    func_80055FA4();

    for (i = 0; i < 4; i++) { //TODO: unhardcode this for loop
        D_801756C0[i] = 0;
        D_80175678[i] = 0;
    }

    gCurrentDemoTimer = 0x10A9;
    dmaSize = D_F0042B0 - D_F000000;
    UseFixedRNGSeed = TRUE;
    D_80200C8C = _malloc(dmaSize);
    if (D_80200C8C == NULL) {
        //"バッファがない\n"("no buffer")
        osSyncPrintf("バッファがない\n", D_80200C8C);
    } else {
        dmaResult = DMA_Copy(CreditsDemo_ROM_START, D_80200C8C, dmaSize);
        if (dmaResult < 0) {
            //"データ読み込み失敗\n" ("data read failure")
            osSyncPrintf("データ読み込み失敗\n");
        } else {
            while (func_800A72E8(dmaResult) == 0) {}
        }
    }
    //TODO fake match
    if (gPlayerActors){}
    DMAStruct_Print();
    D_80200C94 = D_80200C8C;
    D_80200C84.unk0 = 0;
    D_80200C84.unk2 = 0xFFFF;
    D_80200C84.unk4 = 0;
    D_80200C84.unk5 = 0;
    gTimer = 0;
    D_80174998 = 0;
    func_800AAAC8();
    gPlayerActors->yAngle = 0.0f;
}
*/

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AACFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB0B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/PlayerInits_Copy.s")

void func_800AB734(void) {
    s32 i;
    EffectTypeAQArg7* str1;
    EffectTypeAQArg7* str2;
    EffectTypeAQArg7* str3;
    EffectTypeAQArg7* str4;
    EffectTypeAQArg7* str5;
    EffectTypeAQArg7* str6;
    EffectTypeAQArg7* str7;

    for (i = 0; i < D_80101080; i++) {
        if (D_80105E08[i].unk_00 == gCurrentDemoTimer - D_80101078) {
            D_80101074 = D_80105E08[i].unk_04;
            if (D_80105E08[i].unk_04 && D_80105E08[i].unk_04 && D_80105E08[i].unk_04) {} // TODO: fake match
            switch (D_80105E08[i].unk_04) {
                case 0:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    Effect_TypeK_Init(150.0f, 0.0f, -120.0f);
                    Effect_TypeAR_Init(16.0f, 140.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(54.0f, 180.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(78.0f, 204.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(54.0f, 228.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(78.0f, 252.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    break;
                case 1:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, -60.0f);
                    Effect_TypeAR_Init(20.0f, 192.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 48.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 72.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 168.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str7, 4, &D_8010875C);
                    break;
                case 2:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, 84.0f);
                    Effect_TypeAR_Init(60.0f, 24.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAR_Init(60.0f, 48.0f, 0, 30.0f, 60.0f, 60.0f, 5, str2, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str7, 4, &D_8010875C);
                    break;
                case 3:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, -60.0f);
                    Effect_TypeAR_Init(20.0f, 192.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 24.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 48.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 72.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str7, 4, &D_8010875C);
                    break;
                case 4:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, -160.0f, -60.0f);
                    Effect_TypeAR_Init(20.0f, 192.0f, 0, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 48.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 72.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 168.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str7, 4, &D_8010875C);
                    break;
                case 5:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, 60.0f);
                    Effect_TypeAR_Init(20.0f, 24.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 88.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str7, 4, &D_8010875C);
                    break;
                case 6:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, -160.0f, 60.0f);
                    Effect_TypeAR_Init(20.0f, 24.0f, 0, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 88.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str7, 4, &D_8010875C);
                    break;
                case 7:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, -60.0f);
                    Effect_TypeAR_Init(20.0f, 192.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 72.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 168.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 192.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str7, 4, &D_8010875C);
                    break;
                case 8:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, 60.0f);
                    Effect_TypeAR_Init(20.0f, 24.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 88.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str7, 4, &D_8010875C);
                    break;
                case 9:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, -60.0f);
                    Effect_TypeAR_Init(20.0f, 192.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 48.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 72.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 6, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 168.0f, 12.0f, 3.0f, 60.0f, 60.0f, 6, str7, 4, &D_8010875C);
                    break;
                case 10:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, -160.0f, 60.0f);
                    Effect_TypeAR_Init(20.0f, 24.0f, 0, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 88.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str7, 4, &D_8010875C);
                    break;
                case 11:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, 60.0f);
                    Effect_TypeAR_Init(20.0f, 24.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 88.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str7, 4, &D_8010875C);
                    break;
                case 12:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, -160.0f, -84.0f);
                    Effect_TypeAR_Init(20.0f, 168.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAR_Init(20.0f, 192.0f, 0, 30.0f, 60.0f, 60.0f, 5, str2, 1, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 168.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 192.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str7, 4, &D_8010875C);
                    break;
                case 13:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, -160.0f, 60.0f);
                    Effect_TypeAR_Init(20.0f, 24.0f, 0, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 88.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str7, 4, &D_8010875C);
                    break;
                case 14:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, -160.0f, -60.0f);
                    Effect_TypeAR_Init(20.0f, 192.0f, 0, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 72.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 168.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 192.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str7, 4, &D_8010875C);
                    break;
                case 15:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, -160.0f, -60.0f);
                    Effect_TypeAR_Init(20.0f, 192.0f, 0, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 72.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 96.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 120.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 144.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xA, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(196.0f, 168.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(208.0f, 192.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str7, 4, &D_8010875C);
                    break;
                case 16:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    str6 = D_80105E08[i].unk_10[5];
                    str7 = D_80105E08[i].unk_10[6];
                    Effect_TypeK_Init(150.0f, 160.0f, 60.0f);
                    Effect_TypeAR_Init(20.0f, 24.0f, 1, 30.0f, 60.0f, 60.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 9, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 208.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 232.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str6, 4, &D_8010875C);
                    Effect_TypeAQ_Init(36.0f, 256.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str7, 4, &D_8010875C);
                    break;
                case 17:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str3 = D_80105E08[i].unk_10[2];
                    str4 = D_80105E08[i].unk_10[3];
                    str5 = D_80105E08[i].unk_10[4];
                    Effect_TypeK_Init(150.0f, 160.0f, 60.0f);
                    Effect_TypeAR_Init(16.0f, 24.0f, 1, 30.0f, 60.0f, 30.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 112.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(48.0f, 136.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str3, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 160.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    Effect_TypeAQ_Init(48.0f, 184.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str5, 4, &D_8010875C);
                    break;
                case 18:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    str4 = D_80105E08[i].unk_10[3];
                    Effect_TypeK_Init(150.0f, 0.0f, -120.0f);
                    Effect_TypeAR_Init(16.0f, 136.0f, 1, 30.0f, 60.0f, 30.0f, 5, str1, 1, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 188.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str2, 4, &D_8010875C);
                    Effect_TypeAQ_Init(24.0f, 212.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str4, 4, &D_8010875C);
                    break;
                case 19:
                    str1 = D_80105E08[i].unk_10[0];
                    str2 = D_80105E08[i].unk_10[1];
                    Effect_TypeK_Init(150.0f, 0.0f, 120.0f);
                    Effect_TypeAQ_Init(46.0f, 32.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xC, str1, 4, &D_8010875C);
                    Effect_TypeAQ_Init(40.0f, 64.0f, 12.0f, 3.0f, 60.0f, 60.0f, 0xB, str2, 4, &D_8010875C);
                    break;
            }
        }
    }
}

s32 func_800AD980(void) {
    gPlayerActors->pos.x = D_80108760;
    gPlayerActors->pos.y = D_80108764 + 5000.0f;
    gPlayerActors->pos.z = D_80108768;
    Controller_StartRead();
    DemoGfx_DrawFrame(gMainGfxPos, &gGraphicsList[gFramebufferIndex], gFramebufferIndex);
    func_8004E784(gContMain, gControllerNo, 0, 0);
    gMainGfxPos = func_8002C900(&gGraphicsList[1 - gFramebufferIndex], 1 - gFramebufferIndex);
    DemoGfx_SwapFB(gFramebufferIndex);
    gFramebufferIndex = 1 - gFramebufferIndex;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADA84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADC50.s")

void func_800ADE24(void) {
    Controller_Zero(&D_801FC9B8);
    Controller_Zero(gContMain);
    *D_801756C0 = 0;
    *D_80175678 = 0;
    D_80200CA0 = 0;
    D_80200CA8 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADE70.s")

s32 func_800AE158(s32 arg0) {
    s32 temp_v0;
    gPlayerActors->pos.x = D_80108784;
    gPlayerActors->pos.y = D_80108788 + 7000;
    gPlayerActors->pos.z = D_8010878C;
    Controller_StartRead();
    DemoGfx_DrawFrame(gMainGfxPos, &gGraphicsList[gFramebufferIndex], gFramebufferIndex);
    func_8004E784(gContMain, gControllerNo, NULL, NULL);
    func_8004DDE0();
    temp_v0 = func_80082714(D_80108784, D_80108788, D_8010878C, arg0);
    gMainGfxPos = func_8002C900(&gGraphicsList[1 - gFramebufferIndex], 1 - gFramebufferIndex);
    DemoGfx_SwapFB(gFramebufferIndex);
    gFramebufferIndex = 1 - gFramebufferIndex;
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE4AC.s")

/**
 * @brief Compute the bounding box that encompasses both input rectangles.
 * The resulting bounding box is stored in the provided output rectangle.
 *
 * @param[in] rectA Pointer to the first input rectangle.
 * @param[in] rectB Pointer to the second input rectangle.
 * @param[out] boundingBox Pointer to the output rectangle representing the computed bounding box.
 *
 * @note The function considers the minimum and maximum coordinates along the x, y, and z axes
 *       to determine the bounding box.
 */
void ComputeBoundingBoxFromRects(Rect3D* rectA, Rect3D* rectB, Rect3D* rectOut) {
    if (rectA->min.x < rectB->min.x) {
        rectOut->min.x = rectA->min.x;
    } else {
        rectOut->min.x = rectB->min.x;
    }

    if (rectB->max.x < rectA->max.x) {
        rectOut->max.x = rectA->max.x;
    } else {
        rectOut->max.x = rectB->max.x;
    }

    if (rectA->min.y < rectB->min.y) {
        rectOut->min.y = rectA->min.y;
    } else {
        rectOut->min.y = rectB->min.y;
    }

    if (rectB->max.y < rectA->max.y) {
        rectOut->max.y = rectA->max.y;
    } else {
        rectOut->max.y = rectB->max.y;
    }

    if (rectA->min.z < rectB->min.z) {
        rectOut->min.z = rectA->min.z;
    } else {
        rectOut->min.z = rectB->min.z;
    }

    if (rectB->max.z < rectA->max.z) {
        rectOut->max.z = rectA->max.z;
        return;
    }
    
    rectOut->max.z = rectB->max.z;
}

/**
 * @brief Adjusts the boundaries of a 3D rectangle in order to include the coordinates of the provided 3D vector.
 *
 * @param[in,out] r Pointer to the 3D rectangle to be adjusted.
 * @param[in] vec The 3D vector whose coordinates are included in the rectangle boundaries.
 */
void AdjustRectToVec3(Rect3D* r, Vec3f vec) {
    if (vec.x < r->min.x) {
        r->min.x = vec.x;
    } else if (r->max.x < vec.x) {
        r->max.x = vec.x;
    }
    if (vec.y < r->min.y) {
        r->min.y = vec.y;
    } else if (r->max.y < vec.y) {
        r->max.y = vec.y;
    }
    if (vec.z < r->min.z) {
        r->min.z = vec.z;
        return;
    }
    else if (r->max.z < vec.z) {
        r->max.z = vec.z;
    }
}

/**
 * @brief Expands the input rectangle by a given amount.
 * 
 * @param r: Pointer to the rectangle to be expanded
 * @param s: Amount to expand the rectangle by 
 */
void Rect_Expand(Rect3D* r, f32 s){
    r->min.x -= s;
    r->min.y -= s;
    r->min.z -= s;
    r->max.x += s;
    r->max.y += s;
    r->max.z += s;
}

/**
 * @brief Adjust the bounds of a rectangle to ensure that the minimum values are less than the maximum values.
 * 
 * @param[in,out] rect: Pointer to rectangle to adjust
 */
void OrderRectBounds(Rect3D *rect) {
    f32 prevMaxX;
    f32 prevMaxY;
    f32 prevMaxZ;
    
    if (rect->max.x < rect->min.x) {
        prevMaxX = rect->max.x;
        rect->max.x = rect->min.x;
        rect->min.x = prevMaxX;
    }
    
    if (rect->max.y < rect->min.y) {
        prevMaxY = rect->max.y;
        rect->max.y = rect->min.y;
        rect->min.y = prevMaxY;
    }
    
    prevMaxZ = rect->max.z;
    
    if (prevMaxZ < rect->min.z) {
        rect->max.z = rect->min.z;
        rect->min.z = prevMaxZ;
    }
}

/**
 * @brief Compares two given rectangles to determine if they intersect.
 *      
 * @param[in,out] rectA: first rectangle
 * @param[in,out] rectB: second rectangle
 * 
 * @return (s32) 1 if the two rectangles intersect, 0 otherwise
 */
s32 IfRectsIntersect(Rect3D* rectA, Rect3D* rectB) {
    if ((f64) rectB->max.x < (f64) rectA->min.x) {
        return 0;
    }
    if ((f64) rectA->max.x < (f64) rectB->min.x) {
        return 0;
    }
    if ((f64) rectB->max.y < (f64) rectA->min.y) {
        return 0;
    }
    if ((f64) rectA->max.y < (f64) rectB->min.y) {
        return 0;
    }
    if ((f64) rectB->max.z < (f64) rectA->min.z) {
        return 0;
    }
    if ((f64) rectA->max.z < (f64) rectB->min.z) {
        return 0;
    }
    return 1;
}

/**
 * @brief Determines if a point (vec3f) is within a given rectangle.
 * 
 * @param point: Point to check 
 * @param rect: Pointer to rectangle to check against
 * @return (s32) 1 if point is in rectangle, 0 otherwise 
 */
s32 IsPointInRect(Vec3f point, Rect3D* rect) {
    if (point.x < rect->min.x) {
        return 0;
    }
    if (rect->max.x < point.x) {
        return 0;
    }
    if (point.y < rect->min.y) {
        return 0;
    }
    if (rect->max.y < point.y) {
        return 0;
    }
    if (point.z < rect->min.z) {
        return 0;
    }
    if (rect->max.z < point.z) {
        return 0;
    }
    return 1;
}

/**
 * @brief Create a bounding box from two given vectors.
 * 
 * @param vecA: First vector
 * @param vecB: Second vector
 * @param rect: Pointer to rectangle to store bounding box in 
 */
void CalculateBoundingRectFromVectors(Vec3f vecA, Vec3f vecB, Rect3D* rect) {
    if (vecA.x < vecB.x) {
        rect->min.x = vecA.x;
        rect->max.x = vecB.x;
    } else {
        rect->min.x = vecB.x;
        rect->max.x = vecA.x;
    }
    if (vecA.y < vecB.y) {
        rect->min.y = vecA.y;
        rect->max.y = vecB.y;
    } else {
        rect->min.y = vecB.y;
        rect->max.y = vecA.y;
    }
    if (vecA.z < vecB.z) {
        rect->min.z = vecA.z;
        rect->max.z = vecB.z;
        return;
    }
    rect->min.z = vecB.z;
    rect->max.z = vecA.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEB48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEDB4.s")
