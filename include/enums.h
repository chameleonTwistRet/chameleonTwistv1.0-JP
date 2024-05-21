#ifndef _ENUMS_H
#define _ENUMS_H

#define ACTORS_MAX 64
#define PLAYERS_MAX 4

enum actorIDs {
	ACTOR_NULL = 0,
	RED_ANT,
	GREEN_ANT,
	GREY_ANT,
	BULLET_HELL_ANT,
	ANT_TRIO,
	YELLOW_ANT,
	ANT_QUEEN,
	ANT_QUEEN_ANT,
	GREY_ANT_SPAWNER,
	ANT_TRIO_SPAWNER,
	BULLET_HELL_ANT_SPAWNER,
	RED_ANT_SPAWNER,
	WHITE_BOMB,
	GRENADE,
	MISSILE_SPAWNER,
	MISSILE,
	CANNON,
	CANNONBALL,
	BL_BOSS_SEGMENT,
	EXPLOSION, //immune to stopwtch powerup
	BL_BOSS_BOMBS,
#ifdef VER_JP
	BLACK_CHAMELEON_PROJECTILE_SPAWNER,
	BLACK_CHAMELEON_PROJECTILE,
#endif
	CHOMPER,
	SAND_CRAB,
	VULTURE,
	ARROW_SPAWNER,
	ARROWS,
	BOULDER,
	ARMADILLO,
	UNK_1F,
	POPCORN,
	POGO,
	UNK_22,
	UNK_23,
	ICE_CREAM_SANDWICH,
	CHOCO_KID,
	CAKE_BOSS,
	CAKE_BOSS_STRAWBERRY,
	UNK_28,
	CAKE_BOSS_CHOCO_KID,
#ifdef VER_JP
	BOWLING_BALL,
	BOWLING_PINS,
#endif
	CUE_BALL,
	BILLIARDS_BALL,
	UNK_2E,
	UNK_2F,
	CUP,
	SAUCER,
	METAL_SHEET,
	SCROLL,
	RNG_ROOM_SPAWNER,
	MIRROR,
	BARREL_JUMP_FIRE_SPAWNER,
	BARREL_JUMP_FIRE,
	FIRE_SPITTER,
	CANDLES,
	FIRE_SPAWNER,
	FIRE,
	SANDAL,
	PILE_OF_BOOKS,
	PILE_OF_BOOKS_ARM_SEGMENTS,
	PILE_OF_BOOKS_ARM_SPITTER,
	PILE_OF_BOOKS_PROJECTILE,
	SPIDER_SPAWNER,
	SPIDER,
	SPIDER_TRIO,
	GOLEM,
	HEDGEHOG,
	FISH,
	LIZARD_KONG_BUTTERFLY,
	GOLEM_ROOM_SPIDER_SPAWNER,
	LIZARD_KONG_BUTTERFLY_SPAWNER,
	LIZARD_KONG_BOULDER,
	LIZARD_KONG,
	POPCORN_BUCKET_SPAWNER,
	POPCORN_BUCKET,
	UNK_4E,
	CHOCO_KID_SPAWNER,
	SPAWNED_CHOCO_KID,									// KL specific(?)
	GREY_ANT_SPAWNER_WRAPPER,
	UNK_52,
	BATTLE_MODE_SAND_CRAB_SPAWNER,
	BATTLE_MODE_SAND_CRAB,
	BATTLE_MODE_FIRE_SPAWNER,
	BATTLE_MODE_FIRE,
	BATTLE_MODE_SAUCER_SPAWNER,
	BATTLE_MODE_SAUCER,
	UNK_59,
	UNK_5A,
	POWER_UP_SPAWNER,
	FALLING_GREY_ANT_SPAWNER,
	FALLING_GREY_ANT,
	UNK_FIRE_SPAWNER,
	R_HEART,
	FALLING_R_HEART,
	O_HEART,
	Y_HEART,
	CROWN,
#ifdef VER_JP
	CARROT,
	UNK_65,
	TIME_STOP_POWER_UP,
#endif
	BIG_FEET_POWER_UP,
	BIG_HEAD_POWER_UP,
	SHRINK_POWER_UP,
	SHRINK_ENEMY_POWER_UP
};

