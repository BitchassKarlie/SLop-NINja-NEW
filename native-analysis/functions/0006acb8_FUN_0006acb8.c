/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006acb8 FUN_0006acb8 */

void FUN_0006acb8(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar3 = *(void ***)(param_1 + 4);
  ppvVar1 = (void **)*ppvVar3;
  while( true ) {
    if (ppvVar3 == ppvVar1) {
      return;
    }
    if (ppvVar1 == (void **)*(void **)(param_1 + 4)) break;
    ppvVar2 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar2;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    if (ppvVar1[3] != (void *)0x0) {
      operator_delete(ppvVar1[3]);
      ppvVar1[4] = (void *)0x0;
      ppvVar1[5] = (void *)0x0;
      ppvVar1[3] = (void *)0x0;
    }
    operator_delete(ppvVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar1 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



