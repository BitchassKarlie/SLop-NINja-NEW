/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008fd20 _INIT_92 */

void _INIT_92(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = DAT_0008fe0c;
  iVar3 = DAT_0008fe08;
  iVar6 = DAT_0008fdec;
  uVar1 = DAT_0008fddc;
  iVar7 = DAT_0008fde8 + 0x8fd2e;
  if (-1 < *(int *)(DAT_0008fde4 + 0x8fd28) << 0x1f) {
    *(int *)(DAT_0008fde4 + 0x8fd28) = 1;
    puVar5 = (undefined4 *)(iVar3 + 0x8fdca);
    *puVar5 = uVar1;
    *(undefined4 *)(iVar3 + 0x8fdce) = uVar1;
    __aeabi_atexit(puVar5,iVar4 + 0x8fdcc,*(undefined4 *)(iVar7 + iVar6));
  }
  if (-1 < *(int *)(DAT_0008fdf0 + 0x8fd38) << 0x1f) {
    *(int *)(DAT_0008fdf0 + 0x8fd38) = 1;
    iVar3 = DAT_0008fdf4;
    uVar2 = DAT_0008fde0;
    uVar1 = DAT_0008fddc;
    *(undefined4 *)(DAT_0008fdf4 + 0x8fd4e) = DAT_0008fde0;
    *(undefined4 *)(iVar3 + 0x8fd52) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd56) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd5a) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd5e) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd62) = uVar2;
    *(undefined4 *)(iVar3 + 0x8fd66) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd6a) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd6e) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd72) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd76) = uVar2;
    *(undefined4 *)(iVar3 + 0x8fd7a) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd7e) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd82) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd86) = uVar1;
    *(undefined4 *)(iVar3 + 0x8fd8a) = uVar2;
  }
  __aeabi_atexit(0,DAT_0008fdf8 + 0x8fd96,*(undefined4 *)(iVar7 + iVar6));
  if (-1 < *(int *)(DAT_0008fdfc + 0x8fd9e) << 0x1f) {
    *(int *)(DAT_0008fdfc + 0x8fd9e) = 1;
    iVar6 = *(int *)(DAT_0008fe00 + 0x8fdac) + 1;
    *(int *)(DAT_0008fe00 + 0x8fdac) = iVar6;
    *(int *)(DAT_0008fe04 + 0x8fdb6) = iVar6;
  }
  return;
}



