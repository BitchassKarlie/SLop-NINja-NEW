/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008b710 FUN_0008b710 */

void FUN_0008b710(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00086780();
  if (*(int *)(iVar1 + 0x250) < 0) {
    iVar1 = FUN_00086780();
    if (*(int *)(param_1 + 0x40) <= *(int *)(iVar1 + 0x250)) {
      uVar2 = FUN_00086780();
      FUN_0008a15c(uVar2,5,0x3e800000,0);
    }
  }
  return;
}



