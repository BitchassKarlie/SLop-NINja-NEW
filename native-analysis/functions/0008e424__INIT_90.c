/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e424 _INIT_90 */

void _INIT_90(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0008e4c0 + 0x8e432;
  if (-1 < *(int *)(DAT_0008e4bc + 0x8e42c) << 0x1f) {
    *(int *)(DAT_0008e4bc + 0x8e42c) = 1;
    iVar2 = DAT_0008e4c4;
    uVar6 = DAT_0008e4b8;
    uVar1 = DAT_0008e4b4;
    *(undefined4 *)(DAT_0008e4c4 + 0x8e446) = DAT_0008e4b8;
    *(undefined4 *)(iVar2 + 0x8e44a) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e44e) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e452) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e456) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e45a) = uVar6;
    *(undefined4 *)(iVar2 + 0x8e45e) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e462) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e466) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e46a) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e46e) = uVar6;
    *(undefined4 *)(iVar2 + 0x8e472) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e476) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e47a) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e47e) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e482) = uVar6;
  }
  if (-1 < *(int *)(DAT_0008e4c8 + 0x8e48a) << 0x1f) {
    *(int *)(DAT_0008e4c8 + 0x8e48a) = 1;
    iVar3 = DAT_0008e4d4;
    iVar2 = DAT_0008e4d0;
    uVar1 = DAT_0008e4b4;
    puVar4 = (undefined4 *)(DAT_0008e4d0 + 0x8e4a0);
    uVar6 = *(undefined4 *)(iVar5 + DAT_0008e4cc);
    *puVar4 = DAT_0008e4b4;
    *(undefined4 *)(iVar2 + 0x8e4a4) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e4a8) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x8e4b0,uVar6);
  }
  return;
}



