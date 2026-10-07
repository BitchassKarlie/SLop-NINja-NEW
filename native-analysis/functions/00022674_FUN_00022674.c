/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022674 FUN_00022674 */

uint FUN_00022674(char *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar4 = FUN_0008f414();
    if (0 < (int)*(uint *)(DAT_00022710 + 0x22696)) {
      iVar5 = *(int *)(DAT_00022710 + 0x22692);
      if ((iVar4 == *(int *)(iVar5 + 0x210)) || (iVar4 == *(int *)(iVar5 + 0x214))) {
        return 0;
      }
      uVar3 = 0;
      while (uVar3 = uVar3 + 1, uVar3 != *(uint *)(DAT_00022710 + 0x22696)) {
        if (iVar4 == *(int *)(iVar5 + 0x4fc)) {
          return uVar3;
        }
        piVar1 = (int *)(iVar5 + 0x500);
        iVar5 = iVar5 + 0x2ec;
        if (iVar4 == *piVar1) {
          return uVar3;
        }
      }
    }
  }
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    iVar4 = FUN_00086780(0xffffffff);
    iVar5 = *(int *)(DAT_00022714 + 0x226d8);
    lVar2 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
            CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                     *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    uVar3 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar2 >> 0x20);
    *(int *)(iVar4 + 8) = (int)lVar2;
    *(uint *)(iVar4 + 0xc) = uVar3;
    if (iVar5 - 2U < 0xfffffffe) {
      uVar3 = (uint)((ulonglong)(iVar5 - 1) * (ulonglong)uVar3 >> 0x20);
    }
  }
  return uVar3;
}



