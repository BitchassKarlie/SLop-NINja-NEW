/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004df8c FUN_0004df8c */

void FUN_0004df8c(int param_1)

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
  
  iVar5 = DAT_0004e154 + 0x4df9a;
  piVar6 = *(int **)(iVar5 + DAT_0004e158);
  local_2c = *piVar6;
  local_78 = 0;
  FUN_00017d64(&local_78,*(undefined4 *)(DAT_0004e15c + 0x4dfd4));
  local_30 = 1;
  local_8c = DAT_0004e140;
  local_a8 = DAT_0004e160 + 0x4dfd6;
  local_88 = DAT_0004e144;
  local_a0 = DAT_0004e164 + 0x4dfe6;
  local_84 = DAT_0004e148;
  local_9c = 0;
  local_50[0] = 0;
  local_a4 = param_1;
  (**(code **)(DAT_0004e160 + 0x4dfde))(&local_a8,local_50);
  uVar2 = FUN_00022674(DAT_0004e168 + 0x4e002,0);
  local_54 = 1;
  local_98 = *(undefined4 *)(DAT_0004e16c + 0x4e012);
  local_94 = *(undefined4 *)(DAT_0004e16c + 0x4e016);
  local_90 = *(undefined4 *)(DAT_0004e16c + 0x4e01a);
  local_74[0] = 0;
  local_80 = DAT_0004e170 + 0x4e038;
  local_7c = *(undefined4 *)(iVar5 + DAT_0004e174);
  (**(code **)(DAT_0004e170 + 0x4e040))(&local_80,local_74);
  pvVar3 = operator_new(0x148);
  FUN_000550e8(pvVar3,&local_78,&local_8c,local_50,uVar2,&local_98,local_74);
  iVar4 = DAT_0004e178;
  *(void **)(param_1 + 0x88) = pvVar3;
  FUN_0001d358(local_74);
  local_80 = iVar4 + 0x4e080;
  FUN_0001d358(local_50);
  local_a8 = iVar4 + 0x4e080;
  FUN_00017d90(&local_78);
  (**(code **)(**(int **)(param_1 + 0x88) + 8))();
  fVar1 = DAT_0004e14c;
  iVar4 = *(int *)(param_1 + 0x88);
  *(float *)(iVar4 + 0x110) = *(float *)(iVar4 + 0x110) * DAT_0004e14c;
  *(float *)(iVar4 + 0x114) = *(float *)(iVar4 + 0x114) * fVar1;
  *(float *)(iVar4 + 0x118) = *(float *)(iVar4 + 0x118) * fVar1;
  fVar1 = DAT_0004e150;
  iVar4 = *(int *)(*(int *)(param_1 + 0x88) + 0x120);
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) * DAT_0004e150;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) * fVar1;
  *(float *)(iVar4 + 0x30) = *(float *)(iVar4 + 0x30) * fVar1;
  local_b8 = DAT_0004e17c + 0x4e108;
  local_b0 = DAT_0004e180 + 0x4e110;
  local_ac = 0;
  local_b4 = param_1;
  (**(code **)(DAT_0004e17c + 0x4e110))(&local_b8,*(int *)(param_1 + 0x88) + 0x2c);
  local_b8 = DAT_0004e184 + 0x4e128;
  FUN_00049d7c(*(undefined4 *)(*(int *)(iVar5 + DAT_0004e188) + 0x40),
               *(undefined4 *)(param_1 + 0x88),0);
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



