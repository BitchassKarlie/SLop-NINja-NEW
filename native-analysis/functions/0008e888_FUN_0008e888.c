/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e888 FUN_0008e888 */

void FUN_0008e888(int param_1,void *param_2)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *pvVar4;
  
  if (param_2 != (void *)0x0) {
    ppvVar3 = *(void ***)(param_1 + 4);
    ppvVar2 = (void **)*ppvVar3;
    if (ppvVar3 != ppvVar2) {
      pvVar4 = ppvVar2[2];
      pvVar1 = pvVar4;
      while (param_2 != pvVar4) {
        ppvVar2 = (void **)*ppvVar2;
        if (ppvVar3 == ppvVar2) {
          return;
        }
        pvVar1 = param_2;
        pvVar4 = ppvVar2[2];
      }
      *(void **)ppvVar2[1] = *ppvVar2;
      *(void **)((int)*ppvVar2 + 4) = ppvVar2[1];
      operator_delete(ppvVar2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      FUN_000ab360(pvVar1);
      operator_delete(pvVar1);
    }
  }
  return;
}



