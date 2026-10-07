/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00095768 FUN_00095768 */

int FUN_00095768(int param_1,int param_2)

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
      if (*(int *)(param_2 + 0x18) != 0) {
        iVar5 = FUN_00095548(param_2 + 0x18);
      }
      iVar2 = *(int *)(param_2 + 0x1c);
      if (iVar2 != 0) {
        iVar2 = FUN_00095548(param_2 + 0x1c);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x1c);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x1c);
          iVar5 = 1;
        }
      }
      uVar3 = *(uint *)(param_2 + 0x18);
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 0x14);
      }
      if ((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 0x14))) {
        uVar3 = *(uint *)(iVar2 + 0x14);
      }
      *(uint *)(param_2 + 0x14) = uVar3 + 1;
      param_2 = *(int *)(param_2 + 0x20);
    } while (param_2 != 0);
  }
  iVar2 = FUN_00095548(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar4 + 0x18);
  if (iVar2 != 0) {
    iVar5 = 1;
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)(uVar3 + 0x14);
  }
  if ((*(int *)(iVar4 + 0x1c) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar4 + 0x1c) + 0x14), uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar4 + 0x14) = uVar3 + 1;
  return iVar5;
}



