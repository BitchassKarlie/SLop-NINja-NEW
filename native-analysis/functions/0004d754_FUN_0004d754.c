/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004d754 FUN_0004d754 */

void FUN_0004d754(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int ****ppppiVar7;
  int local_5c;
  int *local_58;
  int local_54;
  int ****local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int ****local_40 [8];
  char local_20;
  int local_1c;
  
  iVar3 = DAT_0004d884;
  iVar6 = DAT_0004d880 + 0x4d762;
  local_1c = **(int **)(iVar6 + DAT_0004d884);
  (**(code **)(*param_1 + 0x10))();
  ppppiVar7 = (int ****)param_1[0x25];
  if (ppppiVar7 == (int ****)0x0) {
    piVar4 = (int *)operator_new(0x124);
    FUN_0004c9a4();
    param_1[0x25] = (int)piVar4;
    (**(code **)(*piVar4 + 8))(piVar4);
    (**(code **)(*(int *)param_1[0x25] + 0x4c))((int *)param_1[0x25],0x41c80000);
    (**(code **)(*(int *)param_1[0x25] + 0x44))((int *)param_1[0x25],0x43800000);
    (**(code **)(*(int *)param_1[0x25] + 0x48))((int *)param_1[0x25],0x43700000);
    uVar2 = DAT_0004d87c;
    uVar1 = DAT_0004d878;
    local_4c = DAT_0004d874;
    local_48 = DAT_0004d878;
    local_44 = DAT_0004d87c;
    iVar5 = param_1[0x25];
    *(undefined4 *)(iVar5 + 8) = DAT_0004d874;
    *(undefined4 *)(iVar5 + 0xc) = uVar1;
    *(undefined4 *)(iVar5 + 0x10) = uVar2;
    local_5c = DAT_0004d888 + 0x4d81c;
    local_54 = DAT_0004d88c + 0x4d826;
    local_20 = '\x01';
    iVar5 = param_1[0x25];
    local_58 = param_1;
    local_50 = ppppiVar7;
    local_40[0] = ppppiVar7;
    (**(code **)(DAT_0004d888 + 0x4d824))(&local_5c,local_40);
    ppppiVar7 = (int ****)local_40;
    if (local_20 != '\0') {
      ppppiVar7 = local_40[0];
    }
    if (ppppiVar7 != (int ****)0x0) {
      (*(code *)(*ppppiVar7)[2])(ppppiVar7,iVar5 + 0x100);
    }
    FUN_0001d358(local_40);
    local_5c = DAT_0004d890 + 0x4d864;
    FUN_00049d7c(*(undefined4 *)(*(int *)(iVar6 + DAT_0004d894) + 0x40),param_1[0x25],0);
  }
  param_1[0x23] = 0;
  *(undefined *)((int)param_1 + 0xa1) = 0;
  piVar4 = *(int **)(iVar6 + iVar3);
  param_1[0x26] = DAT_0004d870;
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



