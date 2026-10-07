/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a736c FUN_000a736c */

undefined4 * FUN_000a736c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 local_1c [2];
  
  pvVar1 = operator_new(0x4c);
  FUN_000a7310(pvVar1,param_2,param_3);
  FUN_000a6db4(local_1c,pvVar1);
  *param_1 = 0;
  FUN_000a6dd0(param_1,local_1c[0]);
  FUN_000a6dfc(local_1c);
  return param_1;
}



