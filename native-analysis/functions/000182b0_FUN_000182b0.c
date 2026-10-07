/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000182b0 FUN_000182b0 */

int FUN_000182b0(int param_1)

{
  int iVar1;
  
  FUN_000181e8();
  if (param_1 != -0x10) {
    iVar1 = param_1 + 0xc0;
    do {
      iVar1 = iVar1 + -0x10;
      FUN_00017c4c(iVar1);
    } while (iVar1 != param_1 + 0x10);
  }
  FUN_00017c4c(param_1);
  return param_1;
}



