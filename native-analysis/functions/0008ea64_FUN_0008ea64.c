/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008ea64 FUN_0008ea64 */

int FUN_0008ea64(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_1c;
  void *pvStack_18;
  void *pvStack_14;
  
  ppvVar2 = (void **)operator_new(0xc);
  *ppvVar2 = local_1c;
  ppvVar2[1] = pvStack_18;
  ppvVar2[2] = pvStack_14;
  *ppvVar2 = ppvVar2;
  ppvVar2[1] = ppvVar2;
  *(void ***)(param_1 + 4) = ppvVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  ppvVar1 = (void **)*ppvVar2;
  while( true ) {
    if (ppvVar2 == ppvVar1) {
      return param_1;
    }
    if ((void **)*(void **)(param_1 + 4) == ppvVar1) break;
    ppvVar3 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar3;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar1 = ppvVar3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



