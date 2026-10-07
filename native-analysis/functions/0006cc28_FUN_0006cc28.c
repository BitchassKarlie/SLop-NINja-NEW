/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006cc28 FUN_0006cc28 */

void FUN_0006cc28(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined **)(DAT_0006ccb8 + 0x6cc30 + DAT_0006ccbc);
  iVar3 = DAT_0006ccc0 + 0x6cc3a;
  uVar4 = *(undefined4 *)(puVar2 + 0x50);
  uVar1 = FUN_0008f414(iVar3);
  FUN_00072d2c(uVar4,iVar3,uVar1,1,1,1);
  *puVar2 = 2;
  uVar1 = DAT_0006ccb0;
  *(undefined4 *)(puVar2 + 400) = 0;
  *(undefined4 *)(puVar2 + 0x8c) = uVar1;
  puVar2[0x19d] = 0;
  uVar1 = DAT_0006ccb4;
  puVar2[0x38] = 0;
  *(undefined4 *)(puVar2 + 0x14) = uVar1;
  *(undefined4 *)(puVar2 + 0x30) = uVar1;
  uVar4 = *(undefined4 *)(*(int *)(puVar2 + 0x50) + 0xf4);
  puVar2[0x20] = 0;
  *(undefined4 *)(puVar2 + 0x1a4) = uVar1;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 0x34) = uVar4;
  puVar2[0x174] = 0;
  puVar2[0x19c] = 0;
  puVar2[0x1a2] = 0;
  *(undefined4 *)(puVar2 + 0x170) = 0;
  *(undefined4 *)(puVar2 + 0x168) = 0;
  *(undefined4 *)(puVar2 + 0x164) = 0;
  *(undefined4 *)(puVar2 + 0x24) = 0;
  *(undefined4 *)(puVar2 + 0x28) = 0;
  *(undefined4 *)(puVar2 + 0x2c) = 0;
  puVar2[0x1a8] = 0;
  return;
}



