/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00071ff4 FUN_00071ff4 */

int FUN_00071ff4(int param_1,int param_2)

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
      if (*(int *)(param_2 + 0x8c) != 0) {
        iVar5 = FUN_00071cd8(param_2 + 0x8c);
      }
      iVar2 = *(int *)(param_2 + 0x90);
      if (iVar2 != 0) {
        iVar2 = FUN_00071cd8(param_2 + 0x90);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x90);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x90);
          iVar5 = 1;
        }
      }
      uVar3 = *(uint *)(param_2 + 0x8c);
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 0x88);
      }
      if ((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 0x88))) {
        uVar3 = *(uint *)(iVar2 + 0x88);
      }
      *(uint *)(param_2 + 0x88) = uVar3 + 1;
      param_2 = *(int *)(param_2 + 0x94);
    } while (param_2 != 0);
  }
  iVar2 = FUN_00071cd8(param_1 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar4 + 0x8c);
  if (iVar2 != 0) {
    iVar5 = 1;
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)(uVar3 + 0x88);
  }
  if ((*(int *)(iVar4 + 0x90) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar4 + 0x90) + 0x88), uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar4 + 0x88) = uVar3 + 1;
  return iVar5;
}



