/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004e18c FUN_0004e18c */

void FUN_0004e18c(int param_1)

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
  
  iVar5 = DAT_0004e34c + 0x4e19a;
  piVar6 = *(int **)(iVar5 + DAT_0004e350);
  local_2c = *piVar6;
  local_78 = 0;
  FUN_00017d64(&local_78,*(undefined4 *)(DAT_0004e354 + 0x4e1d0));
  local_88 = DAT_0004e33c;
  local_a8 = DAT_0004e358 + 0x4e1d6;
  local_8c = DAT_0004e340;
  local_84 = DAT_0004e340;
  local_a0 = DAT_0004e35c + 0x4e1e6;
  local_30 = 1;
  local_9c = 0;
  local_50[0] = 0;
  local_a4 = param_1;
  (**(code **)(DAT_0004e358 + 0x4e1de))(&local_a8,local_50);
  uVar2 = FUN_00022674(DAT_0004e360 + 0x4e1fe,0);
  local_54 = 1;
  local_98 = *(undefined4 *)(DAT_0004e364 + 0x4e20e);
  local_94 = *(undefined4 *)(DAT_0004e364 + 0x4e212);
  local_90 = *(undefined4 *)(DAT_0004e364 + 0x4e216);
  local_74[0] = 0;
  local_80 = DAT_0004e368 + 0x4e234;
  local_7c = *(undefined4 *)(iVar5 + DAT_0004e36c);
  (**(code **)(DAT_0004e368 + 0x4e23c))(&local_80,local_74);
  pvVar3 = operator_new(0x148);
  FUN_000550e8(pvVar3,&local_78,&local_8c,local_50,uVar2,&local_98,local_74);
  iVar4 = DAT_0004e370;
  *(void **)(param_1 + 0x84) = pvVar3;
  FUN_0001d358(local_74);
  local_80 = iVar4 + 0x4e27c;
  FUN_0001d358(local_50);
  local_a8 = iVar4 + 0x4e27c;
  FUN_00017d90(&local_78);
  (**(code **)(**(int **)(param_1 + 0x84) + 8))();
  fVar1 = DAT_0004e344;
  iVar4 = *(int *)(param_1 + 0x84);
  *(float *)(iVar4 + 0x110) = *(float *)(iVar4 + 0x110) * DAT_0004e344;
  *(float *)(iVar4 + 0x114) = *(float *)(iVar4 + 0x114) * fVar1;
  *(float *)(iVar4 + 0x118) = *(float *)(iVar4 + 0x118) * fVar1;
  fVar1 = DAT_0004e348;
  iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x120);
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) * DAT_0004e348;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) * fVar1;
  *(float *)(iVar4 + 0x30) = *(float *)(iVar4 + 0x30) * fVar1;
  local_b8 = DAT_0004e374 + 0x4e304;
  local_b0 = DAT_0004e378 + 0x4e30c;
  local_ac = 0;
  local_b4 = param_1;
  (**(code **)(DAT_0004e374 + 0x4e30c))(&local_b8,*(int *)(param_1 + 0x84) + 0x2c);
  local_b8 = DAT_0004e37c + 0x4e324;
  FUN_00049d7c(*(undefined4 *)(*(int *)(iVar5 + DAT_0004e380) + 0x40),
               *(undefined4 *)(param_1 + 0x84),0);
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



