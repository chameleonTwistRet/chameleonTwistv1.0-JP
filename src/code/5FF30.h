#ifndef _5FF30_H_
#define _5FF30_H_

#include "common.h"
#include "mod.h" //used to DMA mod stuff in if needed

//used in func_80098684 and func_80088B7C
#define Eight 8.0f+0


enum SchedMessages {
    SCHED_MESG_VINTR = 0,
    SCHED_MESG_SP_TASK_DONE = 1,
    SCHED_MESG_DP_TASK_DONE = 2,
    SCHED_MESG_START_VIDEO_TASK = 3,
    SCHED_MESG_UNK_4 = 4,
    SCHED_MESG_START_AUDIO_TASK = 5,
    SCHED_MESG_TIMEOUT = 6,
    SCHED_MESG_RESET = 7
};

enum AudioTaskStates {
    AUDIO_TASK_STATE_IDLE = 0,
    AUDIO_TASK_STATE_PENDING = 1,
    AUDIO_TASK_STATE_RUNNING = 2
};

/* Structs */
typedef struct letterDef{
    s16 x;
    s16 y;
    const char* letter;
}letterDef;

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

typedef struct UnkBg {
    s16 unk0;
    s16 unk2;
    s16 spriteID;
} UnkBg;

extern UnkBg* D_800FFE58[];

/*what is this used for???
typedef struct unk80097CF8_2 {
    char unk_00[0x7A];
    u16 unk7A;
} unk80097CF8_2;

typedef struct unk80097CF8 {
    char unk_00[0x58];
    unk80097CF8_2* unk58;
} unk80097CF8;
*/

extern s16 D_80200B38;
extern s32 D_80236978;
typedef struct UnkPlaySoundEffect {
    char unk_00[0x0E];
    s16 unk_0E; //amount of sounds?
} UnkPlaySoundEffect;

typedef struct Unk_800FFB74 {
    Mtx* unk_00;
    void* unk_04;
    s32* unk_08;
    s32* unk_0C;
    s16 unk_10;
} Unk_800FFB74; // size 0x14

typedef struct Unk_800FFDDC {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x07 */ s16 unk_08;
} Unk_800FFDDC; // size 0xA

//defined in us 1.0's uncompiled source code as ROLL_DATA
typedef struct RollData {
    /* 0x00 */ s32 execTime; //time (gCurrentDemoTimer - CreditsTimeOffset) to execute this roll
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08; //id???
    /* 0x0C */ s32 unk_0C;
    //expected euc-jp
    /* 0x10 */ char lines[7][48];
} RollData; //sizeof 0x160

typedef struct StageLoadData {
    StageData* stageData;
    void* romStart;
    void* ramStart;
    void* ramEnd;
    s32 stageId;
} StageLoadData;

//from ll.c
//used in AT LEAST SaveData_Wait
//with SaveData_Wait, just use the last half of the u64's
u64 __ull_div(u64 a0, u64 a1);
u64 __ll_mul(u64 a0, u64 a1);

void func_800A27B0(CTTask* task);                   /* extern */
extern s16 D_8020005C;

void func_8009D45C(CTTask*, u8, u8, u8);                 /* extern */
void func_8009DA20(CTTask* task);                   /* extern */
void func_8009F1B4(CTTask* task);                   /* extern */
void func_8009F5B0(CTTask* task);                   /* extern */

