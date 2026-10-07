/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a92dc FUN_000a92dc */

int * FUN_000a92dc(int **param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_2c;
  int **local_28;
  int *local_24;
  int **local_20;
  int *local_1c;
  undefined auStack_18 [4];
  int *local_14;
  
  local_28 = param_1 + 2;
  local_24 = param_1[4];
  local_1c = param_1[3];
  local_2c = param_2;
  local_20 = local_28;
  FUN_000a9260(auStack_18,local_28,local_1c,local_28,local_24,&local_2c);
  if (((local_14 == param_1[4]) || (iVar1 = FUN_000a7bb0(*local_14 + 0xc,local_2c), iVar1 != 0)) &&
     (local_14 = *param_1, local_14 != (int *)0x0)) {
    local_14 = (int *)FUN_000a92dc(*param_1 + 3,local_2c);
  }
  return local_14;
}



