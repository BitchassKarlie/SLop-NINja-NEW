/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b59c0 FUN_000b59c0 */

void FUN_000b59c0(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = *(int *)(param_1 + 8);
  iVar2 = local_24 - *(int *)(param_1 + 4) >> 3;
  uVar1 = iVar2 * -0x3b13b13b;
  if (uVar1 < param_2) {
    local_18 = param_1;
    local_14 = local_24;
    FUN_000b5990(param_1,param_1,local_24,param_2 + iVar2 * 0x3b13b13b,param_3);
  }
  else if (param_2 < uVar1) {
    local_1c = param_2 * 0x68 + *(int *)(param_1 + 4);
    local_28 = param_1;
    local_20 = param_1;
    FUN_000b5534(auStack_30,param_1,param_1,local_1c,param_1,local_24);
  }
  return;
}



