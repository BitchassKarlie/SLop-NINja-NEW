/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a91fc FUN_000a91fc */

void FUN_000a91fc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_3 + 0xc);
  uVar1 = param_1 + 3U & 0xfffffffc;
  *(int *)(param_2 + 0x1c) = iVar3;
  uVar5 = uVar1;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  iVar2 = uVar1 + iVar3 * 0x40;
  *(uint *)(param_2 + 0x18) = uVar5;
  iVar4 = *(int *)(param_3 + 0x10);
  iVar3 = iVar2;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  *(int *)(param_2 + 0x20) = iVar3;
  *(int *)(param_2 + 0x24) = iVar4;
  FUN_000a91c4(iVar2 + iVar4 * 8);
  return;
}



