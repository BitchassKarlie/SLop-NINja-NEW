/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000acb24 FUN_000acb24 */

void FUN_000acb24(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  
  FUN_000ac66c(&local_20,param_1);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_0009f860(param_1 + 2);
  piVar1 = (int *)param_2[2];
  param_1[2] = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  param_1[3] = param_2[3];
  *param_2 = local_20;
  param_2[1] = local_1c;
  FUN_0009f860(param_2 + 2);
  param_2[2] = local_18;
  if (local_18 != (int *)0x0) {
    *local_18 = *local_18 + 1;
  }
  param_2[3] = local_14;
  FUN_0009f860(&local_18);
  return;
}