/* funcs */
void schedproc(s32 arg0);
void Sched_SetGfxTask(OSTask* task, s32 fbIndex);
void Sched_SetAudioTask(OSTask* arg0);
f32 func_80085364(u8 arg0);
void Audio_StopOsc(struct UnkList* arg0);
void Audio_RomCopy(u32 devAddr, void* vAddr, u32 size);
void func_80085C90(u32 arg0, void* arg1, s32 arg2);
void func_80085D14(void);
void Audio_StartThread(void);
unk0* func_80086EB4(s32 arg0);
s16 func_80086EFC(s32 arg0);
void func_80087088(unk0* arg0);
s32 func_80087130(unk0* arg0, unk0* arg1);
s32 func_8008714C(unk0* arg0, s32 arg1);
s32 StopSoundEffect(s32 arg0);
s32 func_8008746C(unk0* arg0);
s16 func_8008788C(s32 arg0, f32 arg1);
void func_80087E60(f32* arg0, f32* arg1, f32* arg2, f32* arg3);
void func_80087FA4(u32 arg0);
void func_8008800C(s32 arg0);
s32 func_80088248(s32 arg0);
s32 func_800885EC(s32 arg0, s32 arg1);
s32 func_80088698(s32 arg0);
s32 func_800886D8(s32 arg0, s16 arg1, s16 arg2);
s32 func_8008873C(f32* arg0, f32* arg1, f32* arg2);
void func_80088B7C(u8*, u8*, u8*, u8*, u8*, u8*);
void func_800893C0(u8*, u8*, u8*, u8*, u8*, u8*, u8*, u8*, u8*, u8*, u8*, u8*);
void PlayJungleExtSfx(void);
void PlayJungleExtSfxWrapper(void);
s32 LoadBGM(void);
s32 PlayBGM(s32 index);
s32 func_8008BE14(void);
s32 StopBGM(void);
s32 func_8008BF20(void);
s32 func_8008BFA8(s32 vol);
s32 alCSPGetTempoWrapper(void);
s32 func_8008C040(s32 arg0);
void func_8008C070(s32 arg0);
void func_8008C1C8(Gfx** arg0);
void func_8008C35C(Gfx** arg0);
void func_8008C3F0(Actor* actor, s32 sfxID, s32 unused);
s32 func_8008C438(void);
void Timing_StartGfx(void);
void Timing_StopGfx(void);
void Timing_StartProcess(void);
void Timing_StopProcess(void);
void Timing_EndFrame(void);
void func_8008C554(void);
void Timing_WaitForNextFrame(void);
void Timing_MeasureFrameDuration(void);
void Timing_StartAudio(void);
void Timing_StopAudio(void);
void func_8008C714(void);
void func_8008C750(void);
s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2);
void strcpy(u8* arg0, u8* arg1);
void CTTask_Run(CTTask* task);
void CTTask_Unlink(CTTask* taskToRemove);
void CTTaskList_Clear(void);
void Task_ClearMost(void);
void CTTaskList_Init(void);
void CTTask_Unlink_2(CTTask* task);
//still unsure
void bzero32(CTTask*, s32, CTTask*, s16);
CTTask* CTTask_Alloc(s16 setRunType, s16 arg1, CTTask* task);
void func_8008D114(GraphicStruct* arg0, s32 fbIndex);
Gfx* func_8008D168(Gfx* gfxPos, s32 arg1, s32 arg2);
s32 func_8008D5DC(ContMain* controller);
//this also came up as CTTask but it generates with buttons1 and buttons2 so i think thats more accurate
//definitely only has one arg though
u16 func_8008D6B4(ContMain*);
u16 func_8008D6E4(CTTask*, ContMain*);
s32 func_8008D7B0(CTTask* task);
s32 func_8008D7FC(CTTask* task);
s32 func_8008D950(CTTask* task);
void func_8008DAB8(f32, f32, f32, f32, f32, s32, s16, s16);
void func_8008DB24(f32, f32, f32, f32, f32, s16, s16, s16);
void func_8008DB90(Gfx** pGfxPos, GraphicStruct* arg1);
Gfx* func_8008E314(Gfx* gfxPos, Tongue* tongues, PlayerActor* players, Camera* cameras, s32 fbIndex);
Gfx* func_8008E488(Gfx* gfxPos, Tongue* tongues, PlayerActor* players, Camera* cameras, s32 fbIndex);
Gfx* setFrustum(Gfx* gfxPos, s32 fbIndex);
void func_8008E698(CTTask*);
void func_8008E7B8(CTTask* arg0);
void func_8008E840(CTTask*);
//could be (s16, s16, s16, s16, CTTask*)??
CTTask* func_8008E9AC(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4);
CTTask* func_8008EA60(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4);
//s16 might be CTTask??
CTTask* func_8008EB08(s16, s16, s16, s16, s16*, f32, f32, f32, f32, s16);
CTTask* func_8008EBCC(s16, s16, s16, s16, CTTask*, f32, f32, f32, f32, s16);
s32 func_8008EC90(void);
void func_8008EF78(CTTask* task);
void func_8008EFA0(CTTask*);
CTTask* func_8008F050(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4);
void func_8008F114(void);
void func_8008F16C(void);
s32 DrawBackground(s32 arg0);
void func_8008F710(CTTask* task);
CTTask* func_8008F7A4(s16, s16);
char* ParseIntToBase10(s32 useInt, char* result);
s32 ReturnInputS32(s32 n);
s32 GetBaseStage(s32 stageID);
s32 MemsizeCheck(void);
void SetProcessType(s32 gameMode);
void func_8008FD68(void);
void func_8008FDF8(void);
void func_8008FE00(void);
void func_8008FE50(void);
void func_8008FEA8(s32 arg0, s32 arg1);
void Porocess_Mode0(void);
void MainLoop(void);
//might return s32?
s16 func_800908C0(s32, s32);
s32 func_80090B10(s32 time, s32 stageID);
void func_80090BC0(void);
void func_80090C54(CTTask* arg0);
s32 func_80090CB0(CTTask* task);
s32 func_80090D28(CTTask* task);
void func_80090E2C(void);
void func_80090E78(CTTask* task);
void func_800910E4(CTTask* task);
void func_800911D0(CTTask* task);
void func_8009131C(CTTask* task);
void func_80091390(CTTask* task);
void func_80091420(CTTask* task);
void func_800914CC(CTTask* task);
void func_80091548(CTTask* task);
void func_800915C0(CTTask* arg0);
void func_80091694(CTTask*);
void func_80091758(CTTask* arg0);
void func_800917A8(CTTask* task);
void func_800919D8(s32, s32);
//stage finish???
void func_80091A38(CTTask* task);

