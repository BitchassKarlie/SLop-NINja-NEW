/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079374 FUN_00079374 */

void FUN_00079374(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = DAT_000793e0;
  iVar5 = DAT_000793dc;
  uVar1 = DAT_000793d4;
  *(undefined4 *)(param_1 + 100) = DAT_000793d4;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar2 = DAT_000793d8;
  puVar4 = *(undefined4 **)(iVar5 + 0x79384 + iVar3);
  *(undefined4 *)(param_1 + 0x5c) = DAT_000793d8;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x74) = 1;
  iVar5 = *(int *)(iVar5 + 0x79384 + DAT_000793e4);
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x18) = uVar1;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0xc) = uVar1;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x1c) = uVar1;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x10) = uVar1;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x20) = uVar1;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x14) = uVar1;
  return;
}



