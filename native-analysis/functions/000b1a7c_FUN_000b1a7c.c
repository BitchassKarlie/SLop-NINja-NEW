/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1a7c FUN_000b1a7c */

void FUN_000b1a7c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2) * -0x55555555;
  if (uVar1 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * -0x55555555 + 1U) {
    if (uVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = uVar1 + (uVar1 >> 1);
      if (uVar2 <= uVar1) {
        return;
      }
    }
    FUN_000b1a08(param_1,uVar2);
  }
  return;
}



