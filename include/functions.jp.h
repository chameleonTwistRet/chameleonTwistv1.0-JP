#ifndef FUNCTIONS_JP_H
#define FUNCTIONS_JP_H

f32 sinf(f32);
f32 cosf(f32);
f32 tanf(f32);
f32 __sinf(f32);
f32 __sqrtf(f32);
f32 __cosf(f32);
void normalizeDegrees(f32*);
void leoDrive_reset(void);

void func_80025C50(void);
void func_80025CB8(void*);
void func_80025D80(void*);
void func_80025EE8(void);
s32 func_8002C900(void);
s32 func_8002CCA0(void);
void func_8002CCDC(void);
void func_8002CD94(s32);
f32 func_8002D0E0(f32, f32);
void func_8002D0F4(f32*);
void func_8002D148(f32*, f32*, f32);
f32 func_8002D1CC(f32, f32, f32, f32);
f32 func_8002D214(f32);
s32 func_8002D258(f32, f32, f32);
s32 func_8002D2A0(f32, f32);
s32 func_8002D328(f32, f32);
s32 func_8002D36C(f32*, f32, f32);
void func_8002D434(f32*, f32*, f32, f32, f32);
void func_8002D550(f32*, f32*, f32, f32, f32);
void func_8002D644(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32);
s32 func_8002DE30(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32);
void func_8002E04C(s32, f32, f32, f32);
void func_8002E0CC(void);
void func_8002F3D4(void);
void func_8002F528(s32);
void func_8002F54C(f32, playerActor*, s32);
void func_8002F568(void);
void func_8002F7F0(void);
void func_8002F884(s32, s32);
void func_8002F960(tongue*);
void func_8002F9BC(s32);
s32 func_80030DCC(f32, f32, s32);
void func_800312B0(s32);
void func_80031518(void);
void func_80031DB0(playerActor*, tongue*, s32);
void func_800382F4(Actor*);
void func_800383A0(void);
void func_800383C0(Actor*); // Grey Ant Spawner: Elisiah
void func_800383E4(void);
void func_80038510(Actor*); // Grey Ant Function: Rainchu and Elisiah
void func_80038574(void);
void func_80038990(Actor*); // Bullet-Hell Ant Spawner: Elisiah
void func_80038AE0(Actor*);
void func_80038F70(Actor*); // Ant Trio Function: Elisiah
void func_80039368(Actor*);
void func_800399A0(Actor*);
void func_8003A1B0(Actor*); // Green Ant Function: Rainchu and Elisiah
void func_8003A3F0(Actor*); // Ant Queen Function: Elisiah
void func_8003B894(Actor*);
void func_8003BA38(Actor*); // White Bomb Snake Function: Elisiah
void func_8003BC8C(Actor*); // Grenade Function: Elisiah
void func_8003BD98(Actor*); // Missile Spawner: Auto-Decompile
void func_8003BEE8(Actor*); // Missile Function: Elisiah
void func_8003C20C(Actor*);
void func_8003C4B8(Actor*);
void func_8003C8AC(Actor*);
void func_8003D574(Actor*);
void func_8003D598(Actor*);
void func_8003D6A4(Actor*); // Black Chameleon Projectile Spawner: Auto-Decompile
void func_8003D908(Actor*);
void func_8003D998(Actor*);
void func_8003DE04(Actor*);
void func_8003DFB4(Actor*); // Vulture Function: Elisiah
void func_8003E30C(Actor*); // Arrows Function: Elisiah
void func_8003E368(Actor*); // boulder
void func_8003E62C(Actor*); // Armadillo Function: Elisiah
void func_8003FA38(Actor*, f32, f32, f32);
void func_8003FB04(Actor*); // Pogo Function: Elisiah
void func_8003FEAC(s32);
void func_8003FEB4(Actor*); // unk_23
void func_8003FEBC(s32);
void func_8003FEC4(Actor*); // Ice Cream Sandwich Function: Elisiah

