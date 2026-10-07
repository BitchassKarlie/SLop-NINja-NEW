/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072944 FUN_00072944 */

int FUN_00072944(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    iVar5 = FUN_00072944(iVar5 + 0x50);
    iVar1 = FUN_00072944(*param_1 + 0x54);
    if (iVar1 != 0) {
      iVar5 = 1;
    }
    iVar1 = FUN_00072724(param_1);
    iVar4 = *param_1;
    uVar3 = *(uint *)(iVar4 + 0x50);
    if (iVar1 != 0) {
      iVar5 = 1;
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)(uVar3 + 0x4c);
    }
    if ((*(int *)(iVar4 + 0x54) == 0) ||
       (uVar2 = *(uint *)(*(int *)(iVar4 + 0x54) + 0x4c), uVar2 <= uVar3)) {
      *(uint *)(iVar4 + 0x4c) = uVar3 + 1;
    }
    else {
      *(uint *)(iVar4 + 0x4c) = uVar2 + 1;
    }
  }
  return iVar5;
}



