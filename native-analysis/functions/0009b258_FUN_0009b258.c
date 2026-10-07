/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b258 FUN_0009b258 */

void FUN_0009b258(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  char *unaff_r8;
  undefined4 *local_230;
  char acStack_22c [512];
  int local_2c;
  
  iVar1 = DAT_0009b30c;
  iVar3 = DAT_0009b308 + 0x9b268;
  if (param_3 < 1) {
    unaff_r8 = acStack_22c;
  }
  local_2c = **(int **)(iVar3 + DAT_0009b30c);
  if (0 < param_3) {
    iVar4 = 0;
    unaff_r8 = acStack_22c;
    do {
      if (param_2 != 0) {
        sVar2 = strlen(unaff_r8);
        FUN_0009f224(param_2,unaff_r8,sVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != param_3);
  }
  sprintf(unaff_r8,(char *)(DAT_0009b310 + 0x9b2ac),*(int *)(param_1 + 0x20) + 8);
  if (param_2 != 0) {
    sVar2 = strlen(unaff_r8);
    FUN_0009f224(param_2,unaff_r8,sVar2);
  }
  if (param_4 != 0) {
    FUN_0009a694(&local_230,unaff_r8);
    FUN_00099e28(param_4,local_230 + 2,*local_230);
    if ((local_230 != *(undefined4 **)(iVar3 + DAT_0009b314)) && (local_230 != (undefined4 *)0x0)) {
      operator_delete__(local_230);
    }
  }
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



