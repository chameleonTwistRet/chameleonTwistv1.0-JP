#include "common.h"
#include "sprite.h"
#include "battle.h"
#include "5FF30.h"

#define CI8_PAL_SIZE 0x200

extern u8 Animations_unk1Pointers_Animp[];
extern u8 Animations_unk2Pointers_Animp[];

extern u8 D_800F0D3C[];
extern u8 D_800F0D58[];
extern u8 D_800F0D88[];
extern u8 D_800F0D8C[];

unkStruct16 D_800F0D90[5] = {
{&Animations_unk2Pointers_Animp, &Animations_unk2Pointers_Animp, D_800F0D3C, 28, -10.0f},
{&static0_chameleonAnims[0], &static0_chameleonAnims[0], D_800F0D58, 45, -30.0f},
{&static0_chameleonAnims[0], &static0_chameleonAnims[0], D_800F0D88, 1, -30.0f},
{&Animations_unk2Pointers_Animp, &Animations_unk2Pointers_Animp, D_800F0D8C, 1, -10.0f},
{&Animations_unk1Pointers_Animp, &Animations_unk2Pointers_Animp, D_800F0D3C, 28, 0.0f}
};

unk_80052094_8 Battle_MsgReady[5] = {
    {0.0f, 2},
    {2.0f, 0},
    {0.0f, 0},
    {1.0f, 0},
    {3.0f, 2}
};

unk_80052094_8 Battle_MsgGo[3] = {
    {3.0f, 0},
    {8.0f, 0},
    {4.0f, 2},
};

s32 padding[3] = {0, 0, 0};

#define TEXT_LINE_LENGTH 30
#define TEXT_LINE_SIZE TEXT_LINE_LENGTH * 2
#define NULL_LINE "　"

// JP chameleon names
// Davy = "デイビー"
// Jack = "ジャック"
// Fred = "フレッド"
// Linda = "リンダ"
// V arent the actual word, they are treated as proper names
// Black = "ブラック"
// White = "ホワイト"

/*
Dialogue is usually formatted as such:
Symbol[Messages][TEXT_LINES][TEXT_LINE_SIZE]
TEXT_LINES and TEXT_LINE_SIZE are both arbitrary, but is the format the CT devs decided to use
However, TEXT_LINE_SIZE is TEXT_LINE_LENGTH * 2, as the EUC-JP characters are stored as shorts. Make sure to edit that instead.
*/

//JL intro text
char JL_IntroText[][TEXT_LINE_SIZE] = {
    "ここはジャングルランド。この不思",
    "議の世界の入り口です。",
    NULL_LINE,

    "舌や体の操作が出来るようになった",
    "ら、タイムアタックに行ってみると",
    "いいですよ。",

    ""
};

char AL_Intro_Text_Davy[][TEXT_LINE_SIZE] = {
    "アリ、アリ、アリの大行進。",
    "ここは地中深くのアリのステージ。",
    NULL_LINE,

    "数え切れないほどのアリたちが、",
    "デイビーの行く手をふさいで",
    "います。",

    ""
};

char AL_Intro_Text_Jack[][TEXT_LINE_SIZE] = {
    "アリ、アリ、アリの大行進。",
    "ここは地中深くのアリのステージ。",
    NULL_LINE,

    "数え切れないほどのアリたちが、",
    "ジャックの行く手をふさいで",
    "います。",

    ""
};

char AL_Intro_Text_Linda[][TEXT_LINE_SIZE] = {
    "アリ、アリ、アリの大行進。",
    "ここは地中深くのアリのステージ。",
    NULL_LINE,

    "数え切れないほどのアリたちが、",
    "リンダの行く手をふさいで",
    "います。",

    ""
};

char AL_Intro_Text_Fred[][TEXT_LINE_SIZE] = {
    "アリ、アリ、アリの大行進。",
    "ここは地中深くのアリのステージ。",
    NULL_LINE,

    "数え切れないほどのアリたちが、",
    "フレッドの行く手をふさいで",
    "います。",

    ""
};

char AL_Intro_Text_Black[][TEXT_LINE_SIZE] = {
    "アリ、アリ、アリの大行進。",
    "ここは地中深くのアリのステージ。",
    NULL_LINE,

    "数え切れないほどのアリたちが、",
    "ブラックの行く手をふさいで",
    "います。",

    ""
};

char AL_Intro_Text_White[][TEXT_LINE_SIZE] = {
    "アリ、アリ、アリの大行進。",
    "ここは地中深くのアリのステージ。",
    NULL_LINE,

    "数え切れないほどのアリたちが、",
    "ホワイトの行く手をふさいで",
    "います。",

    ""
};

char BL_Intro_Text[][TEXT_LINE_SIZE] = {
    "ドカーン！と、キケンなボムが",
    "いっぱいです。のるとダメージの",
    "床やこわれるブロック、",

    "ボムはつながって大バクハツしたり",
    "もします。",

    ""
};

char KL_Intro_Text[][TEXT_LINE_SIZE] = {
    "チョコレートにクッキー、ウエハー",
    "ス、おいしそうなお菓子でいっぱい",
    "です。",

    "でもそんなお菓子にだまされないで",
    "下さい。高度なアクションやパズル",
    "が待ってるようです。",

    ""
};

char DC_Intro_Text[][TEXT_LINE_SIZE] = {
    "砂漠にうもれた城のステージ。城に",
    "は高い壁や、やりなどがまちうけて",
    "います。",

    "砂漠では流砂や落石などにも要注意",
    "です。",
    ""
};

char GC_Intro_Text_Davy[][TEXT_LINE_SIZE] = {
    "とうとうここまで来ましたね、",
    "ここが最後のステージのゴーストキ",
    "ャッスルです。",

    "この先、奇妙なゴーストたちがデイ",
    "ビーの行く手をふさごうとする",
    "でしょう。",
    ""
};

char GC_Intro_Text_Jack[][TEXT_LINE_SIZE] = {
    "とうとうここまで来ましたね、",
    "ここが最後のステージのゴーストキ",
    "ャッスルです。",

    "この先、奇妙なゴーストたちがジャ",
    "ックの行く手をふさごうとする",
    "でしょう。",

    ""
};

char GC_Intro_Text_Fred[][TEXT_LINE_SIZE] = {
    "とうとうここまで来ましたね、",
    "ここが最後のステージのゴーストキ",
    "ャッスルです。",

    "この先、奇妙なゴーストたちがフレ",
    "ッドの行く手をふさごうとする",
    "でしょう。",

    ""
};

char GC_Intro_Text_Linda[][TEXT_LINE_SIZE] = {
    "とうとうここまで来ましたね、",
    "ここが最後のステージのゴーストキ",
    "ャッスルです。",

    "この先、奇妙なゴーストたちがリン",
    "ダの行く手をふさごうとする",
    "でしょう。",

    ""
};

char GC_Intro_Text_Black[][TEXT_LINE_SIZE] = {
    "とうとうここまで来ましたね、",
    "ここが最後のステージのゴーストキ",
    "ャッスルです。",

    "この先、奇妙なゴーストたちがブラ",
    "ックの行く手をふさごうとする",
    "でしょう。",

    ""
};

char GC_Intro_Text_White[][TEXT_LINE_SIZE] = {
    "とうとうここまで来ましたね、",
    "ここが最後のステージのゴーストキ",
    "ャッスルです。",

    "この先、奇妙なゴーストたちがホワ",
    "イトの行く手をふさごうとする",
    "でしょう。",

    ""
};

char Training_Intro_Text_Davy[][TEXT_LINE_SIZE] = {
    "デイビー。",
    "ここでは、あなたの舌テクニックを",
    "試すことが出来ます。",

    "１〜５の部屋でクリアするタイムを",
    "きそって下さい。",
    NULL_LINE,

    "くわしい説明はそれぞれの部屋で",
    "しますね。がんばっていいタイムを",
    "出してください。",

    ""
};

char Training_Intro_Text_Jack[][TEXT_LINE_SIZE] = {
    "ジャック。",
    "ここでは、あなたの舌テクニックを",
    "試すことが出来ます。",

    "１〜５の部屋でクリアするタイムを",
    "きそって下さい。",
    NULL_LINE,

    "くわしい説明はそれぞれの部屋で",
    "しますね。がんばっていいタイムを",
    "出してください。",

    ""
};

char Training_Intro_Text_Linda[][TEXT_LINE_SIZE] = {
    "リンダ。",
    "ここでは、あなたの舌テクニックを",
    "試すことが出来ます。",

    "１〜５の部屋でクリアするタイムを",
    "きそって下さい。",
    NULL_LINE,

    "くわしい説明はそれぞれの部屋で",
    "しますね。がんばっていいタイムを",
    "出してください。",

    ""
};

char Training_Intro_Text_Fred[][TEXT_LINE_SIZE] = {
    "フレッド。",
    "ここでは、あなたの舌テクニックを",
    "試すことが出来ます。",

    "１〜５の部屋でクリアするタイムを",
    "きそって下さい。",
    NULL_LINE,

    "くわしい説明はそれぞれの部屋で",
    "しますね。がんばっていいタイムを",
    "出してください。",

    ""
};

char Training_Intro_Text_Black[][TEXT_LINE_SIZE] = {
    "ブラック。",
    "ここでは、あなたの舌テクニックを",
    "試すことが出来ます。",

    "１〜５の部屋でクリアするタイムを",
    "きそって下さい。",
    NULL_LINE,

    "くわしい説明はそれぞれの部屋で",
    "しますね。がんばっていいタイムを",
    "出してください。",

    ""
};

char Training_Intro_Text_White[][TEXT_LINE_SIZE] = {
    "ホワイト。",
    "ここでは、あなたの舌テクニックを",
    "試すことが出来ます。",

    "１〜５の部屋でクリアするタイムを",
    "きそって下さい。",
    NULL_LINE,

    "くわしい説明はそれぞれの部屋で",
    "しますね。がんばっていいタイムを",
    "出してください。",

    ""
};

char Training_Room_1_Text[][TEXT_LINE_SIZE] = {
    "この部屋は、真ん中にいるチョコ",
    "キッズをすべてやっつけるとクリア",
    "です。Ｂボタンで舌をのばして",

    "敵をからめます。そして",
    "もう１度Ｂボタンを押すとマシン",
    "ガンアタックをします。",

    ""
};

char Training_Room_4_Text[][TEXT_LINE_SIZE] = {
    "ここは、クイック移動の部屋です。",
    "Ｂボタンを押して杭をつかんで",
    "下さい。",

    "Ｂボタンを押しつづけると次の台に",
    "移れます。落ちたら、またここに戻",
    "ってきて始めてください。",

    ""
};

char Training_Room_2_Text[][TEXT_LINE_SIZE] = {
    "ここは、台の上にのって鬼火をボム",
    "めがけてあてて下さい。すべてバク",
    "ハツさせるとクリアです。",

    "Ｒトリガーを押しながら３Ｄスティ",
    "ックを動かすと、その場で回転する",
    "のでねらいやすいですよ。",

    ""
};

char Training_Room_5_Text[][TEXT_LINE_SIZE] = {
    "さて、ここではクイック回転のタイ",
    "ムアタック。Ｂボタンを押して杭",
    "をつかんで下さい。",

    "つかんだら回転したい方向に３Ｄス",
    "ティックを動かし、Ａボタンをいっ",
    "しょに押して下さい。",

    ""
};

char Training_Room_3_Text[][TEXT_LINE_SIZE] = {
    "この部屋では、舌高跳びを使って頂",
    "上までのぼって下さい。歩きながら",
    "Ｚトリガーを押すと、",

    "逆立ちをします。タイミングよく",
    "Ａボタンを押して高くジャンプ",
    "して下さい。",

    ""
};

char JL_Boss_Text[][TEXT_LINE_SIZE] = {
    "もうすぐボスとの対戦です。",
    "リザードコングは狂暴で、岩を",
    "なげてきます。",

    ""
};

char AL_Boss_Text[][TEXT_LINE_SIZE] = {
    "この先の部屋ではアントランドの",
    "ボス、クインテラが待ちかまえて",
    "います。",

    "クインテラを怒らせると、",
    "巨大なしっぽで回転攻撃をして",
    "くるので、気をつけて下さい。",

    ""
};

char BL_Boss_Text[][TEXT_LINE_SIZE] = {
    "もうすぐボスの部屋です。",
    "ボムドッカンは体当たりで",
    "攻撃をしてきます。",

    "ダメージをあたえていくと、",
    "だんだん動きが速くなっていく",
    "ので、注意して下さい。",

    ""
};

char KL_Boss_Text[][TEXT_LINE_SIZE] = {
    "キッズランドのボスは、いちご",
    "爆弾ではげしい攻撃をしてきます。",
    "気をつけて下さいね。",

    ""
};

//DC Boss
char DC_Boss_Text[][TEXT_LINE_SIZE] = {
    "このステージのボスは、砂にもぐる",
    "のが得意です。もぐる前にスナカリ",
    "をぶつけて、やっつけましょう。",

    ""
};

char GC_Boss_Text_Davy[][TEXT_LINE_SIZE] = {
    "いよいよ最後のボスです。",
    "とても強いですが、デイビーなら",
    "きっと倒せるはずです。",

    "がんばって下さいね。",
    "では、私はひと足先に出口で待って",
    "います。",

    ""
};

char GC_Boss_Text_Jack[][TEXT_LINE_SIZE] = {
    "いよいよ最後のボスです。",
    "とても強いですが、ジャックなら",
    "きっと倒せるはずです。",

    "がんばって下さいね。",
    "では、私はひと足先に出口で待って",
    "います。",

    ""
};

char GC_Boss_Text_Linda[][TEXT_LINE_SIZE] = {
    "いよいよ最後のボスです。",
    "とても強いですが、リンダなら",
    "きっと倒せるはずです。",

    "がんばって下さいね。",
    "では、私はひと足先に出口で待って",
    "います。",

    ""
};

char GC_Boss_Text_Fred[][TEXT_LINE_SIZE] = {
    "いよいよ最後のボスです。",
    "とても強いですが、フレッドなら",
    "きっと倒せるはずです。",

    "がんばって下さいね。",
    "では、私はひと足先に出口で待って",
    "います。",

    ""
};

char GC_Boss_Text_Black[][TEXT_LINE_SIZE] = {
    "いよいよ最後のボスです。",
    "とても強いですが、ブラックなら",
    "きっと倒せるはずです。",

    "がんばって下さいね。",
    "では、私はひと足先に出口で待って",
    "います。",

    ""
};

char GC_Boss_Text_White[][TEXT_LINE_SIZE] = {
    "いよいよ最後のボスです。",
    "とても強いですが、ホワイトなら",
    "きっと倒せるはずです。",

    "がんばって下さいね。",
    "では、私はひと足先に出口で待って",
    "います。",

    ""
};

char (*Dialogue[CHARA_TOTAL][20])[TEXT_LINE_SIZE] = {
    //Davy
    {
    JL_IntroText,
    AL_Intro_Text_Davy,
    BL_Intro_Text,
    KL_Intro_Text,
    DC_Intro_Text,
    GC_Intro_Text_Davy,
    Training_Intro_Text_Davy,
    Training_Room_1_Text,
    Training_Room_4_Text,
    Training_Room_2_Text,
    Training_Room_5_Text,
    Training_Room_3_Text,
    JL_Boss_Text,
    AL_Boss_Text,
    BL_Boss_Text,
    KL_Boss_Text,
    DC_Boss_Text,
    GC_Boss_Text_Davy,
    NULL, NULL
    },

    //Jack
    {
    JL_IntroText,
    AL_Intro_Text_Jack,
    BL_Intro_Text,
    KL_Intro_Text,
    DC_Intro_Text,
    GC_Intro_Text_Jack,
    Training_Intro_Text_Jack,
    Training_Room_1_Text,
    Training_Room_4_Text,
    Training_Room_2_Text,
    Training_Room_5_Text,
    Training_Room_3_Text,
    JL_Boss_Text,
    AL_Boss_Text,
    BL_Boss_Text,
    KL_Boss_Text,
    DC_Boss_Text,
    GC_Boss_Text_Jack,
    NULL, NULL
    },

    //Fred
    {
    JL_IntroText,
    AL_Intro_Text_Fred,
    BL_Intro_Text,
    KL_Intro_Text,
    DC_Intro_Text,
    GC_Intro_Text_Fred,
    Training_Intro_Text_Fred,
    Training_Room_1_Text,
    Training_Room_4_Text,
    Training_Room_2_Text,
    Training_Room_5_Text,
    Training_Room_3_Text,
    JL_Boss_Text,
    AL_Boss_Text,
    BL_Boss_Text,
    KL_Boss_Text,
    DC_Boss_Text,
    GC_Boss_Text_Fred,
    NULL, NULL
    },

    //Linda
    {
    JL_IntroText,
    AL_Intro_Text_Linda,
    BL_Intro_Text,
    KL_Intro_Text,
    DC_Intro_Text,
    GC_Intro_Text_Linda,
    Training_Intro_Text_Linda,
    Training_Room_1_Text,
    Training_Room_4_Text,
    Training_Room_2_Text,
    Training_Room_5_Text,
    Training_Room_3_Text,
    JL_Boss_Text,
    AL_Boss_Text,
    BL_Boss_Text,
    KL_Boss_Text,
    DC_Boss_Text,
    GC_Boss_Text_Linda,
    NULL, NULL
    },

    //Black
    {
    JL_IntroText,
    AL_Intro_Text_Black,
    BL_Intro_Text,
    KL_Intro_Text,
    DC_Intro_Text,
    GC_Intro_Text_Black,
    Training_Intro_Text_Black,
    Training_Room_1_Text,
    Training_Room_4_Text,
    Training_Room_2_Text,
    Training_Room_5_Text,
    Training_Room_3_Text,
    JL_Boss_Text,
    AL_Boss_Text,
    BL_Boss_Text,
    KL_Boss_Text,
    DC_Boss_Text,
    GC_Boss_Text_Black,
    NULL, NULL
    },

    //White
    {
    JL_IntroText,
    AL_Intro_Text_White,
    BL_Intro_Text,
    KL_Intro_Text,
    DC_Intro_Text,
    GC_Intro_Text_White,
    Training_Intro_Text_White,
    Training_Room_1_Text,
    Training_Room_4_Text,
    Training_Room_2_Text,
    Training_Room_5_Text,
    Training_Room_3_Text,
    JL_Boss_Text,
    AL_Boss_Text,
    BL_Boss_Text,
    KL_Boss_Text,
    DC_Boss_Text,
    GC_Boss_Text_White,
    NULL, NULL
    }

};


//Intro Movie
char ItsAnotherBeautifulDay_Text[][TEXT_LINE_SIZE] = {
    "　　　今日もいい天気です。　　　",
    "",
};

char Rabbit_Busy_Busy_Text[][TEXT_LINE_SIZE] = {
    "「いそがしい、　あーいそがしい」",
    "",
};

char ThisIsNotGoingToGetUsThere_Text[][TEXT_LINE_SIZE] = {
    "「これでは、時間に間に合わない」",
    "",
};

char WhatCantWeMakeInTime_Text[][TEXT_LINE_SIZE] = {
    "　何に間に合わないのでしょう？　",
    "",
};

char CuriousChameleon_Text[][TEXT_LINE_SIZE] = {
    "　　好奇心の強いカメレオンは、　",
    "　追いかけて行くことにしました。",
    "",
};

char ChameleonsBodyHasTransformed_Text[][TEXT_LINE_SIZE] = {
    "　　おやっ、カメレオンの体が　　",
    "　　　変身してしまいました。　　",
    "",
};

char WhereIsThatRabbit_Text[][TEXT_LINE_SIZE] = {
    "　ところで、あのうさぎはどこに　", //By the way, where is that rabbit?
    "　　　　行ったのでしょう。　　　", //I guess he went there
    ""
};


//Ending Movie
char Davy_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　　　　やあ、デイビー。",
    "　　どうでしたか？この世界は。",
    "",
};

char Jack_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　　　　やあ、ジャック。",
    "　　どうでしたか？この世界は。",
    "",
};

char Fred_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　　　　やあ、フレッド。",
    "　　どうでしたか？この世界は。",
    "",
};

char Linda_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　　　　やあ、リンダ。",
    "　　どうでしたか？この世界は。",
    "",
};

char Black_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　　　　やあ、ブラック。",
    "　　どうでしたか？この世界は。",
    "",
};

char White_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　　　　やあ、ホワイト。",
    "　　どうでしたか？この世界は。",
    "",
};

char Unk_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　　　　楽しかったですか？",
    "　　また、遊びに来て下さいね。",
    "",
};

char Unk2_EndingMove_Text[][TEXT_LINE_SIZE] = {
    "　いつでもお待ちしております。",
    "　　　　それでは．．．",
    "",
};

//unique dialogue, intro/outro
char (*D_800F59B8[CHARA_TOTAL + 1][20])[TEXT_LINE_SIZE] = {
    //Davy
    {
    ItsAnotherBeautifulDay_Text,
    Rabbit_Busy_Busy_Text,
    ThisIsNotGoingToGetUsThere_Text,
    WhatCantWeMakeInTime_Text,
    CuriousChameleon_Text,
    Davy_EndingMove_Text,
    Unk_EndingMove_Text,
    Unk2_EndingMove_Text,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
    },

    //Jack
    {
    ItsAnotherBeautifulDay_Text,
    Rabbit_Busy_Busy_Text,
    ThisIsNotGoingToGetUsThere_Text,
    WhatCantWeMakeInTime_Text,
    CuriousChameleon_Text,
    Jack_EndingMove_Text,
    Unk_EndingMove_Text,
    Unk2_EndingMove_Text,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
    },

    //Fred
    {
    ItsAnotherBeautifulDay_Text,
    Rabbit_Busy_Busy_Text,
    ThisIsNotGoingToGetUsThere_Text,
    WhatCantWeMakeInTime_Text,
    CuriousChameleon_Text,
    Fred_EndingMove_Text,
    Unk_EndingMove_Text,
    Unk2_EndingMove_Text,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
    },

    //Linda
    {
    ItsAnotherBeautifulDay_Text,
    Rabbit_Busy_Busy_Text,
    ThisIsNotGoingToGetUsThere_Text,
    WhatCantWeMakeInTime_Text,
    CuriousChameleon_Text,
    Linda_EndingMove_Text,
    Unk_EndingMove_Text,
    Unk2_EndingMove_Text,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
    },

    //Black (?)
    {
    ItsAnotherBeautifulDay_Text,
    Rabbit_Busy_Busy_Text,
    ThisIsNotGoingToGetUsThere_Text,
    WhatCantWeMakeInTime_Text,
    CuriousChameleon_Text,
    Linda_EndingMove_Text,
    Unk_EndingMove_Text,
    Unk2_EndingMove_Text,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
    },

    //White
    {
    ItsAnotherBeautifulDay_Text,
    Rabbit_Busy_Busy_Text,
    ThisIsNotGoingToGetUsThere_Text,
    WhatCantWeMakeInTime_Text,
    CuriousChameleon_Text,
    White_EndingMove_Text,
    Unk_EndingMove_Text,
    Unk2_EndingMove_Text,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
    },

    //Unknown
    {
    ItsAnotherBeautifulDay_Text,
    Rabbit_Busy_Busy_Text,
    ThisIsNotGoingToGetUsThere_Text,
    WhatCantWeMakeInTime_Text,
    CuriousChameleon_Text,
    Black_EndingMove_Text,
    Unk_EndingMove_Text,
    Unk2_EndingMove_Text,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
    },
};

char BilliardsEnoughCarrots_Text[][TEXT_LINE_SIZE] = {
    "この扉を開くにはキャロットが",
    "４個必要です。",
    NULL_LINE,


    "よく集めましたね。この部屋では",
    "ビリヤードが遊べます。",
    NULL_LINE,

    "玉を全部ポケットに入れると、",
    "クラウンがもらえますよ。",

    ""
};

char BilliardsNotEnoughCarrots_Text[][TEXT_LINE_SIZE] = {
    "この扉を開くにはキャロットが",
    "４個必要です。",
    NULL_LINE,

    "キャロットを４個集めてから。",
    "また来て下さい。",
    NULL_LINE,

    ""
};

char BowlingEnoughCarrots_Text[][TEXT_LINE_SIZE] = {
    "この扉を開くにはキャロットが",
    "２個必要です。",
    NULL_LINE,

    "よく集めましたね。",
    "この部屋ではボーリングで遊ぶ",
    "ことが出来ます。",

    "２００点以上得点をとると",
    "クラウンがもらえますよ。",
    "がんばって下さい。",

    ""
};

char BowlingNotEnoughCarrots_Text[][TEXT_LINE_SIZE] = {
    "この扉を開くにはキャロットが",
    "２個必要です。",
    NULL_LINE,

    "また集めてから来て下さい。",
    "キャロットはこの世界に",
    "５つかくされていますよ。",

    ""
};

char BlackFightEnoughCarrots_Text[][TEXT_LINE_SIZE] = {
    "この扉を開くにはキャロットが",
    "５個必要です。",
    NULL_LINE,

    "キャロットを全部集めたのですね。",
    "すごいですね。",
    "さあ、部屋にお入り下さい。",

    "この部屋では、強敵があなたを",
    "待っています。",
    NULL_LINE,

    ""
};

char BlackFightNotEnoughCarrots_Text[][TEXT_LINE_SIZE] = {
    "この扉を開くにはキャロットが",
    "５個必要です。",
    NULL_LINE,

    "また集めてから来て下さい。",
    "キャロットはこの世界に",
    "５つかくされていますよ。",

    ""
};

char (*D_800F67A0[6])[TEXT_LINE_SIZE] = {
    BilliardsEnoughCarrots_Text,
    BilliardsNotEnoughCarrots_Text,
    BowlingEnoughCarrots_Text,
    BowlingNotEnoughCarrots_Text,
    BlackFightEnoughCarrots_Text,
    BlackFightNotEnoughCarrots_Text
};

char BilliardsDoorEntry_Text[][TEXT_LINE_SIZE] = {
    "この扉を開くには５０個の", //To open this door, 50
    "コレクトアイテムが必要です。", //collectibles are required
    ""
};

//These are just pointers to 2D arrays
char (*D_800F686C)[TEXT_LINE_SIZE] = ChameleonsBodyHasTransformed_Text;
char (*D_800F6870)[TEXT_LINE_SIZE] = WhereIsThatRabbit_Text;
char (*D_800F6874)[TEXT_LINE_SIZE] = BilliardsDoorEntry_Text;


s32 D_800F6878 = 0;
s32 D_800F687C = 1;

s32 D_800F6880 = 0;

s32 rngSeed = 0x0A6B99CD;

s32 gPrevButtons[4] = {-1, -1, -1, -1};
s32 gButtons[4] = {-1, -1, -1, -1};

s32 D_800F68A8 = 1;
s32 D_800F68AC = 0;

s32 D_800F68B0[4] = {0,0,0,0};

s32 D_800F68C0 = -1;
s32 D_800F68C4[2] = {-1, 0};
s32 D_800F68CC = 0;

Mtx D_800F68D0[5] = {
    ZERO_MTX,
    IDENTITY,
    IDENTITY,
    IDENTITY,
    IDENTITY
};

//these are sprite 'tile defs'

//unused
u8 D_800F6A10[64] = {
 0, 1, 2, 3, 4, 5, 6, 7,
 8, 9,10,11,12,13,14,15,
16,17,18,19,20,21,22,23,
24,25,26,27,28,29,30,31,
32,33,34,35,36,37,38,39,
40,41, 0, 0, 0, 1, 2, 1,
 0, 1, 2, 3, 4, 5, 2, 3,
 4, 5, 2, 3, 4, 5, 0, 0
};

//static0_textBig_ia8_PNG
char D_800F6A50[] = "　ＡＢＣＤＥＦＧＨＩＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺ"
                    "０１２３４５６７８９？！＆’”：（）／＋Ｘ＠〜ｘ−ｃ　";

//static0_textSmall_ia4_PNG
char D_800F6AC0[] = "　アイウエオカキクケコサシスセソタチツテトナニヌネノハヒフヘホマ"
                    "ミムメモヤユヨラリルレロワヲンァィゥェォャュョガギグゲゴザジズゼ"
                    "ゾダヂヅデドバビブベボパピプペポあいうえおかきくけこさしすせそた"
                    "ちつてとなにぬねのはひふへほまみむめもやゆよらりるれろわをんぁぃ"
                    "ぅぇぉゃゅょがぎぐげござじずぜぞだぢづでどばびぶべぼぱぴぷぺぽ０"
                    "１２３４５６７８９？！＆”：（）．，−＋×÷＝「」〜ＡＢＣＤＥＦ"
                    "ＧＨＩＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺッっー続接状異動振下正用"
                    "切源電技部屋上説明出真中舌敵度押匹台鬼火場回転高跳使頂歩逆立移杭"
                    "次落戻始方向不思議世界入口体操作練習行床大菓子来最後奇妙手私足先"
                    "’、。進地深数砂漠城通壁待受流落石要注意今日天気時間合何好心強追"
                    "変身遊対戦狂暴怒攻撃当速得爆倒点全試玉以個持扉開必集巨岩弾楽前挿";

//extImages_symbols_ia8_PNG
char D_800F6D84[] = "ＡＢＣＤＥＦＧＨＩＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺ４６　";

//extImages_greenAntBottom_ci8_PNG
u8 D_800F6DC0[4] = {0, 1, 2, 3};

//extImages_greenAntTop_ci8_PNG
u8 D_800F6DC4[4] = {0, 0, 0, 0};

//extImages_caterpillar_ci8_PNG
u8 D_800F6DC8[4] = {0, 1, 0, 0};

//extImages_caterpillarPart_ci8_PNG
u8 D_800F6DCC[4] = {0, 0, 0, 0};

//extImages_antHole_ia4_PNG
u8 D_800F6DD0[4] = {0, 0, 0, 0};

//extImages_sandCrabAppearUnused_ia4_PNG
u8 D_800F6DD4[] = {0, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 7, 8};

//extImages_grayAnt_ci8_PNG
u8 D_800F6DE4[4] = {0, 1, 2, 3};

//static0_health_ci8_PNG
u8 D_800F6DE8[4] = {0, 0, 0, 0};

//static0_bar_ci4_PNG
u8 D_800F6DEC[4] = {0, 1, 2, 0};

u8 D_800F6DF0[4] = {0, 0, 0, 0};

u8 D_800F6DF4[4] = {0, 0, 0, 0};

u8 D_800F6DF8[4] = {0, 0, 0, 0};

u8 D_800F6DFC[4] = {0, 0, 0, 0};

u8 D_800F6E00[20] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 2, 2, 2, 2, 1, 0, 0, 0};

u8 D_800F6E14[20] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 2, 2, 2, 2, 1, 0, 0, 0};

u8 D_800F6E28[8] = {2, 2, 1, 0, 0, 1, 0, 0};

u8 D_800F6E30[8] = {2, 2, 1, 0, 0, 1, 0, 0};

u8 D_800F6E38[4] = {0, 0, 0, 0};

u8 D_800F6E3C[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 0};

u8 D_800F6E50[8] = {0, 1, 2, 3, 2, 1, 0, 0};

u8 D_800F6E58[4] = {0, 1, 2, 0};

u8 D_800F6E5C[4] = {0, 1, 2, 0};

u8 D_800F6E60[4] = {0, 1, 2, 0};

u8 D_800F6E64[4] = {0, 1, 2, 1};

u8 D_800F6E68[4] = {0, 0, 0, 0};

u8 D_800F6E6C[4] = {0, 1, 2, 1};

u8 D_800F6E70[4] = {0, 1, 0, 0};

u8 D_800F6E74[4] = {0, 1, 0, 0};

u8 D_800F6E78[8] = {1, 2, 1, 2, 1, 0, 1, 3};

u8 D_800F6E80[4] = {0, 1, 2, 3};

u8 D_800F6E84[4] = {0, 0, 0, 0};

u8 D_800F6E88[4] = {0, 0, 0, 0};

u8 D_800F6E8C[4] = {0, 0, 0, 0};

u8 D_800F6E90[4] = {0, 0, 0, 0};

u8 D_800F6E94[4] = {0, 1, 0, 0};

u8 D_800F6E98[4] = {0, 0, 0, 0};

u8 D_800F6E9C[4] = {0, 1, 2, 0};

u8 D_800F6EA0[8] = {0, 1, 2, 3, 4, 5, 0, 0};

u8 D_800F6EA8[4] = {0, 1, 2, 1};

u8 D_800F6EAC[4] = {0, 1, 2, 1};

u8 D_800F6EB0[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0};

u8 D_800F6EBC[4] = {0, 1, 0, 0};

u8 D_800F6EC0[4] = {0, 0, 0, 0};

u8 D_800F6EC4[4] = {0, 1, 2, 0};

u8 D_800F6EC8[4] = {0, 0, 0, 0};

u8 D_800F6ECC[4] = {0, 1, 0, 0};

u8 D_800F6ED0[4] = {0, 1, 2, 3};

u8 D_800F6ED4[8] = {0, 1, 2, 3, 1, 0, 0, 0};

u8 D_800F6EDC[4] = {0, 0, 0, 0};

u8 D_800F6EE0[4] = {0, 0, 0, 0};

u8 D_800F6EE4[4] = {0, 0, 0, 0};

u8 D_800F6EE8[4] = {0, 0, 0, 0};

u8 D_800F6EEC[4] = {0, 0, 0, 0};

u8 D_800F6EF0[4] = {0, 0, 0, 0};

u8 D_800F6EF4[4] = {0, 0, 0, 0};

u8 D_800F6EF8[4] = {0, 0, 0, 0};

u8 D_800F6EFC[4] = {0, 0, 0, 0};

u8 D_800F6F00[4] = {0, 0, 0, 0};

u8 D_800F6F04[48] = {
    0, 1, 2, 3,
    4, 5, 6, 7,
    0, 1, 2, 6,
    7, 5, 6, 7,
    0, 1, 2, 3,
    4, 5, 6, 7,
    0, 1, 2, 6,
    7, 5, 6, 7,
    0, 1, 2, 3,
    4, 5, 0, 1,
    2, 3, 4, 5,
    6, 7, 0, 0
};

u8 D_800F6F34[4] = {0, 0, 0, 0};

u8 D_800F6F38[4] = {0, 0, 0, 0};

u8 D_800F6F3C[4] = {0, 0, 0, 0};

u8 D_800F6F40[4] = {0, 0, 0, 0};

u8 D_800F6F44[4] = {0, 0, 0, 0};

u8 D_800F6F48[4] = {0, 0, 0, 0};

u8 D_800F6F4C[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0};

u8 D_800F6F58[4] = {0, 1, 2, 0};

u8 D_800F6F5C[8] = {0, 1, 2, 3, 4, 5, 6, 0};

u8 D_800F6F64[4] = {0, 1, 2, 0};

u8 D_800F6F68[4] = {0, 0, 0, 0};

u8 D_800F6F6C[4] = {0, 0, 0, 0};

u8 D_800F6F70[4] = {0, 0, 0, 0};

u8 D_800F6F74[4] = {0, 1, 0, 0};

u8 D_800F6F78[4] = {0, 1, 0, 0};

u8 D_800F6F7C[4] = {0, 1, 0, 0};

u8 D_800F6F80[4] = {0, 1, 0, 0};

u8 D_800F6F84[4] = {0, 1, 0, 0};

u8 D_800F6F88[4] = {0, 1, 0, 0};

u8 D_800F6F8C[4] = {0, 0, 0, 0};

