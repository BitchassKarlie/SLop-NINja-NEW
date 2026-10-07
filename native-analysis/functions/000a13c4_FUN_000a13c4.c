/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a13c4 FUN_000a13c4 */

void FUN_000a13c4(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = *(int *)(param_1 + 8);
  uVar1 = local_24 - *(int *)(param_1 + 4) >> 2;
  if (uVar1 < param_2) {
    local_18 = param_1;
    local_14 = local_24;
    FUN_000a1390(param_1,param_1,local_24,param_2 - uVar1,param_3);
  }
  else if (param_2 < uVar1) {
    local_1c = *(int *)(param_1 + 4) + param_2 * 4;
    local_28 = param_1;
    local_20 = param_1;
    FUN_000a1348(auStack_30,param_1,param_1,local_1c,param_1,local_24);
  }
  return;
}



