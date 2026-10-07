/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a91c4 FUN_000a91c4 */

void FUN_000a91c4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_3 + 0x14);
  uVar1 = param_1 + 3U & 0xfffffffc;
  *(int *)(param_2 + 0x2c) = iVar3;
  uVar4 = uVar1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  *(uint *)(param_2 + 0x28) = uVar4;
  iVar5 = *(int *)(param_3 + 0x18);
  iVar2 = uVar1 + iVar3 * 0xc;
  iVar3 = iVar2;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  *(int *)(param_2 + 0x30) = iVar3;
  *(int *)(param_2 + 0x34) = iVar5;
  FUN_000a9144(iVar2 + iVar5 * 0x10);
  return;
}



