#ifndef FUNCTIONS_JP_H
#define FUNCTIONS_JP_H

f32 sinf(f32);
f32 cosf(f32);
f32 tanf(f32);
f32 __sinf(f32);
f32 __sqrtf(f32);
f32 __cosf(f32);
void wrapDegrees(f32*);
void Memory_Free(void*);

void CartesianToSpherical(Vec3f, f32*, f32*, f32*);
s32 Controller_Init(void);
extern s32 osMotorInit(OSMesgQueue *, OSPfs *, int);
void bootproc(void);
void idleproc(void*);
void mainproc(void*);
void func_80025EE8(void);
Gfx* func_8002C900(void*, s32);
Gfx* func_8002CCA0(void*, s32);
void func_8002CCDC(void);
void func_8002CD04(void);
void func_8002CD94(s32);
f32 func_8002D0E0(f32, f32);
void func_8002D0F4(f32*);
void func_8002D148(f32*, f32*, f32);
f32 CalcAngleBetween2DPoints(f32, f32, f32, f32);
f32 ReflectAngleToUpperSemicircle(f32);
s32 IsAngleWithinTolerance(f32, f32, f32);
s32 func_8002D2A0(f32, f32);
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
void func_8002F54C(f32, playerActor*, s32);
void func_8002F568(void);
f32 func_8002F5C4(s32, s32, s32, s32);
s32 func_8002F6DC(f32*, f32);
void func_8002F7F0(void);
void func_8002F884(s32, s32);
void func_8002F960(Tongue*);
void func_8002F9BC(s32);

s32 func_80030DCC(f32, f32, s32);
void func_800311C8(Actor*);
void func_800312B0(s32);
void func_800312FC(Actor*, f32);
void func_800313BC(s32, f32); //actor kill
void func_80031518(Actor*);
void func_80031DB0(playerActor*, Tongue*, s32);
s32 isActiveExplosion(Actor*);
void func_800382F4(Actor*);
void func_800383A0(Actor*);
void func_800383C0(Actor*); // Grey Ant Spawner: Elisiah
void func_800383E4(void);
void ActorInit_AntGrey(Actor*); // Grey Ant Function: Rainchu and Elisiah
void func_80038574(void);
void func_80038990(Actor*); // Bullet-Hell Ant Spawner: Elisiah
void ActorInit_AntBulletHell(Actor*);
void func_80038F70(Actor*); // Ant Trio Function: Elisiah
void ActorInit_AntRed(Actor*);
void ActorInit_AntYellow(Actor*);
void ActorInit_AntGreen(Actor*); // Green Ant Function: Rainchu and Elisiah
void ActorInit_AntQueen(Actor*); // Ant Queen Function: Elisiah
void ActorInit_AntQueenDrone(Actor*);
void func_8003BA38(Actor*); // White Bomb Snake Function: Elisiah
void func_8003BC8C(Actor*); // Grenade Function: Elisiah
void func_8003BD98(Actor*); // Missile Spawner: Auto-Decompile
void func_8003BEE8(Actor*); // Missile Function: Elisiah
void func_8003C20C(Actor*);
void func_8003C4B8(Actor*);
void func_8003C8AC(Actor*);
void func_8003D574(Actor*);
void ActorTick_Explosion(Actor*);
void ActorInit_ChameleonBlackSpotSpawnner(Actor*); // Black Chameleon Projectile Spawner: Auto-Decompile
void ActorInit_ChameleonBlackSpot(Actor*);
void ActorTick_ChameleonBlackSpot(Actor*);
void func_8003D998(Actor*);
void func_8003DE04(Actor*);
void func_8003DFB4(Actor*); // Vulture Function: Elisiah
void func_8003E30C(Actor*); // Arrows Function: Elisiah
void func_8003E368(Actor*); // boulder
void func_8003E62C(Actor*); // Armadillo Function: Elisiah
void func_8003E660(Actor*);
void func_8003FA38(Actor*, f32, f32, f32);
void func_8003FB04(Actor*); // Pogo Function: Elisiah
void func_8003FEAC(s32);
void func_8003FEB4(Actor*); // unk_23
void func_8003FEBC(s32);
void func_8003FEC4(Actor*); // Ice Cream Sandwich Function: Elisiah

