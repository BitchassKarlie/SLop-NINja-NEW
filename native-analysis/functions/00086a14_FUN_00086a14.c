/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00086a14 FUN_00086a14 */

undefined4 * FUN_00086a14(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0008696c(param_1 + 3,param_1 + 3,0,param_2 + 3,param_2[4],param_2 + 3,param_2[5]);
  memcpy(param_1 + 7,param_2 + 7,0x50);
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  return param_1;
}



