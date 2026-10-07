/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030fb8 FUN_00030fb8 */

int * FUN_00030fb8(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 ***local_34;
  undefined4 ***local_30;
  undefined auStack_2c [12];
  int local_20;
  int local_1c;
  
  piVar1 = (int *)operator_new(0x1c);
  FUN_00030f30(auStack_2c,param_2);
  local_20 = *(int *)(param_2 + 0xc);
  local_1c = *(int *)(param_2 + 0x10);
  *piVar1 = (int)&local_34;
  piVar1[1] = (int)&local_34;
  local_34 = &local_34;
  local_30 = &local_34;
  FUN_00030f30(piVar1 + 2,auStack_2c);
  piVar1[5] = local_20;
  piVar1[6] = local_1c;
  FUN_0003052c(auStack_2c);
  return piVar1;
}



