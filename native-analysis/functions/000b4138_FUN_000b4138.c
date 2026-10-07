/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4138 FUN_000b4138 */

void FUN_000b4138(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_000b40c0(param_1,param_3,param_4,param_4,param_2,param_3);
  if (param_4 != 0) {
    while( true ) {
      *puVar1 = 0;
      FUN_000a07fc(puVar1,*param_5);
      param_4 = param_4 + -1;
      puVar1[1] = param_5[1];
      puVar1[2] = param_5[2];
      puVar1[3] = param_5[3];
      if (param_4 == 0) break;
      puVar1 = puVar1 + 4;
    }
  }
  return;
}



