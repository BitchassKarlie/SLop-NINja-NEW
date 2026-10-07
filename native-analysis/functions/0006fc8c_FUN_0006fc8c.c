/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fc8c FUN_0006fc8c */

void FUN_0006fc8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  do {
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 4;
    *(undefined4 *)(iVar1 + 0x1b4) = 0xffffffff;
  } while (iVar2 != 0x2c);
  return;
}



