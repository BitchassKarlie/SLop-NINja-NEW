/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00018288 FUN_00018288 */

int FUN_00018288(int param_1)

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



