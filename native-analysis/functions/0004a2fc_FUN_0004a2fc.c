/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004a2fc FUN_0004a2fc */

void FUN_0004a2fc(int param_1)

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
    if ((void **)*(void **)(param_1 + 4) == ppvVar1) break;
    ppvVar2 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar2;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar1 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



