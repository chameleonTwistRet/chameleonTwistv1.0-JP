#include "common.h"

s32 func_800E2BE0();
void func_800E2C00(s32);
extern unk_80109E94* D_80109E94;

void func_800DC840(f32 arg0) {
    register s32 temp_s0 = func_800E2BE0(); //interrupts off
    (D_80109E94)->unk_24 = arg0;
    (D_80109E94)->flags |= 4;
    func_800E2C00(temp_s0); //interrupts on
}