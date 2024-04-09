#include "ultra64.h"
#include "macros.h"
#include "common_structs.h"
#include "io/viint.h"
#include "os/osint.h"
#include "enums.h"


#ifndef VARIABLES_JP_H
#define VARIABLES_JP_H

extern s32 rngSeed; //rng

extern SpriteListing gSpriteListings[230];
  
extern OSPfs gRumblePfs[MAXCONTROLLERS];

extern Camera* D_80174860;
extern PlayerActor* gCurrentActivePlayerPointer;
extern Tongue* gTongueOnePointer;
extern ContMain gContMain[MAXCONTROLLERS];
extern s16 gTotalCarrots;
extern unk0* D_801FFB84;
extern s32 gEffectListCount;
extern Effect* gEffectListHead;
extern Effect gEffectList;
extern s32 D_800F68A8;              // s32 (but really only 1bit) is controller input allowed.
extern s32 sDebugInt;
extern s32 D_800F06EC;
extern s32 sDebugTestView;
extern u8 D_800F0B54[];
extern s32 D_800F6880;
extern s32 gPrevButtons[MAXCONTROLLERS];
extern s32 gButtons[MAXCONTROLLERS];
extern s32 D_800F68AC;
extern s32 D_800F68C0;
extern s32 D_800F68C4[2];
extern s32 D_800F68CC;
extern s32 D_800FDFA0;
extern s32 D_800FDFC0[2];
extern s32 D_800FDFC8[2];
extern u8 gPrimRed;
extern u8 gPrimGreen;
extern u8 gPrimBlue;
extern u8 gPrimAlpha;
extern u8 D_800FDFE0;
extern u8 D_800FDFE4;
extern s32 D_800FDFE8;
extern s32 D_800FDFEC;
extern f32 D_800FDFF0;
extern f32 D_800FDFF4;
extern f32 D_800FDFF8;
extern f32 D_800FDFFC;
extern s32 D_800FE000;
extern f32 D_800FE004;
extern f32 D_800FE008;
extern f32 D_800FE00C;
extern f32 D_800FE010;
extern f32 D_800FE018;
extern f32 D_800FE01C;
extern f32 D_800FE020;
extern f32 D_800FE024;
extern f32 D_800FE028;
extern f32 D_800FE02C;
extern f32 D_800FE030;
extern f32 D_800FE034;
extern f32 D_800FE038;
extern f32 D_800FE03C;
extern f32 D_800FE040;
extern f32 D_800FE044;
extern f32 D_800FE048;
extern f32 D_800FE04C;
extern f32 D_800FE050;
extern f32 D_800FE054;
extern f32 D_800FE058;
extern f32 D_800FE05C;
extern f32 D_800FE060;
extern s32 D_800FE160;
extern s32 D_800FE164;
extern u8 D_800FE18C;
extern u8 D_800FE190;
extern u8 D_800FE194;
extern u8 D_800FE198;
extern s32 D_800FE19C;
extern u8 gDontChangeEyes;
extern u8 gLockContextEyes;
extern s32 D_800FEA30;
extern s32 D_800FEA34;
extern s32 gTrainingState;
extern s32 gTrainingRoomTimer;
extern s32 gTrainingStateTmer;
extern s32 D_800FEB98;
extern s32 D_800FEB9C;
extern f32 D_800FEBB4;
extern f32 D_800FEBB8;
extern f32 D_800FEBBC;
extern f32 D_800FEBC0;
extern u8 D_800FEBC4;
extern u8 D_800FEBC8;
extern u8 D_800FEBCC;
extern f32 D_800FEBD0;
extern Vec4f D_800FEBD4;
extern u8 D_800FEDC0[226][8]; //some data RE each sound effect
extern s32 D_800FF5D0;
extern s32 D_800FF5E4;
extern s32 D_800FF5E8;
extern s16 gGfxTaskRunning;
extern s16 gAudioTaskState;
extern s16 D_800FF5F4;
extern s16 gIsPaused;
extern s16 gIsStero;
extern s16 D_800FF604;
extern s16 D_800FF608;
extern ALCSPlayer* gBGMPlayerP;
extern s32 D_800FF63C;
extern u8 D_800FF64C;
extern u8 D_800FF650;
extern s16 sStageBGMs[];
extern s16 D_800FFDF0;
extern s16 D_800FFDF4;
extern s32 gGameModeCurrent;
extern Gfx* gMainGfxPos;
extern s32 gGameModeState;
extern s16 UseFixedRNGSeed;
extern PlayerInit gPlayerInits[10]; // 4 extra blank entries.
extern f32 D_8010881C;
extern f32 D_80108820;
extern s32 D_80108B68;
extern segTableEntry gSegTable[16];
extern const Vec2f D_8010A6D0[0x6B]; //positions?
extern const unk_8010AA28 D_8010AA28[0x6B]; //actor related?
extern f32 D_8010B328;
extern f32 D_8010B32C;
extern f32 D_8010B330;
extern f32 D_8010B334;
extern f32 D_8010B34C;
extern f32 D_8010B350;
extern f32 D_8010B4C0;
extern f64 D_8010B4C8;
extern f64 D_8010B4D0;
extern f32 D_8010B4D8;
extern f64 D_8010B4E0;
extern f64 D_8010B4E8;
extern f64 D_8010B550;
extern f64 D_8010B558;
extern f64 D_8010B560;
extern f64 D_8010B568;
extern f64 D_8010B7A0;
extern f64 D_8010B7A8;
extern f64 D_8010B7B0;
extern f64 D_8010B7B8;
extern f64 D_8010B7E8;
extern f64 D_8010B7F0;
extern f32 D_8010B7F8;
extern f32 D_8010B7FC;
extern f32 D_8010B9E8;
extern f32 D_8010BA90;
extern f32 D_8010BA94;
extern f32 D_8010BAA4;
extern f32 D_8010BB30;
extern f64 D_8010BC80;
extern f64 D_8010BC88;
extern f64 D_8010BC90;
extern f64 D_8010BC98;
extern f64 D_8010BE30;
extern f32 D_8010C098;
extern f64 D_8010C100;
extern f64 D_8010C108;
extern f64 D_8010C110;
extern f64 D_8010C118;
extern f32 D_8010C0F4;
extern f32 D_8010C0F8;
extern f32 D_8010C26C;
extern f32 D_8010C270;
extern f32 D_8010C274;
extern f32 D_8010C2B8;
extern f32 D_8010C2BC;
extern f32 D_8010C318;
extern f32 D_8010C31C;
extern f32 D_8010C320;
extern f32 D_8010C324;
extern f64 D_8010C510;
extern f64 D_8010C518;
extern char D_8010C7B0[16]; //"TestView"
extern char D_8010C944[8];
extern char D_8010CA10[9]; //"mem err!\n"
extern f64 D_8010FFF8;
extern f64 D_80110000;
extern f32 D_80110108;
extern f64 D_80110120;
extern char D_8011074C[];
extern char D_8011077C[];
extern OSThread gIdleThread; // thread1
extern u64 gIdleThreadStack[1024]; // thread1
extern OSThread gMainThread; // thread3
extern u64 gMainThreadStack[1024]; // thread3
extern OSThread D_80117FF0; //unused thread.
extern u64 D_801181A0[512]; //unused Stack
extern void* D_801191A0;
extern OSMesgQueue gSyncMessageQueue;
extern u64 D_80119320[128]; //D_800f04e0[].dram_stack
extern u64 D_80119720[8192];//D_800f04e0[].output_buff
extern Gfx D_80129720[10];
extern OSMesg gPiManMsgs[50];
extern OSMesgQueue gPiManMgsQ;
extern s32 gControllerNo;
extern s32 D_80168D78[];
extern s32 gActorCount;
extern PlayerActor gPlayerActors[4];
//extern s32 D_80168E5C;
extern Tongue gTongues[4];
extern Actor gActors[ACTORS_MAX]; //currently loaded actor structs
extern pole D_80170968[64]; //currently loaded pole structs
extern unkStruct D_80172E88[]; //used by Red ants.
extern s32 D_80174758[];
extern s32 D_80174864;
extern s32 D_80174878;                  // Level/Stage ID | LoadStageByIndex()
extern s32 levelFlags[32]; //contextual-per-level flags