enum GameModes {
	GAME_MODE_OVERWORLD = 0,
	GAME_MODE_LEVEL_INTRO_MENU = 1,
	GAME_MODE_SAVE_MENU = 2,
	GAME_MODE_LOAD_GAME_MENU = 3,
	GAME_MODE_DEMO = 4,
	GAME_MODE_CREDITS_DEMO = 5,
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
	COLORMODE_IA16 = 3,
	COLORMODE_CI4 = 4,
	COLORMODE_CI8 = 5,
	COLORMODE_RGBA16 = 6,
	COLORMODE_RGBA32 = 7,
	COLORMODE_BLANK = 8
};

enum BGM {
    BGM_JUNGLE_EXT = 0,
    BGM_JUNGLE_INT = 1,
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
    BGM_GHOSTBOSS2 = 16,
    BGM_GHOSTBOSS1 = 17,
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
    BGM_STAGESELECTREPRISE = 28
    //BGM_TACET = -1 ????
};


//indecies of sprites in gSpriteListings
//TODO - complete
enum SPRITE {
    SPRITE_NULL = -1,
    SPRITE_BLANK = 0,
    SPRITE_TEXTBIG = 1,
    SPRITE_REDBLANK = 2,
    SPRITE_TEXTSMALL = 3,
    SPRITE_SYMBOLS = 4,
    SPRITE_GREENANTBOTTOM = 5,
    SPRITE_GREENANTTOP = 6,
    SPRITE_CATERPILLAR = 7,
    SPRITE_CATERPILLAR_PART = 8,



    SPRITE_ANTHOLE = 12,
    SPRITE_CATERPILLAR_APPEAR = 13,
    SPRITE_GRAYANT = 14,
    SPRITE_HITPOINT = 15,


    SPRITE_CROWN = 18,
    SPRITE_HEARTRED = 19,
    SPRITE_HEARTORANGE = 20,
    SPRITE_HEARTYELLOW = 21,
    SPRITE_POWERUP_1 = 22,
    SPRITE_POWERUP_2 = 23,
    SPRITE_POWERUP_3 = 24,
    SPRITE_POWERUP_4 = 25,
    SPRITE_CARROT = 26,
    SPRITE_STOPWATCH = 27,
    SPRITE_EYEBLINK_UNUSED = 28,
    SPRITE_EYETWIRL_UNUSED = 29,

    SPRITE_EYESEXY_UNUSED = 31,
    SPRITE_MINE = 32,
    SPRITE_GRENADE = 33,
    SPRITE_MISSILE = 34,
    SPRITE_BOMB = 35,
    SPRITE_BOMBDOKKAN_EYE = 36,
    SPRITE_BALLOON_UNUSED = 37,
    SPRITE_ICECREAMSANDICH = 38,
    SPRITE_CHOCOKID = 39,
    SPRITE_POPCORN = 40,
    SPRITE_CLOUD = 41,
    SPRITE_CLOUD2 = 42,
    SPRITE_BOMBDOKKAN_PART = 43,
    SPRITE_SANDCRAB = 44,
    SPRITE_SANDCRAB_OUT = 45,
    SPRITE_CONDOR = 46,
    SPRITE_FIRE = 47,
    SPRITE_KETTLE = 48,
    SPRITE_PLATE = 49,
    SPRITE_BALL_NUMBERS = 50,
    SPRITE_BALL = 51,
    SPRITE_CANDLE = 52,
    SPRITE_CANDLE_LIT = 53,
    
    SPRITE_PLATE2 = 55,
    SPRITE_PORCUPINE = 56,
    SPRITE_SPIDER = 57,
    SPRITE_BUTTERFLY = 58,
    SPRITE_DESERTCASTLE_BG1 = 59,
    SPRITE_DESERTCASTLE_BG2 = 60,
    SPRITE_DESERTCASTLE_BG3 = 61,
    SPRITE_DESERTCASTLE_BG4 = 62,
    SPRITE_DESERTCASTLE_BG5 = 63,
    SPRITE_JUNGLELAND_BG1 = 64,
    SPRITE_JUNGLELAND_BG2 = 65,
    SPRITE_JUNGLELAND_BG3 = 66,
    SPRITE_JUNGLELAND_BG4 = 67,
    SPRITE_JUNGLELAND_BG5 = 68,
    SPRITE_FIRE2 = 69,

    SPRITE_POLE = 71,
    SPRITE_TWINKLE = 72,
    SPRITE_TWINKLE2 = 73,
	SPRITE_74 = 74,

