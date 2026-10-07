/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007ad34 FUN_0007ad34 */

int FUN_0007ad34(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void **ppvVar5;
  
  ppvVar4 = *(void ***)(param_1 + 4);
  ppvVar1 = ppvVar4;
  ppvVar3 = ppvVar4;
  ppvVar5 = (void **)*ppvVar4;
  while (ppvVar2 = ppvVar5, ppvVar4 != ppvVar2) {
    ppvVar1 = ppvVar2;
    ppvVar5 = ppvVar3;
    if (ppvVar3 != ppvVar2) {
      ppvVar5 = (void **)*ppvVar2;
      *(void ***)ppvVar2[1] = ppvVar5;
      *(void **)((int)*ppvVar2 + 4) = ppvVar2[1];
      operator_delete(ppvVar2);
      ppvVar3 = *(void ***)(param_1 + 4);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      ppvVar1 = ppvVar3;
    }
  }
  operator_delete(ppvVar1);
  return param_1;
}



