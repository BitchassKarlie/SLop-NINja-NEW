/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072af8 FUN_00072af8 */

int FUN_00072af8(int param_1,int param_2)

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
      if (*(int *)(param_2 + 0x50) != 0) {
        iVar5 = FUN_00072724(param_2 + 0x50);
      }
      iVar2 = *(int *)(param_2 + 0x54);
      if (iVar2 != 0) {
        iVar2 = FUN_00072724(param_2 + 0x54);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x54);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x54);
          iVar5 = 1;
        }
      }
      uVar3 = *(uint *)(param_2 + 0x50);
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 0x4c);
      }
      if ((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 0x4c))) {
        uVar3 = *(uint *)(iVar2 + 0x4c);
      }
      *(uint *)(param_2 + 0x4c) = uVar3 + 1;
      param_2 = *(int *)(param_2 + 0x58);
    } while (param_2 != 0);
  }
  iVar2 = FUN_00072724(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar4 + 0x50);
  if (iVar2 != 0) {
    iVar5 = 1;
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)(uVar3 + 0x4c);
  }
  if ((*(int *)(iVar4 + 0x54) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar4 + 0x54) + 0x4c), uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar4 + 0x4c) = uVar3 + 1;
  return iVar5;
}



