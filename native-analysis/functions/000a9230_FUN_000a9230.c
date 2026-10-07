/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9230 FUN_000a9230 */

void FUN_000a9230(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_3 + 4);
  uVar1 = param_1 + 3U & 0xfffffffc;
  *(int *)(param_2 + 0xc) = iVar3;
  uVar5 = uVar1;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  iVar2 = uVar1 + iVar3 * 4;
  *(uint *)(param_2 + 8) = uVar5;
  iVar4 = *(int *)(param_3 + 8);
  iVar3 = iVar2;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  *(int *)(param_2 + 0x14) = iVar4;
  *(int *)(param_2 + 0x10) = iVar3;
  FUN_000a91fc(iVar2 + iVar4);
  return;
}



