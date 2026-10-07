/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000570e8 FUN_000570e8 */

void FUN_000570e8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_00057194;
  iVar1 = DAT_0005718c;
  *(undefined *)(param_1 + 9) = 1;
  param_1[8] = iVar1;
  *(undefined *)(param_1 + 0x20) = 1;
  param_1[10] = 0;
  *(undefined *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x1e) = 0;
  FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(iVar2 + 0x57108));
  *(undefined *)((int)param_1 + 0x27) = 0;
  param_1[0x1d] = iVar1;
  *(undefined *)((int)param_1 + 0x79) = 0;
  iVar2 = DAT_00057190;
  param_1[0x1f] = 0;
  param_1[0x21] = iVar2;
  *(undefined *)(param_1 + 9) = 1;
  uVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  uVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  param_1[5] = (int)(float)(ulonglong)((uVar3 >> 1) + 1);
  param_1[6] = (int)(float)(ulonglong)((uVar4 >> 1) + 1);
  param_1[7] = iVar1;
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



