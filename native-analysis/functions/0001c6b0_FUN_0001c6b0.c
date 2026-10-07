/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c6b0 FUN_0001c6b0 */

int FUN_0001c6b0(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  FUN_0001c2d0();
  FUN_0001be3c(param_1 + 0x104c);
  FUN_0001be0c(param_1 + 0x1028);
  ppvVar3 = *(void ***)(param_1 + 0x1018);
  ppvVar1 = (void **)*ppvVar3;
  while( true ) {
    if (ppvVar3 == ppvVar1) {
      operator_delete(*(void **)(param_1 + 0x1018));
      return param_1;
    }
    if ((void **)*(void **)(param_1 + 0x1018) == ppvVar1) break;
    ppvVar2 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar2;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0x101c) = *(int *)(param_1 + 0x101c) + -1;
    ppvVar1 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



