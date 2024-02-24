#ifndef _ENUMS_H
#define _ENUMS_H

#define ACTORS_MAX 64
#define PLAYERS_MAX 4

enum actorIDs {
	ACTOR_NULL = 0,
	RED_ANT = 1,
	GREEN_ANT = 2,
	GREY_ANT = 3,
	BULLET_HELL_ANT = 4,
	ANT_TRIO = 5,
	YELLOW_ANT = 6,
	ANT_QUEEN = 7,
	ANT_QUEEN_ANT = 8,
	GREY_ANT_SPAWNER = 9,
	ANT_TRIO_SPAWNER = 10,
	BULLET_HELL_ANT_SPAWNER = 11,
	RED_ANT_SPAWNER = 12,
	WHITE_BOMB_SNAKE = 13,
	GRENADE = 14,
	MISSILE_SPAWNER = 15,
	MISSILE = 16,
	CANNON = 17,
	CANNONBALL = 18,
	BL_BOSS_SEGMENT = 19,
	EXPLOSION = 20, //immune to stopwtch powerup
	BL_BOSS_BOMBS = 21,
	BLACK_CHAMELEON_PROJECTILE_SPAWNER = 22,
	BLACK_CHAMELEON_PROJECTILE = 23,
	CHOMPER = 24,
	SAND_CRAB = 25,
	VULTURE = 26,
	ARROW_SPAWNER = 27,
	ARROWS = 28,
	BOULDER = 29,
	ARMADILLO = 30,
	UNK_1F = 31,
	POPCORN = 32,
	POGO = 33,
	UNK_22 = 34,
	UNK_23 = 35,
	ICE_CREAM_SANDWICH = 36,
	TRAINING_ROOM_CHOCO_KID = 37,
	CAKE_BOSS = 38,
	CAKE_BOSS_STRAWBERRY = 39,
	UNK_28 = 40,
	CAKE_BOSS_CHOCO_KID = 41,
	BOWLING_BALL = 42,
	BOWLING_PINS = 43,
	CUE_BALL = 44,
	BILLIARDS_BALL = 45,
	UNK_2E = 46,
	UNK_2F = 47,
	CUP = 48,
	SAUCER = 49,
	METAL_SHEET = 50,
	SCROLL = 51,
	RNG_ROOM_SPAWNER = 52,
	MIRROR = 53,
	BARREL_JUMP_FIRE_SPAWNER = 54,
	BARREL_JUMP_FIRE = 55,
	FIRE_SPITTER = 56,
	CANDLES = 57,
	FIRE_SPAWNER = 58,
	FIRE = 59,
	SANDAL = 60,
	PILE_OF_BOOKS = 61,
	PILE_OF_BOOKS_ARM_SEGMENTS = 62,
	PILE_OF_BOOKS_ARM_SPITTER = 63,
	PILE_OF_BOOKS_PROJECTILE = 64,
	SPIDER_SPAWNER = 65,
	SPIDER = 66,
	SPIDER_TRIO = 67,
	GOLEM = 68,
	HEDGEHOG = 69,
	FISH = 70,
	LIZARD_KONG_BUTTERFLY = 71,
	GOLEM_ROOM_SPIDER_SPAWNER = 72,
	LIZARD_KONG_BUTTERFLY_SPAWNER = 73,
	LIZARD_KONG_BOULDER = 74,
	LIZARD_KONG = 75,
	POPCORN_BUCKET_SPAWNER = 76,
	POPCORN_BUCKET = 77,
	UNK_4E = 78,
	CHOCO_KID_SPAWNER = 79,
	CHOCO_KID = 80,
	UNK_51 = 81,
	UNK_52 = 82,
	BATTLE_MODE_SAND_CRAB_SPAWNER = 83,
	BATTLE_MODE_SAND_CRAB = 84,
	UNK_55 = 85,
	BATTLE_MODE_FIRE = 86,
	BATTLE_MODE_SAUCER_SPAWNER = 87,
	BATTLE_MODE_SAUCER = 88,
	UNK_59 = 89,
	UNK_5A = 90,
	POWER_UP_SPAWNER = 91,
	FALLING_GREY_ANT_SPAWNER = 92,
	FALLING_GREY_ANT = 93,
	UNK_5E = 94,
	R_HEART = 95,
	FALLING_R_HEART = 96,
	O_HEART = 97,
	Y_HEART = 98,
	CROWN = 99,
	CARROT = 100,
	UNK_65 = 101,
	TIME_STOP_POWER_UP = 102,
	BIG_FEET_POWER_UP = 103,
	BIG_HEAD_POWER_UP = 104,
	SHRINK_POWER_UP = 105,
	SHRINK_ENEMY_POWER_UP = 106
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
	POWERUP_NONE = 0,
	POWERUP_FEET = 1,
	POWERUP_HEAD = 2,
	POWERUP_MINI = 3,
	POWERUP_TIME = 4
};
enum PlayerCharacters{
	CHARA_DAVY = 0,
	CHARA_JACK = 1,
	CHARA_FRED = 2,
	CHARA_LINDA = 3,
	CHARA_BLACK = 4,
	CHARA_WHITE = 5
};

enum Stages{
	STAGE_JUNGLE = 0,
	STAGE_ANT = 1,
	STAGE_BOMB = 2,
	STAGE_DESERT = 3,
	STAGE_KIDS = 4,
	STAGE_GHOST = 5,
	STAGE_OPENING = 6,
	STAGE_VS = 7,
	STAGE_TRAINING = 8,
	STAGE_JUNGLEBOSS = 9,
	STAGE_ANTBOSS = 10,
	STAGE_BOMBBOSS = 11,
	STAGE_DESERTBOSS = 12,
	STAGE_KIDSBOSS = 13,
	STAGE_GHOSTBOSS = 14,
	STAGE_BOSSRUSH = 15
};

