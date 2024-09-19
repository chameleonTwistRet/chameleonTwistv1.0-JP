#include "common.h"

Anim Animations_unk1Header_Animh = {
    #include "assets/anim/Animations/unk1/unk1Header.animH.inc.c"
};
Mtx Animations_unk1_Animarr[30][13] = {
    #include "assets/anim/Animations/unk1/unk1.animArr.inc.c"
};

Anim Animations_unk2Header_Animh = {
    #include "assets/anim/Animations/unk2/unk2Header.animH.inc.c"
};
Mtx Animations_unk2_Animarr[40][13] = {
    #include "assets/anim/Animations/unk2/unk2.animArr.inc.c"
};

AnimPointer Animations_unk1Pointers_Animp[1] = {
{&Animations_unk1Header_Animh.frames, &Animations_unk1Header_Animh.objects, &Animations_unk1_Animarr[0][0]}
};
AnimPointer Animations_unk2Pointers_Animp[1] = {
{&Animations_unk2Header_Animh.frames, &Animations_unk2Header_Animh.objects, &Animations_unk2_Animarr[0][0]}
};
