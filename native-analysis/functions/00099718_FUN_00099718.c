/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099718 FUN_00099718 */

int ** FUN_00099718(int **param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 8))(param_2);
    FUN_000a751c(iVar1 + 4);
  }
  return param_1;
}



