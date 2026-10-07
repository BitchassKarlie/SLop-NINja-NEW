/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000466bc _INIT_27 */

void _INIT_27(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = DAT_000469b4 + 0x466ce;
  if (-1 < *(int *)(DAT_000469b0 + 0x466c6) << 0x1f) {
    *(int *)(DAT_000469b0 + 0x466c6) = 1;
    iVar2 = DAT_000469b8;
    uVar5 = DAT_000469ac;
    uVar1 = DAT_000469a8;
    *(undefined4 *)(DAT_000469b8 + 0x466e2) = DAT_000469ac;
    *(undefined4 *)(iVar2 + 0x466e6) = uVar1;
    *(undefined4 *)(iVar2 + 0x466ea) = uVar1;
    *(undefined4 *)(iVar2 + 0x466ee) = uVar1;
    *(undefined4 *)(iVar2 + 0x466f2) = uVar1;
    *(undefined4 *)(iVar2 + 0x466f6) = uVar5;
    *(undefined4 *)(iVar2 + 0x466fa) = uVar1;
    *(undefined4 *)(iVar2 + 0x466fe) = uVar1;
    *(undefined4 *)(iVar2 + 0x46702) = uVar1;
    *(undefined4 *)(iVar2 + 0x46706) = uVar1;
    *(undefined4 *)(iVar2 + 0x4670a) = uVar5;
    *(undefined4 *)(iVar2 + 0x4670e) = uVar1;
    *(undefined4 *)(iVar2 + 0x46712) = uVar1;
    *(undefined4 *)(iVar2 + 0x46716) = uVar1;
    *(undefined4 *)(iVar2 + 0x4671a) = uVar1;
    *(undefined4 *)(iVar2 + 0x4671e) = uVar5;
  }
  iVar6 = DAT_00046d0c;
  iVar3 = DAT_00046d08;
  iVar2 = DAT_00046d04;
  uVar1 = DAT_00046c48;
  iVar8 = DAT_000469c0;
  if (-1 < *(int *)(DAT_000469bc + 0x46726) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_00046d08 + 0x46c30);
    *(int *)(DAT_000469bc + 0x46726) = 1;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar3 + 0x46c34) = uVar1;
    *(undefined4 *)(iVar3 + 0x46c38) = uVar1;
    __aeabi_atexit(puVar4,iVar6 + 0x46c40,*(undefined4 *)(iVar7 + iVar2));
    iVar8 = iVar2;
  }
  iVar3 = DAT_000469cc;
  iVar2 = DAT_000469c8;
  uVar1 = DAT_000469a8;
  if (-1 < *(int *)(DAT_000469c4 + 0x46736) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_000469c8 + 0x46748);
    *(int *)(DAT_000469c4 + 0x46736) = 1;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar2 + 0x4674c) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x46754,*(undefined4 *)(iVar7 + iVar8));
  }
  iVar6 = DAT_000469d8;
  iVar3 = DAT_000469d4;
  iVar2 = DAT_000469d0;
  uVar5 = *(undefined4 *)(iVar7 + iVar8);
  *(undefined *)(DAT_000469d0 + 0x467b1) = 0xff;
  *(undefined *)(iVar2 + 0x467b0) = 0;
  *(undefined *)(iVar2 + 0x467af) = 0;
  *(undefined *)(iVar2 + 0x467ae) = 0;
  iVar6 = iVar6 + 0x4678a;
  __aeabi_atexit((undefined *)(iVar2 + 0x467ae),iVar3 + 0x4677e,uVar5);
  FUN_000466b4(iVar2 + 0x467b2);
  __aeabi_atexit(iVar2 + 0x467b2,iVar6,uVar5);
  FUN_000466b4(iVar2 + 0x467b6);
  __aeabi_atexit(iVar2 + 0x467b6,iVar6,uVar5);
  FUN_000466b4(iVar2 + 0x467ba);
  __aeabi_atexit(iVar2 + 0x467ba,iVar6,uVar5);
  iVar3 = DAT_000469dc;
  *(undefined4 *)(iVar2 + 0x467be) = 0;
  *(undefined4 *)(iVar2 + 0x467c2) = 0;
  *(undefined4 *)(iVar2 + 0x467c6) = 0;
  __aeabi_atexit(0,iVar3 + 0x467d0,uVar5);
  iVar3 = DAT_000469e0;
  *(undefined4 *)(iVar2 + 0x467ca) = 0;
  *(undefined4 *)(iVar2 + 0x467ce) = 0;
  *(undefined4 *)(iVar2 + 0x467d2) = 0;
  __aeabi_atexit(0,iVar3 + 0x467e2,uVar5);
  iVar3 = DAT_000469e4;
  *(undefined4 *)(iVar2 + 0x467d6) = 0;
  *(undefined4 *)(iVar2 + 0x467da) = 0;
  *(undefined4 *)(iVar2 + 0x467de) = 0;
  *(undefined4 *)(iVar2 + 0x467e2) = 0;
  __aeabi_atexit(0,iVar3 + 0x467f4,uVar5);
  iVar3 = DAT_000469e8;
  *(undefined4 *)(iVar2 + 0x467e6) = 0;
  *(undefined4 *)(iVar2 + 0x467ea) = 0;
  __aeabi_atexit(0,iVar3 + 0x4680e,uVar5);
  FUN_000466b4(iVar2 + 0x467ee);
  __aeabi_atexit(iVar2 + 0x467ee,iVar6,uVar5);
  FUN_000466b4(iVar2 + 0x467f2);
  __aeabi_atexit(iVar2 + 0x467f2,iVar6,uVar5);
  FUN_000466b4(iVar2 + 0x467f6);
  FUN_000466b4(iVar2 + 0x467fa);
  __aeabi_atexit(0,DAT_000469ec + 0x46850,uVar5);
  FUN_000466b4(iVar2 + 0x467fe);
  __aeabi_atexit(iVar2 + 0x467fe,iVar6,uVar5);
  FUN_000466b4(iVar2 + 0x46802);
  __aeabi_atexit(iVar2 + 0x46802,iVar6,uVar5);
  FUN_000466b4(iVar2 + 0x46806);
  __aeabi_atexit(iVar2 + 0x46806,iVar6,uVar5);
  FUN_000466b4(iVar2 + 0x4680a);
  __aeabi_atexit(iVar2 + 0x4680a,iVar6,uVar5);
  iVar3 = DAT_000469f8;
  iVar2 = DAT_000469f4;
  uVar1 = DAT_000469ac;
  if (-1 < *(int *)(DAT_000469f0 + 0x468a6) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_000469f4 + 0x468b8);
    *(int *)(DAT_000469f0 + 0x468a6) = 1;
    *puVar4 = uVar1;
    uVar1 = DAT_000469a8;
    *(undefined4 *)(iVar2 + 0x468bc) = DAT_000469a8;
    *(undefined4 *)(iVar2 + 0x468c0) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x468c0,uVar5);
  }
  iVar3 = DAT_00046a04;
  iVar2 = DAT_00046a00;
  uVar1 = DAT_000469ac;
  if (-1 < *(int *)(DAT_000469fc + 0x468d6) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_00046a00 + 0x468e8);
    *(int *)(DAT_000469fc + 0x468d6) = 1;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar2 + 0x468ec) = uVar1;
    *(undefined4 *)(iVar2 + 0x468f0) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x468f8,*(undefined4 *)(iVar7 + iVar8));
  }
  if (-1 < *(int *)(DAT_00046a08 + 0x46904) << 0x1f) {
    *(int *)(DAT_00046a08 + 0x46904) = 1;
    iVar7 = *(int *)(DAT_00046a0c + 0x46912) + 1;
    *(int *)(DAT_00046a0c + 0x46912) = iVar7;
    *(int *)(DAT_00046a10 + 0x4691c) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046a14 + 0x46922) << 0x1f) {
    *(int *)(DAT_00046a14 + 0x46922) = 1;
    iVar7 = *(int *)(DAT_00046a18 + 0x46930) + 1;
    *(int *)(DAT_00046a18 + 0x46930) = iVar7;
    *(int *)(DAT_00046a1c + 0x4693a) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046a20 + 0x46940) << 0x1f) {
    *(int *)(DAT_00046a20 + 0x46940) = 1;
    iVar7 = *(int *)(DAT_00046a24 + 0x4694e) + 1;
    *(int *)(DAT_00046a24 + 0x4694e) = iVar7;
    *(int *)(DAT_00046a28 + 0x46958) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046a2c + 0x4695e) << 0x1f) {
    *(int *)(DAT_00046a2c + 0x4695e) = 1;
    iVar7 = *(int *)(DAT_00046a30 + 0x4696c) + 1;
    *(int *)(DAT_00046a30 + 0x4696c) = iVar7;
    *(int *)(DAT_00046a34 + 0x46976) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046a38 + 0x4697c) << 0x1f) {
    *(int *)(DAT_00046a38 + 0x4697c) = 1;
    iVar7 = *(int *)(DAT_00046a3c + 0x4698a) + 1;
    *(int *)(DAT_00046a3c + 0x4698a) = iVar7;
    *(int *)(DAT_00046a40 + 0x46994) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046a44 + 0x4699a) << 0x1f) {
    *(int *)(DAT_00046a44 + 0x4699a) = 1;
    iVar7 = *(int *)((int)&DAT_000469a8 + DAT_00046a48) + 1;
    *(int *)((int)&DAT_000469a8 + DAT_00046a48) = iVar7;
    *(int *)(DAT_00046c4c + 0x46a58) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046c50 + 0x46a5e) << 0x1f) {
    *(int *)(DAT_00046c50 + 0x46a5e) = 1;
    iVar7 = *(int *)(DAT_00046c54 + 0x46a6c) + 1;
    *(int *)(DAT_00046c54 + 0x46a6c) = iVar7;
    *(int *)(DAT_00046c58 + 0x46a76) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046c5c + 0x46a7c) << 0x1f) {
    *(int *)(DAT_00046c5c + 0x46a7c) = 1;
    iVar7 = *(int *)(DAT_00046c60 + 0x46a8a) + 1;
    *(int *)(DAT_00046c60 + 0x46a8a) = iVar7;
    *(int *)(DAT_00046c64 + 0x46a94) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046c68 + 0x46a9a) << 0x1f) {
    *(int *)(DAT_00046c68 + 0x46a9a) = 1;
    iVar7 = *(int *)(DAT_00046c6c + 0x46aa8) + 1;
    *(int *)(DAT_00046c6c + 0x46aa8) = iVar7;
    *(int *)(DAT_00046c70 + 0x46ab2) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046c74 + 0x46ab8) << 0x1f) {
    *(int *)(DAT_00046c74 + 0x46ab8) = 1;
    iVar7 = *(int *)(DAT_00046c78 + 0x46ac6) + 1;
    *(int *)(DAT_00046c78 + 0x46ac6) = iVar7;
    *(int *)(DAT_00046c7c + 0x46ad0) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046c80 + 0x46ad6) << 0x1f) {
    *(int *)(DAT_00046c80 + 0x46ad6) = 1;
    iVar7 = *(int *)(DAT_00046c84 + 0x46ae4) + 1;
    *(int *)(DAT_00046c84 + 0x46ae4) = iVar7;
    *(int *)(DAT_00046c88 + 0x46aee) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046c8c + 0x46af4) << 0x1f) {
    *(int *)(DAT_00046c8c + 0x46af4) = 1;
    iVar7 = *(int *)(DAT_00046c90 + 0x46b02) + 1;
    *(int *)(DAT_00046c90 + 0x46b02) = iVar7;
    *(int *)(DAT_00046c94 + 0x46b0c) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046c98 + 0x46b12) << 0x1f) {
    *(int *)(DAT_00046c98 + 0x46b12) = 1;
    iVar7 = *(int *)(DAT_00046c9c + 0x46b20) + 1;
    *(int *)(DAT_00046c9c + 0x46b20) = iVar7;
    *(int *)(DAT_00046ca0 + 0x46b2a) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046ca4 + 0x46b30) << 0x1f) {
    *(int *)(DAT_00046ca4 + 0x46b30) = 1;
    iVar7 = *(int *)(DAT_00046ca8 + 0x46b3e) + 1;
    *(int *)(DAT_00046ca8 + 0x46b3e) = iVar7;
    *(int *)(DAT_00046cac + 0x46b48) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046cb0 + 0x46b4e) << 0x1f) {
    *(int *)(DAT_00046cb0 + 0x46b4e) = 1;
    iVar7 = *(int *)(DAT_00046cb4 + 0x46b5c) + 1;
    *(int *)(DAT_00046cb4 + 0x46b5c) = iVar7;
    *(int *)(DAT_00046cb8 + 0x46b66) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046cbc + 0x46b6c) << 0x1f) {
    *(int *)(DAT_00046cbc + 0x46b6c) = 1;
    iVar7 = *(int *)(DAT_00046cc0 + 0x46b7a) + 1;
    *(int *)(DAT_00046cc0 + 0x46b7a) = iVar7;
    *(int *)(DAT_00046cc4 + 0x46b84) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046cc8 + 0x46b8a) << 0x1f) {
    *(int *)(DAT_00046cc8 + 0x46b8a) = 1;
    iVar7 = *(int *)(DAT_00046ccc + 0x46b98) + 1;
    *(int *)(DAT_00046ccc + 0x46b98) = iVar7;
    *(int *)(DAT_00046cd0 + 0x46ba2) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046cd4 + 0x46ba8) << 0x1f) {
    *(int *)(DAT_00046cd4 + 0x46ba8) = 1;
    iVar7 = *(int *)(DAT_00046cd8 + 0x46bb6) + 1;
    *(int *)(DAT_00046cd8 + 0x46bb6) = iVar7;
    *(int *)(DAT_00046cdc + 0x46bc0) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046ce0 + 0x46bc6) << 0x1f) {
    *(int *)(DAT_00046ce0 + 0x46bc6) = 1;
    iVar7 = *(int *)(DAT_00046ce4 + 0x46bd4) + 1;
    *(int *)(DAT_00046ce4 + 0x46bd4) = iVar7;
    *(int *)(DAT_00046ce8 + 0x46bde) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046cec + 0x46be4) << 0x1f) {
    *(int *)(DAT_00046cec + 0x46be4) = 1;
    iVar7 = *(int *)(DAT_00046cf0 + 0x46bf2) + 1;
    *(int *)(DAT_00046cf0 + 0x46bf2) = iVar7;
    *(int *)(DAT_00046cf4 + 0x46bfc) = iVar7;
  }
  if (-1 < *(int *)(DAT_00046cf8 + 0x46c02) << 0x1f) {
    *(int *)(DAT_00046cf8 + 0x46c02) = 1;
    iVar7 = *(int *)(DAT_00046cfc + 0x46c10) + 1;
    *(int *)(DAT_00046cfc + 0x46c10) = iVar7;
    *(int *)(DAT_00046d00 + 0x46c1a) = iVar7;
  }
  return;
}



