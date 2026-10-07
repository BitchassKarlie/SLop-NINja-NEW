/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4640 FUN_000b4640 */

undefined4 * FUN_000b4640(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  FUN_000a07fc(param_1,*param_2);
  param_1[1] = param_2[1];
  param_1[2] = 0;
  FUN_000a07fc(param_1 + 2,param_2[2]);
  param_1[3] = param_2[3];
  param_1[4] = 0;
  FUN_000a07fc(param_1 + 4,param_2[4]);
  uVar1 = param_2[5];
  param_1[6] = 0;
  param_1[5] = uVar1;
  FUN_000a07fc(param_1 + 6,param_2[6]);
  uVar1 = param_2[7];
  param_1[8] = 0;
  param_1[7] = uVar1;
  FUN_000a07fc(param_1 + 8,param_2[8]);
  param_1[9] = param_2[9];
  return param_1;
}



