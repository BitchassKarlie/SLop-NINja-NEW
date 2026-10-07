/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a7c78 FUN_000a7c78 */

int FUN_000a7c78(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined local_18 [4];
  int *local_14;
  
  local_28 = param_1 + 0x1c;
  local_24 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x20);
  local_2c = param_2;
  local_20 = local_28;
  FUN_000a7c14(local_18,local_28,local_1c,local_28,local_24,&local_2c);
  if ((*(int **)(param_1 + 0x24) == local_14) ||
     (iVar1 = FUN_000a7bb0(*local_14 + 0x3c,local_2c), iVar1 != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)local_14 - *(int *)(param_1 + 0x20) >> 2;
  }
  return iVar1;
}



