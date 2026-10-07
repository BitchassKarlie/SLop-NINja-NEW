/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1390 FUN_000a1390 */

void FUN_000a1390(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_000a12d0(param_1,param_3,param_4,param_4,param_2,param_3);
  if (param_4 != 0) {
    do {
      *puVar1 = 0;
      FUN_000a1260(puVar1,*param_5);
      param_4 = param_4 + -1;
      puVar1 = puVar1 + 1;
    } while (param_4 != 0);
  }
  return;
}