	SPRITE_BLACKBALL = 76,
    SPRITE_BATTLE_BIGBOARD = 77,
    SPRITE_BATTLE_STAGETITLEBOARD = 78,
    SPRITE_CHAMELEON = 79,
    SPRITE_TWIST = 80,
    SPRITE_GAMEOVER_UNUSED = 81,
    SPRITE_FERN = 82,
    SPRITE_TREE = 83,
    SPRITE_JL_ICON = 84,
    SPRITE_BL_ICON = 85,
    SPRITE_AL_ICON = 86,
    SPRITE_DC_ICON = 87,
    SPRITE_KL_ICON = 88,
    SPRITE_GC_ICON = 89,
    SPRITE_BOSSRUSH_ICON = 90,
    SPRITE_POUSE_UNUSED = 91,
	SPRITE_JSSLOGO_BG = 92,
	SPRITE_JSSLOGO_CAT = 93,
	SPRITE_TEXTBIGGER = 94,
    SPRITE_BATTLE_SURVIVALSTAGE0 = 95,
    SPRITE_BATTLE_SURVIVALSTAGE1 = 96,
    SPRITE_BATTLE_SURVIVALSTAGE2 = 97,
    SPRITE_BATTLE_SURVIVALSTAGE3 = 98,
    SPRITE_BATTLE_TIMETRIALSTAGE0 = 99,
    SPRITE_BATTLE_TIMETRIALSTAGE1 = 100,
    SPRITE_BATTLE_TIMETRIALSTAGE2 = 101,
    SPRITE_BATTLE_TIMETRIALSTAGE3 = 102,
    SPRITE_BATTLE_OPTIONSARROWS = 103,

    SPRITE_PORTRAITDAVY = 104,
    SPRITE_PORTRAITJACK = 105,
    SPRITE_PORTRAITFRED = 106,
    SPRITE_PORTRAITLINDA = 107,
    SPRITE_PORTRAITBLACK = 108,
    SPRITE_PORTRAITWHITE = 109,

	SPRITE_SPECIFIC_SYMBOLS = 110,
	SPRITE_SMOKE_CIRCLE = 111,
	SPRITE_CROWN_ICON = 112,
	SPRITE_PUFF2 = 113,
    
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
    
    SPRITE_EYEJACKR = 124,
    SPRITE_EYEJACKRCLOSED = 125,
    SPRITE_EYEJACKRSAD = 126,
    SPRITE_EYEJACKRHAPPY = 127,
    SPRITE_EYEJACKRHURT = 128,
    SPRITE_EYEJACKL = 129,
    SPRITE_EYEJACKLCLOSED = 130,
    SPRITE_EYEJACKLSAD = 131,
    SPRITE_EYEJACKLHAPPY = 132,
    SPRITE_EYEJACKLHURT = 133,
    
    SPRITE_EYELINDAL = 134,
    SPRITE_EYELINDALCLOSED = 135,
    SPRITE_EYELINDALSAD = 136,
    SPRITE_EYELINDALHAPPY = 137,
    SPRITE_EYELINDALHURT = 138,
    SPRITE_EYELINDAR = 139,
    SPRITE_EYELINDARCLOSED = 140,
    SPRITE_EYELINDARSAD = 141,
    SPRITE_EYELINDARHAPPY = 142,
    SPRITE_EYELINDARHURT = 143,

    SPRITE_EYEFREDR = 144,
    SPRITE_EYEFREDRCLOSED = 145,
    SPRITE_EYEFREDRSAD = 146,
    SPRITE_EYEFREDRHAPPY = 147,
    SPRITE_EYEFREDRHURT = 148,
    SPRITE_EYEFREDL = 149,
    SPRITE_EYEFREDLCLOSED = 150,
    SPRITE_EYEFREDLSAD = 151,
    SPRITE_EYEFREDLHAPPY = 152,
    SPRITE_EYEFREDLHURT = 153,
    
    SPRITE_EYEBLACKR = 154,
    SPRITE_EYEBLACKRCLOSED = 155,
    SPRITE_EYEBLACKRSAD = 156,
    SPRITE_EYEBLACKRHAPPY = 157,
    SPRITE_EYEBLACKRHURT = 158,
    SPRITE_EYEBLACKL = 159,
    SPRITE_EYEBLACKLCLOSED = 160,
    SPRITE_EYEBLACKLSAD = 161,
    SPRITE_EYEBLACKLHAPPY = 162,
    SPRITE_EYEBLACKLHURT = 163,
    
