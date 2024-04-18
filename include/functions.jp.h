#ifndef FUNCTIONS_JP_H
#define FUNCTIONS_JP_H

f32 sinf(f32);
f32 cosf(f32);
f32 tanf(f32);
f32 __sinf(f32);
f32 __sqrtf(f32);
f32 __cosf(f32);
void CartesianToSpherical(Vec3f inputVec, f32* radius, f32* theta, f32* phi);
Vec3f* SphericalToCartesian(Vec3f* inputVec, f32 radius, f32 theta, f32 phi);
s32 Controller_Init(void);

//vector.c
Vec3f* RotateVector3D(Vec3f*, Vec3f, f32, s32);
void WrapAngle(f32* angle);

//from motor.c
s32 osMotorInit(OSMesgQueue* mq, OSPfs* pfs, int channel);

void idleproc(void*);
void mainproc(void*);
void func_80025EE8(void);
Gfx* func_8002C900(graphicStruct*, s32);
Gfx* func_8002CCA0(graphicStruct*, s32);
void func_8002CCDC(void);
void func_8002CD04(void);
void func_8002CD94(s32);
f32 SumOfSquaresWrapper(f32, f32);
void func_8002D0F4(f32*);
void ClampPointToDisk(f32*, f32*, f32);
f32 CalcAngleBetween2DPoints(f32, f32, f32, f32);
f32 ReflectAngleToUpperQuadrants(f32);
s32 IsAngleWithinTolerance(f32, f32, f32);
s32 AreAnglesWithin180Degrees(f32, f32);
s32 func_8002D328(f32, f32);
s32 func_8002D36C(f32*, f32, f32);
void func_8002D434(f32*, f32*, f32, f32, f32);
void func_8002D550(f32*, f32*, f32, f32, f32);
void Actors_Init(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32);
s32 Actor_Init(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32);
s32 Actor_SpawnAt(s32, f32, f32, f32);
void printNumber(f32, f32, f32, f32, f32, s32, s32);
void func_8002E0CC(void);
void func_8002F3D4(void);
void func_8002F528(s32);
void func_8002F54C(f32, PlayerActor*, s32);
void func_8002F568(void);
f32 func_8002F5C4(s32, s32, s32, s32);
s32 func_8002F6DC(f32*, f32);
void SetPlayerImpulse(void);
void func_8002F884(s32, s32);
void func_8002F960(Tongue*);
void ClearPlayerPowerups(PlayerActor*);

s32 func_80030DCC(f32, f32, s32);
void func_800311C8(Actor*);
void func_800312B0(s32);
void func_800312FC(Actor*, f32);
void func_800313BC(s32, f32); //actor kill
void func_80031518(Actor*);
void func_80031DB0(PlayerActor*, Tongue*, s32);
s32 isActiveExplosion(Actor*);
void func_800382F4(Actor*);
void func_800383A0(Actor*);
void ActorInit_GreyAntSpawner(Actor*); // Grey Ant Spawner: Elisiah
void ActorTick_GreyAntSpawner(Actor*);
void ActorInit_GreyAnt(Actor*); // Grey Ant Function: Rainchu and Elisiah
void ActorTick_GreyAnt(void);
void func_80038990(Actor*); // Bullet-Hell Ant Spawner: Elisiah
void ActorInit_AntBulletHell(Actor*);
void ActorInit_AntTrio(Actor*); // Ant Trio Function: Elisiah
void ActorInit_RedAnt(Actor*);
void ActorInit_YellowAnt(Actor*);
void ActorInit_GreenAnt(Actor*); // Green Ant Function: Rainchu and Elisiah
void ActorInit_AntQueen(Actor*); // Ant Queen Function: Elisiah
void ActorInit_AntQueenDrone(Actor*);
void ActorInit_WhiteBombSnake(Actor*); // White Bomb Snake Function: Elisiah
void ActorInit_Grenade(Actor*); // GRENADE Function: Elisiah
void ActorInit_MissileSpawner(Actor*); // MISSILE Spawner: Auto-Decompile
void ActorInit_Missile(Actor*); // MISSILE Function: Elisiah
void ActorInit_Cannon(Actor*);
void ActorInit_Cannonball(Actor*);
void func_8003C8AC(Actor*);
void func_8003D574(Actor*);
void ActorTick_Explosion(Actor*);
void ActorInit_ChameleonBlackSpotSpawnner(Actor*); // Black Chameleon Projectile Spawner: Auto-Decompile
void ActorInit_ChameleonBlackSpot(Actor*);
void ActorTick_ChameleonBlackSpot(Actor*);
void ActorTick_Chomper(Actor*);
void ActorInit_SandCrab(Actor*);
void ActorInit_Vulture(Actor*); // VULTURE Function: Elisiah
void ActorInit_Arrows(Actor*); // ARROWS Function: Elisiah
void func_8003E368(Actor*); // BOULDER
void func_8003E62C(Actor*); // ARMADILLO Function: Elisiah
void func_8003E660(Actor*);
void func_8003FA38(Actor*, f32, f32, f32);
void func_8003FB04(Actor*); // POGO Function: Elisiah
void ActorTick_Unk22(s32);
void func_8003FEB4(Actor*); // UNK_23
void ActorTick_Unk23(s32);
void ActorInit_IceCreamSandwich(Actor*); // Ice Cream Sandwich Function: Elisiah

