/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002aba8 _INIT_9 */

void _INIT_9(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  
  iVar6 = DAT_0002ae80 + 0x2abba;
  if (-1 < *(int *)(DAT_0002ae7c + 0x2abb2) << 0x1f) {
    *(int *)(DAT_0002ae7c + 0x2abb2) = 1;
    iVar2 = DAT_0002ae84;
    uVar8 = DAT_0002ae78;
    uVar11 = DAT_0002ae74;
    *(undefined4 *)(DAT_0002ae84 + 0x2abce) = DAT_0002ae78;
    *(undefined4 *)(iVar2 + 0x2abd2) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abd6) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abda) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abde) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abe2) = uVar8;
    *(undefined4 *)(iVar2 + 0x2abe6) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abea) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abee) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abf2) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abf6) = uVar8;
    *(undefined4 *)(iVar2 + 0x2abfa) = uVar11;
    *(undefined4 *)(iVar2 + 0x2abfe) = uVar11;
    *(undefined4 *)(iVar2 + 0x2ac02) = uVar11;
    *(undefined4 *)(iVar2 + 0x2ac06) = uVar11;
    *(undefined4 *)(iVar2 + 0x2ac0a) = uVar8;
  }
  iVar9 = DAT_0002b038;
  iVar7 = DAT_0002b034;
  iVar2 = DAT_0002b030;
  uVar11 = DAT_0002aff4;
  iVar12 = DAT_0002ae8c;
  if (-1 < *(int *)(DAT_0002ae88 + 0x2ac12) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_0002b034 + 0x2afdc);
    *(int *)(DAT_0002ae88 + 0x2ac12) = 1;
    *puVar3 = uVar11;
    *(undefined4 *)(iVar7 + 0x2afe0) = uVar11;
    *(undefined4 *)(iVar7 + 0x2afe4) = uVar11;
    __aeabi_atexit(puVar3,iVar9 + 0x2afec,*(undefined4 *)(iVar6 + iVar2));
    iVar12 = iVar2;
  }
  iVar7 = DAT_0002ae98;
  iVar2 = DAT_0002ae94;
  uVar11 = DAT_0002ae74;
  if (-1 < *(int *)(DAT_0002ae90 + 0x2ac22) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_0002ae94 + 0x2ac34);
    *(int *)(DAT_0002ae90 + 0x2ac22) = 1;
    *puVar3 = uVar11;
    *(undefined4 *)(iVar2 + 0x2ac38) = uVar11;
    __aeabi_atexit(puVar3,iVar7 + 0x2ac40,*(undefined4 *)(iVar6 + iVar12));
  }
  iVar2 = DAT_0002ae9c;
  iVar10 = 0;
  puVar5 = (undefined *)(DAT_0002ae9c + 0x2ac56);
  uVar11 = *(undefined4 *)(iVar6 + iVar12);
  iVar9 = DAT_0002aea0 + 0x2ac5e;
  *(undefined *)(DAT_0002ae9c + 0x2ad09) = 0xff;
  *(undefined *)(iVar2 + 0x2ad08) = 0;
  *(undefined *)(iVar2 + 0x2ad07) = 0;
  *(undefined *)(iVar2 + 0x2ad06) = 0;
  __aeabi_atexit((undefined *)(iVar2 + 0x2ad06),iVar9,uVar11);
  iVar7 = DAT_0002aea4;
  FUN_0002aba0(iVar2 + 0x2ad02);
  iVar7 = iVar7 + 0x2ac88;
  __aeabi_atexit(iVar2 + 0x2ad02,iVar7,uVar11);
  FUN_0002aba0(iVar2 + 0x2acfe);
  __aeabi_atexit(iVar2 + 0x2acfe,iVar7,uVar11);
  FUN_0002aba0(iVar2 + 0x2acfa);
  __aeabi_atexit(iVar2 + 0x2acfa,iVar7,uVar11);
  do {
    *(undefined *)(iVar2 + 0x2ac5a + iVar10) = 0;
    iVar7 = iVar2 + 0x2ac5a + iVar10;
    iVar10 = iVar10 + 4;
    *(undefined *)(iVar7 + 1) = 0;
    *(undefined *)(iVar7 + 2) = 0;
    *(undefined *)(iVar7 + 3) = 0xff;
  } while (iVar10 != 0x40);
  uVar8 = *(undefined4 *)(iVar6 + iVar12);
  __aeabi_atexit(0,DAT_0002aea8 + 0x2acec,uVar8);
  puVar4 = *(undefined **)(iVar6 + DAT_0002aeac);
  *puVar5 = *puVar4;
  *(undefined *)(iVar2 + 0x2ac57) = puVar4[1];
  uVar1 = puVar4[3];
  *(undefined *)(iVar2 + 0x2ac58) = puVar4[2];
  *(undefined *)(iVar2 + 0x2ac59) = uVar1;
  __aeabi_atexit(puVar5,iVar9,uVar8);
  iVar2 = DAT_0002aeb8;
  iVar6 = DAT_0002aeb4;
  uVar11 = DAT_0002ae74;
  if (-1 < *(int *)(DAT_0002aeb0 + 0x2ad12) << 0x1f) {
    puVar3 = (undefined4 *)(DAT_0002aeb4 + 0x2ad24);
    *(int *)(DAT_0002aeb0 + 0x2ad12) = 1;
    *puVar3 = uVar11;
    *(undefined4 *)(iVar6 + 0x2ad28) = uVar11;
    *(undefined4 *)(iVar6 + 0x2ad2c) = DAT_0002ae78;
    __aeabi_atexit(puVar3,iVar2 + 0x2ad30,uVar8);
  }
  if (-1 < *(int *)(DAT_0002aebc + 0x2ad42) << 0x1f) {
    *(int *)(DAT_0002aebc + 0x2ad42) = 1;
    iVar6 = *(int *)(DAT_0002aec0 + 0x2ad50) + 1;
    *(int *)(DAT_0002aec0 + 0x2ad50) = iVar6;
    *(int *)(DAT_0002aec4 + 0x2ad5a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002aec8 + 0x2ad60) << 0x1f) {
    *(int *)(DAT_0002aec8 + 0x2ad60) = 1;
    iVar6 = *(int *)(DAT_0002aecc + 0x2ad6e) + 1;
    *(int *)(DAT_0002aecc + 0x2ad6e) = iVar6;
    *(int *)(DAT_0002aed0 + 0x2ad78) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002aed4 + 0x2ad7e) << 0x1f) {
    *(int *)(DAT_0002aed4 + 0x2ad7e) = 1;
    iVar6 = *(int *)(DAT_0002aed8 + 0x2ad8c) + 1;
    *(int *)(DAT_0002aed8 + 0x2ad8c) = iVar6;
    *(int *)(DAT_0002aedc + 0x2ad96) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002aee0 + 0x2ad9c) << 0x1f) {
    *(int *)(DAT_0002aee0 + 0x2ad9c) = 1;
    iVar6 = *(int *)(DAT_0002aee4 + 0x2adaa) + 1;
    *(int *)(DAT_0002aee4 + 0x2adaa) = iVar6;
    *(int *)(DAT_0002aee8 + 0x2adb4) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002aeec + 0x2adba) << 0x1f) {
    *(int *)(DAT_0002aeec + 0x2adba) = 1;
    iVar6 = *(int *)(DAT_0002aef0 + 0x2adc8) + 1;
    *(int *)(DAT_0002aef0 + 0x2adc8) = iVar6;
    *(int *)(DAT_0002aef4 + 0x2add2) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002aef8 + 0x2add8) << 0x1f) {
    *(int *)(DAT_0002aef8 + 0x2add8) = 1;
    iVar6 = *(int *)(DAT_0002aefc + 0x2ade6) + 1;
    *(int *)(DAT_0002aefc + 0x2ade6) = iVar6;
    *(int *)(DAT_0002af00 + 0x2adf0) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002af04 + 0x2adf6) << 0x1f) {
    *(int *)(DAT_0002af04 + 0x2adf6) = 1;
    iVar6 = *(int *)(DAT_0002af08 + 0x2ae04) + 1;
    *(int *)(DAT_0002af08 + 0x2ae04) = iVar6;
    *(int *)(DAT_0002af0c + 0x2ae0e) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002af10 + 0x2ae14) << 0x1f) {
    *(int *)(DAT_0002af10 + 0x2ae14) = 1;
    iVar6 = *(int *)(DAT_0002af14 + 0x2ae22) + 1;
    *(int *)(DAT_0002af14 + 0x2ae22) = iVar6;
    *(int *)(DAT_0002af18 + 0x2ae2c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002af1c + 0x2ae32) << 0x1f) {
    *(int *)(DAT_0002af1c + 0x2ae32) = 1;
    iVar6 = *(int *)(DAT_0002af20 + 0x2ae40) + 1;
    *(int *)(DAT_0002af20 + 0x2ae40) = iVar6;
    *(int *)(DAT_0002af24 + 0x2ae4a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002af28 + 0x2ae50) << 0x1f) {
    *(int *)(DAT_0002af28 + 0x2ae50) = 1;
    iVar6 = *(int *)(DAT_0002af2c + 0x2ae5e) + 1;
    *(int *)(DAT_0002af2c + 0x2ae5e) = iVar6;
    *(int *)(DAT_0002af30 + 0x2ae68) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002af34 + 0x2ae6e) << 0x1f) {
    *(int *)(DAT_0002af34 + 0x2ae6e) = 1;
    iVar6 = *(int *)(DAT_0002aff8 + 0x2af42) + 1;
    *(int *)(DAT_0002aff8 + 0x2af42) = iVar6;
    *(int *)(DAT_0002affc + 0x2af4c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002b000 + 0x2af52) << 0x1f) {
    *(int *)(DAT_0002b000 + 0x2af52) = 1;
    iVar6 = *(int *)(DAT_0002b004 + 0x2af60) + 1;
    *(int *)(DAT_0002b004 + 0x2af60) = iVar6;
    *(int *)(DAT_0002b008 + 0x2af6a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002b00c + 0x2af70) << 0x1f) {
    *(int *)(DAT_0002b00c + 0x2af70) = 1;
    iVar6 = *(int *)(DAT_0002b010 + 0x2af7e) + 1;
    *(int *)(DAT_0002b010 + 0x2af7e) = iVar6;
    *(int *)(DAT_0002b014 + 0x2af88) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002b018 + 0x2af8e) << 0x1f) {
    *(int *)(DAT_0002b018 + 0x2af8e) = 1;
    iVar6 = *(int *)(DAT_0002b01c + 0x2af9c) + 1;
    *(int *)(DAT_0002b01c + 0x2af9c) = iVar6;
    *(int *)(DAT_0002b020 + 0x2afa6) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002b024 + 0x2afac) << 0x1f) {
    *(int *)(DAT_0002b024 + 0x2afac) = 1;
    iVar6 = *(int *)(DAT_0002b028 + 0x2afba) + 1;
    *(int *)(DAT_0002b028 + 0x2afba) = iVar6;
    *(int *)(DAT_0002b02c + 0x2afc4) = iVar6;
  }
  return;
}