u8 D_800F6F90[4] = {0, 0, 0, 0};

u8 D_800F6F94[8] = {0, 1, 2, 3, 4, 5, 6, 0};

u8 D_800F6F9C[8] = {0, 1, 2, 3, 4, 5, 6, 0};

u8 D_800F6FA4[40] = {
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9,10,11,
    12,13,14,15,
    16,17,18,19,
    20,21,22,23,
    24,25,26,27,
    28,29,30,31,
    32,33,34,35,
    36,37,38,39
};

u8 D_800F6FCC[4] = {0, 0, 0, 0};

u8 D_800F6FD0[4] = {0, 0, 0, 0};

u8 D_800F6FD4[4] = {0, 0, 0, 0};

u8 D_800F6FD8[4] = {0, 0, 0, 0};

u8 D_800F6FDC[4] = {0, 0, 0, 0};

u8 D_800F6FE0[4] = {0, 0, 0, 0};

u8 D_800F6FE4[4] = {0, 0, 0, 0};

u8 D_800F6FE8[4] = {0, 0, 0, 0};

u8 D_800F6FEC[4] = {0, 0, 0, 0};

u8 D_800F6FF0[4] = {0, 0, 0, 0};

u8 D_800F6FF4[4] = {0, 0, 0, 0};

u8 D_800F6FF8[4] = {0, 0, 0, 0};

u8 D_800F6FFC[4] = {0, 0, 0, 0};

u8 D_800F7000[4] = {0, 0, 0, 0};

u8 D_800F7004[4] = {0, 0, 0, 0};

u8 D_800F7008[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0};

u8 D_800F7014[4] = {0, 0, 0, 0};

u8 D_800F7018[4] = {0, 0, 0, 0};

u8 D_800F701C[4] = {0, 0, 0, 0};

u8 D_800F7020[4] = {0, 0, 0, 0};

u8 D_800F7024[4] = {0, 0, 0, 0};

u8 D_800F7028[4] = {0, 0, 0, 0};

u8 D_800F702C[4] = {0, 0, 0, 0};

u8 D_800F7030[4] = {0, 0, 0, 0};

u8 D_800F7034[4] = {0, 0, 0, 0};

u8 D_800F7038[4] = {0, 0, 0, 0};

u8 D_800F703C[4] = {0, 0, 0, 0};

u8 D_800F7040[4] = {0, 0, 0, 0};

u8 D_800F7044[4] = {0, 0, 0, 0};

u8 D_800F7048[4] = {0, 0, 0, 0};

u8 D_800F704C[4] = {0, 0, 0, 0};

u8 D_800F7050[4] = {0, 0, 0, 0};

u8 D_800F7054[4] = {0, 0, 0, 0};

u8 D_800F7058[4] = {0, 0, 0, 0};

u8 D_800F705C[4] = {0, 0, 0, 0};

u8 D_800F7060[4] = {0, 0, 0, 0};

u8 D_800F7064[4] = {0, 0, 0, 0};

u8 D_800F7068[4] = {0, 0, 0, 0};

u8 D_800F706C[4] = {0, 0, 0, 0};

u8 D_800F7070[4] = {0, 0, 0, 0};

u8 D_800F7074[4] = {0, 0, 0, 0};

u8 D_800F7078[4] = {0, 0, 0, 0};

u8 D_800F707C[4] = {0, 0, 0, 0};

u8 D_800F7080[4] = {0, 0, 0, 0};

u8 D_800F7084[4] = {0, 0, 0, 0};

u8 D_800F7088[4] = {0, 0, 0, 0};

u8 D_800F708C[4] = {0, 0, 0, 0};

u8 D_800F7090[4] = {0, 0, 0, 0};

u8 D_800F7094[4] = {0, 0, 0, 0};

u8 D_800F7098[4] = {0, 0, 0, 0};

u8 D_800F709C[4] = {0, 0, 0, 0};

u8 D_800F70A0[4] = {0, 0, 0, 0};

u8 D_800F70A4[4] = {0, 0, 0, 0};

u8 D_800F70A8[4] = {0, 0, 0, 0};

u8 D_800F70AC[4] = {0, 0, 0, 0};

u8 D_800F70B0[4] = {0, 0, 0, 0};

u8 D_800F70B4[4] = {0, 0, 0, 0};

u8 D_800F70B8[4] = {0, 0, 0, 0};

u8 D_800F70BC[4] = {0, 0, 0, 0};

u8 D_800F70C0[4] = {0, 0, 0, 0};

u8 D_800F70C4[4] = {0, 0, 0, 0};

u8 D_800F70C8[4] = {0, 0, 0, 0};

u8 D_800F70CC[4] = {0, 0, 0, 0};

u8 D_800F70D0[4] = {0, 0, 0, 0};

u8 D_800F70D4[4] = {0, 0, 0, 0};

u8 D_800F70D8[4] = {0, 0, 0, 0};

u8 D_800F70DC[4] = {0, 0, 0, 0};

u8 D_800F70E0[4] = {0, 0, 0, 0};

u8 D_800F70E4[4] = {0, 0, 0, 0};

u8 D_800F70E8[4] = {0, 0, 0, 0};

u8 D_800F70EC[4] = {0, 0, 0, 0};

u8 D_800F70F0[4] = {0, 0, 0, 0};

u8 D_800F70F4[4] = {0, 0, 0, 0};

u8 D_800F70F8[4] = {0, 0, 0, 0};

u8 D_800F70FC[4] = {0, 0, 0, 0};

u8 D_800F7100[4] = {0, 0, 0, 0};

u8 D_800F7104[4] = {0, 0, 0, 0};

u8 D_800F7108[4] = {0, 0, 0, 0};

u8 D_800F710C[4] = {0, 0, 0, 0};

u8 D_800F7110[4] = {0, 0, 0, 0};

u8 D_800F7114[4] = {0, 0, 0, 0};

u8 D_800F7118[4] = {0, 0, 0, 0};

u8 D_800F711C[4] = {0, 0, 0, 0};

u8 D_800F7120[4] = {0, 0, 0, 0};

u8 D_800F7124[4] = {0, 0, 0, 0};

u8 D_800F7128[4] = {0, 0, 0, 0};

u8 D_800F712C[4] = {0, 0, 0, 0};

u8 D_800F7130[4] = {0, 0, 0, 0};

u8 D_800F7134[4] = {0, 0, 0, 0};

u8 D_800F7138[4] = {0, 0, 0, 0};

u8 D_800F713C[4] = {0, 0, 0, 0};

u8 D_800F7140[4] = {0, 1, 2, 0};

u8 D_800F7144[8] = {0, 1, 2, 3, 4, 5, 6, 7};

u8 D_800F714C[8] = {0, 1, 2, 3, 4, 5, 6, 7};

u8 D_800F7154[4] = {0, 0, 0, 0};

u8 D_800F7158[4] = {0, 0, 0, 0};

u8 D_800F715C[4] = {0, 0, 0, 0};

u8 D_800F7160[4] = {0, 0, 0, 0};

u8 D_800F7164[4] = {0, 0, 0, 0};

u8 D_800F7168[4] = {0, 0, 0, 0};

u8 D_800F716C[4] = {0, 1, 0, 0};

u8 D_800F7170[4] = {0, 1, 0, 0};

u8 D_800F7174[4] = {0, 1, 0, 0};

u8 D_800F7178[4] = {0, 1, 0, 0};

u8 D_800F717C[4] = {0, 1, 0, 0};

u8 D_800F7180[4] = {0, 1, 0, 0};

u8 D_800F7184[4] = {0, 0, 0, 0};

u8 D_800F7188[4] = {0, 0, 0, 0};

u8 D_800F718C[4] = {0, 0, 0, 0};

u8 D_800F7190[4] = {0, 1, 0, 0};

u8 D_800F7194[8] = {0, 1, 2, 3, 4, 5, 0, 0};

u8 D_800F719C[48] = {
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9,10,11,
    12,13,14,15,
    16,17,18,19,
    20,21,22,23,
    24,25,26,27,
    28,29,30,31,
    32,33,34,35,
    36,37,38,39,
    40,41,42,43,
    44,45,46,47
};

u8 D_800F71CC[4] = {0, 1, 0, 0};

u8 D_800F71D0[48] = {
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9,10,11,
    12,13,14,15,
    16,17,18,19,
    20,21,22,23,
    24,25,26,27,
    28,29,30,31,
    32,33,34,35,
    36,37,38,39,
    40,41,42,43,
    44,45,46,47
};

u8 D_800F7200[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};


u8 D_800F720C[48] = {
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9,10,11,
    12,13,14,15,
    16,17,18,19,
    20,21,22,23,
    24,25,26,27,
    28,29,30,31,
    32,33,34,35,
    36,37,38,39,
    40,41,42,43,
    44,45,46,47
};

u8 D_800F723C[4] = {0, 1, 2, 3};

u8 D_800F7240[4] = {0, 0, 0, 0};

u8 D_800F7244[4] = {0, 0, 0, 0};

u8 D_800F7248[4] = {0, 0, 0, 0};

u8 D_800F724C[4] = {0, 1, 2, 3};

u8 D_800F7250[4] = {0, 0, 0, 0};

u8 D_800F7254[4] = {0, 0, 0, 0};

u8 D_800F7258[4] = {0, 0, 0, 0};

u8 D_800F725C[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 0, 0};

u8 D_800F726C[116] = {
    0, 0, 0, 1,
    1, 2, 3, 4,
    5, 6, 7, 8,
    9,10,11, 1,
    1, 0, 0, 0,
    0, 0, 1, 1,
    0, 0, 1, 1,
    0, 0,11,10,
    9, 8, 7, 6,
    5, 4, 3, 2,
    1, 1, 0, 0,
    0, 0, 0, 0,
    2, 2, 2, 3,
    3, 3, 4, 4,
    4, 5, 5, 5,
    6, 6, 6, 7,
    7, 7, 8, 8,
    8, 9, 9, 9,
   10,10,10,11,
   11,11, 1, 1,
    1, 2, 4, 6,
    8,10, 3, 5,
    7, 9,11, 2,
    4, 6, 8,10,
    3, 5, 7, 9,
   11, 2, 4, 6,
    8,10, 3, 5,
    7, 9,11, 0,
    0, 0, 0, 0
};

u8 D_800F72E0[4] = {0, 0, 0, 0};

u8 D_800F72E4[4] = {0, 0, 0, 0};

u8 D_800F72E8[4] = {0, 0, 0, 0};

u8 D_800F72EC[4] = {0, 0, 0, 0};

u8 D_800F72F0[4] = {0, 0, 0, 0};

u8 D_800F72F4[172] = {
    0, 0, 0, 0,
    1, 2, 3, 4,
    5, 6, 7, 8,
    9,10, 0, 1,
    2, 3, 4, 5,
    6, 7, 8, 9,
   10, 0, 1, 2,
    3, 4, 5, 6,
    7, 8, 9,10,
    0, 1, 2, 3,
    4, 5, 6, 7,
    8, 9,10, 0,
    1, 2, 3, 4,
    5, 6, 7, 8,
    9,10, 0, 1,
    2, 3, 4, 5,
    6, 7, 8, 9,
   10, 0, 0, 0,
    0, 0, 0,11,
   12,13,14,15,
   16,17,18,19,
   20,21,22,23,
   24,25,26,27,
   28,29,30,30,
   30,30,30,30,
   30,30,30,30,
   30,30,31,32,
   33,34,35,35,
   35,34,33,32,
   31,31,31,31,
   32,33,34,35,
   35,35,34,33,
   32,31,31,31,
   32,33,34,35,
   35,35,34,33,
   32,31,31,31,
   32,33,34,35,
   35,35,34,33,
   32,31,31,31,
   31,31,30,28,
   26,24,22,20,
   18,16,14,12,
    0, 0, 0, 0
};

char D_800F73A0[40] = "０１２３４５６７８９ＡＢＣＤＥＦＧ";

#include "gSpriteListings.c"



//weird sprite debug variable
s32 D_800FDF98 = 0;

//sprite scale????
//could also be z?
f32 D_800FDF9C = 218;

//unused?
s32 D_800FDFA0 = 0;

s32 gSpriteFrameBuffer = 0;
s32 D_800FDFA8[2] = {0, 0};
s32 D_800FDFB0[2] = {0, 0};
s32 D_800FDFB8[2] = {0, 0};
s32 D_800FDFC0[2] = {0, 0};
s32 D_800FDFC8[2] = {0, 0};

//these are definitely colors but what for????
//debug printing stuff???
u8 gPrimRed = 255;
u8 gPrimGreen = 255;
u8 gPrimBlue = 255;
u8 gPrimAlpha = 255;

u8 D_800FDFE0 = 0;
u8 D_800FDFE4 = 0;
s32 D_800FDFE8 = 0;
//not even used?
s32 D_800FDFEC = 1;
f32 D_800FDFF0 = 1;
f32 D_800FDFF4 = 0;
f32 D_800FDFF8 = 0;
f32 D_800FDFFC = 0;
s32 D_800FE000 = 0;
f32 D_800FE004 = 0;
f32 D_800FE008 = 0;
f32 D_800FE00C = 0;
f32 D_800FE010 = 0;
f32 D_800FE014 = 0;
f32 D_800FE018 = 0;
f32 D_800FE01C = 0;
f32 D_800FE020 = 0;
f32 D_800FE024 = 0;
f32 D_800FE028 = 0;
f32 D_800FE02C = 0;
f32 D_800FE030 = 0;
f32 D_800FE034 = 0;
f32 D_800FE038 = 0;
f32 D_800FE03C = 0;
f32 D_800FE040 = 0;
f32 D_800FE044 = 0;
f32 D_800FE048 = 0;
f32 D_800FE04C = 0;
f32 D_800FE050 = 0;
f32 D_800FE054 = 0;
f32 D_800FE058 = 0;
f32 D_800FE05C = 0;

f32 D_800FE060 = 1.333333373;
f32 D_800FE064 = 1;
f32 D_800FE068 = 0.5;
f32 D_800FE06C = 0;
f32 D_800FE070 = 0;
f32 D_800FE074 = 0.5;
f32 D_800FE078 = 1;
f32 D_800FE07C = 0;

Gfx D_800FE080[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetTexturePersp(G_TP_NONE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
    gsSPEndDisplayList(),
};

Gfx D_800FE0F0[] = {
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Mtx D_800FE118 = IDENTITY;

s32 gEffectListCount = 0;

s32 D_800FE15C = 0;

s32 D_800FE160 = 0;

s32 D_800FE164 = 0;

//lookup table???
s32 D_800FE168[8] = {
1,
10,
100,
1000,
10000,
100000,
1000000,
10000000
};

s32 D_800FE188 = 0;

//copies of gPrimRed, gPrimGreen, gPrimBlue and gPrimAlpha?
u8 D_800FE18C = 255;
u8 D_800FE190 = 255;
u8 D_800FE194 = 255;
u8 D_800FE198 = 255;

s32 D_800FE19C = 0;

Effect* D_800FE1A0 = NULL;

s32 D_800FE1A4 = 0;

s32 D_800FE1A8 = 0;

f32 D_800FE1AC = 0;

f32 D_800FE1B0 = 0;
f32 D_800FE1B4 = 0;
f32 D_800FE1B8 = 0;

f32 D_800FE1BC = 1;
f32 D_800FE1C0 = 0;
f32 D_800FE1C4 = -90;
f32 D_800FE1C8 = 2;
f32 D_800FE1CC = 6;
f32 D_800FE1D0 = 30;
f32 D_800FE1D4 = 0;
f32 D_800FE1D8 = 0;
f32 D_800FE1DC = 0;
f32 D_800FE1E0 = 0;
f32 D_800FE1E4 = 0;
f32 D_800FE1E8 = 600;
f32 D_800FE1EC = 0;
f32 D_800FE1F0 = 0;
f32 D_800FE1F4 = 0;

f32 D_800FE1F8 = 1;
f32 D_800FE1FC = 0;
f32 D_800FE200 = -90;
f32 D_800FE204 = 2;
f32 D_800FE208 = 9;
f32 D_800FE20C = 30;
f32 D_800FE210 = 0;
f32 D_800FE214 = 0;
f32 D_800FE218 = 0;
f32 D_800FE21C = 0;
f32 D_800FE220 = 0;
f32 D_800FE224 = 600;
f32 D_800FE228 = 0;
f32 D_800FE22C = 0;
f32 D_800FE230 = 0;

f32 D_800FE234 = 1;
f32 D_800FE238 = 0;
f32 D_800FE23C = -90;
f32 D_800FE240 = 2;
f32 D_800FE244 = 9;
f32 D_800FE248 = 30;
f32 D_800FE24C = 0;
f32 D_800FE250 = 0;
f32 D_800FE254 = 0;
f32 D_800FE258 = 0;
f32 D_800FE25C = 0;
f32 D_800FE260 = 600;
f32 D_800FE264 = 0;
f32 D_800FE268 = 0;
f32 D_800FE26C = 0;

f32 D_800FE270 = 0;
f32 D_800FE274 = 0;
f32 D_800FE278 = 0;
f32 D_800FE27C = 0;
f32 D_800FE280 = 0;
f32 D_800FE284 = 0;
f32 D_800FE288 = 0;
f32 D_800FE28C = 0;
f32 D_800FE290 = 0;
f32 D_800FE294 = 0;
f32 D_800FE298 = 0;
f32 D_800FE29C = 0;

s32 D_800FE2A0 = 0;
s32 D_800FE2A4 = 0;
s32 D_800FE2A8 = 0;
s32 D_800FE2AC = -1;

Vtx D_800FE2B0[10] = {
 { { { 200, 0, -200 }, 0, { 8160, -32 }, { 255, 55, 55, 255 } } },
 { { { 200, 0,  200 }, 0, { 8160,12256}, { 255, 55, 55, 255 } } },
 { { { 100, 0,  200 }, 0, { 6112,12256}, { 255, 55, 55, 255 } } },
 { { { 100, 0, -200 }, 0, { 6112, -32 }, { 255, 55, 55, 255 } } },
 { { {-200, 0,  200 }, 0, { -32 ,12256}, { 255, 55, 55, 255 } } },
 { { {   0, 0,  200 }, 0, { 4064,12256}, { 255, 55, 55, 255 } } },
 { { {   0, 0, -200 }, 0, { 4064, -32 }, { 255, 55, 55, 255 } } },
 { { {-100, 0,  200 }, 0, { 2016,12256}, { 255, 55, 55, 255 } } },
 { { {-200, 0, -200 }, 0, { -32 , -32 }, { 255, 55, 55, 255 } } },
 { { {-100, 0, -200 }, 0, { 2016, -32 }, { 255, 55, 55, 255 } } },
};

Vtx D_800FE350[10] = {
 { { { 200, 0, -200 }, 0, { 8160, -32 }, { 255, 55, 55, 255 } } },
 { { { 200, 0,  200 }, 0, { 8160,12256}, { 255, 55, 55, 255 } } },
 { { { 100, 0,  200 }, 0, { 6112,12256}, { 255, 55, 55, 255 } } },
 { { { 100, 0, -200 }, 0, { 6112, -32 }, { 255, 55, 55, 255 } } },
 { { {-200, 0,  200 }, 0, { -32 ,12256}, { 255, 55, 55, 255 } } },
 { { {   0, 0,  200 }, 0, { 4064,12256}, { 255, 55, 55, 255 } } },
 { { {   0, 0, -200 }, 0, { 4064, -32 }, { 255, 55, 55, 255 } } },
 { { {-100, 0,  200 }, 0, { 2016,12256}, { 255, 55, 55, 255 } } },
 { { {-200, 0, -200 }, 0, { -32 , -32 }, { 255, 55, 55, 255 } } },
 { { {-100, 0, -200 }, 0, { 2016, -32 }, { 255, 55, 55, 255 } } },
};

s32 D_800FE3F0 = 0;
s32 D_800FE3F4 = 0;
s32 D_800FE3F8 = 0;
s32 D_800FE3FC = 0;
s32 D_800FE400 = 0;

extern const char D_8010CABC[];
extern const char D_8010CADC[];
extern const char D_8010CACC[];
extern const char D_8010CAF8[];
extern const char D_8010CB14[];
extern const char D_8010CB20[];
extern const char D_8010CB2C[];
extern const char D_8010CB48[];
extern const char D_8010CB64[];

Struct_80076EA0 D_800FE404[9] = {
    {114, 44, 1, 0, D_8010CABC, 1},
    {116, 86, 1, 1, D_8010CACC, 1},
    {64, 118, 1, 1, D_8010CADC, 1},
    {64, 150, 1, 1, D_8010CAF8, 1},
    {128,182, 1, 1, D_8010CB14, 1},
    {114, 70, 1, 1, D_8010CB20, 1},
    {64, 102, 1, 1, D_8010CB2C, 1},
    {64, 134, 1, 1, D_8010CB48, 1},
    {120,166, 1, 1, D_8010CB64, 1}
};

u8 gDontChangeEyes = 0;
s32 D_800FE4E0 = 0;
struct_800FE4E4 D_800FE4E4[2] = {
    {0, 0},
    {0, 0}
};
struct_800FE4E4 D_800FE4E8[2] = {
    {0, 0},
    {0, 0}
};

extern TImg Davy_eyeR_ci8_PNG;
extern TImg Davy_eyeL_ci8_PNG;
extern TLut Davy_eyeR_ci8_PAL;
extern TLut Davy_eyeL_ci8_PAL;
extern TImg Jack_eyeR_ci8_PNG;
extern TImg Jack_eyeL_ci8_PNG;
extern TLut Jack_eyeR_ci8_PAL;
extern TLut Jack_eyeL_ci8_PAL;
extern TImg Fred_eyeR_ci8_PNG;
extern TImg Fred_eyeL_ci8_PNG;
extern TLut Fred_eyeR_ci8_PAL;
extern TLut Fred_eyeL_ci8_PAL;
extern TImg Linda_eyeR_ci8_PNG;
extern TImg Linda_eyeL_ci8_PNG;
extern TLut Linda_eyeR_ci8_PAL;
extern TLut Linda_eyeL_ci8_PAL;
extern TImg Black_eyeR_ci8_PNG;
extern TImg Black_eyeL_ci8_PNG;
extern TLut Black_eyeR_ci8_PAL;
extern TLut Black_eyeL_ci8_PAL;
extern TImg White_eyeR_ci8_PNG;
extern TImg White_eyeL_ci8_PNG;
extern TLut White_eyeR_ci8_PAL;
extern TLut White_eyeL_ci8_PAL;

chameleonEyeListEntry chameleonEyeList[6] = {
{&Davy_eyeR_ci8_PNG, &Davy_eyeL_ci8_PNG, &Davy_eyeR_ci8_PAL, &Davy_eyeL_ci8_PAL},
{&Jack_eyeR_ci8_PNG, &Jack_eyeL_ci8_PNG, &Jack_eyeR_ci8_PAL, &Jack_eyeL_ci8_PAL},
{&Fred_eyeR_ci8_PNG, &Fred_eyeL_ci8_PNG, &Fred_eyeR_ci8_PAL, &Fred_eyeL_ci8_PAL},
{&Linda_eyeR_ci8_PNG, &Linda_eyeL_ci8_PNG, &Linda_eyeR_ci8_PAL, &Linda_eyeL_ci8_PAL},
{&Black_eyeR_ci8_PNG, &Black_eyeL_ci8_PNG, &Black_eyeR_ci8_PAL, &Black_eyeL_ci8_PAL},
{&White_eyeR_ci8_PNG, &White_eyeL_ci8_PNG, &White_eyeR_ci8_PAL, &White_eyeL_ci8_PAL}
};
extern unsigned char LizardKong_face_ci4_PNG[];
extern unsigned char LizardKong_face_ci4_PAL[];
extern unsigned char Quintella_eye_ci8_PNG[];
extern unsigned char Quintella_eye_ci8_PAL[];
extern unsigned char Armadillo_face_ci8_PNG[];
extern unsigned char Armadillo_face_ci8_PAL[];

struct_800FE54C BossDeadEyes[3] = {
    {LizardKong_face_ci4_PNG, LizardKong_face_ci4_PAL},
    {Quintella_eye_ci8_PNG, Quintella_eye_ci8_PAL},
    {Armadillo_face_ci8_PNG, Armadillo_face_ci8_PAL}
};

//basic color lookup table?
RGBA32 D_800FE564[10] = {
    {  0, 144, 192, 255},
    { 64, 192,  41, 255},
    {192, 128,   0, 255},
    {192,  64, 161, 255},
    { 84,  54, 145, 255},
    {255, 255, 255, 255},
    {255, 255, 255, 255},
    {  0, 255, 255, 255},
    {255,   0, 255, 255},
    {255, 255,   0, 255}
};

u8 sTextGradientPalettes[] = {
0, 0, 0, 192,
0, 0, 0, 192,
0, 0, 0, 192,
0, 0, 0, 192,

255, 255, 255, 255,
255, 255, 0, 255,
255, 255, 255, 255,
255, 255, 0, 255,

22, 200, 10, 255,
220, 220, 1, 255,
22, 200, 10, 255,
220, 220, 1, 255,

127, 127, 60, 255,
30, 30, 20, 255,
127, 127, 60, 255,
30, 30, 20, 255,

255, 10, 10, 255,
200, 200, 0, 255,
255, 10, 10, 255,
200, 200, 0, 255,

240, 220, 10, 255,
20, 100, 1, 255,
240, 220, 10, 255,
20, 100, 1, 255,

240, 220, 0, 255,
20, 100, 1, 255,
240, 220, 0, 255,
20, 100, 1, 255,

192, 64, 0, 255,
255, 5, 0, 255,
192, 64, 0, 255,
255, 5, 0, 255,

180, 250, 255, 255,
0, 5, 255, 255,
180, 250, 255, 255,
0, 5, 255, 255,

252, 250, 94, 255,
200, 60, 1, 255,
200, 60, 1, 255,
252, 153, 40, 255,

250, 250, 250, 255,
40, 40, 40, 255,
30, 30, 30, 255,
180, 180, 180, 255,

217, 167, 167, 255,
104, 25, 25, 255,
104, 25, 25, 255,
135, 86, 86, 255,

245, 248, 231, 255,
142, 0, 27, 255,
142, 0, 27, 255,
197, 147, 187, 255,

255, 255, 255, 255,
100, 255, 255, 255,
100, 255, 255, 255,
100, 255, 255, 255,

255, 255, 255, 255,
82, 255, 50, 255,
82, 255, 50, 255,
82, 255, 50, 255,

255, 255, 255, 255,
255, 255, 0, 255,
255, 255, 0, 255,
255, 255, 0, 255,

255, 255, 255, 255,
255, 96, 0, 255,
255, 96, 0, 255,
255, 96, 0, 255,

0, 192, 255, 255,
255, 255, 255, 255,
0, 192, 255, 255,
255, 255, 255, 255,

255, 255, 255, 255,
255, 192, 0, 212,
255, 255, 255, 255,
255, 192, 0, 255,

255, 128, 0, 255,
255, 255, 128, 255,
255, 128, 0, 255,
255, 255, 128, 255,

255, 255, 128, 255,
255, 192, 0, 212,
255, 255, 128, 255,
255, 192, 0, 255,

255, 255, 0, 255,
255, 255, 0, 255,
255, 255, 0, 255,
255, 255, 0, 255,
};

u8 gLockContextEyes = 1;

u8 D_800FE6F0 = 0;
f32 D_800FE6F4[4] = {0, 0, 0, 0};
u8 D_800FE704[4] = {0, 0, 0, 0};
s32 D_800FE708 = 1;

//what
Struct_800714C8 D_800FE70C = {{-1, -1, -1, -1, -1, -1}};

u8 D_800FE724[] = {
0xA3, 0xB0, 0xA3, 0xB1,
0xA3, 0xB2, 0xA3, 0xB3,
0xA3, 0xB4, 0xA3, 0xB5,
0xA3, 0xB6, 0xA3, 0xB7,
0xA3, 0xB8, 0xA3, 0xB9,
0xA3, 0xC1, 0xA3, 0xC2,
0xA3, 0xC3, 0xA3, 0xC4,
0xA3, 0xC5, 0xA3, 0xC6,
0x00, 0x00, 0x00, 0x00
};

u8 D_800FE748 = 0;

s32 D_800FE74C = 0;

unk_80052094_8 D_800FE750[] = {
{2, 2},
{0, 0},
{0, 2},
{7, 0},
{4, 0},
{7, 0},
{3, 0},
{4, 2}
};

u8 D_800FE790[] = {
0x00, 0x00, 0x0D, 0x00,
0x00, 0x0E, 0x00, 0x00,
0xF6, 0x3C, 0x0B, 0xB8,
0xF6, 0x3C, 0x00, 0x00,
0xFF, 0xE0, 0xFF, 0xE0,
0xFF, 0xFF, 0xFF, 0xFF,
0x09, 0xC4, 0x0B, 0xB8,
0xF6, 0x3C, 0x00, 0x00,
0x0F, 0xE0, 0xFF, 0xE0,
0xFF, 0xFF, 0xFF, 0xFF,
0xF6, 0x3C, 0x0B, 0xB8,
0x09, 0xC4, 0x00, 0x00,
0xFF, 0xE0, 0x0F, 0xE0,
0xFF, 0xFF, 0xFF, 0xFF,
0x09, 0xC4, 0x0B, 0xB8,
0x09, 0xC4, 0x00, 0x00,
0x0F, 0xE0, 0x0F, 0xE0,
0xFF, 0xFF, 0xFF, 0xFF
};

Vtx D_800FE7D8_Global[15] = {
 { { { -50, 0, -30 }, 0, { -32, 4064 }, { 47, 117, 0, 255 } } },
 { { { 0, -20, 0 }, 0, { 8160, 8160 }, { 47, 117, 0, 255 } } },
 { { { -50, 0, 30 }, 0, { -32, 12256 }, { 47, 117, 0, 255 } } },
 { { { 0, 0, -60 }, 0, { 8159, -32 }, { 23, 118, 39, 255 } } },
 { { { 0, -20, 0 }, 0, { 8160, 8160 }, { 23, 118, 39, 255 } } },
 { { { -50, 0, -30 }, 0, { -32, 4064 }, { 23, 118, 39, 255 } } },
 { { { 50, 0, -30 }, 0, { 16352, 4064 }, { 232, 118, 39, 255 } } },
 { { { 0, -20, 0 }, 0, { 8160, 8160 }, { 232, 118, 39, 255 } } },
 { { { 0, 0, -60 }, 0, { 8159, -32 }, { 232, 118, 39, 255 } } },
 { { { 50, 0, 30 }, 0, { 16352, 12256 }, { 208, 117, 0, 255 } } },
 { { { 0, -20, 0 }, 0, { 8160, 8160 }, { 208, 117, 0, 255 } } },
 { { { 50, 0, -30 }, 0, { 16352, 4064 }, { 208, 117, 0, 255 } } },
 { { { 0, 0, 60 }, 0, { 8160, 16352 }, { 232, 118, 216, 255 } } },
 { { { 0, -20, 0 }, 0, { 8160, 8160 }, { 232, 118, 216, 255 } } },
 { { { 50, 0, 30 }, 0, { 16352, 12256 }, { 232, 118, 216, 255 } } }
};

Vtx D_800FE8C8_Global[21] = {
 { { { -50, 0, 30 }, 0, { -32, 12256 }, { 23, 118, 216, 255 } } },
 { { { 0, -20, 0 }, 0, { 8160, 8160 }, { 23, 118, 216, 255 } } },
 { { { 0, 0, 60 }, 0, { 8160, 16352 }, { 23, 118, 216, 255 } } },
 { { { -50, 0, -30 }, 0, { -32, 2016 }, { 47, 117, 0, 255 } } },
 { { { 0, -20, 0 }, 0, { 4064, 4064 }, { 47, 117, 0, 255 } } },
 { { { -50, 0, 30 }, 0, { -32, 6112 }, { 47, 117, 0, 255 } } },
 { { { 0, 0, -60 }, 0, { 4063, -32 }, { 23, 118, 39, 255 } } },
 { { { 0, -20, 0 }, 0, { 4064, 4064 }, { 23, 118, 39, 255 } } },
 { { { -50, 0, -30 }, 0, { -32, 2016 }, { 23, 118, 39, 255 } } },
 { { { 50, 0, -30 }, 0, { 8160, 2016 }, { 232, 118, 39, 255 } } },
 { { { 0, -20, 0 }, 0, { 4064, 4064 }, { 232, 118, 39, 255 } } },
 { { { 0, 0, -60 }, 0, { 4063, -32 }, { 232, 118, 39, 255 } } },
 { { { 50, 0, 30 }, 0, { 8160, 6112 }, { 208, 117, 0, 255 } } },
 { { { 0, -20, 0 }, 0, { 4064, 4064 }, { 208, 117, 0, 255 } } },
 { { { 50, 0, -30 }, 0, { 8160, 2016 }, { 208, 117, 0, 255 } } },
 { { { 0, 0, 60 }, 0, { 4064, 8160 }, { 232, 118, 216, 255 } } },
 { { { 0, -20, 0 }, 0, { 4064, 4064 }, { 232, 118, 216, 255 } } },
 { { { 50, 0, 30 }, 0, { 8160, 6112 }, { 232, 118, 216, 255 } } },
 { { { -50, 0, 30 }, 0, { -32, 6112 }, { 23, 118, 216, 255 } } },
 { { { 0, -20, 0 }, 0, { 4064, 4064 }, { 23, 118, 216, 255 } } },
 { { { 0, 0, 60 }, 0, { 4064, 8160 }, { 23, 118, 216, 255 } } }
};

f32 D_800FEA18 = 0;
f32 D_800FEA1C = 0;
f32 D_800FEA20 = 0;
f32 D_800FEA24 = 0;
f32 D_800FEA28 = -1;
f32 D_800FEA2C = 0;
s32 D_800FEA30 = 0;
s32 D_800FEA34 = 0;
s32 D_800FEA38 = 1;
f32 D_800FEA3C = 0;
f32 D_800FEA40 = 0;
f32 D_800FEA44 = 0;
f32 D_800FEA48 = 0;

s32 gTrainingState = 0;

s32 D_800FEA50[] = {
0x186,
0x258,
0x258,
0x1C2,
0x258
};

f32 D_800FEA64[] = {
0, 0, 0, 30, 0, -90, 1.399999976, 6,
30, 1, 0, 0, 0, 0, 150, 0, 0, 0, 38,
1, -90, 1.399999976, 6, 40, 1, 0, 0,
0, 40, 100, 0, 0, 0, 120, 1, -90,
1.399999976, 6, 40, 1, 0, 0, 0, -39,
100, 0, 0, 0, 1, 1, -90, 1.399999976,
6, 40, 1, 0, 0, 0, -39, 100, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

s32 gTrainingRoomTimer = 0;
s32 gTrainingStateTmer = 0;
s32 D_800FEB98 = 1;
s32 D_800FEB9C = -1;
u32 TraningRoomTimeToBeat = 0;
u32 sTextboxCurrentLine = 0;
s32 D_800FEBA8 = 0;
s32 D_800FEBAC = 0;
s32 D_800FEBB0 = 0;
f32 D_800FEBB4 = 0;
f32 D_800FEBB8 = 0;
f32 D_800FEBBC = 0;
f32 D_800FEBC0 = 0;

u8 D_800FEBC4 = 0;
u8 D_800FEBC8 = 0;
u8 D_800FEBCC = 0;

f32 D_800FEBD0 = -1;

Vec4f D_800FEBD4 = {0, 0, 0, 0};

s32 D_800FEBE4[] = {
1,
10,
100,
1000,
10000,
100000,
1000000,
10000000,
};

s32 D_800FEC04[] = {
1,
10,
100,
1000,
10000,
100000,
1000000,
10000000,
};

s32 D_800FEC24[] = {
1,
10,
100,
1000,
10000,
100000,
1000000,
10000000,
};

Mtx D_800FEC48 = IDENTITY;
Mtx D_800FEC88 = IDENTITY;
Mtx D_800FECC8 = IDENTITY;

s32 D_800FED08 = 0;
s32 cutsceneSwitch = 0;
s32 D_800FED10 = 0;
f32 D_800FED14 = 0;
f32 D_800FED18 = 0;
f32 D_800FED1C = 0;
f32 D_800FED20 = 0;
f32 D_800FED24 = 0;
f32 D_800FED28 = 0;
f32 D_800FED2C = 0;

s32 D_800FED30 = 0;
s32 D_800FED34 = 0;

extern Gfx IntroOutro_davyChameleon_Gfx[];
extern Gfx IntroOutro_jackChameleon_Gfx[];
extern Gfx IntroOutro_fredChameleon_Gfx[];
extern Gfx IntroOutro_lindaChameleon_Gfx[];
extern Gfx IntroOutro_davyChameleon_Gfx[];
extern Gfx IntroOutro_whiteChameleon_Gfx[];

//real chameleon gfxs
Gfx* D_800FED38[] = {
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_jackChameleon_Gfx,
    IntroOutro_fredChameleon_Gfx,
    IntroOutro_lindaChameleon_Gfx,
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_whiteChameleon_Gfx
};
//presumably leftovers, only used in func_80082714 the same way as ^
Gfx* D_800FED50[] = {
    IntroOutro_jackChameleon_Gfx,
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_jackChameleon_Gfx,
    IntroOutro_jackChameleon_Gfx,
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_whiteChameleon_Gfx
};
Gfx* D_800FED68[] = {
    IntroOutro_lindaChameleon_Gfx,
    IntroOutro_lindaChameleon_Gfx,
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_whiteChameleon_Gfx
};
Gfx* D_800FED80[] = {
    IntroOutro_fredChameleon_Gfx,
    IntroOutro_fredChameleon_Gfx,
    IntroOutro_lindaChameleon_Gfx,
    IntroOutro_fredChameleon_Gfx,
    IntroOutro_davyChameleon_Gfx,
    IntroOutro_whiteChameleon_Gfx
};

s32 D_800FED98 = 0;
s32 D_800FED9C = 0;
s32 D_800FEDA0 = 0;
s32 D_800FEDA4 = 0;
s32 D_800FEDA8 = 0;
s32 D_800FEDAC = 0;
s32 D_800FEDB0 = 0;
u32 D_800FEDB4 = 0;
s32 D_800FEDB8 = 1;
u32 D_800FEDBC = 0;


void DummiedPrintf2(char* arg0, ...) {

}

/**
 * @brief Sets the seed for generating randomness.
 *
 * @param seed: seed for rng
 */
void Rand_SetSeed(s32 seed) {
    rngSeed = seed;
}

s32 Rand(void) {
    u32 y, z;
    y = rngSeed * 4 + 2;
    z = y + 1;
    y = y * z;
    return rngSeed = y / 4;
}

void func_80055C04(void) {
    s32 i;

    //EnableInput
    D_800F68A8 = 1;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        gPrevButtons[i] = -1;
        gButtons[i] = -1;
    }
}

void DisableInput(void) {
    D_800F68A8 = 0;
}

void EnableInput(void) {
    D_800F68A8 = 1;
}

s32 func_80055C90(void) {
    return D_800F68A8;
}

/**
 * @brief Simplifies joystick movement to d-pad equivalent.
 *
 * @param conts: controllers struct
 */
void Controller_ParseJoystick(ContMain* conts) {
    s32 i;
    f32 sqX,sqY;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        gPrevButtons[i] = gButtons[i];
        gButtons[i] = conts[i].buttons0;
        //NORM_2
        sqX=SQ(conts[i].stickX);
        sqY=SQ(conts[i].stickY);
        if (sqrtf(sqX + sqY) > 42.0) {
            if (conts[i].stickX < -30) {
                gButtons[i] |= CONT_LEFT;
            } else if (conts[i].stickX > 30) {
                gButtons[i] |= CONT_RIGHT;
            }
            if (conts[i].stickY < -30) {
                gButtons[i] |= CONT_DOWN;
            } else if (conts[i].stickY > 30) {
                gButtons[i] |= CONT_UP;
            }
        }

        if (D_800F68A8 == NULL) {                     // if player is allowed movement (?) | Possibly if the chameleon is loaded
            if (((s32)gPlayerActors[i].active > 0)) { //cast required
                if (gPlayerActors[i].exists > 0) {
                    Controller_Zero(&conts[i]);
                }
            }
        }
    }
}
//used for Debug function controls
//https://decomp.me/scratch/rzD9G
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055E5C.s")

//takes button define
s32 func_80055EEC(s32 arg0) {
    return func_80055F10(0, arg0);
}

//https://decomp.me/scratch/Paab8
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055F10.s")

void func_80055FA4(void) {
    D_800F68C0 = - 1;
    D_800F68C4[0] = -1;
}

void func_80055FBC(s32 arg0) {
    D_800F68C0 = D_800F68C4[0];
    D_800F68C4[0] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80055FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056064.s")

/**
 * @brief Recursively calls until the angle is within the range of 0-360.
 *
 * @param arg0
 * @return f32
 */
f32 WrapAngleRecursive(f32 arg0) {
    if (arg0 >= 360.0f) {
        arg0 = arg0 - 360.0f;
        arg0 = WrapAngleRecursive(arg0);
    }
    else if (arg0 < 0.0f) {
        arg0 = arg0 + 360.0f;
        arg0 = WrapAngleRecursive(arg0);
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005625C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056BFC.s")

void func_80056CA0(u8* arg0, u8* arg1) {
    while (*arg0 == 0) {
        *arg1 = 130;
        arg1 += 2;
        arg0 += 1;
        arg1[-1] = arg0[-1] + 31;
    }
}

//https://decomp.me/scratch/cUHtJ
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80056CDC.s")

void func_80056D14(unkStruct02* arg0, s32 arg1, unkStruct02* arg2, unkStruct02* arg3) {
    arg0->flags = arg1;
    arg0->unk_04 = arg2;
    arg0->next = arg3;
    if (arg3 != NULL) {
        arg3->unk_04 = (void*)arg0;
    }
}


void* func_80056D30(s32 arg0) {
    unkStruct02* var_a2;
    unkStruct02* next;
    s32 flags;

    if (arg0 == 0) {
        return NULL;
    }

    var_a2 = D_80176F4C;

    while (1) {
        flags = var_a2->flags;
        if ((flags & 1) && ((u32) arg0 < (u32) flags)) {
            if ((u32)(flags & ~1) >= (u32) ALIGN_128(arg0) + 0x80) {
                next = var_a2->next;
                var_a2->flags = ALIGN_128(arg0);
                var_a2->next = (unkStruct02*)((s32)var_a2 + ALIGN_128(arg0) + 0x80);
                func_80056D14(var_a2->next, (flags & ~1) - ALIGN_128(arg0) - 0x80, var_a2, next);
                Memory_Free(var_a2->next + 1); //incorrect function name?
                return var_a2 + 1;
            }
            var_a2->flags = flags & ~1; //should be here but breaks tail merging
            if (((!var_a2) && (!var_a2)) && (!var_a2)){} //TODO: fake match
            return var_a2 + 1;
        }

        if (var_a2->next != NULL) {
            var_a2 = var_a2->next;
        } else {
            break;
        }
    }
    return NULL;
}

void func_80056DF4(unkStruct02* arg0, unkStruct02* arg1) {
    unkStruct02* temp_v0;

    arg0->flags += (arg1->flags & ~1) + 0x80;
    temp_v0 = arg1->next;
    arg0->next = temp_v0;
    if (temp_v0 != 0) {
        temp_v0->unk_04 = arg0;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Memory_Free.s")

void func_80056EB4(void) {
    func_80056CDC((s32) D_801191A0, (s32) D_801FFB78 - (s32) D_801191A0);
}


void* _malloc(s32 arg0) {
    void* temp_v0 = func_80056D30(arg0);

    if (temp_v0 == NULL) {
        DummiedPrintf2("mem err!\n");
    }

    return temp_v0;
}

s32 Free(void* arg0) {
    Memory_Free(arg0);
    return 0;
}

void func_80056F48(s32 arg0, Tongue* tongues, PlayerActor* players, Camera* cameras) {
    f32 xAt = D_801768A0.f5.x - D_801768A0.f4.x;
    f32 yAt = D_801768A0.f5.y - D_801768A0.f4.y + D_800FE014;
    f32 zAt = D_801768A0.f5.z - D_801768A0.f4.z;
    if (xAt != 0 || zAt != 0) {
        guLookAt(&D_80176860,
                 0.0f, 0.0f, 0.0f, // Eye
                 xAt, yAt, zAt, // At
                 0, 1, 0); // Up
    } else {
        guMtxIdent(&D_80176860);
    }
}

//could there be a file split here or close to here?

s32 LoadSprite(s32 arg0) {
    s32 dmaSize;
    s32 dmaResult;
    SpriteListing* temp_s1;

    temp_s1 = &gSpriteListings[arg0];
    if ((temp_s1->type == 8) || (arg0 < 0) || (arg0 >= ARRAY_COUNT(gSpriteListings))) {
        return SPRITE_LOAD_SUCCESS; //TODO: This is a bit confusing...need more info on temp_s1->type
    }
    switch (temp_s1->type) {
    case 7:
        dmaSize = temp_s1->width * 4 * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 6:
        dmaSize = temp_s1->width * 2 * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 2:
    case 5:
        dmaSize = temp_s1->width * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY;
        break;
    case 0:
    case 1:
    case 4:
        dmaSize = (s32) (temp_s1->width * temp_s1->height * temp_s1->tileCountX * temp_s1->tileCountY) / 2;
        break;
    }

    if (temp_s1->bitmapRom == NULL) {
        temp_s1->bitmapRom = (s32)temp_s1->raster;
    }

    if (temp_s1->paletteRom == NULL) {
        temp_s1->paletteRom = (s32)temp_s1->palette;
    }

    temp_s1->raster = _malloc(dmaSize);

    if (temp_s1->raster == NULL) {
        DummiedPrintf2(" sprite.c : sprite on mem err!(size=%d SPRITE3ID=%d)\n", dmaSize, arg0);
        return SPRITE_LOAD_ERROR;
    }

    dmaResult = DMA_Copy(&extImages_ROM_START[temp_s1->bitmapRom & 0xFFFFFF], temp_s1->raster, dmaSize);

    while (dmaResult < 0) {
        dmaResult = DMA_Copy(&extImages_ROM_START[temp_s1->bitmapRom & 0xFFFFFF], temp_s1->raster, dmaSize);
    }

    while (func_800A72E8(dmaResult) == 0);

    if ((temp_s1->type == 4) || (temp_s1->type == 5)) {
        temp_s1->palette = _malloc(CI8_PAL_SIZE);
        if (temp_s1->palette == NULL) {
            DummiedPrintf2(" sprite.c : sprite on mem err! (size = %d)\n", CI8_PAL_SIZE);
            Free(temp_s1->raster);
            return SPRITE_LOAD_ERROR;
        }

        dmaResult = DMA_Copy(&extImages_ROM_START[temp_s1->paletteRom & 0xFFFFFF], temp_s1->palette, CI8_PAL_SIZE);

        while (dmaResult < 0) {
            dmaResult = DMA_Copy(&extImages_ROM_START[temp_s1->paletteRom & 0xFFFFFF], temp_s1->palette, CI8_PAL_SIZE);
        }

        while (func_800A72E8(dmaResult) == 0);
    }
    return SPRITE_LOAD_SUCCESS;
}

void FreeSprite(s32 arg0) {
    SpriteListing* sprite;

    sprite = &gSpriteListings[arg0];
    if (sprite->type != COLORMODE_BLANK && arg0 >= 0 && arg0 < ARRAY_COUNT(gSpriteListings)) {
        Free(sprite->raster);
        if (sprite->type == COLORMODE_CI4 || sprite->type == COLORMODE_CI8) {
            Free(sprite->palette);
        }
    }
}

void PrintReset(void) {
    s32 i;

    if (D_800FE000 == 0) {
        D_800FDFFC = 0.0f;
        gPrimRed = -1;
        gPrimGreen = -1;
        gPrimBlue = -1;
        gPrimAlpha = -1;
        D_800FDFF0 = 1.0f;
        D_800FDFE8 = 0;
        D_800FDFEC = 1;
        D_800FDFE0 = 0;
        D_800FDFE4 = 0;
        D_800FE004 = 0.0f;
        D_800FE008 = 0.0f;
        D_800FE00C = 0.0f;
        D_800FE010 = 0.0f;

        for (i = 0; i < ARRAY_COUNT(gTextGradient); i++) {
            gTextGradient[i] = -1;
        }
    }
}

void func_8005747C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    f32 sp6C, sp68;
    f32 sp54, sp50, sp4C;
    s32 sp48, sp44;
    SpriteListing* tile;

    if (D_800FDFA8[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_80176F98[gSpriteFrameBuffer][D_800FDFA8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg6];
    D_800FDFA8[gSpriteFrameBuffer]++;

    guMtxXFML(&D_80176860, arg0 - D_801768A0.f4.x, arg1 - D_801768A0.f4.y, arg2 - D_801768A0.f4.z, &sp54, &sp50, &sp4C);

    if (arg5 >= 1.0 || arg5 == 0.0f) {
        tile->tileIndexX = arg5;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg5)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg5)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg3 == 0.0f && arg4 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg3 / 2;
        sp68 = arg4 / 2;
    }

    tile->quad[0].v.ob[0] = -sp6C + sp54;
    tile->quad[0].v.ob[1] = sp68 + sp50;
    tile->quad[0].v.ob[2] = sp4C;
    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[1].v.ob[0] = -sp6C + sp54;
    tile->quad[1].v.ob[1] = -sp68 * 1 + sp50;
    tile->quad[1].v.ob[2] = sp4C;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    tile->quad[2].v.ob[0] = sp6C * 1 + sp54;
    tile->quad[2].v.ob[1] = sp68 + sp50;
    tile->quad[2].v.ob[2] = sp4C;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[3].v.ob[0] = sp6C + sp54;
    tile->quad[3].v.ob[1] = -sp68 + sp50;
    tile->quad[3].v.ob[2] = sp4C;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    PrintReset();
}

void func_80057A68(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    f32 sp6C, sp68;
    f32 sp54, sp50, sp4C;
    s32 sp48, sp44;
    SpriteListing* tile;

    if (D_800FDFA8[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_80176F98[gSpriteFrameBuffer][D_800FDFA8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg6];
    D_800FDFA8[gSpriteFrameBuffer]++;

    guMtxXFML(&D_80176860, arg0 - D_801768A0.f4.x, arg1 - D_801768A0.f4.y, arg2 - D_801768A0.f4.z, &sp54, &sp50, &sp4C);

    if (arg5 >= 1.0 || arg5 == 0.0f) {
        tile->tileIndexX = arg5;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg5)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg5)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg3 == 0.0f && arg4 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg3 / 2;
        sp68 = arg4 / 2;
    }

    tile->quad[0].v.ob[0] = -sp6C + sp54;
    tile->quad[0].v.ob[1] = sp68 * 2 + sp50;
    tile->quad[0].v.ob[2] = sp4C;
    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[1].v.ob[0] = -sp6C + sp54;
    tile->quad[1].v.ob[1] = sp50;
    tile->quad[1].v.ob[2] = sp4C;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    tile->quad[2].v.ob[0] = sp6C * 1 + sp54;
    tile->quad[2].v.ob[1] = sp68 * 2 + sp50;
    tile->quad[2].v.ob[2] = sp4C;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[3].v.ob[0] = sp6C + sp54;
    tile->quad[3].v.ob[1] = sp50;
    tile->quad[3].v.ob[2] = sp4C;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    PrintReset();
}

void func_80058044(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp6C, sp68;
    f32 sp54, sp50, sp4C;
    f32 angle;
    s32 sp48, sp44;
    SpriteListing* tile;

    if (D_800FDFA8[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_80176F98[gSpriteFrameBuffer][D_800FDFA8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFA8[gSpriteFrameBuffer]++;

    sp54 = arg0 - D_80176B78->f4.x;
    sp50 = arg1 - D_80176B78->f4.y;
    sp4C = arg2 - D_80176B78->f4.z;

    angle = func_80056104(sp54, sp4C);

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)];
    }
    tile->tileIndexY = WrapAngleRecursive(angle + 180.0f + arg5 + tile->tileCountY / 360.0f) * tile->tileCountY * 2.0f / 360.0f;

    if (tile->tileIndexY >= tile->tileCountY) {
        tile->tileIndexY -= tile->tileCountY;
        tile->tileIndexX += tile->tileCountX / 2;
    }

    if (tile->tileIndexX >= tile->tileCountX) {
        tile->tileIndexX = tile->tileCountX - 1;
    }

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg3 == 0.0f && arg4 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg3 / 2;
        sp68 = arg4 / 2;
    }

    guMtxXFML(&D_80176860, arg0 - D_801768A0.f4.x, arg1 - D_801768A0.f4.y, arg2 - D_801768A0.f4.z, &sp54, &sp50, &sp4C);

    tile->quad[0].v.ob[0] = -sp6C + sp54;
    tile->quad[0].v.ob[1] = sp68 + sp50;
    tile->quad[0].v.ob[2] = sp4C;
    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[1].v.ob[0] = -sp6C + sp54;
    tile->quad[1].v.ob[1] = -sp68 * 1 + sp50;
    tile->quad[1].v.ob[2] = sp4C;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    tile->quad[2].v.ob[0] = sp6C * 1 + sp54;
    tile->quad[2].v.ob[1] = sp68 + sp50;
    tile->quad[2].v.ob[2] = sp4C;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;

    tile->quad[3].v.ob[0] = sp6C + sp54;
    tile->quad[3].v.ob[1] = -sp68 + sp50;
    tile->quad[3].v.ob[2] = sp4C;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    PrintReset();
}

void func_80058748(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, s32 argF) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[argF];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (argE >= 1.0 || argE == 0.0f) {
        tile->tileIndexX = argE;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * argE)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * argE)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    tile->quad[0].v.ob[0] = arg0;
    tile->quad[0].v.ob[1] = arg1;
    tile->quad[0].v.ob[2] = arg2;
    tile->quad[1].v.ob[0] = arg3;
    tile->quad[1].v.ob[1] = arg4;
    tile->quad[1].v.ob[2] = arg5;
    tile->quad[2].v.ob[0] = arg6;
    tile->quad[2].v.ob[1] = arg7;
    tile->quad[2].v.ob[2] = arg8;
    tile->quad[3].v.ob[0] = arg9;
    tile->quad[3].v.ob[1] = argA;
    tile->quad[3].v.ob[2] = argB;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    PrintReset();
}

void func_80058BE4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg6)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    sp3C = arg4 / 2;
    sp38 = arg5 / 2;

    sp54 = -sp3C;
    sp50 = 0.0f;
    sp4C = sp38;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[0].v.ob[0] = sp54 + arg1;
    tile->quad[0].v.ob[1] = sp50 + arg2;
    tile->quad[0].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C;
    sp50 = 0.0f;
    sp4C = -sp38 * 1;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[1].v.ob[0] = sp54 + arg1;
    tile->quad[1].v.ob[1] = sp50 + arg2;
    tile->quad[1].v.ob[2] = sp4C + arg3;

    sp54 = sp3C * 1;
    sp50 = 0.0f;
    sp4C = sp38;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[2].v.ob[0] = sp54 + arg1;
    tile->quad[2].v.ob[1] = sp50 + arg2;
    tile->quad[2].v.ob[2] = sp4C + arg3;

    sp54 = sp3C;
    sp50 = 0.0f;
    sp4C = -sp38;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[3].v.ob[0] = sp54 + arg1;
    tile->quad[3].v.ob[1] = sp50 + arg2;
    tile->quad[3].v.ob[2] = sp4C + arg3;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    PrintReset();
}

