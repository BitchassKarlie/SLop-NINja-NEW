/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bfd84 FUN_000bfd84 */

void FUN_000bfd84(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint *local_784;
  uint *local_780;
  uint *local_76c;
  uint *local_768;
  uint *local_760;
  uint *local_75c;
  uint *local_728;
  int local_718;
  int local_640;
  int local_634;
  uint local_5f8;
  int local_344;
  int local_33c;
  int local_334;
  int local_32c;
  
  iVar4 = param_1 >> 1;
  iVar5 = param_1 >> 2;
  if (param_1 << 0x19 < 0) {
    uVar15 = 6;
  }
  else {
    uVar15 = 6;
    do {
      uVar15 = uVar15 + 1;
    } while (-1 < (param_1 >> (uVar15 & 0xff)) << 0x1f);
  }
  uVar15 = 0xd - uVar15;
  iVar16 = 2 << (uVar15 & 0xff);
  puVar13 = param_3 + iVar5 + iVar4;
  puVar27 = param_2 + iVar4 + -7;
  local_76c = (uint *)(DAT_000c0940 + 0xbfde4);
  puVar6 = local_76c + iVar16;
  puVar9 = puVar13;
  local_760 = puVar6;
  do {
    puVar21 = puVar9 + -4;
    uVar1 = puVar27[4];
    uVar7 = *local_76c;
    uVar20 = local_76c[1];
    uVar23 = puVar27[6];
    puVar9[-2] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                 uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                 ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                 uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
    puVar9[-1] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                  uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                 (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                 (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
    uVar1 = *puVar27;
    uVar7 = *local_760;
    uVar20 = local_760[1];
    uVar23 = puVar27[2];
    puVar27 = puVar27 + -8;
    *puVar21 = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
               uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
               ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
               uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
    puVar9[-3] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                  uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                 (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                 (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
    local_76c = local_76c + iVar16 * 2;
    local_760 = local_760 + iVar16 * 2;
    puVar9 = puVar21;
  } while (param_2 + iVar5 <= puVar27);
  local_760 = local_76c + -iVar16;
  do {
    uVar1 = puVar27[4];
    uVar7 = local_76c[1];
    uVar20 = *local_76c;
    uVar23 = puVar27[6];
    puVar21[-2] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                  uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                  ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                  uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
    puVar21[-1] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                   uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                  (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                  (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
    uVar1 = *puVar27;
    uVar7 = local_760[1];
    uVar20 = *local_760;
    uVar23 = puVar27[2];
    puVar27 = puVar27 + -8;
    puVar21[-4] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                  uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                  ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                  uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
    puVar21[-3] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                   uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                  (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                  (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
    puVar21 = puVar21 + -4;
    local_76c = local_76c + iVar16 * -2;
    local_760 = local_760 + iVar16 * -2;
  } while (param_2 <= puVar27);
  puVar27 = (uint *)(DAT_000c0944 + 0xc00c0);
  puVar9 = param_2 + iVar4 + -8;
  local_784 = puVar13;
  do {
    puVar27 = puVar27 + iVar16 * 2;
    uVar1 = puVar6[1];
    uVar23 = *puVar6;
    uVar7 = puVar9[6];
    uVar20 = puVar9[4];
    *local_784 = (((int)((ulonglong)uVar23 * (ulonglong)uVar7 >> 0x20) +
                  uVar7 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar7 >> 0x1f)) -
                 ((int)((ulonglong)uVar1 * (ulonglong)uVar20 >> 0x20) +
                 uVar20 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar20 >> 0x1f))) * 2;
    local_784[1] = ((int)((ulonglong)uVar23 * (ulonglong)uVar20 >> 0x20) +
                   uVar20 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar20 >> 0x1f)) * 2 +
                   (uVar7 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar7 >> 0x1f) +
                   (int)((ulonglong)uVar1 * (ulonglong)uVar7 >> 0x20)) * 2;
    uVar1 = puVar27[1];
    uVar7 = puVar9[2];
    uVar23 = *puVar27;
    puVar21 = puVar9 + -8;
    uVar20 = *puVar9;
    local_784[2] = (((int)((ulonglong)uVar23 * (ulonglong)uVar7 >> 0x20) +
                    uVar7 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar7 >> 0x1f)) -
                   ((int)((ulonglong)uVar1 * (ulonglong)uVar20 >> 0x20) +
                   uVar20 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar20 >> 0x1f))) * 2;
    local_784[3] = ((int)((ulonglong)uVar23 * (ulonglong)uVar20 >> 0x20) +
                   uVar20 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar20 >> 0x1f)) * 2 +
                   (uVar7 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar7 >> 0x1f) +
                   (int)((ulonglong)uVar1 * (ulonglong)uVar7 >> 0x20)) * 2;
    local_784 = local_784 + 4;
    puVar6 = puVar6 + iVar16 * 2;
    puVar9 = puVar21;
  } while (param_2 + iVar5 <= puVar21);
  puVar6 = puVar27 + -iVar16;
  do {
    puVar27 = puVar27 + iVar16 * -2;
    uVar1 = puVar21[6];
    uVar7 = puVar6[1];
    uVar20 = *puVar6;
    uVar23 = puVar21[4];
    *local_784 = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                  uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                 ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                 uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
    local_784[1] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                   uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                   (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                   (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
    uVar1 = puVar21[2];
    uVar7 = puVar27[1];
    uVar20 = *puVar27;
    puVar9 = puVar21 + -8;
    uVar23 = *puVar21;
    local_784[2] = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                    uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                   ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                   uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
    local_784[3] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                   uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                   (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                   (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
    puVar6 = puVar6 + iVar16 * -2;
    puVar21 = puVar9;
    local_784 = local_784 + 4;
  } while (param_2 <= puVar9);
  puVar6 = param_3 + iVar4;
  if (-uVar15 != -7) {
    local_5f8 = 0;
    puVar9 = (uint *)(DAT_000c0948 + 0xc13d4);
    puVar21 = (uint *)(DAT_000c0950 + 0xc03e2);
    puVar27 = (uint *)(DAT_000c094c + 0xc13de);
    do {
      iVar11 = DAT_000c0958;
      iVar25 = DAT_000c0954;
      iVar17 = 1 << (local_5f8 & 0xff);
      if (0 < iVar17) {
        local_640 = 0;
        iVar18 = 4 << (local_5f8 + uVar15 & 0xff);
        local_634 = 0;
        iVar2 = iVar4 >> (local_5f8 & 0xff);
        do {
          piVar19 = (int *)((int)puVar6 + local_640 + (iVar2 + -8) * 4);
          piVar10 = (int *)((int)puVar6 + local_640 + ((iVar2 >> 1) + -8) * 4);
          local_784 = puVar21 + iVar18;
          local_780 = puVar21 + iVar18 * 2;
          local_768 = puVar21 + iVar18 * 3;
          local_76c = puVar21 + iVar18 * 4;
          puVar12 = puVar21;
          do {
            uVar23 = piVar19[6] - piVar10[6];
            piVar19[6] = piVar10[6] + piVar19[6];
            iVar8 = piVar19[7];
            iVar3 = piVar10[7];
            piVar19[7] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar7 = *puVar12;
            uVar20 = puVar12[1];
            piVar10[6] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                         uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
            piVar10[7] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
            uVar23 = piVar19[4] - piVar10[4];
            piVar19[4] = piVar10[4] + piVar19[4];
            iVar8 = piVar19[5];
            iVar3 = piVar10[5];
            piVar19[5] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar7 = *local_784;
            uVar20 = local_784[1];
            piVar10[4] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                         uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
            piVar10[5] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
            uVar23 = piVar19[2] - piVar10[2];
            piVar19[2] = piVar10[2] + piVar19[2];
            iVar8 = piVar19[3];
            iVar3 = piVar10[3];
            piVar19[3] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar7 = *local_780;
            uVar20 = local_780[1];
            piVar10[2] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                         uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
            piVar10[3] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
            uVar23 = *piVar19 - *piVar10;
            *piVar19 = *piVar10 + *piVar19;
            iVar8 = piVar19[1];
            iVar3 = piVar10[1];
            piVar19[1] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            piVar19 = piVar19 + -8;
            uVar7 = *local_768;
            uVar20 = local_768[1];
            *piVar10 = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                       uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                       ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                       uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
            piVar10[1] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
            piVar10 = piVar10 + -8;
            puVar12 = puVar12 + iVar18 * 4;
            local_784 = local_784 + iVar18 * 4;
            local_780 = local_780 + iVar18 * 4;
            local_768 = local_768 + iVar18 * 4;
            local_76c = local_76c + iVar18 * 4;
          } while (local_76c + iVar18 * -4 < puVar9);
          local_780 = puVar12 + iVar18 * -3;
          local_75c = puVar12 + iVar18 * -4;
          local_76c = puVar12 + -iVar18;
          local_784 = puVar12 + iVar18 * -2;
          local_768 = local_75c;
          while( true ) {
            iVar8 = piVar10[6];
            iVar3 = piVar19[6];
            piVar19[6] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar23 = piVar19[7] - piVar10[7];
            piVar19[7] = piVar10[7] + piVar19[7];
            uVar20 = *puVar12;
            uVar7 = puVar12[1];
            piVar10[6] = (((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                          uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) -
                         ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[7] = ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20)) * 2;
            iVar8 = piVar10[4];
            iVar3 = piVar19[4];
            iVar24 = piVar19[5];
            piVar19[4] = iVar8 + iVar3;
            iVar22 = piVar10[5];
            uVar1 = iVar3 - iVar8;
            piVar19[5] = iVar22 + iVar24;
            uVar23 = iVar24 - iVar22;
            uVar7 = *local_76c;
            uVar20 = local_76c[1];
            piVar10[4] = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                          uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[5] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
            iVar8 = piVar10[2];
            iVar3 = piVar19[2];
            iVar24 = piVar19[3];
            piVar19[2] = iVar8 + iVar3;
            iVar22 = piVar10[3];
            uVar1 = iVar3 - iVar8;
            piVar19[3] = iVar22 + iVar24;
            uVar23 = iVar24 - iVar22;
            uVar7 = *local_784;
            uVar20 = local_784[1];
            piVar10[2] = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                          uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[3] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
            iVar8 = *piVar10;
            iVar3 = *piVar19;
            iVar24 = piVar19[1];
            *piVar19 = iVar8 + iVar3;
            iVar22 = piVar10[1];
            uVar1 = iVar3 - iVar8;
            piVar19[1] = iVar22 + iVar24;
            uVar23 = iVar24 - iVar22;
            uVar7 = *local_780;
            uVar20 = local_780[1];
            piVar19 = piVar19 + -8;
            *piVar10 = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                        uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                       ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                       uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[1] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
            piVar10 = piVar10 + -8;
            local_76c = local_76c + iVar18 * -4;
            local_784 = local_784 + iVar18 * -4;
            local_780 = local_780 + iVar18 * -4;
            local_75c = local_75c + iVar18 * -4;
            if (local_75c + iVar18 * 4 <= (uint *)(iVar25 + 0xc0932U)) break;
            puVar12 = local_768;
            local_768 = local_768 + iVar18 * -4;
          }
          local_784 = local_768 + iVar18;
          local_76c = local_768 + iVar18 * 4;
          local_780 = local_768 + iVar18 * 2;
          puVar12 = local_768;
          local_75c = local_76c;
          local_768 = local_768 + iVar18 * 3;
          while( true ) {
            iVar3 = piVar10[6];
            iVar8 = piVar19[6];
            piVar19[6] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar23 = piVar10[7] - piVar19[7];
            piVar19[7] = piVar19[7] + piVar10[7];
            uVar20 = *puVar12;
            uVar7 = puVar12[1];
            piVar10[6] = ((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                         uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) * 2 +
                         ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2;
            iVar3 = piVar10[4];
            piVar10[7] = (((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
            iVar8 = piVar19[4];
            piVar19[4] = iVar8 + iVar3;
            iVar22 = piVar19[5];
            uVar1 = iVar3 - iVar8;
            iVar3 = piVar10[5];
            piVar19[5] = iVar22 + iVar3;
            uVar23 = iVar3 - iVar22;
            uVar7 = *local_784;
            uVar20 = local_784[1];
            piVar10[4] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                         uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
            iVar3 = piVar10[2];
            piVar10[5] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
            iVar8 = piVar19[2];
            piVar19[2] = iVar8 + iVar3;
            iVar22 = piVar19[3];
            uVar1 = iVar3 - iVar8;
            iVar3 = piVar10[3];
            piVar19[3] = iVar22 + iVar3;
            uVar23 = iVar3 - iVar22;
            uVar7 = *local_780;
            uVar20 = local_780[1];
            piVar10[2] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                         uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
            piVar10[3] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
            uVar1 = *piVar10 - *piVar19;
            *piVar19 = *piVar19 + *piVar10;
            iVar3 = piVar19[1];
            iVar8 = piVar10[1];
            piVar19[1] = iVar3 + iVar8;
            uVar23 = iVar8 - iVar3;
            piVar19 = piVar19 + -8;
            uVar7 = *local_768;
            uVar20 = local_768[1];
            *piVar10 = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                       uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                       ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                       uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2;
            piVar10[1] = (((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                          uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
            piVar10 = piVar10 + -8;
            local_784 = local_784 + iVar18 * 4;
            local_780 = local_780 + iVar18 * 4;
            local_768 = local_768 + iVar18 * 4;
            local_76c = local_76c + iVar18 * 4;
            if (puVar27 <= local_76c + iVar18 * -4) break;
            puVar12 = local_75c;
            local_75c = local_75c + iVar18 * 4;
          }
          local_76c = local_75c + -iVar18;
          local_768 = local_75c + iVar18 * -4;
          local_784 = local_75c + iVar18 * -2;
          local_780 = local_75c + iVar18 * -3;
          puVar12 = local_75c;
          local_75c = local_768;
          while( true ) {
            uVar23 = piVar19[6] - piVar10[6];
            piVar19[6] = piVar10[6] + piVar19[6];
            uVar1 = piVar10[7] - piVar19[7];
            piVar19[7] = piVar19[7] + piVar10[7];
            uVar20 = *puVar12;
            uVar7 = puVar12[1];
            piVar10[6] = (((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                          uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) -
                         ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[7] = ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20)) * 2;
            uVar23 = piVar19[4] - piVar10[4];
            piVar19[4] = piVar10[4] + piVar19[4];
            iVar8 = piVar19[5];
            iVar3 = piVar10[5];
            piVar19[5] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar7 = *local_76c;
            uVar20 = local_76c[1];
            piVar10[4] = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                          uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[5] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
            uVar23 = piVar19[2] - piVar10[2];
            piVar19[2] = piVar10[2] + piVar19[2];
            iVar8 = piVar19[3];
            iVar3 = piVar10[3];
            piVar19[3] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar7 = *local_784;
            uVar20 = local_784[1];
            piVar10[2] = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                          uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                         ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[3] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
            uVar23 = *piVar19 - *piVar10;
            *piVar19 = *piVar10 + *piVar19;
            iVar8 = piVar19[1];
            iVar3 = piVar10[1];
            piVar19[1] = iVar8 + iVar3;
            uVar1 = iVar3 - iVar8;
            uVar7 = *local_780;
            uVar20 = local_780[1];
            piVar19 = piVar19 + -8;
            *piVar10 = (((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                        uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) -
                       ((int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
                       uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f))) * 2;
            piVar10[1] = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
                         uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) * 2 +
                         (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                         (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20)) * 2;
            piVar10 = piVar10 + -8;
            local_76c = local_76c + iVar18 * -4;
            local_784 = local_784 + iVar18 * -4;
            local_780 = local_780 + iVar18 * -4;
            local_75c = local_75c + iVar18 * -4;
            if (local_75c + iVar18 * 4 <= (uint *)(iVar11 + 0xc0f00U)) break;
            puVar12 = local_768;
            local_768 = local_768 + iVar18 * -4;
          }
          local_634 = local_634 + 1;
          local_640 = local_640 + iVar2 * 4;
        } while (local_634 != iVar17);
      }
      local_5f8 = local_5f8 + 1;
    } while (local_5f8 != -uVar15 + 7);
  }
  if (0 < iVar4) {
    iVar25 = 0;
    puVar9 = puVar6;
    do {
      uVar1 = puVar9[0x1e];
      iVar25 = iVar25 + 0x20;
      puVar9[0x1e] = puVar9[0xe] + uVar1;
      uVar23 = puVar9[0xf];
      uVar7 = puVar9[0x1d];
      uVar20 = puVar9[0x1c];
      puVar9[0xf] = puVar9[0x1f] - uVar23;
      puVar9[0xe] = uVar1 - puVar9[0xe];
      puVar9[0x1c] = puVar9[0xc] + uVar20;
      puVar9[0x1f] = uVar23 + puVar9[0x1f];
      puVar9[0x1d] = puVar9[0xd] + uVar7;
      uVar20 = uVar20 - puVar9[0xc];
      uVar7 = uVar7 - puVar9[0xd];
      puVar9[0xc] = ((((int)uVar20 >> 0x1f) * 0x7641af3d +
                     (int)((ulonglong)uVar20 * 0x7641af3d >> 0x20)) -
                    (((int)uVar7 >> 0x1f) * 0x30fbc54d +
                    (int)((ulonglong)uVar7 * 0x30fbc54d >> 0x20))) * 2;
      puVar9[0xd] = (((int)uVar20 >> 0x1f) * 0x30fbc54d +
                    (int)((ulonglong)uVar20 * 0x30fbc54d >> 0x20)) * 2 +
                    (((int)uVar7 >> 0x1f) * 0x7641af3d +
                    (int)((ulonglong)uVar7 * 0x7641af3d >> 0x20)) * 2;
      iVar17 = puVar9[0x1a] - puVar9[10];
      puVar9[0x1a] = puVar9[10] + puVar9[0x1a];
      iVar11 = puVar9[0x1b] - puVar9[0xb];
      puVar9[0x1b] = puVar9[0xb] + puVar9[0x1b];
      local_344 = (int)((ulonglong)((longlong)(iVar17 - iVar11) * 0x5a82799a) >> 0x20);
      puVar9[10] = local_344 << 1;
      local_33c = (int)((ulonglong)((longlong)(iVar11 + iVar17) * 0x5a82799a) >> 0x20);
      uVar20 = puVar9[0x18];
      uVar1 = puVar9[0x19];
      puVar9[0xb] = local_33c << 1;
      puVar9[0x18] = puVar9[8] + uVar20;
      puVar9[0x19] = puVar9[9] + uVar1;
      uVar20 = uVar20 - puVar9[8];
      uVar1 = uVar1 - puVar9[9];
      puVar9[8] = ((((int)uVar20 >> 0x1f) * 0x30fbc54d +
                   (int)((ulonglong)uVar20 * 0x30fbc54d >> 0x20)) -
                  (((int)uVar1 >> 0x1f) * 0x7641af3d + (int)((ulonglong)uVar1 * 0x7641af3d >> 0x20))
                  ) * 2;
      uVar23 = puVar9[0x16];
      uVar7 = puVar9[7];
      puVar9[9] = (((int)uVar20 >> 0x1f) * 0x7641af3d +
                  (int)((ulonglong)uVar20 * 0x7641af3d >> 0x20)) * 2 +
                  (((int)uVar1 >> 0x1f) * 0x30fbc54d + (int)((ulonglong)uVar1 * 0x30fbc54d >> 0x20))
                  * 2;
      puVar9[0x16] = puVar9[6] + uVar23;
      puVar9[7] = uVar23 - puVar9[6];
      uVar20 = puVar9[0x14];
      puVar9[6] = uVar7 - puVar9[0x17];
      puVar9[0x14] = uVar20 + puVar9[4];
      uVar1 = puVar9[0x15];
      puVar9[0x17] = puVar9[0x17] + uVar7;
      puVar9[0x15] = uVar1 + puVar9[5];
      uVar20 = puVar9[4] - uVar20;
      uVar1 = puVar9[5] - uVar1;
      puVar9[4] = (((int)uVar1 >> 0x1f) * 0x7641af3d + (int)((ulonglong)uVar1 * 0x7641af3d >> 0x20))
                  * 2 + (((int)uVar20 >> 0x1f) * 0x30fbc54d +
                        (int)((ulonglong)uVar20 * 0x30fbc54d >> 0x20)) * 2;
      puVar9[5] = ((((int)uVar1 >> 0x1f) * 0x30fbc54d + (int)((ulonglong)uVar1 * 0x30fbc54d >> 0x20)
                   ) - (((int)uVar20 >> 0x1f) * 0x7641af3d +
                       (int)((ulonglong)uVar20 * 0x7641af3d >> 0x20))) * 2;
      iVar17 = puVar9[2] - puVar9[0x12];
      puVar9[0x12] = puVar9[0x12] + puVar9[2];
      iVar11 = puVar9[3] - puVar9[0x13];
      puVar9[0x13] = puVar9[0x13] + puVar9[3];
      local_334 = (int)((ulonglong)((longlong)(iVar11 + iVar17) * 0x5a82799a) >> 0x20);
      puVar9[2] = local_334 << 1;
      local_32c = (int)((ulonglong)((longlong)(iVar11 - iVar17) * 0x5a82799a) >> 0x20);
      puVar9[3] = local_32c << 1;
      uVar7 = puVar9[0x10];
      puVar9[0x10] = uVar7 + *puVar9;
      uVar1 = puVar9[0x11];
      puVar9[0x11] = uVar1 + puVar9[1];
      uVar7 = *puVar9 - uVar7;
      uVar1 = puVar9[1] - uVar1;
      *puVar9 = (((int)uVar1 >> 0x1f) * 0x30fbc54d + (int)((ulonglong)uVar1 * 0x30fbc54d >> 0x20)) *
                2 + (((int)uVar7 >> 0x1f) * 0x7641af3d +
                    (int)((ulonglong)uVar7 * 0x7641af3d >> 0x20)) * 2;
      puVar9[1] = ((((int)uVar1 >> 0x1f) * 0x7641af3d + (int)((ulonglong)uVar1 * 0x7641af3d >> 0x20)
                   ) - (((int)uVar7 >> 0x1f) * 0x30fbc54d +
                       (int)((ulonglong)uVar7 * 0x30fbc54d >> 0x20))) * 2;
      FUN_000bfce4(puVar9);
      FUN_000bfce4(puVar9 + 0x10);
      puVar9 = puVar9 + 0x20;
    } while (iVar25 < iVar4);
  }
  if (iVar16 < 4) {
    local_75c = (uint *)(DAT_000c1f2c + 0xc150a);
  }
  else {
    local_75c = (uint *)(DAT_000c2650 + 0xc22ac + (iVar16 >> 1) * 4);
  }
  puVar21 = local_75c + 0x400;
  iVar4 = DAT_000c1f30 + 0xc160e;
  local_784 = local_75c + iVar16 * 2;
  puVar9 = local_75c + iVar16;
  local_760 = (uint *)0x0;
  local_76c = local_784;
  local_728 = puVar6;
  puVar27 = param_3;
  while( true ) {
    uVar7 = (uint)local_760 & 0xf;
    uVar26 = (int)local_760 + 1;
    iVar25 = (int)local_760 >> 8;
    uVar1 = (int)local_760 << 0x18;
    local_760 = (uint *)((int)local_760 + 2);
    uVar1 = (uint)CONCAT11(*(undefined *)(iVar4 + uVar7 + 0xf10),
                           *(undefined *)(iVar4 + iVar25 + 0xf10)) |
            (uint)*(byte *)(iVar4 + (uVar1 >> 0x1c) + 0xf10) << 4;
    iVar11 = (int)uVar1 >> (uVar15 & 0xff);
    iVar25 = (int)(uVar1 ^ 0xfff) >> (uVar15 & 0xff);
    uVar1 = puVar6[iVar25 + -1] + puVar6[iVar11];
    iVar17 = (int)(puVar6[iVar25 + -1] - puVar6[iVar11]) >> 1;
    uVar7 = puVar6[iVar11 + 1] - puVar6[iVar25];
    iVar2 = (int)(puVar6[iVar25] + puVar6[iVar11 + 1]) >> 1;
    uVar20 = *local_75c;
    uVar23 = local_75c[1];
    iVar25 = (int)((ulonglong)uVar7 * (ulonglong)uVar20 >> 0x20) +
             uVar20 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar20 >> 0x1f) +
             (int)((ulonglong)uVar1 * (ulonglong)uVar23 >> 0x20) +
             uVar23 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar23 >> 0x1f);
    *puVar27 = iVar2 + iVar25;
    iVar11 = ((int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
             uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f)) -
             (uVar20 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar20 >> 0x1f) +
             (int)((ulonglong)uVar1 * (ulonglong)uVar20 >> 0x20));
    puVar27[1] = iVar17 + iVar11;
    puVar12 = local_728 + -4;
    local_728[-1] = iVar11 - iVar17;
    local_728[-2] = iVar2 - iVar25;
    local_75c = local_784;
    uVar1 = (uint)CONCAT11(*(undefined *)(iVar4 + (uVar26 & 0xf) + 0xf10),
                           *(undefined *)(iVar4 + ((int)uVar26 >> 8) + 0xf10)) |
            (uint)*(byte *)(iVar4 + (uVar26 * 0x1000000 >> 0x1c) + 0xf10) << 4;
    iVar11 = (int)uVar1 >> (uVar15 & 0xff);
    iVar25 = (int)(uVar1 ^ 0xfff) >> (uVar15 & 0xff);
    uVar1 = puVar6[iVar25 + -1] + puVar6[iVar11];
    uVar23 = puVar6[iVar11 + 1] - puVar6[iVar25];
    uVar7 = *puVar9;
    uVar20 = puVar9[1];
    iVar17 = (int)(puVar6[iVar25] + puVar6[iVar11 + 1]) >> 1;
    iVar2 = (int)((ulonglong)uVar23 * (ulonglong)uVar7 >> 0x20) +
            uVar7 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar7 >> 0x1f) +
            (int)((ulonglong)uVar1 * (ulonglong)uVar20 >> 0x20) +
            uVar20 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar20 >> 0x1f);
    iVar11 = (int)(puVar6[iVar25 + -1] - puVar6[iVar11]) >> 1;
    puVar27[2] = iVar17 + iVar2;
    iVar25 = ((int)((ulonglong)uVar23 * (ulonglong)uVar20 >> 0x20) +
             uVar20 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar20 >> 0x1f)) -
             (uVar7 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar7 >> 0x1f) +
             (int)((ulonglong)uVar1 * (ulonglong)uVar7 >> 0x20));
    puVar27[3] = iVar11 + iVar25;
    puVar27 = puVar27 + 4;
    *puVar12 = iVar17 - iVar2;
    local_728[-3] = iVar25 - iVar11;
    iVar25 = DAT_000c1f34;
    local_76c = local_76c + iVar16 * 2;
    puVar9 = puVar9 + iVar16 * 2;
    if (puVar21 <= local_76c + iVar16 * -2) break;
    local_784 = local_784 + iVar16 * 2;
    local_728 = puVar12;
  }
  puVar9 = local_784 + -iVar16;
  iVar4 = DAT_000c1f34 + 0xc18ee;
  do {
    local_784 = local_784 + iVar16 * -2;
    puVar21 = puVar12 + -4;
    uVar26 = (int)local_760 + 1;
    uVar1 = (uint)CONCAT11(*(undefined *)(iVar4 + ((uint)local_760 & 0xf) + 0xf10),
                           *(undefined *)(iVar4 + ((int)local_760 >> 8) + 0xf10)) |
            (uint)*(byte *)(iVar4 + ((uint)((int)local_760 << 0x18) >> 0x1c) + 0xf10) << 4;
    iVar17 = (int)uVar1 >> (uVar15 & 0xff);
    iVar2 = (int)(uVar1 ^ 0xfff) >> (uVar15 & 0xff);
    uVar1 = puVar6[iVar2 + -1] + puVar6[iVar17];
    iVar11 = (int)(puVar6[iVar2 + -1] - puVar6[iVar17]) >> 1;
    uVar7 = puVar6[iVar17 + 1] - puVar6[iVar2];
    iVar18 = (int)(puVar6[iVar2] + puVar6[iVar17 + 1]) >> 1;
    uVar20 = *puVar9;
    uVar23 = puVar9[1];
    iVar2 = (int)((ulonglong)uVar7 * (ulonglong)uVar23 >> 0x20) +
            uVar23 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar23 >> 0x1f) +
            (int)((ulonglong)uVar1 * (ulonglong)uVar20 >> 0x20) +
            uVar20 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar20 >> 0x1f);
    *puVar27 = iVar18 + iVar2;
    iVar17 = ((int)((ulonglong)uVar7 * (ulonglong)uVar20 >> 0x20) +
             uVar20 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar20 >> 0x1f)) -
             ((int)((ulonglong)uVar1 * (ulonglong)uVar23 >> 0x20) +
             uVar23 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar23 >> 0x1f));
    puVar27[1] = iVar11 + iVar17;
    puVar12[-1] = iVar17 - iVar11;
    puVar12[-2] = iVar18 - iVar2;
    local_760 = (uint *)((int)local_760 + 2);
    uVar1 = (uint)CONCAT11(*(undefined *)(iVar4 + (uVar26 & 0xf) + 0xf10),
                           *(undefined *)(iVar4 + ((int)uVar26 >> 8) + 0xf10)) |
            (uint)*(byte *)(iVar4 + (uVar26 * 0x1000000 >> 0x1c) + 0xf10) << 4;
    iVar11 = (int)uVar1 >> (uVar15 & 0xff);
    iVar17 = (int)(uVar1 ^ 0xfff) >> (uVar15 & 0xff);
    uVar1 = puVar6[iVar17 + -1] + puVar6[iVar11];
    uVar20 = puVar6[iVar11 + 1] - puVar6[iVar17];
    uVar7 = *local_784;
    uVar23 = local_784[1];
    iVar2 = (int)(puVar6[iVar17] + puVar6[iVar11 + 1]) >> 1;
    iVar11 = (int)(puVar6[iVar17 + -1] - puVar6[iVar11]) >> 1;
    iVar18 = (int)((ulonglong)uVar20 * (ulonglong)uVar23 >> 0x20) +
             uVar23 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar23 >> 0x1f) +
             (int)((ulonglong)uVar1 * (ulonglong)uVar7 >> 0x20) +
             uVar7 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar7 >> 0x1f);
    puVar27[2] = iVar2 + iVar18;
    iVar17 = ((int)((ulonglong)uVar20 * (ulonglong)uVar7 >> 0x20) +
             uVar7 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar7 >> 0x1f)) -
             (uVar23 * ((int)uVar1 >> 0x1f) + uVar1 * ((int)uVar23 >> 0x1f) +
             (int)((ulonglong)uVar1 * (ulonglong)uVar23 >> 0x20));
    puVar27[3] = iVar11 + iVar17;
    puVar27 = puVar27 + 4;
    *puVar21 = iVar2 - iVar18;
    puVar12[-3] = iVar17 - iVar11;
    puVar9 = puVar9 + iVar16 * -2;
    puVar12 = puVar21;
  } while (puVar27 < puVar21);
  iVar4 = iVar16 >> 2;
  local_760 = puVar13;
  if (iVar4 == 0) {
    iVar4 = DAT_000c1f38 + 0xc1b90;
    local_718 = 0x7fffffff;
    iVar16 = 0;
    piVar10 = (int *)(iVar25 + 0xc17fe);
    puVar27 = param_3;
    puVar9 = puVar13;
    do {
      iVar17 = *piVar10;
      iVar25 = iVar17 - iVar16 >> 2;
      uVar23 = iVar16 + iVar25;
      iVar2 = piVar10[1];
      iVar16 = iVar2 - local_718 >> 2;
      uVar7 = iVar16 + local_718;
      uVar1 = *puVar27;
      uVar15 = -puVar27[1];
      puVar21 = puVar9 + -4;
      puVar9[-1] = (uVar1 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar1 >> 0x1f) +
                   (int)((ulonglong)uVar23 * (ulonglong)uVar1 >> 0x20)) * 2 +
                   (uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f) +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20)) * 2;
      uVar20 = iVar2 - iVar16;
      *local_760 = ((uVar15 * ((int)uVar23 >> 0x1f) + uVar23 * ((int)uVar15 >> 0x1f) +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar15 >> 0x20)) -
                   (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
      uVar7 = iVar17 - iVar25;
      uVar1 = puVar27[2];
      uVar15 = -puVar27[3];
      puVar9[-2] = (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20)) * 2 +
                   (uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f) +
                   (int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20)) * 2;
      local_760[1] = ((uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f) +
                      (int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20)) -
                     (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                     (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
      iVar16 = *(int *)(iVar4 + -8);
      iVar11 = iVar16 - iVar17 >> 2;
      local_718 = *(int *)(iVar4 + -4);
      uVar20 = iVar11 + iVar17;
      iVar25 = local_718 - iVar2 >> 2;
      uVar1 = puVar27[4];
      uVar7 = iVar25 + iVar2;
      uVar15 = -puVar27[5];
      puVar9[-3] = ((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                   uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) * 2 +
                   ((int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20) +
                   uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f)) * 2;
      local_760[2] = (((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                      uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) -
                     (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
      uVar7 = local_718 - iVar25;
      uVar1 = puVar27[6];
      uVar20 = iVar16 - iVar11;
      puVar9 = puVar27 + 7;
      puVar27 = puVar27 + 8;
      uVar15 = -*puVar9;
      *puVar21 = ((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                 uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) * 2 +
                 ((int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20) +
                 uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f)) * 2;
      local_760[3] = (((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                      uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) -
                     (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
      local_760 = local_760 + 4;
      iVar4 = iVar4 + 8;
      piVar10 = piVar10 + 2;
      puVar9 = puVar21;
    } while (puVar27 < puVar21);
  }
  else if (iVar4 == 1) {
    iVar4 = 0x3fffffff;
    piVar10 = (int *)(iVar25 + 0xc17fe);
    iVar25 = DAT_000c2654 + 0xc22d8;
    iVar16 = 0;
    puVar27 = param_3;
    puVar9 = puVar13;
    do {
      iVar11 = *piVar10;
      uVar20 = iVar16 + (iVar11 >> 1);
      iVar16 = piVar10[1];
      uVar7 = iVar4 + (iVar16 >> 1);
      uVar1 = *puVar27;
      uVar15 = -puVar27[1];
      puVar21 = puVar9 + -4;
      puVar9[-1] = ((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                   uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) * 2 +
                   (uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f) +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20)) * 2;
      *local_760 = (((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                    uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) -
                   (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
      iVar4 = *(int *)(iVar25 + -0x10) >> 1;
      uVar20 = iVar4 + (iVar11 >> 1);
      iVar11 = *(int *)(iVar25 + -0xc) >> 1;
      uVar7 = iVar11 + (iVar16 >> 1);
      uVar1 = puVar27[2];
      uVar15 = -puVar27[3];
      puVar9[-2] = ((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                   uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) * 2 +
                   (uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f) +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20)) * 2;
      local_760[1] = (((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                      uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) -
                     (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
      iVar17 = piVar10[2];
      uVar20 = iVar4 + (iVar17 >> 1);
      iVar2 = piVar10[3];
      piVar10 = piVar10 + 4;
      uVar7 = (iVar2 >> 1) + iVar11;
      uVar1 = puVar27[4];
      uVar15 = -puVar27[5];
      puVar9[-3] = ((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                   uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) * 2 +
                   (uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f) +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20)) * 2;
      local_760[2] = (((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                      uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) -
                     (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
      iVar16 = *(int *)(iVar25 + -8) >> 1;
      uVar20 = iVar16 + (iVar17 >> 1);
      iVar4 = *(int *)(iVar25 + -4) >> 1;
      uVar7 = iVar4 + (iVar2 >> 1);
      uVar1 = puVar27[6];
      uVar15 = -puVar27[7];
      *puVar21 = ((int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20) +
                 uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f)) * 2 +
                 (uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f) +
                 (int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20)) * 2;
      local_760[3] = (((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                      uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) -
                     (uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f) +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20))) * 2;
      puVar27 = puVar27 + 8;
      local_760 = local_760 + 4;
      iVar25 = iVar25 + 0x10;
      puVar9 = puVar21;
    } while (puVar27 < puVar21);
  }
  else {
    if (iVar4 < 4) {
      local_784 = (uint *)(iVar25 + 0xc17fe);
    }
    else {
      local_784 = (uint *)(DAT_000c264c + 0xc1f54 + (iVar16 >> 3) * 4);
    }
    puVar27 = local_784 + iVar4 * 2;
    local_760 = local_784 + iVar4 * 3;
    puVar28 = local_784 + iVar4;
    puVar21 = puVar13;
    puVar12 = param_3;
    puVar9 = puVar13;
    do {
      puVar14 = puVar21 + -4;
      uVar7 = *local_784;
      uVar20 = local_784[1];
      uVar1 = *puVar12;
      uVar15 = -puVar12[1];
      puVar21[-1] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                    uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                    ((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                    uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) * 2;
      *puVar9 = (((int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20) +
                 uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f)) -
                (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
      uVar20 = puVar28[1];
      uVar7 = *puVar28;
      uVar1 = puVar12[2];
      uVar15 = -puVar12[3];
      puVar21[-2] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                    uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                    ((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                    uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) * 2;
      puVar9[1] = (((int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20) +
                   uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f)) -
                  (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                  (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
      uVar7 = *puVar27;
      uVar20 = puVar27[1];
      uVar1 = puVar12[4];
      uVar15 = -puVar12[5];
      puVar21[-3] = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                    uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                    ((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                    uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) * 2;
      puVar9[2] = (((int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20) +
                   uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f)) -
                  (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                  (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
      uVar7 = *local_760;
      uVar20 = local_760[1];
      uVar1 = puVar12[6];
      puVar21 = puVar12 + 7;
      puVar12 = puVar12 + 8;
      uVar15 = -*puVar21;
      *puVar14 = ((int)((ulonglong)uVar7 * (ulonglong)uVar1 >> 0x20) +
                 uVar1 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar1 >> 0x1f)) * 2 +
                 ((int)((ulonglong)uVar20 * (ulonglong)uVar15 >> 0x20) +
                 uVar15 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar15 >> 0x1f)) * 2;
      puVar9[3] = (((int)((ulonglong)uVar7 * (ulonglong)uVar15 >> 0x20) +
                   uVar15 * ((int)uVar7 >> 0x1f) + uVar7 * ((int)uVar15 >> 0x1f)) -
                  (uVar1 * ((int)uVar20 >> 0x1f) + uVar20 * ((int)uVar1 >> 0x1f) +
                  (int)((ulonglong)uVar20 * (ulonglong)uVar1 >> 0x20))) * 2;
      puVar28 = puVar28 + iVar4 * 4;
      local_784 = local_784 + iVar4 * 4;
      puVar27 = puVar27 + iVar4 * 4;
      local_760 = local_760 + iVar4 * 4;
      puVar21 = puVar14;
      puVar9 = puVar9 + 4;
    } while (puVar12 < puVar14);
  }
  param_3 = param_3 + iVar5;
  puVar9 = puVar13;
  puVar27 = param_3;
  do {
    puVar12 = puVar9 + -4;
    uVar15 = puVar9[-1];
    param_3[-1] = uVar15;
    *puVar27 = -uVar15;
    uVar15 = puVar9[-2];
    param_3[-2] = uVar15;
    puVar27[1] = -uVar15;
    uVar15 = puVar9[-3];
    param_3[-3] = uVar15;
    puVar27[2] = -uVar15;
    uVar15 = *puVar12;
    param_3 = param_3 + -4;
    *param_3 = uVar15;
    puVar27[3] = -uVar15;
    puVar27 = puVar27 + 4;
    puVar9 = puVar12;
    puVar21 = puVar13;
  } while (puVar27 < puVar12);
  do {
    puVar21[-4] = puVar13[3];
    puVar21[-3] = puVar13[2];
    puVar21[-2] = puVar13[1];
    puVar21[-1] = *puVar13;
    puVar21 = puVar21 + -4;
    puVar13 = puVar13 + 4;
  } while (puVar6 < puVar21);
  return;
}



