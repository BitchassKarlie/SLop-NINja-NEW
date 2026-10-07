/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c7c4 FUN_0001c7c4 */

int * FUN_0001c7c4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  void **ppvVar5;
  int *piVar6;
  void **ppvVar7;
  void **ppvVar8;
  
  if (0 < *(int *)(param_1 + 0x1020)) {
    iVar1 = 0;
    iVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x1010) + iVar1 + 4);
      for (ppiVar3 = (int **)*piVar2; (int **)piVar2 != ppiVar3; ppiVar3 = (int **)*ppiVar3) {
        piVar6 = ppiVar3[2];
        if (param_2 == piVar6[1]) goto LAB_0001c804;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar4 != *(int *)(param_1 + 0x1020));
  }
  piVar6 = (int *)0x0;
LAB_0001c804:
  ppvVar7 = *(void ***)(param_1 + 0x1018);
  ppvVar5 = (void **)*ppvVar7;
  iVar1 = param_4;
  if (ppvVar7 != ppvVar5) {
    do {
      while (((piVar2 = (int *)ppvVar5[2], *piVar2 == *(int *)(param_4 + 4) &&
              ((piVar2[2] == 0 || (param_2 == piVar2[2])))) &&
             ((piVar2[1] == 0 || ((param_3 != 0 && (piVar2[1] == *(int *)(param_3 + 4)))))))) {
        (**(code **)(*(int *)piVar2[3] + 0x30))((int *)piVar2[3],param_3,piVar6,param_4,iVar1);
        ppvVar5 = (void **)*ppvVar5;
        if (ppvVar7 == ppvVar5) goto LAB_0001c850;
      }
      ppvVar5 = (void **)*ppvVar5;
    } while (ppvVar7 != ppvVar5);
LAB_0001c850:
    ppvVar5 = *(void ***)(param_1 + 0x1018);
    ppvVar7 = (void **)*ppvVar5;
  }
  while( true ) {
    if (ppvVar7 == ppvVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x2c))(piVar6,param_3,param_4);
        piVar6 = (int *)0x1;
      }
      return piVar6;
    }
    if (*(void ***)(param_1 + 0x1018) == ppvVar7) break;
    ppvVar8 = (void **)*ppvVar7;
    *(void ***)ppvVar7[1] = ppvVar8;
    *(void **)((int)*ppvVar7 + 4) = ppvVar7[1];
    operator_delete(ppvVar7);
    *(int *)(param_1 + 0x101c) = *(int *)(param_1 + 0x101c) + -1;
    ppvVar7 = ppvVar8;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



