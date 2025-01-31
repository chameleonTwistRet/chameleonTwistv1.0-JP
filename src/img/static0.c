#include "common.h"

Mtx static0_mtx00_Mtx = IDENTITY;

Mtx static0_mtx01_Mtx = IDENTITY;

unsigned char static0_star_rgba32_PNG[] = {
#include "build/assets/img/static0/star.rgba32.png.inc.c"
};

Gfx static0_spriteController_Gfx[] = {
    #include "assets/img/static0/spriteController.gfx.inc.c"
};

Gfx static0_spriteController2_Gfx[] = {
    #include "assets/img/static0/spriteController2.gfx.inc.c"
};

Gfx static0_spriteController3_Gfx[] = {
    #include "assets/img/static0/spriteController3.gfx.inc.c"
};

Gfx static0_spriteController4_Gfx[] = {
    #include "assets/img/static0/spriteController4.gfx.inc.c"
};

Gfx static0_spriteController11_Gfx[] = {
    #include "assets/img/static0/spriteController11.gfx.inc.c"
};

Gfx static0_spriteController5_Gfx[] = {
    #include "assets/img/static0/spriteController5.gfx.inc.c"
};

Gfx static0_spriteController12_Gfx[] = {
    #include "assets/img/static0/spriteController12.gfx.inc.c"
};

Gfx static0_spriteController6_Gfx[] = {
    #include "assets/img/static0/spriteController6.gfx.inc.c"
};

Gfx static0_spriteController7_Gfx[] = {
    #include "assets/img/static0/spriteController7.gfx.inc.c"
};

Gfx static0_spriteController8_Gfx[] = {
    #include "assets/img/static0/spriteController8.gfx.inc.c"
};

Gfx static0_spriteController9_Gfx[] = {
    #include "assets/img/static0/spriteController9.gfx.inc.c"
};

Gfx static0_spriteController10_Gfx[] = {
    #include "assets/img/static0/spriteController10.gfx.inc.c"
};
unsigned char static0_Pad1[] = FILEPAD;
unsigned char static0_health_ci8_PNG[] = {
#include "build/assets/img/static0/health.ci8.png.inc.c"
};
unsigned char static0_Pad2[] = FILEPAD;
unsigned char static0_health_ci8_PAL[] = {
#include "build/assets/img/static0/health.ci8.pal.inc.c"
};
unsigned char static0_Pad3[] = FILEPAD;
unsigned char static0_bar_ci4_PNG[] = {
#include "build/assets/img/static0/bar.ci4.png.inc.c"
};
unsigned char static0_Pad4[] = FILEPAD;
unsigned char static0_bar_ci4_PAL[] = {
#include "build/assets/img/static0/bar.ci4.pal.inc.c"
};
unsigned char static0_Pad5[] = FILEPAD;
unsigned char static0_textBig_ia8_PNG[] = {
#include "build/assets/img/static0/textBig.ia8.png.inc.c"
};
unsigned char static0_Pad6[] = FILEPAD;
unsigned char static0_textSmall_ia4_PNG[] = {
#include "build/assets/img/static0/textSmall.ia4.png.inc.c"
};
unsigned char static0_Pad7[] = FILEPAD;
unsigned char static0_puff_ia8_PNG[] = {
#include "build/assets/img/static0/puff.ia8.png.inc.c"
};
unsigned char static0_Pad8[] = FILEPAD;
unsigned char static0_star2_ia4_PNG[] = {
#include "build/assets/img/static0/star2.ia4.png.inc.c"
};
unsigned char static0_Pad9[] = FILEPAD;
unsigned char static0_camera_ia8_PNG[] = {
#include "build/assets/img/static0/camera.ia8.png.inc.c"
};
unsigned char static0_Pad10[] = FILEPAD;
unsigned char static0_explode_ia4_PNG[] = {
#include "build/assets/img/static0/explode.ia4.png.inc.c"
};

Lights1 static0_groupLights_Light = 
    #include "assets/img/static0/groupLights.light.inc.c"

Vtx static0_vtx1_Vtx[] = {
    #include "assets/img/static0/vtx1.vtx.inc.c"
};

Mtx static0_mtx1_Mtx = IDENTITY;