void func_80092208(CTTask* arg0);
void func_80092254(CTTask* arg0);
void func_80092324(CTTask* arg0);
void func_8009236C(CTTask* task);
void func_8009244C(CTTask* task);
void func_80092474(CTTask* task);
void func_800925A8(CTTask* task);
void func_80092690(CTTask* task);
void func_8009273C(CTTask* task);
void func_800927A8(CTTask* task);
void func_800927E8(CTTask* task);
void func_80092864(CTTask* task);
void func_8009288C(CTTask* task);
void func_800928F0(CTTask* arg0);
void func_80092990(CTTask* task);
void func_80092A64(CTTask*, s32);
s32 func_80092C0C(CTTask* task);
CTTask* func_80092C54(s32);
void func_80092D68(CTTask* task);
void func_80092E10(CTTask* arg0);
void func_80092E9C(CTTask* task);
CTTask* func_80092FEC(s32);
void func_80092F44(CTTask* task);
void func_80092FB8(CTTask* task);
void func_80093110(CTTask* task);
void func_8009319C(CTTask* task);
void func_80093260(CTTask* task);
void func_8009336C(CTTask* task);
void func_800933CC(CTTask* task);
void func_80093500(CTTask* task);
void func_800935F8(s32 arg0);
void func_80093600(CTTask* task);
void func_800937FC(CTTask* arg0);
void func_8009384C(CTTask* task);
void func_800938B0(CTTask* task);
void func_800938E4(s32 xMult);
void func_800939B0(CTTask*);
void func_80093CD8(CTTask* task);
void func_80093DE4(CTTask* task);
void func_80093ECC(CTTask* task);
void func_80093FC8(CTTask* task);
void func_8009403C(CTTask*);
void func_800940B8(CTTask*);
void func_80094120(CTTask* task);
void func_800941C0(CTTask*);
void func_80094220(CTTask* task);
void func_80094228(CTTask* task);
void func_8009430C(CTTask* task);
void func_80094410(CTTask* task);
void func_800944C0(CTTask* task);
void func_80094540(CTTask* task);
void func_800945E4(CTTask* arg0);
void func_800945EC(CTTask* task);
void func_800946F4(CTTask* task);
void func_800947B0(CTTask* task);
void func_8009483C(CTTask* task);
void func_8009489C(CTTask* task);
void func_80094958(CTTask* task);
void func_800949D8(CTTask*);
void func_80094ABC(CTTask* task);
void func_80094B2C(CTTask* task);
void func_80094BDC(CTTask* task);
void func_80094C84(CTTask* task);
void func_80094D64(CTTask* arg0);
void func_80094DBC(CTTask* task);
void func_80094E0C(CTTask* arg0);
void func_80094E14(CTTask* task);
void func_80094FC8(f32, f32, f32, f32, f32, s16, s16);
void func_800950C0(CTTask* task);
void func_80095184(CTTask* task);
void func_80095264(CTTask* task);
void func_80095500(CTTask* task);
void func_80095E44(void);
s32 func_8009603C(s32 segmentID, s32 arg1);
u32 func_80096128(s32 stageToLoad, s32 inpAddr);
void func_800966E0(void);
s32 func_80096748(u16);
s32 CanAccessStage(s32 stageIndex);
f32 func_80096898(u16 arg0);
void func_80096964(CTTask* task);
void Stage_Select_ChameleonWalk(CTTask* task);
void func_80096CA0(CTTask* task);
void func_80096D40(s32);
s32 func_80097414(s32 arg0, s32 arg1);
CTTask* func_80097498(void);
void func_80097508(CTTask* task);
void func_80097540(CTTask* task);
void func_80097624(CTTask* task);
void func_80097794(CTTask* task);
void func_80097CF8(CTTask* task);
void func_80097D1C(CTTask* task);
void func_800983C8(CTTask* task);
void func_80098684(u8*, u8*, u8*, u8*, u8*, u8*);
void func_80098F50(CTTask* task);
void func_80099570(CTTask* task);
void func_80099598(CTTask* arg0);
void func_8009960C(CTTask* arg0);
void func_8009984C(CTTask* arg0);
void func_80099870(CTTask* arg0);
void func_800998CC(CTTask* arg0);
void func_800998DC(CTTask*);
void func_80099AF4(CTTask* task);
void func_8009A57C(CTTask* task);
void func_8009A64C(CTTask* task);
void func_8009A724(CTTask* arg0);
void func_8009A868(CTTask* arg0);
void func_8009A988(CTTask* arg0);
void func_8009ABF4(CTTask* arg0);
void func_8009AC74(CTTask* arg0);
void func_8009ACC8(CTTask* task);
void func_8009AD74(CTTask* task);
void func_8009ADDC(CTTask* task);
void func_8009AE38(CTTask* task);
void func_8009AF98(CTTask* task);
void func_8009AFFC(CTTask*);
void func_8009B08C(CTTask* task);
void func_8009B120(CTTask* task);
void func_8009B45C(CTTask* task);
void func_8009B464(CTTask* task);
void func_8009BA38(CTTask*);
void func_8009BAF4(CTTask* task);
void func_8009BB54(CTTask* task);
void func_8009BBD8(CTTask* task);
void func_8009BC30(CTTask* arg0);
void func_8009BC60(CTTask* arg0);
void func_8009BC98(CTTask* arg0);
void func_8009BCF0(CTTask*);
void func_8009BDA8(CTTask* arg0);
void func_8009BDC0(CTTask* arg0);
void func_8009BEC4(CTTask* task);
void func_8009BFA0(CTTask* arg0);
void func_8009BFF8(CTTask* arg0);
void func_8009C038(CTTask* task);
void func_8009C19C(CTTask* task);
void func_8009C278(CTTask* task);
void func_8009C2FC(CTTask* arg0);
void func_8009C33C(CTTask* task);
void func_8009C394(CTTask* task);
void func_8009C4E0(CTTask* task);
void func_8009C644(CTTask* task);
void func_8009C6AC(CTTask* arg0);
void func_8009C700(CTTask* task);
void func_8009C74C(CTTask* task);
void func_8009C828(CTTask* task);
void func_8009CBC0(void);
void func_8009CFA8(void);
void func_8009D08C(CTTask* task);
void func_8009D19C(CTTask* task);
void func_8009D954(CTTask* task);
void func_8009DB98(CTTask*);
u16 func_8009DDEC(CTTask* task);
void func_8009DE1C(CTTask* task);
void func_8009E24C(CTTask* task);
void func_8009E2B0(CTTask* arg0);
void func_8009E300(CTTask* task);
void func_8009E504(CTTask* task);
void func_8009E784(CTTask* task);
// battle stage select
void func_8009E82C(CTTask* task);
void func_8009F0C8(CTTask* task);
void func_8009F314(CTTask* task);
void func_8009F7F4(CTTask* task);
void func_8009F890(void);
void func_800A02C4(CTTask* task);
void func_800A0354(CTTask* arg0);
void func_800A03B8(CTTask* task);
void func_800A07E0(void);
void func_800A0E3C(CTTask* task);
u16 func_800A0EB8(CTTask* task);
void func_800A0EE8(CTTask* task);
void func_800A10E8(CTTask* task);
//chameleon select
void func_800A10F0(CTTask* task);
CTTask* func_800A18C8(void);
void func_800A1944(CTTask* task);
void func_800A191C(CTTask* task);
void func_800A1CCC(CTTask* arg0);
//white perfect code related???
void func_800A1B34(CTTask* task);
void Process_NewGameMenu(void);
void func_800A1EC4(void);
void PrintPerfectCode(CTTask* task);
CTTask* func_800A20CC(void);
void func_800A2164(CTTask*);
void func_800A22D4(CTTask* task, f32 arg1);
void func_800A250C(CTTask* task);
void func_800A25F0(CTTask* task, f32 arg0);
void func_800A272C(CTTask* task);
void func_800A28B8(CTTask* task);
void func_800A2B9C(CTTask* task);
CTTask* func_800A2D84(void);
void func_800A2E18(CTTask*);
//options draw??
void func_800A2EF4(CTTask* task);
void func_800A38B8(CTTask* task);
void func_800A3928(CTTask* task);
void func_800A3990(CTTask* task);
void func_800A39EC(CTTask* task);
void func_800A3DC0(CTTask* arg0);
void func_800A4074(CTTask* arg0);
void PrintDataClearConfirm(void);


