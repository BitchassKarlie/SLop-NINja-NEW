/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084ec8 FUN_00084ec8 */

void FUN_00084ec8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_00084e9c();
  iVar4 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar4 + 4) = 0;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  iVar6 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 0xc) - iVar6;
  if (iVar5 == -1) {
    FUN_00017cb8(iVar4,0xffffffff);
    iVar2 = *(int *)(iVar4 + 4);
    iVar1 = (*(int *)(iVar4 + 8) + -1) - iVar2;
  }
  else {
    FUN_00017cb8(iVar4,iVar5);
    if (iVar5 == 0) goto LAB_00084f16;
    iVar2 = *(int *)(iVar4 + 4);
    iVar1 = (*(int *)(iVar4 + 8) + -1) - iVar2;
  }
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(iVar2 + iVar3) = *(undefined *)(iVar6 + iVar3);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar5 != iVar3);
    iVar2 = *(int *)(iVar4 + 4);
  }
  *(int *)(iVar4 + 0xc) = iVar2 + iVar5;
LAB_00084f16:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return;
}