void func_80059254(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg6)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    sp3C = arg4 / 2;
    sp38 = arg5 / 2;

    sp54 = -sp3C;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[0].v.ob[0] = sp54 + arg1;
    tile->quad[0].v.ob[1] = sp50 + arg2;
    tile->quad[0].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C;
    sp50 = -sp38 * 1;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[1].v.ob[0] = sp54 + arg1;
    tile->quad[1].v.ob[1] = sp50 + arg2;
    tile->quad[1].v.ob[2] = sp4C + arg3;

    sp54 = sp3C * 1;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[2].v.ob[0] = sp54 + arg1;
    tile->quad[2].v.ob[1] = sp50 + arg2;
    tile->quad[2].v.ob[2] = sp4C + arg3;

    sp54 = sp3C;
    sp50 = -sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[3].v.ob[0] = sp54 + arg1;
    tile->quad[3].v.ob[1] = sp50 + arg2;
    tile->quad[3].v.ob[2] = sp4C + arg3;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    PrintReset();
}

void func_800598C4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp3C, sp38;
    f32 sp54, sp50, sp4C;
    s32 sp48;
    s32 sp44;
    SpriteListing* tile;

    if (D_800FDFB0[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_80182B18[gSpriteFrameBuffer][D_800FDFB0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg7];
    D_800FDFB0[gSpriteFrameBuffer]++;

    if (arg6 >= 1.0 || arg6 == 0.0f) {
        tile->tileIndexX = arg6;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg6)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg6)] / tile->tileCountX + D_800FDFE8;

    sp48 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp44 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    sp3C = arg4 / 2;
    sp38 = arg5 / 2;

    sp54 = sp3C;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[0].v.ob[0] = sp54 + arg1;
    tile->quad[0].v.ob[1] = sp50 + arg2;
    tile->quad[0].v.ob[2] = sp4C + arg3;

    sp54 = sp3C;
    sp50 = -sp38 * 1;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[1].v.ob[0] = sp54 + arg1;
    tile->quad[1].v.ob[1] = sp50 + arg2;
    tile->quad[1].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C * 1;
    sp50 = sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[2].v.ob[0] = sp54 + arg1;
    tile->quad[2].v.ob[1] = sp50 + arg2;
    tile->quad[2].v.ob[2] = sp4C + arg3;

    sp54 = -sp3C;
    sp50 = -sp38;
    sp4C = 0.0f;
    guMtxXFML(arg0, sp54, sp50, sp4C, &sp54, &sp50, &sp4C);
    tile->quad[3].v.ob[0] = sp54 + arg1;
    tile->quad[3].v.ob[1] = sp50 + arg2;
    tile->quad[3].v.ob[2] = sp4C + arg3;

    tile->quad[0].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[0].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[1].v.tc[0] = (s16)(sp48) << 6;
    tile->quad[1].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;
    tile->quad[2].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[2].v.tc[1] = (s16)(sp44) << 6;
    tile->quad[3].v.tc[0] = (s16)(sp48 + tile->width - 1) << 6;
    tile->quad[3].v.tc[1] = (s16)(sp44 + tile->height - 1) << 6;

    PrintReset();
}

void func_80059F28(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;

    if (D_800FDFC8[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_801A5D98[gSpriteFrameBuffer][D_800FDFC8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg8];
    D_800FDFC8[gSpriteFrameBuffer]++;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;

    if (arg7 >= 1.0 || arg7 == 0.0f) {
        tile->tileIndexX = arg7;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg7)] % tile->tileCountX;
    }
    tile->tileIndexY = D_800FDFE8;

    sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg5 == 0.0f && arg6 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg5 * arg4 / 2;
        sp68 = arg6 * arg4 / 2;
    }

    x1 = -160.0f + arg0 + sp6C;
    y1 = -arg1 + 120.0f - sp68;
    sp5C = -arg2 - D_800FDF9C;

    tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
    tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
    tile->quad[0].v.ob[2] = sp5C + D_800FE004;
    tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[0].v.cn[0] = gTextGradient[0];
    tile->quad[0].v.cn[1] = gTextGradient[1];
    tile->quad[0].v.cn[2] = gTextGradient[2];
    tile->quad[0].v.cn[3] = gTextGradient[3];

    tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
    tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
    tile->quad[1].v.ob[2] = sp5C + D_800FE008;
    tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[1].v.cn[0] = gTextGradient[4];
    tile->quad[1].v.cn[1] = gTextGradient[5];
    tile->quad[1].v.cn[2] = gTextGradient[6];
    tile->quad[1].v.cn[3] = gTextGradient[7];

    tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
    tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
    tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
    tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[2].v.cn[0] = gTextGradient[8];
    tile->quad[2].v.cn[1] = gTextGradient[9];
    tile->quad[2].v.cn[2] = gTextGradient[10];
    tile->quad[2].v.cn[3] = gTextGradient[11];

    tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
    tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
    tile->quad[3].v.ob[2] = sp5C + D_800FE010;
    tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.cn[0] = gTextGradient[12];
    tile->quad[3].v.cn[1] = gTextGradient[13];
    tile->quad[3].v.cn[2] = gTextGradient[14];
    tile->quad[3].v.cn[3] = gTextGradient[15];

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    PrintReset();
}

void func_8005A7CC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;
    s32 i, j;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;

    for (i = 0; i < gSpriteListings[arg7].tileCountX; i++) {
        for (j = 0; j < gSpriteListings[arg7].tileCountY; j++) {
            if (D_800FDFC8[gSpriteFrameBuffer] >= 200) {
                PrintReset();
                return;
            }

            tile = &D_801A5D98[gSpriteFrameBuffer][D_800FDFC8[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg7];
            D_800FDFC8[gSpriteFrameBuffer]++;

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
            sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

            if (arg5 == 0.0f && arg6 == 0.0f) {
                sp6C = tile->width * D_800FDFF0 / 2;
                sp68 = tile->height * D_800FDFF0 / 2;
            } else {
                sp6C = arg5 * arg4 / 2;
                sp68 = arg6 * arg4 / 2;
            }

            x1 = -160.0f + arg0 + i * tile->width + sp6C;
            y1 = 120.0f - arg1 - j * tile->height - sp68;
            sp5C = -D_800FDF9C - arg2;

            tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
            tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
            tile->quad[0].v.ob[2] = sp5C + D_800FE004;
            tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[0].v.cn[0] = gTextGradient[0];
            tile->quad[0].v.cn[1] = gTextGradient[1];
            tile->quad[0].v.cn[2] = gTextGradient[2];
            tile->quad[0].v.cn[3] = gTextGradient[3];

            tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
            tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
            tile->quad[1].v.ob[2] = sp5C + D_800FE008;
            tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[1].v.cn[0] = gTextGradient[4];
            tile->quad[1].v.cn[1] = gTextGradient[5];
            tile->quad[1].v.cn[2] = gTextGradient[6];
            tile->quad[1].v.cn[3] = gTextGradient[7];

            tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
            tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
            tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
            tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[2].v.cn[0] = gTextGradient[8];
            tile->quad[2].v.cn[1] = gTextGradient[9];
            tile->quad[2].v.cn[2] = gTextGradient[10];
            tile->quad[2].v.cn[3] = gTextGradient[11];

            tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
            tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
            tile->quad[3].v.ob[2] = sp5C + D_800FE010;
            tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.cn[0] = gTextGradient[12];
            tile->quad[3].v.cn[1] = gTextGradient[13];
            tile->quad[3].v.cn[2] = gTextGradient[14];
            tile->quad[3].v.cn[3] = gTextGradient[15];

            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
        }
    }
    PrintReset();
}

void func_8005AFA4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    PrintReset();
}

