/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007c578 FUN_0007c578 */

int FUN_0007c578(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    iVar5 = FUN_0007c578(iVar5 + 0xc);
    iVar1 = FUN_0007c578(*param_1 + 0x10);
    if (iVar1 != 0) {
      iVar5 = 1;
    }
    iVar1 = FUN_0007c358(param_1);
    iVar4 = *param_1;
    uVar3 = *(uint *)(iVar4 + 0xc);
    if (iVar1 != 0) {
      iVar5 = 1;
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)(uVar3 + 8);
    }
    if ((*(int *)(iVar4 + 0x10) == 0) ||
       (uVar2 = *(uint *)(*(int *)(iVar4 + 0x10) + 8), uVar2 <= uVar3)) {
      *(uint *)(iVar4 + 8) = uVar3 + 1;
    }
    else {
      *(uint *)(iVar4 + 8) = uVar2 + 1;
    }
  }
  return iVar5;
}



