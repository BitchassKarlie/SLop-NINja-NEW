/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00020398 _INIT_5 */

void _INIT_5(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar6 = DAT_00020640 + 0x203a8;
  if (-1 < *(int *)(DAT_0002063c + 0x203a2) << 0x1f) {
    *(int *)(DAT_0002063c + 0x203a2) = 1;
    iVar2 = DAT_00020644;
    uVar7 = DAT_00020638;
    uVar1 = DAT_00020634;
    *(undefined4 *)(DAT_00020644 + 0x203bc) = DAT_00020638;
    *(undefined4 *)(iVar2 + 0x203c0) = uVar1;
    *(undefined4 *)(iVar2 + 0x203c4) = uVar1;
    *(undefined4 *)(iVar2 + 0x203c8) = uVar1;
    *(undefined4 *)(iVar2 + 0x203cc) = uVar1;
    *(undefined4 *)(iVar2 + 0x203d0) = uVar7;
    *(undefined4 *)(iVar2 + 0x203d4) = uVar1;
    *(undefined4 *)(iVar2 + 0x203d8) = uVar1;
    *(undefined4 *)(iVar2 + 0x203dc) = uVar1;
    *(undefined4 *)(iVar2 + 0x203e0) = uVar1;
    *(undefined4 *)(iVar2 + 0x203e4) = uVar7;
    *(undefined4 *)(iVar2 + 0x203e8) = uVar1;
    *(undefined4 *)(iVar2 + 0x203ec) = uVar1;
    *(undefined4 *)(iVar2 + 0x203f0) = uVar1;
    *(undefined4 *)(iVar2 + 0x203f4) = uVar1;
    *(undefined4 *)(iVar2 + 0x203f8) = uVar7;
  }
  iVar4 = DAT_00020754;
  iVar3 = DAT_00020750;
  iVar2 = DAT_0002074c;
  uVar1 = DAT_00020748;
  iVar8 = DAT_0002064c;
  if (-1 < *(int *)(DAT_00020648 + 0x20400) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_00020750 + 0x20730);
    *(int *)(DAT_00020648 + 0x20400) = 1;
    *puVar5 = uVar1;
    *(undefined4 *)(iVar3 + 0x20734) = uVar1;
    *(undefined4 *)(iVar3 + 0x20738) = uVar1;
    __aeabi_atexit(puVar5,iVar4 + 0x20740,*(undefined4 *)(iVar6 + iVar2));
    iVar8 = iVar2;
  }
  iVar3 = DAT_00020658;
  iVar2 = DAT_00020654;
  uVar1 = DAT_00020634;
  if (-1 < *(int *)(DAT_00020650 + 0x2040e) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_00020654 + 0x20420);
    *(int *)(DAT_00020650 + 0x2040e) = 1;
    *puVar5 = uVar1;
    *(undefined4 *)(iVar2 + 0x20424) = uVar1;
    __aeabi_atexit(puVar5,iVar3 + 0x2042c,*(undefined4 *)(iVar6 + iVar8));
  }
  iVar3 = DAT_00020660;
  iVar2 = DAT_0002065c;
  uVar7 = *(undefined4 *)(iVar6 + iVar8);
  *(undefined *)(DAT_0002065c + 0x20449) = 0xff;
  *(undefined *)(iVar2 + 0x20448) = 0;
  *(undefined *)(iVar2 + 0x20447) = 0;
  *(undefined *)(iVar2 + 0x20446) = 0;
  __aeabi_atexit((undefined *)(iVar2 + 0x20446),iVar3 + 0x20448,uVar7);
  iVar6 = DAT_00020664;
  *(undefined4 *)(iVar2 + 0x20442) = 0;
  __aeabi_atexit((undefined4 *)(iVar2 + 0x20442),iVar6 + 0x20460,uVar7);
  iVar2 = DAT_00020670;
  iVar6 = DAT_0002066c;
  uVar1 = DAT_00020638;
  if (-1 < *(int *)(DAT_00020668 + 0x20468) << 0x1f) {
    puVar5 = (undefined4 *)(DAT_0002066c + 0x2047a);
    *(int *)(DAT_00020668 + 0x20468) = 1;
    *puVar5 = uVar1;
    *(undefined4 *)(iVar6 + 0x2047e) = uVar1;
    *(undefined4 *)(iVar6 + 0x20482) = uVar1;
    __aeabi_atexit(puVar5,iVar2 + 0x2048a,uVar7);
  }
  if (-1 < *(int *)(DAT_00020674 + 0x20494) << 0x1f) {
    *(int *)(DAT_00020674 + 0x20494) = 1;
    iVar6 = *(int *)(DAT_00020678 + 0x204a2) + 1;
    *(int *)(DAT_00020678 + 0x204a2) = iVar6;
    *(int *)(DAT_0002067c + 0x204ac) = iVar6;
  }
  if (-1 < *(int *)(DAT_00020680 + 0x204b2) << 0x1f) {
    *(int *)(DAT_00020680 + 0x204b2) = 1;
    iVar6 = *(int *)(DAT_00020684 + 0x204c0) + 1;
    *(int *)(DAT_00020684 + 0x204c0) = iVar6;
    *(int *)(DAT_00020688 + 0x204ca) = iVar6;
  }
  if (-1 < *(int *)(DAT_0002068c + 0x204d0) << 0x1f) {
    *(int *)(DAT_0002068c + 0x204d0) = 1;
    iVar6 = *(int *)(DAT_00020690 + 0x204de) + 1;
    *(int *)(DAT_00020690 + 0x204de) = iVar6;
    *(int *)(DAT_00020694 + 0x204e8) = iVar6;
  }
  if (-1 < *(int *)(DAT_00020698 + 0x204ee) << 0x1f) {
    *(int *)(DAT_00020698 + 0x204ee) = 1;
    iVar6 = *(int *)(DAT_0002069c + 0x204fc) + 1;
    *(int *)(DAT_0002069c + 0x204fc) = iVar6;
    *(int *)(DAT_000206a0 + 0x20506) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206a4 + 0x2050c) << 0x1f) {
    *(int *)(DAT_000206a4 + 0x2050c) = 1;
    iVar6 = *(int *)(DAT_000206a8 + 0x2051a) + 1;
    *(int *)(DAT_000206a8 + 0x2051a) = iVar6;
    *(int *)(DAT_000206ac + 0x20524) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206b0 + 0x2052a) << 0x1f) {
    *(int *)(DAT_000206b0 + 0x2052a) = 1;
    iVar6 = *(int *)(DAT_000206b4 + 0x20538) + 1;
    *(int *)(DAT_000206b4 + 0x20538) = iVar6;
    *(int *)(DAT_000206b8 + 0x20542) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206bc + 0x20548) << 0x1f) {
    *(int *)(DAT_000206bc + 0x20548) = 1;
    iVar6 = *(int *)(DAT_000206c0 + 0x20556) + 1;
    *(int *)(DAT_000206c0 + 0x20556) = iVar6;
    *(int *)(DAT_000206c4 + 0x20560) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206c8 + 0x20566) << 0x1f) {
    *(int *)(DAT_000206c8 + 0x20566) = 1;
    iVar6 = *(int *)(DAT_000206cc + 0x20574) + 1;
    *(int *)(DAT_000206cc + 0x20574) = iVar6;
    *(int *)(DAT_000206d0 + 0x2057e) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206d4 + 0x20584) << 0x1f) {
    *(int *)(DAT_000206d4 + 0x20584) = 1;
    iVar6 = *(int *)(DAT_000206d8 + 0x20592) + 1;
    *(int *)(DAT_000206d8 + 0x20592) = iVar6;
    *(int *)(DAT_000206dc + 0x2059c) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206e0 + 0x205a2) << 0x1f) {
    *(int *)(DAT_000206e0 + 0x205a2) = 1;
    iVar6 = *(int *)(DAT_000206e4 + 0x205b0) + 1;
    *(int *)(DAT_000206e4 + 0x205b0) = iVar6;
    *(int *)(DAT_000206e8 + 0x205ba) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206ec + 0x205c0) << 0x1f) {
    *(int *)(DAT_000206ec + 0x205c0) = 1;
    iVar6 = *(int *)(DAT_000206f0 + 0x205ce) + 1;
    *(int *)(DAT_000206f0 + 0x205ce) = iVar6;
    *(int *)(DAT_000206f4 + 0x205d8) = iVar6;
  }
  if (-1 < *(int *)(DAT_000206f8 + 0x205de) << 0x1f) {
    *(int *)(DAT_000206f8 + 0x205de) = 1;
    iVar6 = *(int *)(DAT_000206fc + 0x205ec) + 1;
    *(int *)(DAT_000206fc + 0x205ec) = iVar6;
    *(int *)(DAT_00020700 + 0x205f6) = iVar6;
  }
  if (-1 < *(int *)(DAT_00020704 + 0x205fc) << 0x1f) {
    *(int *)(DAT_00020704 + 0x205fc) = 1;
    iVar6 = *(int *)(DAT_00020708 + 0x2060a) + 1;
    *(int *)(DAT_00020708 + 0x2060a) = iVar6;
    *(int *)(DAT_0002070c + 0x20614) = iVar6;
  }
  if (-1 < *(int *)(DAT_00020710 + 0x2061a) << 0x1f) {
    *(int *)(DAT_00020710 + 0x2061a) = 1;
    iVar6 = *(int *)(DAT_00020714 + 0x20628) + 1;
    *(int *)(DAT_00020714 + 0x20628) = iVar6;
    *(int *)(DAT_00020718 + 0x20632) = iVar6;
  }
  return;
}