void printUISprite(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;

    if (D_800FDFB8[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_8018E698[gSpriteFrameBuffer][D_800FDFB8[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg8];
    D_800FDFB8[gSpriteFrameBuffer]++;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;

    if (arg7 >= 1.0 || arg7 == 0.0f) {
        tile->tileIndexX = arg7;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg7)] % tile->tileCountX;
    }
    tile->tileIndexY = D_800FDFE8;

    sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
    sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

    if (arg5 == 0.0f && arg6 == 0.0f) {
        sp6C = tile->width * D_800FDFF0 / 2;
        sp68 = tile->height * D_800FDFF0 / 2;
    } else {
        sp6C = arg5 * arg4 / 2;
        sp68 = arg6 * arg4 / 2;
    }

    x1 = -160.0f + arg0 + sp6C;
    y1 = -arg1 + 120.0f - sp68;
    sp5C = -arg2 - D_800FDF9C;

    tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
    tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
    tile->quad[0].v.ob[2] = sp5C + D_800FE004;
    tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[0].v.cn[0] = gTextGradient[0];
    tile->quad[0].v.cn[1] = gTextGradient[1];
    tile->quad[0].v.cn[2] = gTextGradient[2];
    tile->quad[0].v.cn[3] = gTextGradient[3];

    tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
    tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
    tile->quad[1].v.ob[2] = sp5C + D_800FE008;
    tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
    tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[1].v.cn[0] = gTextGradient[4];
    tile->quad[1].v.cn[1] = gTextGradient[5];
    tile->quad[1].v.cn[2] = gTextGradient[6];
    tile->quad[1].v.cn[3] = gTextGradient[7];

    tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
    tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
    tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
    tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
    tile->quad[2].v.cn[0] = gTextGradient[8];
    tile->quad[2].v.cn[1] = gTextGradient[9];
    tile->quad[2].v.cn[2] = gTextGradient[10];
    tile->quad[2].v.cn[3] = gTextGradient[11];

    tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
    tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
    tile->quad[3].v.ob[2] = sp5C + D_800FE010;
    tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
    tile->quad[3].v.cn[0] = gTextGradient[12];
    tile->quad[3].v.cn[1] = gTextGradient[13];
    tile->quad[3].v.cn[2] = gTextGradient[14];
    tile->quad[3].v.cn[3] = gTextGradient[15];

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    PrintReset();
}

void func_8005B874(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    f32 sp6C;
    f32 sp68;
    f32 x1, y1;
    f32 sp5C;
    s32 sp58;
    s32 sp54;
    SpriteListing* tile;
    s32 i, j;

    arg0 += D_800FDFF4;
    arg1 += D_800FDFF8;

    for (i = 0; i < gSpriteListings[arg7].tileCountX; i++) {
        for (j = 0; j < gSpriteListings[arg7].tileCountY; j++) {
            if (D_800FDFB8[gSpriteFrameBuffer] >= 200) {
                PrintReset();
                return;
            }

            tile = &D_8018E698[gSpriteFrameBuffer][D_800FDFB8[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg7];
            D_800FDFB8[gSpriteFrameBuffer]++;

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            sp58 = ABS2(tile->tileIndexX * tile->width + D_800FDFE0 * tile->width);
            sp54 = ABS2(tile->tileIndexY * tile->height + D_800FDFE4 * tile->height);

            if (arg5 == 0.0f && arg6 == 0.0f) {
                sp6C = tile->width * D_800FDFF0 / 2;
                sp68 = tile->height * D_800FDFF0 / 2;
            } else {
                sp6C = arg5 * arg4 / 2;
                sp68 = arg6 * arg4 / 2;
            }

            x1 = -160.0f + arg0 + i * tile->width + sp6C;
            y1 = 120.0f - arg1 - j * tile->height - sp68;
            sp5C = -D_800FDF9C - arg2;

            tile->quad[0].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * sp68 + x1;
            tile->quad[0].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * -sp6C + y1;
            tile->quad[0].v.ob[2] = sp5C + D_800FE004;
            tile->quad[0].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[0].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[0].v.cn[0] = gTextGradient[0];
            tile->quad[0].v.cn[1] = gTextGradient[1];
            tile->quad[0].v.cn[2] = gTextGradient[2];
            tile->quad[0].v.cn[3] = gTextGradient[3];

            tile->quad[1].v.ob[0] = cosf(arg3) * -sp6C + sinf(arg3) * (-sp68 * 1) + x1;
            tile->quad[1].v.ob[1] = cosf(arg3) * (-sp68 * 1) + sinf(arg3) * -sp6C + y1;
            tile->quad[1].v.ob[2] = sp5C + D_800FE008;
            tile->quad[1].v.tc[0] = (s16)(sp58) << (D_800FDF98 + 6);
            tile->quad[1].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[1].v.cn[0] = gTextGradient[4];
            tile->quad[1].v.cn[1] = gTextGradient[5];
            tile->quad[1].v.cn[2] = gTextGradient[6];
            tile->quad[1].v.cn[3] = gTextGradient[7];

            tile->quad[2].v.ob[0] = cosf(arg3) * (sp6C * 1) + sinf(arg3) * sp68 + x1;
            tile->quad[2].v.ob[1] = cosf(arg3) * sp68 + sinf(arg3) * (sp6C * 1) + y1;
            tile->quad[2].v.ob[2] = sp5C + D_800FE00C;
            tile->quad[2].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[2].v.tc[1] = (s16)(sp54) << (D_800FDF98 + 6);
            tile->quad[2].v.cn[0] = gTextGradient[8];
            tile->quad[2].v.cn[1] = gTextGradient[9];
            tile->quad[2].v.cn[2] = gTextGradient[10];
            tile->quad[2].v.cn[3] = gTextGradient[11];

            tile->quad[3].v.ob[0] = cosf(arg3) * sp6C + sinf(arg3) * -sp68 + x1;
            tile->quad[3].v.ob[1] = cosf(arg3) * -sp68 + sinf(arg3) * sp6C + y1;
            tile->quad[3].v.ob[2] = sp5C + D_800FE010;
            tile->quad[3].v.tc[0] = (s16)(sp58 + tile->width - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.tc[1] = (s16)(sp54 + tile->height - 1) << (D_800FDF98 + 6);
            tile->quad[3].v.cn[0] = gTextGradient[12];
            tile->quad[3].v.cn[1] = gTextGradient[13];
            tile->quad[3].v.cn[2] = gTextGradient[14];
            tile->quad[3].v.cn[3] = gTextGradient[15];

            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
        }
    }
    PrintReset();
}

#ifdef NON_MATCHING
void func_8005C04C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    SpriteListing* tile;

    if (D_800FDFC0[gSpriteFrameBuffer] >= 200) {
        PrintReset();
        return;
    }

    tile = &D_8019A218[gSpriteFrameBuffer][D_800FDFC0[gSpriteFrameBuffer]];
    *tile = gSpriteListings[arg4];

    if (arg3 >= 1.0 || arg3 == 0.0f) {
        tile->tileIndexX = arg3;
    } else {
        tile->tileIndexX = tile->unk10[(s32)(tile->unk14 * arg3)] % tile->tileCountX;
    }
    tile->tileIndexY = tile->unk10[(s32)(tile->unk14 * arg3)] / tile->tileCountX + D_800FDFE8;

    tile->quad[0].v.ob[0] = ((s16)arg0) * 4;
    tile->quad[0].v.ob[1] = ((s16)arg1) * 4;
    tile->quad[0].v.ob[2] = ((s16)arg2) * 4;

    tile->quad[1].v.ob[0] = (((s16)arg0) + tile->width) * 4;
    tile->quad[1].v.ob[1] = (((s16)arg1) + tile->height) * 4;
    tile->quad[1].v.ob[2] = ((s16)arg2) * 4;

    if (tile->quad[1].v.ob[0] < 0 || tile->quad[0].v.ob[0] > SCREEN_WIDTH * 4 ||
        tile->quad[1].v.ob[1] < 0 || tile->quad[0].v.ob[1] > SCREEN_HEIGHT * 4) {
        PrintReset();
        return;
    }

    tile->quad[0].v.tc[0] = ((s16)(tile->tileIndexX * tile->width)) << 5;
    tile->quad[0].v.tc[1] = ((s16)(tile->tileIndexY * tile->height)) << 5;

    if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
        tile->prim.r = gPrimRed;
        tile->prim.g = gPrimGreen;
        tile->prim.b = gPrimBlue;
        tile->prim.a = gPrimAlpha;
    }
    D_800FDFC0[gSpriteFrameBuffer]++;
    PrintReset();
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8005C04C.s")
#endif

void func_8005C454(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    s32 i, j;
    SpriteListing* tile;

    for (i = 0; i < gSpriteListings[arg3].tileCountX; i++) {
        for (j = 0; j < gSpriteListings[arg3].tileCountY; j++) {
            if (D_800FDFC0[gSpriteFrameBuffer] >= 200) {
                PrintReset();
                return;
            }

            tile = &D_8019A218[gSpriteFrameBuffer][D_800FDFC0[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg3];

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            tile->quad[0].v.ob[0] = ((s16)arg0 + i * tile->width) * 4;
            tile->quad[0].v.ob[1] = ((s16)arg1 + j * tile->height) * 4;
            tile->quad[0].v.ob[2] = (s16)arg2 * 4;

            tile->quad[1].v.ob[0] = ((s16)arg0 + i * tile->width + tile->width) * 4;
            tile->quad[1].v.ob[1] = ((s16)arg1 + j * tile->height + tile->height) * 4;
            tile->quad[1].v.ob[2] = (s16)arg2 * 4;

            if (tile->quad[1].v.ob[0] < 0 || tile->quad[0].v.ob[0] > SCREEN_WIDTH * 4 ||
                tile->quad[1].v.ob[1] < 0 || tile->quad[0].v.ob[1] > SCREEN_HEIGHT * 4) {
                continue;
            }

            tile->quad[0].v.tc[0] = ((s16)(tile->tileIndexX * tile->width)) << 5;
            tile->quad[0].v.tc[1] = ((s16)(tile->tileIndexY * tile->height)) << 5;
            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
            D_800FDFC0[gSpriteFrameBuffer]++;
        }
    }
    PrintReset();
}

void func_8005C6FC(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    s32 i, j;
    SpriteListing* tile;

    for (i = 0; i < gSpriteListings[arg3].tileCountX; i++) {
        for (j = gSpriteListings[arg3].tileCountY / 2; j < gSpriteListings[arg3].tileCountY; j++) {
            if (D_800FDFC0[gSpriteFrameBuffer] >= 200) {
                PrintReset();
                return;
            }

            tile = &D_8019A218[gSpriteFrameBuffer][D_800FDFC0[gSpriteFrameBuffer]];
            *tile = gSpriteListings[arg3];

            tile->tileIndexX = i;
            tile->tileIndexY = j;

            tile->quad[0].v.ob[0] = ((s16)arg0 + i * tile->width) * 4;
            tile->quad[0].v.ob[1] = ((s16)arg1 + j * tile->height) * 4;
            tile->quad[0].v.ob[2] = (s16)arg2 * 4;

            tile->quad[1].v.ob[0] = ((s16)arg0 + i * tile->width + tile->width) * 4;
            tile->quad[1].v.ob[1] = ((s16)arg1 + j * tile->height + tile->height) * 4;
            tile->quad[1].v.ob[2] = (s16)arg2 * 4;

            if (tile->quad[1].v.ob[0] < 0 || tile->quad[0].v.ob[0] > SCREEN_WIDTH * 4 ||
                tile->quad[1].v.ob[1] < 0 || tile->quad[0].v.ob[1] > SCREEN_HEIGHT * 4) {
                continue;
            }

            tile->quad[0].v.tc[0] = ((s16)(tile->tileIndexX * tile->width)) << 5;
            tile->quad[0].v.tc[1] = ((s16)(tile->tileIndexY * tile->height)) << 5;
            if (gPrimRed != 0 || gPrimGreen != 0 || gPrimBlue != 0 || gPrimAlpha != 0) {
                tile->prim.r = gPrimRed;
                tile->prim.g = gPrimGreen;
                tile->prim.b = gPrimBlue;
                tile->prim.a = gPrimAlpha;
            }
            D_800FDFC0[gSpriteFrameBuffer]++;
        }
    }
    PrintReset();
}

//gSpriteListings init???
void func_8005C9B8(void) {
    s32 i;
    for (i = 0; i < ARRAY_COUNT(gSpriteListings); i++) {
        gSpriteListings[i].unk70 = 0;
        if (gSpriteListings[i].bitmapRom != 0) {
            gSpriteListings[i].raster = (void*)gSpriteListings[i].bitmapRom;
        }
        if (gSpriteListings[i].paletteRom != 0) {
            gSpriteListings[i].palette = (void*)gSpriteListings[i].paletteRom;
        }
    }
    LoadSprite(SPRITE_CROWN);
    LoadSprite(SPRITE_HEARTRED);
    LoadSprite(SPRITE_HEARTORANGE);
    LoadSprite(SPRITE_HEARTYELLOW);
    LoadSprite(SPRITE_CARROT);
}

void func_8005CA38(void) {
    D_800FDFA0 = 0;
}

Gfx* func_8005CA44(Gfx* gfxPos) {
    s32 i;
    SpriteListing* tile;
    s32 ulx, uly;

    func_800610B8();
    gSPDisplayList(gfxPos++, static0_spriteController7_Gfx);
    gSPMatrix(gfxPos++, &D_800F68D0[4], G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    tile = D_80176F98[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFA8[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        gSPDisplayList(gfxPos++, tile->unk_00);

        switch (tile->type) {
            case COLORMODE_BLANK:
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);

    tile = D_80182B18[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFB0[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gSPDisplayList(gfxPos++, tile->unk_00);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gSPDisplayList(gfxPos++, tile->unk_00);
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    //@bug game draws the glass wall boxes on file select if player quits while in the room
    if (gGameModeCurrent != GAME_MODE_SAVE_MENU && gCurrentStage == STAGE_KIDS && gCurrentZone == ZONE_GLASS_WALL_2) {
        gSPDisplayList(gfxPos++, KidsLand_model56_Gfx);
        gSPDisplayList(gfxPos++, KidsLand_model66_Gfx);
        gSPDisplayList(gfxPos++, KidsLand_model65_Gfx);
    }
    if (gGameModeCurrent != GAME_MODE_SAVE_MENU && gCurrentStage == STAGE_KIDS && gCurrentZone == ZONE_GLASS_WALL_1) {
        gSPDisplayList(gfxPos++, KidsLand_model61_Gfx);
    }
    gSPDisplayList(gfxPos++, static0_spriteController7_Gfx);
    gSPMatrix(gfxPos++, &D_800F68D0[4], G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    tile = D_8018E698[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFB8[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gSPDisplayList(gfxPos++, static0_spriteController9_Gfx);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    gSpriteFrameBuffer ^= 1;
    D_800FDFA8[gSpriteFrameBuffer] = 0;
    D_800FDFB0[gSpriteFrameBuffer] = 0;
    D_800FDFB8[gSpriteFrameBuffer] = 0;
    PrintReset();
    return gfxPos;
}

Gfx* func_8005F408(Gfx* gfxPos) {
    s32 i;
    SpriteListing* tile;
    s32 ulx, uly;

    func_800610B8();
    gSPDisplayList(gfxPos++, static0_spriteController7_Gfx);
    gSPMatrix(gfxPos++, &D_800F68D0[4], G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, D_800FE080);
    gDPSetRenderMode(gfxPos++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
    gDPSetCombineLERP(gfxPos++, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0);

    tile = D_8019A218[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFC0[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gDPSetCombineMode(gfxPos++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPScisTextureRectangle(gfxPos++, tile->quad[0].v.ob[0], tile->quad[0].v.ob[1], tile->quad[1].v.ob[0], tile->quad[1].v.ob[1],
                                0, tile->quad[0].v.tc[0], tile->quad[0].v.tc[1], 0x400, 0x400);
    }

    gSPDisplayList(gfxPos++, D_800FE0F0);

    tile = D_801A5D98[gSpriteFrameBuffer];
    for (i = 0; i < D_800FDFC8[gSpriteFrameBuffer]; tile++, i++) {
        ulx = ABS2(tile->tileIndexX * tile->width);
        uly = ABS2(tile->tileIndexY * tile->height);

        switch (tile->type) {
            case COLORMODE_BLANK:
                gSPDisplayList(gfxPos++, static0_spriteController9_Gfx);
                break;
            case COLORMODE_BW:
            case COLORMODE_IA4:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_IA, tile->width * tile->tileCountX, 0,
                                      ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                      G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA32:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_32b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA8:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_IA16:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_IA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_RGBA16:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_RGBA, G_IM_SIZ_16b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI4:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile_4b(gfxPos++, tile->raster, G_IM_FMT_CI, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
            case COLORMODE_CI8:
                gSPDisplayList(gfxPos++, static0_spriteController8_Gfx);
                gDPLoadTLUT_pal256(gfxPos++, tile->palette);
                gDPSetTextureLUT(gfxPos++, G_TT_RGBA16);
                gDPLoadTextureTile(gfxPos++, tile->raster, G_IM_FMT_CI, G_IM_SIZ_8b, tile->width * tile->tileCountX, 0,
                                    ulx, uly, ulx + tile->width - 1, uly + tile->height - 1, 0,
                                    G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                break;
        }

        gDPSetPrimColor(gfxPos++, 0, 0, tile->prim.r, tile->prim.g, tile->prim.b, tile->prim.a);
        gSPVertex(gfxPos++, tile->quad, 4, 0);
        gSP1Triangle(gfxPos++, 0, 1, 2, 0);
        gSP1Triangle(gfxPos++, 3, 2, 1, 0);
    }

    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    D_800FDFC0[gSpriteFrameBuffer] = 0;
    D_800FDFC8[gSpriteFrameBuffer] = 0;
    PrintReset();
    return gfxPos;
}


void func_800610A8(void) {
    D_800FE000 = 1;
}

void func_800610B8(void) {
    D_800FE000 = 0;
    PrintReset();
    func_8007E5E8();
}

void func_800610E4(f32 arg0, f32 arg1) {
    D_800FDFE0 = (u32) arg0;
    D_800FDFE4 = (u32) arg1;
}

void func_800611F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_800FE004 = arg0;
    D_800FE008 = arg1;
    D_800FE00C = arg2;
    D_800FE010 = arg3;
}

void func_8006122C(f32 arg0, f32 arg1) {
    D_800FDFF4 = arg0;
    D_800FDFF8 = arg1;
}

void func_80061240(void) {
    D_800FDFF4 = 0.0f;
    D_800FDFF8 = 0.0f;
}

void func_80061258(f32 arg0) {
    D_800FDFFC = arg0;
}

void func_80061264(f32 arg0) {
    D_800FDFFC = arg0;
}

void setPrimColor(u8 r, u8 g, u8 b, u8 a) {
    gPrimRed = r;
    gPrimGreen = g;
    gPrimBlue = b;
    gPrimAlpha = a;
}

void setPrimColorCopy(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    gPrimRed = arg0;
    gPrimGreen = arg1;
    gPrimBlue = arg2;
    gPrimAlpha = arg3;
}

void func_800612D8(f32 arg0) {
    D_800FDFF0 = arg0;
}

void func_800612E4(f32 arg0) {
    D_800FDFF0 = arg0;
}

//sets spritesheet y???
void func_800612F0(s32 arg0) {
    D_800FDFE8 = arg0;
}

void func_800612FC(void) {
    D_800FDFEC = 0.0f;
}

void SetTextGradient(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, u8 argC, u8 argD, u8 argE, u8 argF) {
    gTextGradient[0] = arg0;
    gTextGradient[1] = arg1;
    gTextGradient[2] = arg2;
    gTextGradient[3] = arg3;
    gTextGradient[4] = arg4;
    gTextGradient[5] = arg5;
    gTextGradient[6] = arg6;
    gTextGradient[7] = arg7;
    gTextGradient[8] = arg8;
    gTextGradient[9] = arg9;
    gTextGradient[10] = argA;
    gTextGradient[11] = argB;
    gTextGradient[12] = argC;
    gTextGradient[13] = argD;
    gTextGradient[14] = argE;
    gTextGradient[15] = argF;
}

void func_80061394(void) {
    D_800FDFC0[0] = 0;
    D_800FDFC0[1] = 0;
    D_800FDFC8[0] = 0;
    D_800FDFC8[1] = 0;
    PrintReset();
}

void Effect_ResetListEntry(Effect* effect) {
    effect->numParts = 0;
    effect->parts = NULL;
    effect->previous = NULL;
    effect->next = NULL;
    effect->lifeTime = 0.0f;
}

Effect* Effect_Alloc(s32 numParts, s32 dataSize, void* fpUpdate) {
    Effect* effect;

    effect = _malloc(sizeof(Effect));

    if (effect == NULL) {
        return NULL;
    }

    if (numParts != 0) {
        effect->parts = _malloc(numParts * sizeof(EffectPart));
        if (effect->parts == NULL) {
            Free(effect);
            return NULL;
        }
    } else {
        effect->parts = 0;
    }

    if (dataSize != 0) {
        effect->data = _malloc(dataSize);
        if (effect->data == NULL) {
            Free(effect);
            Free(effect->parts);
            return NULL;
        }
    } else {
        effect->data = NULL;
    }

    if (gEffectListHead->next != NULL) {
        gEffectListHead->next->previous = effect;
    }

    effect->numParts = numParts;
    effect->lifeTime = 0.0f;
    effect->fpUpdate = fpUpdate;

    effect->previous = gEffectListHead;
    effect->next = gEffectListHead->next;
    gEffectListHead->next = effect;
    gEffectListHead = effect;

    gEffectListCount++;
    return effect;
}

void Effect_Free(Effect* effect) {
    Effect* previuos = effect->previous;
    if (previuos != NULL) {
        previuos->next = effect->next;
    }
    if (effect->next != NULL) {
        effect->next->previous = effect->previous;
    }
    if (effect == gEffectListHead) {
        gEffectListHead = effect->previous;
    }
    Free(effect->parts);
    Free(effect->data);
    Free(effect);
    gEffectListCount -= 1;
}

void Effect_Init(void) {
    gEffectListHead = &gEffectList;
    Effect_ResetListEntry(gEffectListHead);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_UpdateAll.s")

void Effect_TypeA_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    s32 i;
    s32 numAlive;
    u8 alpha;
    f32 size;

    for (i = 0, numAlive = 0; i < effect->numParts; i++) {
        if (parts[i].lifeTime == 0.0f) {
            continue;
        }
        numAlive++;

        alpha = (1.0f - parts[i].lifeTime) * 255.0f;
        if (i == 0) {
            setPrimColor(alpha, alpha, alpha, alpha);
        } else {
            setPrimColor(alpha / 50, 0, 0, alpha);
        }

        size = effect->duration - parts[i].lifeTime * effect->duration;
        func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, size * 2, size * 2, parts[i].lifeTime, SPRITE_PUFF);

        if (D_800F687C > 0) {
            if ((i % 2)) {
                setPrimColor(alpha, 0, 0, 127);
                func_8005747C(effect->pos.x + RANDOM(-30, 30), effect->pos.y + RANDOM(-60, 60), effect->pos.z + RANDOM(-30, 30), size / 2, size / 2, parts[i].lifeTime, SPRITE_PUFF);
            }

            parts[i].pos.x += parts[i].vel.x;
            parts[i].pos.y += parts[i].vel.y;
            parts[i].pos.z += parts[i].vel.z;

            parts[i].lifeTime += 1.0f / 30.0f;
            if (parts[i].lifeTime >= 1.0f) {
                parts[i].lifeTime = 0.0f;
            }
        }
    }

    if (numAlive == 0) {
        Effect_Free(effect);
    }
}

void Effect_TypeA_Init(f32 posX, f32 posY, f32 posZ, s32 numParts, s32 size) {
    Effect* effect;
    EffectPart* parts;
    s32 i;

    effect = Effect_Alloc(numParts, 0, &Effect_TypeA_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = size * 3;
    effect->unk8 = PLAY_SFX_AT(SFX_C3_unkSnd, effect->pos, 0, 0x20);

    for (parts = effect->parts, i = 0; i < numParts; i++) {
        parts[i].pos.x = posX + RANDOM(-size, size);
        parts[i].pos.y = posY + RANDOM(-size, size);
        parts[i].pos.z = posZ + RANDOM(-size, size);
        parts[i].vel.x = RANDOM(-size, size) / 10.0f;
        parts[i].vel.y = RANDOM(size, 2 * size) / 10.0f;
        parts[i].vel.z = RANDOM(-size, size) / 10.0f;
        parts[i].lifeTime = 1.0f / RANDOM(27, 60);
    }
}

void Effect_TypeA_Init2(f32 posX, f32 posY, f32 posZ, s32 numParts, s32 size) {
    Effect* effect;
    EffectPart* parts;
    s32 i;

    effect = Effect_Alloc(numParts, 0, &Effect_TypeA_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = size * 3;
    effect->unk8 = PLAY_SFX_AT(SFX_C3_unkSnd, effect->pos, 10, 0x20);

    for (parts = effect->parts, i = 0; i < numParts; i++) {
        parts[i].pos.x = posX + RANDOM(-size, size);
        parts[i].pos.y = posY + RANDOM(-size, size);
        parts[i].pos.z = posZ + RANDOM(-size, size);
        parts[i].vel.x = RANDOM(-size, size) / 10.0f;
        parts[i].vel.y = RANDOM(size, 2 * size) / 10.0f;
        parts[i].vel.z = RANDOM(-size, size) / 10.0f;
        parts[i].lifeTime = 1.0f / RANDOM(27, 60);
    }
}

void func_8006202C(void) {
    D_800FE160 = 0;
}

s32 func_80062038(void) {
    if (!gContMain->buttons0 && gContMain->stickX > -5 && gContMain->stickX < 5 && gContMain->stickY > -5 && gContMain->stickY < 5) {
        D_800FE160 = 0;
        return D_800FE160;
    } else if (D_800F687C > 0) {
        D_800FE160++;
        return D_800FE160;
    } else {
        D_800FE160 = 0;
        return D_800FE160;
    }
}

void Effect_TypeB_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    s32 i;
    s32 numAlive;

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime > 1.0f) { } // required for matching

        for (i = 0; i < effect->numParts; i++) {
            if (parts[i].lifeTime == 0.0f && effect->lifeTime < 1.0f) {
                parts[i].pos.x = effect->pos.x + sinf(effect->lifeTime * 6.28312 * 6.0) * effect->lifeTime * 150.0f;
                parts[i].pos.y = effect->pos.y;
                parts[i].pos.z = effect->pos.z - cosf(effect->lifeTime * 6.28312 * 6.0) * effect->lifeTime * 150.0f;

                parts[i].sizeX = 1;
                parts[i].sizeY = 1;

                parts[i].vel.x = RANDOM(-5, 5);
                parts[i].vel.y = RANDOM(-5, 5);
                parts[i].vel.z = RANDOM(-5, 5);

                parts[i].lifeTime = 1.0f / effect->numParts * 2;
                break;
            }
        }
    }

    for (i = 0, numAlive = 0; i < effect->numParts; i++) {
        if (parts[i].lifeTime > 0.0f) {
            numAlive++;

            setPrimColor(255, 255, 255, 200);
            func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, parts[i].sizeX * 1.5, parts[i].sizeY * 1.5, parts[i].lifeTime, SPRITE_TWINKLE);

            setPrimColor(200, 255, 0, 160);
            func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, parts[i].sizeX, parts[i].sizeY, parts[i].lifeTime, SPRITE_TWINKLE2);

            if (D_800F687C > 0) {
                parts[i].vel.y -= 1.02;

                parts[i].sizeX = RANDOM(10, 50);
                parts[i].sizeY = RANDOM(10, 50);

                parts[i].pos.x += parts[i].vel.x;
                parts[i].pos.y += parts[i].vel.y;
                parts[i].pos.z += parts[i].vel.z;

                parts[i].lifeTime += 1.0f / effect->numParts * 4.0f;
                if (parts[i].lifeTime >= 1.0f) {
                    parts[i].lifeTime = 0.0f;
                }
            }
        }
    }

    if (numAlive == 0) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeB_Init(f32 posX, f32 posY, f32 posZ, s32 numParts) {
    Effect* effect;
    EffectPart* parts;
    s32 i;

    effect = Effect_Alloc(numParts, 0, &Effect_TypeB_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = 30.0f;
    effect->lifeTime = 0.0f;
    effect->numParts = numParts; // unnecessary assignment

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].sizeX = 1.0f;
        parts[i].sizeY = 1.0f;

        parts[i].pos.x = 0.0f;
        parts[i].pos.y = 0.0f;
        parts[i].pos.z = 0.0f;

        parts[i].lifeTime = 0.0f;

        parts[i].vel.x = 0.0f;
        parts[i].vel.y = -10.0f;
        parts[i].vel.z = 0.0f;
    }

    return effect;
}

void func_8006266C(Effect* effect) {
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;

    data->mode = 1;
    data->idleTime = 0.0f;
}

void func_80062684(Effect* effect) {
    EffectPart* parts = effect->parts;
    s32 i;

    for (i = 0; i < effect->numParts; i++) {
        switch(parts[i].unk_25) {
            case 0:
                if (((s32)(parts[i].lifeTime * 50.0f) % 2) || D_800F687C == 0) {
                    printUISprite(effect->pos.x + parts[i].pos.x, effect->pos.y + parts[i].pos.y, effect->pos.z + parts[i].pos.z, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, SPRITE_HITPOINT);
                }
                if (D_800F687C > 0) {
                    parts[i].lifeTime += 1.0f / 30.0f;
                }
                if (parts[i].lifeTime >= 1.0f) {
                    parts[i].lifeTime = 0.0f;
                    parts[i].unk_25 = 2;
                }
                break;
            case 1:
                if ((s32)(parts[i].lifeTime * 50.0f) % 2) {
                    printUISprite(effect->pos.x + parts[i].pos.x, effect->pos.y + parts[i].pos.y, effect->pos.z + parts[i].pos.z, (parts[i].lifeTime - 1.0f) * 6.28312, 0.5f, 0.0f, 0.0f, 0.0f, SPRITE_HITPOINT);
                }
                if (D_800F687C > 0) {
                    parts[i].lifeTime += 1.0f / 30.0f;
                }
                if (parts[i].lifeTime >= 1.0f) {
                    parts[i].lifeTime = 0.0f;
                    parts[i].unk_25 = 3;
                }
                break;
            case 2:
                printUISprite(effect->pos.x + parts[i].pos.x, effect->pos.y + parts[i].pos.y, effect->pos.z + parts[i].pos.z, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, SPRITE_HITPOINT);
                parts[i].lifeTime = 0.0f;
                break;
            case 3:
                parts[i].lifeTime = 0.0f;
                break;
        }
    }
}

void func_800629C4(void) {
    D_800FE164 = TRUE;
}

void func_800629D4(void) {
    D_800FE164 = FALSE;
}

void Effect_HealthBar_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;
    s32 i;

    if (D_800FE164 == TRUE || *data->curHPPtr <= 0) {
        return;
    }
    if (D_80176F58[0] == 1 && D_80176F58[1] == 1) {
        return;
    }

    if (*data->curHPPtr < 10) {
        data->idleTime = 0.0f;
        data->mode = 1;
    }

    for (i = data->lastHP; i < *data->curHPPtr; i++) {
        parts[i].unk_25 = 0;
        data->idleTime = 0.0f;
        data->mode = 1;
    }

    for (i = data->lastHP; i > *data->curHPPtr; i--) {
        parts[i - 1].unk_25 = 1;
        data->idleTime = 0.0f;
        data->mode = 1;
    }

    if (D_800F687C == 0) {
        data->idleTime = 0.0f;
        if (D_800F06E4 < 0) {
            data->mode = 1;
        } else {
            data->mode = 0;
        }
    }

    data->lastHP = *data->curHPPtr;

    switch (data->mode) {
        case 0:
            data->idleTime += 1.0f / 360.0f;
            if (func_80062038() > 0) {
                data->idleTime = 0.0f;
            }
            data->movePhase = 0.0f;
            if (data->idleTime >= 1.0f) {
                data->idleTime = 0.0f;
                data->mode = 1;
            }
            break;
        case 1:
            func_8006122C(0.0f, sinf(data->movePhase * PI_SHORT / 2) * 50.0f - 50.0f);
            func_80062684(effect);
            func_80061240();
            data->movePhase += 1.0f / 8.0f;
            if (data->movePhase >= 1.0f) {
                data->movePhase = 1.0f;
                data->mode = 2;
            }
            break;
        case 2:
            func_80062684(effect);
            data->movePhase = 1.0f;
            if (func_80062038() > 30) {
                data->mode = 3;
            }
            break;
        case 3:
            func_8006122C(0.0f, sinf(data->movePhase * PI_SHORT / 2) * 50.0f - 50.0f);
            func_80062684(effect);
            func_80061240();
            data->movePhase -= 1.0f / 15.0f;
            if (data->movePhase <= 0) {
                data->movePhase = 0.0f;
                data->mode = 0;
            }
            break;
    }
}

Effect* Effect_HealthBar_Init(s32 posX, s32 posY, s32* arg2, s32* arg3, u32 arg4, s32 arg5) {
    Effect* effect;
    EffectPart* parts;
    Effect_HealthBar_Data* data;
    s32 i;

    effect = Effect_Alloc(*arg2, sizeof(Effect_HealthBar_Data), &Effect_HealthBar_Update);
    if (effect == NULL) {
        return effect;
    }

    func_800629D4();

    data = (Effect_HealthBar_Data*)effect->data;
    data->mode = 0;
    data->curHPPtr = arg2;
    data->movePhase = 0.0f;
    data->lastHP = *arg2;
    data->idleTime = 0.0f;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = 0.0f;
    effect->lifeTime = 0.0f;
    effect->duration = 15.0f;

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].unk_25 = 0;
        parts[i].lifeTime = 0;

        parts[i].pos.x = i * 14;
        parts[i].pos.y = 0.0f;
        parts[i].pos.z = 0.0f;
    }

    return effect;
}

void func_80062E18(Effect* effect) {
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;

    SetTextGradient_TopBottom(191, 10, 0, 255, 200, 200, 0, 255);
    printNumber(264.0f, 16.0f, 0.0f, 1.0f, (f32) *data->curHPPtr, 2, 0);

    printUISprite(232.0f, 16.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, SPRITE_CROWN);

    SetTextGradient_TopBottom(191, 10, 0, 255, 200, 200, 0, 255);
    PrintText(254.0f, 20.0f, 0.0f, 1.0f, 8.0f, 8.0f, "Ｘ", 1);

    SetTextGradient_TopBottom(191, 10, 0, 255, 200, 200, 0, 255);
    printNumber(264.0f, 36.0f, 0.0f, 1.0f, (f32) gTotalCarrots, 2, 0);

    printUISprite(232.0f, 36.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, SPRITE_CARROT);

    SetTextGradient_TopBottom(191, 10, 0, 255, 200, 200, 0, 255);
    PrintText(254.0f, 40.0f, 0.0f, 1.0f, 8.0f, 8.0f, "Ｘ", 1);
}

#ifdef NON_MATCHING
void func_80063160(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;
    Effect_HealthBar_Data* data = (Effect_HealthBar_Data*)effect->data;
    s32 i;

    if (D_800FE164 == TRUE || gCurrentStage == STAGE_TRAINING) {
        return;
    }
    if (gCurrentStage != 0 &&
        gCurrentStage != 1 &&
        gCurrentStage != 2 &&
        gCurrentStage != 3 &&
        gCurrentStage != 4 &&
        gCurrentStage != 5 &&
        gCurrentStage != 9 &&
        gCurrentStage != 10 &&
        gCurrentStage != 11 &&
        gCurrentStage != 12 &&
        gCurrentStage != 13 &&
        gCurrentStage != 14 &&
        D_80108790 != 0) {
        return;
        }

    if (D_80176F58[0] == 1 && D_80176F58[1] == 1) {
        return;
    }

    if (D_800F687C == 0) {
        data->idleTime = 0.0f;
        if (D_800F06E4 < 0) {
            data->mode = 1;
        } else {
            data->mode = 0;
        }
    }

    for (i = data->lastHP; i < *data->curHPPtr; i++) {
        data->idleTime = 0.0f;
        data->mode = 1;
    }

    if (gTotalCarrots > D_800FE188) {
        data->idleTime = 0.0f;
        data->mode = 1;
    }
    D_800FE188 = gTotalCarrots;

    data->lastHP = *data->curHPPtr;
    switch (data->mode) {
        case 0:
            data->idleTime += 1.0f / 180.0f;
            if (func_80062038() > 0) {
                data->idleTime = 0.0f;
            }
            data->movePhase = 0.0f;
            if (data->idleTime >= 1.0f) {
                data->idleTime = 0.0f;
                data->mode = 1;
            }
            break;
        case 1:
            func_8006122C(0.0f, sinf(data->movePhase * PI_SHORT / 2) * 50.0f - 50.0f);
            func_80062E18(effect);
            func_80061240();
            data->movePhase += 1.0f / 8.0f;
            if (data->movePhase >= 1.0f) {
                func_8006202C();
                data->movePhase = 1.0f;
                data->mode = 2;
            }
            break;
        case 2:
            func_80062E18(effect);
            data->movePhase = 1.0f;
            if (func_80062038() > 30) {
                data->mode = 3;
            }
            break;
        case 3:
            func_8006122C(0.0f, sinf(data->movePhase * PI_SHORT / 2) * 50.0f - 50.0f);
            func_80062E18(effect);
            func_80061240();
            data->movePhase -= 1.0f / 15.0f;
            if (data->movePhase <= 0) {
                data->movePhase = 0.0f;
                data->mode = 0;
            }
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80063160.s")
void func_80063160(Effect* effect, Gfx** pGfxPos);
#endif

Effect* func_800634D4(s32 posX, s32 posY, s32* arg2, s32* arg3, u32 arg4, s32 arg5) {
    Effect* effect;
    EffectPart* parts;
    Effect_HealthBar_Data* data;
    s32 i;

    effect = Effect_Alloc(*arg2, sizeof(Effect_HealthBar_Data), &func_80063160);
    if (effect == NULL) {
        return effect;
    }

    func_800629D4();

    data = (Effect_HealthBar_Data*)effect->data;
    data->mode = 0;
    data->curHPPtr = arg2;
    data->movePhase = 0.0f;
    data->lastHP = *arg2;
    data->idleTime = 0.0f;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = 0.0f;
    effect->lifeTime = 0.0f;
    effect->duration = 15.0f;

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].unk_25 = 0;
        parts[i].lifeTime = 0;

        parts[i].pos.x = i * 14;
        parts[i].pos.y = 0.0f;
        parts[i].pos.z = 0.0f;
    }

    return effect;
}

void Effect_TypeC_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeC_Data* data = (Effect_TypeC_Data*)effect->data;
    EffectPart* parts = effect->parts;
    s32 i;

    for (i = 0; i < effect->numParts; i++) {
        if (parts[i].lifeTime < 1.0f) {
            setPrimColor(data->color.r, data->color.g, data->color.b, data->color.a - parts[i].lifeTime * (data->color.a - 1));
            func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, data->sizeX / 3.0f, data->sizeY / 3.0f, effect->lifeTime, data->spriteID);

            if (D_800F687C > 0) {
                parts[i].vel.y += 1;

                parts[i].pos.x += parts[i].vel.x;
                parts[i].pos.y += parts[i].vel.y;
                parts[i].pos.z += parts[i].vel.z;

                parts[i].lifeTime += 100.0f / (effect->duration * RANDOM(60, 90));
            }
        }
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
    }
    if (effect->lifeTime >= 1.0f) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeC_Init(f32 posX, f32 posY, f32 posZ, f32 targetX, f32 targetY, f32 targetZ, u8 colorR, u8 colorG, u8 colorB, u8 colorA, s32 numParts, s32 spriteID) {
    Effect* effect;
    EffectPart* parts;
    Effect_TypeC_Data* data;
    s32 i;
    f32 dist;

    dist = NORM_3(posX - targetX, posY - targetY, posZ - targetZ);
    effect = Effect_Alloc(numParts, sizeof(Effect_TypeC_Data), &Effect_TypeC_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeC_Data*)effect->data;
    data->color.r = colorR;
    data->color.g = colorG;
    data->color.b = colorB;
    data->color.a = colorA;
    data->spriteID = spriteID;
    data->sizeX = dist;
    data->sizeY = dist;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = 15.0f;
    effect->lifeTime = 0.0f;

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].lifeTime = 0;

        parts[i].pos.x = posX;
        parts[i].pos.y = posY;
        parts[i].pos.z = posZ;

        parts[i].vel.x = (targetX - parts[i].pos.x + RANDOM(-dist / 2, dist / 2)) / effect->duration;
        parts[i].vel.y = (targetY - parts[i].pos.y + RANDOM(-dist / 2, dist / 2)) / effect->duration;
        parts[i].vel.z = (targetZ - parts[i].pos.z + RANDOM(-dist / 2, dist / 2)) / effect->duration;
    }

    return effect;
}

#ifdef NON_MATCHING
// float regalloc
void Effect_TypeD_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeD_Data* data = (Effect_TypeD_Data*)effect->data;
    EffectPart* parts = effect->parts;
    s32 i;

    switch (data->unk_04) {
        case 2:
            for (i = 0; i < effect->numParts; i++) {
                if (parts[i].lifeTime < 1.0f) {
                    setPrimColor(data->color.r, data->color.g, data->color.b, data->color.a - parts[i].lifeTime * (data->color.a - 1));
                    func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, data->sizeX / 3, data->sizeY / 3, effect->lifeTime, SPRITE_PUFF);

                    if (D_800F687C > 0) {
                        parts[i].vel.y += 1;

                        parts[i].pos.x += parts[i].vel.x;
                        parts[i].pos.y += parts[i].vel.y;
                        parts[i].pos.z += parts[i].vel.z;

                        parts[i].lifeTime += 100.0f / (effect->duration * RANDOM(60, 90));
                    }
                }
            }
            break;
        case 0:
            for (i = 0; i < effect->numParts; i++) {
                if (parts[i].lifeTime < 1.0f) {
                    setPrimColor(parts[i].sizeX * data->color.r, parts[i].sizeY * data->color.g, (1.0f - parts[i].lifeTime) * data->color.b, (1.0f - parts[i].lifeTime) * data->color.a);
                    func_800612D8(sinf(parts[i].lifeTime * 6.28312 * 6) * 3.0f);
                    func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, RANDOM(10, 20), RANDOM(10, 20), parts[i].lifeTime, SPRITE_BLANK);
                }

                if (D_800F687C > 0) {
                    parts[i].pos.x += parts[i].vel.x;
                    parts[i].pos.y += parts[i].vel.y;
                    parts[i].pos.z += parts[i].vel.z;

                    parts[i].vel.y -= 1;

                    parts[i].lifeTime += 1.0f / effect->duration;
                }
            }
            break;
        case 1:
        default:
            if (effect->lifeTime != 0.0f && effect->lifeTime > 0.0f) {
                setPrimColor(255, 255, 255, 64 - effect->lifeTime * 64);
                printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
            }

            for (i = 0; i < effect->numParts; i++) {
                if (parts[i].lifeTime < 1.0f) {
                    setPrimColor((1.0f - parts[i].lifeTime) * data->color.r, (1.0f - parts[i].lifeTime) * data->color.g, (1.0f - parts[i].lifeTime) * data->color.b, (1.0f - parts[i].lifeTime) * data->color.a);
                    func_800612D8(sinf(parts[i].lifeTime * 6.28312 * 6) * 3.0f);
                    func_8005747C(parts[i].pos.x, parts[i].pos.y, parts[i].pos.z, 0.0f, 0.0f, parts[i].lifeTime, SPRITE_STAR2);
                }

                if (D_800F687C > 0) {
                    parts[i].pos.x += parts[i].vel.x;
                    parts[i].pos.y += parts[i].vel.y;
                    parts[i].pos.z += parts[i].vel.z;

                    parts[i].lifeTime += 1.0f / effect->duration;
                }
            }
            break;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}
#else
void Effect_TypeD_Update(Effect* effect, Gfx** pGfxPos);
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_TypeD_Update.s")
#endif

Effect* Effect_TypeD_Init(f32 posX, f32 posY, f32 posZ, f32 targetX, f32 targetY, f32 targetZ, f32 arg6, u8 colorR, u8 colorG, u8 colorB, u8 colorA, s32 numParts, s32 argC) {
    Effect* effect;
    EffectPart* parts;
    Effect_TypeD_Data* data;
    s32 i;
    f32 dist;

    if (SQ(posX - targetX) + SQ(posY - targetY) + SQ(posZ - targetZ) > 0.0f) {
        dist = NORM_3(posX - targetX, posY - targetY, posZ - targetZ);
    } else {
        dist = 10.0f;
    }
    effect = Effect_Alloc(numParts, sizeof(Effect_TypeD_Data), &Effect_TypeD_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeD_Data*)effect->data;
    data->color.r = colorR;
    data->color.g = colorG;
    data->color.b = colorB;
    data->color.a = colorA;
    data->unk_04 = argC;
    data->sizeX = dist;
    data->sizeY = dist;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = 30.0f;
    effect->lifeTime = 0.0f;

    //null sound
    PLAY_SFX_AT(0xE0, effect->pos, 0, 0x20);

    for (parts = effect->parts, i = 0; i < effect->numParts; i++) {
        parts[i].lifeTime = 0;

        if (!argC) {
            parts[i].pos.x = posX + RANDOM(-100, 100);
            parts[i].pos.y = posY + RANDOM(-100, 100);
            parts[i].pos.z = posZ + RANDOM(-100, 100);

            parts[i].sizeX = RANDOM(0, 255) / 255.0;
            parts[i].sizeY = RANDOM(0, 255) / 255.0;
        } else if (TRUE) { // required to match
            parts[i].pos.x = posX;
            parts[i].pos.y = posY;
            parts[i].pos.z = posZ;
        }

        parts[i].vel.x = (targetX - parts[i].pos.x + RANDOM(-dist * arg6 / 2, dist * arg6 / 2)) / effect->duration;
        parts[i].vel.y = (targetY - parts[i].pos.y + RANDOM(-dist * arg6 / 2, dist * arg6 / 2)) / effect->duration;
        parts[i].vel.z = (targetZ - parts[i].pos.z + RANDOM(-dist * arg6 / 2, dist * arg6 / 2)) / effect->duration;
    }

    return effect;
}

Effect* Effect_TypeD_Create(f32 posX, f32 posY, f32 posZ) {
    if (Timing_BusyTime > 0.85) {
        return NULL;
    }
    if (gGameModeCurrent == GAME_MODE_BATTLE_MENU) {
        return Effect_TypeD_Init(posX, posY, posZ, posX + 10.0f, posY + 400.0f, posZ + 10.0f, 2.0f, 255, 255, 0, 255, 2, 1);
    } else {
        return Effect_TypeD_Init(posX, posY, posZ, posX + 10.0f, posY + 400.0f, posZ + 10.0f, 2.0f, 255, 255, 0, 255, 10, 1);
    }
}

void Effect_TypeE_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeE_Data* data = (Effect_TypeE_Data*)effect->data;
    f32 alpha = 255.0f - effect->lifeTime * 254.0f;
    EffectPart* parts = effect->parts;

    if (alpha > 254.0) {
        alpha = 254.0f;
    }
    if (alpha < 0.0) {
        alpha = 0.0f;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }

    setPrimColor(data->colorR, data->colorG, data->colorB, alpha);
    if (data->dir.x == 0.0f && data->dir.y == 0.0f && data->dir.z == 0.0f) {
        func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, data->sizeX, data->sizeY, effect->lifeTime, effect->spriteID);
    } else {
        Mtx mtx;
        guAlign(&mtx, 0.0f, data->dir.x, data->dir.y, data->dir.z);
        func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, data->sizeX, data->sizeY, effect->lifeTime, effect->spriteID);
    }
}

