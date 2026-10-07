/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000181e8 FUN_000181e8 */

void FUN_000181e8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  
  iVar2 = DAT_0001827c + 0x181f6;
  FUN_00017d64(*(undefined4 *)(iVar2 + DAT_00018280),0);
  FUN_00017d64(*(undefined4 *)(iVar2 + DAT_00018284),0);
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      piVar1 = (int *)(iVar2 + 0xc);
      iVar3 = iVar2;
      iVar2 = *piVar1;
    } while (*piVar1 != 0);
    do {
      while( true ) {
        FUN_00017d64(*(int *)(iVar3 + 4) + 0x84,0);
        pvVar4 = *(void **)(iVar3 + 4);
        if (pvVar4 != (void *)0x0) {
          if (*(void **)((int)pvVar4 + 0x19c) != (void *)0x0) {
            operator_delete(*(void **)((int)pvVar4 + 0x19c));
            *(undefined4 *)((int)pvVar4 + 0x19c) = 0;
          }
          FUN_00017d90((int)pvVar4 + 0x84);
          operator_delete(pvVar4);
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        iVar2 = *(int *)(iVar3 + 0x10);
        if (*(int *)(iVar3 + 0x10) != 0) break;
        iVar2 = *(int *)(iVar3 + 0x14);
        if (iVar2 == 0) goto LAB_00018250;
        bVar5 = iVar3 == *(int *)(iVar2 + 0x10);
        iVar3 = iVar2;
        if (bVar5) {
          do {
            iVar3 = *(int *)(iVar2 + 0x14);
            if (iVar3 == 0) goto LAB_00018250;
            bVar5 = *(int *)(iVar3 + 0x10) == iVar2;
            iVar2 = iVar3;
          } while (bVar5);
        }
      }
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0xc);
      } while (*(int *)(iVar3 + 0xc) != 0);
    } while (iVar3 != 0);
  }
LAB_00018250:
  FUN_00017c4c(param_1);
  return;
}



