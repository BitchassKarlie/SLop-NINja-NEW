/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000378f4 FUN_000378f4 */

int FUN_000378f4(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar4 = *(void ***)(param_1 + 4);
  ppvVar2 = ppvVar4;
  ppvVar1 = (void **)*ppvVar4;
  while( true ) {
    if (ppvVar4 == ppvVar1) {
      operator_delete(ppvVar2);
      return param_1;
    }
    if (ppvVar1 == ppvVar2) break;
    ppvVar3 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar3;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar2 = *(void ***)(param_1 + 4);
    ppvVar1 = ppvVar3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