void ActorInit_ChocoKid(Actor*); // Training Room Choco Kid Function: Elisiah
void ActorTick_ChocoKid(Actor*);
void ActorInit_Unk1F(Actor*); // UNK_1F Function: Elisiah
void ActorTick_Unk1F(void);
void ActorInit_Popcorn(Actor*);
void ActorTick_Popcorn(Actor*);
void func_800405F8(Actor*); // Cake Boss Strwaberry Function: Elisiah
void func_80040CDC(Actor*); // UNK_28
void ActorTick_Unk28(s32);
void func_80040CEC(Actor*); // Cake Boss Choco Kid: Auto-Decompile
void ActorInit_CakeBoss(Actor*);
void ActorTick_MinigameActor(Actor*);
void ActorInit_CueBall(Actor*); // Cue Ball Actor: Elisiah
void ActorInit_BilliardBall(Actor*); // Billiards Ball
void ActorTick_BilliardBall(Actor*);
void Bowling_ResetPins(void);
void ActorInit_BowlingBall(Actor*); // Bowling Ball Function: Elisiah
void ActorInit_BowlingPin(Actor*); // Bowling Pins Function: Elisiah
void ActorInit_Unk2E(Actor*);
void ActorTick_Unk2E(void);
void func_800434F4(Actor*); // UNK_2F
void ActorTick_Unk2F(s32);
void ActorInit_FloatingObjects(Actor*);
void ActorTick_FloatingObjects(void);
void ActorInit_Cup(Actor*); // CUP Function: Elisiah
void ActorTick_Cup(void);
void ActorInit_Saucer(Actor*); // SAUCER Function: Elisiah
void ActorTick_Saucer(void);
void ActorInit_MetalSheet(Actor*); // Metal Sheet Function: Elisiah
void ActorTick_MetalSheet(void);
void ActorInit_Scroll(Actor*); // SCROLL Function: Elisiah
void ActorTick_Scroll(void);
void ActorInit_RNGRoomSpawner(Actor*); // RNG Room Spawner: Auto-Decompile
void ActorInit_Mirror(Actor*);
void ActorInit_BarrelFireSpawner(Actor*); // Barrel Jump FIRE Spawner: Auto-Decompile
void ActorInit_BarrelFire(Actor*); // Barrel Jump FIRE Actor: Elisiah
void ActorInit_FireSpitter(Actor*); // FIRE Spitter Function: Elisiah
void ActorTick_FireSpitter(void);
void ActorInit_Candles(Actor*); // CANDLES Function: Elisiah
void ActorTick_Candles(void);
void ActorInit_FireSpawner(Actor*); // FIRE Spawner: Elisiah
void ActorTick_FireSpawner(void);
void ActorInit_Fire(Actor*);
void ActorInit_Sandal(Actor*); // SANDAL Function: Elisiah
void ActorTick_Sandal(void);
void GhostBoss_SpawnArms(Actor*);
void ActorInit_GhostBoss(Actor*); // Pile of Books Function: Elisiah
s32 func_80044E80(Actor*, s32);
void func_80046DDC(Actor*);
void func_80046FB0(Actor*);
void ActorInit_GhostBossShot(Actor*);
void ActorInit_SpiderSpawner(Actor*); // SPIDER Spawner: Auto-Decompile
void ActorInit_Spider(Actor*); // SPIDER Function: Elisiah
void ActorInit_SpiderTrio(Actor*);
void func_8004769C(Actor*); // GOLEM Room SPIDER Spawner: Auto-Decompile
void func_800477C4(Actor*); // GOLEM?: Auto-Decompile
void ActorInit_Hedgehog(Actor*); // HEDGEHOG Function: Elisiah
void ActorInit_Fish(Actor*); // FISH Function: Elisiah
void func_800480EC(Actor*);
void func_800487D8(Actor*); // Lizard Kong Butterfly Spawner: Auto-Decompile
void func_800488C4(Actor*);
void ActorInit_LizardKong(Actor*);
void func_800489B0(Actor*);
void ActorInit_PopcornBucketSpawner(Actor*); // POPCORN Bucket Spawner: Auto-Decompile
void ActorInit_PopcornBucket(Actor*); // POPCORN Bucket Function: Elisiah
void ActorTick_PopcornBucket(void);
void ActorInit_Unk4E(Actor*);
void ActorTick_Unk4E(Actor*);
void ActorInit_ChocoKidSpawner(Actor*); // Choco Kid Spawner: Auto-Decompile
void ActorInit_SpawnedChocoKid(Actor*); // Choco Kid Function: Elisiah
void func_80049A44(Actor*);
void ActorInit_GreyAntSpawnerWrapper(Actor*); // GREY_ANT_SPAWNER_WRAPPER Function: Elisiah
void ActorTick_GreyAntSpawnerWrapper(Actor*);
void ActorInit_GreyAntWrapper(Actor*); // UNK_52 Function: Elisiah
void ActorTick_GreyAntWrapper(void);
void ActorInit_BattleModeSandCrabSpawner(Actor*); // Battle Mode Sand Crab Spawner: Auto-Decompile
void ActorInit_BattleModeSandCrab(Actor*); // Battle Mode Sand Crab Function: Elisiah
void ActorTick_BattleModeSandCrab(Actor*);
void ActorInit_BattleModeFireSpawner(Actor*); // BATTLE_MODE_FIRE_SPAWNER
void ActorInit_BattleModeFire(Actor*);
void ActorTick_BattleModeFire(Actor*);
void ActorInit_BattleModeSaucerSpawner(Actor*);
void ActorInit_BattleModeSaucer(Actor*); // Battle Mode SAUCER Function: Elisiah
void ActorInit_Unk59(Actor*); // UNK_59
void ActorInit_Unk5A(Actor*); // UNK_5A Function: Elisiah
void ActorInit_PowerUpSpawner(Actor*); // Power Up Spawner: Auto-Decompile
void ActorInit_FallingGreyAntSpawner(Actor*); // Falling Grey Ant Spawner Auto-Decompile
void ActorInit_FallingGreyAnt(Actor*); // Falling Grey Ant Function: Elisiah
void ActorInit_UnkFireSpawner(Actor*); // UNK_FIRE_SPAWNER
void ActorTick_PickupHeartFalling(Actor*);
void Actors_Tick(void);
void func_8004BA5C(s32);
s32 func_8004C374(u16*, u16*, s32);
void Controller_StartRead(void);
void Controller_Zero(ContMain*);
void Debug_NOOP(void);
void Debug_TestView(void);
void Effect_TypeAP_Init(void);
f32 Battle_CalcTableColumnWidths(u8, f32*, f32, f32);
void Battle_PlayEnvSounds(void);
void Battle_PrintNumber(f32, f32, f32, f32, s32, s32, s32); 
void Battle_PrintName(s32, f32);
void Battle_PrintHurry(void);
void func_8005423C(void);
void DummiedPrintf2(char*, ...);
void Rand_SetSeed(s32);
s32 Rand(void);
void DisableInput(void);
void EnableInput(void);
s32 func_80055C90(void);
s32 func_80055E5C(s32); // arg is controller #define
s32 func_80055EEC(s32);
s32 func_80055F10(s32, s32);
void func_80055FA4(void);
void func_80055FBC(s32);
void func_80056CDC(s32, s32);
void func_80056D14(unkStruct02*, s32, unkStruct02*, unkStruct02*);
void* func_80056D30(s32);
void func_80056DF4(unkStruct02*, unkStruct02*);
void func_80056EB4(void);
void* _malloc(s32);
s32 Free(void*);
void func_80056F48(s32, Tongue*, PlayerActor*, Camera*);
void func_80058748(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32);
s32 LoadSprite(s32); // uses "SPRITE_" #defines
s32 func_8009603C(s32, s32);
void printReset(void);
void FreeSprite(s32);
void func_8005AFA4(f32, f32, f32, f32);
void printUISprite(f32, f32, f32, f32, f32, f32, f32, f32, s32); 
void func_8005C9B8(void);
void func_8005CA38(void);
void func_800610A8(void);
void func_800610B8(void);
void func_800610E4(f32, f32);
void func_800611F8(f32, f32, f32, f32);
void func_8006122C(f32, f32);
void func_80061240(void);
void func_80061258(f32);
void func_80061264(f32);
void setPrimColor(u8, u8, u8, u8);
void setPrimColorCopy(s8, s8, s8, s8);
void func_800612D8(f32);
void func_800612E4(f32);
void func_800612F0(s32);
void func_800612FC(void);
void SetTextGradient(u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8);
void func_80061394(void);
void Effect_Init(void);
void Effect_TypeA_Init(f32, f32, f32, s32, s32);
void func_8006202C(void);
void func_800629C4(void);
void func_800629D4(void);
Effect* Effect_TypeC_Init(f32, f32, f32, f32, f32, f32, u8, u8, u8, u8, s32, s32);
Effect* Effect_TypeE_Init(f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
Effect* Effect_TypeF_Init(f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
Effect* func_80065CAC(f32);
void func_800667A8(void);
void func_800667B4(Effect*);
Effect* func_80068A88(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_80069858(Effect*, s32);
void Bowling_ResetScore(void);
void Bowling_DrawScoreCard(void*, void*);
void LockEyeChange(void);
void UnlockEyeChange(void);
void func_8006BA30(f32, f32, f32, f32, f32);
void func_8006BD58(f32, f32, s32, f32, s32);
void func_8006BE4C(f32, f32, f32, f32);
void func_8006C368(f32, f32, f32);
void LoadPlayerEyes(s32);
void FreePlayerEyes(s32);
u32 Effect_PlayerEyes_Init(s32, s32, f32, s32);
void SetPlayerContextEyes(s32, s32, s32);
void Effect_TypeZ_Create(f32, f32, f32, f32, f32, s32);
void func_8006F8D8(f32, f32, f32);
void func_80089BA0(void);
void Effect_TypeAN_Init(void);
void Effect_ControllerRumble_Init(void);
void SetTextGradientFromPaletteAlpha(s32, f32);
void SetTextGradientFromPalette(s32);
void Effect_TypeBC_Init(f32, f32, f32, f32, f32, f32);
void Effect_TypeAR_Init(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, EffectTypeAQArg7* arg7, s32 arg8, s32* arg9);
void Effect_TypeAQ_Init(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, EffectTypeAQArg7* arg7, s32 arg8, s32* arg9);
void Effect_TypeBJ_Init(f32, f32, f32, f32, f32);
Gfx* func_8007ABDC(Gfx*);
void func_8007ABE4(void);
void func_8007ABF8(bf8*);
void func_8007AC2C(s32*);
u64 func_8007ADDC(s32);
void func_8007AF30(void);
void func_8007AF58(void);
void Rumble_AddTime(s32, s32);
void func_8007B480(f32, f32, f32, f32, f32, f32);
void func_8007B4CC(f32, f32, f32, f32, f32, f32);
void func_8007B518(f32);
void func_8007C494(void);
void func_8007C4C8(void);
s32 func_8007C500(void);
void func_8007CDBC(void);
void func_8007DFDC(f32, f32, f32, f32);
void func_8007E5E8(void);
void func_8007E684(f32, f32, f32, f32, f32);
void func_8007E714(f32);
void func_8002D080(void);
s32 SaveData_RecordChecksum(void);
void Porocess_Mode0(void);
void SaveData_ClearRecords(void);
void SaveData_LoadRecords(u8*);
void Process_StageSelect(void);
void FileWork(void);
void func_8009C904(void);
void func_800A9F84(void);
void func_800AA3F0(void);
void func_800ADE70(void);
void func_800AE4AC(void);
void CalculateBoundingRectFromVectors(Vec3f,Vec3f,Rect3D*);
void func_800A2BDC(void);
void Process_BattleMenu(void);
void func_800A4320(void);
void Process_GameOver(void);
void Process_JSSLogo(void);
void Process_PreCredits(void);
void func_800A07E0(void);
void Process_Ranking(void);
void func_800557F8(void);
void Process_Boot(void);
void Process_SunsoftLogo(void);
void DummiedPrintf(char*, ...);
void PrintTextWrapper(f32, f32, f32, f32, char*, s32);
s32 PrintText(f32, f32, f32, f32, f32, f32, char*, s32);
void func_80080F38(f32, f32, f32, f32, f32, f32, u8, u8, u8, s32);
s32 func_800836FC(f32, f32, s32, s32);
void func_80083F08(void);
void func_80083F10(void);
void func_80084788(void);
Gfx* func_800849D4(Gfx*);
void func_800849DC(s32 arg0, Tongue* playerTongue, PlayerActor* player, Camera* unk);
void schedproc(s32 arg0);
void Sched_SetGfxTask(OSTask*, s32);
void Sched_SetAudioTask(OSTask*);
void Audio_Init(void);
s32 audioproc(void);
unk0* func_80086EB4(s32);
s32 func_80087290(unk0*);
s32 StopSoundEffect(s32);
s32 PlaySoundEffect(s32 id, f32* posX, f32* posY, f32* posZ, s32 arg4, s32 flag);
s32 func_80088198(void);
s32 func_80088698(s32);
s32 PlayBGM(s32);
s32 StopBGM(void);
void func_8008C094(void);
void func_8008C35C(Gfx**);
s32 Actor_PlaySound(Actor*, s32, s32, s32);
void func_8008C3F0(Actor*, s32, s32);
s32 func_8008C438(void);
void CTTask_Unlink(CTTask*);
void CTTaskList_Init(void);
void func_8008ECB8(void);
void func_8008F114(void);
void func_8008F16C(void);
char* parseIntToHex(s32, s32, char*);
void SetProcessType(s32);
void func_8008FDF8(void);
void func_800C08B8(Vec3f*, PlayerActor*, Door*);
void func_800D34CC(void);
void func_800BFCD0(void);
void func_800C0760(s32);
void func_800935F8(s32);
void func_800945E4(CTTask*);
void func_80094E0C(CTTask*);
s32 LoadStageByIndex(s32);
void func_80098F50(CTTask*);
void func_80099570(CTTask*);
void Task_LoadSaveFileAt(CTTask*);
void func_8009BDE4(CTTask*);
void PlayJungleExtSfx(void);
void Audio_RomCopy(u32 devAddr, void* vAddr, u32 size);
void PlayJungleExtSfxWrapper(void);
void func_8008A2EC(void);
void func_8008AD30(void);
void func_8008D060(void);
void Timing_WaitForNextFrame(void);
s32 SaveData_UpdateRecords(void);
void DummiedPrintf(char* arg0, ...);
s32 func_800A73EC(void*, void*, s32, s32);
s32 DMA_Copy(void* romAddr, void* ramAddr, s32 size);
s32 func_800A72E8(s32);
void func_800AAAC8(void);
s32 AddSoundEffect(s32, f32*, f32*, f32*, s32, s32);
void func_800A1EC4(void);
void func_800A54EC(CTTask*);
s32 DMAStruct_Print(void);
s32 IfRectsIntersect(Rect3D* arg0, Rect3D* arg1);
s32 func_800B3540(s32);

void InitField(void);
void func_800C56D4(PlayerActor*);
s32 Random(s32, s32);
f32 RandomF(void);
f32 CalculateAngleOfVector(f32, f32);
f32 InterpolateAndClampArcSin(f32);
f32 AngleFromArcSin(f32);
s32 IsPointInRect(Vec3f, Rect3D*);
void AdjustRectToVec3(Rect3D* r, Vec3f vec);
Vec3f* Vec3f_Lerp(Vec3f*, Vec3f, Vec3f, f32);
void func_800C8F00(void);
void func_800C9504(void);
void CalcEnemyNextPosition(Actor*);
s32 func_800CF080(s32, f32);
void func_800CFDB8(PlayerActor*);
void func_800CFF64(PlayerActor*);

void func_800D0708(PlayerActor*, Tongue*); //PLAYER PROCESS
void DummiedPrintf3(char*, ...);
void func_800D75B4(Poly*, s32);
void OnlyCheckPolyInfoLevel(Poly*, s32, char*);
void func_800D79E4(Poly*, s32);
void Vec3f_Zero(Vec3f*);
f32 Vec3f_Normalize(Vec3f*);
void func_800D87A4(Collider* arg0, s32 arg1); 
void func_800D99D0(s32*, s32, void*, s32, s32*, s32);
void func_800D9B20(s32*);
//void func_800DA510(s32*, s32, s32, s32, s32, s32, s32*);
void func_800DA620(s32*, s32, s32);
s32 func_800DB820(OSMesgQueue*);
void func_800DC550(void);
void func_800DCA90(s32, s32);
void func_800DCB10(s32, s32);
void _bzero(void*, s32);
void CalcJumpingEnemyNext(Actor*);
void CalcWalkingEnemyNext(Actor*);
void func_800CBD24(Actor*);
void func_800CCDCC(Actor*);
void func_800CCE4C(Actor*);
void func_800CEB10(Actor*);
void Debug_ZeroInt(void);
void PrintNumberWR(f32, f32, f32, f32, f32, s32, s32);
void printNumber(f32, f32, f32, f32, f32, s32, s32);
void func_800C1458(s32);

//funcs that were in 8add0.h that are in other c's
//84e0.c
void func_800314E4(Actor*);
void pickup_collide_func(s32 actorIndex);
void func_80036D74(PlayerActor* arg0, Tongue* arg1);
//poly.c
void func_800CFDC8(PlayerActor*);
void func_800D3854(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800D69D0(s32, PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void ClearPolygon(void);
//sprite.c
void func_8007633C(f32, f32, f32, f32);
void func_80078294(f32, f32, f32, f32, s32);


//funcs from 8add0 that are called from other c's
//b39a0.c
s32 func_800B34D0(s32);
//5ff30.c & debug.c
void func_800C29D8(s32);

//funcs that were in 5ff30.h that are in other c's
//sprite.c
void func_80059F28(f32, f32, f32, f32, f32, f32, f32, f32, s32);
void func_80080864(f32, f32, f32, f32, f32, f32, char*, s32);
void func_8007B174(void);
void Rumble_StopAll(void);
void func_8005C454(f32 arg0, f32 arg1, f32 arg2, s32 arg3);
Gfx* func_8005F408(Gfx* gfxPos);
Gfx* func_8005CA44(Gfx* gfxPos);
Gfx* func_80084884(Gfx* arg0);
void Controller_ParseJoystick(ContMain* conts);
void func_80084A04(void);
void func_80059254(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void func_800598C4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void loadBossDeadEyes(s32, CTTask*);
void func_8005747C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);
Effect* Effect_TypeK_Init(f32 duration, f32 arg1, f32 arg2);
void func_800747E0(f32 arg0, f32 arg1, u32 arg2, f32 arg3, f32 arg4, f32 arg5, u32 arg6, u8* arg7, s32 arg8, u32* arg9);
void func_800743BC(f32, f32, f32, f32, f32, f32, u32, u32, s32, u32*);
s32 func_80082714(f32, f32, f32, s32);
void func_8007E6BC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5, u8 arg6);
//1050.c
void DemoGfx_DrawFrame(Gfx* arg0, graphicStruct* arg1, s32 fbIndex);
void DemoGfx_SwapFB(s32 fbIndex);
void Video_SetTask(graphicStruct* arg0, Gfx* arg1, s32 arg2);
//298D0.c
void func_8004E784(ContMain* arg0, s32 arg1, s32* arg2, ContMain* arg3);
//8ADD0.c
void func_800B4408(u8*, s16*);
//84e0.c
void func_8004DDE0(void);
void Effect_BossDeadEyes_Init(s32 arg0);

//funcs from 5ff30 that are called from other c's
//battle.c
void func_800A0D90(void);

#endif
