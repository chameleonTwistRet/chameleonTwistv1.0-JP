#ifndef _ENUMS_H
#define _ENUMS_H

#define ACTORS_MAX 64
#define PLAYERS_MAX 4

enum actorIDs {
	Actor_Null,
	Red_Ant,
	Green_Ant,
	Grey_Ant,
	Bullet_Hell_Ant,
	Ant_Trio,
	Yellow_Ant,
	Ant_Queen,
	Ant_Queen_Ant,
	Grey_Ant_Spawner,
	Ant_Trio_Spawner,
	Bullet_Hell_Ant_Spawner,
	Red_Ant_Spawner,
	White_Bomb_Snake,
	Grenade,
	Missile_Spawner,
	Missile,
	Cannon,
	Cannonball,
	BL_Boss_Segment,
	Explosion, //immune to stopwtch powerup
	BL_Boss_Bombs,
	Black_Chameleon_Projectile_Spawner,
	Black_Chameleon_Projectile,
	Chomper,
	Sand_Crab,
	Vulture,
	Arrow_Spawner,
	Arrows,
	Boulder,
	Armadillo,
	unk_1F,
	Popcorn,
	Pogo,
	unk_22,
	unk_23,
	Ice_Cream_Sandwich,
	Training_Room_Choco_Kid,
	Cake_Boss,
	Cake_Boss_Strawberry,
	unk_28,
	Cake_Boss_Choco_Kid,
	Bowling_Ball,
	Bowling_Pins,
	Cue_Ball,
	Billiards_Ball,
	unk_2E,
	unk_2F,
	Cup,
	Saucer,
	Metal_Sheet,
	Scroll,
	RNG_Room_Spawner,
	Mirror,
	Barrel_Jump_Fire_Spawner,
	Barrel_Jump_Fire,
	Fire_Spitter,
	Candles,
	Fire_Spawner,
	Fire,
	Sandal,
	Pile_of_Books,
	Pile_of_Books_Arm_Segments,
	Pile_of_Books_Arm_Spitter,
	Pile_of_Books_Projectile,
	Spider_Spawner,
	Spider,
	Spider_Trio,
	Golem,
	Hedgehog,
	Fish,
	Lizard_Kong_Butterfly,
	Golem_Room_Spider_Spawner,
	Lizard_Kong_Butterfly_Spawner,
	Lizard_Kong_Boulder,
	Lizard_Kong,
	Popcorn_Bucket_Spawner,
	Popcorn_Bucket,
	unk_4E,
	Choco_Kid_Spawner,
	Choco_Kid,
	unk_51,
	unk_52,
	Battle_Mode_Sand_Crab_Spawner,
	Battle_Mode_Sand_Crab,
	unk_55,
	Battle_Mode_Fire,
	Battle_Mode_Saucer_Spawner,
	Battle_Mode_Saucer,
	unk_59,
	unk_5A,
	Power_Up_Spawner,
	Falling_Grey_Ant_Spawner,
	Falling_Grey_Ant,
	unk_5E,
	R_Heart,
	Falling_R_Heart,
	O_Heart,
	Y_Heart,
	Crown,
	Carrot,
	unk_65,
	Time_Stop_Power_Up,
	Big_Feet_Power_Up,
	Big_Head_Power_Up,
	Shrink_Power_Up,
	Shrink_Enemy_Power_Up
};

enum GameModes {
	GAME_MODE_OVERWORLD = 0,
	GAME_MODE_LEVEL_INTRO_MENU = 1,
	GAME_MODE_SAVE_MENU = 2,
	GAME_MODE_LOAD_GAME_MENU = 3,
	GAME_MODE_DEMO = 4,
	GAME_MODE_DEMO_2 = 5,
	GAME_MODE_TITLE_SCREEN = 6,
	GAME_MODE_BATTLE_MENU = 7,
	GAME_MODE_OPTIONS_MENU = 8,
	GAME_MODE_GAME_OVER = 9,
	GAME_MODE_SUPPLY_SYSTEM_LOGO = 10,
	GAME_MODE_PRE_CREDITS = 11,
	GAME_MODE_NEW_GAME_MENU = 12,
	GAME_MODE_LEVEL_INTRO = 13,
	GAME_MODE_STAGE_SELECT = 14,
	GAME_MODE_UNK_15 = 15,
	GAME_MODE_RANKING = 16,
	GAME_MODE_BOOT = 18,
	GAME_MODE_SUNSOFT_LOGO = 19,
	GAME_MODE_CREDITS = 20,
	GAME_MODE_OPENING_CUTSCENE = 21
};
enum Powerups{
	POWERUP_NONE,
	POWERUP_FEET,
	POWERUP_HEAD,
	POWERUP_MINI,
	POWERUP_TIME
};
enum PlayerCharacters{
	CHARA_DAVY,
	CHARA_JACK,
	CHARA_FRED,
	CHARA_LINDA,
	CHARA_BLACK,
	CHARA_WHITE
};

