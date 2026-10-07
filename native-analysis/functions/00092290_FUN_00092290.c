/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00092290 FUN_00092290 */

void FUN_00092290(undefined *param_1)

{
  int *piVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  int iVar5;
  
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  ppvVar4 = *(void ***)(param_1 + 8);
  ppvVar3 = (void **)*ppvVar4;
  if (ppvVar4 != ppvVar3) {
    do {
      piVar1 = (int *)ppvVar3[2];
      if (iVar5 == 0) {
        FUN_000ad548(piVar1,0,1);
      }
      iVar5 = iVar5 + 1;
      (**(code **)(*piVar1 + 0x10))(piVar1);
      (**(code **)(*piVar1 + 4))(piVar1);
      ppvVar3 = (void **)*ppvVar3;
    } while (ppvVar4 != ppvVar3);
    ppvVar3 = *(void ***)(param_1 + 8);
    ppvVar4 = (void **)*ppvVar3;
  }
  while( true ) {
    if (ppvVar4 == ppvVar3) {
      return;
    }
    if (*(void ***)(param_1 + 8) == ppvVar4) break;
    ppvVar2 = (void **)*ppvVar4;
    *(void ***)ppvVar4[1] = ppvVar2;
    *(void **)((int)*ppvVar4 + 4) = ppvVar4[1];
    operator_delete(ppvVar4);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    ppvVar4 = ppvVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



