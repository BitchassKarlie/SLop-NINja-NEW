/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004e96c FUN_0004e96c */

void FUN_0004e96c(int param_1)

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
  
  iVar5 = DAT_0004eb2c + 0x4e97a;
  piVar6 = *(int **)(iVar5 + DAT_0004eb30);
  local_2c = *piVar6;
  local_78 = 0;
  FUN_00017d64(&local_78,*(undefined4 *)(DAT_0004eb34 + 0x4e9a0));
  local_30 = 1;
  local_8c = DAT_0004eb1c;
  local_a8 = DAT_0004eb38 + 0x4e9b6;
  local_88 = DAT_0004eb20;
  local_a0 = DAT_0004eb3c + 0x4e9c6;
  local_84 = DAT_0004eb24;
  local_9c = 0;
  local_50[0] = 0;
  local_a4 = param_1;
  (**(code **)(DAT_0004eb38 + 0x4e9be))(&local_a8,local_50);
  uVar2 = FUN_00022674(DAT_0004eb40 + 0x4e9e2,0);
  local_54 = 1;
  local_98 = *(undefined4 *)(DAT_0004eb44 + 0x4e9f2);
  local_94 = *(undefined4 *)(DAT_0004eb44 + 0x4e9f6);
  local_90 = *(undefined4 *)(DAT_0004eb44 + 0x4e9fa);
  local_74[0] = 0;
  local_80 = DAT_0004eb48 + 0x4ea18;
  local_7c = *(undefined4 *)(iVar5 + DAT_0004eb4c);
  (**(code **)(DAT_0004eb48 + 0x4ea20))(&local_80,local_74);
  pvVar3 = operator_new(0x148);
  FUN_000550e8(pvVar3,&local_78,&local_8c,local_50,uVar2,&local_98,local_74);
  iVar4 = DAT_0004eb50;
  *(void **)(param_1 + 0x70) = pvVar3;
  FUN_0001d358(local_74);
  local_80 = iVar4 + 0x4ea60;
  FUN_0001d358(local_50);
  local_a8 = iVar4 + 0x4ea60;
  FUN_00017d90(&local_78);
  iVar5 = *(int *)(iVar5 + DAT_0004eb54);
  FUN_000671a8(*(undefined4 *)(iVar5 + 0x16c),*(undefined4 *)(param_1 + 0x70));
  (**(code **)(**(int **)(param_1 + 0x70) + 8))();
  fVar1 = DAT_0004eb28;
  iVar4 = *(int *)(param_1 + 0x70);
  *(float *)(iVar4 + 0x110) = *(float *)(iVar4 + 0x110) * DAT_0004eb28;
  *(float *)(iVar4 + 0x114) = *(float *)(iVar4 + 0x114) * fVar1;
  *(float *)(iVar4 + 0x118) = *(float *)(iVar4 + 0x118) * fVar1;
  iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 0x120);
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) * fVar1;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) * fVar1;
  *(float *)(iVar4 + 0x30) = *(float *)(iVar4 + 0x30) * fVar1;
  local_b8 = DAT_0004eb58 + 0x4eaea;
  local_b0 = DAT_0004eb5c + 0x4eaf2;
  local_ac = 0;
  local_b4 = param_1;
  (**(code **)(DAT_0004eb58 + 0x4eaf2))(&local_b8,*(int *)(param_1 + 0x70) + 0x2c);
  local_b8 = DAT_0004eb60 + 0x4eb08;
  FUN_00049d7c(*(undefined4 *)(iVar5 + 0x40),*(undefined4 *)(param_1 + 0x70),0);
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