enum Stages{
	STAGE_JUNGLE,
	STAGE_ANT,
	STAGE_BOMB,
	STAGE_DESERT,
	STAGE_KIDS,
	STAGE_GHOST,
	STAGE_OPENING,
	STAGE_VS,
	STAGE_TRAINING,
	STAGE_JUNGLEBOSS,
	STAGE_ANTBOSS,
	STAGE_BOMBBOSS,
	STAGE_DESERTBOSS,
	STAGE_KIDSBOSS,
	STAGE_GHOSTBOSS,
	STAGE_BOSSRUSH
};

enum ColorModes{
	COLORMODE_BW, //is this right>
	COLORMODE_IA4,
	COLORMODE_IA8,
	COLORMODE_3, //what uses this?
	COLORMODE_CI4,
	COLORMODE_CI8,
	COLORMODE_RGBA16,
	COLORMODE_RGBA32,
	COLORMODE_BLANK
};

#define BGM_JUNGLE0	0x0	
#define BGM_JUNGLE1	0x1	
#define BGM_ANT	0x2	
#define BGM_BOMB	0x3	
#define BGM_DESERT	0x4	
#define BGM_KIDS	0x5	
#define BGM_GHOST	0x6	
#define BGM_BATTLE1	0x7	
#define BGM_BATTLE2	0x8	
#define BGM_BATTLE3	0x9	
#define BGM_BATTLEWIN	0xa	
#define BGM_ANTBOSS	0xb	
#define BGM_BOSS1	0xc	
#define BGM_BOSS2	0xd	
#define BGM_KIDSBOSS	0xe	
#define BGM_BOSSINTRO	0xf	
#define BGM_GHOSTBOSS1	0x10	
#define BGM_GHOSTBOSS2	0x11	
#define BGM_STAGESELECT	0x12	
#define BGM_STAGESELECT2	0x13	
#define BGM_STAGEWIN	0x14	
#define BGM_BATTLEWIN2	0x15	
#define BGM_GAMEOVER	0x16	
#define BGM_TRAINING	0x17	
#define BGM_STAGESTART	0x18	
#define BGM_TITLE	0x19	
#define BGM_ENDINGUNUSED	0x1a	
#define BGM_INTRO	0x1b	
#define BGM_STAGESELECTREPRISE	0x1c	
#define BGM_TACET	-1

//indecies of sprites in gSpriteListings
//TODO - complete
#define SPRITE_BLANK	0x0	
#define SPRITE_TEXTBIG	0x1	
#define SPRITE_REDBLANK	0x2	
#define SPRITE_TEXTSMALL	0x3	
#define SPRITE_SYMBOLS	0x4	
#define SPRITE_GREENANTBOTTOM	0x5	
#define SPRITE_GREENANTTOP	0x6	
#define SPRITE_CATERPILLAR	0x7	
#define SPRITE_HITPOINT	0xf	
#define SPRITE_CROWN	0x12	
#define SPRITE_HEARTRED	0x13	
#define SPRITE_HEARTORANGE	0x14	
#define SPRITE_HEARTYELLOW	0x15	
#define SPRITE_BOARD	0x4e	
#define SPRITE_PORTRAITDAVY	0x68	
#define SPRITE_PORTRAITJACK	0x69	
#define SPRITE_PORTRAITFRED	0x6a	
#define SPRITE_PORTRAITLINDA	0x6b	
#define SPRITE_PORTRAITBLACK	0x6c	
#define SPRITE_PORTRAITWHITE	0x6d	
#define SPRITE_EYEDAVYR	0x72	
#define SPRITE_EYEDAVYRCLOSED	0x73	
#define SPRITE_EYEDAVYRSAD	0x74	
#define SPRITE_EYEDAVYRHAPPY	0x75	
#define SPRITE_EYEDAVYRHURT	0x76	
#define SPRITE_EYEDAVYL	0x77	
#define SPRITE_EYEDAVYLCLOSED	0x78	
#define SPRITE_EYEDAVYLSAD	0x79	
#define SPRITE_EYEDAVYLHAPPY	0x7a	
#define SPRITE_EYEDAVYLHURT	0x7b	
#define SPRITE_RANKING_TEXT_JL 0xbd
#define SPRITE_RANKING_TEXT_AL 0xbe
#define SPRITE_RANKING_TEXT_BL 0xbf
#define SPRITE_RANKING_TEXT_DC 0xc0
#define SPRITE_RANKING_TEXT_KL 0xc1
#define SPRITE_RANKING_TEXT_GC 0xc2
#define SPRITE_EYESDEADANTQUEEN	0xc9	
#define SPRITE_EYESDAEADLIZARDKONG	0xca	
#define SPRITE_EYESDEADARMADILLO	0xcb	
#define SPRITE_SUNSOFTLOGO	0xcd	
#define SPRITE_BOSSMETER	0xe2	
#define SPRITE_BOSSHEALTH	0xe3	
#define SPRITE_MENUOPTIONS	0xe5	

#endif
