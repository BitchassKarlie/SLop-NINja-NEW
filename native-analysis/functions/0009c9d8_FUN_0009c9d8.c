/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c9d8 FUN_0009c9d8 */

void FUN_0009c9d8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  void **ppvVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puStack_444;
  void *local_440;
  undefined4 *puStack_43c;
  void *pvStack_438;
  undefined4 *puStack_434;
  void *local_430;
  char acStack_42c [1024];
  int local_2c;
  
  iVar1 = DAT_0009ccd0;
  iVar4 = DAT_0009cccc + 0x9c9ec;
  local_2c = **(int **)(iVar4 + DAT_0009ccd0);
  if (0 < param_3) {
    iVar6 = 0;
    iVar8 = DAT_0009ccd4 + 0x9ca0c;
    do {
      if (param_2 != 0) {
        FUN_0009f224(param_2,iVar8,4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_3);
  }
  sprintf(acStack_42c,(char *)(DAT_0009ccd8 + 0x9ca2a),*(int *)(param_1 + 0x20) + 8);
  if (param_2 != 0) {
    sVar2 = strlen(acStack_42c);
    FUN_0009f224(param_2,acStack_42c,sVar2);
  }
  if (param_4 != 0) {
    FUN_00099ef0(&local_430,param_4,DAT_0009ccdc + 0x9ca52);
    FUN_00099eb0(&puStack_434,&local_430,param_1 + 0x20);
    FUN_00099d70(param_4,puStack_434 + 2,*puStack_434);
    iVar6 = DAT_0009cce0;
    if ((puStack_434 != *(undefined4 **)(iVar4 + DAT_0009cce0)) &&
       (puStack_434 != (undefined4 *)0x0)) {
      operator_delete__(puStack_434);
    }
    if ((local_430 != *(void **)(iVar4 + iVar6)) && (local_430 != (void *)0x0)) {
      operator_delete__(local_430);
    }
  }
  piVar7 = *(int **)(param_1 + 0x4c);
  if ((piVar7 != (int *)(param_1 + 0x2c)) && (piVar7 != (int *)0x0)) {
    iVar6 = DAT_0009cce4 + 0x9cab0;
    iVar8 = DAT_0009cce8 + 0x9cab2;
    do {
      if (param_2 != 0) {
        FUN_0009f224(param_2,iVar6,1);
      }
      if (param_4 != 0) {
        FUN_00099e28(param_4,iVar8,1);
      }
      (**(code **)(*piVar7 + 8))(piVar7,param_2,param_3,param_4);
      piVar7 = (int *)piVar7[8];
    } while ((*(int *)piVar7[6] != 0) || (*(int *)piVar7[5] != 0));
  }
  piVar7 = *(int **)(param_1 + 0x18);
  if (piVar7 == (int *)0x0) {
    if (param_2 != 0) {
      FUN_0009f224(param_2,DAT_0009cd20 + 0x9ccb4,3);
    }
    if (param_4 != 0) {
      FUN_00099e28(param_4,DAT_0009cd24 + 0x9ccc4,3);
    }
  }
  else {
    if ((piVar7 == *(int **)(param_1 + 0x1c)) &&
       (iVar6 = (**(code **)(*piVar7 + 0x38))(), iVar6 != 0)) {
      if (param_2 != 0) {
        FUN_0009f224(param_2,DAT_0009cd0c + 0x9cc2e,1);
      }
      if (param_4 != 0) {
        FUN_00099e28(param_4,DAT_0009cd10 + 0x9cc3c,1);
      }
      (**(code **)(**(int **)(param_1 + 0x18) + 8))
                (*(int **)(param_1 + 0x18),param_2,param_3 + 1,param_4);
      if (param_2 != 0) {
        sprintf(acStack_42c,(char *)(DAT_0009cd14 + 0x9cc60),*(int *)(param_1 + 0x20) + 8);
        sVar2 = strlen(acStack_42c);
        FUN_0009f224(param_2,acStack_42c,sVar2);
      }
      if (param_4 == 0) goto LAB_0009cbfc;
      ppvVar5 = &pvStack_438;
      FUN_00099e68(ppvVar5,DAT_0009cd18 + 0x9cc84,param_1 + 0x20);
      FUN_00099ef0(&puStack_43c,ppvVar5,DAT_0009cd1c + 0x9cc90);
      FUN_00099e28(param_4,puStack_43c + 2,*puStack_43c);
      puStack_444 = puStack_43c;
    }
    else {
      if (param_2 != 0) {
        FUN_0009f224(param_2,DAT_0009ccec + 0x9cb08,1);
      }
      if (param_4 != 0) {
        FUN_00099e28(param_4,DAT_0009ccf0 + 0x9cb16,1);
      }
      piVar7 = *(int **)(param_1 + 0x18);
      if (piVar7 != (int *)0x0) {
        iVar6 = DAT_0009ccf4 + 0x9cb2a;
        do {
          iVar8 = (**(code **)(*piVar7 + 0x38))(piVar7);
          if ((iVar8 == 0) && (param_2 != 0)) {
            FUN_0009f224(param_2,iVar6,1);
          }
          (**(code **)(*piVar7 + 8))(piVar7,param_2,param_3 + 1,param_4);
          piVar7 = (int *)piVar7[10];
        } while (piVar7 != (int *)0x0);
      }
      if (param_2 != 0) {
        FUN_0009f224(param_2,DAT_0009ccf8 + 0x9cb64,1);
      }
      if (0 < param_3) {
        iVar6 = 0;
        iVar8 = DAT_0009ccfc + 0x9cb74;
        do {
          if (param_2 != 0) {
            FUN_0009f224(param_2,iVar8,4);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != param_3);
      }
      if (param_2 != 0) {
        sprintf(acStack_42c,(char *)(DAT_0009cd00 + 0x9cb94),*(int *)(param_1 + 0x20) + 8);
        sVar2 = strlen(acStack_42c);
        FUN_0009f224(param_2,acStack_42c,sVar2);
      }
      if (param_4 == 0) goto LAB_0009cbfc;
      ppvVar5 = &local_440;
      FUN_00099e68(ppvVar5,DAT_0009cd04 + 0x9cbb6,param_1 + 0x20);
      FUN_00099ef0(&puStack_444,ppvVar5,DAT_0009cd08 + 0x9cbc6);
      FUN_00099e28(param_4,puStack_444 + 2,*puStack_444);
    }
    iVar6 = DAT_0009cce0;
    if ((puStack_444 != *(undefined4 **)(iVar4 + DAT_0009cce0)) &&
       (puStack_444 != (undefined4 *)0x0)) {
      operator_delete__(puStack_444);
    }
    pvVar3 = *ppvVar5;
    if ((pvVar3 != *(void **)(iVar4 + iVar6)) && (pvVar3 != (void *)0x0)) {
      operator_delete__(pvVar3);
    }
  }
LAB_0009cbfc:
  if (local_2c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



