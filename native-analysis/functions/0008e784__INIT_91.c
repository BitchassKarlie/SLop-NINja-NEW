/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e784 _INIT_91 */

void _INIT_91(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0008e820 + 0x8e792;
  if (-1 < *(int *)(DAT_0008e81c + 0x8e78c) << 0x1f) {
    *(int *)(DAT_0008e81c + 0x8e78c) = 1;
    iVar2 = DAT_0008e824;
    uVar6 = DAT_0008e818;
    uVar1 = DAT_0008e814;
    *(undefined4 *)(DAT_0008e824 + 0x8e7a6) = DAT_0008e818;
    *(undefined4 *)(iVar2 + 0x8e7aa) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7ae) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7b2) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7b6) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7ba) = uVar6;
    *(undefined4 *)(iVar2 + 0x8e7be) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7c2) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7c6) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7ca) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7ce) = uVar6;
    *(undefined4 *)(iVar2 + 0x8e7d2) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7d6) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7da) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7de) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e7e2) = uVar6;
  }
  if (-1 < *(int *)(DAT_0008e828 + 0x8e7ea) << 0x1f) {
    *(int *)(DAT_0008e828 + 0x8e7ea) = 1;
    iVar3 = DAT_0008e834;
    iVar2 = DAT_0008e830;
    uVar1 = DAT_0008e814;
    puVar4 = (undefined4 *)(DAT_0008e830 + 0x8e800);
    uVar6 = *(undefined4 *)(iVar5 + DAT_0008e82c);
    *puVar4 = DAT_0008e814;
    *(undefined4 *)(iVar2 + 0x8e804) = uVar1;
    *(undefined4 *)(iVar2 + 0x8e808) = uVar1;
    __aeabi_atexit(puVar4,iVar3 + 0x8e810,uVar6);
  }
  return;
}



