/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fc30 FUN_0006fc30 */

void FUN_0006fc30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar4 + 0x170);
    if (iVar2 != 0) {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0xc);
      } while (*(int *)(iVar3 + 0xc) != 0);
      do {
        iVar2 = *(int *)(iVar3 + 0x10);
        while( true ) {
          if (-1 < *(int *)(iVar3 + 4)) {
            *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
          }
          if (iVar2 != 0) break;
          iVar1 = *(int *)(iVar3 + 0x14);
          if (iVar1 == 0) goto LAB_0006fc60;
          iVar2 = *(int *)(iVar1 + 0x10);
          bVar5 = iVar3 == iVar2;
          iVar3 = iVar1;
          if (bVar5) {
            do {
              iVar3 = *(int *)(iVar1 + 0x14);
              if (iVar3 == 0) goto LAB_0006fc60;
              iVar2 = *(int *)(iVar3 + 0x10);
              bVar5 = iVar2 == iVar1;
              iVar1 = iVar3;
            } while (bVar5);
          }
        }
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 0xc);
        } while (*(int *)(iVar3 + 0xc) != 0);
      } while (iVar3 != 0);
    }
LAB_0006fc60:
    iVar4 = iVar4 + 0x10;
    if (iVar4 == 0x40) {
      return;
    }
  } while( true );
}