Effect* Effect_TypeE_Init(f32 posX, f32 posY, f32 posZ, f32 dirX, f32 dirY, f32 dirZ, f32 sizeX, f32 sizeY, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeE_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeE_Data), &Effect_TypeE_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeE_Data*)effect->data;
    data->sizeX = sizeX;
    data->sizeY = sizeY;
    data->dir.x = dirX;
    data->dir.y = dirY;
    data->dir.z = dirZ;
    data->colorR = D_800FE18C;
    data->colorG = D_800FE190;
    data->colorB = D_800FE194;
    data->colorA = D_800FE198;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = 0.0f;
    effect->vel.y = 0.0f;
    effect->vel.z = 0.0f;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeF_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeF_Data* data = (Effect_TypeF_Data*)effect->data;
    f32 alpha = 255.0f * sinf(effect->lifeTime * PI_HALF);
    EffectPart* parts = effect->parts;

    if (alpha > 254.0) {
        alpha = 254.0f;
    }
    if (alpha < 0.0) {
        alpha = 0.0f;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }

    setPrimColor(data->colorR, data->colorG, data->colorB, alpha);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, data->sizeX, data->sizeY, effect->lifeTime, effect->spriteID);
}

Effect* Effect_TypeF_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 sizeX, f32 sizeY, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeF_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeF_Data), &Effect_TypeF_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeF_Data*)effect->data;
    data->sizeX = sizeX;
    data->sizeY = sizeY;
    data->colorR = D_800FE18C;
    data->colorG = D_800FE190;
    data->colorB = D_800FE194;
    data->colorA = D_800FE198;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeG_Update(Effect* effect, Gfx** pGfxPos) {
    Gfx* gfxPos = *pGfxPos;
    Effect_TypeG_Data* data = (Effect_TypeG_Data*)effect->data;
    Mtx mtxTranslate;

    guScale(&data->mtx, data->scale.x, effect->lifeTime * data->scale.y, data->scale.z);
    guTranslate(&mtxTranslate, effect->pos.x, effect->pos.y + 10.0f, effect->pos.z);
    guMtxCatL(&data->mtx, &mtxTranslate, &data->mtx);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);


    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }

    *pGfxPos = gfxPos;
}

Effect* Effect_TypeG_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 scaleX, f32 scaleY, f32 scaleZ, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeG_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeG_Data), &Effect_TypeG_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeG_Data*)effect->data;
    data->scale.x = scaleX;
    data->scale.y = scaleY;
    data->scale.z = scaleZ;
    data->dlist = static0_gfx1_Gfx;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeH_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeH_Data* data = (Effect_TypeH_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;
    Mtx mtxRotate;

    if (effect->unk5) {
        Effect_Free(effect);
        return;
    }

    guScale(&data->mtx[data->mtxIndex], effect->lifeTime * data->scale.x, effect->lifeTime * data->scale.y, effect->lifeTime * data->scale.z);
    guRotate(&mtxRotate, data->angle, 0.0f, 1.0f, 0.0f);
    guMtxCatL(&data->mtx[data->mtxIndex], &mtxRotate, &data->mtx[data->mtxIndex]);
    guTranslate(&mtxRotate, effect->pos.x, effect->pos.y + sinf(effect->lifeTime * PI_SHORT) * 30.0f * data->scale.y, effect->pos.z);
    guMtxCatL(&data->mtx[data->mtxIndex], &mtxRotate, &data->mtx[data->mtxIndex]);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx[data->mtxIndex]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);


    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        if (effect->lifeTime >= 1.0f) {
            effect->unk5 = TRUE;
        }
    }

    *pGfxPos = gfxPos;
    data->mtxIndex ^= 1;
}

Effect* Effect_TypeH_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 scaleX, f32 scaleY, f32 scaleZ, f32 angle, s32 duration, s32 spriteID) {
    Effect* effect;
    Effect_TypeH_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeH_Data), &Effect_TypeH_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeH_Data*)effect->data;
    data->scale.x = scaleX;
    data->scale.y = scaleY;
    data->scale.z = scaleZ;
    data->dlist = static0_gfx2_Gfx;
    data->angle = angle;
    data->mtxIndex = 0;

    effect->unk5 = FALSE;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->spriteID = spriteID;
    effect->duration = duration;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeI_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeI_Data* data = (Effect_TypeI_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;

    if (D_800F687C > 0) {
        if (effect->lifeTime == 0.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 30.0f, 10, 0);
        } else if (effect->lifeTime == 5.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 60.0f, 11, 0);
        } else if (effect->lifeTime == 10.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        } else if (effect->lifeTime == 15.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        } else if (effect->lifeTime == 20.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        } else if (effect->lifeTime == 25.0f) {
            Effect_TypeH_Init(*data->ptrPosX, *data->ptrPosY, *data->ptrPosZ, 0.0f, 0.0f, 0.0f, data->scale, data->scale, data->scale, 90.0f, 12, 0);
        }

        effect->lifeTime += 1.0f;
        if (effect->lifeTime >= 90.0f) {
            Effect_Free(effect);
        }
    }

    *pGfxPos = gfxPos;
}

Effect* Effect_TypeI_Init(f32* ptrPosX, f32* ptrPosY, f32* ptrPosZ, f32 scale) {
    Effect* effect;
    Effect_TypeI_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeI_Data), &Effect_TypeI_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeI_Data*)effect->data;
    data->ptrPosX = ptrPosX;
    data->ptrPosY = ptrPosY;
    data->ptrPosZ = ptrPosZ;
    data->scale = scale;

    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeJ_Update(Effect* effect, Gfx** pGfxPos) {
    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            effect->lifeTime = 1.0f;
            Effect_Free(effect);
        }
    }

    func_8007B518((effect->lifeTime * 0.5 * 320.0 + 0.5) / 240.0);
}

Effect* Effect_TypeJ_Init(f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeJ_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->lifeTime = 0.0f;
    effect->duration = duration;
    return effect;
}

void Effect_TypeK_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;

    func_8007B4CC(-parts->pos.x, parts->pos.y, 0.0f, -parts->pos.x, parts->pos.y, 0.0f);
    func_8006122C(parts->pos.x, parts->pos.y);

    setPrimColor(0, 0, 0, 255);
    printUISprite(-160.0f, -120.0f, 0.0f, 0.0f, 1, 640.0f, 120.0f, 0.0f, SPRITE_BLANK);
    setPrimColor(0, 0, 0, 255);
    printUISprite(-160.0f, 240.0f, 0.0f, 0.0f, 1, 640.0f, 120.0f, 0.0f, SPRITE_BLANK);
    setPrimColor(0, 0, 0, 255);
    printUISprite(-160.0f, 0.0f, 0.0f, 0.0f, 1, 160.0f, 240.0f, 0.0f, SPRITE_BLANK);
    setPrimColor(0, 0, 0, 255);
    printUISprite(320.0f, 0.0f, 0.0f, 0.0f, 1, 160.0f, 240.0f, 0.0f, SPRITE_BLANK);

    func_80061240();

    effect->lifeTime += 1.0f / effect->duration;
    parts->lifeTime += 15.0f / effect->duration;
    if (parts->lifeTime >= 1.0f) {
        parts->lifeTime = 1;
    } else {
        parts->pos.x += parts->vel.x;
        parts->pos.y += parts->vel.y;
    }

    if (effect->lifeTime >= 1.0f) {
        Effect_TypeJ_Init(10.0f);
        Effect_Free(effect);
    }
}

Effect* Effect_TypeK_Init(f32 duration, f32 arg1, f32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(1, 0, &Effect_TypeK_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->lifeTime = 0.0f;
    effect->duration = duration;

    effect->parts->lifeTime = 0.0f;
    effect->parts->pos.x = 0.0f;
    effect->parts->pos.y = 0.0f;
    effect->parts->vel.x = 15.0f * arg1 / duration;
    effect->parts->vel.y = 15.0f * arg2 / duration;
    return effect;
}

void Effect_TypeL_Update(Effect* effect, Gfx** pGfxPos) {
    EffectPart* parts = effect->parts;

    func_8007B4CC(-parts->pos.x, parts->pos.y, 0.0f, -parts->pos.x, parts->pos.y, 0.0f);
    func_800610B8();
    func_8006122C(parts->pos.x, parts->pos.y);

    setPrimColor(0, 0, 0, 255);
    printUISprite(-320.0f, 0.0f, 0.0f, 0.0f, 1, 322.0f, 480.0f, 0.0f, SPRITE_BLANK);
    setPrimColor(0, 0, 0, 255);
    printUISprite(0.0f, 240.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);

    func_80061240();

    effect->lifeTime += 1.0f / effect->duration;
    parts->pos.x += parts->vel.x * 2;
    parts->pos.y += parts->vel.y * 2;

    if (effect->lifeTime >= 1.0f) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeL_Init(f32 duration, f32 arg1, f32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(1, 0, &Effect_TypeL_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->lifeTime = 0.0f;
    effect->duration = duration;

    effect->parts->lifeTime = 0.0f;
    effect->parts->pos.x = 0.0f;
    effect->parts->pos.y = 0.0f;
    effect->parts->vel.x = arg1 / duration;
    effect->parts->vel.y = arg2 / duration;
    return effect;
}

void Effect_TypeM_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeM_Data* data = (Effect_TypeM_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;

    if (D_800F687C > 0) {
        if (*data->finish) {
            Effect_Free(effect);
            return;
        }
    }

    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);

    *pGfxPos = gfxPos;
}

Effect* Effect_TypeM_Init(f32 posX, f32 posY, f32 posZ, s32* finishPtr, Gfx* dlist) {
    Effect_TypeM_Data* data;
    Effect* effect;

    effect = Effect_Alloc(0, sizeof(Effect_TypeM_Data), &Effect_TypeM_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeM_Data*)effect->data;
    guTranslate(&data->mtx, posX, posY, posZ);
    data->dlist = dlist;
    data->finish = finishPtr;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;

    return effect;
}

Effect* Effect_TypeM_Init2(f32 posX, f32 posY, f32 posZ, f32 scaleX, f32 scaleY, f32 scaleZ, f32 rotX, f32 rotY, f32 rotZ, s32* finishPtr, Gfx* dlist) {
    Effect_TypeM_Data* data;
    Effect* effect;
    Mtx mtx;

    effect = Effect_Alloc(0, sizeof(Effect_TypeM_Data), &Effect_TypeM_Update);
    if (effect == NULL) {
        return effect;
    }

    data = (Effect_TypeM_Data*)effect->data;
    guMtxIdent(&data->mtx);

    guScale(&mtx, scaleX, scaleY, scaleZ);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guRotate(&mtx, rotY, 0.0f, 1.0f, 0.0f);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guRotate(&mtx, rotX, 1.0f, 0.0f, 0.0f);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guRotate(&mtx, rotZ, 0.0f, 0.0f, 1.0f);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    guTranslate(&mtx, posX, posY, posZ);
    guMtxCatL(&data->mtx, &mtx, &data->mtx);

    data->dlist = dlist;
    data->finish = finishPtr;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;

    return effect;
}

//https://decomp.me/scratch/xl76w
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800664E8.s")

//https://decomp.me/scratch/Jy8t4
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800665F0.s")

void func_800667A8(void) {
    D_800FE19C = 0;
}

void func_800667B4(Effect* arg0) {
    arg0->vel.x = 1.0f;
}

void func_800667C4(Effect*arg0, s32 arg1) {
    arg0->unk5 = (s8) arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800667CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800674B8.s")

void Effect_TypeO_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = 255.0f - effect->lifeTime * 254.0f;
    effect->vel.x += 1.0f / effect->vel.y;
    if (effect->vel.x >= 1.0f) {
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeO_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeO_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeP_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = effect->lifeTime * 254.0f + 1;
    effect->vel.x += 1.0f / effect->vel.y;
    if (effect->vel.x >= 1.0f) {
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeP_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeP_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeQ_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = 255.0f - effect->lifeTime * 254.0f;

    if (D_800F687C > 0) {
        effect->vel.x += 1.0f / effect->vel.y;
    }
    if (effect->vel.x >= 1.0f) {
        func_800610B8();
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 32.0f, 0.0f, 0.0f, 1, 320.0f, 176.0f, 0.0f, SPRITE_BLANK);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeQ_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeQ_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeR_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = effect->lifeTime * 254.0f;

    if (D_800F687C > 0) {
        effect->vel.x += 1.0f / effect->vel.y;
    }
    if (effect->vel.x >= 1.0f) {
        func_800610B8();
        setPrimColor(effect->pos.x, effect->pos.y, effect->pos.z, alpha);
        printUISprite(0.0f, 32.0f, 0.0f, 0.0f, 1, 320.0f, 176.0f, 0.0f, SPRITE_BLANK);

        effect->lifeTime += 1.0f / effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

Effect* Effect_TypeR_Init(u8 colorR, u8 colorG, u8 colorB, s32 delay, s32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeR_Update);
    if (effect == NULL) {
        return effect;
    }

    effect->pos.x = colorR;
    effect->pos.y = colorG;
    effect->pos.z = colorB;
    effect->duration = duration;
    effect->vel.y = delay;
    effect->vel.x = 0.0f;
    effect->lifeTime = 0.0f;

    return effect;
}

void Effect_TypeS_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha = effect->lifeTime * 255.0f;

    if (D_800F687C > 0) {
        effect->vel.x += 1.0f / effect->vel.y;
    }
    if (effect->vel.x >= 1.0f) {
        setPrimColor(effect->lifeTime * 255.0f, 255, 0, 255); // green to yellow
        //this if statement actually moves the x, not the y.
        //this could be used for the other freecam frame but func_80084884 does the y work
        //so this is kinda irrelevant
        //also this function/effect never gets called so consider this unused
        if (D_80176B78->unk0 == 1) {
            printUISprite(32.0f, 200.0f, 0.0f, 0.0f, 1, 24.0f, 16.0f, 1, SPRITE_CAMERA); //frame 1
        } else {
            printUISprite(32.0f, 200.0f, 0.0f, 0.0f, 1, 24.0f, 16.0f, 0.0f, SPRITE_CAMERA); //frame 0
        }

        if (D_800F687C > 0) {
            effect->lifeTime += 1.0f / effect->duration;
            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 1.0f;
            }
            if (effect->lifeTime < 0.0f) {
                effect->lifeTime = 0.0f;
            }
        }
    }
}

Effect* Effect_TypeS_Init(f32 delay, f32 duration) {
    if (D_800FE1A0 == NULL) {
        D_800FE1A0 = Effect_Alloc(0, 0, &Effect_TypeS_Update);
        if (D_800FE1A0 == NULL) {
            return D_800FE1A0;
        }
        D_800FE1A0->lifeTime = 0.0f;
    }

    D_800FE1A0->duration = duration;
    D_800FE1A0->vel.y = delay;
    D_800FE1A0->vel.x = 0.0f;

    return D_800FE1A0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068BFC.s")

//manage rabbit functionality
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80068DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80069734.s")

void Effect_TypeT_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeT_Data* data = effect->data;

    if (func_800836FC(data->unk0, data->unk4, data->unk8, data->unkC) == 1) {
        Effect_Free(effect);
    }
}

Effect* Effect_TypeT_Init(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
    Effect* effect;
    Effect_TypeT_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeT_Data), &Effect_TypeT_Update);
    if (effect == NULL) {
        return effect;
    }

    data = effect->data;
    data->unk0 = arg0;
    data->unk4 = arg1;
    data->unk8 = arg2;
    data->unkC = arg3;

    return effect;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80069918.s")

void Effect_TypeU_Update(Effect* effect, Gfx** pGfxPos) {

    func_800610B8();
    switch(effect->spriteID) {
        case 0:
            setPrimColor(255, 255, 150, 80.0f * sinf(effect->lifeTime * PI_SHORT));
            break;
        case 1:
            setPrimColor(150, 255, 255, 80.0f * sinf(effect->lifeTime * PI_SHORT));
            break;
        case 2:
            setPrimColor(255, 200, 255, 80.0f * sinf(effect->lifeTime * PI_SHORT));
            break;
        case 3:
            setPrimColor(255, 220, 200, 80.0f * sinf(effect->lifeTime * PI_SHORT));
            break;
        case 4:
            setPrimColor(200, 255, 220, 80.0f * sinf(effect->lifeTime * PI_SHORT));
            break;
        case 5:
            setPrimColor(200, 255, 255, 140);
            break;
        case 6:
            setPrimColor(200, 200, 255, 140);
            break;
        case 7:
            setPrimColor(255, 200, 255, 140);
            break;
        case 8:
            setPrimColor(255, 255, 200, 140);
            break;
        default:
            setPrimColor(200, 255, 200, 140);
            break;
    }

    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, effect->sizeX, effect->sizeY, effect->lifeTime, SPRITE_HEXAGON);
    effect->pos.x += effect->vel.x;
    effect->pos.y += effect->vel.y;
    effect->pos.z += effect->vel.z;
    effect->lifeTime += 1.0f / effect->duration;
    if (effect->lifeTime >= 1) {
        Effect_Free(effect);
    }
}

void Effect_TypeU_Init(f32 posX, f32 posY, f32 posZ, f32 targetX, f32 targetY, f32 targetZ, f32 duration, s32 colorMode, f32 sizeX, f32 sizeY) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeU_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = (targetX - posX) / duration;
    effect->vel.y = (targetY - posY) / duration;
    effect->vel.z = (targetZ - posZ) / duration;
    effect->spriteID = colorMode;
    effect->sizeX = sizeX;
    effect->sizeY = sizeY;
    effect->duration = duration;
    effect->lifeTime = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_ResetScore.s")

void Bowling_CountPins(s32* pinsRemaining) {
    s32 i;
    s32 pinCount;

    for (i = 0, pinCount = 0; i < ARRAY_COUNT(gActors); i++){
        if (gActors[i].actorID == BOWLING_PINS) {
            pinCount++;
        }
    }
    *pinsRemaining = 10 - pinCount;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_UpdateScore.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printBowlingScore.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Bowling_DrawScoreCard.s")

void aa1_Bowling(f32 arg0, s32 arg1, s32 arg2) {
    Effect* temp_v0 = Effect_Alloc(0, 8, Bowling_DrawScoreCard);
    UnkBowlingStruct* temp_v1;
    if (temp_v0 != 0) {
        temp_v1 = temp_v0->data;
        temp_v0->lifeTime = 0.0f;
        temp_v0->duration = arg0;
        temp_v1->unk_00 = arg1;
        temp_v1->unk_04 = arg2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/ResetEyeParams.s")

void LockEyeChange(void) {
    gDontChangeEyes = 1;
}

void UnlockEyeChange(void) {
    gDontChangeEyes = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BA30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BD58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006BE4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C0D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006C368.s")

void Effect_TypeV_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 size, s32 duration, u8 isMain, u8 opacity);

void Effect_TypeV_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    Effect_TypeV_Data* data = (Effect_TypeV_Data*)effect->data;
    f32 dirX = sinf(effect->lifeTime * 720.0f * (3.1415926535892 / 180)) * 1000.0f;
    f32 dirZ = cosf(effect->lifeTime * 720.0f * (3.1415926535892 / 180)) * 1000.0f;
    f32 spawnX, spawnY, spawnZ;
    f32 alpha;

    if (effect->numParts == 0) {
        alpha = 255.0f;
    } else {
        alpha = effect->numParts * (1 - effect->lifeTime);
    }

    if (D_800F687C > 0) {
        data->color.r = RANDOM(100, 255);
        data->color.g = RANDOM(100, 255);
        data->color.b = RANDOM(100, 255);
    }
    setPrimColor(data->color.r, data->color.g, data->color.b, alpha);
    guAlign(&mtx, 0.0f, dirX, 100000000.0f, dirZ);
    func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, effect->sizeX, effect->sizeX, 0.0f, SPRITE_TWINKLE);

    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;

        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;

        spawnX = effect->pos.x + RANDOM(-20, 20);
        spawnY = effect->pos.y + RANDOM(-20, 20);
        spawnZ = effect->pos.z + RANDOM(-20, 20);
        if (effect->unk5 == TRUE && (gTimer % 4) == 0) {
            Effect_TypeV_Init(spawnX, spawnY, spawnZ, 0.0f, 0.0f, 0.0f, 32.0f, 10, FALSE, 144);
        }

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeV_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 size, s32 duration, u8 isMain, u8 opacity) {
    Effect* effect;
    Effect_TypeV_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeV_Data), &Effect_TypeV_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeV_Data*)effect->data;
    data->color.r = data->color.g = data->color.b = data->color.a = 100;

    effect->sizeX = size;
    effect->numParts = opacity;
    effect->unk5 = isMain;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeW_Update(Effect* effect, Gfx** pGfxPos) {
    s32 i;

    if (D_800F687C > 0) {
        if (effect->unk5 == FALSE) {
            for (i = 0; i < effect->spriteID; i++) {
                f32 velX = RANDOM(-5, 5);
                f32 velY = RANDOM(-5, 5);
                f32 velZ = RANDOM(-5, 5);
                Effect_TypeV_Init(effect->pos.x, effect->pos.y, effect->pos.z, velX, velY, velZ, effect->sizeX, effect->sizeY, TRUE, 0);
            }
            effect->unk5 = TRUE;
        }

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            FreeSprite(SPRITE_TWINKLE);
            Effect_Free(effect);
        }
    }

}

void Effect_TypeW_Init(f32 posX, f32 posY, f32 posZ, f32 size, s32 duration, s32 arg5) {
    Effect* effect;
    Effect_TypeV_Data* data;

    effect = Effect_Alloc(0, 0, &Effect_TypeW_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = arg5;
    effect->unk5 = FALSE;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->sizeX = size;
    effect->sizeY = duration;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / (duration + 20);
    LoadSprite(SPRITE_TWINKLE);
}

void LoadPlayerEyes(s32 arg0) {
    s32 i;
    s32 var_s0 = (arg0 * 10) + 114;

    for (i = 0; i != 10; i++){
        gLockContextEyes = LoadSprite(var_s0);
        if ((gLockContextEyes) > 0) {
            break;
        }
        var_s0++;
    }
}

void FreePlayerEyes(s32 arg0) {
    s32 i;
    s32 var_s0 = (arg0 * 10) + 114;

    for (i = 0; i != 10; i++){
        FreeSprite(var_s0);
        var_s0 += 1;
    }
    gLockContextEyes = 255;
}

//these are just image addresses, the only reason they are typed u8 is so it goes byte by byte
void SetEyeTexture(u8* dest, u8* src, s32 size) {
    u8* destP;
    s32 i;

    if (!IS_SEGMENTED(dest)) {
        destP = dest;
    } else {
        destP = SEGMENTED_TO_VIRTUAL(dest);
    }

    for (i = 0; i < size; i++) {
        *destP++ = *src++;
    }
}


void SetPlayerEyes(s32 spriteIndex, s32 whichEye, s32 eyeIndex) {
    SpriteListing* sprite;
    chameleonEyeListEntry* eye;
    s32 size;
    enum eye {
        BOTH = 0,
        RIGHT,
        LEFT
    };
    switch (whichEye) {                                 /* irregular */
    case BOTH:
        sprite = &gSpriteListings[spriteIndex];
        eye = &chameleonEyeList[eyeIndex];
        size = sprite->width * sprite->height * sprite->tileCountX * sprite->tileCountY;
        SetEyeTexture(eye->eyeR, sprite->raster, size);
        SetEyeTexture(eye->eyeRPalette, sprite->palette, CI8_PAL_SIZE);
        size = sprite[5].height * sprite[5].tileCountX * sprite[5].tileCountY * sprite[5].width;
        SetEyeTexture(eye->eyeL, sprite[5].raster, size);
        SetEyeTexture(eye->eyeLPalette, sprite[5].palette, CI8_PAL_SIZE);
        break;
    case RIGHT:
        sprite = &gSpriteListings[spriteIndex];
        eye = &chameleonEyeList[eyeIndex];
        size = sprite->width * sprite->height * sprite->tileCountX * sprite->tileCountY;
        SetEyeTexture(eye->eyeR, sprite->raster, size);
        SetEyeTexture(eye->eyeRPalette, sprite->palette, CI8_PAL_SIZE);
        break;
    case LEFT:
        sprite = &gSpriteListings[spriteIndex];
        eye = &chameleonEyeList[eyeIndex];
        size = sprite[5].height * sprite[5].tileCountX * sprite[5].tileCountY * sprite[5].width;
        SetEyeTexture(eye->eyeL, sprite[5].raster, size);
        SetEyeTexture(eye->eyeLPalette, sprite[5].palette, CI8_PAL_SIZE);
        break;
    }
}


void Effect_PlayerEyes_Update(Effect* effect, Gfx** pGfxPos) {

    if (gDontChangeEyes == 1) {
        Effect_Free(effect);
        return;
    }

    if (D_800FE704[effect->unk8] == 1) {
        effect->pos.x = 2.0f;
        effect->lifeTime = 0.0f;
        effect->duration = D_800FE6F4[effect->unk8];
        D_800FE704[effect->unk8] = 0;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;

        switch ((s32)effect->pos.x) {
            case 0:
                if (effect->lifeTime > 0.0f && effect->lifeTime <= 0.5f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                } else if (effect->lifeTime > 0.5f && effect->lifeTime <= 0.7f) {
                    SetPlayerEyes(effect->spriteID + 1, effect->pos.y, effect->pos.z);
                } else if (effect->lifeTime > 0.7f && effect->lifeTime <= 0.8f) {
                    SetPlayerEyes(effect->spriteID + 2, effect->pos.y, effect->pos.z);
                } else if (effect->lifeTime > 0.8f && effect->lifeTime <= 1.0f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                }
                break;
            case 1:
                if (effect->lifeTime >= 1.0f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                } else {
                    SetPlayerEyes(effect->spriteID + 3, effect->pos.y, effect->pos.z);
                }
                break;
            case 2:
                if (effect->lifeTime >= 1.0f) {
                    SetPlayerEyes(effect->spriteID, effect->pos.y, effect->pos.z);
                } else {
                    SetPlayerEyes(effect->spriteID + 4, effect->pos.y, effect->pos.z);
                }
                break;
        }

        if (effect->lifeTime >= 1.0f) {
            if ((s32)effect->pos.y == 0) {
                D_800FE4E4[effect->unk8].unk_00 = 0;
                D_800FE4E4[effect->unk8].unk_01 = 0;
            } else if ((s32)effect->pos.y == 1) {
                D_800FE4E4[effect->unk8].unk_00 = 0;
            } else if ((s32)effect->pos.y == 2) {
                D_800FE4E4[effect->unk8].unk_01 = 0;
            }
            Effect_Free(effect);
        }
    }
}

u32 Effect_PlayerEyes_Init(s32 charID, s32 arg1, f32 duration, s32 arg3) {
    s32 arg0;
    Effect* effect;

    if (gDontChangeEyes == TRUE) {
        return FALSE;
    }
    if (gLockContextEyes) {
        return FALSE;
    }

    if (Battle_GameType == BATTLE_TYPE_NOTBATTLE) {
        arg0 = 0;
    } else {
        arg0 = charID;
    }

    if (arg3 == 0 && (D_800FE4E4[arg0].unk_00 == 1 || D_800FE4E4[charID].unk_01 == 1)) {
        if (arg1 == 2) {
            D_800FE6F4[arg0] = 1.0f / duration;
            D_800FE704[arg0] = 1;
        }
        return FALSE;
    }
    else if (arg3 == 1 && D_800FE4E4[arg0].unk_00 == 1) {
        if (arg1 == 2) {
            D_800FE6F4[arg0] = 1.0f / duration;
            D_800FE704[arg0] = 1;
        }
        return FALSE;
    }
    else if (arg3 == 2 && D_800FE4E4[arg0].unk_01 == 1) {
        if (arg1 == 2) {
            D_800FE6F4[arg0] = 1.0f / duration;
            D_800FE704[arg0] = 1;
        }
        return FALSE;
    }

    effect = Effect_Alloc(0, 0, &Effect_PlayerEyes_Update);
    if (effect == NULL && arg0 < 4) {
        return FALSE;
    }

    if (arg3 == 0) {
        D_800FE4E4[arg0].unk_00 = 1;
        D_800FE4E4[arg0].unk_01 = 1;
    } else if (arg3 == 1) {
        D_800FE4E4[arg0].unk_00 = 1;
    } else if (arg3 == 2) {
        D_800FE4E4[arg0].unk_01 = 1;
    }

    if (TRUE) { // TODO fake match ??
        effect->spriteID = 114 + charID * 10;
        effect->unk8 = arg0;
        effect->pos.x = arg1;
        effect->pos.y = arg3;
        effect->pos.z = charID;
        effect->lifeTime = 0.0f;
        effect->duration = 1.0f / duration;
    }
    return TRUE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/SetPlayerContextEyes.s")

void SetBossDeadEyes(s32);

void Effect_BossDeadEyes_Update(Effect* effect, Gfx** pGfxPos) {
    SetBossDeadEyes(effect->spriteID);
    switch(effect->spriteID) {
        case 75:
            FreeSprite(SPRITE_EYES_DEAD_LIZARD_KONG);
            break;
        case 7:
            FreeSprite(SPRITE_EYES_DEAD_QUINTELLA);
            break;
        case 30:
            FreeSprite(SPRITE_EYES_DEAD_ARMADILLO);
            break;
    }
    Effect_Free(effect);
}

void Effect_BossDeadEyes_Init(s32 arg0) {
    Effect* effect;
    s32 ret;

    switch(arg0) {
        case 75:
            ret = LoadSprite(SPRITE_EYES_DEAD_LIZARD_KONG);
            break;
        case 7:
            ret = LoadSprite(SPRITE_EYES_DEAD_QUINTELLA);
            break;
        case 30:
            ret = LoadSprite(SPRITE_EYES_DEAD_ARMADILLO);
            break;
        default:
            return;
    }
    if (ret == 0) {
        effect = Effect_Alloc(0, 0, &Effect_BossDeadEyes_Update);
        if (effect == NULL) {
            return;
        }

        effect->spriteID = arg0;
    }
}

void SetBossDeadEyes(s32 arg0) {
    s32 sp20 = 1;
    SpriteListing* sprite;
    s32 rasterSize;
    s32 eyesIndex;
    s32 spriteIndex;

    switch(arg0) {
        case 75:
            spriteIndex = SPRITE_EYES_DEAD_LIZARD_KONG;
            sp20 = 2;
            eyesIndex = 0;
            break;
        case 7:
            //same line required
            spriteIndex = SPRITE_EYES_DEAD_QUINTELLA;\
            eyesIndex = 1;
            break;
        case 30:
            //same line required
            spriteIndex = SPRITE_EYES_DEAD_ARMADILLO;\
            eyesIndex = 2;
            break;
    }

    sprite = &gSpriteListings[spriteIndex];
    rasterSize = sprite->width * sprite->height * sprite->tileCountX * sprite->tileCountY / sp20;
    SetEyeTexture(BossDeadEyes[eyesIndex].unk_00, sprite->raster, rasterSize);
    SetEyeTexture(BossDeadEyes[eyesIndex].unk_04, sprite->palette, CI8_PAL_SIZE);
}

void Effect_TypeX_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeX_Data* data = (Effect_TypeX_Data*)effect->data;
    f32 f2;
    f32 sp34;
    f32 sinAngle;
    f32 q;
    f32 unused2[2];
    u8 temp;

    sp34 = cosf(effect->lifeTime * PI_HALF);
    sinAngle = sinf(effect->lifeTime * PI_HALF);
    q = 128.0f * sinAngle;

    if (D_800F687C > 0) {
        data->unk_00.x = effect->pos.x + effect->vel.x * sinAngle;
        data->unk_00.y = effect->pos.y + effect->vel.y * sinAngle;
        data->unk_00.z = effect->pos.z + effect->vel.z * sinAngle;

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    f2 = ABS2(effect->lifeTime - 0.5f);
    temp = f2 * 255.0f;
    setPrimColor(255.0f * sp34, 255.0f * sp34, 255.0f * sp34, 255 - temp);
    func_8005747C(data->unk_00.x, data->unk_00.y, data->unk_00.z, q, q, 0.0f, SPRITE_PUFF);
}

void Effect_TypeX_Init(f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 duration) {
    Effect* effect;
    Effect_TypeX_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeX_Data), &Effect_TypeX_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeX_Data*)effect->data;
    data->unk_00.x = posX;
    data->unk_00.y = posY;
    data->unk_00.z = posZ;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.y = velY;
    effect->vel.z = velZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeX_Create(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    f32 unused;
    f32 angle;
    s32 i;

    for (angle = 0.0f, i = 0; i < arg4; angle += 360.0f / arg4, i++) {
        f32 x1 = sinf(angle * 0.01745329251994) * arg3;
        f32 z1 = cosf(angle * 0.01745329251994) * arg3;
        Effect_TypeX_Init(arg0, arg1, arg2, x1, -20.0f, z1, RANDOM(10, 15));
    }
}

void Effect_TypeY_Update(Effect* effect, Gfx** pGfxPos) {
    f32 nv;
    f32 scaleY = effect->vel.y;

    if (D_800F687C > 0 && (gTimer % 5) == 0) {
        f32 f2 = ABS2(effect->lifeTime - 0.5f);
        nv = f2 * scaleY + effect->vel.y;
        Effect_TypeH_Init(effect->pos.x, effect->pos.y, effect->pos.z, 0.0f, 0.0f, 0.0f, effect->vel.x, nv, effect->vel.z, 90.0f, 12, 0);
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
        effect->lifeTime += effect->duration;
    }
}

void Effect_TypeY_Init(f32 posX, f32 posY, f32 posZ, f32 scaleX, f32 scaleY, f32 scaleZ, f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeY_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = scaleX;
    effect->vel.y = scaleY;
    effect->vel.z = scaleZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeZ_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    Effect_TypeZ_Data* data = (Effect_TypeZ_Data*)effect->data;
    f32 sp40 = 255.0f;
    f32 f0;

    f0 = sinf(effect->lifeTime * PI_HALF);

    if (D_800F687C > 0) {
        data->angle += 30;
        data->pos.x = effect->pos.x + effect->vel.x * effect->lifeTime;
        data->pos.y = effect->pos.y + effect->vel.y * f0;
        data->pos.z = effect->pos.z + effect->vel.z * effect->lifeTime;

        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 0.65f) {
            sp40 = (gTimer % 2) * 255;
        }

        if (data->angle >= 360) {
            data->angle -= 360;
        }

        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    setPrimColor(data->color.r, data->color.g, data->color.b, sp40);
    guRotate(&mtx, data->angle, 1.0f, 1.0f, 1.0f);
    func_80058BE4(&mtx, data->pos.x, data->pos.y, data->pos.z, data->scale, data->scale, 0.0f, SPRITE_BLANK);
}

void Effect_TypeZ_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 duration, s32 arg8, u8 arg9, u8 argA, u8 argB) {
    Effect* effect;
    Effect_TypeZ_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeZ_Data), &Effect_TypeZ_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeZ_Data*)effect->data;
    data->pos.x = posX;
    data->pos.y = posY;
    data->pos.z = posZ;
    data->angle = 0;
    data->scale = arg6;
    data->color.r = arg9;
    data->color.g = argA;
    data->color.b = argB;

    effect->spriteID = arg8;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg3;
    effect->vel.y = arg4;
    effect->vel.z = arg5;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeZ_Create(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, s32 arg5) {
    f32 angle;
    s32 i;
    f32 delta;
    f32 x1, y1, z1;
    u8 r,g,b;

    if (Battle_GameType != BATTLE_TYPE_NOTBATTLE || gCurrentStage == STAGE_TRAINING) {
        return;
    }

    delta = 360.0f / arg5;
    for (angle = 0.0f, i = 0; i < arg5; angle += delta, i++) {
        switch(i % 4) {
            case 0:
                r = 255;
                g = 20;
                b = 20;
                break;
            case 1:
                r = 20;
                g = 128;
                b = 255;
                break;
            case 2:
                r = 0;
                g = 255;
                b = 100;
                break;
            case 3:
                r = 255;
                g = 255;
                b = 255;
                break;
        }

        x1 = sinf(angle * 0.01745329251994) * arg3;
        y1 = RANDOM(100, 250);
        z1 = cosf(angle * 0.01745329251994) * arg3;
        Effect_TypeZ_Init(posX, posY, posZ, x1, y1, z1, 16.0f, arg4, 0, r, g, b);
    }
}

