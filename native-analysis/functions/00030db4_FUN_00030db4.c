/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030db4 FUN_00030db4 */

void FUN_00030db4(int param_1,int param_2)

{
  void **ppvVar1;
  int **ppiVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  void **ppvVar6;
  int *piVar7;
  
  ppvVar6 = *(void ***)(param_1 + 4);
  ppvVar4 = ppvVar6;
  ppvVar1 = (void **)*ppvVar6;
  while( true ) {
    if (ppvVar6 == ppvVar1) {
      piVar7 = *(int **)(param_2 + 4);
      ppiVar2 = (int **)*piVar7;
      ppvVar4 = (void **)*ppvVar4;
      while ((int **)piVar7 != ppiVar2) {
        iVar3 = (int)(ppiVar2 + 2);
        ppiVar2 = (int **)*ppiVar2;
        ppvVar1 = (void **)FUN_00030ce0(param_1,iVar3);
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
    operator_delete(ppvVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar4 = *(void ***)(param_1 + 4);
    ppvVar1 = ppvVar5;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



