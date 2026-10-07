/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000550e8 FUN_000550e8 */

void FUN_000550e8(int *param_1,undefined4 *param_2,undefined4 *param_3,int **param_4,
                 undefined4 param_5,undefined4 *param_6,int **param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
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
  
  iVar2 = DAT_0005523c;
  iVar5 = DAT_00055238 + 0x550f6;
  local_2c = **(int **)(iVar5 + DAT_0005523c);
  FUN_0004a8dc();
  iVar3 = DAT_00055240;
  *(undefined *)(param_1 + 0x27) = 1;
  param_1[0x1f] = 0;
  *(undefined *)(param_1 + 0x30) = 1;
  *param_1 = iVar3 + 0x5512a;
  param_1[0x28] = 0;
  puVar4 = (undefined4 *)operator_new(0x28);
  uVar1 = DAT_00055234;
  *puVar4 = 0;
  puVar4[3] = uVar1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[4] = local_a4;
  puVar4[5] = local_a0;
  puVar4[6] = local_9c;
  puVar4[7] = local_98;
  puVar4[8] = local_94;
  *puVar4 = puVar4;
  puVar4[9] = local_90;
  puVar4[1] = puVar4;
  param_1[0x41] = (int)puVar4;
  param_1[0x42] = 0;
  FUN_00017d64(param_1 + 0x1a,*param_2);
  local_80 = *param_3;
  local_7c = param_3[1];
  local_78 = param_3[2];
  local_30 = 1;
  local_50[0] = 0;
  if (*(char *)(param_4 + 8) != '\0') {
    param_4 = (int **)*param_4;
  }
  if (param_4 != (int **)0x0) {
    (**(code **)((int)*param_4 + 8))(param_4,local_50);
  }
  local_8c = *param_6;
  local_88 = param_6[1];
  local_84 = param_6[2];
  local_54 = 1;
  local_74[0] = 0;
  if (*(char *)(param_7 + 8) != '\0') {
    param_7 = (int **)*param_7;
  }
  if (param_7 != (int **)0x0) {
    (**(code **)((int)*param_7 + 8))(param_7,local_74);
  }
  FUN_00054574(param_1,&local_80,local_50,param_5,&local_8c,local_74);
  FUN_0001d358(local_74);
  FUN_0001d358(local_50);
  if (local_2c == **(int **)(iVar5 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



