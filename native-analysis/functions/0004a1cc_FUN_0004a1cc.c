/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004a1cc FUN_0004a1cc */

void FUN_0004a1cc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  void **ppvVar5;
  int iVar6;
  void *pvVar7;
  
  iVar1 = DAT_0004a268;
  iVar6 = DAT_0004a264 + 0x4a1da;
  *(undefined *)(*(int *)(iVar6 + DAT_0004a268) + 0x38) = 1;
  ppvVar4 = *(void ***)(param_1 + 4);
  ppvVar5 = (void **)*ppvVar4;
  if (ppvVar4 != ppvVar5) {
    do {
      while (piVar3 = (int *)ppvVar5[2], *(char *)((int)piVar3 + 0x26) == '\0') {
        piVar2 = piVar3 + 0xb;
        if (*(char *)(piVar3 + 0x13) != '\0') {
          piVar2 = (int *)piVar3[0xb];
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))();
          piVar3 = (int *)ppvVar5[2];
        }
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(piVar3);
          ppvVar5[2] = (void *)0x0;
        }
        ppvVar4 = *(void ***)(param_1 + 4);
        ppvVar5 = (void **)*ppvVar5;
        if (ppvVar5 == ppvVar4) goto LAB_0004a22a;
      }
      ppvVar5 = (void **)*ppvVar5;
    } while (ppvVar5 != ppvVar4);
  }
LAB_0004a22a:
  ppvVar4 = (void **)*ppvVar5;
  while( true ) {
    if (ppvVar5 == ppvVar4) {
      *(undefined *)(*(int *)(iVar6 + iVar1) + 0x38) = 0;
      return;
    }
    if ((void **)*(void **)(param_1 + 4) == ppvVar4) break;
    pvVar7 = *ppvVar4;
    *(void **)ppvVar4[1] = pvVar7;
    *(void **)((int)*ppvVar4 + 4) = ppvVar4[1];
    operator_delete(ppvVar4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar4 = (void **)pvVar7;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



