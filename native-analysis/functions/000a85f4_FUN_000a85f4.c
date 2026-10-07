/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a85f4 FUN_000a85f4 */

void FUN_000a85f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_000a8500(param_1,param_3,param_4,param_4,param_2,param_3);
  if (param_4 != 0) {
    do {
      *puVar1 = 0;
      FUN_000a8490(puVar1,*param_5);
      param_4 = param_4 + -1;
      puVar1 = puVar1 + 1;
    } while (param_4 != 0);
  }
  return;
}



