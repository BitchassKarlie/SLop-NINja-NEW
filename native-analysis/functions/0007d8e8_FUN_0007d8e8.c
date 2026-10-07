/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007d8e8 FUN_0007d8e8 */

void FUN_0007d8e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar3 = iVar2;
    if (iVar2 == param_2) goto LAB_0007d904;
    while (iVar3 = iVar2, iVar3 != 0) {
      while( true ) {
        iVar2 = *(int *)(iVar3 + 0x3c);
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 != param_2) break;
LAB_0007d904:
        iVar1 = *(int *)(param_1 + 0xc);
        bVar4 = iVar2 == iVar1;
        if (bVar4) {
          iVar3 = *(int *)(iVar2 + 0x3c);
        }
        else {
          iVar1 = *(int *)(iVar2 + 0x3c);
        }
        if (bVar4) {
          *(int *)(param_1 + 0xc) = iVar3;
        }
        if (!bVar4) {
          *(int *)(iVar3 + 0x3c) = iVar1;
        }
        if (*(undefined4 **)(iVar2 + 0x40) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar2 + 0x40) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(iVar1 + 0xc);
        if (iVar2 < *(int *)(iVar1 + 0x10)) {
          *(int *)(*(int *)(iVar1 + 8) + iVar2 * 4) = param_2;
          *(int *)(iVar1 + 0xc) = iVar2 + 1;
        }
        if (iVar3 == 0) {
          return;
        }
      }
    }
  }
  return;
}



