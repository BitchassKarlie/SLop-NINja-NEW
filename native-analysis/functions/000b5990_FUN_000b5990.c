/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5990 FUN_000b5990 */

void FUN_000b5990(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_000b5630(param_1,param_3,param_4,param_4,param_2,param_3);
  if (param_4 != 0) {
    do {
      FUN_000b5324(iVar1,param_5);
      iVar1 = iVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



