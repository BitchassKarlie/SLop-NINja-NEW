/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049bf8 FUN_00049bf8 */

void FUN_00049bf8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int **ppiVar2;
  int **ppiVar3;
  
  ppiVar2 = *(int ***)(param_1 + 4);
  ppiVar3 = (int **)*ppiVar2;
  if (ppiVar2 != ppiVar3) {
    do {
      while (piVar1 = ppiVar3[2], *(char *)(piVar1 + 9) == '\0') {
        ppiVar3 = (int **)*ppiVar3;
        if (ppiVar3 == ppiVar2) {
          return;
        }
      }
      (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
      ppiVar2 = *(int ***)(param_1 + 4);
      ppiVar3 = (int **)*ppiVar3;
    } while (ppiVar3 != ppiVar2);
  }
  return;
}



