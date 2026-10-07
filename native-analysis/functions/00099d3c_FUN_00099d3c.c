/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099d3c FUN_00099d3c */

void FUN_00099d3c(int **param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    *param_1 = (int *)(DAT_00099d6c + 0x99d4c);
  }
  else {
    piVar1 = (int *)operator_new__(param_3 + 0xfU & 0xfffffffc);
    *param_1 = piVar1;
    *piVar1 = param_2;
    *(undefined *)((int)piVar1 + param_2 + 8) = 0;
    (*param_1)[1] = param_3;
  }
  return;
}



