/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000882cc FUN_000882cc */

void FUN_000882cc(undefined4 param_1,void *param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar3 = *(void ***)((int)param_2 + 0xc);
  ppvVar1 = (void **)*ppvVar3;
  while( true ) {
    if (ppvVar3 == ppvVar1) {
      operator_delete(*(void **)((int)param_2 + 0xc));
      operator_delete(param_2);
      return;
    }
    if ((void **)*(void **)((int)param_2 + 0xc) == ppvVar1) break;
    ppvVar2 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar2;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)((int)param_2 + 0x10) = *(int *)((int)param_2 + 0x10) + -1;
    ppvVar1 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



