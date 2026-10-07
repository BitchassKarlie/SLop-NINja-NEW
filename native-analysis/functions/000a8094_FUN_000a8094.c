/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8094 FUN_000a8094 */

undefined4 *
FUN_000a8094(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_000a7fa8(param_2,param_4,1,param_4,param_3,param_4);
  *puVar1 = 0;
  FUN_000a07fc(puVar1,*param_5);
  puVar1[1] = param_5[1];
  puVar1[2] = param_5[2];
  *param_1 = param_2;
  param_1[1] = puVar1 + 3;
  return param_1;
}



