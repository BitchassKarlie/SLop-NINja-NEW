/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030ea0 FUN_00030ea0 */

void FUN_00030ea0(int param_1,int param_2)

{
  int **ppiVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void **ppvVar5;
  int *piVar6;
  int *piVar7;
  undefined **local_38;
  undefined **local_34;
  void *local_30;
  void *pvStack_2c;
  
  ppvVar5 = *(void ***)(param_1 + 4);
  ppvVar3 = ppvVar5;
  ppvVar2 = (void **)*ppvVar5;
  while( true ) {
    if (ppvVar5 == ppvVar2) {
      piVar7 = *(int **)(param_2 + 4);
      ppvVar3 = (void **)*ppvVar3;
      ppiVar1 = (int **)*piVar7;
      while ((int **)piVar7 != ppiVar1) {
        piVar6 = *ppiVar1;
        ppvVar2 = (void **)operator_new(0x10);
        local_30 = ppiVar1[2];
        pvStack_2c = ppiVar1[3];
        *ppvVar2 = &local_38;
        ppvVar2[1] = &local_38;
        ppvVar2[2] = local_30;
        ppvVar2[3] = pvStack_2c;
        *ppvVar2 = ppvVar3;
        ppvVar2[1] = ppvVar3[1];
        ppvVar3[1] = ppvVar2;
        *(void ***)ppvVar2[1] = ppvVar2;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        ppvVar3 = ppvVar2;
        ppiVar1 = (int **)piVar6;
        local_34 = (undefined **)&local_38;
        local_38 = (undefined **)&local_38;
      }
      return;
    }
    if (ppvVar3 == ppvVar2) break;
    ppvVar4 = (void **)*ppvVar2;
    *(void ***)ppvVar2[1] = ppvVar4;
    *(void **)((int)*ppvVar2 + 4) = ppvVar2[1];
    operator_delete(ppvVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar3 = *(void ***)(param_1 + 4);
    ppvVar2 = ppvVar4;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



