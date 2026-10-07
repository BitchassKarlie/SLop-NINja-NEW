/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a1d4 FUN_0009a1d4 */

int FUN_0009a1d4(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x18) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x20) + 8;
  }
  return iVar1;
}



