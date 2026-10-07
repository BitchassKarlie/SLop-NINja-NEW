/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6738 FUN_000a6738 */

void FUN_000a6738(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  int iVar1;
  
  iVar1 = **(int **)(DAT_000a6760 + 0xa6744 + DAT_000a6764);
  if (iVar1 != 0) {
    if (param_4 != 0) {
      param_4 = 1;
    }
    if (param_5 != '\0') {
      param_5 = '\x01';
    }
    FUN_000ad7b8(iVar1,param_3,param_4,param_5);
  }
  return;
}



