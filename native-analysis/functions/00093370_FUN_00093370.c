/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093370 FUN_00093370 */

int FUN_00093370(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    iVar1 = 0;
    iVar4 = iVar3;
    do {
      iVar3 = iVar1;
      uVar2 = (uint)*(byte *)(iVar4 + 0xf);
      bVar5 = uVar2 != 1;
      if (bVar5) {
        uVar2 = *(uint *)(iVar4 + 0xc);
      }
      iVar4 = *(int *)(iVar4 + 4);
      if (bVar5) {
        iVar3 = iVar3 + (uVar2 & 0xffffff);
      }
      iVar1 = iVar3;
    } while (iVar4 != 0);
  }
  return *(int *)(param_1 + 0x14) - iVar3;
}



