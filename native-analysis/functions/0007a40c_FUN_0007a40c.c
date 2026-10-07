/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a40c FUN_0007a40c */

void FUN_0007a40c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 0xc);
    } while (*(int *)(iVar3 + 0xc) != 0);
    FUN_0007a3f0(*(undefined4 *)(iVar3 + 4));
    iVar2 = *(int *)(iVar3 + 0x10);
    if (*(int *)(iVar3 + 0x10) == 0) goto LAB_0007a442;
    while( true ) {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 0xc);
      } while (*(int *)(iVar1 + 0xc) != 0);
      if (iVar1 == 0) break;
      while( true ) {
        FUN_0007a3f0(*(undefined4 *)(iVar1 + 4));
        iVar2 = *(int *)(iVar1 + 0x10);
        iVar3 = iVar1;
        if (*(int *)(iVar1 + 0x10) != 0) break;
LAB_0007a442:
        iVar1 = *(int *)(iVar3 + 0x14);
        if (iVar1 == 0) goto LAB_0007a45c;
        iVar2 = iVar1;
        if (*(int *)(iVar1 + 0x10) == iVar3) {
          do {
            iVar1 = *(int *)(iVar2 + 0x14);
            if (iVar1 == 0) goto LAB_0007a45c;
            bVar4 = *(int *)(iVar1 + 0x10) == iVar2;
            iVar2 = iVar1;
          } while (bVar4);
        }
      }
    }
  }
LAB_0007a45c:
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 0x68);
    } while (*(int *)(iVar3 + 0x68) != 0);
    FUN_00081b60(iVar3 + 4);
    iVar2 = *(int *)(iVar3 + 0x6c);
    if (*(int *)(iVar3 + 0x6c) == 0) goto LAB_0007a48e;
    while( true ) {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 0x68);
      } while (*(int *)(iVar1 + 0x68) != 0);
      if (iVar1 == 0) break;
      while( true ) {
        FUN_00081b60(iVar1 + 4);
        iVar2 = *(int *)(iVar1 + 0x6c);
        iVar3 = iVar1;
        if (*(int *)(iVar1 + 0x6c) != 0) break;
LAB_0007a48e:
        iVar1 = *(int *)(iVar3 + 0x70);
        if (iVar1 == 0) {
          return;
        }
        iVar2 = iVar1;
        if (*(int *)(iVar1 + 0x6c) == iVar3) {
          do {
            iVar1 = *(int *)(iVar2 + 0x70);
            if (iVar1 == 0) {
              return;
            }
            bVar4 = iVar2 == *(int *)(iVar1 + 0x6c);
            iVar2 = iVar1;
          } while (bVar4);
        }
      }
    }
  }
  return;
}