void func_800A41C0(CTTask* task);
CTTask* func_800A4484(void);
void func_800A44D8(CTTask* arg0);
void GameOverMaster(CTTask* task);
void func_800A4820(CTTask* task);
void func_800A4868(CTTask* task);
void func_800A4904(CTTask* task);
void func_800A49B0(CTTask* task);
void func_800A4A10(CTTask* task);
void Task_GameOverLetter(CTTask* task);
CTTask* func_800A4BCC(CTTask* task);
void func_800A4D0C(CTTask* arg0);
void func_800A4D58(CTTask* task);
void Process_GameOver(void);
CTTask* func_800A5060(void);
void func_800A50B4(CTTask* task);
void func_800A51DC(CTTask* task);
void func_800A5444(CTTask* arg0);
void func_800A5488(CTTask* task);
void func_800A54EC(CTTask* arg0);
void func_800A54F4(CTTask* arg0);
void func_800A5524(CTTask* arg0);
void Process_JSSLogo(void);
void func_800A56D4(void);
s32 func_800A5778(s32 arg0);
void PrintSelectedStageInfo(CTTask* task);
void func_800A6B34(void);
void func_800A6B80(CTTask* task);
void func_800A6C04(CTTask* task);
void func_800A6CF4(CTTask* task);
void func_800A6DD8(void);
s32 func_800A72E8(s32 arg0);
s32 DMA_Copy(void* arg0, void* arg1, s32 size);
s32 func_800A772C(void* arg0, void* arg1, s32 size);
void func_800A7844(void);
s32 func_800A78D0(void);

