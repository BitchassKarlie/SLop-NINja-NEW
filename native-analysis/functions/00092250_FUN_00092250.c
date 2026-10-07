/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00092250 FUN_00092250 */

int FUN_00092250(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar3 = *(void ***)(param_1 + 8);
  ppvVar1 = (void **)*ppvVar3;
  while( true ) {
    if (ppvVar3 == ppvVar1) {
      operator_delete(*(void **)(param_1 + 8));
      return param_1;
    }
    if ((void **)*(void **)(param_1 + 8) == ppvVar1) break;
    ppvVar2 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar2;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    ppvVar1 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