#ifdef NON_MATCHING
void Effect_TypeAA_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAA_Data* data = (Effect_TypeAA_Data*)effect->data;
    f32 x, y, z, t; // sp84, sp80, sp7C
    f32 sp74;
    f32 angleX, angleY, angleZ; // sp70, sp6C, sp68
    s32 i;

    if (effect->unk5 == 0) {
        if (effect->numParts == 0) {
            effect->numParts = 1;

            angleX = effect->vel.x * 0.01745329251994;
            angleY = effect->vel.y * 0.01745329251994;
            angleZ = effect->vel.z * 0.01745329251994;

            x = 0.0f;
            y = cosf(angleX) * effect->sizeX;
            z = sinf(angleX) * -effect->sizeX;

            t = -sinf(angleY) * z;
            z = cosf(angleY) * z;

            x = cosf(angleZ) * t - sinf(angleZ) * y;
            y = sinf(angleZ) * t + cosf(angleZ) * y;

            data[effect->unk8].pos.x = effect->pos.x + x;
            data[effect->unk8].pos.y = effect->pos.y + y;
            data[effect->unk8].pos.z = effect->pos.z + z;

            data[effect->unk8].color.r = RANDOM(100, 255);
            data[effect->unk8].color.g = RANDOM(100, 255);
            data[effect->unk8].color.b = RANDOM(100, 255);
            data[effect->unk8].color.a = 0;

            sp74 = effect->sizeY / 2;

            effect->vel.x += RANDOM(-sp74, sp74);
            effect->vel.y += RANDOM(-sp74, sp74);
            effect->vel.z += RANDOM(-sp74, sp74);

            WrapDegrees(&effect->vel.x);
            WrapDegrees(&effect->vel.y);
            WrapDegrees(&effect->vel.z);

            effect->unk8++;
            if (effect->unk8 == effect->spriteID) {
                effect->unk5 = 1;
            }
        }

        if (effect->lifeTime >= 1.0f) {
            effect->numParts = 0;
            effect->lifeTime = 0.0f;
        }
        effect->lifeTime += effect->duration;
    }

    if (effect->unk8 > 0) {
        for (i = 0; i < effect->unk8 - 1; i++) {
            if (data[i].color.a <= 0x60) {
                data[i].color.a += 8;
            }
            setPrimColor(data[i].color.r, data[i].color.g, data[i].color.b, data[i].color.a);
            func_80058748(effect->pos.x, effect->pos.y, effect->pos.z,
                          effect->pos.x, effect->pos.y, effect->pos.z,
                          data[i].pos.x, data[i].pos.y, data[i].pos.z,
                          data[i+1].pos.x, data[i+1].pos.y, data[i+1].pos.z,
                          1.0f, 1.0f, 0.0f, SPRITE_BLANK);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_TypeAA_Update.s")
void Effect_TypeAA_Update(Effect* effect, Gfx** pGfxPos);
#endif

void Effect_TypeAA_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 duration, s32 arg9) {
    Effect* effect;
    Effect_TypeAA_Data* data;
    s32 i;

    effect = Effect_Alloc(0, arg9 * sizeof(Effect_TypeAA_Data), &Effect_TypeAA_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAA_Data*)effect->data;
    for (i = 0; i < arg9; i++) {
        data[i].pos.x = data[i].pos.y = data[i].pos.z = 0.0f;
    }

    effect->spriteID = arg9;
    effect->unk8 = 0;
    effect->unk5 = 0;
    effect->numParts = 0;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg4;
    effect->vel.y = arg5;
    effect->vel.z = arg6;
    effect->sizeX = arg3;
    effect->sizeY = arg7;
    effect->lifeTime = 1.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeAB_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAB_Data* data = (Effect_TypeAB_Data*)effect->data;
    f32 x, y, z;
    f32 size;
    u8 alpha;

    size = sinf(effect->lifeTime * PI_HALF);
    if (effect->lifeTime < 0.6f) {
        alpha = 255;
    } else {
        alpha = (1.0 - (effect->lifeTime - 0.6) / 0.4f) * 255.0;
    }

    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        x = effect->pos.x + effect->vel.x * size;
        y = effect->pos.y + effect->vel.y * size;
        z = effect->pos.z + effect->vel.z * size;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    setPrimColor(data->color.r, data->color.g, data->color.b, alpha);
    func_8005747C(x, y, z, data->size, data->size, 0.0f, effect->spriteID);
}

void Effect_TypeAB_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 duration, u8 arg8, u8 arg9, u8 argA, f32 argB) {
    Effect* effect;
    Effect_TypeAB_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAB_Data), &Effect_TypeAB_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAB_Data*)effect->data;
    data->size = arg6;
    data->color.r = arg8;
    data->color.g = arg9;
    data->color.b = argA;

    effect->spriteID = argB;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg3;
    effect->vel.y = arg4;
    effect->vel.z = arg5;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeAB_TypeAC_Create(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, s32 arg5) {
    s32 i;
    u8 colorR, colorG, colorB;
    f32 unk0, unk1, unk2;
    f32 size;

    for (i = 0; i < arg5; i++) {
        switch (Rand() % 5) {
            case 0:
                colorR = 238;
                colorG = 51;
                colorB = 71;
                break;
            case 1:
                colorR = 32;
                colorG = 212;
                colorB = 52;
                break;
            case 2:
                colorR = 96;
                colorG = 153;
                colorB = 255;
                break;
            case 3:
                colorR = 255;
                colorG = 255;
                colorB = 0;
                break;
            case 4:
                colorR = 255;
                colorG = 255;
                colorB = 255;
                break;
        }
        size = arg3 * 0.5f;
        unk0 = RANDOM(-size, size);
        unk1 = RANDOM(-size, size);
        unk2 = RANDOM(-size, size);
        Effect_TypeAB_Init(posX, posY, posZ,
                           unk0, unk1, unk2,
                           32.0f, arg4 + 4.0f,
                           colorR, colorG, colorB, 75);
    }
    Effect_TypeAC_Init(posX, posY, posZ, arg3, arg4);
}

void Effect_TypeAC_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAC_Data* data = (Effect_TypeAC_Data*)effect->data;
    f32 size;

    size = effect->lifeTime * effect->vel.x;

    if (D_80174980 == 3 && gCurrentStage == STAGE_GHOSTBOSS && D_800FFEBC == 0) {
        Effect_Free(effect);
        return;
    }

    if (D_800F687C > 0) {
        if (effect->lifeTime < 0.5f) {
            data->color.a = 255;
        } else {
            data->color.a = (1.0f - (effect->lifeTime - 0.5f) / 0.5f) * 255.0f;
        }

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    setPrimColor(data->color.r, data->color.g, data->color.b, data->color.a);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, size, size, 0.0f, SPRITE_EXPLODE);
}

void Effect_TypeAC_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 duration) {
    Effect* effect;
    Effect_TypeAC_Data* data;
    s32 type = Rand() % 5;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAC_Data), &Effect_TypeAC_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAC_Data*)effect->data;
    data->color.a = 255;
    switch (type) {
        case 0:
            data->color.r = 238;
            data->color.g = 51;
            data->color.b = 71;
            break;
        case 1:
            data->color.r = 32;
            data->color.g = 212;
            data->color.b = 52;
            break;
        case 2:
            data->color.r = 96;
            data->color.g = 153;
            data->color.b = 255;
            break;
        case 3:
            data->color.r = 255;
            data->color.g = 255;
            data->color.b = 0;
            break;
        case 4:
            data->color.r = 255;
            data->color.g = 255;
            data->color.b = 255;
            break;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg3;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F43C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8006F8D8.s")

void Effect_TypeAD_Update(Effect* effect, Gfx** pGfxPos) {
    f32 sp54 = Rand() % 360;
    f32 sp50;

    if (D_800F687C > 0) {
        effect->lifeTime += 1.0f;
        if (effect->lifeTime >= 30.0f) {
            Effect_Free(effect);
        }
    }

    // BUG effect used after freeing

    if (effect->lifeTime > effect->duration) {
        sp50 = sinf(sp54 * 0.01745329251994);
        effect->pos.x = effect->vel.x + RANDOM(effect->vel.y - 100.0f, effect->vel.y) * sp50;
        sp50 = cosf(sp54 * 0.01745329251994);
        effect->pos.z = effect->vel.z + RANDOM(effect->vel.y - 100.0f, effect->vel.y) * sp50;
        effect->duration = effect->lifeTime + RANDOM(1, 3);
        Effect_TypeBF_Init(effect->pos.x, effect->pos.y + 100.0f, effect->pos.z, 1.0f, sp54, RANDOM(5, 30), 400.0f, RANDOM(12, 24), 214, 181, 143);
    }
}

void Effect_TypeAD_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5) {
    Effect* effect;

    effect = Effect_Alloc(1, 0, &Effect_TypeAD_Update);
    if (effect == NULL) {
        return;
    }

    arg3 -= 90.0f;
    effect->pos.x = 0.0f;
    effect->pos.y = posY;
    effect->pos.z = 0.0f;
    effect->vel.x = posX + sinf(arg3 * 0.01745329251994) * arg4;
    effect->vel.y = arg5 * 0.7f;
    effect->vel.z = posZ + cosf(arg3 * 0.01745329251994) * arg4;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f;
}

void func_8006FD14(f32 posX, f32 posY, f32 posZ) {
    f32 angle = Rand() % 360;

    Effect_TypeBF_Init(posX, posY, posZ, 0.8f, angle,          8.0f, 200.0f, 20.0f, 255, 255, 255);
    Effect_TypeBF_Init(posX, posY, posZ, 0.8f, angle + 120.0f, 8.0f, 200.0f, 20.0f, 255, 255, 255);
    Effect_TypeBF_Init(posX, posY, posZ, 0.8f, angle - 120.0f, 8.0f, 200.0f, 20.0f, 255, 255, 255);
}

void Effect_TypeAE_Update(Effect* effect, Gfx** pGfxPos) {
    f32 sp34 = 1.0f - effect->lifeTime;
    f32 sp30 = effect->sizeX * sp34;

    setPrimColor(255, 255, sp34 * 255.0f, 255);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, sp30, sp30, 0.0f, SPRITE_PUFF2);
    if (D_800F687C > 0) {
        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y * sp34;
        effect->pos.z += effect->vel.z;

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeAE_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 duration, f32 arg6) {
    Effect* effect;
    f32 sinAngle, cosAngle;

    effect = Effect_Alloc(0, 0, &Effect_TypeAE_Update);
    if (effect == NULL) {
        return;
    }

    arg3 += 90.0f;
    sinAngle = sinf(arg3 * 0.01745329251994);
    cosAngle = cosf(arg3 * 0.01745329251994);

    effect->sizeX = arg6;
    effect->pos.x = posX + sinAngle * -80.0f;
    effect->pos.y = posY + 100.0f;
    effect->pos.z = posZ + cosAngle * -80.0f;
    effect->vel.x = -sinAngle * arg4 * 0.8f;
    effect->vel.y = 10.0f;
    effect->vel.z = -cosAngle * arg4 * 0.8f;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeAF_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    Effect_TypeAF_Data* data = (Effect_TypeAF_Data*)effect->data;
    f32 f28 = data->unk_24 - sinf(data->unk_20 * 0.01745329251994) * data->unk_24 / 4;
    s32 i;
    f32 angle;
    f32 temp;

    if (D_800F687C > 0) {
        angle = data->unk_1C;
        effect->vel.z += 20.0f;
        data->unk_14 = sinf((temp = effect->vel.z) * 0.01745329251994) * 100.0f; // TODO fake match
        data->unk_18 = cosf(effect->vel.z * 0.01745329251994) * 100.0f;

        if (gPlayerActors[0].canJump == 0) {
            for (i = 0; i < data->unk_28; i++) {
                data->unk_0C = sinf(angle * 0.01745329251994) * effect->vel.x;
                data->unk_10 = cosf(angle * 0.01745329251994) * effect->vel.x;
                data->unk_20 += 5.0f;
                angle += 360.0f / data->unk_28;

                setPrimColor(255, 255, 0, 255);
                guAlign(&mtx, 0.0f, data->unk_14, -100000000.0f, data->unk_18);
                func_80058BE4(&mtx, *data->pPosX + data->unk_0C + 30.0f, *data->pPosY + 120.0f, *data->pPosZ + data->unk_10, f28, f28, 0.0f, effect->spriteID);
            }
        }

        data->unk_1C += effect->vel.y;
        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeAF_Init(f32* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 duration, s32 arg8) {
    Effect* effect;
    Effect_TypeAF_Data* data;

    if (D_800FE6F0 == 1) {
        return;
    }
    D_800FE6F0 = 1;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAF_Data), &Effect_TypeAF_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAF_Data*)effect->data;
    data->pPosX = arg0;
    data->pPosY = arg1;
    data->pPosZ = arg2;
    data->unk_0C = 0.0f;
    data->unk_10 = 0.0f;
    data->unk_14 = 0.0f;
    data->unk_18 = 0.0f;
    data->unk_1C = 0.0f;
    data->unk_20 = 0.0f;
    data->unk_24 = arg4;
    data->unk_28 = arg6;

    effect->spriteID = arg8;
    effect->vel.x = arg3;
    effect->vel.y = arg5;
    effect->vel.z = 0.0f;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeAG_Update(Effect* effect, Gfx** pGfxPos) {
    switch ((s32)effect->pos.z) {
        case 0:
            effect->lifeTime += effect->pos.x;
            func_80088474(effect->spriteID, effect->lifeTime * effect->duration);
            break;
        case 1:
            effect->lifeTime += effect->pos.y;
            func_80088474(effect->spriteID, (1.0f - effect->lifeTime) * effect->duration);
            break;
        case 2:
            StopSoundEffect(effect->spriteID);
            Effect_Free(effect);
            break;
    }

    if (effect->lifeTime >= 1.0f) {
        effect->lifeTime = 0.0f;
        effect->pos.z += 1;
    }
}

void Effect_TypeAG_Init(f32 arg0, f32 arg1, s32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAG_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = PLAY_SFX(SFX_3F_unkSnd, 0, 0x10);
    func_800882D0(effect->spriteID, 11);
    func_80088474(effect->spriteID, 0);
    effect->pos.x = 1.0f / arg0;
    effect->pos.y = 1.0f / arg1;
    effect->pos.z = 0;
    effect->lifeTime = 0.0f;
    effect->duration = arg2;
}

void Effect_TypeAH_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAH_Data* data = (Effect_TypeAH_Data*)effect->data;
    Gfx* gfxPos = *pGfxPos;
    Mtx mtx;
    u8 frameIndex;
    s32 sp48;
    s32 sp44;
    Mtx* sp40;
    Mtx* mtxPos;


    guMtxIdent(&data->mtx[data->unk_A9C]);
    guScale(&mtx, 1.4f, 1.4f, 1.4f);
    guMtxCatL(&data->mtx[data->unk_A9C], &mtx, &data->mtx[data->unk_A9C]);
    guRotate(&mtx, data->yaw, 0.0f, 1.0f, 0.0f);
    guMtxCatL(&data->mtx[data->unk_A9C], &mtx, &data->mtx[data->unk_A9C]);
    guTranslate(&mtx, effect->pos.x, effect->pos.y, effect->pos.z);
    guMtxCatL(&data->mtx[data->unk_A9C], &mtx, &data->mtx[data->unk_A9C]);

    mtxPos = data->animArray[data->unk_A9C];
    if (data->unk_A94 == 2) {
        func_80027138(data->unk_A8C, &sp48, &sp44, &sp40);
    } else {
        func_80027138(data->unk_A88, &sp48, &sp44, &sp40);
    }

    switch (data->unk_A94) {
        case 0:
            frameIndex = data->unk_AA4[data->unk_A98 % effect->unk5];
            break;
        case 1:
            frameIndex = data->unk_A98;
            if (frameIndex >= sp44 - 1) {
                data->unk_AA8--;
                if (data->unk_AA8 > 0) {
                    data->unk_A98 = -1;
                } else {
                    data->unk_A94 = 2;
                    data->unk_A98 = -1;
                }
            }
            break;
        case 2:
            if (data->unk_A98 >= sp44 - 1) {
                data->unk_A98 = sp44 - 1;
            }
            frameIndex = data->unk_A98;
            break;
    }
    func_80027240(&mtxPos, sp40, frameIndex, sp48);
    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx[data->unk_A9C]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    mtxPos = data->animArray[data->unk_A9C];
    PutDList(&mtxPos, &gfxPos, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);
    data->unk_A98++;
    data->unk_A9C ^= 1;

    *pGfxPos = gfxPos;
    if (*data->unk_AA0 == 0) {
        Effect_Free(effect);
    }
}

void Effect_TypeAH_Init(u8* arg0, f32 posX, f32 posY, f32 posZ, f32 arg4, unkStruct16* arg5, s32 arg6, s32 arg7, u8 arg8) {
    Effect* effect;
    Effect_TypeAH_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAH_Data), &Effect_TypeAH_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAH_Data*)effect->data;
    data->dlist = ChameleonGfxs[arg6];
    data->unk_A88 = arg5->unk0;
    data->unk_A8C = arg5->unk4;
    data->yaw = arg4;
    data->unk_A94 = arg7;
    data->unk_A98 = 0;
    data->unk_A9C = 0;
    data->unk_AA0 = arg0;
    data->unk_AA4 = arg5->unk8;
    data->unk_AA8 = arg8;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;
    effect->unk5 = arg5->unkC;
    effect->vel.x = 0.0f;
}

void Effect_TypeAI_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha;

    effect->lifeTime += effect->duration;
    if (effect->lifeTime <= 1.0f) {
        alpha = sinf(effect->lifeTime * PI_HALF);
    } else {
        alpha = 1.0f;

        effect->pos.x += effect->pos.y;
        if (effect->pos.x > 1.0f) {
            Effect_Free(effect);
            if (effect->spriteID == 0) {
                gGameModeState = 3;
            }
            return;
        }
    }

    effect->unk5 *= alpha;
    setPrimColor(effect->unk5, effect->unk5, effect->unk5, 255.0f * alpha);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
}

void Effect_TypeAI_Init(u8 arg0, f32 arg1, f32 arg2, s32 arg3) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAI_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = arg3;
    effect->unk5 = arg0;
    effect->pos.x = 0.0f;
    effect->pos.y = 1.0f / arg2;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / arg1;
}

void Effect_TypeAJ_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha;

    effect->pos.y += effect->pos.z;
    if (effect->pos.y <= 1.0f) {
        alpha = 1.0f;
    } else {
        effect->lifeTime += effect->duration;
        alpha = cosf(effect->lifeTime * PI_HALF);
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
            return;
        }
    }

    effect->unk5 *= effect->lifeTime;
    setPrimColor(effect->unk5, effect->unk5, effect->unk5, 255.0f * alpha);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
}

void Effect_TypeAJ_Init(u8 arg0, f32 arg1, f32 arg2) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAJ_Update);
    if (effect == NULL) {
        return;
    }

    effect->unk5 = arg0;
    effect->pos.y = 0.0f;
    effect->pos.z = 1.0f / arg1;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / arg2;
    setPrimColor(arg0, arg0, arg0, 255);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
}

s32 func_8007101C(void) {
    s32 i;

    if (func_80055EEC(0x800) % 20 == 1) {
        PLAY_SFX(SFX_2A_unkSnd, 0, 0x10);
        if (D_800FE708 == 0) {
            D_800FE708 = 5;
        } else {
            D_800FE708--;
        }
    }
    if (func_80055EEC(0x400) % 20 == 1) {
        PLAY_SFX(SFX_2A_unkSnd, 0, 0x10);
        if (D_800FE708 == 5) {
            D_800FE708 = 0;
        } else {
            D_800FE708++;
        }
    }

    for (i = 0; i < 6; i++) {
        if (i == D_800FE708) {
            SetTextGradientFromPalette(2);
        } else {
            SetTextGradientFromPalette(3);
        }
        func_80059F28(188.0f, 96 + i * 20, 0.0f, 0.0f, 1.0f, 104.0f, 16.0f, 0.0f, SPRITE_RANKING_TEXT_JL + i);
    }
    return D_800FE708;
}

void Effect_TypeAK_Update(Effect* effect, Gfx** pGfxPos) {
    f32 alpha;
    f32 sp38;

    switch (effect->unk5) {
        case 0:
            effect->lifeTime += effect->duration;
            if (!(effect->lifeTime <= 1.0f)) {
                effect->unk5 = 1;
                effect->lifeTime = 0.0f;
            }
            // don't draw anything
            return;
        case 1:
            effect->lifeTime += effect->vel.x;
            alpha = sinf(effect->lifeTime * PI_HALF);
            sp38 = alpha * 104.0f;
            if (effect->lifeTime >= 1.0f) {
                sp38 = 104.0f;
                alpha = 1.0f;
                effect->unk5 = 2;
                effect->lifeTime = 0.0f;
            }
            break;
        case 2:
            alpha = 1.0f;
            sp38 = 104.0f;
            effect->lifeTime += effect->vel.y;
            if (effect->lifeTime >= 1.0f) {
                effect->unk5 = 3;
                effect->lifeTime = 0.0f;
            }
            break;
        case 3:
            sp38 = 104.0f;
            alpha = cosf(effect->lifeTime * PI_HALF);
            effect->lifeTime += effect->vel.z;
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
                return;
            }
            break;
    }
    SetTextGradientFromPaletteAlpha(17, alpha);
    printUISprite(effect->pos.x, effect->pos.y, 0, 0, 1, sp38, 16.0f, 0, effect->spriteID);
}

void Effect_TypeAK_Init(f32 posX, f32 posY, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAK_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = 0xBD + arg6;
    effect->unk5 = 0;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->vel.x = 1.0f / arg3;
    effect->vel.y = 1.0f / arg4;
    effect->vel.z = 1.0f / (arg5 - arg3 - arg4);
    effect->duration = 1.0f / arg2;
    effect->lifeTime = 0.0f;
}

//battle pause? is it both of them??
const char D_8010CABC[] = "ＰＡＵＳＥ！";
const char D_8010CACC[] = "ＣＡＮＣＥＬ";
const char D_8010CADC[] = "ＳＴＡＧＥ　ＳＥＬＥＣＴ";
const char D_8010CAF8[] = "ＣＯＬＯＲ　ＳＥＬＥＣＴ";
const char D_8010CB14[] = "ＥＸＩＴ";
const char D_8010CB20[] = "ＲＥＴＲＹ";
const char D_8010CB2C[] = "ＳＴＡＧＥ　ＣＨＡＮＧＥ";
const char D_8010CB48[] = "ＣＯＬＯＲ　ＣＨＡＮＧＥ";
const char D_8010CB64[] = "ＥＸＩＴ";

void Effect_GameResults_Update(Effect* effect, Gfx** pGfxPos) {
    s32 a0;
    f32 x, y;
    Struct_800714C8 sp8C;
    s32 i;

    setPrimColor(0, 0, 0, 255);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
    if (effect->spriteID == 0) {
        sp8C = D_800FE70C;

        Effect_TypeAT_Init(72.0f, 32.0f, 1, 30.0f, 60.0f, 239.0f, 4, "ＣＬＥＡＲ　ＳＴＡＧＥ");
        Effect_TypeAT_Init(64.0f, 144.0f, 1, 30.0f, 60.0f, 239.0f, 4,"ＣＯＬＬＥＣＴ　ＩＴＥＭ");
        Effect_TypeAU_Init(64.0f, 178.0f, 32.0f, 24.0f, 0, 0xE0, 30.0f, 60.0f, 240.0f);
        Effect_TypeAU_Init(178.0f, 178.0f, 24.0f, 24.0f, 0, 0xE1, 30.0f, 60.0f, 240.0f);
        Effect_TypeAT_Init(96.0f, 178.0f, 1, 30.0f, 60.0f, 239.0f, 3, "Ｘ");
        Effect_TypeAT_Init(208.0f, 178.0f, 1, 30.0f, 60.0f, 239.0f, 3, "Ｘ");

        a0 = 0;
        for (i = 0; i < 6; i++) {
            a0 += gGameState.stageCrownRecord[i];
        }
        Effect_TypeAS_Init(112.0f, 178.0f, 1, 1, 30.0f, 8.0f, 60.0f, 218.0f, 5, a0, 0, 0, 3, 0);
        Effect_TypeAS_Init(224.0f, 178.0f, 1, 1, 30.0f, 8.0f, 60.0f, 218.0f, 5, gTotalCarrots, 0, 0, 1, 0);

        for (i = 0; i < 6; i++) {
            if (gLevelAccessBitfeild & (1 << i)) {
                sp8C.array[i] = i;
            }
        }
        x = 40.0f;
        y = 64.0f;
        for (i = 0; i < 6; i++) {
            if (sp8C.array[i] != -1) {
                f32 arg2 = 4 * i + 30.0f;
                Effect_TypeAK_Init(x, y, arg2, 30.0f, 60.0f, 240.0f - arg2, sp8C.array[i]);
                if (x == 40.0f) {
                    x = 176.0f;
                } else {
                    x = 40.0f;
                    y += 24.0f;
                }
            }
        }

        effect->spriteID = 1;
    }

    effect->lifeTime += effect->duration;
    if (effect->lifeTime >= 1.0f) {
        FreeSprite(SPRITE_RANKING_TEXT_JL);
        FreeSprite(SPRITE_RANKING_TEXT_AL);
        FreeSprite(SPRITE_RANKING_TEXT_BL);
        FreeSprite(SPRITE_RANKING_TEXT_DC);
        FreeSprite(SPRITE_RANKING_TEXT_KL);
        FreeSprite(SPRITE_RANKING_TEXT_GC);
        FreeSprite(SPRITE_CROWN_SMALL);
        FreeSprite(SPRITE_CARROT_SMALL);
        Effect_Free(effect);
    }
}

void Effect_GameResults_Init() {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_GameResults_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = 0;
    effect->lifeTime = 0;
    effect->duration = 1.0f / 272.0f;
    LoadSprite(SPRITE_RANKING_TEXT_JL);
    LoadSprite(SPRITE_RANKING_TEXT_AL);
    LoadSprite(SPRITE_RANKING_TEXT_BL);
    LoadSprite(SPRITE_RANKING_TEXT_DC);
    LoadSprite(SPRITE_RANKING_TEXT_KL);
    LoadSprite(SPRITE_RANKING_TEXT_GC);
    LoadSprite(SPRITE_CROWN_SMALL);
    LoadSprite(SPRITE_CARROT_SMALL);
    setPrimColor(0, 0, 0, 255);
    printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
}

#ifdef NON_MATCHING
void func_80071A48(u32 arg0, s8* str) {
    s32 shift;

    for (shift = 28; shift >= 0; shift -= 4) {
        s32 digit = ((0xF << shift) & arg0) >> shift;
        u8* pChar = &D_800FE724[digit * 2];
        *str++ = *pChar++;
        *str++ = *pChar++;
    }
    *str = 0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80071A48.s")
void func_80071A48(u32 arg0, s8* str);
#endif

//ending?
void Effect_TypeAL_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAL_Data* data = (Effect_TypeAL_Data*)effect->data;
    f32 sp68 = 100.0f;
    f32 sp64;
    f32 sp60;
    s32 s2;
    s32 a0, a1;
    s32 i, j;

    //draw background
    setPrimColor(0, 0, 0, 255);
    func_80059F28(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
    func_8007B480(0.0f, 10000.0f, 0.0f, 0.0f, 10000.0f, 600.0f);

    switch (effect->unk5) {
        case 0:
            effect->lifeTime += effect->pos.x;
            sp64 = sinf(effect->lifeTime * PI_HALF);
            sp60 = 0.0f;
            if (effect->lifeTime >= 1.0f) {
                effect->unk5 = 1;
                effect->lifeTime = 0;
            }
            break;
        case 1:
            sp64 = 1.0f;
            sp60 = sinf(effect->vel.z * PI_HALF);
            s2 = 0;
            effect->vel.z += effect->pos.y;
            a0 = 0; //how many total crowns you've collected
            a1 = 0; //the actual stage limits

            if (effect->vel.z >= 1.0f) {
                //add all of your totals
                for (i = 0; i < 6; i++) {
                    a0 += gGameState.stageCrownRecord[i];
                }
                //why does this go through 9 if there's only 6 crown stages???
                for (i = 0; i < 9; i++) {
                    a1 += sStageCrownTotals[i];
                }
                //if collected all AND player is Davy, Jack, Fred or Linda
                if (a0 == a1 && gSelectedCharacters[0] <= CHARA_LINDA) {
                    //unlock white (or at least play the animation as if you did)
                    PLAY_SFX(SFX_ChameleonRespawn, 0, 0x10);
                    //load twinkle
                    Effect_TypeW_Init(260.0f, 9920.0f, 0.0f, 32.0f, 20, 16);
                    //load white model
                    Effect_TypeAH_Init(&effect->numParts, 260.0f, 9850.0f, 0.0f, -22.0f, &D_800F0D90[4], CHARA_WHITE, 1, 1);
                }
                //manually print out record
                for (i = 0; i < 6; i++) {
                    s2 += RecordTime_ParseToSecs(&D_80200B85[i]);
                }
                Effect_TypeAS_Init(180.0f, 48.0f, 0.6f, 0.6f, 1, 8.0f, 1, 9.3312e8f, 4, (s2 / 3600) % 24, (s2 / 60) % 60, s2 % 60, 0, 1);
                func_80071A48(perfectCode, data->unk_00);
                effect->unk5 = 2;
                effect->lifeTime = 0;
            }
            break;
        case 2:
            SetTextGradientFromPalette(5);
            PrintTextWrapper(64.0f, 48.0f, 0.0f, .6f, "ＴＯＴＡＬ　ＴＩＭＥ", 1);
            if (gSelectedCharacters[0] == CHARA_WHITE && gNoHit && gOneRun) {
                sp68 = 100.0f - sinf(effect->lifeTime * PI_HALF) * 22.0f;
            }
            effect->lifeTime += effect->vel.x;
            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 1.0f;
                if (gSelectedCharacters[0] == CHARA_WHITE && gNoHit && gOneRun) {
                    if (effect->spriteID == 1) {
                        PLAY_SFX(SFX_38_unkSnd, 0, 0x10);
                        effect->spriteID = 0;
                    }
                    SetTextGradientFromPalette(5);
                    PrintTextWrapper(100.0f, 128.0f, 0.0f, 0.6f, "ＰＥＲＦＥＣＴ　ＣＯＲＤ", 1);
                    SetTextGradientFromPalette(4);
                    PrintTextWrapper(108.0f, 154.0f, 0.0f, 0.8f, data->unk_00, 1); // TODO figure out if unk_00 is u8[] or s8[]
                }
            }
            sp60 = 1.0f;
            sp64 = 1.0f;
            break;
    }

    SetTextGradient(0, 162, 227, 255.0f * sp64, 18, 232, 130, 255.0f * sp64, 255, 255, 0, 255.0f * sp64, 255, 110, 194, 255.0f * sp64);
    printUISprite(96.0f, sp68, 0.0f, 0.0f, 1, 128.0f, 32.0f, 0.0f, SPRITE_THE_END);
    for (j = 0; j < 4; j++) {
        SetTextGradient_TopBottom(204, 231, 241, 255.0f * sp60, 0, 126, 178, 255.0f * sp60);
        printUISprite(32 + j * 64, 192.0f, 0.0f, 0.0f, 1, 64.0f, 16.0f, j, SPRITE_JSS_COPYRIGHT);
    }
}