//the following three programs are used in generating the "Perfect Code"
s32 func_800A7A18(u32 arg0);
s32 GeneratePerfectCode(u32 time);
s32 func_800A7C58(u32 time);

s32 RecordTime_GetMinsSecs(TimeVal* record, s32* mins, s32* secs);
s32 RecordTime_ParseToSecs(TimeVal* arg0);
void RecordTime_SetTo(s32 arg0, TimeVal* arg1);

s32 SaveData_FileChecksum(u8 *saveData);
void SaveData_Wait(void);
s32 SaveData_VerifyFile(SaveFile*, SaveFile*);
s32 SaveData_Compare(u8 *arg0, u8 *arg1);
void SaveData_LoadFile(s32 arg0, SaveFile* arg1);
void SaveData_LoadAllFiles(u8* arg0);
void SaveData_LoadRecords(u8* arg0);
void SaveData_SaveFile(s32 saveIndex, SaveFile* saveFile);
s32 SaveData_UpdateFile(s32 saveIndex, SaveFile* saveFile);
void SaveData_SaveRecords(void);
s32 SaveData_UpdateRecords(void);
void func_800A878C(SaveFile* arg0);
void func_800A87D4(s32 arg0);
void SaveData_ResetRecords(void);
void SaveData_ClearRecords(void);
void SaveData_WriteFile(SaveFile*);
void func_800A93AC(ContMain* arg0);
void func_800A9690(void);
void func_800A96DC(CTTask* task);
void func_800A9728(CTTask* arg0);
void func_800A97E4(CTTask* arg0);
void func_800AA844(s32 zone);
void func_800AA86C(void);
void func_800AAAC8(void);
void func_800AAB0C(s32 arg0);
s32 func_800AD980(void);
void func_800ADE24(void);
void ComputeBoundingBoxFromRects(Rect3D* rectA, Rect3D* rectB, Rect3D* rectOut);
void AdjustRectToVec3(Rect3D* r, Vec3f vec);
void Rect_Expand(Rect3D* r, f32 s);
void OrderRectBounds(Rect3D *rect);
s32 IfRectsIntersect(Rect3D* rectA, Rect3D* rectB);
void CalculateBoundingRectFromVectors(Vec3f vecA, Vec3f vecB, Rect3D* rect);
//////