void func_80040068(Actor*); // Training Room Choco Kid Function: Elisiah
void ChocoKidMovement(Actor*);
void func_800401E8(Actor*); // unk_1F Function: Elisiah
void func_80040214(void);
void func_800404D8(Actor*);
void func_80040590(Actor*);
void func_800405F8(Actor*); // Cake Boss Strwaberry Function: Elisiah
void func_80040CDC(Actor*); // unk_28
void ActorTick_28(s32);
void func_80040CEC(Actor*); // Cake Boss Choco Kid: Auto-Decompile
void ActorInit_CakeBoss(Actor*);
void ActorTick_MinigameActor(Actor*);
void ActorInit_CueBall(Actor*); // Cue Ball Actor: Elisiah
void ActorInit_BilliardBall(Actor*); // Billiards Ball
void ActorTick_BilliardBall(Actor*);
void Bowling_ResetPins(void);
void ActorInit_BowlingBall(Actor*); // Bowling Ball Function: Elisiah
void ActorInit_BowlingPin(Actor*); // Bowling Pins Function: Elisiah
void func_800431E8(Actor*);
void func_800431FC(void);
void func_800434F4(Actor*); // unk_2F
void func_800434FC(s32);
void func_80043504(Actor*);
void func_80043558(void);
void func_80043998(Actor*); // Cup Function: Elisiah
void func_800439B8(void);
void func_800439D8(Actor*); // Saucer Function: Elisiah
void func_800439F8(void);
void func_80043A18(Actor*); // Metal Sheet Function: Elisiah
void func_80043A38(void);
void func_80043A58(Actor*); // Scroll Function: Elisiah
void func_80043A78(void);
void func_80043A98(Actor*); // RNG Room Spawner: Auto-Decompile
void func_80043C80(Actor*);
void func_80043FE8(Actor*); // Barrel Jump Fire Spawner: Auto-Decompile
void func_800440FC(Actor*); // Barrel Jump Fire Actor: Elisiah
void func_800442E0(Actor*); // Fire Spitter Function: Elisiah
void func_800442F0(void);
void func_80044504(Actor*); // Candles Function: Elisiah
void func_80044524(void);
void func_80044544(Actor*); // Fire Spawner: Elisiah
void func_80044564(void);
void func_80044584(Actor*);
void func_80044708(Actor*); // Sandal Function: Elisiah
void func_80044728(void);
void GhostBoss_SpawnArms(Actor*);
void ActtorInit_GhostBoss(Actor*); // Pile of Books Function: Elisiah
s32 func_80044E80(Actor*, s32);
void func_80046DDC(Actor*);
void func_80046FB0(Actor*);
void ActorInit_GhostBossShot(Actor*);
void func_8004718C(Actor*); // Spider Spawner: Auto-Decompile
void func_80047350(Actor*); // Spider Function: Elisiah
void func_80047520(Actor*);
void func_8004769C(Actor*); // Golem Room Spider Spawner: Auto-Decompile
void func_800477C4(Actor*); // Golem?: Auto-Decompile
void func_800479CC(Actor*); // Hedgehog Function: Elisiah
void func_80047C04(Actor*); // Fish Function: Elisiah
void func_800480EC(Actor*);
void func_800487D8(Actor*); // Lizard Kong Butterfly Spawner: Auto-Decompile
void func_800488C4(Actor*);
void ActorInit_LizardKong(Actor*);
void func_800489B0(Actor*);
void func_80049780(Actor*); // Popcorn Bucket Spawner: Auto-Decompile
void func_800498B4(Actor*); // Popcorn Bucket Function: Elisiah
void func_800498D4(void);
void func_800498F4(Actor*);
void func_80049914(Actor*);
void func_80049934(Actor*); // Choco Kid Spawner: Auto-Decompile
void func_80049A24(Actor*); // Choco Kid Function: Elisiah
void func_80049A44(Actor*);
void func_80049A64(Actor*); // unk_51 Function: Elisiah
void func_80049A84(void);
void func_80049AA4(Actor*); // unk_52 Function: Elisiah
void func_80049AC4(void);
void func_80049AE4(Actor*); // Battle Mode Sand Crab Spawner: Auto-Decompile
void func_80049C34(Actor*); // Battle Mode Sand Crab Function: Elisiah
void func_80049C64(Actor*);
void func_80049D0C(Actor*); // unk_55
void func_80049F04(Actor*);
void func_80049F0C(s32);
void func_80049F14(Actor*);
void func_8004A0A0(Actor*); // Battle Mode Saucer Function: Elisiah
void func_8004A184(Actor*); // unk_59
void func_8004A310(Actor*); // unk_5A Function: Elisiah
void ActorInit_PowerUpSpawner(Actor*); // Power Up Spawner: Auto-Decompile
void func_8004A544(Actor*); // Falling Grey Ant Spawner Auto-Decompile
void func_8004A658(Actor*); // Falling Grey Ant Function: Elisiah
void func_8004AB00(Actor*); // unk_5E
void ActorTick_PickupHeartFalling(Actor*);
void Actors_Tick(void);
void func_8004BA5C(s32);
s32 func_8004C374(u16*, u16*, s32);
void Controller_StartRead(void);
void Controller_Zero(contMain*);
void Debug_NOOP(void);
void Debug_TestView(void);
void func_80073FD8(void);
f32 func_80051678(u8, f32*, f32, f32);
void func_8005171C(void);
void func_800523E4(f32, f32, f32, f32, s32, s32, s32); 
void func_800525E8(s32, f32);
void Multiplayer_PrintHurry(void);
void func_8005423C(void);
void DummiedPrintf2(char*, ...);
void Rand_SetSeed(s32);
s32 Rand(void);
void func_80055C74(void);
void func_80055C80(void);
s32 func_80055C90(void);
s32 func_80055E5C(s32); // arg is controller #define
void func_80055EEC(s32);
void func_80055F10(s32, s32);
void func_80055FA4(void);
void func_80055FBC(s32);
void func_80056CDC(s32, s32);
void func_80056D14(unkStruct02*, s32, unkStruct02*, unkStruct02*);
void* func_80056D30(s32);
void func_80056DF4(unkStruct02*, unkStruct02*);
void func_80056EB4(void);
void* mallloc(s32);
s32 free(void*);
void func_80056F48(s32, Tongue*, playerActor*, Camera*);
void func_80058748(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32);
s32 loadSprite(s32); // uses "SPRITE_" #defines
s32 func_8009603C(s32, s32);
void printReset(void);
void freeSprite(s32);
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
void func_800613D0(aa1*);
aa1* aa1_Alloc(s32, s32, void*);
void aa1_Free(aa1*);
void aa1_InitHead(void);
void func_800619F8(f32, f32, f32, s32, s32);
void func_8006202C(void);
void func_8006266C(d8006266c*);
void func_800629C4(void);
void func_800629D4(void);
void func_800638AC(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
aa1* func_80064F94(f32, f32, f32, s32, f32, f32, f32, f32, s32, s32);
void func_80065088(void);
aa1* func_8006526C(f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_80065C00(void);
aa1* func_80065CAC(f32);
void func_800667A8(void);
void func_800667B4(aa1*);
aa1* func_80068A88(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_80069858(aa1*, s32);
void Bowling_ResetScore(void);
void Bowling_DrawScoreCard(void*, void*);
void lockEyeChange(void);
void unlockEyeChange(void);
void func_8006BA30(f32, f32, f32, f32, f32);
void func_8006BD58(f32, f32, s32, f32, s32);
void func_8006BE4C(f32, f32, f32, f32);
void func_8006C368(f32, f32, f32);
void loadPlayerEyes(s32);
void freePlayerEyes(s32);
u32 initPlayerEyeController(s32, s32, f32, s32);
void setPlayerContextEyes(s32, s32, s32);
void func_8006E16C(f32, f32, f32, f32, f32, s32);
void func_8006F8D8(f32, f32, f32);
void func_80089BA0(void);
void func_80072B1C(void*, void*);
void func_80072D34(void);
void func_80072D80(void);
void aa1_checkControllerRumble(void*, void*);
void checkControllerRumble(void);
void func_80073C3C(void);
void SetTextGradientFromPaletteAlpha(s32, f32);
void SetTextGradientFromPalette(s32);
void func_800786D8(f32, f32, f32, f32, s32, s32, f32, f32, f32, f32, u8, u8, u8);
void func_80078AD8(f32, f32, f32, f32, f32, f32);
void func_80078D00(f32, f32, f32, f32, s32, f32, f32);
void func_80079150(f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, s32);
void func_80079FC4(void);
void func_8007A25C(f32, f32, f32, f32, f32);
s32 func_8007ABDC(s32);
void func_8007ABE4(void);
void func_8007ABF8(bf8*);
void func_8007AC2C(s32*);
u64 func_8007ADDC(s32);
void func_8007AF30(void);
void func_8007AF58(void);
void Rumble_AddTime(s32, s32, s32);
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
void func_800AEAA8(Vec3f,Vec3f,Rect*);
void func_800A2BDC(void);
void Process_BattleMenu(void);
void func_800A4320(void);
void Process_GameOver(void);
void Process_JSSLogo(void);
void Process_PreCredits(void);
void func_800A1D38(void);
void func_800A6DD8(void);
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
void func_800849DC(s32 arg0, Tongue* playerTongue, playerActor* player, Camera* unk);
s32 videoproc(void);
void func_80084F80(OSTask*, s32);
void func_80084FC0(s32);
void Audio_Init(void);
s32 audioproc(void);
unk0* func_80086EB4(s32);
s32 func_80087290(unk0*);
s32 func_80087358(s32);
s32 playSoundEffect(s32 id, f32* posX, f32* posY, f32* posZ, s32 arg4, s32 flag);
s32 func_80088198(void);
s32 func_80088698(s32);
s32 playBGM(s32);
s32 BGMStop(void);
void func_8008C094(void);
void func_8008C35C(s32);
s32 Actor_PlaySound(Actor*, s32, s32, s32);
void func_8008C3F0(Actor*, s32, s32);
s32 func_8008C438(void);
void Task_Unlink(CTTask*);
void TaskInit(void);
void func_8008ECB8(void);
void func_8008F114(void);
void func_8008F16C(void);
char* parseIntToHex(s32, s32, char*);
void setProcessType(s32);
void func_8008FDF8(void);
void func_800C08B8(Vec3f*, playerActor*, Door*);
void ChameleonFromDoor(playerActor*, s32, s32, s32, s32);
void func_800D34CC(void);
void func_800BFCD0(void);
void func_800C0760(s32);
void func_800928F0(s32);
void func_800935F8(s32);
void func_80094220(s32);
void func_800945E4(CTTask*);
void func_80094E0C(s32);
s32 loadStageByIndex(s32);
void func_800983C8(void);
void func_80098F50(CTTask*);
void func_80099570(CTTask*);
void Task_LoadSaveFileAt(CTTask*);
void func_8009BDE4(CTTask*);
void func_8009B120(s32);
void func_8009B45C(s32);
void func_8008A208(void);
void Audio_RomCopy(u32 devAddr, void* vAddr, u32 size);
void func_8008A2B0(void);
void func_8008A2EC(void);
void func_8008AD30(void);
void func_8008D060(void);
void func_8008C584(void);
s32 SaveData_UpdateRecords(void);
void DummiedPrintf(char* arg0, ...);
s32 func_800A73EC(void*, void*, s32, s32);
s32 func_800B3FFC(unkSpriteStruct5*, s32);
void func_800B402C(unkSpriteStruct*, s32, s32);
s32 dma_copy(void* romAddr, void* ramAddr, s32 size);
s32 func_800A72E8(s32);
void func_800AAAC8(void);
s32 addSoundEffect(u8, s32, s32, s32, s32, s32);
void func_800A10E8(s32);
void func_800A1EC4(void);
void func_800A54EC(s32);
s32 DMAStruct_Print(void);

s32 ifRectsIntersect(Rect* arg0, Rect* arg1);

s32 isBossID(s32);
s32 func_800B2510(void);
s32 func_800B34D0(s32);
s32 func_800B3540(s32);
void func_800B5600(void);
void func_800B56D4(f32, f32);
void func_800BE2C0(void);

void InitField(void);
void func_800C54F8(Vec2s*, s32*);
void func_800C5508(playerActor*);
void func_800C5538(playerActor*);
void func_800C56D4(playerActor*);
void func_800C88AC(void);
s32 Random(s32, s32);
f32 RandomF(void);
f32 CalculateAngleOfVector(f32, f32);
f32 InterpolateAndClampArcSin(f32);
f32 AngleFromArcSin(f32);
void func_800B35FC(s32);
s32 isPointInRect(Vec3f, Rect*);
void func_800AE770(Rect* r, Vec3f vec);
Vec3f* Vec3f_Lerp(Vec3f*, Vec3f, Vec3f, f32);
f32 func_800B2308(f32, s32);
void func_800C8F00(void);
void func_800C9504(void);
void CalcEnemyNextPosition(Actor*);
s32 func_800CF080(s32, f32);
void func_800CFDB8(playerActor*);
void func_800CFF64(playerActor*);

void func_800D0708(playerActor*, Tongue*); //PLAYER PROCESS
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
void func_800DC920(void*);
void func_800DC950(void*, void*);
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
void printNumberWR(f32, f32, f32, f32, f32, s32, s32);
void printNumber(f32, f32, f32, f32, f32, s32, s32);
void func_800C1458(s32);
void func_800C29D8(s32);
#endif
