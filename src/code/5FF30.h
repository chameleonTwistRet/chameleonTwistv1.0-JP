#ifndef _5FF30_H_
#define _5FF30_H_

#include "common.h"
#include "mod.h" //used to DMA mod stuff in if needed

/* Structs */
typedef struct unk800A250C {
    char unk_00[0x6A];
    s16 unk6A;
} unk800A250C;

typedef struct unk80100DF0 {
    s16 unk_00;
    s16 unk_02;
    void* unk_04;
} unk80100DF0; //sizeof 0x08

typedef struct unk801FC9BC {
    u16 unk_00;
    char unk_02[0x0E];
} unk801FC9BC;

typedef struct unk801FFB88 {
    s16 unk0;
    s32 unk4;
} unk801FFB88;

// Swap struct members
typedef struct unk8008CE94 {
    s16 unk0;
    s32 unk4;
    s32 unk8;
    struct unk8008CE94* unkC; //does this actually point the same struct data type?
    struct unk8008CE94* unk10; //does this actually point the same struct data type?
} unk8008CE94;

typedef struct StageSelectionData {
    u8 temp0;
    char unk_02[0x17];
} StageSelectionData;

typedef struct unk80097CF8_2 {
    char unk_00[0x7A];
    u16 unk7A;
} unk80097CF8_2;

typedef struct unk80097CF8 {
    char unk_00[0x58];
    unk80097CF8_2* unk58;
} unk80097CF8;

typedef struct UnkPlaySoundEffect {
    char unk_00[0x0E];
    s16 unk_0E;
} UnkPlaySoundEffect;


/* Functions */
void func_800A5488(CTTask* task);
void func_8009ABF4(CTTask*);
void func_8009ACC8(CTTask*);
void func_80094DBC(CTTask* task);
void func_8009DE1C (CTTask*);
s32 func_8008D7FC(void);
void func_80092474(CTTask*);
void func_80094E0C(CTTask* arg0);
void func_800A54F4(CTTask* arg0);
void func_8008EA60(s32, s32, s32, s32, s16*);
void func_800A6C04(CTTask*);
void PrintSelectedStageInfo(CTTask*);
void func_800A6B80(CTTask*);
void func_8008EB08(s32, s32, s32, s32, s16*, f32, f32, f32, f32, s32);
void func_800A4904(CTTask*);
void func_800A4BCC(void);
void func_800A4868(CTTask*);
void func_80080864(f32, f32, f32, f32, f32, f32, unk80100DF0*, s32);
s32 RecordTime_ParseToSecs(s32*);
void RecordTime_SetTo(s32, u8*);
void SaveData_LoadFile(s32, SaveFile*);
void func_800A25F0(s32, f32);
void func_800A50B4(CTTask*);
CTTask* CTTask_Alloc(s16, s32, s32);
void SaveData_Wait(void);
s32 SaveData_VerifyFile(u8*, SaveFile*);
void SaveData_LoadFile(s32, SaveFile*);
void func_800A96DC(CTTask*);
void func_800A97E4(CTTask*);
void func_8008E9AC(s32, s32, s32, s32, void*);
void func_8002CB6C(Gfx*, void*, s32);
void func_8002CBE8(s32); 
void func_8004E784(ContMain*, s32, s32, s32);
void func_800AA844(s32);
void func_800A0D90(void);
void SaveData_ResetRecords(void);
CTTask* func_800A4484(void);
void SaveData_WriteFile(SaveFile*);
void GameOverMaster(CTTask*);
s32 func_8008EC90(void);
void func_8007B174(void);
void func_8008C440(void);
void func_8008C464(void);
void func_8008C4E8(void);
void func_8008C610(void);
void func_8008C698(void);
void func_8008C6D4(void);
void func_800A7844(void);
s32 func_800A78D0(void);
void func_80091A38(s32);
void Rumble_StopAll(void);
void func_80096D40(u16);
void func_8009BA38(CTTask*);
void func_8009C33C(CTTask*);
void func_8009C038(CTTask*);
void func_80099AF4(void);
void func_800A6CF4(CTTask*);
void func_8009C644(CTTask*);
void Video_SetTask(graphicStruct* arg0, Gfx* arg1, s32 arg2);
void func_8008F7A4(s32, s32);
void func_80097540(CTTask*);
void func_8009288C(CTTask*);

/* Ext Variables */
extern ContMain D_801FC9B8;
extern s16 D_80200CA0;
extern s16 D_80200CA8;
extern OSTask D_800F04E0[2];
extern unk801FFB88* D_801FFB88;
extern unk801FC9BC D_801FC9BC[]; //probably not correct
extern unk80100DF0 D_80100DF0[];
extern s32 D_800F0704;
extern SaveFile gSaveFile;
extern SaveFile* gSaveFiles;
extern segTableEntry gStageLoadData[];
extern u8 D_800FF8DC;
extern u8 D_800FF8E0;
extern u8 D_800FF8E4;
extern s32 perfectCode;
extern OSContPad D_80175650[MAXCONTROLLERS];
extern s32 D_801FCA08;
extern s16 D_801FCA18;
extern s16 D_80100D64[];
extern f32 D_80108760;
extern f32 D_80108764;
extern f32 D_80108768;
extern s32 gFramebufferIndex;
extern graphicStruct gGraphicsList[2];
extern unkStruct0 D_80101048;
extern s32 D_800FF8E8;
extern OSMesg D_801B30A0;
extern OSTimer D_801B3148;
extern OSMesgQueue D_801192B8;
extern OSMesgQueue D_801192D0;
extern s16 D_800FF5C4;
extern s32 D_800FF5C8;
extern s16 D_800FF5CC;
extern s16 D_800FF5D8;
extern OSMesgQueue D_801B35A0;
extern Mtx D_80129730[];
typedef u32 uintptr_t;
extern char D_8010D97C[];
extern char D_8010D98C[];
extern char D_8010D990[];
extern StageSelectionData D_8010026E[];
extern u8 D_80200B68;
//extern u8 gLevelAccessBitfeild;
extern s16 sDebugLevelAccess;
extern s16 D_80100EB4[];
extern s16 D_801B317C;
extern s16 gSFXMute;
extern UnkPlaySoundEffect* D_80200A90;

#endif // _5FF30_H_