void func_80040068(Actor*); // Training Room Choco Kid Function: Elisiah
void func_800400C8(void);
void func_800401E8(Actor*); // unk_1F Function: Elisiah
void func_80040214(void);
void func_800404D8(Actor*);
void func_80040590(void);
void func_800405F8(Actor*); // Cake Boss Strwaberry Function: Elisiah
void func_80040CDC(Actor*); // unk_28
void func_80040CE4(s32);
void func_80040CEC(Actor*); // Cake Boss Choco Kid: Auto-Decompile
void func_80041050(Actor*);
void func_8004237C(Actor*); // Cue Ball Actor: Elisiah
void func_8004259C(Actor*); // Billiards Ball
void func_8004263C(void);
void func_80042AFC(Actor*); // Bowling Ball Function: Elisiah
void func_80042FB4(Actor*); // Bowling Pins Function: Elisiah
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
void func_80044748(Actor*);
void func_80044878(Actor*); // Pile of Books Function: Elisiah
void func_80046DDC(Actor*);
void func_80046FB0(Actor*);
void func_8004709C(Actor*);
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
void func_80048A68(Actor*);
void func_800489B0(Actor*);
void func_80049780(Actor*); // Popcorn Bucket Spawner: Auto-Decompile
void func_800498B4(Actor*); // Popcorn Bucket Function: Elisiah
void func_800498D4(void);
void func_800498F4(Actor*);
void func_80049914(void);
void func_80049934(Actor*); // Choco Kid Spawner: Auto-Decompile
void func_80049A24(Actor*); // Choco Kid Function: Elisiah
void func_80049A44(void);
void func_80049A64(Actor*); // unk_51 Function: Elisiah
void func_80049A84(void);
void func_80049AA4(Actor*); // unk_52 Function: Elisiah
void func_80049AC4(void);
void func_80049AE4(Actor*); // Battle Mode Sand Crab Spawner: Auto-Decompile
void func_80049C34(Actor*); // Battle Mode Sand Crab Function: Elisiah
void func_80049D0C(Actor*); // unk_55
void func_80049F04(Actor*);
void func_80049F0C(s32);
void func_80049F14(Actor*);
void func_8004A0A0(Actor*); // Battle Mode Saucer Function: Elisiah
void func_8004A184(Actor*); // unk_59
void func_8004A310(Actor*); // unk_5A Function: Elisiah
void func_8004A39C(Actor*); // Power Up Spawner: Auto-Decompile
void func_8004A544(Actor*); // Falling Grey Ant Spawner Auto-Decompile
void func_8004A658(Actor*); // Falling Grey Ant Function: Elisiah
void func_8004AB00(Actor*); // unk_5E
void func_8004AD2C(void);
void func_8004BA5C(s32);
s32 func_8004C374(u16*, u16*, s32);
void func_8004E73C(void);
void func_8004E760(arg*);
void func_8004ECA8(void);
void func_8004FFFC(void);

