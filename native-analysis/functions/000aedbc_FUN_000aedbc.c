/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aedbc FUN_000aedbc */

void FUN_000aedbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_000aed18(param_1,param_3,param_4);
  if (param_4 != 0) {
    while( true ) {
      *puVar1 = *param_5;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      FUN_000aebdc(puVar1 + 1,puVar1 + 1,0,param_5 + 1,param_5[2],param_5 + 1,param_5[3]);
      param_4 = param_4 + -1;
      if (param_4 == 0) break;
      puVar1 = puVar1 + 5;
    }
  }
  return;
}



