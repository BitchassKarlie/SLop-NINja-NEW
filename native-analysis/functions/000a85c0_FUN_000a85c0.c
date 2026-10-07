/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a85c0 FUN_000a85c0 */

undefined4 *
FUN_000a85c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_000a8500(param_2,param_4,1,param_4,param_3,param_4);
  *puVar1 = 0;
  FUN_000a8490(puVar1,*param_5);
  *param_1 = param_2;
  param_1[1] = puVar1 + 1;
  return param_1;
}