f32 func_80051678(s32, f32*, f32, f32);
void func_8005171C(void);
void func_800523E4(f32, f32, f32, f32, s32, s32, s32); 
void func_800525E8(s32, f32);
void func_800538D0(void);
void func_8005423C(void);
void func_80055BB0(char*);
void func_80055BCC(s32);
s32 func_80055BD8(void);
void func_80055C74(void);
void func_80055C80(void);
s32 func_80055C90(void);
s32 func_80055E5C(s32);
void func_80055EEC(s32);
void func_80055F10(s32, s32);
void func_80055FA4(void);
void func_80055FBC(s32);
void func_80056CDC(s32, s32);
void func_80056D14(unkStruct02*, s32, unkStruct02*, unkStruct02*);
void* func_80056D30(s32);
void func_80056DF4(unkStruct02*, unkStruct02*);
void func_80056EB4(void);
void* func_80056EE4(s32);
s32 func_80056F24(void);
void func_80056F48(void);
u8 func_80057010(s32);
void func_800573BC(void);
void func_80057334(s32);
void func_8005AFA4(f32, f32, f32, f32);
void func_8005AFD0(f32, f32, f32, f32, f32, f32, f32, f32, s32); 
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
void func_80061270(u8, u8, u8, u8);
void func_800612A4(s8, s8, s8, s8);
void func_800612D8(f32);
void func_800612E4(f32);
void func_800612F0(s32);
void func_800612FC(void);
void func_80061308(u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8, u8);
void func_80061394(void);
void func_800613D0(arb*);
aa1* func_800613EC(s32, s32, void*);
void func_800615A4(void);
void func_8006202C(void);
void func_8006266C(argd8006266c*);
void func_800629C4(void);
void func_800629D4(void);
void func_80065088(void);
aa1* func_8006526C(f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_800667A8(void);
void func_800667B4(aaaaa*);
void func_8006A74C(void);
void func_8006BA14(void);
void func_8006BA24(void);
void func_8006CB34(s32);
void func_8006CBA8(s32);
void func_8006D598(s32, s32, s32);
void func_8006E16C(f32, f32, f32, s32, f32, s32);
void func_8006F8D8(f32, f32, f32);


void func_800735A8(void);
void func_80076548(s32, f32);
void func_80076884(s32);
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
void func_8007B314(s32, s32, s32);
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


void func_800803F0(f32, f32, f32, f32, char*, s32);
s32 func_80080430(f32, f32, f32, f32, f32, f32, char*, s32);
void func_80083F08(void);
void func_80083F10(void);
void func_80084788(void);
s32 func_800849D4(s32);
void func_800849DC(s32);
s32 func_80084B30(void);
void func_80084F80(s32, s32);
void func_80084FC0(s32);
void func_80085D98(void);
s32 func_80086710(void);
s32 func_80086EB4(void);
s32 func_80087290(s32);
s32 func_80087358(void);
s32 func_80087ED0(s32, s32, s32, s32, s32, s32);
void func_80088198(void);
s32 func_80088698(void);
u64 func_8008BD98(s16);
void func_8008BEDC(void);
void func_8008C094(void);
void func_8008C35C(s32);
s32 func_8008C364(s32, s32, s32, s32);
void func_8008C3F0(s32, s32, s32);
s32 func_8008C438(void);
void func_8008CDC4(void);
void func_8008F114(void);
void func_8008F16C(void);
char* func_8008FA44(s32, s32, char*);
void func_8008FD04(s32);
void func_8008FDF8(void);

void func_800928F0(s32);
void func_800935F8(s32);
void func_80094220(s32);
void func_800945E4(s32);
void func_80094E0C(s32);
s32 func_800961F4(s32);
void func_8009B120(s32);
void func_8009B45C(s32);

void func_800A10E8(s32);
void func_800A1EC4(void);
void func_800A54EC(s32);
s32 func_800A7988(void);
s32 func_800AE8E4(func_800AE8E4Compare*, func_800AE8E4Compare*);


s32 func_800B2510(void);
s32 func_800B34D0(void);
s32 func_800B3540(void);
void func_800B5600(void);

void func_800C2FA0(void);
void func_800C54F8(huh*, s32*);
void func_800C5508(playerActor*);
void func_800C5538(playerActor*);
void func_800C56D4(u64);
void func_800C88AC(void);
s32 func_800C8900(s32, s32);
f32 func_800C89E8(void);
f32 func_800C8C14(f32, f32);
f32 func_800C8A78(f32);
f32 func_800C8BE4(f32);
void func_800C8F00(void);
void func_800CEFC4(void);
s32 func_800CF080(s32, f32);
void func_800CFDB8(playerActor*);
void func_800CFF64(playerActor*);

void func_800D0708(playerActor*, tongue*); //PLAYER PROCESS
void func_800D7460(s32, ...);
s32 func_800D75B4(s32*, s32);
void func_800D799C(s32*, s32, s32);
void func_800D79E4(s32*, s32);
void func_800D8198(Vec3f*);
f32 func_800D81B0(Vec3f*);
void func_800D9730(void);
void func_800D99D0(s32*, s32, void*, s32, s32*, s32);
void func_800D9B20(s32*);
void func_800DA510(s32*, s32, s32, s32, s32, s32, s32*);
void func_800DA620(s32*, s32, s32);
s32 func_800DB820(unkStruct_80175620**);
void func_800DC400(s32*, s32, s32);
void func_800DC550(void);
void func_800DC920(void*);
void func_800DC950(void*, void*);
void func_800DCA90(s32, s32);
void func_800DCB10(s32, s32);

//void func_800E31E0(void);

#endif