void Effect_TypeAL_Init(void) {
    Effect* effect;
    Effect_TypeAL_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAL_Data), &Effect_TypeAL_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAL_Data*)effect->data;
    data->unk_10 = 0;

    LoadSprite(SPRITE_JSS_COPYRIGHT);
    LoadSprite(SPRITE_THE_END);

    effect->spriteID = 1;
    effect->unk5 = 0;
    effect->numParts = 1;
    effect->pos.x = 0.02f;
    effect->pos.y = 0.025f;
    effect->pos.z = 0.0076923077f;
    effect->vel.x = 0.05f;
    effect->lifeTime = 0.0f;
    effect->vel.z = 0.0f;
}

void Effect_TypeAM_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAM_Data* data = (Effect_TypeAM_Data*)effect->data;
    f32 sp90;
    f32 posX;
    f32 sp88, sp84, sp80, sp7C;
    s32 r;

    DisableInput();
    switch (effect->unk5) {
        case 0:
            if (effect->spriteID == 0) {
                sp7C = cosf(DEGREES_TO_RADIANS_2PI(effect->vel.x + 145.0f));
                sp80 = sinf(DEGREES_TO_RADIANS_2PI(effect->vel.x + 145.0f));
                sp84 = cosf(DEGREES_TO_RADIANS_2PI(effect->vel.x + 260.0f));
                sp88 = sinf(DEGREES_TO_RADIANS_2PI(effect->vel.x + 260.0f));
                posX = effect->pos.x;
                func_80068A88(gPlayerActors->pos.x, gPlayerActors->pos.y, gPlayerActors->pos.z,
                              posX, effect->pos.y + 150.0f, effect->pos.z,
                              posX, effect->pos.y, effect->pos.z,
                              D_80176B78->f3.x * 3.0f, D_80176B78->f3.y * 3.0f, D_80176B78->f3.z * 3.0f,
                              posX + sp7C * 1000.0f, effect->pos.y + 30.0f, effect->pos.z - sp80 * 1000.0f,
                              posX + sp84 * 800.0f, effect->pos.y, effect->pos.z - sp88 * 800.0f,
                              60.0f, 60.0f, 18000.0f);
            }
            effect->spriteID++;
            if (effect->spriteID >= 2) {
                effect->spriteID = 0;
                effect->unk5++;
            }
            break;
        case 1:
            if (effect->numParts < 20) {
                effect->lifeTime += effect->duration;
                if (effect->lifeTime >= 1.0f) {
                    effect->lifeTime = 0.0f;
                    sp90 = effect->vel.x + RANDOM(45, 120);
                    sp90 = -sp90;
                    WrapDegrees(&sp90);
                    r = Rand();
                    Effect_TypeAA_Init(effect->pos.x, effect->pos.y, effect->pos.z, 1200.0f, r % 360, sp90, 0.0f, 20.0f, 8.0f, RANDOM(2, 5));
                    effect->numParts++;
                }
            }

            setPrimColor(255, 255, 255, effect->numParts / 21.0f * 255.0f);
            printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
            effect->spriteID++;

            if (effect->numParts == 20) {
                effect->spriteID = 0;
                effect->unk5++;
            }
            break;
        case 2:
            setPrimColor(255, 255, 255, 255);
            printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);
            Effect_TypeAI_Init(255, 1.0f, 32.0f, 1);
            gIsGamePaused = PAUSEMODE_FROZEN;
            effect->spriteID++;
            if (effect->spriteID > 30) {
                *data->unk_00 = 1;
                Effect_Free(effect);
            }
            break;
    }
}

void Effect_TypeAM_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, s32* arg4) {
    Effect* effect;
    Effect_TypeAM_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAM_Data), &Effect_TypeAM_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAM_Data*)effect->data;
    data->unk_00 = arg4;

    effect->spriteID = 0;

    effect->numParts = 0;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg3 + 90.0f;
    effect->unk5 = 0;
    effect->lifeTime = 0.0f;
    effect->duration = 0.125f;
}

#ifdef NON_MATCHING
void printStageRecordTimes(s32 arg0) {
    s32 i;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    f32 yOffset;

    yOffset = 0.0f;
    for (i = 0; i < 5; i++) {
        s32 tmp;
        RecordTime_GetByStageRank(arg0, i, &sp98, &sp94, &sp90, &sp8C);
        Effect_StageRecordTime_Init(156.0f, 64.0f + yOffset, -65.0f, sp98, sp94, sp8C, sp90, 8.0f, 2 * i);
        yOffset += 32.0f;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printStageRecordTimes.s")
void printStageRecordTimes(s32 arg0);
#endif

#ifdef NON_MATCHING
void func_80072B1C(Effect* effect, Gfx** pGfxPos) {
    s32 i, j, k;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            func_800612F0(i);
            func_80059F28(j * 40, i * 48, 0.0f, 0.0f, 1, 40.0f, 48.0f, j, SPRITE_RANKING_SCREEN);
        }
    }

    if (effect->spriteID != D_800F0B5C) {
        printStageRecordTimes(D_800F0B5C);
        effect->spriteID = D_800F0B5C;
    }
    D_800F0B5C = func_8007101C();
    if (effect->spriteID != D_800F0B5C) {
        D_800FE748 = 1;
    }

    if (effect->lifeTime == 2.0f) {
        if (effect->duration++ >= 20.0f) {
            D_800FE748 = 1;
            Effect_Free(effect);
        }
    } else if (effect->lifeTime < 2.0f) {
        for (k = 0; k < 4; k++) {
            if (gPlayerActors[k].active && func_80055F10(k, 0x4000) == 1) {
                Effect_TypeAI_Init(0, 16.0f, 10.0f, 0);
                effect->lifeTime = 2.0f;
                return;
            }
        }
    }
}
#else
void func_80072B1C(Effect* effect, Gfx** pGfxPos);
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80072B1C.s")
#endif

void Effect_TypeAN_Init(void) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &func_80072B1C);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = 1;
    effect->lifeTime = 0.0f;
    effect->duration = 0.0f;
    PlayBGM(BGM_TRAINING);
}

void Effect_TypeAO_Update(Effect* effect, Gfx** pGfxPos) {
    s32 i;
    s32 temp = 2; // required to match

    Battle_Time++;

    switch ((s32)effect->lifeTime) {
        case 0:
            Effect_TypeAJ_Init(0, 4.0f, 16.0f);
            PlayBGM(BGM_TRAINING);
            effect->lifeTime = 1.0f;
            break;
        case 1:
            if (Battle_Time == temp) {
                func_80054284();
            }
            func_80053CA0();
            for (i = 0; i < 4; i++) {
                if (effect->lifeTime == 2.0f) {
                    break;
                }
                if (gPlayerActors[i].active && D_80168D78[i] != 1) {
                    if (func_80055F10(i, 0x8000) == 1 || func_80055F10(i, 0x1000) == 1) {
                        Effect_TypeAY_Init(&D_800FE404[5], 1.0f, 1.0f, 0, 4, &effect->spriteID, 54.0f, 56.0f, 212.0f, 148.0f);
                    }
                    if (1) {} // required to match
                }
            }
            if (effect->spriteID != -1) {
                if (effect->spriteID >= 0) {
                    effect->lifeTime = 2.0f;
                    Battle_Stage = BATTLE_STAGE_INIT;
                    D_800FE74C = 0;
                    Effect_TypeAI_Init(0, 16.0f, 9000.0f, 1);
                } else if (effect->spriteID == -2) {
                    D_800FE74C = 0;
                    effect->spriteID = -1;
                }
            }
            break;
        case 2:
            effect->duration += 1.0f;
            if (effect->duration < 18.0f) {
                func_80053CA0();
            }
            if (effect->duration > 20.0f) {
                effect->lifeTime = 3.0f;
            }
            break;
        case 3:
            Battle_Time = 0;
            D_800F0B54[0] = 0;
            StopBGM();
            func_8005423C();
            UnlockEyeChange();
            switch (effect->spriteID) {
                case 0:
                    SetProcessType(GAME_MODE_BATTLE_MENU);
                    gGameModeState = 4;
                    break;
                case 1:
                    SetProcessType(GAME_MODE_STAGE_SELECT);
                    break;
                case 2:
                    SetProcessType(GAME_MODE_BATTLE_MENU);
                    break;
                case 3:
                    SetProcessType(GAME_MODE_TITLE_SCREEN);
                    break;
            }
            break;
    }
}

void Effect_TypeAO_Init(void) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAO_Update);
    if (effect == NULL) {
        return;
    }

    D_800F0B54[0] = 255;
    effect->spriteID = -1;
    effect->pos.z = 0.0f;
    effect->lifeTime = 0.0f;
    effect->duration = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800730E4.s")

void Effect_ControllerRumble_Update(Effect* effect, Gfx** pGfxPos) {
    s32 s2;
    s32 i;
    f32 temp = 16.0f; // required to match

    s2 = ABS2(((++effect->spriteID) % 32) - 16); // BUG: effect->spriteID incremented twice

    if (D_80175668[0] == -1) {
        effect->unk5 = 0;
    } else if (RumblePakError > 0) {
        effect->unk5 = 1;
    } else {
        Effect_Free(effect);
        gGameModeState = 3;
        return;
    }

    setPrimColor(128, 0, 0, 255);
    func_80059F28(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);

    for (i = 0; i < 8; i++) {
        SetTextGradientFromPaletteAlpha(0x15, s2 / temp);
        func_800612F0(D_800FE750[i].unk_04);
        func_80059F28(32 + i * 32, 64.0f, 0.0f, 0.0f, 1, 32.0f, temp, D_800FE750[i].unk_00, SPRITE_TEXTBIGGER);
        SetTextGradientFromPaletteAlpha(0x15, s2 / temp);
        func_800612F0(D_800FE750[i].unk_04 + 1);
        func_80059F28(32 + i * 32, 80.0f, 0.0f, 0.0f, 1, 32.0f, temp, D_800FE750[i].unk_00, SPRITE_TEXTBIGGER);
    }

    s2 = effect->unk5;
    switch (s2) {
        case 0:
            // 電源を切って、コントローラを :  Turn off the power and turn off the controller,
            func_80080864(48.0f, 120.0f, 0.0f, 1, temp, temp, "電源を切って、コントローラを", 3);
            // １Ｐ用に正しく接続してください。: Please connect correctly for 1P.
            func_80080864(40.0f, 144.0f, 0.0f, 1, temp, temp, "１Ｐ用に正しく接続してください。", 3);
            break;
        case 1:
            // 振動パックに異状があります。: There is something wrong with the vibration pack.
            func_80080864(48.0f, 120.0f, 0.0f, 1, temp, temp, "振動パックに異状があります。", 3);
            // 電源を切って、: Turn off the power,
            func_80080864(104.0f, 144.0f, 0.0f, 1, temp, temp, "電源を切って、", 3);
            // 振動パックをきちんと挿入して下さい。: Please insert the vibration pack properly.
            func_80080864(20.0f, 168.0f, 0.0f, 1, temp, temp, "振動パックをきちんと挿入して下さい。", 3);
            break;
    }
}

void Effect_ControllerRumble_Init(void) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_ControllerRumble_Update);
    if (effect == NULL) {
        SetProcessType(GAME_MODE_BOOT);
    }

    effect->spriteID = 0;
    effect->unk5 = 0;
}


void func_800735F4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    SetTextGradient_LeftRight(107, 199, 227, arg3, 107, 199, 227, arg2);
    func_80059F28(64.0f, 100.0f, 0.0f, 0.0f, 1.0f, 32.0f, 40.0f, 0.0f, SPRITE_SUNSOFTLOGO);
    SetTextGradient_LeftRight(107, 199, 227, arg2, 107, 199, 227, arg1);
    func_80059F28(96.0f, 100.0f, 0.0f, 0.0f, 1.0f, 32.0f, 40.0f, 1.0f, SPRITE_SUNSOFTLOGO);
    SetTextGradient_LeftRight(107, 199, 227, arg1, 107, 199, 227, arg0);
    func_80059F28(128.0f, 100.0f, 0.0f, 0.0f, 1.0f, 32.0f, 40.0f, 2.0f, SPRITE_SUNSOFTLOGO);
    SetTextGradient_LeftRight(107, 199, 227, arg0, 107, 199, 227, arg1);
    func_80059F28(160.0f, 100.0f, 0.0f, 0.0f, 1.0f, 32.0f, 40.0f, 3.0f, SPRITE_SUNSOFTLOGO);
    SetTextGradient_LeftRight(107, 199, 227, arg1, 107, 199, 227, arg2);
    func_80059F28(192.0f, 100.0f, 0.0f, 0.0f, 1.0f, 32.0f, 40.0f, 4.0f, SPRITE_SUNSOFTLOGO);
    SetTextGradient_LeftRight(107, 199, 227, arg2, 107, 199, 227, arg3);
    func_80059F28(224.0f, 100.0f, 0.0f, 0.0f, 1.0f, 32.0f, 40.0f, 5.0f, SPRITE_SUNSOFTLOGO);
}

void Effect_TypeAP_Update(Effect* effect, Gfx** pGfxPos) {
    f32 f0;
    s32 i;

    effect->lifeTime += 1.0f;
    setPrimColor(255, 255, 255, 255);
    func_80059F28(0.0f, 0.0f, 0.0f, 0.0f, 1, 320.0f, 240.0f, 0.0f, SPRITE_BLANK);

    switch (effect->spriteID) {
        case 0:
            func_80061394();
            Effect_TypeAJ_Init(0, 5.0f, 16.0f);
            effect->spriteID = 1;
            effect->lifeTime = 0.0f;
            break;
        case 1:
            if (effect->lifeTime > 30.0f) {
                effect->spriteID = 2;
                effect->lifeTime = 0.0f;
            }
            break;
        case 2:
            f0 = effect->lifeTime / 32;
            if (f0 > 0.0 && f0 <= 0.25) {
                effect->pos.x = f0 / 0.25 * 255.0;
            }
            if (f0 > 0.25 && f0 <= 0.5) {
                effect->pos.y = (f0 - 0.25) / 0.25 * 255.0;
            }
            if (f0 > 0.5 && f0 <= 0.75) {
                effect->pos.z = (f0 - 0.5) / 0.25 * 255.0;
            }
            if (f0 > 0.75 && f0 <= 1.0) {
                effect->vel.x = (f0 - 0.75) / 0.25 * 255.0;
            }
            func_800735F4(effect->pos.x, effect->pos.y, effect->pos.z, effect->vel.x);
            if (effect->lifeTime >= 32.0f) {
                effect->spriteID = 3;
                effect->lifeTime = 0.0f;
            }
            break;
        case 3:
            func_800735F4(255.0f, 255.0f, 255.0f, 255.0f);
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active && func_80055F10(i, 0x9000)) {
                    effect->lifeTime = 72.0f;
                }
            }
            if (effect->lifeTime > 72.0f) {
                effect->spriteID = 4;
                effect->lifeTime = 0.0f;
                Effect_TypeAI_Init(0, 8.0f, 16.0f, 0);
            }
            break;
        case 4:
            func_800735F4(255.0f, 255.0f, 255.0f, 255.0f);
            if (effect->lifeTime > 8.0f) {
                Effect_Free(effect);
            }
            break;
    }
}
void Effect_TypeAP_Init(void) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAP_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = 0;
    effect->pos.x = 0.0f;
    effect->pos.y = 0.0f;
    effect->pos.z = 0.0f;
    effect->lifeTime = 0;
    effect->vel.x = 0.0f;
}

void Effect_TypeAQ_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAQ_Data* data = (Effect_TypeAQ_Data*)effect->data;
    EffectPart* parts = effect->parts;
    s32 i;
    f32 sinAngle;

    switch (effect->unk5) {
        case 0:
            if (effect->duration-- > 0.0f) {
                return;
            }
            effect->unk5 = 1;
            break;
        case 1:
            effect->lifeTime += data->unk_00;
            sinAngle = sinf(effect->lifeTime * PI_HALF);
            parts[data->unk_1C].pos.x = data->unk_0C * sinAngle;
            parts[data->unk_1C].pos.y = data->unk_10 + cosf(effect->lifeTime * PI_HALF) * 180.0f;
            parts[data->unk_1C].lifeTime = sinAngle;

            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 0.0f;
                data->unk_1C++;
                if (data->unk_1C == effect->numParts) {
                    effect->unk5 = 2;
                }
            }
            break;
        case 2:
            if (*data->unk_18 == 0) {
                effect->lifeTime = 1.0f;
            }
            effect->lifeTime += data->unk_08;
            if (effect->lifeTime >= 1.0f) {
                effect->unk5 = 3;
                effect->lifeTime = 0.0f;
            }
            break;
        case 3:
            effect->lifeTime += data->unk_04;
            for (i = 0; i < effect->numParts; i++) {
                parts[i].lifeTime = cosf(effect->lifeTime * PI_HALF);
            }
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
                return;
            }
            break;
    }

    if (effect->unk5 != 0) {
        for (i = 0; i < effect->numParts; i++) {
            SetTextGradientFromPaletteAlpha(data->unk_14, parts[i].lifeTime);
            func_800612F0(parts[i].unk_24);
            printUISprite(effect->pos.x + effect->vel.x * i - parts[i].pos.x * 0.5f, effect->pos.y - parts[i].pos.y * 0.5f,
                          0.0f, 0.0f, 1.0f, parts[i].pos.x, parts[i].pos.y, parts[i].unk_25, effect->spriteID);
        }
    }
}

void Effect_TypeAQ_Init(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, char* arg7, s32 arg8, s32* arg9) {
    Effect* effect;
    Effect_TypeAQ_Data* data;
    EffectPart* parts;
    s32 sp60;
    s32 sp5C;
    s32 i = 0;
    unsigned char* ptr = arg7;


    while (*ptr != 0) {
        ptr+=2;
        i++;
    }

    if (i == 0) {
        return;
    }

    effect = Effect_Alloc(i, sizeof(Effect_TypeAQ_Data), &Effect_TypeAQ_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAQ_Data*)effect->data;
    *arg9 = 1;
    parts = effect->parts;

    for (i = 0, ptr = arg7; i < effect->numParts; ptr+=2, i++) {
        if (func_80080318(arg8, ptr, &sp60, &sp5C) == 0) {
            parts[i].unk_24 = sp5C;
            parts[i].unk_25 = sp60;
            parts[i].pos.x = 1.0f;
            parts[i].pos.y = 1.0f;
            parts[i].lifeTime = 0.0f;
        }
    }

    data->unk_00 = 1.0f / arg3;
    data->unk_04 = 1.0f / arg4;
    data->unk_08 = 1.0f / arg5;

    switch (arg8) {
        case 3:
            data->unk_0C = 16.0f;
            data->unk_10 = 16.0f;
            break;
        case 4:
            data->unk_0C = 16.0f;
            data->unk_10 = 16.0f;
            break;
        case 1:
            data->unk_0C = 16.0f;
            data->unk_10 = 24.0f;
            break;
    }

    data->unk_18 = arg9;
    data->unk_1C = 0;
    data->unk_14 = arg6;

    effect->pos.x = arg0;
    effect->pos.y = arg1;
    effect->spriteID = arg8;
    effect->unk5 = 0;
    effect->vel.x = arg2;
    effect->lifeTime = 0;
    effect->duration = 0;
}

void Effect_TypeAR_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAQ_Data* data = (Effect_TypeAQ_Data*)effect->data;
    f32 f12;
    f32 posX;
    f32 nv;
    f32 f14;
    f32 unused;
    f32 nv2;

    switch (effect->unk5) {
        case 0:
            effect->lifeTime += data->unk_00;
            f12 = ABS2(effect->pos.x - effect->vel.x);
            f14 = (1.0f - effect->lifeTime) * (nv2 = f12);
            if (effect->numParts == 0) {
                f12 = effect->pos.x + f14;
            } else {
                f12 = effect->pos.x - f14;
            }
            if (effect->lifeTime >= 1.0f) {
                effect->unk5 = 1;
                effect->lifeTime = 0.0f;
            }
            posX = f12;
            break;
        case 1:
            if (*data->unk_18 == 0) {
                effect->lifeTime = 1.0f;
            }
            effect->lifeTime += data->unk_08;
            if (effect->lifeTime >= 1.0f) {
                effect->unk5 = 2;
                effect->lifeTime = 0.0f;
            }
            nv = effect->pos.x;
            posX = nv;
            break;
        case 2:
            effect->lifeTime += data->unk_04;
            nv = effect->lifeTime * PI_HALF;
            effect->vel.z = cosf(nv);
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
                return;
            }
            unused = posX = effect->pos.x;
            break;
    }

    SetTextGradientFromPaletteAlpha(data->unk_14, effect->vel.z);
    PrintTextWrapper(posX, effect->pos.y, 0.0f, 1.0f, data->unk_20, effect->spriteID);
}

void Effect_TypeAR_Init(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, char* arg7, s32 arg8, s32* arg9) {
    Effect* effect;
    Effect_TypeAQ_Data* data;
    s32 i = 0;
    f32 f0;
    unsigned char* ptr = arg7;

    while (*ptr != 0) {
        ptr+=2;
        i++;
    }

    if (i == 0) {
        return;
    }

    effect = Effect_Alloc(0, sizeof(Effect_TypeAQ_Data), &Effect_TypeAR_Update);
    if (effect == NULL) {
        return;
    }

    if (arg2 == 0) {
        f0 = -16.0f - i * 16.0f;
    } else {
        f0 = 330.0f;
    }
    *arg9 = 1;

    data = (Effect_TypeAQ_Data*)effect->data;
    data->unk_00 = 1.0f / arg3;
    data->unk_04 = 1.0f / arg4;
    data->unk_08 = 1.0f / arg5;
    data->unk_18 = arg9;
    data->unk_14 = arg6;
    data->unk_20 = arg7;

    effect->spriteID = arg8;
    effect->unk5 = 0;
    effect->numParts = arg2;
    effect->pos.x = arg0;
    effect->pos.y = arg1;
    effect->vel.x = f0;
    effect->lifeTime = 0.0f;
    effect->vel.z = 1.0f;
}

void Effect_TypeAS_Update(Effect* effect, Gfx** pGfxPos) {
    f32 unused[1];
    Effect_TypeAS_Data* data = (Effect_TypeAS_Data*)effect->data;
    f32 sp6C;
    f32 sizeX;
    s32 i;
    f32 offsetX;
    f32 alpha;

    switch (effect->unk5) {
        case 0:
            effect->lifeTime += effect->pos.z;
            if (!(effect->lifeTime <= 1.0f)) {
                effect->unk5 = 1;
                effect->lifeTime = 0.0f;
            }
            // don't draw anything
            return;
        case 1:
            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 0.0f;
                data->unk_0C++;
                if (data->unk_0C == data->unk_10) {
                    data->unk_0C = data->unk_10 - 1;
                    effect->unk5 = 2;
                    effect->lifeTime = 0.0f;
                }
            }
            effect->lifeTime += effect->vel.x;
            sp6C = 2.0f * (effect->lifeTime - 0.5f);
            break;
        case 2:
            effect->lifeTime += effect->vel.y;
            if (effect->lifeTime >= 1.0f) {
                effect->unk5 = 3;
                effect->lifeTime = 0.0f;
            }
            break;
        case 3:
            effect->lifeTime += effect->vel.z;
            cosf(effect->lifeTime * PI_HALF); // ???
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
                return;
            }
            break;
    }

    for (i = 0; i <= data->unk_0C; i++) {
        if (i == data->unk_0C && effect->unk5 <= 1) {
            offsetX = effect->sizeX - effect->lifeTime * effect->sizeX;
            sizeX = sp6C * effect->sizeX;
            alpha = sinf(effect->lifeTime * PI_HALF);
        } else {
            do { offsetX = effect->sizeX - effect->sizeX; } while (0);
            if (effect->unk5 == 3) {
                sizeX = effect->sizeX;
                alpha = cosf(effect->lifeTime * PI_HALF);
            } else {
                sizeX = effect->sizeX;
                alpha = 1.0f;
            }
        }

        SetTextGradientFromPaletteAlpha(effect->numParts, alpha);
        func_800612F0(1);
        printUISprite(effect->pos.x + effect->sizeX * i + offsetX, effect->pos.y, 0, 0, 1, sizeX, effect->sizeY, data->unk_00[i], 1);
    }
}

void Effect_TypeAS_Init(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB, s32 argC, s32 argD) {
    Effect* effect;
    Effect_TypeAS_Data* data;
    s32 i;
    s32 power;

    power = 1;
    for (i = 0; i < argC - 1; i++) {
        power *= 10;
    }

    effect = Effect_Alloc(0, sizeof(Effect_TypeAS_Data), &Effect_TypeAS_Update);
    if (effect == NULL) {
        return;
    }

    effect->spriteID = argD + 1;
    effect->numParts = arg8;
    effect->pos.x = arg0;
    effect->pos.y = arg1;
    effect->sizeX = 16.0f * arg2;
    effect->sizeY = 24.0f * arg3;
    effect->unk5 = 0;

    if (argD == 1) {
        argC = 8;
    }

    data = (Effect_TypeAS_Data*)effect->data;

    effect->pos.z = 1.0f / arg4;
    effect->vel.x = 1.0f / arg5;
    effect->vel.y = 1.0f / arg6;
    effect->vel.z = 1.0f / (arg7 - argC * arg5 - arg6);
    effect->lifeTime = 0.0f;

    if (argD == 0) {
        for (i = 0; i < argC; i++) {
            if (i == argC - 1) {
                data->unk_00[i] = arg9 % 10;
            } else {
                data->unk_00[i] = (arg9 / power) % 10;
                power /= 10;
            }
            data->unk_10 = argC;
        }
    } else {
        data->unk_00[0] = (arg9 / 10) % 10;
        data->unk_00[1] = arg9 % 10;
        data->unk_00[2] = 15;
        data->unk_00[3] = (argA / 10) % 10;
        data->unk_00[4] = argA % 10;
        data->unk_00[5] = 13;
        data->unk_00[6] = (argB / 10) % 10;
        data->unk_00[7] = argB % 10;
        data->unk_00[8] = 14;
        data->unk_10 = 9;
    }
    data->unk_0C = 0;
}

void Effect_TypeAT_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAT_Data* data = (Effect_TypeAT_Data*)effect->data;
    f32 alpha = 0.0f;
    s32 v0;

    switch (effect->unk5) {
        case 0:
            v0 = effect->vel.x > 0;
            effect->vel.x -= 1.0f;
            if (!v0) {
                effect->unk5 = 1;
            } else {
                return;
            }
            break;
        case 1:
        case 2:
            if (effect->lifeTime >= 1.0f) {
                effect->unk5++;
                alpha = 1.0f;
                effect->lifeTime = 0.0f;
            } else if (effect->unk5 == 1) {
                alpha = sinf(effect->lifeTime * PI_HALF);
                effect->lifeTime += effect->vel.y;
            } else {
                alpha = 1.0f;
                effect->lifeTime += effect->pos.z;
            }
            break;
        case 3:
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
                return;
            }
            alpha = cosf(effect->lifeTime * PI_HALF);
            effect->lifeTime += effect->vel.z;
            break;
    }

    if (effect->unk5 >= 1) {
        SetTextGradientFromPaletteAlpha(effect->spriteID, alpha);
        PrintTextWrapper(effect->pos.x, effect->pos.y, 0, 1.0f, data->text, 1);
    }
}

void Effect_TypeAT_Init(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, char* arg7) {
    Effect* effect;
    Effect_TypeAT_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAT_Data), &Effect_TypeAT_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAT_Data*)effect->data;
    data->text = arg7;

    effect->spriteID = arg6;
    effect->unk5 = 0;
    effect->pos.x = arg0;
    effect->pos.y = arg1;
    effect->pos.z = 1.0f / (arg5 - arg3 - arg4);
    effect->vel.x = arg2;
    effect->vel.y = 1.0f / arg3;
    effect->vel.z = 1.0f / arg4;
    effect->lifeTime = 0.0f;
}

void Effect_TypeAU_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAT_Data* data = (Effect_TypeAT_Data*)effect->data;
    f32 alpha;

    switch (effect->unk5) {
        case 0:
        case 1:
            if (effect->unk5 == 0) {
                alpha = sinf(effect->lifeTime * PI_HALF);
                effect->lifeTime += effect->pos.z;
            } else {
                alpha = 1.0f;
                effect->lifeTime += effect->duration;
            }
            if (effect->lifeTime >= 1.0f) {
                alpha = 1.0f;
                effect->unk5++;
                effect->lifeTime = 0.0f;
            }
            break;
        case 2:
            alpha = cosf(effect->lifeTime * PI_HALF);
            effect->lifeTime += effect->vel.z;
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
                return;
            }
            break;
    }

    SetTextGradient_All(255, 255, 255, alpha * 255);
    printUISprite(effect->pos.x, effect->pos.y, 0, 0, 1, effect->vel.x, effect->vel.y, data->unk_08, data->unk_0C);
}

void Effect_TypeAU_Init(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    Effect* effect;
    Effect_TypeAT_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAT_Data), &Effect_TypeAU_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAT_Data*)effect->data;
    data->unk_08 = arg4;
    data->unk_0C = arg5;

    effect->unk5 = 0;
    effect->pos.x = arg0;
    effect->pos.y = arg1;
    effect->vel.x = arg2;
    effect->vel.y = arg3;
    effect->lifeTime = 0.0f;
    effect->pos.z = 1.0f / arg6;
    effect->vel.z = 1.0f / arg7;
    effect->duration = 1.0f / (arg8 - arg6 - arg7);
}

void Effect_TypeAV_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAV_Data* data = (Effect_TypeAV_Data*)effect->data;

    setPrimColor(data->color.r, data->color.g, data->color.b, (1.0f - effect->lifeTime) * 128.0f);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, data->unk_0C * 200.0f, data->unk_0C * 300.0f, 0.0f, SPRITE_PUFF);

    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        data->unk_08 = sinf(data->unk_14 * 0.01745329251994);

        effect->pos.x += data->unk_08 * 4.0f;
        effect->pos.y += effect->vel.y;
        effect->pos.z += data->unk_08 * 4.0f;

        if (data->unk_14 >= 360) {
            data->unk_14 = 0;
        } else {
            data->unk_14 += 8;
        }
        if (data->color.g >= 255) {
            data->color.g = 255;
        } else {
            data->color.g += 8;
        }
        if (effect->lifeTime > 0.2f) {
            data->unk_0C = effect->lifeTime;
        }

        if (effect->lifeTime > 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeAV_Init(f32 posX, f32 posY, f32 posZ, f32 duration, u8 colorR, u8 colorG, u8 colorB) {
    Effect* effect;
    Effect_TypeAV_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAV_Data), &Effect_TypeAV_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAV_Data*)effect->data;
    data->color.r = colorR;
    data->color.g = colorG;
    data->color.b = colorB;
    data->unk_08 = 0;
    data->unk_0C = 0.2f;
    data->unk_14 = 0;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = 0.0f;
    effect->vel.y = 40.0f;
    effect->vel.z = 0.0f;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeAW_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAW_Data* data = (Effect_TypeAW_Data*)effect->data;
    Gfx* gfxPos;
    Mtx mtx;
    f32 sizeXZ;

    if (data->finished == TRUE) {
        Effect_Free(effect);
        return;
    }

    gfxPos = *pGfxPos;
    data->mtxIndex ^= 1;

    sizeXZ = data->unk_80 + data->unk_84 * effect->lifeTime;
    guScale(&data->mtx[data->mtxIndex], sizeXZ, (1.0f - effect->lifeTime) * data->unk_88, sizeXZ);
    guRotate(&mtx, data->yaw, 0.0f, 1.0f, 0.0f);
    guMtxCatL(&data->mtx[data->mtxIndex], &mtx, &data->mtx[data->mtxIndex]);
    guTranslate(&mtx, effect->pos.x, effect->pos.y, effect->pos.z);
    guMtxCatL(&data->mtx[data->mtxIndex], &mtx, &data->mtx[data->mtxIndex]);

    gSPMatrix(gfxPos++, OS_K0_TO_PHYSICAL(&data->mtx[data->mtxIndex]), G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    gSPDisplayList(gfxPos++, data->dlist);
    gSPPopMatrix(gfxPos++, G_MTX_MODELVIEW);

    *pGfxPos = gfxPos;

    if (D_800F687C > 0) {
        f32 oldLifeTime = effect->lifeTime;
        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f && data->finished == FALSE) {
            data->finished = TRUE;
            effect->lifeTime = oldLifeTime;
        }
    }
}

