/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077758 FUN_00077758 */

void FUN_00077758(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      piVar1 = (int *)(iVar2 + 0xc);
      iVar3 = iVar2;
      iVar2 = *piVar1;
    } while (*piVar1 != 0);
    do {
      while( true ) {
        if (*(int **)(iVar3 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar3 + 4) + 4))();
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        iVar2 = *(int *)(iVar3 + 0x10);
        if (*(int *)(iVar3 + 0x10) != 0) break;
        iVar2 = *(int *)(iVar3 + 0x14);
        if (iVar2 == 0) {
          return;
        }
        bVar4 = *(int *)(iVar2 + 0x10) == iVar3;
        iVar3 = iVar2;
        if (bVar4) {
          do {
            iVar3 = *(int *)(iVar2 + 0x14);
            if (iVar3 == 0) {
              return;
            }
            bVar4 = *(int *)(iVar3 + 0x10) == iVar2;
            iVar2 = iVar3;
          } while (bVar4);
        }
      }
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0xc);
      } while (*(int *)(iVar3 + 0xc) != 0);
    } while (iVar3 != 0);
  }
  return;
}



