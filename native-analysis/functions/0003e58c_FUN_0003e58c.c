/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e58c FUN_0003e58c */

void FUN_0003e58c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_000a3a68();
  iVar1 = FUN_00094c30();
  iVar3 = DAT_0003e5fc + 0x3e5a0;
  if (iVar1 == 1) {
    FUN_000a3a68();
    iVar1 = FUN_000a5274();
    if (iVar1 == 0) {
      uVar2 = FUN_000a3a68();
      FUN_000a44e0(uVar2,0);
    }
  }
  else {
    iVar1 = FUN_0006e1b4();
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar3 + DAT_0003e600);
      if (*(char *)(iVar1 + 0x19c) == '\0') {
        uVar2 = FUN_000a3a68();
        iVar3 = FUN_00094c90(uVar2,1);
        if (iVar3 != 0) {
          *(undefined *)(iVar1 + 0x19c) = 1;
          FUN_000a3a68();
          FUN_00094c8c();
          *(undefined *)(param_1 + 0xcc) = 1;
          if (*(int *)(param_1 + 0xe0) != 0) {
            *(undefined *)(*(int *)(param_1 + 0xe0) + 0x27) = 1;
            *(undefined4 *)(param_1 + 0xe0) = 0;
          }
        }
      }
    }
  }
  return;
}



