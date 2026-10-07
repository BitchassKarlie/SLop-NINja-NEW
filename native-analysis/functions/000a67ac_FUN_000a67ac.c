/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a67ac FUN_000a67ac */

void FUN_000a67ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined auStack_20 [4];
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar4 = DAT_000a6850;
  puVar3 = (undefined4 *)(DAT_000a6850 + 0xa67b6);
  uVar5 = *(undefined4 *)(DAT_000a6850 + 0xa67ca);
  *(undefined4 *)(DAT_000a6850 + 0xa67ba) = param_4;
  iVar4 = *(int *)(iVar4 + 0xa67c2);
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  *puVar3 = param_3;
  if (iVar4 == 0) {
    piVar1 = (int *)FUN_0006e1cc();
    iVar4 = (**(code **)(*piVar1 + 0x40))();
    if (iVar4 != 0) {
      uVar2 = (**(code **)(*piVar1 + 0x40))(piVar1);
      FUN_00098ec8(piVar1,uVar2);
    }
    pcVar6 = *(code **)(*piVar1 + 0x50);
    if (param_5 != (void *)0x0) {
      FUN_000a65e8(uVar5,param_5,auStack_20);
      param_5 = local_1c;
    }
    (*pcVar6)(piVar1,param_5);
    iVar4 = DAT_000a6854;
    (**(code **)(*piVar1 + 0x30))(piVar1,0,0);
    *(undefined *)(iVar4 + 0xa681c) = 1;
    FUN_000a3808(*(undefined4 *)(iVar4 + 0xa6828));
    if (piVar1 != *(int **)(iVar4 + 0xa6820)) {
      operator_delete(*(int **)(iVar4 + 0xa6820));
    }
    *(int **)(DAT_000a6858 + 0xa683e) = piVar1;
    if (local_1c != (void *)0x0) {
      operator_delete(local_1c);
    }
  }
  return;
}



