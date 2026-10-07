/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000915d0 FUN_000915d0 */

byte FUN_000915d0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 == *(int *)(param_2 + 0x10)) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  bVar10 = uVar3 == 9;
  bVar11 = uVar3 == 0xd;
  bVar1 = bVar11 || bVar10;
  if (((bVar1) || (uVar3 == 0x3000 || uVar3 == 0x20)) &&
     (*(int *)(DAT_000917f8 + 0x91616) << 0x1f < 0)) {
    iVar6 = 0;
    iVar4 = 0x91;
    do {
      while( true ) {
        iVar5 = iVar6 + (iVar4 - iVar6) / 2;
        uVar7 = *(uint *)(DAT_000917fc + 0x91624 + iVar5 * 8);
        if (*(byte *)(iVar8 + 1) == uVar7) {
          if (*(char *)(DAT_000917fc + 0x91624 + iVar5 * 8 + 4) != '\0') {
            return 0;
          }
          goto LAB_00091644;
        }
        if (*(byte *)(iVar8 + 1) < uVar7) break;
        iVar6 = iVar5 + 1;
        if (iVar4 < iVar6) goto LAB_00091644;
      }
      iVar4 = iVar5 + -1;
    } while (iVar6 <= iVar4);
  }
LAB_00091644:
  if ((iVar8 - *(int *)(param_2 + 0x10) < 2) ||
     ((cVar2 = *(char *)(iVar8 + -2), cVar2 != '\r' && cVar2 != '\t' && (cVar2 != ' ')))) {
    uVar7 = (uint)*(byte *)(iVar8 + -1);
LAB_0009166e:
    uVar9 = uVar7;
    if ((uVar7 != 0xd && uVar7 != 9) && (uVar7 != 0x20)) goto LAB_00091700;
LAB_00091684:
    if (!bVar11 && !bVar10) {
LAB_000916e0:
      if (uVar3 == 0x3000 || uVar3 == 0x20) {
        iVar8 = *(int *)(DAT_00091808 + 0x916fa);
        goto LAB_00091690;
      }
      iVar8 = *(int *)(DAT_0009180c + 0x91730);
      if (iVar8 << 0x1d < 0) {
        if ((0x5f < uVar3 - 0x3130 && 0xff < uVar3 - 0x1100) && (0x2ba3 < uVar3 - 0xac00))
        goto LAB_0009175c;
      }
      else {
        bVar1 = uVar3 - 0x1100 < 0x100;
LAB_0009175c:
        if (uVar3 - 0x3000 < 0xa7b0) {
          bVar1 = true;
        }
        if (((bVar1) || (uVar3 - 0xf900 < 0x200)) || (uVar3 - 0xff00 < 0xdd)) goto LAB_00091690;
      }
      if (uVar7 != 0x2d) {
        return 0;
      }
      goto LAB_00091690;
    }
  }
  else {
    uVar7 = (uint)*(byte *)(iVar8 + -1);
    if (uVar7 != 0x22) goto LAB_0009166e;
    if (bVar11 || bVar10) {
      uVar9 = 0x22;
    }
    else {
      if (uVar3 != 0x3000 && uVar3 != 0x20) {
        return 0;
      }
      uVar9 = 0x22;
    }
LAB_00091700:
    if (uVar3 != 0x22) goto LAB_00091684;
    cVar2 = *(char *)(iVar8 + 1);
    if (cVar2 == '\r' || cVar2 == '\t') {
      return 0;
    }
    if (cVar2 == ' ') {
      return 0;
    }
    if (!bVar11 && !bVar10) goto LAB_000916e0;
  }
  iVar8 = *(int *)(DAT_00091800 + 0x91690);
LAB_00091690:
  if (iVar8 << 0x1f < 0) {
    iVar4 = 0;
    iVar8 = 0x91;
    do {
      iVar6 = iVar4 + (iVar8 - iVar4) / 2;
      uVar7 = *(uint *)(DAT_00091804 + 0x9169e + iVar6 * 8);
      if (uVar3 == uVar7) {
        if (*(char *)(DAT_00091804 + 0x9169e + iVar6 * 8 + 4) != '\0') {
          return 0;
        }
        break;
      }
      if (uVar3 < uVar7) {
        iVar8 = iVar6 + -1;
      }
      else {
        iVar4 = iVar6 + 1;
      }
    } while (iVar4 <= iVar8);
    iVar4 = 0;
    iVar8 = 0x91;
    do {
      iVar6 = iVar4 + (iVar8 - iVar4) / 2;
      uVar3 = *(uint *)(DAT_00091810 + 0x9179e + iVar6 * 8);
      if (uVar9 == uVar3) {
        return *(byte *)(DAT_00091810 + 0x9179e + iVar6 * 8 + 5) ^ 1;
      }
      if (uVar9 < uVar3) {
        iVar8 = iVar6 + -1;
      }
      else {
        iVar4 = iVar6 + 1;
      }
    } while (iVar4 <= iVar8);
  }
  return 1;
}