extern s32 D_801748A0;
extern s32 D_80174998;
extern s32 gTimer;                                              // Timer: runs when a process starts
extern OSMesgQueue gEepromMsgQ;
extern s32 Battle_TimeLeft;
extern u8 gTextGradient[16]; //probably really RGBA32[4]
extern f32 D_80176F50;
extern OSMesgQueue gSchedMessageQueue;
extern OSTask* gCurrentGfxTask;
extern OSTask* gCurrentAudioTask;
extern s16 D_801B3540;
extern u8 gAlHeapBase[300000];
extern s32 D_801FC9A0;
extern s32 TempoToSetBGM;
extern s16 D_801FC9AC;
extern s16 TempoBGMBool;
extern f64 D_801FCA00;
extern OSThread gAudioThread;
extern u64 gAudioThreadStack[0x400];
extern s32 D_801FF634;
extern s32 D_801FF710;
extern OSMesgQueue D_801FF750;
extern OSIoMesg D_801FF7F0;
extern OSTask* gAudioTasks[2];
extern ALGlobals D_801FF810;
extern ALSynConfig D_801FF860;
extern ALSeqpConfig gBGMplayerCfg;
extern s32 gCurrentStageTime; //measured as ticks (30/sec)
extern OSIoMesg gAudioIOMsgs[30];
extern s32 D_801FFB78;
extern unk_D_801FFB90 D_801FFB90;
extern u32 D_80200054;
extern struct UnkList D_80200060; //beginning of linked list?
extern s32 D_802025B0;
extern s32 VertextBufferCount;
extern s32 TriangleBufferCount;
extern s32 ModelBufferCount;
extern s32 D_80236968;
extern s32 D_8023696C;
extern s32 gCurrentZone;
extern s32 TempoBGM;
extern s16 D_801FCA22;
extern s32 currLoadingBGM;
extern s32 currBGMIndex;
extern ALSeqFile* gBGMALSeqFileP;
extern OSMesgQueue D_801FCA50[50];
typedef u8 Addr[];
extern char D_8010F1EC[];
extern char D_8010F1FC[];
extern u32 D_80168DA0;
//extern f32 D_80168DE4;
extern char D_8010ECF8[];
extern char D_8010ED04[];
extern char D_8010ED0C[];
extern char D_8010ED20[];
extern char D_8010ED2C[];
extern char D_8010ED48[];
extern char D_8010ED58[];
extern char D_8010ED5C[];
extern char D_8010ED68[];
extern char D_8010ED84[];
extern char D_8010ED94[];
extern s32 D_80175668[4];
extern u16 D_80175678[4];
extern u16 D_801756C0[4];
extern s16 D_801756C2;
extern s16 D_801756C4;
extern s16 D_801756C6;
extern s32 gCurrentDemoTimer;
extern OSMesg D_801FCF08[50];
extern s32 D_801FD558;
extern DMAStruct D_801FCFD8[50];
extern ALCMidiHdr* D_801FD550;
extern SaveFile gGameState; //data on current playthrough's progress.
extern void* D_80200C8C;
extern void* D_80200C94;
extern Addr D_AB10B0;
extern Addr D_F000000;
extern Addr D_F0042B0;
extern Camera gCamera[4];
extern unk802000C84 D_80200C84;
extern u8 gHasShadows[256]; //unset for actortypes like spawnners.
extern Collider D_80236980[128];
extern s32 gFieldCount;
extern Door gDoors[16];
extern unkIsChange isChange;
extern s32 gDoorCount;
extern Collision D_80240D6C[];
extern u8 gCarrotBitfield;
extern s8 D_801B313D;
extern SaveRecord gGameRecords;
extern Vec3w D_801087D8[];
extern s32 Timing_StopGfxTime;
extern u32 Timing_StartGfxTime;
extern u32 Timing_EndFrameTime;
extern s32 Timing_StopProcessTime;
extern s32 Timing_StartProcessTime;
extern s32 D_800FF8AC;
extern s16 D_80100E08[17][5]; //coords and behavior for "Game over" letters
extern f64 D_8010F410;
extern char* D_80100FD4[18];
extern f32 Timing_BusyTime;
extern char D_8011078C[];
extern char D_801107A0[];
extern char D_801107B0[];
extern char D_801107C0[];
extern char D_801107D0[];
extern char D_8010D940[];
extern char D_8010D964[];
extern u32 D_800FF884;
extern char D_8010D968[];
extern s32 Timing_DelayAudioInterval;
extern u32 Timing_StartAudioTime;
extern s32 D_800FF890[];
extern s16 D_800FF8BC;
extern s32 Timing_StartProcessTime;
extern s32 D_800FF8B4;
extern u32 D_800FF8B8;
extern s32 D_801B3168;
extern u8 gSelectedCharacters[4];
extern s32 D_801749B0;
extern s32 gIsMultiplayerPaused;
extern s32 gCurrentStage;
extern s32 D_80176F58[2];
extern s16 gOneRun;
extern s16 gNoHit;
extern BGMVolume volBGM;
extern BGMVolume volumesBGM[];
extern s16 doesBGMLoop;
extern s16 gIsStero;
extern s16 D_801FCA48;
extern ALCSeq* gBGMSeqP;
extern s16 gIsNotInCave;
extern s32 D_80236974;
extern char D_8010D834[];
extern u8 D_80200A98[];
extern u8 D_800FF64C;
extern u8 D_800FF650;
extern ALSndPlayer* gSFXPlayerP;
extern frameBufferData D_803B5000[2];
extern Addr D_1000000;
extern Addr D_1045C00;
extern unk80100F50 D_80100F50[];
extern CTTask* gCTTaskHead;
extern CTTask* gCTTaskTail;
extern s32 sGameModeStart;
extern char D_8010DB20[];

#endif
