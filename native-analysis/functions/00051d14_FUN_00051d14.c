/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00051d14 FUN_00051d14 */

void FUN_00051d14(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 local_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74 [8];
  undefined local_54;
  int local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar2 = DAT_00051f4c;
  iVar5 = DAT_00051f48 + 0x51d22;
  local_2c = **(int **)(iVar5 + DAT_00051f4c);
  iVar6 = *(int *)(param_1 + 0xd0);
  if (iVar6 == 0) {
    FUN_000a3a68();
    iVar3 = FUN_00094c30();
    local_78 = iVar6;
    FUN_00017d64(&local_78,*(undefined4 *)(param_1 + ((iVar3 == 1 ^ 1) + 0x20) * 4 + 4));
    local_8c = DAT_00051f34;
    local_b4 = DAT_00051f50 + 0x51d88;
    local_88 = DAT_00051f38;
    local_ac = DAT_00051f54 + 0x51d9a;
    local_84 = DAT_00051f3c;
    local_30 = 1;
    local_b0 = param_1;
    local_a8 = iVar6;
    local_50[0] = iVar6;
    (**(code **)(DAT_00051f50 + 0x51d90))(&local_b4,local_50);
    if ((iVar3 == 1) == 0) {
      local_cc = FUN_00022674(DAT_00051f7c + 0x51f28,0);
    }
    else {
      local_cc = FUN_00022674(DAT_00051f58 + 0x51dc4,0);
    }
    local_98 = *(undefined4 *)(DAT_00051f5c + 0x51dd8);
    local_94 = *(undefined4 *)(DAT_00051f5c + 0x51ddc);
    local_90 = *(undefined4 *)(DAT_00051f5c + 0x51de0);
    local_74[0] = 0;
    local_80 = DAT_00051f60 + 0x51e02;
    local_7c = *(undefined4 *)(iVar5 + DAT_00051f64);
    local_54 = 1;
    (**(code **)(DAT_00051f60 + 0x51e0a))(&local_80,local_74);
    pvVar4 = operator_new(0x148);
    FUN_000550e8(pvVar4,&local_78,&local_8c,local_50,local_cc,&local_98,local_74);
    iVar6 = DAT_00051f68;
    *(void **)(param_1 + 0xd0) = pvVar4;
    FUN_0001d358(local_74);
    local_80 = iVar6 + 0x51e48;
    FUN_0001d358(local_50);
    local_b4 = iVar6 + 0x51e48;
    FUN_00017d90(&local_78);
    (**(code **)(**(int **)(param_1 + 0xd0) + 8))();
    *(undefined *)(*(int *)(param_1 + 0xd0) + 0x10f) = 0;
    FUN_00049d7c(*(undefined4 *)(*(int *)(iVar5 + DAT_00051f6c) + 0x40),
                 *(undefined4 *)(param_1 + 0xd0),0);
    fVar1 = DAT_00051f40;
    iVar6 = *(int *)(param_1 + 0xd0);
    *(float *)(iVar6 + 0x110) = *(float *)(iVar6 + 0x110) * DAT_00051f40;
    *(float *)(iVar6 + 0x114) = *(float *)(iVar6 + 0x114) * fVar1;
    *(float *)(iVar6 + 0x118) = *(float *)(iVar6 + 0x118) * fVar1;
    iVar6 = *(int *)(*(int *)(param_1 + 0xd0) + 0x120);
    *(float *)(iVar6 + 0x28) = *(float *)(iVar6 + 0x28) * fVar1;
    *(float *)(iVar6 + 0x2c) = *(float *)(iVar6 + 0x2c) * fVar1;
    *(float *)(iVar6 + 0x30) = *(float *)(iVar6 + 0x30) * fVar1;
    local_c4 = DAT_00051f70 + 0x51ee4;
    local_b8 = 0;
    local_bc = DAT_00051f74 + 0x51eee;
    local_c0 = param_1;
    (**(code **)(DAT_00051f70 + 0x51eec))(&local_c4,*(int *)(param_1 + 0xd0) + 0x2c);
    local_c4 = DAT_00051f78 + 0x51f04;
    local_a4 = DAT_00051f3c;
    local_a0 = DAT_00051f44;
    local_9c = DAT_00051f3c;
    FUN_00025114(*(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x120),0,&local_a4);
  }
  if (local_2c != **(int **)(iVar5 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