void func_8009CB14(void);
void func_8009D0EC(void);
void func_8009EE44(void);

/* Ext Variables */
extern ContMain D_801FC9B8;
extern s16 D_80200CA0;
extern s16 D_80200CA8;
extern OSTask D_800F04E0[2];
extern unk801FFB88* D_801FFB88;
extern unk801FC9BC D_801FC9BC[]; //probably not correct
extern letterDef D_80100DF0[];
extern s32 D_800F0704;
extern SaveFile gSaveFile;
extern SaveFile* gSaveFiles;
//used to be StageLoadData even though its the same but renamed segTableEntry?
//its even casted to segTableEntry anyways
extern StageLoadData gStageLoadData[];
extern s16 D_80200058;
extern u8 D_800FF8DC;
extern u8 D_800FF8E0;
extern u8 D_800FF8E4;
extern s32 perfectCode;
extern OSContPad D_80175650[MAXCONTROLLERS];
extern s32 D_801FCA08;
extern s16 gCurrentDemo;
extern s16 D_80100D64[];
extern f32 D_80108760;
extern f32 D_80108764;
extern f32 D_80108768;
extern s32 gFramebufferIndex;
extern unkStruct0 D_80101048;
extern s32 D_800FF8E8;
extern OSMesg gSchedMessageQueueMsgs[20];
extern OSTimer D_801B3148;
extern OSMesgQueue gAudioDoneMessageQueue;
extern OSMesgQueue gFrameDrawnMessageQueue;
extern s16 gSchedReset;
extern s32 gGfxTaskPending;
extern s16 D_800FF5CC;
extern s16 gGfxTaskStarted;
extern OSMesgQueue gSyncAudioMessageQueue;
typedef u32 uintptr_t;
extern char D_8010D97C[];
extern char D_8010D98C[];
extern char D_8010D990[];
extern s16 D_8010026E[];// extern StageSelectionData D_8010026E[];
extern u8 D_80200B68;
//extern u8 gLevelAccessBitfeild;
extern s16 sDebugLevelAccess;
extern s16 D_80100EB4[];
extern s16 D_801B317C;
extern s16 gSFXMute;
extern UnkPlaySoundEffect* D_80200A90;
extern f32 D_8010F2FC;
extern s16 D_800FFEC0;
extern Gfx D_1015A70[];
extern Gfx D_1015AB8[];
extern Gfx D_1015AE8[];
extern Gfx D_1015B18[];
extern Mtx D_801B3180[];
extern Mtx D_801B3240[];
extern Mtx D_801B3300[];
extern Mtx D_801B33C0[];
extern Mtx D_801B3480[];
extern Mtx* D_800FF8D4;
extern Unk_800FFB74* D_800FFB74[];
extern Unk_800FFDDC* D_800FFDDC[];
extern s32 D_800FFDEC;
extern f32* D_800FF610; //this probably isnt right but until we care roll with it
extern s16 D_801FC9A4;
extern s8 D_80200C08;
extern s16 D_80100D8C[];
extern s16 D_800FFEBC;
extern s32 D_802023E0;
extern s32 D_80202420; //unk type
extern s32 D_8020D8A8;
extern s16 D_80100E10;
extern s16 sStageCrownTotals[6];
extern s32 D_80247904;

