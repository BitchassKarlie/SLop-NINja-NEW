/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bba20 FUN_000bba20 */

undefined4 FUN_000bba20(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int local_30;
  int local_24;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar4 = *(int **)(iVar1 + 0x1c);
  iVar9 = *(int *)(param_1 + 0x48);
  if ((*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x18) != -1)) {
    return 0xffffff7d;
  }
  uVar10 = *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = param_2[7];
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  if (uVar10 == 0xffffffff) {
    if ((*(int *)(param_1 + 0x44) != -1) && (param_2[0xe] == 0)) goto LAB_000bbe34;
LAB_000bba66:
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x14) = 0xffffffff;
    iVar2 = param_2[0xe];
    iVar5 = param_2[0xf];
  }
  else {
    if (param_2[0xe] != uVar10 + 1) goto LAB_000bba66;
LAB_000bbe34:
    iVar5 = *(int *)(param_1 + 0x44) + (uint)(0xfffffffe < uVar10);
    iVar2 = uVar10 + 1;
    if (param_2[0xf] != iVar5) goto LAB_000bba66;
  }
  *(int *)(param_1 + 0x40) = iVar2;
  *(int *)(param_1 + 0x44) = iVar5;
  iVar5 = *param_2;
  if (iVar5 == 0) {
LAB_000bbc64:
    uVar10 = *(uint *)(iVar9 + 0x10);
    iVar1 = *(int *)(iVar9 + 0x14);
    if (uVar10 != 0xffffffff) goto LAB_000bbc74;
LAB_000bbdb8:
    if (iVar1 != -1) goto LAB_000bbc74;
    *(undefined4 *)(iVar9 + 0x10) = 0;
    *(undefined4 *)(iVar9 + 0x14) = 0;
    uVar10 = *(uint *)(param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x28);
    iVar12 = *(int *)(param_1 + 0x30);
    iVar2 = *piVar4 / 2;
    iVar16 = piVar4[1] / 2;
    if (iVar12 == 0) {
      local_30 = iVar16;
      local_24 = 0;
    }
    else {
      local_30 = 0;
      local_24 = iVar16;
    }
    if (0 < *(int *)(iVar1 + 4)) {
      iVar3 = piVar4[iVar17] / 2;
      iVar13 = local_30 * 4;
      iVar19 = iVar16 / 2 - iVar2 / 2;
      iVar14 = iVar16 / 2 + iVar2 / 2;
      iVar15 = 0;
      iVar12 = *(int *)(param_1 + 0x24);
      iVar18 = 0;
      if (iVar12 == 0) goto LAB_000bbb94;
LAB_000bbb0a:
      if (iVar17 == 0) {
        iVar12 = *(int *)(iVar5 + iVar15);
        iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar15);
        iVar17 = iVar5 + (local_30 + iVar19) * 4;
        if (iVar2 < 1) goto LAB_000bbb52;
        iVar5 = 0;
        iVar6 = 0;
        do {
          iVar5 = iVar5 + 1;
          *(int *)(iVar17 + iVar6) = *(int *)(iVar17 + iVar6) + *(int *)(iVar12 + iVar6);
          iVar6 = iVar6 + 4;
        } while (iVar5 != iVar2);
      }
      else {
        iVar12 = *(int *)(iVar5 + iVar15);
        iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar15);
        if (iVar16 < 1) goto LAB_000bbb52;
        iVar6 = 0;
        iVar17 = 0;
        do {
          iVar17 = iVar17 + 1;
          *(int *)(iVar5 + iVar13 + iVar6) =
               *(int *)(iVar5 + iVar13 + iVar6) + *(int *)(iVar12 + iVar6);
          iVar6 = iVar6 + 4;
        } while (iVar17 != iVar16);
      }
      iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar15);
      iVar12 = *(int *)(*param_2 + iVar15);
LAB_000bbb52:
      while( true ) {
        if (0 < iVar3) {
          iVar17 = 0;
          iVar6 = 0;
          do {
            iVar6 = iVar6 + 1;
            *(undefined4 *)(iVar5 + local_24 * 4 + iVar17) =
                 *(undefined4 *)(iVar12 + iVar3 * 4 + iVar17);
            iVar17 = iVar17 + 4;
          } while (iVar6 != iVar3);
        }
        iVar18 = iVar18 + 1;
        iVar15 = iVar15 + 4;
        if (*(int *)(iVar1 + 4) <= iVar18) {
          iVar12 = *(int *)(param_1 + 0x30);
          goto LAB_000bbc1c;
        }
        iVar12 = *(int *)(param_1 + 0x24);
        iVar17 = *(int *)(param_1 + 0x28);
        iVar5 = *param_2;
        if (iVar12 != 0) break;
LAB_000bbb94:
        if (iVar17 == 0) goto LAB_000bbd22;
        iVar20 = *(int *)(*(int *)(param_1 + 8) + iVar15) + iVar13;
        iVar6 = *(int *)(iVar5 + iVar15) + iVar19 * 4;
        iVar5 = iVar12;
        iVar17 = iVar12;
        if (0 < iVar2) {
          do {
            iVar12 = iVar12 + 1;
            *(int *)(iVar20 + iVar17) = *(int *)(iVar20 + iVar17) + *(int *)(iVar6 + iVar17);
            iVar5 = iVar2;
            iVar17 = iVar17 + 4;
          } while (iVar12 != iVar2);
        }
        if (iVar14 <= iVar5) goto LAB_000bbd56;
        iVar17 = iVar5 * 4;
        iVar12 = 0;
        do {
          iVar5 = iVar5 + 1;
          *(undefined4 *)(iVar20 + iVar17 + iVar12) = *(undefined4 *)(iVar6 + iVar17 + iVar12);
          iVar12 = iVar12 + 4;
        } while (iVar5 != iVar14);
        iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar15);
        iVar12 = *(int *)(*param_2 + iVar15);
      }
      goto LAB_000bbb0a;
    }
