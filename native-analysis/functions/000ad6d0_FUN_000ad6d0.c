/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad6d0 FUN_000ad6d0 */

int * FUN_000ad6d0(int *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  *param_1 = DAT_000ad71c + 0xad6e4;
  ppvVar3 = (void **)param_1[2];
  ppvVar1 = (void **)*ppvVar3;
  while( true ) {
    if (ppvVar3 == ppvVar1) {
      operator_delete((void *)param_1[2]);
      return param_1;
    }
    if ((void **)param_1[2] == ppvVar1) break;
    ppvVar2 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar2;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    param_1[3] = param_1[3] + -1;
    ppvVar1 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



