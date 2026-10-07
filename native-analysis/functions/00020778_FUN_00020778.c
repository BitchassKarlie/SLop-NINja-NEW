/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00020778 FUN_00020778 */

undefined4 FUN_00020778(int param_1,undefined *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(DAT_00020810 + 0x20786);
  if ((-1 < *piVar4 << 0x1f) &&
     (iVar3 = __cxa_guard_acquire(piVar4), iVar2 = DAT_0002081c, iVar3 != 0)) {
    uVar1 = FUN_0008f414(DAT_00020818 + 0x207c2);
    *(undefined4 *)(iVar2 + 0x207cc) = uVar1;
    uVar1 = FUN_0008f414(DAT_00020820 + 0x207ce);
    *(undefined4 *)(iVar2 + 0x207d8) = uVar1;
    uVar1 = FUN_0008f414(DAT_00020824 + 0x207d8);
    *(undefined4 *)(iVar2 + 0x207e4) = uVar1;
    uVar1 = FUN_0008f414(DAT_00020828 + 0x207e2);
    *(undefined4 *)(iVar2 + 0x207f0) = uVar1;
    uVar1 = FUN_0008f414(DAT_0002082c + 0x207ec);
    *(undefined4 *)(iVar2 + 0x207fc) = uVar1;
    __cxa_guard_release(piVar4);
  }
  iVar2 = DAT_00020814 + 0x20790;
  if (*(int *)(DAT_00020814 + 0x20794) == param_1) {
    iVar3 = 0;
LAB_000207fa:
    iVar2 = DAT_00020830 + 0x20804;
    *param_2 = *(undefined *)(iVar2 + iVar3 * 0xc);
    uVar1 = *(undefined4 *)(iVar2 + iVar3 * 0xc + 8);
  }
  else {
    iVar3 = 1;
    do {
      if (*(int *)(iVar2 + 0x10) == param_1) goto LAB_000207fa;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 != 5);
    uVar1 = 0xffffffff;
    *param_2 = 0;
  }
  return uVar1;
}



