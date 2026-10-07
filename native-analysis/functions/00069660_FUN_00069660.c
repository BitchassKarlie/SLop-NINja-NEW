/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00069660 FUN_00069660 */

void FUN_00069660(int param_1,int param_2)

{
  void **ppvVar1;
  int **ppiVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  int *piVar6;
  void **ppvVar7;
  
  ppvVar7 = *(void ***)(param_1 + 4);
  ppvVar4 = ppvVar7;
  ppvVar1 = (void **)*ppvVar7;
  while( true ) {
    if (ppvVar7 == ppvVar1) {
      piVar6 = *(int **)(param_2 + 4);
      ppiVar2 = (int **)*piVar6;
      ppvVar4 = (void **)*ppvVar4;
      while ((int **)piVar6 != ppiVar2) {
        iVar3 = (int)(ppiVar2 + 2);
        ppiVar2 = (int **)*ppiVar2;
        ppvVar1 = (void **)FUN_00069574(param_1,iVar3);
        *ppvVar1 = ppvVar4;
        ppvVar1[1] = ppvVar4[1];
        ppvVar4[1] = ppvVar1;
        *(void ***)ppvVar1[1] = ppvVar1;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        ppvVar4 = ppvVar1;
      }
      return;
    }
    if (ppvVar1 == ppvVar4) break;
    ppvVar5 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar5;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    if (ppvVar1[3] != (void *)0x0) {
      operator_delete(ppvVar1[3]);
      ppvVar1[4] = (void *)0x0;
      ppvVar1[5] = (void *)0x0;
      ppvVar1[3] = (void *)0x0;
    }
    operator_delete(ppvVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar4 = *(void ***)(param_1 + 4);
    ppvVar1 = ppvVar5;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



