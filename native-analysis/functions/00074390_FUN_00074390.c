/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00074390 FUN_00074390 */

int FUN_00074390(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14);
  *param_2 = param_1 + 0x10;
  param_2[1] = iVar1;
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}



