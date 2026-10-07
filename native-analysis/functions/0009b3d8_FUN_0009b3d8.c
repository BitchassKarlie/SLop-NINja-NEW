/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b3d8 FUN_0009b3d8 */

void FUN_0009b3d8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_234;
  void *local_230;
  char acStack_22c [512];
  int local_2c;
  
  iVar1 = DAT_0009b4a8;
  iVar3 = DAT_0009b4a4 + 0x9b3e8;
  local_2c = **(int **)(iVar3 + DAT_0009b4a8);
  if (0 < param_3) {
    iVar4 = 0;
    iVar5 = DAT_0009b4ac + 0x9b406;
    do {
      if (param_2 != 0) {
        FUN_0009f224(param_2,iVar5,4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != param_3);
  }
  if (param_2 != 0) {
    sprintf(acStack_22c,(char *)(DAT_0009b4b0 + 0x9b428),*(int *)(param_1 + 0x20) + 8);
    sVar2 = strlen(acStack_22c);
    FUN_0009f224(param_2,acStack_22c,sVar2);
  }
  if (param_4 != 0) {
    FUN_00099e68(&local_230,DAT_0009b4b4 + 0x9b44e,param_1 + 0x20);
    FUN_00099ef0(&local_234,&local_230,DAT_0009b4b8 + 0x9b45c);
    FUN_00099e28(param_4,local_234 + 2,*local_234);
    iVar4 = DAT_0009b4bc;
    if ((local_234 != *(undefined4 **)(iVar3 + DAT_0009b4bc)) && (local_234 != (undefined4 *)0x0)) {
      operator_delete__(local_234);
    }
    if ((local_230 != *(void **)(iVar3 + iVar4)) && (local_230 != (void *)0x0)) {
      operator_delete__(local_230);
    }
  }
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



