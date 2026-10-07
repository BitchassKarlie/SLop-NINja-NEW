/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ec90 FUN_0009ec90 */

void FUN_0009ec90(int param_1,int param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar3 = *(void ***)(param_1 + 0x58);
  ppvVar1 = (void **)*ppvVar3;
  while (ppvVar3 != ppvVar1) {
    if (ppvVar1[2] == (void *)param_2) {
      if (ppvVar1 != (void **)*(void **)(param_1 + 0x58)) {
        ppvVar2 = (void **)*ppvVar1;
        *(void ***)ppvVar1[1] = ppvVar2;
        *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
        operator_delete(ppvVar1);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        ppvVar1 = ppvVar2;
      }
    }
    else {
      ppvVar1 = (void **)*ppvVar1;
    }
  }
  return;
}



