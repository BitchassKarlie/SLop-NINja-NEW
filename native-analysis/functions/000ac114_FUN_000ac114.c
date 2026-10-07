/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac114 FUN_000ac114 */

void FUN_000ac114(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_d8;
  undefined auStack_d4 [4];
  void *local_d0;
  void *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined auStack_c0 [4];
  void *local_bc;
  void *local_b8;
  undefined auStack_b0 [4];
  void *local_ac;
  void *local_a8;
  undefined auStack_a0 [76];
  undefined auStack_54 [40];
  int local_2c;
  
  iVar1 = DAT_000ac2c8;
  iVar7 = DAT_000ac2c4 + 0xac120;
  local_2c = **(int **)(iVar7 + DAT_000ac2c8);
  FUN_000abe94(param_2);
  uVar4 = FUN_000abe94(param_2);
  if ((uint)((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40) >> 2) * 0x286bca1b) < uVar4) {
    FUN_000ac04c(param_1 + 0x3c,uVar4);
  }
  iVar8 = DAT_000ac2cc + 0xac18a;
  iVar9 = DAT_000ac2d0 + 0xac196;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    iVar10 = 0;
    uVar5 = FUN_000abe94(param_2);
    (**(code **)*param_2)(auStack_b0,param_2,uVar5);
    pvVar3 = local_a8;
    pvVar2 = local_ac;
    iVar11 = (int)local_a8 - (int)local_ac;
    local_d0 = (void *)0x0;
    local_cc = (void *)0x0;
    local_c8 = 0;
    local_d8 = iVar8;
    if ((iVar11 != 0) && (iVar6 = FUN_00098828(auStack_d4,0,iVar11), pvVar2 != pvVar3)) {
      do {
        *(undefined *)(iVar6 + iVar10) = *(undefined *)((int)pvVar2 + iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar11);
    }
    local_c4 = 0;
    FUN_0009e7a4(auStack_54,param_1 + 4);
    FUN_000ac2d4(auStack_a0,&local_d8,auStack_54);
    FUN_0009e858(auStack_54);
    FUN_000ac0c4(param_1 + 0x3c);
    FUN_000abfc8(*(undefined4 *)(param_1 + 0x44),auStack_a0);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 0x4c;
    FUN_000abe04(auStack_a0);
    local_cc = local_d0;
    local_d8 = iVar9;
    if (local_d0 != (void *)0x0) {
      operator_delete(local_d0);
    }
    local_a8 = local_ac;
    if (local_ac != (void *)0x0) {
      operator_delete(local_ac);
    }
  }
  iVar9 = FUN_000abe94(param_2);
  iVar8 = 0;
  if (iVar9 != 0) {
    do {
      iVar8 = iVar8 + 1;
      FUN_000abe94(param_2);
    } while (iVar8 != iVar9);
  }
  iVar8 = FUN_000abe94(param_2);
  if (iVar8 != 0) {
    (**(code **)*param_2)(auStack_c0,param_2,iVar8);
    pvVar2 = local_bc;
    iVar8 = (int)local_b8 - (int)local_bc;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
    if ((iVar8 != 0) &&
       (iVar9 = FUN_00098828(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x30),iVar8),
       pvVar2 != local_b8)) {
      iVar10 = 0;
      do {
        *(undefined *)(iVar9 + iVar10) = *(undefined *)((int)pvVar2 + iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar8);
    }
    if (local_bc != (void *)0x0) {
      operator_delete(local_bc);
    }
  }
  if (local_2c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



