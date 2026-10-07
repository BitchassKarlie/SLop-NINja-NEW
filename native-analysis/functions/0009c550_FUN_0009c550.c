/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c550 FUN_0009c550 */

void FUN_0009c550(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  char acStack_424 [1024];
  int local_24;
  
  iVar1 = DAT_0009c6c8;
  iVar3 = DAT_0009c6c4 + 0x9c560;
  local_24 = **(int **)(iVar3 + DAT_0009c6c8);
  if (param_2 != 0) {
    FUN_0009f224(param_2,DAT_0009c6cc + 0x9c57e,6);
  }
  if (param_4 != 0) {
    FUN_00099e28(param_4,DAT_0009c6d0 + 0x9c58c,6);
  }
  if (**(int **)(param_1 + 0x2c) != 0) {
    if (param_2 != 0) {
      sprintf(acStack_424,(char *)(DAT_0009c6d4 + 0x9c5a6),*(int **)(param_1 + 0x2c) + 2);
      sVar2 = strlen(acStack_424);
      FUN_0009f224(param_2,acStack_424,sVar2);
    }
    if (param_4 != 0) {
      FUN_00099e28(param_4,DAT_0009c6d8 + 0x9c5c6,9);
      FUN_00099e28(param_4,*(undefined4 **)(param_1 + 0x2c) + 2,**(undefined4 **)(param_1 + 0x2c));
      FUN_00099e28(param_4,DAT_0009c6dc + 0x9c5e0,2);
    }
  }
  if (**(int **)(param_1 + 0x30) != 0) {
    if (param_2 != 0) {
      sprintf(acStack_424,(char *)(DAT_0009c6e0 + 0x9c5fa),*(int **)(param_1 + 0x30) + 2);
      sVar2 = strlen(acStack_424);
      FUN_0009f224(param_2,acStack_424,sVar2);
    }
    if (param_4 != 0) {
      FUN_00099e28(param_4,DAT_0009c6e4 + 0x9c61a,10);
      FUN_00099e28(param_4,*(undefined4 **)(param_1 + 0x30) + 2,**(undefined4 **)(param_1 + 0x30));
      FUN_00099e28(param_4,DAT_0009c6e8 + 0x9c634,2);
    }
  }
  if (**(int **)(param_1 + 0x34) != 0) {
    if (param_2 != 0) {
      sprintf(acStack_424,(char *)(DAT_0009c6ec + 0x9c64e),*(int **)(param_1 + 0x34) + 2);
      sVar2 = strlen(acStack_424);
      FUN_0009f224(param_2,acStack_424,sVar2);
    }
    if (param_4 != 0) {
      FUN_00099e28(param_4,DAT_0009c6f0 + 0x9c66e,0xc);
      FUN_00099e28(param_4,*(undefined4 **)(param_1 + 0x34) + 2,**(undefined4 **)(param_1 + 0x34));
      FUN_00099e28(param_4,DAT_0009c6f4 + 0x9c688,2);
    }
  }
  if (param_2 != 0) {
    FUN_0009f224(param_2,DAT_0009c6f8 + 0x9c696,2);
  }
  if (param_4 != 0) {
    FUN_00099e28(param_4,DAT_0009c6fc + 0x9c6a4,2);
  }
  if (local_24 == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