    SPRITE_EYEWHITEL = 164,
    SPRITE_EYEWHITELCLOSED = 165,
    SPRITE_EYEWHITELSAD = 166,
    SPRITE_EYEWHITELHAPPY = 167,
    SPRITE_EYEWHITELHURT = 168,
    SPRITE_EYEWHITER = 169,
    SPRITE_EYEWHITERCLOSED = 170,
    SPRITE_EYEWHITERSAD = 171,
    SPRITE_EYEWHITERHAPPY = 172,
    SPRITE_EYEWHITERHURT = 173,

    SPRITE_TINYEYE1 = 174,
    SPRITE_TINYEYE2 = 175,
    SPRITE_TINYEYE3 = 176,
    SPRITE_TINYEYE4 = 177,
    SPRITE_TINYEYE5 = 178,
    SPRITE_TINYEYE6 = 179,
    SPRITE_TINYEYE7 = 180,
    SPRITE_TINYEYE8 = 181,
    SPRITE_TINYEYE9 = 182,
    SPRITE_TINYEYE10 = 183,
    SPRITE_TINYEYE11 = 184,
    SPRITE_TINYEYE12 = 185,

    SPRITE_ARROW_ANIM = 186,

    SPRITE_TITLE_SCREEN = 187,
    
    SPRITE_STAGE_SELECT = 188,

    SPRITE_RANKING_TEXT_JL = 189,
    SPRITE_RANKING_TEXT_AL = 190,
    SPRITE_RANKING_TEXT_BL = 191,
    SPRITE_RANKING_TEXT_DC = 192,
    SPRITE_RANKING_TEXT_KL = 193,
    SPRITE_RANKING_TEXT_GC = 194,

    SPRITE_TEXT_JL2 = 195,
    SPRITE_TEXT_AL2 = 196,
    SPRITE_TEXT_BL2 = 197,
    SPRITE_TEXT_DC2 = 198,
    SPRITE_TEXT_KL2 = 199,
    SPRITE_TEXT_GC2 = 200,

    SPRITE_EYESDEADQUINTELLA = 201,
    SPRITE_EYESDAEADLIZARDKONG = 202,
    SPRITE_EYESDEADARMADILLO = 203,


    SPRITE_SUNSOFTLOGO = 205,
	SPRITE_RANKINGBACKGROUND = 206,
    SPRITE_ANIM1 = 207,
    SPRITE_ANIM2 = 208,
    SPRITE_BOSS_RUSH_LABEL = 209,
	SPRITE_BATTLE_CHAMELEONBACKGROUND = 210,
	SPRITE_BOMBDOKKAN_PARTS = 211,
	SPRITE_RANKING_SCREEN = 212,
	SPRITE_ORDINALS = 213,
    SPRITE_BATTLE_LEVELTAG = 214,
    SPRITE_HEXAGON = 215,
    SPRITE_BATTLE_STAGECURSOR = 216,
    SPRITE_JSS_COPYRIGHT = 217,
    SPRITE_THE_END = 218,

    SPRITE_BOWLING_SQUARE = 220,
    SPRITE_BOWLING_NUMBERS = 221,
    SPRITE_BOWLING_LOGO = 222,
    SPRITE_BOWLING_LASTSQUARE = 223,
    SPRITE_CROWN_SMALL = 224,
    SPRITE_CARROT_SMALL = 224,
    SPRITE_BOSSMETER = 226,
    SPRITE_BOSSHEALTH = 227,
    SPRITE_UNK_COOLLIGHTS = 228,
    SPRITE_MENUOPTIONS = 229
};

enum Backgrounds {
    BG_Unk0 = 0,
    BG_Unk1,
    BG_TITLESCREEN,
    BG_STAGESELECT
};

enum PauseModes {
    PAUSEMODE_NOT_PAUSED = 0,
    PAUSEMODE_PAUSED,
    PAUSEMODE_FROZEN
};

