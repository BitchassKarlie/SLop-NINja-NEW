/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007c0ec FUN_0007c0ec */

int FUN_0007c0ec(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2;
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(param_2 + 0x68) != 0) {
        iVar5 = FUN_0007becc(param_2 + 0x68);
      }
      iVar2 = *(int *)(param_2 + 0x6c);
      if (iVar2 != 0) {
        iVar2 = FUN_0007becc(param_2 + 0x6c);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x6c);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x6c);
          iVar5 = 1;
        }
      }
      uVar3 = *(uint *)(param_2 + 0x68);
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 100);
      }
      if ((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 100))) {
        uVar3 = *(uint *)(iVar2 + 100);
      }
      *(uint *)(param_2 + 100) = uVar3 + 1;
      param_2 = *(int *)(param_2 + 0x70);
    } while (param_2 != 0);
  }
  iVar2 = FUN_0007becc(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar4 + 0x68);
  if (iVar2 != 0) {
    iVar5 = 1;
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)(uVar3 + 100);
  }
  if ((*(int *)(iVar4 + 0x6c) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar4 + 0x6c) + 100), uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar4 + 100) = uVar3 + 1;
  return iVar5;
}



