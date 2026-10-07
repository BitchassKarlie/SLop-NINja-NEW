/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a7d48 FUN_000a7d48 */

int FUN_000a7d48(int param_1)

{
  int iVar1;
  
  if (param_1 != -0x18) {
    iVar1 = param_1 + 0x28;
    do {
      iVar1 = iVar1 + -8;
      FUN_000a08c8(iVar1);
    } while (iVar1 != param_1 + 0x18);
  }
  FUN_000a08c8(param_1 + 0x10);
  FUN_000a08c8(param_1 + 8);
  FUN_000a08c8(param_1);
  return param_1;
}



