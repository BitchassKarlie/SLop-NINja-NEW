/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00086a88 _INIT_81 */

void _INIT_81(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar6 = DAT_00086d54 + 0x86a96;
  if (-1 < *(int *)(DAT_00086d50 + 0x86a90) << 0x1f) {
    *(int *)(DAT_00086d50 + 0x86a90) = 1;
    iVar2 = DAT_00086d58;
    uVar8 = DAT_00086d4c;
    uVar1 = DAT_00086d48;
    *(undefined4 *)(DAT_00086d58 + 0x86aaa) = DAT_00086d4c;
    *(undefined4 *)(iVar2 + 0x86aae) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ab2) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ab6) = uVar1;
    *(undefined4 *)(iVar2 + 0x86aba) = uVar1;
    *(undefined4 *)(iVar2 + 0x86abe) = uVar8;
    *(undefined4 *)(iVar2 + 0x86ac2) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ac6) = uVar1;
    *(undefined4 *)(iVar2 + 0x86aca) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ace) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ad2) = uVar8;
    *(undefined4 *)(iVar2 + 0x86ad6) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ada) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ade) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ae2) = uVar1;
    *(undefined4 *)(iVar2 + 0x86ae6) = uVar8;
  }
  iVar4 = DAT_00086eac;
  iVar3 = DAT_00086ea8;
  iVar2 = DAT_00086ea4;
  uVar1 = DAT_00086e8c;
  iVar7 = DAT_00086d60;
  if (-1 < *(int *)(DAT_00086d5c + 0x86aee) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_00086ea8 + 0x86e74);
    *(int *)(DAT_00086d5c + 0x86aee) = 1;
    *puVar5 = uVar1;
    *(undefined4 *)(iVar3 + 0x86e78) = uVar1;
    *(undefined4 *)(iVar3 + 0x86e7c) = uVar1;
    __aeabi_atexit(puVar5,iVar4 + 0x86e84,*(undefined4 *)(iVar6 + iVar2));
    iVar7 = iVar2;
  }
  iVar3 = DAT_00086d6c;
  iVar2 = DAT_00086d68;
  uVar1 = DAT_00086d48;
  if (-1 < *(int *)(DAT_00086d64 + 0x86afc) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_00086d68 + 0x86b0e);
    *(int *)(DAT_00086d64 + 0x86afc) = 1;
    *puVar5 = uVar1;
    *(undefined4 *)(iVar2 + 0x86b12) = uVar1;
    __aeabi_atexit(puVar5,iVar3 + 0x86b1a,*(undefined4 *)(iVar6 + iVar7));
  }
  iVar3 = DAT_00086d74;
  iVar2 = DAT_00086d70;
  uVar8 = *(undefined4 *)(iVar6 + iVar7);
  *(undefined *)((int)&DAT_00086e8c + DAT_00086d70 + 1) = 0xff;
  *(undefined *)((int)&DAT_00086e8c + iVar2) = 0;
  (&UNK_00086e8b)[iVar2] = 0;
  (&UNK_00086e8a)[iVar2] = 0;
  __aeabi_atexit(&UNK_00086e8a + iVar2,iVar3 + 0x86b34,uVar8);
  iVar3 = DAT_00086d80;
  iVar2 = DAT_00086d7c;
  uVar1 = DAT_00086d4c;
  if (-1 < *(int *)(DAT_00086d78 + 0x86b4e) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_00086d7c + 0x86b60);
    *(int *)(DAT_00086d78 + 0x86b4e) = 1;
    *puVar5 = uVar1;
    *(undefined4 *)(iVar2 + 0x86b64) = uVar1;
    *(undefined4 *)(iVar2 + 0x86b68) = uVar1;
    __aeabi_atexit(puVar5,iVar3 + 0x86b70,uVar8);
  }
  iVar3 = DAT_00086d8c;
  iVar2 = DAT_00086d88;
  uVar1 = DAT_00086d48;
  if (-1 < *(int *)(DAT_00086d84 + 0x86b7a) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_00086d88 + 0x86b8c);
    *(int *)(DAT_00086d84 + 0x86b7a) = 1;
    uVar8 = DAT_00086d4c;
    *puVar5 = uVar1;
    *(undefined4 *)(iVar2 + 0x86b90) = uVar8;
    *(undefined4 *)(iVar2 + 0x86b94) = uVar1;
    __aeabi_atexit(puVar5,iVar3 + 0x86ba0,*(undefined4 *)(iVar6 + iVar7));
  }
  iVar3 = DAT_00086d98;
  iVar2 = DAT_00086d94;
  uVar1 = DAT_00086d4c;
  if (-1 < *(int *)(DAT_00086d90 + 0x86baa) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_00086d94 + 0x86bbc);
    *(int *)(DAT_00086d90 + 0x86baa) = 1;
    *puVar5 = uVar1;
    uVar1 = DAT_00086d48;
    uVar8 = *(undefined4 *)(iVar6 + iVar7);
    *(undefined4 *)(iVar2 + 0x86bc0) = DAT_00086d48;
    *(undefined4 *)(iVar2 + 0x86bc4) = uVar1;
    __aeabi_atexit(puVar5,iVar3 + 0x86bc4,uVar8);
  }
  if (-1 < *(int *)(DAT_00086d9c + 0x86bda) << 0x1f) {
    *(int *)(DAT_00086d9c + 0x86bda) = 1;
    iVar6 = *(int *)(DAT_00086da0 + 0x86be8) + 1;
    *(int *)(DAT_00086da0 + 0x86be8) = iVar6;
    *(int *)(DAT_00086da4 + 0x86bf2) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086da8 + 0x86bf8) << 0x1f) {
    *(int *)(DAT_00086da8 + 0x86bf8) = 1;
    iVar6 = *(int *)(DAT_00086dac + 0x86c06) + 1;
    *(int *)(DAT_00086dac + 0x86c06) = iVar6;
    *(int *)(DAT_00086db0 + 0x86c10) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086db4 + 0x86c16) << 0x1f) {
    *(int *)(DAT_00086db4 + 0x86c16) = 1;
    iVar6 = *(int *)(DAT_00086db8 + 0x86c24) + 1;
    *(int *)(DAT_00086db8 + 0x86c24) = iVar6;
    *(int *)(DAT_00086dbc + 0x86c2e) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086dc0 + 0x86c34) << 0x1f) {
    *(int *)(DAT_00086dc0 + 0x86c34) = 1;
    iVar6 = *(int *)(DAT_00086dc4 + 0x86c42) + 1;
    *(int *)(DAT_00086dc4 + 0x86c42) = iVar6;
    *(int *)(DAT_00086dc8 + 0x86c4c) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086dcc + 0x86c52) << 0x1f) {
    *(int *)(DAT_00086dcc + 0x86c52) = 1;
    iVar6 = *(int *)(DAT_00086dd0 + 0x86c60) + 1;
    *(int *)(DAT_00086dd0 + 0x86c60) = iVar6;
    *(int *)(DAT_00086dd4 + 0x86c6a) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086dd8 + 0x86c70) << 0x1f) {
    *(int *)(DAT_00086dd8 + 0x86c70) = 1;
    iVar6 = *(int *)(DAT_00086ddc + 0x86c7e) + 1;
    *(int *)(DAT_00086ddc + 0x86c7e) = iVar6;
    *(int *)(DAT_00086de0 + 0x86c88) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086de4 + 0x86c8e) << 0x1f) {
    *(int *)(DAT_00086de4 + 0x86c8e) = 1;
    iVar6 = *(int *)(DAT_00086de8 + 0x86c9c) + 1;
    *(int *)(DAT_00086de8 + 0x86c9c) = iVar6;
    *(int *)(DAT_00086dec + 0x86ca6) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086df0 + 0x86cac) << 0x1f) {
    *(int *)(DAT_00086df0 + 0x86cac) = 1;
    iVar6 = *(int *)(DAT_00086df4 + 0x86cba) + 1;
    *(int *)(DAT_00086df4 + 0x86cba) = iVar6;
    *(int *)(DAT_00086df8 + 0x86cc4) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086dfc + 0x86cca) << 0x1f) {
    *(int *)(DAT_00086dfc + 0x86cca) = 1;
    iVar6 = *(int *)(DAT_00086e00 + 0x86cd8) + 1;
    *(int *)(DAT_00086e00 + 0x86cd8) = iVar6;
    *(int *)(DAT_00086e04 + 0x86ce2) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086e08 + 0x86ce8) << 0x1f) {
    *(int *)(DAT_00086e08 + 0x86ce8) = 1;
    iVar6 = *(int *)(DAT_00086e0c + 0x86cf6) + 1;
    *(int *)(DAT_00086e0c + 0x86cf6) = iVar6;
    *(int *)(DAT_00086e10 + 0x86d00) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086e14 + 0x86d06) << 0x1f) {
    *(int *)(DAT_00086e14 + 0x86d06) = 1;
    iVar6 = *(int *)(DAT_00086e18 + 0x86d14) + 1;
    *(int *)(DAT_00086e18 + 0x86d14) = iVar6;
    *(int *)(DAT_00086e1c + 0x86d1e) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086e20 + 0x86d24) << 0x1f) {
    *(int *)(DAT_00086e20 + 0x86d24) = 1;
    iVar6 = *(int *)(DAT_00086e24 + 0x86d32) + 1;
    *(int *)(DAT_00086e24 + 0x86d32) = iVar6;
    *(int *)(DAT_00086e28 + 0x86d3c) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086e2c + 0x86d42) << 0x1f) {
    *(int *)(DAT_00086e2c + 0x86d42) = 1;
    iVar6 = *(int *)(DAT_00086e90 + 0x86e3a) + 1;
    *(int *)(DAT_00086e90 + 0x86e3a) = iVar6;
    *(int *)(DAT_00086e94 + 0x86e44) = iVar6;
  }
  if (-1 < *(int *)(DAT_00086e98 + 0x86e4a) << 0x1f) {
    *(int *)(DAT_00086e98 + 0x86e4a) = 1;
    iVar6 = *(int *)(DAT_00086e9c + 0x86e58) + 1;
    *(int *)(DAT_00086e9c + 0x86e58) = iVar6;
    *(int *)(DAT_00086ea0 + 0x86e62) = iVar6;
  }
  return;
}



