/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004a394 FUN_0004a394 */

void FUN_0004a394(int param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  void **ppvVar4;
  void **ppvVar5;
  int **ppiVar6;
  undefined4 local_3c;
  void *pvStack_38;
  void *pvStack_34;
  undefined4 *****local_30;
  undefined4 *****local_2c;
  int *local_28;
  undefined auStack_24 [4];
  void **local_20;
  int local_1c;
  
  ppiVar6 = *(int ***)(param_1 + 4);
  local_20 = (void **)operator_new(0xc);
  *local_20 = (void *)local_3c;
  local_20[1] = pvStack_38;
  local_20[2] = pvStack_34;
  *local_20 = local_20;
  local_20[1] = local_20;
  local_1c = 0;
  ppiVar3 = (int **)**(int ***)(param_1 + 4);
  if (ppiVar6 != ppiVar3) {
    do {
      while (iVar1 = (**(code **)(*ppiVar3[2] + 0x24))(), ppvVar5 = local_20, iVar1 != 0) {
        piVar2 = (int *)operator_new(0xc);
        local_28 = ppiVar3[2];
        *piVar2 = (int)&local_30;
        piVar2[1] = (int)&local_30;
        piVar2[2] = (int)local_28;
        *piVar2 = (int)ppvVar5;
        piVar2[1] = (int)ppvVar5[1];
        ppvVar5[1] = piVar2;
        *(int **)piVar2[1] = piVar2;
        local_1c = local_1c + 1;
        ppiVar3 = (int **)*ppiVar3;
        local_30 = &local_30;
        local_2c = &local_30;
        if (ppiVar6 == ppiVar3) goto LAB_0004a410;
      }
      ppiVar3 = (int **)*ppiVar3;
    } while (ppiVar6 != ppiVar3);
  }
LAB_0004a410:
  ppvVar4 = (void **)*local_20;
  ppvVar5 = local_20;
  if (local_20 != ppvVar4) {
    do {
      while( true ) {
        ppiVar6 = *(int ***)(param_1 + 4);
        ppiVar3 = (int **)*ppiVar6;
        if (ppiVar6 == ppiVar3) break;
        piVar2 = ppiVar3[2];
        while ((int *)ppvVar4[2] != piVar2) {
          ppiVar3 = (int **)*ppiVar3;
          if (ppiVar6 == ppiVar3) goto LAB_0004a436;
          piVar2 = ppiVar3[2];
        }
        FUN_00049d14(param_1);
        ppvVar4 = (void **)*ppvVar4;
        ppvVar5 = local_20;
        if (ppvVar4 == local_20) goto LAB_0004a43c;
      }
LAB_0004a436:
      ppvVar4 = (void **)*ppvVar4;
    } while (ppvVar4 != ppvVar5);
  }
LAB_0004a43c:
  FUN_0004a330(auStack_24);
  return;
}