void Effect_TypeAW_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 yaw, s32 duration) {
    Effect* effect;
    Effect_TypeAW_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAW_Data), &Effect_TypeAW_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAW_Data*)effect->data;
    data->unk_80 = arg3 / 100.0f;
    data->unk_84 = (arg4 - arg3) / 100.0f;
    data->unk_88 = arg5;
    data->dlist = static0_gfx3_Gfx;
    data->yaw = yaw;
    data->mtxIndex = 0;
    data->finished = FALSE;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeAX_Update(Effect* effect, Gfx** pGfxPos) {
    s32 i;
    f32 half = 0.5;

    if (D_800F687C > 0) {
        for (i = 0; i <= Rand() % 3; i++) { // BUG: Rand() is called every iteration
            f32 angle = Rand() % 360;
            f32 f24 = effect->vel.x * half * 0.5f;
            f32 x = effect->pos.x + sinf(angle * 0.01745329251994) * RANDOM(0, f24);
            f32 z = effect->pos.z + cosf(angle * 0.01745329251994) * RANDOM(0, f24);
            Effect_TypeBH_Init(x,
                          effect->pos.y,
                          z,
                          RANDOM(effect->vel.x * 0.2f, effect->vel.x * half),
                          RANDOM(10, 20),
                          &D_800FE564[RANDOM(6, 9)]);
        }

        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeAX_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeAX_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg3;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007633C.s")

void SetTextGradientFromPaletteAlpha(s32 palette, f32 alpha) {
    u8* pal = &sTextGradientPalettes[palette * 16];

    SetTextGradient(pal[0], pal[1], pal[2], pal[3] * alpha,
                    pal[4], pal[5], pal[6], pal[7] * alpha,
                    pal[8], pal[9], pal[10], pal[11] * alpha,
                    pal[12], pal[13], pal[14], pal[15] * alpha);
}

void SetTextGradientFromPalette(s32 palette) {
    SetTextGradientFromPaletteAlpha(palette, 1.0f);
}

void DrawTranslucentRectangle(f32 posX, f32 posY, f32 width, f32 height, u8 opacity) {
    setPrimColor(0, 0, 0, opacity);
    printUISprite(posX, posY, 0.0f, 0.0f, 1.0f, width, height, 0.0f, SPRITE_BLANK);
}

void func_8007691C(Effect_TypeAY_Data* arg0, f32 arg1, s32 arg2) {
    s32 i;
    s32 s0;
    f32 newvar; // required to match

    if (arg0->unk_2C > 0.0f) {
        DrawTranslucentRectangle(arg0->unk_24, arg0->unk_28, arg0->unk_2C, arg0->unk_30, 196);
    }

    s0 = arg0->unk_1C % 32;

    for (i = 0; i < arg0->unk_14; i++) {
        if (arg0->unk_00[i].unk_0C == 0) {
            SetTextGradientFromPaletteAlpha(5, arg1);
        } else if (arg0->unk_00[i].unk_0C == 1 && i == arg2) {
            if (s0 >= 0 && s0 < 8) {
                arg0->unk_20 = 80 + (u8)(175.0f * (s0 % 8) / (newvar = 8.0f));
            }
            if (s0 >= 8 && s0 < 16) {
                arg0->unk_21 = 80 + (u8)(175.0f * (s0 % 8) / (newvar = 8.0f));
            }
            if (s0 >= 16 && s0 < 24) {
                arg0->unk_20 = 80 + (u8)(175.0f * (1.0f - (s0 % 8) / 8.0f));
            }
            if (s0 >= 24 && s0 < 32) {
                arg0->unk_21 = 80 + (u8)(175.0f * (1.0f - (s0 % 8) / 8.0f));
            }
            SetTextGradient_TopBottom(255, arg0->unk_20, 0, arg1 * 255,
                                      255, arg0->unk_21, 0, arg1 * 255);
        } else {
            SetTextGradientFromPaletteAlpha(3, arg1);
        }

        PrintTextWrapper(arg0->unk_00[i].unk_00, arg0->unk_00[i].unk_04, 0, arg0->unk_00[i].unk_08, arg0->unk_00[i].unk_10, arg0->unk_00[i].unk_14);
    }

}

void Effect_TypeAY_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAY_Data* data = (Effect_TypeAY_Data*)effect->data;
    f32 unused[1];
    f32 sp44;
    s32 i;


    if (D_800FE74C == 0) {
        gIsGamePaused = PAUSEMODE_NOT_PAUSED;
        Effect_Free(effect);
        return;
    }

    *data->unk_18 = -1;

    switch (data->unk_10) {
        case 0:
            effect->lifeTime += data->unk_04;
            sp44 = effect->lifeTime;
            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 0.0f;
                data->unk_10 = 1;
                sp44 = 1.0f;
            }
            break;
        case 1:
            for (i = 0; i < 4; i++) {
                if (i && i) {} // TODO fake match
                if (gPlayerActors[i].active && D_80168D78[i] == 0) {
                    if ((func_80055F10(i, 0x800) % 8) == 1) {
                        if (effect->spriteID > 0 && data->unk_00[effect->spriteID - 1].unk_0C == 1) {
                            PLAY_SFX(SFX_2A_unkSnd, 0, 0x50);
                            effect->spriteID--;
                        }
                    }
                    if ((func_80055F10(i, 0x400) % 8) == 1) {
                        if (effect->spriteID < data->unk_14 - 1 && data->unk_00[effect->spriteID + 1].unk_0C == 1) {
                            PLAY_SFX(SFX_2A_unkSnd, 0, 0x50);
                            effect->spriteID++;
                        }
                    }
                    if (func_80055F10(i, 0x8000) == 1 || func_80055F10(i, 0x1000) == 1) {
                        *data->unk_18 = effect->spriteID;
                        PLAY_SFX(SFX_Select, 0, 0x50);
                        data->unk_10 = 2;
                    }
                    if (func_80055F10(i, 0x4000) == 1) {
                        *data->unk_18 = -2;
                        PLAY_SFX(SFX_Decline, 0, 0x50);
                        data->unk_10 = 2;
                    }
                }
            }
            sp44 = 1.0f;
            break;
        case 2:
            effect->lifeTime += data->unk_08;
            sp44 = 1.0f - effect->lifeTime;
            if (effect->lifeTime >= 1.0f) {
                gIsGamePaused = PAUSEMODE_NOT_PAUSED;
                D_800FE74C = 0;
                Effect_Free(effect);
            }
            break;
    }

    func_8007691C(data, sp44, effect->spriteID);
    data->unk_1C++;
}

void Effect_TypeAY_Init(Struct_80076EA0* arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s32* arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    Effect* effect;
    Effect_TypeAY_Data* data;

    if (D_800FE74C == TRUE) {
        return;
    }
    D_800FE74C = TRUE;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAY_Data), &Effect_TypeAY_Update);
    if (effect == NULL) {
        return;
    }

    if (gIsMultiplayerPaused == 1) {
        PLAY_SFX(SFX_C1_unkSnd, 0, 0x50);
    }

    data = (Effect_TypeAY_Data*)effect->data;
    data->unk_00 = arg0;
    data->unk_18 = arg5;
    data->unk_04 = 1.0f / arg1;
    data->unk_08 = 1.0f / arg2;
    data->unk_10 = 0;
    data->unk_14 = arg4;
    data->unk_1C = 0;
    data->unk_24 = arg6;
    data->unk_28 = arg7;
    data->unk_2C = arg8;
    data->unk_30 = arg9;

    effect->spriteID = arg3;
    effect->lifeTime = 0.0f;
}

void Effect_TypeAZ_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeAZ_Data* data = (Effect_TypeAZ_Data*)effect->data;
    s32 i;

    switch(data->unk_D8) {
        case 0:
            for (i = 0; i < data->unk_D4; i++) {
                data->unk_00[i].unk_08 = MAX(effect->pos.x, data->unk_00[i].unk_08 - 16.0f);
            }
            if (data->unk_00[data->unk_D4 - 1].unk_08 <= effect->pos.x) {
                effect->lifeTime = 0.0f;
                data->unk_D8 = 1;
            }
            break;
        case 1:
            effect->lifeTime += data->unk_C8;
            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 0.0f;
                data->unk_D8 = 2;
            }
            break;
        case 2:
            effect->lifeTime += data->unk_CC;
            for (i = 0; i < data->unk_D4; i++) {
                data->unk_00[i].unk_08 = effect->pos.x + data->unk_00[i].unk_10 * effect->lifeTime;
            }
            if (effect->lifeTime >= 1.0f) {
                effect->lifeTime = 0.0f;
                data->unk_D8 = 3;
            }
            break;
        case 3:
            effect->lifeTime += data->unk_D0;
            if (effect->lifeTime >= 1.0f) {
                Effect_Free(effect);
            }
            break;
    }

    for (i = 0; i < data->unk_D4; i++) {
        if (data->unk_00[i].unk_00 == 255.0f) {
        } else {
            SetTextGradientFromPalette(data->unk_DC);
            func_800612F0(data->unk_00[i].unk_04);
            printUISprite(data->unk_00[i].unk_08, effect->pos.y,         0.0f, 0.0f, 1.0f, effect->pos.z * 32.0f, 16, data->unk_00[i].unk_00, SPRITE_TEXTBIGGER);
            SetTextGradientFromPalette(data->unk_E0);
            func_800612F0(data->unk_00[i].unk_04 + 1);
            printUISprite(data->unk_00[i].unk_08, effect->pos.y + 16.0f, 0.0f, 0.0f, 1.0f, effect->pos.z * 32.0f, 16, data->unk_00[i].unk_00, SPRITE_TEXTBIGGER);
        }
    }
}

void Effect_TypeAZ_Init(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, unk_80052094_8* arg5, s32 arg6, s32 arg7, f32 arg8, f32 arg9, f32 argA) {
    Effect* effect;
    Effect_TypeAZ_Data* data;
    s32 i;

    effect = Effect_Alloc(0, sizeof(Effect_TypeAZ_Data), &Effect_TypeAZ_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeAZ_Data*)effect->data;
    for (i = 0; i < arg4; i++) {
        data->unk_00[i].unk_08 = 320.0f + i * 64.0f;
        data->unk_00[i].unk_0C = 0.0f;
        data->unk_00[i].unk_10 = arg2 / arg4 * i;
        data->unk_00[i].unk_00 = arg5[i].unk_00;
        data->unk_00[i].unk_04 = arg5[i].unk_04;
    }
    data->unk_C8 = 1.0f / arg8;
    data->unk_CC = 1.0f / arg9;
    data->unk_D0 = 1.0f / argA;
    data->unk_D4 = arg4;
    data->unk_D8 = 0;
    data->unk_DC = arg6;
    data->unk_E0 = arg7;

    effect->pos.x = arg0;
    effect->pos.y = arg1;
    effect->pos.z = arg3;
    effect->lifeTime = 0.0f;
}

void Effect_StageRecordTime_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_StageRecordTime_Data* data = (Effect_StageRecordTime_Data*)effect->data;
    s32 i;
    f32 f2;
    s32 c;

    if (D_800FE748 == 1) {
        Effect_Free(effect);
        return;
    }

    if (effect->pos.z-- > 0.0f) { return; }

    f2 = ABS2(effect->lifeTime - 0.5f);
    c = 2;
    func_80059F28(72.0 - f2 * 16.0, effect->pos.y + 8.0f, 0.0f, 0.0f, 1, 16.0f * f2 * c, 16.0f, 0.0f, gCharacterPortraits[data->unk_78]);
    for (i = 0; i < 6; i++) {
        if (data->unk_79 == 1) {
            SetTextGradientFromPalette(8);
        } else {
            SetTextGradientFromPalette(7);
        }
        func_800612F0(1);
        func_80059F28(effect->pos.x + data->unk_00[i].unk_10 * effect->lifeTime, effect->pos.y + 8.0f, 0.0f, 0.0f, 1, 11.2f, 16.8f, data->unk_00[i].unk_00, SPRITE_TEXTBIG);
    }
    effect->lifeTime += effect->duration;
    if (effect->lifeTime >= 1.0f) {
        effect->lifeTime = 1.0f;
    }
}

void Effect_StageRecordTime_Init(f32 arg0, f32 arg1, f32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, f32 arg7, f32 arg8) {
    Effect* effect;
    Effect_StageRecordTime_Data* data;
    s32 i;

    D_800FE748 = 0;

    effect = Effect_Alloc(0, sizeof(Effect_StageRecordTime_Data), &Effect_StageRecordTime_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_StageRecordTime_Data*)effect->data;

    D_800FE790[0] = arg3 / 10;
    D_800FE790[1] = arg3 % 10;
    D_800FE790[3] = arg4 / 10;
    D_800FE790[4] = arg4 % 10;

    for (i = 0; i < 6; i++) {
        data->unk_00[i].unk_00 = D_800FE790[i];
        data->unk_00[i].unk_10 = arg2 / 5.0f * (5 - i);
    }
    data->unk_79 = arg6;
    data->unk_78 = arg5;

    effect->pos.x = arg0;
    effect->pos.y = arg1;
    effect->pos.z = arg8;
    effect->duration = 1.0f / arg7;
}

void Effect_TypeBA_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeBA_Data* data = (Effect_TypeBA_Data*)effect->data;
    Mtx mtx;
    f32 sp34;

    sp34 = sinf(data->color.a * 0.01745329251994) * 100.0f;
    setPrimColor(data->color.r, data->color.g, data->color.b, (1.0f - effect->lifeTime) * 255.0f);
    guAlign(&mtx, 0.0f, sp34, 100.0f - sp34, sp34);
    func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, data->size, data->size, 0.0f, SPRITE_PUFF);

    if (D_800F687C > 0) {
        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y * (1.0f - effect->lifeTime);
        effect->pos.z += effect->vel.z;

        data->color.r = RANDOM(64, 255);
        data->color.g = RANDOM(64, 255);
        data->color.b = RANDOM(64, 255);
        data->color.a += 30;

        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeBA_Init(f32 posX, f32 posY, f32 posZ, f32 dir, f32 size, f32 arg5, f32 arg6, f32 duration) {
    Effect* effect;
    Effect_TypeBA_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeBA_Data), &Effect_TypeBA_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeBA_Data*)effect->data;
    data->color.r = 255;
    data->color.g = 255;
    data->color.b = 255;
    data->color.a = 0;
    data->size = size;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = sinf(dir * 0.01745329251994) * arg6;
    effect->vel.y = arg5;
    effect->vel.z = cosf(dir * 0.01745329251994) * arg6;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeBA_Create(f32 posX, f32 posY, f32 posZ, f32 size, u8 count) {
    u8 i;
    f32 angle;

    angle = 0.0f;
    for (i = 0; i < count; i++) {
        Effect_TypeBA_Init(posX, posY, posZ, angle, size, RANDOM(10, 30), RANDOM(8, 16), RANDOM(15, 30));
        angle += 360.0f / count;
    }
}

void Effect_TypeBB_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeBB_Data* data = (Effect_TypeBB_Data*)effect->data;
    f32 f0 = sinf(effect->lifeTime * PI_HALF);
    Mtx mtx1;
    Mtx mtx2;
    char unused[4];
    f32 x1, x2, x3, y1, y2, y3, z1, z2, z3;

    if (D_800F687C > 0) {
        data->pos.x = effect->pos.x + effect->vel.x * f0;
        data->pos.y = effect->pos.y + effect->vel.y * f0;
        data->pos.z = effect->pos.z + effect->vel.z * f0;

        effect->sizeX += effect->sizeY;
        WrapDegrees(&effect->sizeX);

        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }

    if (effect->lifeTime > 0.6f && !(gTimer & 1)) { return; }

    guScale(&mtx2, 0.85f, 0.85f, 0.85f);
    guRotate(&mtx1, effect->sizeX, 1.0f, 1.0f, 1.0f);
    guMtxCatL(&mtx2, &mtx1, &mtx2);
    guTranslate(&mtx1, data->pos.x, data->pos.y, data->pos.z);
    guMtxCatL(&mtx2, &mtx1, &mtx2);
    guMtxXFML(&mtx2, data->v1.x, data->v1.y, data->v1.z, &x1, &y1, &z1);
    guMtxXFML(&mtx2, data->v2.x, data->v2.y, data->v2.z, &x2, &y2, &z2);
    guMtxXFML(&mtx2, data->v3.x, data->v3.y, data->v3.z, &x3, &y3, &z3);
    setPrimColor(data->color.r, data->color.g, data->color.b, 100);
    func_80058748(x1, y1, z1, x1, y1, z1, x2, y2, z2, x3, y3, z3, 0.0f, 0.0f, 0.0f, SPRITE_BLANK);
}

#ifdef NON_MATCHING
void Effect_TypeBB_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u8 argA, u8 argB, u8 argC) {
    Effect* effect;
    Effect_TypeBB_Data* data;
    f32 dx, dy, dz;
    f32 absVal;

    effect = Effect_Alloc(0, sizeof(Effect_TypeBB_Data), &Effect_TypeBB_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeBB_Data*)effect->data;
    data->v1.x = data->v2.x = data->v3.x = 0.0f;
    data->v1.y = data->v2.y = data->v3.y = 0.0f;
    data->v1.z = data->v2.z = data->v3.z = 0.0f;

    if (arg3 == 0.0f) {
        data->v2.y = arg4;
        data->v3.z = arg5;
    } else if (arg4 == 0.0f) {
        data->v2.x = arg3;
        data->v3.z = arg5;
    } else if (arg5 == 0.0f) {
        data->v2.x = arg3;
        data->v3.y = arg4;
    }
    dx = arg3 / 3.0;
    data->v1.x -= dx;
    data->v2.x -= dx;
    data->v3.x -= dx;
    dy = arg4 / 3.0;
    data->v1.y -= dy;
    data->v2.y -= dy;
    data->v3.y -= dy;
    dz = arg5 / 3.0;
    data->v1.z -= dz;
    data->v2.z -= dz;
    data->v3.z -= dz;

    data->color.r = argA;
    data->color.g = argB;
    data->color.b = argC;

    effect->pos.x = data->pos.x = posX + dx;
    effect->pos.y = data->pos.y = posY + dy;
    effect->pos.z = data->pos.z = posZ + dz;

    effect->vel.x = arg6;
    effect->vel.y = arg7;
    effect->vel.z = arg8;

    effect->sizeX = 0;
    posX = RANDOM(-30, 30);
    if (ABS2(posX) < 18.0f) {
        posX = posX > 0 ? posX + 18.0f : posX - 18.0f;
    }
    effect->sizeY = posX;

    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / arg9;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_TypeBB_Init.s")
void Effect_TypeBB_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u8 argA, u8 argB, u8 argC);
#endif

void Effect_TypeBC_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;

    setPrimColor(220, 255, 255, (1.0f - effect->lifeTime) * 255.0f);
    guAlign(&mtx, 0.0f, 0.0f, 100.0f, 0.0f);
    func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, effect->vel.y, effect->vel.y, 0.0f, SPRITE_SMOKE_CIRCLE);
    if (D_800F687C > 0) {
        effect->vel.y += effect->vel.x;
        effect->lifeTime += effect->duration;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeBC_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeBC_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg4;
    effect->vel.y = arg3;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeBD_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    f32 sp34;

    sp34 = effect->sizeX * (1.0f - effect->lifeTime);
    setPrimColor(255, 255, 255, 212.0f - effect->lifeTime * 212.0f);
    guAlign(&mtx, 0.0f, 0.0f, 100.0f, 0.0f);
    func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, sp34, sp34 * 0.6f, 0.0f, SPRITE_PUFF);
    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        effect->pos.x += effect->vel.x;
        effect->pos.z += effect->vel.z;
        if (effect->lifeTime >= 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeBD_Init(f32 posX, f32 posY, f32 posZ, f32 duration, f32 arg4, f32 velX, f32 velZ) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeBD_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = velX;
    effect->vel.z = velZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
    effect->sizeX = arg4;
    effect->sizeY = 0;
}

void Effect_TypeBE_Update(Effect* effect, Gfx** pGfxPos) {

    setPrimColor(220, 255, 255, 144);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, 16.0f, 16.0f, 0.0f, SPRITE_PUFF);
    if (D_800F687C > 0) {
        effect->pos.x += effect->vel.x;
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z;
        effect->vel.y -= 6.0f;
        if (effect->pos.y < effect->duration) {
            Effect_TypeBC_Init(effect->pos.x, effect->duration + 10.0f, effect->pos.z, 32.0f, 10.0f, 8.0f);
            Effect_Free(effect);
        }
    }
}

void Effect_TypeBE_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeBE_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->duration = posY;
    effect->lifeTime = 0.0f;
    arg3 += 90.0f;
    effect->vel.x = sinf(arg3 * 0.01745329251994) * cosf(arg4 * 0.01745329251994) * arg5;
    effect->vel.y = arg5;
    effect->vel.z = cosf(arg3 * 0.01745329251994) * cosf(arg4 * 0.01745329251994) * arg5;
    effect->lifeTime = 0.0f;
}

void Effect_TypeBF_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeBF_Data* data = (Effect_TypeBF_Data*)effect->data;
    f32 size;

    size = effect->spriteID + effect->lifeTime * effect->spriteID;
    setPrimColor(data->color.r, data->color.g, data->color.b, 255.0f - effect->lifeTime * 255.0f);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, size, size, 0.0f, SPRITE_PUFF);
    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        effect->pos.x += effect->vel.x * (1.0f - effect->lifeTime);
        effect->pos.y += effect->vel.y;
        effect->pos.z += effect->vel.z * (1.0f - effect->lifeTime);
        effect->vel.y += 0.3f;
        if (effect->lifeTime >= 1) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeBF_Init(f32 posX, f32 posY, f32 posZ, f32 velV, f32 yaw, f32 velH, f32 arg6, f32 duration, u8 colorR, u8 colorG, u8 colorB) {
    Effect* effect;
    Effect_TypeBF_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeBF_Data), &Effect_TypeBF_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeBF_Data*)effect->data;
    data->color.r = colorR;
    data->color.g = colorG;
    data->color.b = colorB;

    effect->spriteID = arg6;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = sinf(yaw * 0.01745329251994) * velH;
    effect->vel.y = velV;
    effect->vel.z = cosf(yaw * 0.01745329251994) * velH;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeBG_Update(Effect* effect, Gfx** pGfxPos) {
    f32 size = effect->sizeX + effect->sizeX * effect->lifeTime;
    f32 sp30 = 1.0f - effect->lifeTime;

    setPrimColor(255, 255, 255, 128.0f - (effect->lifeTime - 0.5f) * 255.0f);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, size, size * 0.7, 0.0f, SPRITE_PUFF);
    if (D_800F687C > 0) {
        effect->pos.x += effect->vel.x * sp30;
        effect->pos.y = effect->sizeY + effect->vel.y * effect->lifeTime;
        effect->pos.z += effect->vel.z * sp30;
        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 1) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeBG_Init(f32 posX, f32 posY, f32 posZ, f32 velV, f32 yaw, f32 size, f32 velH, f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeBG_Update);
    if (effect == NULL) {
        return;
    }

    effect->sizeX = size;
    effect->sizeY = posY;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = sinf(yaw * 0.01745329251994) * velH;
    effect->vel.y = velV;
    effect->vel.z = cosf(yaw * 0.01745329251994) * velH;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

void Effect_TypeBH_Update(Effect* effect, Gfx** pGfxPos) {
    Mtx mtx;
    f32 f2 = ABS2(effect->lifeTime - 0.5f);

    setPrimColor(effect->vel.x, effect->vel.y, effect->vel.z, effect->sizeY - f2 * (effect->sizeY * 2));
    guAlign(&mtx, 0.0f, 0.0f, 100.0f, 0.0f);
    func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, effect->sizeX, effect->sizeX, 0.0f, SPRITE_PUFF);
    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 1.0f) {
            Effect_Free(effect);
        }
    }
}

void Effect_TypeBH_Init(f32 posX, f32 posY, f32 posZ, f32 size, f32 duration, RGBA32* color) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeBH_Update);
    if (effect == NULL) {
        return;
    }

    effect->sizeX = size;
    effect->sizeY = color->a;
    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = color->r;
    effect->vel.y = color->g;
    effect->vel.z = color->b;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

#ifdef NON_MATCHING
void Effect_TypeBI_Update(Effect* effect, Gfx** pGfxPos) {
    Effect_TypeBI_Data* data = (Effect_TypeBI_Data*)effect->data;
    Mtx mtx;

    SetTextGradient(data->unk_00[0].r, data->unk_00[0].g, data->unk_00[0].b, data->unk_00[0].a - ABS2((effect->lifeTime - 0.5f) * data->unk_00[0].a * 2),
                    data->unk_00[1].r, data->unk_00[1].g, data->unk_00[1].b, data->unk_00[1].a - ABS2((effect->lifeTime - 0.5f) * data->unk_00[1].a * 2),
                    data->unk_00[2].r, data->unk_00[2].g, data->unk_00[2].b, data->unk_00[2].a - ABS2((effect->lifeTime - 0.5f) * data->unk_00[2].a * 2),
                    data->unk_00[3].r, data->unk_00[3].g, data->unk_00[3].b, data->unk_00[3].a - ABS2((effect->lifeTime - 0.5f) * data->unk_00[3].a * 2));
    if (gCurrentZone >= 4) {
        setPrimColor(data->unk_00->r, data->unk_00->g, data->unk_00->b, data->unk_00->a - ABS2((effect->lifeTime - 0.5f) * data->unk_00->a * 2));
        guAlign(&mtx, 0.0f, 0.0f, 100.0f, 0.0f);
        func_80058BE4(&mtx, effect->pos.x, effect->pos.y, effect->pos.z, data->size, data->size, 0.0f, SPRITE_PUFF);
    } else {
        func_80059F28(effect->pos.x, effect->pos.y, effect->pos.z, 0.0f, 1.0f, data->size, data->size, effect->lifeTime, SPRITE_PUFF);
    }
    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 1.0f) {
            Effect_Free(effect);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_TypeBI_Update.s")
void Effect_TypeBI_Update(Effect* effect, Gfx** pGfxPos);
#endif

void Effect_TypeBI_Init(f32 posX, f32 posY, f32 posZ, f32 size, f32 duration, RGBA32* colors) {
    Effect* effect;
    Effect_TypeBI_Data* data;

    effect = Effect_Alloc(0, sizeof(Effect_TypeBI_Data), &Effect_TypeBI_Update);
    if (effect == NULL) {
        return;
    }

    data = (Effect_TypeBI_Data*)effect->data;
    data->unk_00 = colors;
    data->size = size;

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

#ifdef NON_MATCHING
void Effect_TypeBJ_Update(Effect* effect, Gfx** pGfxPos) {
    f32 size = effect->vel.x * (1.0f - effect->lifeTime);
    setPrimColor(255.0f * (1.0f - effect->lifeTime),
                 255.0f * (1.0f - effect->lifeTime),
                 255.0f * (1.0f - effect->lifeTime),
                 255.0f - effect->lifeTime * 128.0f);
    func_8005747C(effect->pos.x, effect->pos.y, effect->pos.z, size, size, 0.0f, SPRITE_PUFF);
    if (D_800F687C > 0) {
        effect->lifeTime += effect->duration;
        if (effect->lifeTime > 1.0f) {
            Effect_Free(effect);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Effect_TypeBJ_Update.s")
void Effect_TypeBJ_Update(Effect* effect, Gfx** pGfxPos);
#endif

void Effect_TypeBJ_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 duration) {
    Effect* effect;

    effect = Effect_Alloc(0, 0, &Effect_TypeBJ_Update);
    if (effect == NULL) {
        return;
    }

    effect->pos.x = posX;
    effect->pos.y = posY;
    effect->pos.z = posZ;
    effect->vel.x = arg3;
    effect->lifeTime = 0.0f;
    effect->duration = 1.0f / duration;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007A2D8.s")

Gfx* func_8007ABDC(Gfx* arg0) {
    return arg0;
}

void func_8007ABE4(void) {
    D_800FEA30 = 0;
    D_800FEA34 = 0;
}

void func_8007ABF8(bf8* arg0) {
    if ((D_800FEA30 > 0) && (D_800FEA30 < 3)) {
        arg0->unk0 = 0;
        arg0->unk2 = 0;
        arg0->unk4 = 0;
        arg0->unk6 = 0;
        arg0->unk8 = 0;
    }
}

void func_8007AC2C(s32* arg0) {
    if ((D_800FEA30 > 0) && (D_800FEA30 < 3)) {
        gPlayerActors->groundMovement = 1;
        *arg0 += 10;
    }
}

// func_8007AC60(Camera* PlayerActor*)
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007AC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007ADDC.s")

void func_8007AF30(void) {
    func_8007ADDC(0);
    LoadSprite(SPRITE_ANIM1);
}

void func_8007AF58(void) {
    FreeSprite(SPRITE_ANIM1);
    func_8007ADDC(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007AF80.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/Rumble_Tick.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007B174.s")

void Rumble_StopAll(void) {
    OSPfs* gRumblePfsTemp = gRumblePfs;
    s32 i;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        if (D_80176960[i] == 0) {
            continue;
        }

        osMotorStop(&gRumblePfs[i]);
        gUnkRumbleArray[i] = 0;
        D_80176980[i] = 0;
    }
}

void Rumble_AddTime(s32 arg0, s32 arg1) {
    if (D_80176960[arg0] != 0) {
        if (arg1 < 0) {
            osMotorStop(&gRumblePfs[arg0]);
            return;
        }
        gRumbleTime[arg0] += arg1;
    }
}

void func_8007B38C(void) {
    D_800FE018 = 0.0f;
    D_800FE01C = 0.0f;
    D_800FE020 = 0.0f;
    D_800FE024 = 0.0f;
    D_800FE028 = 0.0f;
    D_800FE02C = 0.0f;
    D_800FE048 = 0.0f;
    D_800FE04C = 0.0f;
    D_800FE050 = 0.0f;
    D_800FE054 = 0.0f;
    D_800FE058 = 0.0f;
    D_800FE05C = 0.0f;
    D_800FE030 = 0.0f;
    D_800FE034 = 0.0f;
    D_800FE038 = 0.0f;
    D_800FE03C = 0.0f;
    D_800FE040 = 0.0f;
    D_800FE044 = 0.0f;
    D_800FE060 = 1.3333334f;
}

void func_8007B434(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_800FE018 = arg0;
    D_800FE01C = arg1;
    D_800FE020 = arg2;
    D_800FE024 = arg3;
    D_800FE028 = arg4;
    D_800FE02C = arg5;
}

void func_8007B480(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_800FE030 = arg0;
    D_800FE034 = arg1;
    D_800FE038 = arg2;
    D_800FE03C = arg3;
    D_800FE040 = arg4;
    D_800FE044 = arg5;
}

void func_8007B4CC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_800FE048 = arg0;
    D_800FE04C = arg1;
    D_800FE050 = arg2;
    D_800FE054 = arg3;
    D_800FE058 = arg4;
    D_800FE05C = arg5;
}

void func_8007B518(f32 arg0) {
    D_800FE060 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007B524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007BCE0.s")

void func_8007C494(void) {
    gTrainingState = 0;
    gTrainingRoomTimer = 0;
    gTrainingStateTmer = 0;
    D_800FEB98 = 1;
    D_800FEB9C = -1;
}

void func_8007C4C8(void) {
    gTrainingState = 5;
    gTrainingRoomTimer = 0;
    gTrainingStateTmer = 0;
    D_800FEB98 = 1;
    D_800FEB9C = -1;
}

s32 func_8007C500(void) {
    if (gTrainingState == 1) {
        return 1;
    }
    else if (gTrainingState >= 2) {
        return 2;
    }
    else {
        return 0;
    }
}

void PrintTimer(s32 arg0, f32 arg1) {
    func_800610A8();
    SetTextGradient_TopBottom(191, 10, 0, 255, 200, 200, 0, 255);
    printNumber((0 * arg1) + 192, 20, 0, arg1, (arg0 / 1800) % 60, 2, 0);
    PrintTextWrapper((32 * arg1) + 192, 20, 0, arg1 * 0.8, "：", 1);
    printNumber((48 * arg1) + 192, 20, 0, arg1, (arg0 / 30) % 60, 2, 0);
    PrintTextWrapper((80 * arg1) + 192, 20, 0, arg1, "’", 1);
    printNumber((96 * arg1) + 192, 20, 0, arg1, ((arg0 % 30) * 100) / 30, 2, 0);
    PrintTextWrapper((128 * arg1) + 192, 20, 0, arg1, "”", 1);
    func_800610B8();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007C7FC.s")

void func_8007CDBC(void) {
    StageFlags[1] = 0;
    StageFlags[2] = 0;
    PlayBGM(BGM_TRAINING);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007CDEC.s")

void func_8007DFDC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {

}
//prints textbox. arg2= char[3][30]*
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printTextbox.s")

void func_8007E5E8(void) {
    if (D_800FE000 == 0) {
        PrintReset();
        D_800FEBB4 = 0.0f;
        D_800FEBB8 = 0.0f;
        D_800FEBBC = 0.0f;
        D_800FEBC0 = 0.0f;
        D_800FEBC4 = 0;
        D_800FEBC8 = 0;
        D_800FEBCC = 0;
        D_800FEBD0 = -1.0f;
        D_80176F50 = 0.0f;
        D_800FEBD4.x = 0.0f;
        D_800FEBD4.y = 0.0f;
        D_800FEBD4.z = 0.0f;
        D_800FEBD4.yaw = 0.0f;
    }
}

void func_8007E684(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    D_800FEBD4.x = arg0;
    D_800FEBD4.y = arg1;
    D_800FEBD4.z = arg2;
    D_800FEBD4.yaw = arg3;
    D_80176F50 = arg4;
}

void func_8007E6BC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5, u8 arg6) {
    D_800FEBB4 = arg0;
    D_800FEBB8 = arg1;
    D_800FEBBC = arg2;
    D_800FEBC0 = arg3;
    D_800FEBC4 = arg4;
    D_800FEBC8 = arg5;
    D_800FEBCC = arg6;
}

void func_8007E714(f32 arg0) {
    D_800FEBD0 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007E720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/printNumber.s")

//prints number at (x,y) on screen, turns red if negative.
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/PrintNumberWR.s")

//another "print number on screen" func,exclusive to bowling score card
#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/PrintNumberBowling.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8007FB60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080318.s")

void PrintTextWrapper(f32 arg0, f32 arg1, f32 arg2, f32 arg3, char* txt, s32 font) {
    PrintText(arg0, arg1, arg2, arg3, 0.0f, 0.0f, txt, font);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/PrintText.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80080F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_8008265C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80082714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_800836FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80083B28.s")

void func_80083F08(void) {
}

void func_80083F10(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80083F18.s")

void func_80084788(void) {
    D_800F6880 = 0;
    func_80055C04();
    func_8007AF80();
    func_8007C494();
    D_800FEA18 = 0.0f;
    D_800FEA1C = 0.0f;
    D_80176B70 = gTongues;
    D_80176B74 = gPlayerActors;
    D_80176B78 = gCamera;
    if ((gGameModeCurrent == 0) && ((u32)D_80168DA0 == 1)) {
        Effect_HealthBar_Init(0x10, 0x10, &gPlayerActors[0].hp, &D_800FEDB8, gPlayerActors[0].hp, 0);
        func_800634D4(0xF0, 0x10, &currentStageCrowns, &D_800FEDB8, 2, 0);
    }
    D_800FEDB4 = 1;
    ResetEyeParams();
    func_800667A8();
}

Gfx* func_80084884(Gfx* arg0) {
    if (gCurrentStage == STAGE_TRAINING) {
        func_8007CDEC();
    }
    if (((u32)D_80168DA0 == 1) && (D_800FEDB4 == 1) && (isInOverworld == FALSE) && (gGameModeCurrent == 0)) {
        if ((u32)D_80176B78->unk0 == 1) {
            func_800612F0(1);
            printUISprite(24.0f, 208.0f, 0.0f, 0.0f, 1.0f, 24.0f, 16.0f, 0.0f, SPRITE_CAMERA);
        } else {
            func_800612F0(0);
            printUISprite(24.0f, 208.0f, 0.0f, 0.0f, 1.0f, 24.0f, 16.0f, 0.0f, SPRITE_CAMERA);
        }
    }
    func_80069734();
    Rumble_Tick();
    Effect_UpdateAll(&arg0);
    return arg0;
}

Gfx* func_800849D4(Gfx* arg0) {
    return arg0;
}

void func_800849DC(s32 arg0, Tongue* playerTongue, PlayerActor* player, Camera* cam) {
    func_80056F48(arg0, playerTongue, player, cam);
    D_800F6880 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/sprite/func_80084A04.s")
