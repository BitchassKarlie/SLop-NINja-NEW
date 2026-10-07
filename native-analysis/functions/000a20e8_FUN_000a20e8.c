/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a20e8 FUN_000a20e8 */

int FUN_000a20e8(int param_1,int param_2)

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
      if (*(int *)(param_2 + 0xc) != 0) {
        iVar5 = FUN_000a1ec8(param_2 + 0xc);
      }
      iVar2 = *(int *)(param_2 + 0x10);
      if (iVar2 != 0) {
        iVar2 = FUN_000a1ec8(param_2 + 0x10);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x10);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x10);
          iVar5 = 1;
        }
      }
      uVar3 = *(uint *)(param_2 + 0xc);
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 8);
      }
      if ((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 8))) {
        uVar3 = *(uint *)(iVar2 + 8);
      }
      *(uint *)(param_2 + 8) = uVar3 + 1;
      param_2 = *(int *)(param_2 + 0x14);
    } while (param_2 != 0);
  }
  iVar2 = FUN_000a1ec8(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar4 + 0xc);
  if (iVar2 != 0) {
    iVar5 = 1;
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)(uVar3 + 8);
  }
  if ((*(int *)(iVar4 + 0x10) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar4 + 0x10) + 8), uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar4 + 8) = uVar3 + 1;
  return iVar5;
}



