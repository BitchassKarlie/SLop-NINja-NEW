/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006c798 FUN_0006c798 */

int FUN_0006c798(uint param_1)

{
  int iVar1;
  
  if (param_1 == 4) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1 << (param_1 & 0xff);
  }
  return iVar1;
}



