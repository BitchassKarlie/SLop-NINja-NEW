/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009376c FUN_0009376c */

undefined4 * FUN_0009376c(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = param_2 + 3U & 0xfffffffc;
  pvVar1 = operator_new__(uVar2);
  param_1[5] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[4] = pvVar1;
  param_1[6] = pvVar1;
  param_1[7] = (int)pvVar1 + uVar2;
  return param_1;
}



