/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00054f78 FUN_00054f78 */

void FUN_00054f78(int *param_1,undefined4 param_2,undefined4 *param_3,int **param_4,
                 undefined4 param_5,undefined4 *param_6,int **param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar2 = DAT_000550e0;
  iVar5 = DAT_000550dc + 0x54f88;
  local_2c = **(int **)(iVar5 + DAT_000550e0);
  FUN_0004a8dc();
  iVar3 = DAT_000550e4;
  *(undefined *)(param_1 + 0x27) = 1;
  param_1[0x1f] = 0;
  *(undefined *)(param_1 + 0x30) = 1;
  *param_1 = iVar3 + 0x54fbe;
  param_1[0x28] = 0;
  puVar4 = (undefined4 *)operator_new(0x28);
  uVar1 = DAT_000550d8;
  *puVar4 = 0;
  puVar4[3] = uVar1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[4] = local_a8;
  puVar4[5] = local_a4;
  puVar4[6] = local_a0;
  puVar4[7] = local_9c;
  puVar4[8] = local_98;
  *puVar4 = puVar4;
  puVar4[9] = local_94;
  puVar4[1] = puVar4;
  param_1[0x41] = (int)puVar4;
  param_1[0x42] = 0;
  FUN_0002fa48(&local_78,param_2);
  FUN_00017d64(param_1 + 0x1a,local_78);
  FUN_00017d90(&local_78);
  local_84 = *param_3;
  local_80 = param_3[1];
  local_7c = param_3[2];
  local_30 = 1;
  local_50[0] = 0;
  if (*(char *)(param_4 + 8) != '\0') {
    param_4 = (int **)*param_4;
  }
  if (param_4 != (int **)0x0) {
    (**(code **)((int)*param_4 + 8))(param_4,local_50);
  }
  local_90 = *param_6;
  local_8c = param_6[1];
  local_88 = param_6[2];
  local_54 = 1;
  local_74[0] = 0;
  if (*(char *)(param_7 + 8) != '\0') {
    param_7 = (int **)*param_7;
  }
  if (param_7 != (int **)0x0) {
    (**(code **)((int)*param_7 + 8))(param_7,local_74);
  }
  FUN_00054574(param_1,&local_84,local_50,param_5,&local_90,local_74);
  FUN_0001d358(local_74);
  FUN_0001d358(local_50);
  if (local_2c != **(int **)(iVar5 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



