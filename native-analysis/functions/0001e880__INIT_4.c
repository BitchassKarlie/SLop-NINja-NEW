/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001e880 _INIT_4 */

void _INIT_4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = DAT_0001eb70 + 0x1e88e;
  if (-1 < *(int *)(DAT_0001eb6c + 0x1e88c) << 0x1f) {
    *(int *)(DAT_0001eb6c + 0x1e88c) = 1;
    iVar1 = DAT_0001eb74;
    uVar7 = DAT_0001eb68;
    uVar5 = DAT_0001eb64;
    *(undefined4 *)(DAT_0001eb74 + 0x1e8a4) = DAT_0001eb68;
    *(undefined4 *)(iVar1 + 0x1e8a8) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8ac) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8b0) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8b4) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8b8) = uVar7;
    *(undefined4 *)(iVar1 + 0x1e8bc) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8c0) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8c4) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8c8) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8cc) = uVar7;
    *(undefined4 *)(iVar1 + 0x1e8d0) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8d4) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8d8) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8dc) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e8e0) = uVar7;
  }
  iVar3 = DAT_0001ece8;
  iVar2 = DAT_0001ece4;
  iVar1 = DAT_0001ece0;
  uVar5 = DAT_0001ecbc;
  piVar6 = (int *)(DAT_0001eb78 + 0x1e8e8);
  iVar9 = DAT_0001eb7c;
  if (-1 < *piVar6 << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0001ece4 + 0x1eca2);
    *piVar6 = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar2 + 0x1eca6) = uVar5;
    *(undefined4 *)(iVar2 + 0x1ecaa) = uVar5;
    __aeabi_atexit(puVar4,iVar3 + 0x1ecb2,*(undefined4 *)(iVar8 + iVar1),piVar6,in_r3);
    iVar9 = iVar1;
  }
  iVar2 = DAT_0001eb88;
  iVar1 = DAT_0001eb84;
  uVar5 = DAT_0001eb64;
  piVar6 = (int *)(DAT_0001eb80 + 0x1e8f8);
  if (-1 < *piVar6 << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0001eb84 + 0x1e90a);
    *piVar6 = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar1 + 0x1e90e) = uVar5;
    __aeabi_atexit(puVar4,iVar2 + 0x1e916,*(undefined4 *)(iVar8 + iVar9),piVar6,in_r3);
  }
  iVar2 = DAT_0001eb90;
  iVar1 = DAT_0001eb8c;
  uVar7 = *(undefined4 *)(iVar8 + iVar9);
  *(undefined *)(DAT_0001eb8c + 0x1f123) = 0xff;
  *(undefined *)(iVar1 + 0x1f122) = 0;
  *(undefined *)(iVar1 + 0x1f121) = 0;
  *(undefined *)(iVar1 + 0x1f120) = 0;
  __aeabi_atexit(iVar1 + 0x1f120,iVar2 + 0x1e93a,uVar7,0xffffffff,in_r3);
  iVar2 = DAT_0001eb94;
  FUN_0001e878(iVar1 + 0x1f110);
  iVar3 = DAT_0001eb98;
  *(undefined4 *)(iVar1 + 0x1f114) = 0;
  __aeabi_atexit(0,iVar3 + 0x1e96a,uVar7);
  FUN_0001e878(iVar1 + 0x1f124);
  iVar3 = DAT_0001eba0;
  __aeabi_atexit(iVar1 + 0x1f124,DAT_0001eb9c + 0x1e982,uVar7);
  FUN_0001e870(iVar2 + 0x1e988);
  __aeabi_atexit(iVar2 + 0x1e988,iVar3 + 0x1e98e,uVar7);
  FUN_0001e870(iVar1 + 0x1f128);
  FUN_0001e870(iVar1 + 0x1f12c);
  __aeabi_atexit(0,DAT_0001eba4 + 0x1e9b8,uVar7);
  FUN_0001e870(iVar1 + 0x1f130);
  __aeabi_atexit(iVar1 + 0x1f130,iVar3 + 0x1e98e,uVar7);
  iVar2 = DAT_0001ebb0;
  iVar1 = DAT_0001ebac;
  uVar5 = DAT_0001eb68;
  if (-1 < *(int *)(DAT_0001eba8 + 0x1e9d2) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0001ebac + 0x1e9e4);
    *(int *)(DAT_0001eba8 + 0x1e9d2) = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar1 + 0x1e9e8) = uVar5;
    *(undefined4 *)(iVar1 + 0x1e9ec) = uVar5;
    __aeabi_atexit(puVar4,iVar2 + 0x1e9f4,uVar7);
  }
  iVar2 = DAT_0001ebbc;
  iVar1 = DAT_0001ebb8;
  uVar5 = DAT_0001eb64;
  if (-1 < *(int *)(DAT_0001ebb4 + 0x1e9fe) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0001ebb8 + 0x1ea10);
    *(int *)(DAT_0001ebb4 + 0x1e9fe) = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar1 + 0x1ea14) = uVar5;
    uVar5 = *(undefined4 *)(iVar8 + iVar9);
    *(undefined4 *)(iVar1 + 0x1ea18) = DAT_0001eb68;
    __aeabi_atexit(puVar4,iVar2 + 0x1ea1c,uVar5);
  }
  if (-1 < *(int *)(DAT_0001ebc0 + 0x1ea30) << 0x1f) {
    *(int *)(DAT_0001ebc0 + 0x1ea30) = 1;
    iVar8 = *(int *)(DAT_0001ebc4 + 0x1ea3e) + 1;
    *(int *)(DAT_0001ebc4 + 0x1ea3e) = iVar8;
    *(int *)(DAT_0001ebc8 + 0x1ea48) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ebcc + 0x1ea4e) << 0x1f) {
    *(int *)(DAT_0001ebcc + 0x1ea4e) = 1;
    iVar8 = *(int *)(DAT_0001ebd0 + 0x1ea5c) + 1;
    *(int *)(DAT_0001ebd0 + 0x1ea5c) = iVar8;
    *(int *)(DAT_0001ebd4 + 0x1ea66) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ebd8 + 0x1ea6c) << 0x1f) {
    *(int *)(DAT_0001ebd8 + 0x1ea6c) = 1;
    iVar8 = *(int *)(DAT_0001ebdc + 0x1ea7a) + 1;
    *(int *)(DAT_0001ebdc + 0x1ea7a) = iVar8;
    *(int *)(DAT_0001ebe0 + 0x1ea84) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ebe4 + 0x1ea8a) << 0x1f) {
    *(int *)(DAT_0001ebe4 + 0x1ea8a) = 1;
    iVar8 = *(int *)(DAT_0001ebe8 + 0x1ea98) + 1;
    *(int *)(DAT_0001ebe8 + 0x1ea98) = iVar8;
    *(int *)(DAT_0001ebec + 0x1eaa2) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ebf0 + 0x1eaa8) << 0x1f) {
    *(int *)(DAT_0001ebf0 + 0x1eaa8) = 1;
    iVar8 = *(int *)(DAT_0001ebf4 + 0x1eab6) + 1;
    *(int *)(DAT_0001ebf4 + 0x1eab6) = iVar8;
    *(int *)(DAT_0001ebf8 + 0x1eac0) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ebfc + 0x1eac6) << 0x1f) {
    *(int *)(DAT_0001ebfc + 0x1eac6) = 1;
    iVar8 = *(int *)(DAT_0001ec00 + 0x1ead4) + 1;
    *(int *)(DAT_0001ec00 + 0x1ead4) = iVar8;
    *(int *)(DAT_0001ec04 + 0x1eade) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ec08 + 0x1eae4) << 0x1f) {
    *(int *)(DAT_0001ec08 + 0x1eae4) = 1;
    iVar8 = *(int *)(DAT_0001ec0c + 0x1eaf2) + 1;
    *(int *)(DAT_0001ec0c + 0x1eaf2) = iVar8;
    *(int *)(DAT_0001ec10 + 0x1eafc) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ec14 + 0x1eb02) << 0x1f) {
    *(int *)(DAT_0001ec14 + 0x1eb02) = 1;
    iVar8 = *(int *)(DAT_0001ec18 + 0x1eb10) + 1;
    *(int *)(DAT_0001ec18 + 0x1eb10) = iVar8;
    *(int *)(DAT_0001ec1c + 0x1eb1a) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ec20 + 0x1eb20) << 0x1f) {
    *(int *)(DAT_0001ec20 + 0x1eb20) = 1;
    iVar8 = *(int *)(DAT_0001ec24 + 0x1eb2e) + 1;
    *(int *)(DAT_0001ec24 + 0x1eb2e) = iVar8;
    *(int *)(DAT_0001ec28 + 0x1eb38) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ec2c + 0x1eb3e) << 0x1f) {
    *(int *)(DAT_0001ec2c + 0x1eb3e) = 1;
    iVar8 = *(int *)(DAT_0001ec30 + 0x1eb4c) + 1;
    *(int *)(DAT_0001ec30 + 0x1eb4c) = iVar8;
    *(int *)(DAT_0001ec34 + 0x1eb56) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ec38 + 0x1eb5c) << 0x1f) {
    *(int *)(DAT_0001ec38 + 0x1eb5c) = 1;
    iVar8 = *(int *)(DAT_0001ecc0 + 0x1ec46) + 1;
    *(int *)(DAT_0001ecc0 + 0x1ec46) = iVar8;
    *(int *)(DAT_0001ecc4 + 0x1ec50) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ecc8 + 0x1ec56) << 0x1f) {
    *(int *)(DAT_0001ecc8 + 0x1ec56) = 1;
    iVar8 = *(int *)(DAT_0001eccc + 0x1ec64) + 1;
    *(int *)(DAT_0001eccc + 0x1ec64) = iVar8;
    *(int *)(DAT_0001ecd0 + 0x1ec6e) = iVar8;
  }
  if (-1 < *(int *)(DAT_0001ecd4 + 0x1ec74) << 0x1f) {
    *(int *)(DAT_0001ecd4 + 0x1ec74) = 1;
    iVar8 = *(int *)(DAT_0001ecd8 + 0x1ec82) + 1;
    *(int *)(DAT_0001ecd8 + 0x1ec82) = iVar8;
    *(int *)(DAT_0001ecdc + 0x1ec8c) = iVar8;
  }
  return;
}



