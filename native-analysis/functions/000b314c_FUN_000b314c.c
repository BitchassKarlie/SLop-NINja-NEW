/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b314c FUN_000b314c */

void FUN_000b314c(int *param_1,undefined4 param_2,int *param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined auStack_3c [4];
  void *local_38;
  int local_34;
  int local_30;
  undefined auStack_2c [4];
  void *local_28;
  int local_20;
  undefined auStack_1c [4];
  
  puVar2 = (undefined4 *)FUN_000b30c8(param_1 + 1);
  uVar3 = FUN_0009e480(param_3);
  FUN_000a0c2c(auStack_2c,uVar3,auStack_1c);
  if (*param_3 != 1) {
    FUN_000b1e5c(auStack_2c,DAT_000b3208 + 0xb317e);
  }
  pvVar1 = local_28;
  iVar5 = *param_1;
  local_38 = (void *)0x0;
  iVar7 = local_20 - (int)local_28;
  local_34 = 0;
  local_30 = 0;
  if (iVar7 == -1) {
    FUN_00017cb8(auStack_3c,0xffffffff);
  }
  else {
    FUN_00017cb8(auStack_3c,iVar7);
    if (iVar7 == 0) goto LAB_000b31a6;
  }
  iVar4 = (local_34 + -1) - (int)local_38;
  if (iVar4 != 0) {
    iVar6 = 0;
    do {
      iVar4 = iVar4 + -1;
      *(undefined *)((int)local_38 + iVar6) = *(undefined *)((int)pvVar1 + iVar6);
      if (iVar4 == 0) break;
      iVar6 = iVar6 + 1;
    } while (iVar7 != iVar6);
  }
  local_30 = (int)local_38 + iVar7;
LAB_000b31a6:
  FUN_000b1e5c(auStack_3c,DAT_000b320c + 0xb31ae);
  uVar3 = FUN_000a92dc(iVar5 + 0xc,local_38);
  *puVar2 = uVar3;
  if (local_38 != (void *)0x0) {
    operator_delete(local_38);
    local_34 = 0;
    local_30 = 0;
    local_38 = (void *)0x0;
  }
  if (local_28 != (void *)0x0) {
    operator_delete(local_28);
  }
  return;
}