LAB_000bbc1c:
    if (iVar12 == 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x30) = iVar16;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
      iVar1 = *(int *)(param_1 + 0x18);
    }
    if (iVar1 != -1) {
      *(int *)(param_1 + 0x18) = local_30;
      uVar7 = piVar4[*(int *)(param_1 + 0x28)];
      uVar10 = uVar7 + 3 & (int)uVar7 >> 0x20;
      if (uVar7 < 0xfffffffd) {
        uVar10 = uVar7;
      }
      uVar8 = piVar4[*(int *)(param_1 + 0x24)];
      uVar7 = uVar8 & ~((int)uVar8 >> 0x20);
      if ((int)uVar8 < 0) {
        uVar7 = uVar8 + 3;
      }
      *(int *)(param_1 + 0x14) = ((int)uVar7 >> 2) + ((int)uVar10 >> 2) + local_30;
      goto LAB_000bbc64;
    }
    *(int *)(param_1 + 0x18) = local_24;
    *(int *)(param_1 + 0x14) = local_24;
    uVar10 = *(uint *)(iVar9 + 0x10);
    iVar1 = *(int *)(iVar9 + 0x14);
    if (uVar10 == 0xffffffff) goto LAB_000bbdb8;
LAB_000bbc74:
    uVar8 = piVar4[*(int *)(param_1 + 0x28)];
    uVar7 = uVar8 + 3 & (int)uVar8 >> 0x20;
    if (uVar8 < 0xfffffffd) {
      uVar7 = uVar8;
    }
    uVar11 = piVar4[*(int *)(param_1 + 0x24)];
    uVar8 = uVar11 & ~((int)uVar11 >> 0x20);
    if ((int)uVar11 < 0) {
      uVar8 = uVar11 + 3;
    }
    uVar7 = ((int)uVar8 >> 2) + ((int)uVar7 >> 2);
    *(uint *)(iVar9 + 0x10) = uVar10 + uVar7;
    *(uint *)(iVar9 + 0x14) = iVar1 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar7);
    uVar10 = *(uint *)(param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  if ((uVar10 == 0xffffffff) && (iVar1 == -1)) {
    uVar10 = param_2[0xc];
    iVar1 = param_2[0xd];
    if ((uVar10 != 0xffffffff) || (iVar1 != -1)) {
      *(uint *)(param_1 + 0x38) = uVar10;
      *(int *)(param_1 + 0x3c) = iVar1;
      uVar7 = *(uint *)(iVar9 + 0x10);
      if ((iVar1 < *(int *)(iVar9 + 0x14)) ||
         ((*(int *)(iVar9 + 0x14) == iVar1 && (uVar10 < uVar7)))) {
        if (param_2[0xb] == 0) {
          iVar1 = (*(int *)(param_1 + 0x18) + uVar7) - uVar10;
          *(int *)(param_1 + 0x18) = iVar1;
          if (*(int *)(param_1 + 0x14) < iVar1) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
          }
        }
        else {
          *(uint *)(param_1 + 0x14) = (*(int *)(param_1 + 0x14) + uVar10) - uVar7;
        }
      }
    }
    goto LAB_000bbe08;
  }
  uVar8 = piVar4[*(int *)(param_1 + 0x28)];
  uVar7 = uVar8 + 3 & (int)uVar8 >> 0x20;
  if (uVar8 < 0xfffffffd) {
    uVar7 = uVar8;
  }
  uVar11 = piVar4[*(int *)(param_1 + 0x24)];
  uVar8 = uVar11 & ~((int)uVar11 >> 0x20);
  if ((int)uVar11 < 0) {
    uVar8 = uVar11 + 3;
  }
  uVar8 = ((int)uVar8 >> 2) + ((int)uVar7 >> 2);
  uVar7 = uVar10 + uVar8;
  iVar1 = iVar1 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar10,uVar8);
  *(uint *)(param_1 + 0x38) = uVar7;
  *(int *)(param_1 + 0x3c) = iVar1;
  uVar10 = param_2[0xc];
  iVar9 = param_2[0xd];
  if (uVar10 == 0xffffffff) {
    if (iVar9 == -1) goto LAB_000bbe08;
    if (uVar7 == 0xffffffff) goto LAB_000bbe4a;
  }
  else if (uVar7 == uVar10) {
LAB_000bbe4a:
    if (iVar1 == iVar9) goto LAB_000bbe08;
  }
  if ((((iVar9 < iVar1) || ((iVar1 == iVar9 && (uVar10 < uVar7)))) && (uVar7 - uVar10 != 0)) &&
     (param_2[0xb] != 0)) {
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (uVar7 - uVar10);
    uVar10 = param_2[0xc];
    iVar9 = param_2[0xd];
  }
  *(uint *)(param_1 + 0x38) = uVar10;
  *(int *)(param_1 + 0x3c) = iVar9;
LAB_000bbe08:
  if (param_2[0xb] != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return 0;
LAB_000bbd22:
  iVar12 = *(int *)(iVar5 + iVar15);
  iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar15);
  if (0 < iVar2) {
    iVar17 = 0;
    iVar6 = 0;
    do {
      iVar17 = iVar17 + 1;
      *(int *)(iVar5 + iVar13 + iVar6) = *(int *)(iVar5 + iVar13 + iVar6) + *(int *)(iVar12 + iVar6)
      ;
      iVar6 = iVar6 + 4;
    } while (iVar17 != iVar2);
LAB_000bbd56:
    iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar15);
    iVar12 = *(int *)(*param_2 + iVar15);
  }
  goto LAB_000bbb52;
}



