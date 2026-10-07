/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004eb64 FUN_0004eb64 */

void FUN_0004eb64(int param_1)

{
  float fVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
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
  
  iVar4 = DAT_0004ed00 + 0x4eb74;
  piVar3 = *(int **)(iVar4 + DAT_0004ed04);
  local_2c = *piVar3;
  local_78 = 0;
  iVar5 = *(int *)(iVar4 + DAT_0004ed08);
  FUN_00017d64(&local_78,*(undefined4 *)(iVar5 + 0x180));
  local_8c = DAT_0004ecf0;
  local_a8 = DAT_0004ed0c + 0x4ebbc;
  local_88 = DAT_0004ecf4;
  local_a0 = DAT_0004ed10 + 0x4ebcc;
  local_84 = DAT_0004ecf8;
  local_9c = 0;
  local_30 = 1;
  local_50[0] = 0;
  local_a4 = param_1;
  (**(code **)(DAT_0004ed0c + 0x4ebc4))(&local_a8,local_50);
  local_98 = *(undefined4 *)(DAT_0004ed14 + 0x4ebe8);
  local_94 = *(undefined4 *)(DAT_0004ed14 + 0x4ebec);
  local_90 = *(undefined4 *)(DAT_0004ed14 + 0x4ebf0);
  local_54 = 1;
  local_74[0] = 0;
  local_80 = DAT_0004ed18 + 0x4ec10;
  local_7c = *(undefined4 *)(iVar4 + DAT_0004ed1c);
  (**(code **)(DAT_0004ed18 + 0x4ec18))(&local_80,local_74);
  pvVar2 = operator_new(0x148);
  FUN_000550e8(pvVar2,&local_78,&local_8c,local_50,**(undefined4 **)(iVar4 + DAT_0004ed20),&local_98
               ,local_74);
  iVar4 = DAT_0004ed24;
  *(void **)(param_1 + 0x80) = pvVar2;
  FUN_0001d358(local_74);
  local_80 = iVar4 + 0x4ec56;
  FUN_0001d358(local_50);
  local_a8 = iVar4 + 0x4ec56;
  FUN_00017d90(&local_78);
  (**(code **)(**(int **)(param_1 + 0x80) + 8))();
  *(undefined *)(*(int *)(param_1 + 0x80) + 0x124) = 1;
  FUN_00049d7c(*(undefined4 *)(iVar5 + 0x40),*(undefined4 *)(param_1 + 0x80),0);
  fVar1 = DAT_0004ecfc;
  iVar4 = *(int *)(param_1 + 0x80);
  *(float *)(iVar4 + 0x110) = *(float *)(iVar4 + 0x110) * DAT_0004ecfc;
  *(float *)(iVar4 + 0x114) = *(float *)(iVar4 + 0x114) * fVar1;
  *(float *)(iVar4 + 0x118) = *(float *)(iVar4 + 0x118) * fVar1;
  iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) * fVar1;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) * fVar1;
  *(float *)(iVar4 + 0x30) = *(float *)(iVar4 + 0x30) * fVar1;
  if (local_2c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