unsigned char static0_Pad11[] = FILEPAD;
unsigned char static0_sand_ci4_PNG[] = {
#include "build/assets/img/static0/sand.ci4.png.inc.c"
};
unsigned char static0_Pad12[] = FILEPAD;
unsigned char static0_sand_ci4_PAL[] = {
#include "build/assets/img/static0/sand.ci4.pal.inc.c"
};

Gfx static0_gfx1_Gfx[] = {
    #include "assets/img/static0/gfx1.gfx.inc.c"
};

Vtx static0_vtx2_Vtx[] = {
    #include "assets/img/static0/vtx2.vtx.inc.c"
};

Mtx static0_mtx2_Mtx = IDENTITY;

unsigned char static0_sandSplash_ci8_PNG[] = {
#include "build/assets/img/static0/sandSplash.ci8.png.inc.c"
};
unsigned char static0_sandSplash_ci8_PAL[] = {
#include "build/assets/img/static0/sandSplash.ci8.pal.inc.c"
};

Gfx static0_gfx2_Gfx[] = {
    #include "assets/img/static0/gfx2.gfx.inc.c"
};

Vtx static0_vtx3_Vtx[] = {
    #include "assets/img/static0/vtx3.vtx.inc.c"
};

Mtx static0_mtx3_Mtx = IDENTITY;

Gfx static0_gfx3_Gfx[] = {
    #include "assets/img/static0/gfx3.gfx.inc.c"
};

Vtx static0_vtx4_Vtx[] = {
    #include "assets/img/static0/vtx4.vtx.inc.c"
};

Mtx static0_mtx4_Mtx = IDENTITY;

unsigned char static0_Pad13[] = FILEPAD;
unsigned char static0_fogFade_ia8_PNG[] = {
#include "build/assets/img/static0/fogFade.ia8.png.inc.c"
};

Gfx static0_gfx4_Gfx[] = {
    #include "assets/img/static0/gfx4.gfx.inc.c"
};

//old gfx segment that got cut off??
#include "build/assets/img/static0/gfxNew.inc.c"

extern u8 gfxZBuffer[];

Gfx static0_UnkStatic0_Gfx[] = {
    gsDPSetCycleType(G_CYC_FILL),
    gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
    gsDPSetDepthImage(OS_K0_TO_PHYSICAL(gfxZBuffer)),
    gsDPSetColorImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, OS_K0_TO_PHYSICAL(gfxZBuffer)),
    gsDPSetFillColor(0xFFFCFFFC),
    gsDPFillRectangle(18, 16, 301, 223),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Lights1 static0_groupLights2_Light = 
    #include "assets/img/static0/groupLights2.light.inc.c"

Vtx static0_vtx5_Vtx[] = {
    #include "assets/img/static0/vtx5.vtx.inc.c"
};

Gfx static0_gfx5_Gfx[] = {
    #include "assets/img/static0/gfx5.gfx.inc.c"
};

Vtx static0_vtx6_Vtx[] = {
    #include "assets/img/static0/vtx6.vtx.inc.c"
};

Gfx static0_gfx6_Gfx[] = {
    #include "assets/img/static0/gfx6.gfx.inc.c"
};

Mtx static0_mtx5_Mtx = IDENTITY;

Anim static0_Idle_Animh = {
    #include "assets/img/static0/anim/chameleon/Idle.animH.inc.c"
};

Mtx static0_Idle_Animarr[16][13] = {
    #include "assets/img/static0/anim/chameleon/Idle.animArr.inc.c"
};

Anim static0_Walk_Animh = {
    #include "assets/img/static0/anim/chameleon/Walk.animH.inc.c"
};

Mtx static0_Walk_Animarr[20][13] = {
    #include "assets/img/static0/anim/chameleon/Walk.animArr.inc.c"
};

Anim static0_Run_Animh = {
    #include "assets/img/static0/anim/chameleon/Run.animH.inc.c"
};

Mtx static0_Run_Animarr[20][13] = {
    #include "assets/img/static0/anim/chameleon/Run.animArr.inc.c"
};

Anim static0_unk_Animh = {
    #include "assets/img/static0/anim/chameleon/unk.animH.inc.c"
};