enum Letters {
	LETTER_A = 1,
	LETTER_B = 2,
	LETTER_C = 3,
	LETTER_D = 4,
	LETTER_E = 5,
	LETTER_F = 6,
	LETTER_G = 7,
	LETTER_H = 8,
	LETTER_I = 9,
	LETTER_J = 10,
	LETTER_K = 11,
	LETTER_L = 12,
	LETTER_M = 13,
	LETTER_N = 14,
	LETTER_O = 15,
	LETTER_P = 16,
	LETTER_Q = 17,
	LETTER_R = 18,
	LETTER_S = 19,
	LETTER_T = 20,
	LETTER_U = 21,
	LETTER_V = 22,
	LETTER_W = 23,
	LETTER_X = 24,
	LETTER_Y = 25,
	LETTER_Z = 26,
	SPACE = 100
};
	
enum SFX {
    SFX_ChameleonRightFoot = 0,
    SFX_ChameleonLeftFoot = 1,
    SFX_ChameleonRightFootSplash = 2,
    SFX_ChameleonLeftFootSplash = 3,
    SFX_ChameleonSplash = 4,
    SFX_ChameleonJump = 5,
    SFX_ChameleonLand = 6,
    SFX_ChameleonVault = 7,
    SFX_TongueOut = 8,
    SFX_TongueRetract = 9,
    SFX_EnemyEaten = 10,
    SFX_EnemyShoot = 11,
    SFX_EnemyCollide = 12,
    //13
    SFX__EnemyHitWall = 14,
    SFX_EnemyTongued = 15,
    SFX_TongueWall = 16,
    SFX_TongueGrasp = 17,
    SFX_TongueTurn = 18,
    SFX_unkSnd13 = 19,
    SFX_IceSlideBattleMode = 20,
    SFX_ChameleonFlameDeath = 21,
    SFX_ChameleonOw = 22,
    //23
    SFX_ChameleonGameOver = 24,
    SFX_ChameleonRespawn = 25,
    SFX_JungleAmbienceEnding = 26,
    SFX_MagicPot = 27,
    SFX_EnterMagicPot = 28,
    SFX_RabbitJumpIntro = 29,
    //30
    //31
    //32
    SFX_CameraMove = 33,
    //34
    SFX_RabbitLeftFootIntro = 35,
    SFX_24_unkSnd = 36,
    SFX_25_unkSnd = 37,
    //38
    //39
    SFX_Select = 40,
    SFX_Save_Delete_Decline = 41,
    SFX_2A_unkSnd = 42,
    SFX_2B_unkSnd = 43,
    SFX_2C_unkSnd = 44,
    //45
    SFX_2E_unkSnd = 46,
    SFX_JSSMeow = 47,
    SFX_30_unkSnd = 48,
    SFX_31_unkSnd = 49,
    SFX_32_unkSnd = 50,
    SFX_33_unkSnd = 51,
    SFX_34_unkSnd = 52,
    SFX_35_unkSnd = 53,
    SFX_36_unkSnd = 54,
    SFX_37_unkSnd = 55,
    SFX_38_unkSnd = 56,
    SFX_39_unkSnd = 57,
    SFX_3A_unkSnd = 58,
    SFX_3B_unkSnd = 59,
    SFX_3C_unkSnd = 60,
    SFX_3D_unkSnd = 61,
    SFX_3E_unkSnd = 62,
    SFX_3F_unkSnd = 63,
    SFX_40_unkSnd = 64,
    SFX_41_unkSnd = 65,
    SFX_42_unkSnd = 66,
    SFX_43_unkSnd = 67,
    SFX_44_unkSnd = 68,
    SFX_45_unkSnd = 69,
    SFX_46_unkSnd = 70,
    SFX_47_unkSnd = 71,
    SFX_48_unkSnd = 72,
    SFX_49_unkSnd = 73,
    SFX_4A_unkSnd = 74,
    SFX_4B_unkSnd = 75,
    SFX_Lizard_Kong_Hit = 76, //Jungle Land
    SFX_4D_unkSnd = 77,
    SFX_4E_unkSnd = 78,
    SFX_4F_unkSnd = 79,
    SFX_50_unkSnd = 80,
    SFX_51_unkSnd = 81,
    //82
    //83
    //84
    SFX_55_unkSnd = 85,
    SFX_56_unkSnd = 86,
    SFX_57_unkSnd = 87,
    SFX_58_unkSnd = 88,
    SFX_59_unkSnd = 89,
    SFX_5A_unkSnd = 90,
    SFX_5B_unkSnd = 91,
    SFX_5C_unkSnd = 92,
    SFX_5D_unkSnd = 93,
    SFX_Yellow_Ant_Fall = 94, //Ant Land
    SFX_5F_unkSnd = 95,
    SFX_60_unkSnd = 96,
    //97
    //98
    SFX_63_unkSnd = 99,
    //100
    //101
    //102
    //103
    //104
    SFX_69_unkSnd = 105,
    //106
    //107
    //108
    SFX_6D_unkSnd = 109,
    SFX_6E_unkSnd = 110,
    SFX_6F_unkSnd = 111,
    SFX_70_unkSnd = 112,
    SFX_71_unkSnd = 113,
    //114
    SFX_73_unkSnd = 115,
    SFX_74_unkSnd = 116,
    SFX_GrenadeWalk = 117,
    SFX_76_unkSnd = 118,
    SFX_77_unkSnd = 119,
    SFX_Bomb_Caterpillar_Slither = 120, //Bomb Land
    //121
    //122
    SFX_7B_unkSnd = 123,
    //124
    //125
    SFX_7E_unkSnd = 126,
    SFX_7F_unkSnd = 127,
    SFX_80_unkSnd = 128,
    SFX_81_unkSnd = 129,
    SFX_82_unkSnd = 130,
    SFX_83_unkSnd = 131,
    SFX_Standard_Bounce = 132,  //Ant Land & Desert Castle
    //133
    SFX_86_unkSnd = 134,
    SFX_87_unkSnd = 135,
    SFX_88_unkSnd = 136,
    SFX_89_unkSnd = 137,
    SFX_8A_unkSnd = 138,
    SFX_8B_unkSnd = 139,
    SFX_8C_unkSnd = 140,
    SFX_8D_unkSnd = 141,
    SFX_8E_unkSnd = 142,
    SFX_RockTumble = 143,
    SFX_90_unkSnd = 144,
    SFX_91_unkSnd = 145,
    SFX_92_unkSnd = 146,
    SFX_93_unkSnd = 147,
    SFX_94_unkSnd = 148,
    SFX_95_unkSnd = 149,
    SFX_96_unkSnd = 150,
    SFX_97_unkSnd = 151,
    SFX_98_unkSnd = 152,
    SFX_ChocoKidNoise = 153,
    SFX_9A_unkSnd = 154,
    SFX_9B_unkSnd = 155,
    SFX_9C_unkSnd = 156,
    SFX_9D_unkSnd = 157,
    SFX_9E_unkSnd = 158,
    SFX_9F_unkSnd = 159,
    SFX_A0_unkSnd = 160,
    SFX_A1_unkSnd = 161,
    SFX_A2_unkSnd = 162,
    SFX_A3_unkSnd = 163,
    SFX_A4_unkSnd = 164,
    SFX_A5_unkSnd = 165,
    SFX_A6_unkSnd = 166,
    SFX_A7_unkSnd = 167,
    SFX_A8_unkSnd = 168,
    SFX_A9_unkSnd = 169,
    SFX_AA_unkSnd = 170,
    SFX_AB_unkSnd = 171,
    SFX_AC_unkSnd = 172,
    //173
    //174
    SFX_AF_unkSnd = 175,
    //176
    //177
    //178
    SFX_B3_unkSnd = 179,
    //180
    SFX_B5_unkSnd = 181,
    SFX_B6_unkSnd = 182,
    SFX_B7_unkSnd = 183,
    SFX_B8_unkSnd = 184,
    //185
    SFX_BA_unkSnd = 186,
    SFX_BB_unkSnd = 187,
    SFX_BC_unkSnd = 188,
    SFX_BD_unkSnd = 189,
    SFX_BE_unkSnd = 190,
    SFX_BF_unkSnd = 191,
    SFX_C0_unkSnd = 192,
    SFX_C1_unkSnd = 193,
    SFX_C2_unkSnd = 194,
    SFX_C3_unkSnd = 195,
    SFX_Decline = 196
};

enum JungleLandZones {
    Zone0
};

enum KidsLandZones {
    ZONE_GLASS_WALL_1 = 10,
    ZONE_GLASS_WALL_2 = 15
};

enum AntLandZones {
    ZONE_SPIN_ROOM_1 = 7
};

enum GhostCastleZones {
    ZONE_BILLIARDS = 14
};

enum AntLandStageFlags {
    SF_SPIN_ROOM_1_COMPLETED = 0
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