extern s16 D_80100258[7]; //should be 7?
extern s16 NameSpriteIDs[7];
extern s16 gStageCrownRecords[];
extern s32 D_800FF8EC;
extern s16 D_80100348[];
extern f32 D_800FFEE8;
extern s16 D_800FFEEC[];
extern s8 D_80200B30;
extern s16 sDebugBitfeild;
extern s8 D_80200B28[];
extern letterDef* D_801005F8[];
typedef struct stuff {
    s16 unk0[3];
    u8 unk6[6];
} stuff;
extern stuff D_801003DC;
extern s16 D_80200B1A;
extern s16 D_80200B1C;
extern s16 gSelectedBattleBGM;
extern s16 D_80100468[];
extern s8 D_80200B2C;
extern s16 D_801003CC[];
extern s16 D_80200B18;
extern f32 D_80108784;
extern f32 D_80108788;
extern f32 D_8010878C;
extern s16 D_80200B1E;
extern letterDef* D_80100F28[]; // coords and text for stage names
extern const char* D_80100DD8[];
extern s16 D_80100D88;
extern s16 sDebugPerfectCodeFlag;
extern s32 AmountOfCredits;
extern s32 D_80101074;
extern s32 CreditsTimeOffset;
extern RollData CreditsData[];
extern s32 D_8010875C;
extern s32 D_80174980;

void Battle_Init(void);
void func_8002CE54(void);
s32 SaveData_ReadFile(SaveFile*);
void func_800C2820(u8, PlayerActor*, SaveFile*);
void func_800C1510(s32, s32);
void func_800B4574(u8*, s16*);

#endif // _5FF30_H_
