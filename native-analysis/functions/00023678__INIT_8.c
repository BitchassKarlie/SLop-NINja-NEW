/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023678 _INIT_8 */

void _INIT_8(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = DAT_00023960 + 0x2368a;
  if (-1 < *(int *)(DAT_0002395c + 0x23682) << 0x1f) {
    *(int *)(DAT_0002395c + 0x23682) = 1;
    iVar2 = DAT_00023964;
    uVar7 = DAT_00023958;
    uVar5 = DAT_00023954;
    *(undefined4 *)(DAT_00023964 + 0x2369e) = DAT_00023958;
    *(undefined4 *)(iVar2 + 0x236a2) = uVar5;
    *(undefined4 *)(iVar2 + 0x236a6) = uVar5;
    *(undefined4 *)(iVar2 + 0x236aa) = uVar5;
    *(undefined4 *)(iVar2 + 0x236ae) = uVar5;
    *(undefined4 *)(iVar2 + 0x236b2) = uVar7;
    *(undefined4 *)(iVar2 + 0x236b6) = uVar5;
    *(undefined4 *)(iVar2 + 0x236ba) = uVar5;
    *(undefined4 *)(iVar2 + 0x236be) = uVar5;
    *(undefined4 *)(iVar2 + 0x236c2) = uVar5;
    *(undefined4 *)(iVar2 + 0x236c6) = uVar7;
    *(undefined4 *)(iVar2 + 0x236ca) = uVar5;
    *(undefined4 *)(iVar2 + 0x236ce) = uVar5;
    *(undefined4 *)(iVar2 + 0x236d2) = uVar5;
    *(undefined4 *)(iVar2 + 0x236d6) = uVar5;
    *(undefined4 *)(iVar2 + 0x236da) = uVar7;
  }
  iVar9 = DAT_00023b44;
  iVar3 = DAT_00023b40;
  iVar2 = DAT_00023b3c;
  uVar5 = DAT_00023af0;
  iVar11 = DAT_0002396c;
  if (-1 < *(int *)(DAT_00023968 + 0x236e2) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_00023b40 + 0x23ad8);
    *(int *)(DAT_00023968 + 0x236e2) = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar3 + 0x23adc) = uVar5;
    *(undefined4 *)(iVar3 + 0x23ae0) = uVar5;
    __aeabi_atexit(puVar4,iVar9 + 0x23ae8,*(undefined4 *)(iVar8 + iVar2));
    iVar11 = iVar2;
  }
  iVar3 = DAT_00023978;
  iVar2 = DAT_00023974;
  uVar5 = DAT_00023954;
  if (-1 < *(int *)(DAT_00023970 + 0x236f2) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_00023974 + 0x23704);
    *(int *)(DAT_00023970 + 0x236f2) = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar2 + 0x23708) = uVar5;
    __aeabi_atexit(puVar4,iVar3 + 0x23710,*(undefined4 *)(iVar8 + iVar11));
  }
  iVar2 = DAT_0002397c;
  uVar7 = *(undefined4 *)(iVar8 + iVar11);
  iVar10 = DAT_00023980 + 0x2372e;
  *(undefined *)(DAT_0002397c + 0x2376c) = 0;
  *(undefined *)(iVar2 + 0x2376b) = 0;
  *(undefined *)(iVar2 + 0x2376a) = 0;
  *(undefined *)(iVar2 + 0x2376d) = 0xff;
  __aeabi_atexit((undefined *)(iVar2 + 0x2376a),iVar10,uVar7);
  iVar3 = DAT_00023984;
  *(undefined4 *)(iVar2 + 0x2373a) = 0;
  *(undefined4 *)(iVar2 + 0x2373e) = 0;
  iVar9 = DAT_00023988;
  __aeabi_atexit(0,iVar3 + 0x2374e,uVar7);
  FUN_00023650(iVar2 + 0x2376e);
  iVar9 = iVar9 + 0x2376a;
  __aeabi_atexit(iVar2 + 0x2376e,iVar9,uVar7);
  FUN_00023650(iVar2 + 0x23772);
  __aeabi_atexit(iVar2 + 0x23772,iVar9,uVar7);
  FUN_00023650(iVar2 + 0x23776);
  __aeabi_atexit(iVar2 + 0x23776,iVar9,uVar7);
  iVar3 = DAT_0002398c;
  *(undefined4 *)(iVar2 + 0x23732) = 0;
  *(undefined4 *)(iVar2 + 0x23736) = 0;
  __aeabi_atexit(0,iVar3 + 0x237ac,uVar7);
  FUN_00023650(iVar2 + 0x23756);
  __aeabi_atexit(iVar2 + 0x23756,iVar9,uVar7);
  puVar6 = *(undefined **)(iVar8 + DAT_00023990);
  *(undefined *)(iVar2 + 0x2372e) = *puVar6;
  *(undefined *)(iVar2 + 0x2372f) = puVar6[1];
  uVar1 = puVar6[3];
  *(undefined *)(iVar2 + 0x23730) = puVar6[2];
  *(undefined *)(iVar2 + 0x23731) = uVar1;
  __aeabi_atexit(iVar2 + 0x2372e,iVar10,uVar7);
  *(undefined *)(iVar2 + 0x2377d) = 0x80;
  *(undefined *)(iVar2 + 0x2377c) = 0x80;
  *(undefined *)(iVar2 + 0x2377b) = 0x80;
  *(undefined *)(iVar2 + 0x2377a) = 0xff;
  __aeabi_atexit((undefined *)(iVar2 + 0x2377a),iVar10,uVar7);
  iVar3 = DAT_0002399c;
  iVar2 = DAT_00023998;
  uVar5 = DAT_00023958;
  if (-1 < *(int *)(DAT_00023994 + 0x2380a) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_00023998 + 0x2381c);
    *(int *)(DAT_00023994 + 0x2380a) = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar2 + 0x23820) = uVar5;
    *(undefined4 *)(iVar2 + 0x23824) = uVar5;
    __aeabi_atexit(puVar4,iVar3 + 0x2382c,uVar7);
  }
  iVar3 = DAT_000239a8;
  iVar2 = DAT_000239a4;
  uVar5 = DAT_00023954;
  if (-1 < *(int *)(DAT_000239a0 + 0x23836) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_000239a4 + 0x23848);
    *(int *)(DAT_000239a0 + 0x23836) = 1;
    *puVar4 = uVar5;
    *(undefined4 *)(iVar2 + 0x2384c) = uVar5;
    uVar5 = *(undefined4 *)(iVar8 + iVar11);
    *(undefined4 *)(iVar2 + 0x23850) = DAT_00023958;
    __aeabi_atexit(puVar4,iVar3 + 0x23854,uVar5);
  }
  if (-1 < *(int *)(DAT_000239ac + 0x23868) << 0x1f) {
    *(int *)(DAT_000239ac + 0x23868) = 1;
    iVar8 = *(int *)(DAT_000239b0 + 0x23876) + 1;
    *(int *)(DAT_000239b0 + 0x23876) = iVar8;
    *(int *)(DAT_000239b4 + 0x23880) = iVar8;
  }
  if (-1 < *(int *)(DAT_000239b8 + 0x23886) << 0x1f) {
    *(int *)(DAT_000239b8 + 0x23886) = 1;
    iVar8 = *(int *)(DAT_000239bc + 0x23894) + 1;
    *(int *)(DAT_000239bc + 0x23894) = iVar8;
    *(int *)(DAT_000239c0 + 0x2389e) = iVar8;
  }
  if (-1 < *(int *)(DAT_000239c4 + 0x238a4) << 0x1f) {
    *(int *)(DAT_000239c4 + 0x238a4) = 1;
    iVar8 = *(int *)(DAT_000239c8 + 0x238b2) + 1;
    *(int *)(DAT_000239c8 + 0x238b2) = iVar8;
    *(int *)(DAT_000239cc + 0x238bc) = iVar8;
  }
  if (-1 < *(int *)(DAT_000239d0 + 0x238c2) << 0x1f) {
    *(int *)(DAT_000239d0 + 0x238c2) = 1;
    iVar8 = *(int *)(DAT_000239d4 + 0x238d0) + 1;
    *(int *)(DAT_000239d4 + 0x238d0) = iVar8;
    *(int *)(DAT_000239d8 + 0x238da) = iVar8;
  }
  if (-1 < *(int *)(DAT_000239dc + 0x238e0) << 0x1f) {
    *(int *)(DAT_000239dc + 0x238e0) = 1;
    iVar8 = *(int *)(DAT_000239e0 + 0x238ee) + 1;
    *(int *)(DAT_000239e0 + 0x238ee) = iVar8;
    *(int *)(DAT_000239e4 + 0x238f8) = iVar8;
  }
  if (-1 < *(int *)(DAT_000239e8 + 0x238fe) << 0x1f) {
    *(int *)(DAT_000239e8 + 0x238fe) = 1;
    iVar8 = *(int *)(DAT_000239ec + 0x2390c) + 1;
    *(int *)(DAT_000239ec + 0x2390c) = iVar8;
    *(int *)(DAT_000239f0 + 0x23916) = iVar8;
  }
  if (-1 < *(int *)(DAT_000239f4 + 0x2391c) << 0x1f) {
    *(int *)(DAT_000239f4 + 0x2391c) = 1;
    iVar8 = *(int *)(DAT_000239f8 + 0x2392a) + 1;
    *(int *)(DAT_000239f8 + 0x2392a) = iVar8;
    *(int *)(DAT_000239fc + 0x23934) = iVar8;
  }
  if (-1 < *(int *)(DAT_00023a00 + 0x2393a) << 0x1f) {
    *(int *)(DAT_00023a00 + 0x2393a) = 1;
    iVar8 = *(int *)(DAT_00023a04 + 0x23948) + 1;
    *(int *)(DAT_00023a04 + 0x23948) = iVar8;
    *(int *)(DAT_00023a08 + 0x23952) = iVar8;
  }
  if (-1 < *(int *)(DAT_00023af4 + 0x23a12) << 0x1f) {
    *(int *)(DAT_00023af4 + 0x23a12) = 1;
    iVar8 = *(int *)(DAT_00023af8 + 0x23a20) + 1;
    *(int *)(DAT_00023af8 + 0x23a20) = iVar8;
    *(int *)(DAT_00023afc + 0x23a2a) = iVar8;
  }
  if (-1 < *(int *)(DAT_00023b00 + 0x23a30) << 0x1f) {
    *(int *)(DAT_00023b00 + 0x23a30) = 1;
    iVar8 = *(int *)(DAT_00023b04 + 0x23a3e) + 1;
    *(int *)(DAT_00023b04 + 0x23a3e) = iVar8;
    *(int *)(DAT_00023b08 + 0x23a48) = iVar8;
  }
  if (-1 < *(int *)(DAT_00023b0c + 0x23a4e) << 0x1f) {
    *(int *)(DAT_00023b0c + 0x23a4e) = 1;
    iVar8 = *(int *)(DAT_00023b10 + 0x23a5c) + 1;
    *(int *)(DAT_00023b10 + 0x23a5c) = iVar8;
    *(int *)(DAT_00023b14 + 0x23a66) = iVar8;
  }
  if (-1 < *(int *)(DAT_00023b18 + 0x23a6c) << 0x1f) {
    *(int *)(DAT_00023b18 + 0x23a6c) = 1;
    iVar8 = *(int *)(DAT_00023b1c + 0x23a7a) + 1;
    *(int *)(DAT_00023b1c + 0x23a7a) = iVar8;
    *(int *)(DAT_00023b20 + 0x23a84) = iVar8;
  }
  if (-1 < *(int *)(DAT_00023b24 + 0x23a8a) << 0x1f) {
    *(int *)(DAT_00023b24 + 0x23a8a) = 1;
    iVar8 = *(int *)(DAT_00023b28 + 0x23a98) + 1;
    *(int *)(DAT_00023b28 + 0x23a98) = iVar8;
    *(int *)(DAT_00023b2c + 0x23aa2) = iVar8;
  }
  if (-1 < *(int *)(DAT_00023b30 + 0x23aa8) << 0x1f) {
    *(int *)(DAT_00023b30 + 0x23aa8) = 1;
    iVar8 = *(int *)(DAT_00023b34 + 0x23ab6) + 1;
    *(int *)(DAT_00023b34 + 0x23ab6) = iVar8;
    *(int *)(DAT_00023b38 + 0x23ac0) = iVar8;
  }
  return;
}



