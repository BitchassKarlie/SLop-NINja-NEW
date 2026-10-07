/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002224c FUN_0002224c */

int FUN_0002224c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0007e454();
  iVar2 = FUN_0007d7f8(uVar1,param_2);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar1 = FUN_0007e454();
      FUN_0007d8e8(uVar1,*(undefined4 *)(param_1 + 0x40));
    }
    uVar1 = FUN_0007e454();
    uVar1 = FUN_0007da40(uVar1,param_2,0);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    iVar2 = 1;
  }
  return iVar2;
}