Mtx static0_unk_Animarr[15][13] = {
    #include "assets/img/static0/anim/chameleon/unk.animArr.inc.c"
};

Anim static0_Jump_Animh = {
    #include "assets/img/static0/anim/chameleon/Jump.animH.inc.c"
};

Mtx static0_Jump_Animarr[15][13] = {
    #include "assets/img/static0/anim/chameleon/Jump.animArr.inc.c"
};

Anim static0_Tongue_Animh = {
    #include "assets/img/static0/anim/chameleon/Tongue.animH.inc.c"
};

Mtx static0_Tongue_Animarr[16][13] = {
    #include "assets/img/static0/anim/chameleon/Tongue.animArr.inc.c"
};

Anim static0_Vault_Animh = {
    #include "assets/img/static0/anim/chameleon/Vault.animH.inc.c"
};

Mtx static0_Vault_Animarr[20][13] = {
    #include "assets/img/static0/anim/chameleon/Vault.animArr.inc.c"
};

Anim static0_Spin_Animh = {
    #include "assets/img/static0/anim/chameleon/Spin.animH.inc.c"
};

Mtx static0_Spin_Animarr[14][13] = {
    #include "assets/img/static0/anim/chameleon/Spin.animArr.inc.c"
};

Anim static0_unk2_Animh = {
    #include "assets/img/static0/anim/chameleon/unk2.animH.inc.c"
};

Mtx static0_unk2_Animarr[14][13] = {
    #include "assets/img/static0/anim/chameleon/unk2.animArr.inc.c"
};

Anim static0_LandFromKnockback_Animh = {
    #include "assets/img/static0/anim/chameleon/LandFromKnockback.animH.inc.c"
};

Mtx static0_LandFromKnockback_Animarr[20][13] = {
    #include "assets/img/static0/anim/chameleon/LandFromKnockback.animArr.inc.c"
};

Anim static0_GetupFromKnockback_Animh = {
    #include "assets/img/static0/anim/chameleon/GetupFromKnockback.animH.inc.c"
};

Mtx static0_GetupFromKnockback_Animarr[20][13] = {
    #include "assets/img/static0/anim/chameleon/GetupFromKnockback.animArr.inc.c"
};

Anim static0_unk3_Animh = {
    #include "assets/img/static0/anim/chameleon/unk3.animH.inc.c"
};

Mtx static0_unk3_Animarr[45][13] = {
    #include "assets/img/static0/anim/chameleon/unk3.animArr.inc.c"
};

AnimPointer static0_chameleonAnims[12] = {
{&static0_Idle_Animh.frames, &static0_Idle_Animh.objects, &static0_Idle_Animarr[0][0]},
{&static0_Walk_Animh.frames, &static0_Walk_Animh.objects, &static0_Walk_Animarr[0][0]},
{&static0_Run_Animh.frames, &static0_Run_Animh.objects, &static0_Run_Animarr[0][0]},
{&static0_unk_Animh.frames, &static0_unk_Animh.objects, &static0_unk_Animarr[0][0]},
{&static0_Jump_Animh.frames, &static0_Jump_Animh.objects, &static0_Jump_Animarr[0][0]},
{&static0_Tongue_Animh.frames, &static0_Tongue_Animh.objects, &static0_Tongue_Animarr[0][0]},
{&static0_Vault_Animh.frames, &static0_Vault_Animh.objects, &static0_Vault_Animarr[0][0]},
{&static0_Spin_Animh.frames, &static0_Spin_Animh.objects, &static0_Spin_Animarr[0][0]},
{&static0_unk2_Animh.frames, &static0_unk2_Animh.objects, &static0_unk2_Animarr[0][0]},
{&static0_LandFromKnockback_Animh.frames, &static0_LandFromKnockback_Animh.objects, &static0_LandFromKnockback_Animarr[0][0]},
{&static0_GetupFromKnockback_Animh.frames, &static0_GetupFromKnockback_Animh.objects, &static0_GetupFromKnockback_Animarr[0][0]},
{&static0_unk3_Animh.frames, &static0_unk3_Animh.objects, &static0_unk3_Animarr[0][0]}
};
