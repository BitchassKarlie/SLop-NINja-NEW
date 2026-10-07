/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007bc60 FUN_0007bc60 */

void FUN_0007bc60(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  void **ppvVar4;
  
  ppvVar1 = *(void ***)(param_1 + 8);
  ppvVar2 = (void **)*ppvVar1;
  if (ppvVar1 != ppvVar2) {
    do {
      if ((int *)ppvVar2[2] != (int *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**(code **)(*ppvVar2[2] + 4))();
        ppvVar2[2] = (void *)0x0;
        ppvVar1 = *(void ***)(param_1 + 8);
      }
      ppvVar2 = (void **)*ppvVar2;
    } while (ppvVar2 != ppvVar1);
  }
  ppvVar1 = (void **)*ppvVar2;
  while( true ) {
    if (ppvVar2 == ppvVar1) {
      pvVar3 = *(void **)(param_1 + 0x98);
      if (pvVar3 != (void *)0x0) {
        FUN_0007bc18(pvVar3);
        operator_delete(pvVar3);
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      pvVar3 = *(void **)(param_1 + 0xb8);
      if (pvVar3 != (void *)0x0) {
        FUN_00082438(pvVar3);
        operator_delete(pvVar3);
        *(undefined4 *)(param_1 + 0xb8) = 0;
      }
      return;
    }
    if ((void **)*(void **)(param_1 + 8) == ppvVar1) break;
    ppvVar4 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar4;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    ppvVar1 = ppvVar4;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



