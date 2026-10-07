/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac66c FUN_000ac66c */

undefined4 * FUN_000ac66c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_0009f860(param_1 + 2);
  piVar1 = (int *)param_2[2];
  param_1[2] = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  param_1[3] = param_2[3];
  return param_1;
}



