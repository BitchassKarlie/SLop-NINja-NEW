/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bf00 FUN_0001bf00 */

void FUN_0001bf00(int param_1,int *param_2)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  
  ppiVar3 = *(int ***)(param_1 + 0x1018);
  ppiVar1 = (int **)*ppiVar3;
  if (ppiVar3 != ppiVar1) {
    do {
      if (ppiVar1[2] == param_2) {
        if (ppiVar1 != *(int ***)(param_1 + 0x1018)) {
          piVar2 = *ppiVar1;
          *ppiVar1[1] = (int)piVar2;
          (*ppiVar1)[1] = (int)ppiVar1[1];
          operator_delete(ppiVar1);
          *(int *)(param_1 + 0x101c) = *(int *)(param_1 + 0x101c) + -1;
          ppiVar1 = (int **)piVar2;
        }
      }
      else {
        ppiVar1 = (int **)*ppiVar1;
      }
    } while (ppiVar3 != ppiVar1);
  }
  return;
}



