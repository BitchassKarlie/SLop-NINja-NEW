/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023380 FUN_00023380 */

uint FUN_00023380(int param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar4 = DAT_00023628;
  piVar12 = (int *)(DAT_00023628 + 0x2338c);
  if (*(int *)(DAT_00023628 + 0x233c0) < 1) {
    piVar1 = (int *)(DAT_00023628 + 0x23390);
    iVar8 = 0;
    *(undefined4 *)(DAT_00023628 + 0x233c0) = 0;
    if (0 < *piVar1) {
      iVar15 = *(int *)(iVar4 + 0x233c4);
      iVar9 = 0;
      iVar14 = *(int *)(iVar4 + 0x233c8);
      iVar6 = 0;
      iVar13 = *(int *)(iVar4 + 0x233cc);
      iVar16 = iVar15;
      do {
        iVar11 = *piVar12 + iVar8;
        iVar9 = iVar9 + *(int *)(iVar11 + 0x2c4);
        *(int *)(iVar11 + 0x2c8) = iVar9;
        iVar11 = *piVar12 + iVar8;
        if (*(int *)(iVar11 + 0x2e4) < 1) {
          iVar14 = iVar14 + *(int *)(iVar11 + 0x2c4);
        }
        if (*(char *)(iVar11 + 0x2d4) != '\0') {
          iVar15 = iVar15 + *(int *)(iVar11 + 0x2c4);
          iVar16 = iVar15;
          if (*(int *)(iVar11 + 0x2e4) < 1) {
            iVar13 = iVar13 + *(int *)(iVar11 + 0x2c4);
          }
        }
        *(int *)(iVar11 + 0x2cc) = iVar15;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x2ec;
      } while (iVar6 < *(int *)(iVar4 + 0x23390));
      *(int *)(iVar4 + 0x233c0) = iVar9;
      *(int *)(iVar4 + 0x233c8) = iVar14;
      *(int *)(iVar4 + 0x233c4) = iVar16;
      *(int *)(iVar4 + 0x233cc) = iVar13;
    }
  }
  uVar3 = FUN_00086780();
  iVar4 = FUN_0008570c(uVar3,0);
  if (iVar4 == 0) {
    if (param_1 == 0) {
      iVar4 = FUN_00086780();
      uVar7 = *(uint *)(DAT_00023640 + 0x23504);
      lVar2 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
              CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                       *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
      uVar3 = (undefined4)lVar2;
      uVar5 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar2 >> 0x20);
      lVar2 = CONCAT44(uVar5,uVar3);
      *(undefined4 *)(iVar4 + 8) = uVar3;
      *(uint *)(iVar4 + 0xc) = uVar5;
      if (uVar7 - 1 < 0xfffffffe) {
        lVar2 = (ulonglong)uVar5 * (ulonglong)uVar7;
      }
      uVar10 = (uint)lVar2;
      uVar5 = *(uint *)(DAT_00023644 + 0x23504);
      if (0 < (int)uVar5) {
        uVar10 = 0;
        iVar4 = *(int *)(DAT_00023644 + 0x23500);
        iVar8 = 0;
        do {
          uVar7 = *(uint *)(iVar4 + 0x2e4);
          if ((int)uVar7 < 1) {
            uVar7 = *(uint *)(iVar4 + 0x2c4);
            iVar8 = iVar8 + uVar7;
            if ((int)((ulonglong)lVar2 >> 0x20) < iVar8) {
              return uVar10;
            }
          }
          uVar10 = uVar10 + 1;
          iVar4 = iVar4 + 0x2ec;
        } while (uVar10 != uVar5);
      }
    }
    else {
      iVar4 = FUN_00086780();
      uVar7 = *(uint *)(DAT_00023638 + 0x23492);
      lVar2 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
              CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                       *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
      uVar3 = (undefined4)lVar2;
      uVar10 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar2 >> 0x20);
      lVar2 = CONCAT44(uVar10,uVar3);
      *(undefined4 *)(iVar4 + 8) = uVar3;
      *(uint *)(iVar4 + 0xc) = uVar10;
      uVar5 = uVar7 - 1;
      if (uVar5 < 0xfffffffe) {
        lVar2 = (ulonglong)uVar10 * (ulonglong)uVar7;
      }
      iVar4 = (int)((ulonglong)lVar2 >> 0x20);
      uVar10 = (uint)lVar2;
      uVar7 = *(uint *)(DAT_0002363c + 0x2349a);
      if (0 < (int)uVar7) {
        uVar10 = *(uint *)(*(int *)(DAT_0002363c + 0x23496) + 0x2c8);
        if (iVar4 < (int)uVar10) {
          return 0;
        }
        uVar5 = 0;
        iVar8 = *(int *)(DAT_0002363c + 0x23496);
        while (uVar5 = uVar5 + 1, uVar5 != uVar7) {
          uVar10 = *(uint *)(iVar8 + 0x5b4);
          iVar8 = iVar8 + 0x2ec;
          if (iVar4 < (int)uVar10) {
            return uVar5;
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    iVar4 = FUN_00086780();
    uVar7 = *(uint *)(DAT_00023648 + 0x23578);
    lVar2 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
            CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                     *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    uVar3 = (undefined4)lVar2;
    uVar5 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar2 >> 0x20);
    lVar2 = CONCAT44(uVar5,uVar3);
    *(undefined4 *)(iVar4 + 8) = uVar3;
    *(uint *)(iVar4 + 0xc) = uVar5;
    if (uVar7 - 1 < 0xfffffffe) {
      lVar2 = (ulonglong)uVar5 * (ulonglong)uVar7;
    }
    uVar10 = (uint)lVar2;
    uVar5 = *(uint *)(DAT_0002364c + 0x23574);
    if (0 < (int)uVar5) {
      uVar10 = 0;
      iVar4 = *(int *)(DAT_0002364c + 0x23570);
      iVar8 = 0;
      do {
        uVar7 = *(uint *)(iVar4 + 0x2e4);
        if (((int)uVar7 < 1) && (uVar7 = (uint)*(byte *)(iVar4 + 0x2d4), uVar7 != 0)) {
          uVar7 = *(uint *)(iVar4 + 0x2c4);
          iVar8 = iVar8 + uVar7;
          if ((int)((ulonglong)lVar2 >> 0x20) < iVar8) {
            return uVar10;
          }
        }
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 0x2ec;
      } while (uVar10 != uVar5);
    }
  }
  else {
    iVar4 = FUN_00086780();
    uVar7 = *(uint *)(DAT_0002362c + 0x233e8);
    lVar2 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
            CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                     *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    uVar3 = (undefined4)lVar2;
    uVar10 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar2 >> 0x20);
    lVar2 = CONCAT44(uVar10,uVar3);
    *(undefined4 *)(iVar4 + 8) = uVar3;
    *(uint *)(iVar4 + 0xc) = uVar10;
    uVar5 = uVar7 - 1;
    if (uVar5 < 0xfffffffe) {
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar7;
    }
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    uVar10 = (uint)lVar2;
    uVar7 = *(uint *)(DAT_00023630 + 0x233ec);
    if (0 < (int)uVar7) {
      uVar10 = *(uint *)(*(int *)(DAT_00023630 + 0x233e8) + 0x2cc);
      if (iVar4 < (int)uVar10) {
        return 0;
      }
      uVar5 = 0;
      iVar8 = *(int *)(DAT_00023630 + 0x233e8);
      while (uVar5 = uVar5 + 1, uVar5 != uVar7) {
        uVar10 = *(uint *)(iVar8 + 0x5b8);
        iVar8 = iVar8 + 0x2ec;
        if (iVar4 < (int)uVar10) {
          return uVar5;
        }
      }
    }
  }
  iVar4 = FUN_00086780(uVar5,uVar7,uVar10);
  iVar8 = *(int *)(DAT_00023634 + 0x2341c);
  lVar2 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
          CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                   *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
  uVar7 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar2 >> 0x20);
  *(int *)(iVar4 + 8) = (int)lVar2;
  *(uint *)(iVar4 + 0xc) = uVar7;
  if (iVar8 - 2U < 0xfffffffe) {
    uVar7 = (uint)((ulonglong)(iVar8 - 1) * (ulonglong)uVar7 >> 0x20);
  }
  return uVar7;
}



