/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c824 FUN_0009c824 */

void FUN_0009c824(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puStack_434;
  undefined4 *local_430;
  char acStack_42c [1024];
  int local_2c;
  
  iVar2 = DAT_0009c9b8;
  iVar1 = DAT_0009c9b4;
  iVar7 = DAT_0009c9b0 + 0x9c834;
  puStack_434 = *(undefined4 **)(iVar7 + DAT_0009c9b8);
  local_2c = **(int **)(iVar7 + DAT_0009c9b4);
  local_430 = puStack_434;
  FUN_0009a720(param_1 + 0x14,&local_430);
  FUN_0009a720(param_1 + 0x18,&puStack_434);
  piVar4 = *(int **)(param_1 + 0x18);
  if ((*piVar4 != 0) && (*(char *)(piVar4 + 2) != '\0')) {
    piVar5 = piVar4 + 2;
    if (*(char *)(piVar4 + 2) == '\"') {
      iVar6 = 0;
    }
    else {
      do {
        piVar5 = (int *)((int)piVar5 + 1);
        if (*(char *)piVar5 == '\0') goto LAB_0009c87e;
      } while (*(char *)piVar5 != '\"');
      iVar6 = (int)piVar5 - (int)(piVar4 + 2);
    }
    if (**(int **)(iVar7 + DAT_0009c9c8) != iVar6) {
      if (param_2 != 0) {
        sprintf(acStack_42c,(char *)(DAT_0009c9cc + 0x9c964),local_430 + 2,puStack_434 + 2);
      }
      if (param_4 != 0) {
        FUN_00099e28(param_4,local_430 + 2,*local_430);
        FUN_00099e28(param_4,DAT_0009c9d0 + 0x9c986,2);
        FUN_00099e28(param_4,puStack_434 + 2,*puStack_434);
        FUN_00099e28(param_4,DAT_0009c9d4 + 0x9c9a2,1);
      }
      goto LAB_0009c8d0;
    }
  }
LAB_0009c87e:
  if (param_2 != 0) {
    sprintf(acStack_42c,(char *)(DAT_0009c9bc + 0x9c892),local_430 + 2,puStack_434 + 2);
  }
  if (param_4 != 0) {
    FUN_00099e28(param_4,local_430 + 2,*local_430);
    FUN_00099e28(param_4,DAT_0009c9c0 + 0x9c8b2,2);
    FUN_00099e28(param_4,puStack_434 + 2,*puStack_434);
    FUN_00099e28(param_4,DAT_0009c9c4 + 0x9c8ce,1);
  }
LAB_0009c8d0:
  if (param_2 != 0) {
    sVar3 = strlen(acStack_42c);
    FUN_0009f224(param_2,acStack_42c,sVar3);
  }
  if ((puStack_434 != *(undefined4 **)(iVar7 + iVar2)) && (puStack_434 != (undefined4 *)0x0)) {
    operator_delete__(puStack_434);
  }
  if ((local_430 != *(undefined4 **)(iVar7 + iVar2)) && (local_430 != (undefined4 *)0x0)) {
    operator_delete__(local_430);
  }
  if (local_2c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



