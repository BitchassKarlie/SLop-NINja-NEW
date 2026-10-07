/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007bd40 FUN_0007bd40 */

void FUN_0007bd40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  bool bVar6;
  int local_20;
  int *local_1c;
  
  piVar4 = (int *)**(int **)(param_1 + 0x14);
  if (*(int **)(param_1 + 0x14) != piVar4) {
    do {
      FUN_0007bc60(piVar4[2]);
      pvVar5 = (void *)piVar4[2];
      if (pvVar5 != (void *)0x0) {
        FUN_0007bce0(pvVar5);
        operator_delete(pvVar5);
        piVar4[2] = 0;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x14));
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      piVar4 = (int *)(iVar2 + 0xc);
      iVar3 = iVar2;
      iVar2 = *piVar4;
    } while (*piVar4 != 0);
    do {
      while( true ) {
        FUN_0007bc60(*(undefined4 *)(iVar3 + 4));
        pvVar5 = *(void **)(iVar3 + 4);
        if (pvVar5 != (void *)0x0) {
          FUN_0007bce0(pvVar5);
          operator_delete(pvVar5);
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        iVar2 = *(int *)(iVar3 + 0x10);
        if (*(int *)(iVar3 + 0x10) != 0) break;
        iVar2 = *(int *)(iVar3 + 0x14);
        if (iVar2 == 0) goto LAB_0007bdac;
        bVar6 = *(int *)(iVar2 + 0x10) == iVar3;
        iVar3 = iVar2;
        if (bVar6) {
          do {
            iVar3 = *(int *)(iVar2 + 0x14);
            if (iVar3 == 0) goto LAB_0007bdac;
            bVar6 = *(int *)(iVar3 + 0x10) == iVar2;
            iVar2 = iVar3;
          } while (bVar6);
        }
      }
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0xc);
      } while (*(int *)(iVar3 + 0xc) != 0);
    } while (iVar3 != 0);
  }
LAB_0007bdac:
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 0x68);
    } while (*(int *)(iVar3 + 0x68) != 0);
    FUN_00082490(iVar3 + 4);
    iVar2 = *(int *)(iVar3 + 0x6c);
    if (*(int *)(iVar3 + 0x6c) == 0) goto LAB_0007bdde;
    while( true ) {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 0x68);
      } while (*(int *)(iVar1 + 0x68) != 0);
      if (iVar1 == 0) break;
      while( true ) {
        FUN_00082490(iVar1 + 4);
        iVar2 = *(int *)(iVar1 + 0x6c);
        iVar3 = iVar1;
        if (*(int *)(iVar1 + 0x6c) != 0) break;
LAB_0007bdde:
        iVar1 = *(int *)(iVar3 + 0x70);
        if (iVar1 == 0) goto LAB_0007bdf8;
        iVar2 = iVar1;
        if (*(int *)(iVar1 + 0x6c) == iVar3) {
          do {
            iVar1 = *(int *)(iVar2 + 0x70);
            if (iVar1 == 0) goto LAB_0007bdf8;
            bVar6 = *(int *)(iVar1 + 0x6c) == iVar2;
            iVar2 = iVar1;
          } while (bVar6);
        }
      }
    }
  }
LAB_0007bdf8:
  FUN_000797f4(param_1 + 0x2c);
  piVar4 = *(int **)(param_1 + 0x40);
  local_1c = (int *)*piVar4;
  local_20 = param_1 + 0x3c;
  while (piVar4 != local_1c) {
    FUN_000797ac(&local_20,param_1 + 0x3c,local_20,local_1c);
  }
  return;
}



