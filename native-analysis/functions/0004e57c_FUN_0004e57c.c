/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004e57c FUN_0004e57c */

void FUN_0004e57c(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar5 = DAT_0004e73c + 0x4e58a;
  piVar6 = *(int **)(iVar5 + DAT_0004e740);
  local_2c = *piVar6;
  local_78 = 0;
  FUN_00017d64(&local_78,*(undefined4 *)(DAT_0004e744 + 0x4e5b8));
  local_30 = 1;
  local_8c = DAT_0004e728;
  local_a8 = DAT_0004e748 + 0x4e5c6;
  local_88 = DAT_0004e72c;
  local_a0 = DAT_0004e74c + 0x4e5d6;
  local_84 = DAT_0004e730;
  local_9c = 0;
  local_50[0] = 0;
  local_a4 = param_1;
  (**(code **)(DAT_0004e748 + 0x4e5ce))(&local_a8,local_50);
  uVar2 = FUN_00022674(DAT_0004e750 + 0x4e5f2,0);
  local_54 = 1;
  local_98 = *(undefined4 *)(DAT_0004e754 + 0x4e602);
  local_94 = *(undefined4 *)(DAT_0004e754 + 0x4e606);
  local_90 = *(undefined4 *)(DAT_0004e754 + 0x4e60a);
  local_74[0] = 0;
  local_80 = DAT_0004e758 + 0x4e628;
  local_7c = *(undefined4 *)(iVar5 + DAT_0004e75c);
  (**(code **)(DAT_0004e758 + 0x4e630))(&local_80,local_74);
  pvVar3 = operator_new(0x148);
  FUN_000550e8(pvVar3,&local_78,&local_8c,local_50,uVar2,&local_98,local_74);
  iVar4 = DAT_0004e760;
  *(void **)(param_1 + 0x78) = pvVar3;
  FUN_0001d358(local_74);
  local_80 = iVar4 + 0x4e670;
  FUN_0001d358(local_50);
  local_a8 = iVar4 + 0x4e670;
  FUN_00017d90(&local_78);
  (**(code **)(**(int **)(param_1 + 0x78) + 8))();
  fVar1 = DAT_0004e734;
  iVar4 = *(int *)(param_1 + 0x78);
  *(float *)(iVar4 + 0x110) = *(float *)(iVar4 + 0x110) * DAT_0004e734;
  *(float *)(iVar4 + 0x114) = *(float *)(iVar4 + 0x114) * fVar1;
  *(float *)(iVar4 + 0x118) = *(float *)(iVar4 + 0x118) * fVar1;
  fVar1 = DAT_0004e738;
  iVar4 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) * DAT_0004e738;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) * fVar1;
  *(float *)(iVar4 + 0x30) = *(float *)(iVar4 + 0x30) * fVar1;
  local_b8 = DAT_0004e764 + 0x4e6f0;
  local_b0 = DAT_0004e768 + 0x4e6f8;
  local_ac = 0;
  local_b4 = param_1;
  (**(code **)(DAT_0004e764 + 0x4e6f8))(&local_b8,*(int *)(param_1 + 0x70) + 0x2c);
  local_b8 = DAT_0004e76c + 0x4e70e;
  FUN_00049d7c(*(undefined4 *)(*(int *)(iVar5 + DAT_0004e770) + 0x40),
               *(undefined4 *)(param_1 + 0x78),0);
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