enum ColorModes{
	COLORMODE_BW = 0, //is this right>
	COLORMODE_IA4 = 1,
	COLORMODE_IA8 = 2,
	COLORMODE_3 = 3, //what uses this?
	COLORMODE_CI4 = 4,
	COLORMODE_CI8 = 5,
	COLORMODE_RGBA16 = 6,
	COLORMODE_RGBA32 = 7,
	COLORMODE_BLANK = 8
};

enum BGM {
    BGM_JUNGLE_INT = 0,
    BGM_JUNGLE_EXT = 1,
    BGM_ANT = 2,
    BGM_BOMB = 3,
    BGM_DESERT = 4,
    BGM_KIDS = 5,
    BGM_GHOST = 6,
    BGM_BATTLE1 = 7,
    BGM_BATTLE2 = 8,
    BGM_BATTLE3 = 9,
    BGM_BATTLEWIN = 10,
    BGM_ANTBOSS = 11,
    BGM_BOSS1 = 12,
    BGM_BOSS2 = 13,
    BGM_KIDSBOSS = 14,
    BGM_BOSSINTRO = 15,
    BGM_GHOSTBOSS1 = 16,
    BGM_GHOSTBOSS2 = 17,
    BGM_STAGESELECT = 18,
    BGM_STAGESELECT2 = 19,
    BGM_STAGEWIN = 20,
    BGM_BATTLEWIN2 = 21,
    BGM_GAMEOVER = 22,
    BGM_TRAINING = 23,
    BGM_STAGESTART = 24,
    BGM_TITLE = 25,
    BGM_ENDINGUNUSED = 26,
    BGM_INTRO = 27,
    BGM_STAGESELECTREPRISE = 28,
    BGM_TACET = -1
};


//indecies of sprites in gSpriteListings
//TODO - complete
enum SPRITE {
    SPRITE_BLANK = 0,
    SPRITE_TEXTBIG = 1,
    SPRITE_REDBLANK = 2,
    SPRITE_TEXTSMALL = 3,
    SPRITE_SYMBOLS = 4,
    SPRITE_GREENANTBOTTOM = 5,
    SPRITE_GREENANTTOP = 6,
    SPRITE_CATERPILLAR = 7,
    SPRITE_HITPOINT = 15,
    SPRITE_CROWN = 18,
    SPRITE_HEARTRED = 19,
    SPRITE_HEARTORANGE = 20,
    SPRITE_HEARTYELLOW = 21,
    SPRITE_BOARD = 78,
    SPRITE_PORTRAITDAVY = 104,
    SPRITE_PORTRAITJACK = 105,
    SPRITE_PORTRAITFRED = 106,
    SPRITE_PORTRAITLINDA = 107,
    SPRITE_PORTRAITBLACK = 108,
    SPRITE_PORTRAITWHITE = 109,
    SPRITE_EYEDAVYR = 114,
    SPRITE_EYEDAVYRCLOSED = 115,
    SPRITE_EYEDAVYRSAD = 116,
    SPRITE_EYEDAVYRHAPPY = 117,
    SPRITE_EYEDAVYRHURT = 118,
    SPRITE_EYEDAVYL = 119,
    SPRITE_EYEDAVYLCLOSED = 120,
    SPRITE_EYEDAVYLSAD = 121,
    SPRITE_EYEDAVYLHAPPY = 122,
    SPRITE_EYEDAVYLHURT = 123,
    SPRITE_RANKING_TEXT_JL = 189,
    SPRITE_RANKING_TEXT_AL = 190,
    SPRITE_RANKING_TEXT_BL = 191,
    SPRITE_RANKING_TEXT_DC = 192,
    SPRITE_RANKING_TEXT_KL = 193,
    SPRITE_RANKING_TEXT_GC = 194,
    SPRITE_EYESDEADANTQUEEN = 201,
    SPRITE_EYESDAEADLIZARDKONG = 202,
    SPRITE_EYESDEADARMADILLO = 203,
    SPRITE_SUNSOFTLOGO = 205,
    SPRITE_BOSSMETER = 226,
    SPRITE_BOSSHEALTH = 227,
    SPRITE_MENUOPTIONS = 229
};
	

/*
enum JLFlags {
	GolemsKilled = 0, //0 == no, 1 == yes
	JLCaveDoor = 1, // 0 = open, 1 == closed
	Unk2 = 2,
	Web1 = 3,
	Web2 = 4,
	Web3 = 5,
	Web4 = 6,
	Unk7 = 7,
	Unk8 = 8,
	Unk9 = 9,
	Unk10 = 10,
	Unk11 = 11,
	Unk12 = 12,
	Unk13 = 13,
	Unk14 = 14,
	Unk15 = 15,
	Unk16 = 16,
	Unk17 = 17,
	Unk18 = 18,
	Unk19 = 19,
	Unk20 = 20,
	Unk21 = 21,
	GolemsAwoken = 22, // 0 == no, 1 == yes
	Unk23 = 23,
	Unk24 = 24,
	Unk25 = 25,
	Unk26 = 26,
	Unk27 = 27,
	Unk28 = 28,
	Unk29 = 29,
	IntroRabbit = 30, //0 == doesnt exist, 1 == idle, 2 == leaving
	BossRabbit = 31 //^
};*/

#endif
