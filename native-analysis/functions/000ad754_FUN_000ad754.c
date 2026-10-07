/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad754 FUN_000ad754 */

int * FUN_000ad754(int *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_24;
  void *pvStack_20;
  void *pvStack_1c;
  
  *param_1 = DAT_000ad7b0 + 0xad764;
  ppvVar2 = (void **)operator_new(0xc);
  *ppvVar2 = local_24;
  ppvVar2[1] = pvStack_20;
  ppvVar2[2] = pvStack_1c;
  *ppvVar2 = ppvVar2;
  ppvVar2[1] = ppvVar2;
  param_1[2] = (int)ppvVar2;
  param_1[3] = 0;
  ppvVar1 = (void **)*ppvVar2;
  while( true ) {
    if (ppvVar2 == ppvVar1) {
      return param_1;
    }
    if ((void **)param_1[2] == ppvVar1) break;
    ppvVar3 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar3;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    param_1[3] = param_1[3] + -1;
    ppvVar1 = ppvVar3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



