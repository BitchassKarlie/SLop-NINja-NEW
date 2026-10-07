/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c710 FUN_0001c710 */

void FUN_0001c710(int param_1)

{
  void **ppvVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  void **ppvVar5;
  int **ppiVar6;
  void **ppvVar7;
  int *piVar8;
  int **ppiVar9;
  
  ppiVar9 = *(int ***)(param_1 + 0x1018);
  ppiVar2 = (int **)*ppiVar9;
  if (ppiVar9 != ppiVar2) {
    ppiVar4 = ppiVar2;
    ppiVar6 = ppiVar9;
    while( true ) {
      piVar8 = ppiVar4[2];
      piVar3 = piVar8;
      if (ppiVar6 != ppiVar2) {
        while( true ) {
          if (ppiVar2[2] == piVar3) {
            if (ppiVar2 != *(int ***)(int **)(param_1 + 0x1018)) {
              piVar3 = *ppiVar2;
              *ppiVar2[1] = (int)piVar3;
              (*ppiVar2)[1] = (int)ppiVar2[1];
              operator_delete(ppiVar2);
              *(int *)(param_1 + 0x101c) = *(int *)(param_1 + 0x101c) + -1;
              ppiVar2 = (int **)piVar3;
            }
          }
          else {
            ppiVar2 = (int **)*ppiVar2;
          }
          if (ppiVar6 == ppiVar2) break;
          piVar3 = ppiVar4[2];
        }
      }
      if (piVar8 != (int *)0x0) {
        operator_delete(piVar8);
      }
      ppiVar4 = (int **)*ppiVar4;
      if (ppiVar9 == ppiVar4) break;
      ppiVar6 = *(int ***)(int **)(param_1 + 0x1018);
      ppiVar2 = (int **)*ppiVar6;
    }
  }
  ppvVar7 = *(void ***)(param_1 + 0x1018);
  ppvVar1 = (void **)*ppvVar7;
  while( true ) {
    if (ppvVar7 == ppvVar1) {
      return;
    }
    if ((void **)*(void **)(param_1 + 0x1018) == ppvVar1) break;
    ppvVar5 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar5;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0x101c) = *(int *)(param_1 + 0x101c) + -1;
    ppvVar1 = ppvVar5;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



