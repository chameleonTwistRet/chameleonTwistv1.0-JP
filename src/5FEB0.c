#include "common.h"

void func_800D99D0(s32*, s32, void*, s32, s32*, s32);
void func_800D9B20(s32*);
extern s16 D_800FF5C4;
extern s32 D_800FF5C8;
extern s32 D_801B1EF0;
extern s32 D_801B30A0;
s32 func_80084B30(void);

void func_80084AB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad;
}

void func_80084ACC(void) {
    D_800FF5C4 = 0;
    D_800FF5C8 = 0;
    func_800D99D0(&D_801B1EF0, 5, &func_80084B30, 0, &D_801B30A0, 100);
    func_800D9B20(&D_801B1EF0);
}
