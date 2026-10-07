/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079fc4 FUN_00079fc4 */

void FUN_00079fc4(int param_1,int param_2)

{
  int *piVar1;
  int **ppiVar2;
  int **ppiVar3;
  void *pvVar4;
  int **ppiVar5;
  
  ppiVar2 = *(int ***)(param_1 + 8);
  ppiVar3 = (int **)*ppiVar2;
  while (ppiVar2 != ppiVar3) {
    piVar1 = ppiVar3[2];
    if ((*(char *)(piVar1 + 6) == '\0') || (param_2 != 0)) {
      (**(code **)(*piVar1 + 0x18))();
      piVar1 = ppiVar3[2];
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      ppiVar3[2] = (int *)0x0;
    }
    if (*(int ***)(param_1 + 8) == ppiVar3) break;
    ppiVar5 = (int **)*ppiVar3;
    *ppiVar3[1] = (int)ppiVar5;
    (*ppiVar3)[1] = (int)ppiVar3[1];
    operator_delete(ppiVar3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    ppiVar3 = ppiVar5;
    ppiVar2 = *(int ***)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00082490();
    pvVar4 = *(void **)(param_1 + 0xb8);
    if (pvVar4 != (void *)0x0) {
      FUN_00082438(pvVar4);
      operator_delete(pvVar4);
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  return;
}



