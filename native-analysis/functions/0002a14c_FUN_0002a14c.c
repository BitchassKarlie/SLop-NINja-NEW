/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a14c FUN_0002a14c */

void FUN_0002a14c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = FUN_0007e454();
    FUN_0007d8e8(uVar1,*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 0x200) != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(FUN_0002a1b4 + DAT_0002a1ac + 6) == 2) {
      FUN_00028688(param_1 + 0x48,0x3f800000);
    }
    iVar2 = DAT_0002a1b0;
    if (*(char *)(DAT_0002a1b0 + 0x2a20c) != '\0') {
      uVar1 = FUN_0007e454();
      iVar2 = FUN_0007da40(uVar1,*(undefined4 *)(iVar2 + 0x2a210),0);
      *(int *)(param_1 + 0x3c) = iVar2;
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 0x44) = 1;
      }
    }
  }
  return;
}



