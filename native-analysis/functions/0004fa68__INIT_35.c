/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004fa68 _INIT_35 */

void _INIT_35(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = DAT_0004fd38 + 0x4fa78;
  if (-1 < *(int *)(DAT_0004fd34 + 0x4fa72) << 0x1f) {
    *(int *)(DAT_0004fd34 + 0x4fa72) = 1;
    iVar2 = DAT_0004fd3c;
    uVar8 = DAT_0004fd30;
    uVar1 = DAT_0004fd2c;
    *(undefined4 *)(DAT_0004fd3c + 0x4fa8c) = DAT_0004fd30;
    *(undefined4 *)(iVar2 + 0x4fa90) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fa94) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fa98) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fa9c) = uVar1;
    *(undefined4 *)(iVar2 + 0x4faa0) = uVar8;
    *(undefined4 *)(iVar2 + 0x4faa4) = uVar1;
    *(undefined4 *)(iVar2 + 0x4faa8) = uVar1;
    *(undefined4 *)(iVar2 + 0x4faac) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fab0) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fab4) = uVar8;
    *(undefined4 *)(iVar2 + 0x4fab8) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fabc) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fac0) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fac4) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fac8) = uVar8;
  }
  iVar7 = DAT_0004ff68;
  iVar3 = DAT_0004ff64;
  iVar2 = DAT_0004ff60;
  uVar1 = DAT_0004ff08;
  iVar9 = DAT_0004fd44;
  if (-1 < *(int *)(DAT_0004fd40 + 0x4fad0) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0004ff64 + 0x4fef0);
    *(int *)(DAT_0004fd40 + 0x4fad0) = 1;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar3 + 0x4fef4) = uVar1;
    *(undefined4 *)(iVar3 + 0x4fef8) = uVar1;
    __aeabi_atexit(puVar4,iVar7 + 0x4ff00,*(undefined4 *)(iVar6 + iVar2));
    iVar9 = iVar2;
  }
  iVar3 = DAT_0004fd50;
  iVar2 = DAT_0004fd4c;
  uVar1 = DAT_0004fd2c;
  if (-1 < *(int *)(DAT_0004fd48 + 0x4fae0) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0004fd4c + 0x4faf2);
    *(int *)(DAT_0004fd48 + 0x4fae0) = 1;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar2 + 0x4faf6) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x4fafe,*(undefined4 *)(iVar6 + iVar9));
  }
  iVar7 = DAT_0004fd5c;
  iVar3 = DAT_0004fd58;
  iVar2 = DAT_0004fd54;
  uVar8 = *(undefined4 *)(iVar6 + iVar9);
  puVar5 = (undefined *)(DAT_0004fd54 + 0x4fb12);
  iVar10 = DAT_0004fd54 + 0x4fb16;
  *(undefined *)(DAT_0004fd54 + 0x4fb15) = 0xff;
  *(undefined *)(iVar2 + 0x4fb14) = 0;
  *(undefined *)(iVar2 + 0x4fb13) = 0;
  iVar7 = iVar7 + 0x4fb2a;
  *puVar5 = 0;
  __aeabi_atexit(puVar5,iVar3 + 0x4fb1e,uVar8);
  FUN_0004fa48(iVar10);
  __aeabi_atexit(iVar10,iVar7,uVar8);
  FUN_0004fa48(iVar2 + 0x4fb1a);
  __aeabi_atexit(iVar2 + 0x4fb1a,iVar7,uVar8);
  FUN_0004fa48(iVar2 + 0x4fb1e);
  __aeabi_atexit(iVar2 + 0x4fb1e,iVar7,uVar8);
  iVar3 = DAT_0004fd68;
  iVar2 = DAT_0004fd64;
  uVar1 = DAT_0004fd30;
  if (-1 < *(int *)(DAT_0004fd60 + 0x4fb6a) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0004fd64 + 0x4fb7c);
    *(int *)(DAT_0004fd60 + 0x4fb6a) = 1;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar2 + 0x4fb80) = uVar1;
    *(undefined4 *)(iVar2 + 0x4fb84) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x4fb8c,uVar8);
  }
  iVar3 = DAT_0004fd74;
  iVar2 = DAT_0004fd70;
  uVar1 = DAT_0004fd2c;
  if (-1 < *(int *)(DAT_0004fd6c + 0x4fb96) << 0x1f) {
    puVar4 = (undefined4 *)(DAT_0004fd70 + 0x4fba8);
    *(int *)(DAT_0004fd6c + 0x4fb96) = 1;
    uVar8 = DAT_0004fd30;
    *puVar4 = uVar1;
    *(undefined4 *)(iVar2 + 0x4fbac) = uVar8;
    *(undefined4 *)(iVar2 + 0x4fbb0) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x4fbbc,*(undefined4 *)(iVar6 + iVar9));
  }
  if (-1 < *(int *)(DAT_0004fd78 + 0x4fbc8) << 0x1f) {
    *(int *)(DAT_0004fd78 + 0x4fbc8) = 1;
    iVar6 = *(int *)(DAT_0004fd7c + 0x4fbd6) + 1;
    *(int *)(DAT_0004fd7c + 0x4fbd6) = iVar6;
    *(int *)(DAT_0004fd80 + 0x4fbe0) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fd84 + 0x4fbe6) << 0x1f) {
    *(int *)(DAT_0004fd84 + 0x4fbe6) = 1;
    iVar6 = *(int *)(DAT_0004fd88 + 0x4fbf4) + 1;
    *(int *)(DAT_0004fd88 + 0x4fbf4) = iVar6;
    *(int *)(DAT_0004fd8c + 0x4fbfe) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fd90 + 0x4fc04) << 0x1f) {
    *(int *)(DAT_0004fd90 + 0x4fc04) = 1;
    iVar6 = *(int *)(DAT_0004fd94 + 0x4fc12) + 1;
    *(int *)(DAT_0004fd94 + 0x4fc12) = iVar6;
    *(int *)(DAT_0004fd98 + 0x4fc1c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fd9c + 0x4fc22) << 0x1f) {
    *(int *)(DAT_0004fd9c + 0x4fc22) = 1;
    iVar6 = *(int *)(DAT_0004fda0 + 0x4fc30) + 1;
    *(int *)(DAT_0004fda0 + 0x4fc30) = iVar6;
    *(int *)(DAT_0004fda4 + 0x4fc3a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fda8 + 0x4fc40) << 0x1f) {
    *(int *)(DAT_0004fda8 + 0x4fc40) = 1;
    iVar6 = *(int *)(DAT_0004fdac + 0x4fc4e) + 1;
    *(int *)(DAT_0004fdac + 0x4fc4e) = iVar6;
    *(int *)(DAT_0004fdb0 + 0x4fc58) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fdb4 + 0x4fc5e) << 0x1f) {
    *(int *)(DAT_0004fdb4 + 0x4fc5e) = 1;
    iVar6 = *(int *)(DAT_0004fdb8 + 0x4fc6c) + 1;
    *(int *)(DAT_0004fdb8 + 0x4fc6c) = iVar6;
    *(int *)(DAT_0004fdbc + 0x4fc76) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fdc0 + 0x4fc7c) << 0x1f) {
    *(int *)(DAT_0004fdc0 + 0x4fc7c) = 1;
    iVar6 = *(int *)(DAT_0004fdc4 + 0x4fc8a) + 1;
    *(int *)(DAT_0004fdc4 + 0x4fc8a) = iVar6;
    *(int *)(DAT_0004fdc8 + 0x4fc94) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fdcc + 0x4fc9a) << 0x1f) {
    *(int *)(DAT_0004fdcc + 0x4fc9a) = 1;
    iVar6 = *(int *)(DAT_0004fdd0 + 0x4fca8) + 1;
    *(int *)(DAT_0004fdd0 + 0x4fca8) = iVar6;
    *(int *)(DAT_0004fdd4 + 0x4fcb2) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fdd8 + 0x4fcb8) << 0x1f) {
    *(int *)(DAT_0004fdd8 + 0x4fcb8) = 1;
    iVar6 = *(int *)(DAT_0004fddc + 0x4fcc6) + 1;
    *(int *)(DAT_0004fddc + 0x4fcc6) = iVar6;
    *(int *)(DAT_0004fde0 + 0x4fcd0) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fde4 + 0x4fcd6) << 0x1f) {
    *(int *)(DAT_0004fde4 + 0x4fcd6) = 1;
    iVar6 = *(int *)(DAT_0004fde8 + 0x4fce4) + 1;
    *(int *)(DAT_0004fde8 + 0x4fce4) = iVar6;
    *(int *)(DAT_0004fdec + 0x4fcee) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fdf0 + 0x4fcf4) << 0x1f) {
    *(int *)(DAT_0004fdf0 + 0x4fcf4) = 1;
    iVar6 = *(int *)(DAT_0004fdf4 + 0x4fd02) + 1;
    *(int *)(DAT_0004fdf4 + 0x4fd02) = iVar6;
    *(int *)(DAT_0004fdf8 + 0x4fd0c) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004fdfc + 0x4fd12) << 0x1f) {
    *(int *)(DAT_0004fdfc + 0x4fd12) = 1;
    iVar6 = *(int *)(DAT_0004fe00 + 0x4fd20) + 1;
    *(int *)(DAT_0004fe00 + 0x4fd20) = iVar6;
    *(int *)(DAT_0004fe04 + 0x4fd2a) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004ff0c + 0x4fe0e) << 0x1f) {
    *(int *)(DAT_0004ff0c + 0x4fe0e) = 1;
    iVar6 = *(int *)(DAT_0004ff10 + 0x4fe1c) + 1;
    *(int *)(DAT_0004ff10 + 0x4fe1c) = iVar6;
    *(int *)(DAT_0004ff14 + 0x4fe26) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004ff18 + 0x4fe2c) << 0x1f) {
    *(int *)(DAT_0004ff18 + 0x4fe2c) = 1;
    iVar6 = *(int *)(DAT_0004ff1c + 0x4fe3a) + 1;
    *(int *)(DAT_0004ff1c + 0x4fe3a) = iVar6;
    *(int *)(DAT_0004ff20 + 0x4fe44) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004ff24 + 0x4fe4a) << 0x1f) {
    *(int *)(DAT_0004ff24 + 0x4fe4a) = 1;
    iVar6 = *(int *)(DAT_0004ff28 + 0x4fe58) + 1;
    *(int *)(DAT_0004ff28 + 0x4fe58) = iVar6;
    *(int *)(DAT_0004ff2c + 0x4fe62) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004ff30 + 0x4fe68) << 0x1f) {
    *(int *)(DAT_0004ff30 + 0x4fe68) = 1;
    iVar6 = *(int *)(DAT_0004ff34 + 0x4fe76) + 1;
    *(int *)(DAT_0004ff34 + 0x4fe76) = iVar6;
    *(int *)(DAT_0004ff38 + 0x4fe80) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004ff3c + 0x4fe86) << 0x1f) {
    *(int *)(DAT_0004ff3c + 0x4fe86) = 1;
    iVar6 = *(int *)(DAT_0004ff40 + 0x4fe94) + 1;
    *(int *)(DAT_0004ff40 + 0x4fe94) = iVar6;
    *(int *)(DAT_0004ff44 + 0x4fe9e) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004ff48 + 0x4fea4) << 0x1f) {
    *(int *)(DAT_0004ff48 + 0x4fea4) = 1;
    iVar6 = *(int *)(DAT_0004ff4c + 0x4feb2) + 1;
    *(int *)(DAT_0004ff4c + 0x4feb2) = iVar6;
    *(int *)(DAT_0004ff50 + 0x4febc) = iVar6;
  }
  if (-1 < *(int *)(DAT_0004ff54 + 0x4fec2) << 0x1f) {
    *(int *)(DAT_0004ff54 + 0x4fec2) = 1;
    iVar6 = *(int *)(DAT_0004ff58 + 0x4fed0) + 1;
    *(int *)(DAT_0004ff58 + 0x4fed0) = iVar6;
    *(int *)(DAT_0004ff5c + 0x4feda) = iVar6;
  }
  return;
}



