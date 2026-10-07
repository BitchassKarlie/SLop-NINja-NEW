/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000926b8 FUN_000926b8 */

undefined * FUN_000926b8(undefined *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_24;
  void *pvStack_20;
  void *pvStack_1c;
  
  ppvVar2 = (void **)operator_new(0xc);
  *ppvVar2 = local_24;
  ppvVar2[1] = pvStack_20;
  ppvVar2[2] = pvStack_1c;
  *ppvVar2 = ppvVar2;
  ppvVar2[1] = ppvVar2;
  *(void ***)(param_1 + 8) = ppvVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ppvVar1 = (void **)*ppvVar2;
  while( true ) {
    if (ppvVar2 == ppvVar1) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    if ((void **)*(void **)(param_1 + 8) == ppvVar1) break;
    ppvVar3 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar3;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    ppvVar1 = ppvVar3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



