/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00069574 FUN_00069574 */

void * FUN_00069574(undefined4 param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **local_38;
  undefined **local_34;
  undefined auStack_30 [4];
  void *local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  pvVar2 = operator_new(0x20);
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  iVar6 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 0xc) - iVar6;
  if (iVar5 == -1) {
    FUN_00017cb8(auStack_30,0xffffffff);
LAB_00069638:
    iVar3 = (local_28 + -1) - (int)local_2c;
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + -1;
        *(undefined *)((int)local_2c + iVar4) = *(undefined *)(iVar6 + iVar4);
        if (iVar3 == 0) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar5);
    }
    local_24 = (int)local_2c + iVar5;
  }
  else {
    FUN_00017cb8(auStack_30,iVar5);
    if (iVar5 != 0) goto LAB_00069638;
  }
  pvVar1 = local_2c;
  local_20 = *(undefined4 *)(param_2 + 0x10);
  local_1c = *(undefined4 *)(param_2 + 0x14);
  *(undefined ****)pvVar2 = &local_38;
  *(undefined ****)((int)pvVar2 + 4) = &local_38;
  *(undefined4 *)((int)pvVar2 + 0xc) = 0;
  *(undefined4 *)((int)pvVar2 + 0x10) = 0;
  *(undefined4 *)((int)pvVar2 + 0x14) = 0;
  iVar5 = local_24 - (int)local_2c;
  if (iVar5 == -1) {
    local_38 = (undefined **)&local_38;
    local_34 = (undefined **)&local_38;
    FUN_00017cb8((int)pvVar2 + 8,0xffffffff);
  }
  else {
    local_38 = (undefined **)&local_38;
    local_34 = (undefined **)&local_38;
    FUN_00017cb8((int)pvVar2 + 8,iVar5);
    if (iVar5 == 0) goto LAB_000695e4;
  }
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  iVar6 = (*(int *)((int)pvVar2 + 0x10) + -1) - iVar3;
  if (iVar6 != 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + -1;
      *(undefined *)(iVar3 + iVar4) = *(undefined *)((int)pvVar1 + iVar4);
      if (iVar6 == 0) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar5);
    iVar3 = *(int *)((int)pvVar2 + 0xc);
  }
  *(int *)((int)pvVar2 + 0x14) = iVar3 + iVar5;
LAB_000695e4:
  *(undefined4 *)((int)pvVar2 + 0x18) = local_20;
  *(undefined4 *)((int)pvVar2 + 0x1c) = local_1c;
  if (local_2c != (void *)0x0) {
    operator_delete(local_2c);
  }
  return pvVar2;
}



