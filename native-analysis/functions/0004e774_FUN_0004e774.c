/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004e774 FUN_0004e774 */

void FUN_0004e774(int param_1)

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
  
  iVar5 = DAT_0004e934 + 0x4e782;
  piVar6 = *(int **)(iVar5 + DAT_0004e938);
  local_2c = *piVar6;
  local_78 = 0;
  FUN_00017d64(&local_78,*(undefined4 *)(DAT_0004e93c + 0x4e7ac));
  local_30 = 1;
  local_8c = DAT_0004e920;
  local_a8 = DAT_0004e940 + 0x4e7be;
  local_88 = DAT_0004e924;
  local_a0 = DAT_0004e944 + 0x4e7ce;
  local_84 = DAT_0004e928;
  local_9c = 0;
  local_50[0] = 0;
  local_a4 = param_1;
  (**(code **)(DAT_0004e940 + 0x4e7c6))(&local_a8,local_50);
  uVar2 = FUN_00022674(DAT_0004e948 + 0x4e7ea,0);
  local_54 = 1;
  local_98 = *(undefined4 *)(DAT_0004e94c + 0x4e7fa);
  local_94 = *(undefined4 *)(DAT_0004e94c + 0x4e7fe);
  local_90 = *(undefined4 *)(DAT_0004e94c + 0x4e802);
  local_74[0] = 0;
  local_80 = DAT_0004e950 + 0x4e820;
  local_7c = *(undefined4 *)(iVar5 + DAT_0004e954);
  (**(code **)(DAT_0004e950 + 0x4e828))(&local_80,local_74);
  pvVar3 = operator_new(0x148);
  FUN_000550e8(pvVar3,&local_78,&local_8c,local_50,uVar2,&local_98,local_74);
  iVar4 = DAT_0004e958;
  *(void **)(param_1 + 0x74) = pvVar3;
  FUN_0001d358(local_74);
  local_80 = iVar4 + 0x4e868;
  FUN_0001d358(local_50);
  local_a8 = iVar4 + 0x4e868;
  FUN_00017d90(&local_78);
  (**(code **)(**(int **)(param_1 + 0x74) + 8))();
  fVar1 = DAT_0004e92c;
  iVar4 = *(int *)(param_1 + 0x74);
  *(float *)(iVar4 + 0x110) = *(float *)(iVar4 + 0x110) * DAT_0004e92c;
  *(float *)(iVar4 + 0x114) = *(float *)(iVar4 + 0x114) * fVar1;
  *(float *)(iVar4 + 0x118) = *(float *)(iVar4 + 0x118) * fVar1;
  fVar1 = DAT_0004e930;
  iVar4 = *(int *)(*(int *)(param_1 + 0x74) + 0x120);
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) * DAT_0004e930;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) * fVar1;
  *(float *)(iVar4 + 0x30) = *(float *)(iVar4 + 0x30) * fVar1;
  local_b8 = DAT_0004e95c + 0x4e8e8;
  local_b0 = DAT_0004e960 + 0x4e8f0;
  local_ac = 0;
  local_b4 = param_1;
  (**(code **)(DAT_0004e95c + 0x4e8f0))(&local_b8,*(int *)(param_1 + 0x70) + 0x2c);
  local_b8 = DAT_0004e964 + 0x4e906;
  FUN_00049d7c(*(undefined4 *)(*(int *)(iVar5 + DAT_0004e968) + 0x40),
               *(undefined4 *)(param_1 + 0x74),0);
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



