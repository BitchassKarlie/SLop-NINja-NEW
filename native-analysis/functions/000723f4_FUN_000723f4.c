/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000723f4 FUN_000723f4 */

int FUN_000723f4(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    iVar5 = FUN_000723f4(iVar5 + 0x8c);
    iVar1 = FUN_000723f4(*param_1 + 0x90);
    if (iVar1 != 0) {
      iVar5 = 1;
    }
    iVar1 = FUN_00071cd8(param_1);
    iVar4 = *param_1;
    uVar3 = *(uint *)(iVar4 + 0x8c);
    if (iVar1 != 0) {
      iVar5 = 1;
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)(uVar3 + 0x88);
    }
    if ((*(int *)(iVar4 + 0x90) == 0) ||
       (uVar2 = *(uint *)(*(int *)(iVar4 + 0x90) + 0x88), uVar2 <= uVar3)) {
      *(uint *)(iVar4 + 0x88) = uVar3 + 1;
    }
    else {
      *(uint *)(iVar4 + 0x88) = uVar2 + 1;
    }
  }
  return iVar5;
}



