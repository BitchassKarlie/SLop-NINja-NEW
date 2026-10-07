/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00070620 FUN_00070620 */

void FUN_00070620(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar3 = *(void ***)(param_1 + 0x28);
  ppvVar1 = (void **)*ppvVar3;
  while( true ) {
    if (ppvVar3 == ppvVar1) {
      return;
    }
    if ((void **)*(void **)(param_1 + 0x28) == ppvVar1) break;
    ppvVar2 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar2;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    ppvVar1 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



