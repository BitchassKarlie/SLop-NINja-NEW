/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e83c FUN_0008e83c */

void FUN_0008e83c(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int **ppiVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  ppiVar1 = (int **)*piVar2;
  while (((int **)piVar2 != ppiVar1 &&
         ((FUN_000ab304(ppiVar1[2],param_2,param_3,param_4), *param_3 == 0 || (*param_4 == 0))))) {
    ppiVar1 = (int **)*ppiVar1;
  }
  return;
}



