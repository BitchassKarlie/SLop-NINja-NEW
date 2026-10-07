/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00068a88 FUN_00068a88 */

int FUN_00068a88(int param_1)

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
      if (ppvVar2[3] != (void *)0x0) {
        operator_delete(ppvVar2[3]);
        ppvVar2[4] = (void *)0x0;
        ppvVar2[5] = (void *)0x0;
        ppvVar2[3] = (void *)0x0;
      }
      operator_delete(ppvVar2);
      return param_1;
    }
    if (ppvVar2 == ppvVar1) break;
    ppvVar3 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar3;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    if (ppvVar1[3] != (void *)0x0) {
      operator_delete(ppvVar1[3]);
      ppvVar1[4] = (void *)0x0;
      ppvVar1[5] = (void *)0x0;
      ppvVar1[3] = (void *)0x0;
    }
    operator_delete(ppvVar1);
    ppvVar2 = *(void ***)(param_1 + 4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar1 = ppvVar3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



