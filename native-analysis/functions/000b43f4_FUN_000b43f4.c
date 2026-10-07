/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b43f4 FUN_000b43f4 */

void FUN_000b43f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  int *piVar9;
  int iVar10;
  undefined auStack_34 [4];
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined auStack_24 [4];
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar6 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x2c) != iVar6) {
      do {
        iVar7 = iVar2 + 0x10;
        FUN_000a08c8(iVar2);
        iVar2 = iVar7;
      } while (iVar6 != iVar7);
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x30) = iVar6;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))();
    FUN_000b41cc(auStack_34,(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) * -0x33333333);
    iVar10 = *(int *)(iVar2 + 8);
    iVar6 = local_30;
    iVar7 = local_30;
    iVar1 = local_2c;
    for (iVar2 = *(int *)(iVar2 + 4); iVar2 != iVar10; iVar2 = iVar2 + 0x14) {
      local_30 = iVar7;
      local_2c = iVar1;
      FUN_000b6a24(iVar6,iVar2);
      iVar6 = iVar6 + 0x10;
      iVar7 = local_30;
      iVar1 = local_2c;
    }
    local_30 = *(int *)(param_1 + 0x2c);
    local_2c = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x2c) = iVar7;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    *(int *)(param_1 + 0x30) = iVar1;
    *(undefined4 *)(param_1 + 0x34) = local_28;
    local_28 = uVar5;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))();
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar7 != iVar1) {
      do {
        iVar6 = FUN_000b4374(auStack_24,iVar7,iVar2);
        if (iVar6 == 0) {
          uVar4 = 1;
          goto LAB_000b449a;
        }
        iVar7 = iVar7 + 0x10;
        iVar2 = iVar2 + 0x14;
      } while (iVar1 != iVar7);
    }
    uVar4 = 0;
LAB_000b449a:
    *(undefined *)(param_1 + 0x3c) = uVar4;
  }
  piVar9 = *(int **)(param_1 + 0x20);
  for (ppiVar8 = (int **)*piVar9; (int **)piVar9 != ppiVar8; ppiVar8 = (int **)*ppiVar8) {
    piVar3 = (int *)(ppiVar8 + 2);
    if (*(char *)(ppiVar8 + 10) != '\0') {
      piVar3 = ppiVar8[2];
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(piVar3,param_1);
    }
  }
  if ((param_2 == 0) && (iVar2 = FUN_000b43ac(param_1 + 0x28,auStack_34), iVar2 == 0)) {
    FUN_000b4264(param_1);
  }
  FUN_000b3ffc(auStack_34);
  return;
}



