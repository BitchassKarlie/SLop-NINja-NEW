/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000567fc _INIT_37 */

void _INIT_37(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar6 = DAT_00056ac8 + 0x5680c;
  if (-1 < *(int *)(DAT_00056ac4 + 0x56806) << 0x1f) {
    *(int *)(DAT_00056ac4 + 0x56806) = 1;
    iVar1 = DAT_00056acc;
    uVar5 = DAT_00056ac0;
    uVar8 = DAT_00056abc;
    *(undefined4 *)(DAT_00056acc + 0x56820) = DAT_00056ac0;
    *(undefined4 *)(iVar1 + 0x56824) = uVar8;
    *(undefined4 *)(iVar1 + 0x56828) = uVar8;
    *(undefined4 *)(iVar1 + 0x5682c) = uVar8;
    *(undefined4 *)(iVar1 + 0x56830) = uVar8;
    *(undefined4 *)(iVar1 + 0x56834) = uVar5;
    *(undefined4 *)(iVar1 + 0x56838) = uVar8;
    *(undefined4 *)(iVar1 + 0x5683c) = uVar8;
    *(undefined4 *)(iVar1 + 0x56840) = uVar8;
    *(undefined4 *)(iVar1 + 0x56844) = uVar8;
    *(undefined4 *)(iVar1 + 0x56848) = uVar5;
    *(undefined4 *)(iVar1 + 0x5684c) = uVar8;
    *(undefined4 *)(iVar1 + 0x56850) = uVar8;
    *(undefined4 *)(iVar1 + 0x56854) = uVar8;
    *(undefined4 *)(iVar1 + 0x56858) = uVar8;
    *(undefined4 *)(iVar1 + 0x5685c) = uVar5;
  }
  iVar7 = DAT_00056bec;
  iVar2 = DAT_00056be8;
  iVar1 = DAT_00056be4;
  uVar8 = DAT_00056bd8;
  iVar9 = DAT_00056ad4;
  if (-1 < *(int *)(DAT_00056ad0 + 0x56864) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_00056be8 + 0x56bbe);
    *(int *)(DAT_00056ad0 + 0x56864) = 1;
    *puVar3 = uVar8;
    *(undefined4 *)(iVar2 + 0x56bc2) = uVar8;
    *(undefined4 *)(iVar2 + 0x56bc6) = uVar8;
    __aeabi_atexit(puVar3,iVar7 + 0x56bce,*(undefined4 *)(iVar6 + iVar1));
    iVar9 = iVar1;
  }
  iVar2 = DAT_00056ae0;
  iVar1 = DAT_00056adc;
  uVar8 = DAT_00056abc;
  if (-1 < *(int *)(DAT_00056ad8 + 0x56874) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_00056adc + 0x56886);
    *(int *)(DAT_00056ad8 + 0x56874) = 1;
    *puVar3 = uVar8;
    *(undefined4 *)(iVar1 + 0x5688a) = uVar8;
    __aeabi_atexit(puVar3,iVar2 + 0x56892,*(undefined4 *)(iVar6 + iVar9));
  }
  iVar7 = DAT_00056aec;
  iVar2 = DAT_00056ae8;
  iVar1 = DAT_00056ae4;
  uVar8 = *(undefined4 *)(iVar6 + iVar9);
  *(undefined *)(DAT_00056ae4 + 0x568bb) = 0xff;
  *(undefined *)(iVar1 + 0x568ba) = 0;
  iVar7 = iVar7 + 0x568bc;
  *(undefined *)(iVar1 + 0x568b9) = 0;
  *(undefined *)(iVar1 + 0x568b8) = 0;
  __aeabi_atexit((undefined *)(iVar1 + 0x568b8),iVar2 + 0x568b6,uVar8);
  FUN_000567f4(iVar1 + 0x568bc);
  __aeabi_atexit(iVar1 + 0x568bc,iVar7,uVar8);
  FUN_000567f4(iVar1 + 0x568c0);
  __aeabi_atexit(iVar1 + 0x568c0,iVar7,uVar8);
  FUN_000567f4(iVar1 + 0x568c4);
  __aeabi_atexit(iVar1 + 0x568c4,iVar7,uVar8);
  puVar3 = (undefined4 *)(iVar1 + 0x568c8);
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = 0;
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)(iVar1 + 0x568f0));
  uVar5 = *(undefined4 *)(iVar6 + iVar9);
  __aeabi_atexit(0,DAT_00056af0 + 0x56918,uVar5);
  iVar1 = DAT_00056afc;
  iVar6 = DAT_00056af8;
  uVar8 = DAT_00056ac0;
  if (-1 < *(int *)(DAT_00056af4 + 0x56920) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_00056af8 + 0x56932);
    *(int *)(DAT_00056af4 + 0x56920) = 1;
    *puVar3 = uVar8;
    *(undefined4 *)(iVar6 + 0x56936) = uVar8;
    *(undefined4 *)(iVar6 + 0x5693a) = uVar8;
    __aeabi_atexit(puVar3,iVar1 + 0x56942,uVar5);
  }
  if (-1 < *(int *)(DAT_00056b00 + 0x5694c) << 0x1f) {
    *(int *)(DAT_00056b00 + 0x5694c) = 1;
    iVar6 = *(int *)(DAT_00056b04 + 0x5695a) + 1;
    *(int *)(DAT_00056b04 + 0x5695a) = iVar6;
    *(int *)(DAT_00056b08 + 0x56964) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b0c + 0x5696a) << 0x1f) {
    *(int *)(DAT_00056b0c + 0x5696a) = 1;
    iVar6 = *(int *)(DAT_00056b10 + 0x56978) + 1;
    *(int *)(DAT_00056b10 + 0x56978) = iVar6;
    *(int *)(DAT_00056b14 + 0x56982) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b18 + 0x56988) << 0x1f) {
    *(int *)(DAT_00056b18 + 0x56988) = 1;
    iVar6 = *(int *)(DAT_00056b1c + 0x56996) + 1;
    *(int *)(DAT_00056b1c + 0x56996) = iVar6;
    *(int *)(DAT_00056b20 + 0x569a0) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b24 + 0x569a6) << 0x1f) {
    *(int *)(DAT_00056b24 + 0x569a6) = 1;
    iVar6 = *(int *)(DAT_00056b28 + 0x569b4) + 1;
    *(int *)(DAT_00056b28 + 0x569b4) = iVar6;
    *(int *)(DAT_00056b2c + 0x569be) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b30 + 0x569c4) << 0x1f) {
    *(int *)(DAT_00056b30 + 0x569c4) = 1;
    iVar6 = *(int *)(DAT_00056b34 + 0x569d2) + 1;
    *(int *)(DAT_00056b34 + 0x569d2) = iVar6;
    *(int *)(DAT_00056b38 + 0x569dc) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b3c + 0x569e2) << 0x1f) {
    *(int *)(DAT_00056b3c + 0x569e2) = 1;
    iVar6 = *(int *)(DAT_00056b40 + 0x569f0) + 1;
    *(int *)(DAT_00056b40 + 0x569f0) = iVar6;
    *(int *)(DAT_00056b44 + 0x569fa) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b48 + 0x56a00) << 0x1f) {
    *(int *)(DAT_00056b48 + 0x56a00) = 1;
    iVar6 = *(int *)(DAT_00056b4c + 0x56a0e) + 1;
    *(int *)(DAT_00056b4c + 0x56a0e) = iVar6;
    *(int *)(DAT_00056b50 + 0x56a18) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b54 + 0x56a1e) << 0x1f) {
    *(int *)(DAT_00056b54 + 0x56a1e) = 1;
    iVar6 = *(int *)(DAT_00056b58 + 0x56a2c) + 1;
    *(int *)(DAT_00056b58 + 0x56a2c) = iVar6;
    *(int *)(DAT_00056b5c + 0x56a36) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b60 + 0x56a3c) << 0x1f) {
    *(int *)(DAT_00056b60 + 0x56a3c) = 1;
    iVar6 = *(int *)(DAT_00056b64 + 0x56a4a) + 1;
    *(int *)(DAT_00056b64 + 0x56a4a) = iVar6;
    *(int *)(DAT_00056b68 + 0x56a54) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b6c + 0x56a5a) << 0x1f) {
    *(int *)(DAT_00056b6c + 0x56a5a) = 1;
    iVar6 = *(int *)(DAT_00056b70 + 0x56a68) + 1;
    *(int *)(DAT_00056b70 + 0x56a68) = iVar6;
    *(int *)(DAT_00056b74 + 0x56a72) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b78 + 0x56a78) << 0x1f) {
    *(int *)(DAT_00056b78 + 0x56a78) = 1;
    iVar6 = *(int *)(DAT_00056b7c + 0x56a86) + 1;
    *(int *)(DAT_00056b7c + 0x56a86) = iVar6;
    *(int *)(DAT_00056b80 + 0x56a90) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b84 + 0x56a96) << 0x1f) {
    *(int *)(DAT_00056b84 + 0x56a96) = 1;
    iVar6 = *(int *)(DAT_00056b88 + 0x56aa4) + 1;
    *(int *)(DAT_00056b88 + 0x56aa4) = iVar6;
    *(int *)(DAT_00056b8c + 0x56aae) = iVar6;
  }
  if (-1 < *(int *)(DAT_00056b90 + 0x56ab4) << 0x1f) {
    *(int *)(DAT_00056b90 + 0x56ab4) = 1;
    iVar6 = *(int *)(DAT_00056bdc + 0x56b9e) + 1;
    *(int *)(DAT_00056bdc + 0x56b9e) = iVar6;
    *(int *)(DAT_00056be0 + 0x56ba8) = iVar6;
  }
  return;
}



