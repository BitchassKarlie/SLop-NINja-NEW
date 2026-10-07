/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000757f4 FUN_000757f4 */

int FUN_000757f4(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (param_3 < param_4) {
    do {
      FUN_00075784(param_2,param_3);
      FUN_0007499c(param_3 + 0x10);
      uVar1 = param_3 + 0x24;
      FUN_000747c8(param_3);
      param_2 = param_2 + 0x24;
      param_3 = uVar1;
    } while (uVar1 < param_4);
  }
  return param_2;
}



