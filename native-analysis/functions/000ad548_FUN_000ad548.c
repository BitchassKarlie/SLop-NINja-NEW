/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad548 FUN_000ad548 */

void FUN_000ad548(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  void **ppvVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar6 = *(int ***)(param_1 + 8);
  ppiVar5 = (int **)*ppiVar6;
  while (ppiVar6 != ppiVar5) {
    pvVar3 = ppiVar5[2];
    if ((param_2 == *(int *)((int)pvVar3 + 8)) || (param_2 == 0)) {
      ppvVar4 = *(void ***)(param_1 + 8);
      ppiVar5 = (int **)*ppiVar5;
      ppvVar1 = (void **)*ppvVar4;
      while (ppvVar4 != ppvVar1) {
        if (pvVar3 == ppvVar1[2]) {
          if (ppvVar1 != (void **)*(void **)(param_1 + 8)) {
            ppvVar2 = (void **)*ppvVar1;
            *(void ***)ppvVar1[1] = ppvVar2;
            *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
            operator_delete(ppvVar1);
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
            ppvVar1 = ppvVar2;
          }
        }
        else {
          ppvVar1 = (void **)*ppvVar1;
        }
      }
      if (param_3 != 0) {
        FUN_000ad3cc(pvVar3);
        operator_delete(pvVar3);
      }
    }
    else {
      ppiVar5 = (int **)*ppiVar5;
    }
  }
  return;
}



