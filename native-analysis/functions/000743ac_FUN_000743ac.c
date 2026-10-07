/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000743ac FUN_000743ac */

int FUN_000743ac(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_2 + 4);
  *(int *)(param_2 + 4) = iVar1;
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}



