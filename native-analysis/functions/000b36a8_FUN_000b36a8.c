/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b36a8 FUN_000b36a8 */

void FUN_000b36a8(int param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void *pvVar5;
  
  ppvVar3 = *(void ***)(param_1 + 0x14);
  ppvVar1 = (void **)*ppvVar3;
  ppvVar2 = ppvVar3;
  ppvVar4 = ppvVar1;
  if (ppvVar3 != ppvVar1) {
    do {
      *(undefined *)((int)ppvVar1[2] + 4) = 1;
      ppvVar1 = (void **)*ppvVar1;
      ppvVar3 = *(void ***)(param_1 + 0x14);
    } while (ppvVar1 != ppvVar3);
    ppvVar4 = (void **)*ppvVar1;
    ppvVar2 = ppvVar1;
  }
  if (ppvVar4 != ppvVar2) {
    do {
      pvVar5 = ppvVar4[2];
      if (pvVar5 != (void *)0x0) {
        FUN_000a7a64(pvVar5);
        operator_delete(pvVar5);
        ppvVar3 = *(void ***)(param_1 + 0x14);
      }
      ppvVar4 = (void **)*ppvVar4;
      ppvVar2 = ppvVar4;
    } while (ppvVar4 != ppvVar3);
  }
  ppvVar4 = (void **)*ppvVar2;
  while( true ) {
    if (ppvVar4 == ppvVar2) {
      return;
    }
    if ((void **)*(void **)(param_1 + 0x14) == ppvVar4) break;
    ppvVar1 = (void **)*ppvVar4;
    *(void ***)ppvVar4[1] = ppvVar1;
    *(void **)((int)*ppvVar4 + 4) = ppvVar4[1];
    operator_delete(ppvVar4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    ppvVar4 = ppvVar1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



