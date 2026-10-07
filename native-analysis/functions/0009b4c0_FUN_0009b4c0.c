/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b4c0 FUN_0009b4c0 */

void FUN_0009b4c0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *__s;
  int iVar4;
  int iVar5;
  undefined4 *local_238;
  undefined4 *local_234;
  undefined4 *local_230;
  char acStack_22c [512];
  int local_2c;
  
  iVar4 = DAT_0009b610;
  iVar1 = DAT_0009b5f8;
  iVar3 = DAT_0009b5f4 + 0x9b4d0;
  local_2c = **(int **)(iVar3 + DAT_0009b5f8);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    local_238 = *(undefined4 **)(iVar3 + DAT_0009b610);
    FUN_0009a720(param_1 + 0x20,&local_238);
    if (param_2 != 0) {
      __s = local_238 + 2;
      sVar2 = strlen((char *)__s);
      FUN_0009f224(param_2,__s,sVar2);
    }
    if (param_4 != 0) {
      FUN_00099e28(param_4,local_238 + 2,*local_238);
    }
    local_230 = local_238;
    if (local_238 == *(undefined4 **)(iVar3 + iVar4)) goto LAB_0009b590;
  }
  else {
    if (param_2 != 0) {
      FUN_0009f224(param_2,DAT_0009b5fc + 0x9b4f4,1);
    }
    if (0 < param_3) {
      iVar4 = 0;
      iVar5 = DAT_0009b600 + 0x9b506;
      do {
        if (param_2 != 0) {
          FUN_0009f224(param_2,iVar5,4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != param_3);
    }
    if (param_2 != 0) {
      sprintf(acStack_22c,(char *)(DAT_0009b604 + 0x9b528),*(int *)(param_1 + 0x20) + 8);
      sVar2 = strlen(acStack_22c);
      FUN_0009f224(param_2,acStack_22c,sVar2);
    }
    if (param_4 == 0) goto LAB_0009b590;
    FUN_00099e68(&local_230,DAT_0009b608 + 0x9b54e,param_1 + 0x20);
    iVar4 = DAT_0009b610;
    FUN_00099ef0(&local_234,&local_230,DAT_0009b60c + 0x9b55c);
    FUN_00099e28(param_4,local_234 + 2,*local_234);
    if ((local_234 != *(undefined4 **)(iVar3 + iVar4)) && (local_234 != (undefined4 *)0x0)) {
      operator_delete__(local_234);
    }
    if (local_230 == *(undefined4 **)(iVar3 + iVar4)) goto LAB_0009b590;
  }
  if (local_230 != (undefined4 *)0x0) {
    operator_delete__(local_230);
  }
LAB_0009b590:
  if (local_2c != **(int **)(iVar3 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



