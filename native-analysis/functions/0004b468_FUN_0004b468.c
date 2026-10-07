/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004b468 FUN_0004b468 */

void FUN_0004b468(int param_1,undefined param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_4 == 0) {
    param_4 = *(int *)(*(int *)(DAT_0004b4ec + 0x4b474 + DAT_0004b4f0) + 0x58);
  }
  local_1c = *param_5;
  local_18 = param_5[1];
  local_14 = param_5[2];
  iVar2 = *(int *)(param_1 + 0xb4);
  local_28 = *param_3;
  local_24 = param_3[1];
  local_20 = param_3[2];
  local_30 = 0;
  local_38 = param_1;
  local_34 = param_4;
  local_2c = param_2;
  piVar1 = (int *)FUN_0004b3b8(param_1 + 0xb0,&local_38);
  *piVar1 = iVar2;
  piVar1[1] = *(int *)(iVar2 + 4);
  *(int **)(iVar2 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  FUN_0004b374(&local_38);
  return;
}



