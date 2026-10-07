/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003070c FUN_0003070c */

int FUN_0003070c(int param_1)

{
  int iVar1;
  
  if (param_1 != -0x16c) {
    iVar1 = param_1 + 0x1ac;
    do {
      iVar1 = iVar1 + -0x10;
      FUN_000305fc(iVar1);
    } while (iVar1 != param_1 + 0x16c);
  }
  FUN_00030650(param_1 + 0x150);
  FUN_00030650(param_1 + 0x140);
  FUN_000305b0(param_1 + 0x134);
  FUN_000304f0(param_1 + 0x24);
  FUN_000306b8(param_1 + 0x10);
  FUN_000306b8(param_1);
  return param_1;
}



