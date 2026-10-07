/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9960 FUN_000b9960 */

longlong FUN_000b9960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    lVar12 = -0x83;
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      uVar5 = *(uint *)(param_1 + 0x50);
      iVar7 = *(int *)(param_1 + 0x54);
      iVar6 = 0;
      lVar12 = 0;
      lVar13 = 0;
    }
    else {
      lVar12 = FUN_000b9750(param_1,0xffffffff,param_3,*(int *)(param_1 + 0x58),param_4);
      lVar13 = FUN_000b97b0(param_1,0xffffffff);
      iVar6 = *(int *)(param_1 + 0x34) + -1;
      if (iVar6 < 0) {
        uVar5 = *(uint *)(param_1 + 0x50);
        iVar6 = iVar6 * 0x20;
        iVar7 = *(int *)(param_1 + 0x54);
      }
      else {
        iVar11 = iVar6 * 0x10 + 8;
        lVar1 = lVar12;
        lVar2 = lVar13;
        do {
          plVar8 = (longlong *)(*(int *)(param_1 + 0x44) + iVar11);
          lVar4 = *plVar8;
          lVar3 = *plVar8;
          iVar9 = (int)((ulonglong)(lVar1 - lVar4) >> 0x20);
          lVar12 = lVar1 - *plVar8;
          lVar14 = FUN_000b97b0(param_1,iVar6);
          iVar7 = *(int *)(param_1 + 0x54);
          uVar5 = *(uint *)(param_1 + 0x50);
          lVar13 = lVar2 - lVar14;
          if ((iVar9 == iVar7 || iVar9 < iVar7) &&
             ((iVar9 != iVar7 || ((uint)(lVar1 - lVar4) <= uVar5)))) {
            iVar6 = iVar6 << 5;
            lVar12 = lVar1 - lVar3;
            lVar13 = lVar2 - lVar14;
            goto LAB_000b9986;
          }
          iVar6 = iVar6 + -1;
          iVar11 = iVar11 + -0x10;
          lVar1 = lVar12;
          lVar2 = lVar13;
        } while (iVar6 != -1);
        iVar6 = -0x20;
      }
    }
LAB_000b9986:
    uVar10 = (uint)((ulonglong)uVar5 * 1000);
    iVar6 = *(int *)(*(int *)(param_1 + 0x48) + iVar6 + 8);
    lVar12 = __aeabi_ldivmod(uVar10 - (uint)lVar12,
                             ((iVar7 * 1000 + (int)((ulonglong)uVar5 * 1000 >> 0x20)) -
                             (int)((ulonglong)lVar12 >> 0x20)) - (uint)(uVar10 < (uint)lVar12),iVar6
                             ,iVar6 >> 0x1f);
    lVar12 = lVar12 + lVar13;
  }
  return lVar12;
}



