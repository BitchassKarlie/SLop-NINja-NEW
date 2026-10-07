/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008c908 _INIT_85 */

void _INIT_85(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0008c9c4 + 0x8c916;
  if (-1 < *(int *)(DAT_0008c9c0 + 0x8c910) << 0x1f) {
    *(int *)(DAT_0008c9c0 + 0x8c910) = 1;
    iVar2 = DAT_0008c9c8;
    uVar6 = DAT_0008c9bc;
    uVar1 = DAT_0008c9b8;
    *(undefined4 *)(DAT_0008c9c8 + 0x8c92a) = DAT_0008c9bc;
    *(undefined4 *)(iVar2 + 0x8c92e) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c932) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c936) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c93a) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c93e) = uVar6;
    *(undefined4 *)(iVar2 + 0x8c942) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c946) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c94a) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c94e) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c952) = uVar6;
    *(undefined4 *)(iVar2 + 0x8c956) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c95a) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c95e) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c962) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c966) = uVar6;
  }
  if (-1 < *(int *)(DAT_0008c9cc + 0x8c96e) << 0x1f) {
    *(int *)(DAT_0008c9cc + 0x8c96e) = 1;
    iVar3 = DAT_0008c9d8;
    iVar2 = DAT_0008c9d4;
    uVar1 = DAT_0008c9b8;
    puVar4 = (undefined4 *)(DAT_0008c9d4 + 0x8c984);
    uVar6 = *(undefined4 *)(iVar5 + DAT_0008c9d0);
    *puVar4 = DAT_0008c9b8;
    *(undefined4 *)(iVar2 + 0x8c988) = uVar1;
    *(undefined4 *)(iVar2 + 0x8c98c) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x8c994,uVar6);
  }
  if (-1 < *(int *)(DAT_0008c9dc + 0x8c99c) << 0x1f) {
    *(int *)(DAT_0008c9dc + 0x8c99c) = 1;
    iVar5 = *(int *)(DAT_0008c9e0 + 0x8c9aa) + 1;
    *(int *)(DAT_0008c9e0 + 0x8c9aa) = iVar5;
    *(int *)(DAT_0008c9e4 + 0x8c9b4) = iVar5;
  }
  return;
}



