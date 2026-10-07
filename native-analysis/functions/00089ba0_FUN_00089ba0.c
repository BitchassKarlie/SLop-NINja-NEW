/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00089ba0 FUN_00089ba0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00089ba0(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  int **ppiVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  float extraout_s14;
  float fVar25;
  float extraout_s15;
  float fVar26;
  float fVar27;
  int iVar28;
  int local_c4;
  uint local_c0;
  int *local_b4;
  int *local_a0 [20];
  undefined auStack_50 [4];
  int *local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  
  uVar2 = FUN_00017e38();
  iVar6 = DAT_00089e0c;
  iVar16 = DAT_00089e08 + 0x89bb8;
  iVar17 = *(int *)(iVar16 + DAT_00089e0c);
  FUN_0006ff68(*(undefined4 *)(iVar17 + 0x50));
  uVar3 = FUN_0002f60c(0);
  FUN_000191c8(uVar2,uVar3);
  iVar19 = param_2 + 0x94;
  FUN_00019328(uVar2,*(undefined4 *)(iVar17 + 0x178));
  iVar18 = param_2 * 4;
  iVar17 = iVar18 + *(int *)(iVar17 + 4);
  ppiVar4 = *(int ***)(param_1 + iVar17 * 0x10 + 0xb4);
  iVar12 = *(int *)(param_1 + iVar19 * 4);
  ppiVar9 = *(int ***)(param_1 + iVar17 * 0x10 + 0xb0);
  iVar17 = iVar12 + 1;
  *(int *)(param_1 + iVar19 * 4) = iVar17;
  bVar24 = SBORROW4(iVar17,1);
  bVar22 = iVar12 < 0;
  bVar23 = iVar17 == 1;
  fVar26 = extraout_s15;
  if (1 < iVar17) {
    fVar26 = DAT_00089dfc;
  }
  if (!bVar23 && bVar22 == bVar24) {
    iVar17 = param_2 + 0x92;
  }
  if (!bVar23 && bVar22 == bVar24) {
    local_c4 = iVar17;
  }
  iVar12 = extraout_r1;
  if (bVar23 || bVar22 != bVar24) {
    iVar12 = param_2 + 0x92;
  }
  if (!bVar23 && bVar22 == bVar24) {
    iVar17 = param_1 + iVar17 * 4;
  }
  if (!bVar23 && bVar22 == bVar24) {
    iVar17 = *(int *)(iVar17 + 4);
  }
  fVar25 = extraout_s14;
  if (!bVar23 && bVar22 == bVar24) {
    fVar25 = *(float *)(iVar17 + 0x34);
  }
  if (!bVar23 && bVar22 == bVar24) {
    fVar26 = fVar25 + fVar26;
  }
  if (bVar23 || bVar22 != bVar24) {
    local_c4 = iVar12;
  }
  if (!bVar23 && bVar22 == bVar24) {
    *(float *)(iVar17 + 0x34) = fVar26;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar17 = *(int *)(*(int *)(param_1 + (iVar18 + *(int *)(*(int *)(iVar16 + iVar6) + 4)) * 0x10 +
                              0xb0) + *(int *)(*(int *)(param_1 + 0x20) + 0x1c) * 4);
    *(int *)(param_1 + local_c4 * 4 + 4) = iVar17;
    goto LAB_00089c50;
  }
  piVar10 = **(int ***)(param_1 + (iVar18 + *(int *)(*(int *)(iVar16 + iVar6) + 4)) * 0x10 + 0xb0);
  iVar17 = param_1 + local_c4 * 4;
  *(int **)(iVar17 + 4) = piVar10;
  fVar26 = DAT_00089dfc;
  if (ppiVar9 != ppiVar4) {
    iVar12 = 0;
    iVar20 = 0;
    do {
      while( true ) {
        piVar10 = *ppiVar9;
        fVar25 = (float)piVar10[0x12];
        if (fVar25 != 0.0 && fVar25 < 0.0 == NAN(fVar25)) {
          iVar5 = piVar10[0xf];
          if (piVar10[0x10] < iVar5) {
            fVar27 = fVar25 * (float)(longlong)iVar5;
            if ((int)((uint)(fVar25 * (float)(longlong)iVar5 < fVar26) << 0x1f) < 0) {
              fVar27 = fVar26;
            }
            iVar28 = (int)((float)(longlong)piVar10[0x10] + fVar27);
            if (iVar5 <= iVar28) {
              piVar10[0x10] = iVar5;
            }
            if (iVar28 < iVar5) {
              piVar10[0x10] = iVar28;
            }
          }
          else {
            piVar10[0x10] = iVar5;
          }
        }
        iVar5 = *(int *)(param_1 + iVar19 * 4);
        if ((iVar5 < *piVar10) || ((piVar10[1] < iVar5 && (piVar10[1] != -2)))) break;
        if (iVar20 == 0) {
          *(int **)(iVar17 + 4) = piVar10;
        }
        ppiVar9 = ppiVar9 + 1;
        iVar5 = iVar20 + 1;
        local_a0[iVar20] = piVar10;
        iVar12 = iVar12 + piVar10[0x10];
        iVar20 = iVar5;
        if (ppiVar4 == ppiVar9) goto LAB_00089e9a;
      }
      ppiVar9 = ppiVar9 + 1;
    } while (ppiVar4 != ppiVar9);
LAB_00089e9a:
    if (iVar20 == 0) {
      piVar10 = *(int **)(param_1 + local_c4 * 4 + 4);
    }
    else {
      if (0 < local_a0[0][0x19]) {
        iVar17 = param_1 + (param_2 + 0xb8) * 4;
        if (*(int *)(iVar17 + 4) < *local_a0[0]) {
          *(int *)(iVar17 + 4) = *local_a0[0];
          iVar17 = local_a0[0][0x19];
          if (0x1f < iVar17) {
            iVar17 = 0x20;
          }
          *(int *)(param_1 + (param_2 + 0xba) * 4) = iVar17;
          iVar5 = DAT_0008a158;
          if (0 < iVar17) {
            iVar28 = 0;
            iVar17 = param_1 + param_2 * 0x80;
            do {
              iVar7 = FUN_00022674(*(undefined4 *)(local_a0[0][0x16] + iVar28 * 0x10 + 4),0);
              if (((iVar7 < 0) &&
                  (iVar7 = FUN_00023380(0), iVar28 < **(int **)(iVar16 + iVar5) + -2)) &&
                 (0 < iVar28)) {
                do {
                  if (iVar7 != *(int *)(iVar17 + 0x264)) {
                    iVar15 = 0;
                    do {
                      iVar15 = iVar15 + 1;
                      if (iVar15 == iVar28) goto LAB_0008a0c4;
                    } while (iVar7 != *(int *)(iVar17 + iVar15 * 4 + 0x264));
                  }
                  iVar7 = FUN_00023380(0);
                } while( true );
              }
LAB_0008a0c4:
              iVar15 = iVar28 * 4;
              iVar28 = iVar28 + 1;
              *(int *)(iVar17 + iVar15 + 0x264) = iVar7;
            } while (iVar28 < *(int *)(param_1 + (param_2 + 0xba) * 4));
          }
        }
      }
      if (iVar20 == 1) {
LAB_00089f64:
        piVar10 = *(int **)(param_1 + local_c4 * 4 + 4);
      }
      else {
        puVar13 = *(uint **)(DAT_0008a150 + 0x89edc);
        lVar1 = (ulonglong)*puVar13 * (ulonglong)puVar13[2];
        local_c0 = (uint)lVar1;
        uVar8 = puVar13[5] +
                (int)((ulonglong)lVar1 >> 0x20) + puVar13[2] * puVar13[1] + *puVar13 * puVar13[3] +
                (uint)CARRY4(puVar13[4],local_c0);
        *puVar13 = puVar13[4] + local_c0;
        puVar13[1] = uVar8;
        if (iVar12 * 10 - 1U < 0xfffffffe) {
          uVar8 = (uint)((ulonglong)(uint)(iVar12 * 10) * (ulonglong)uVar8 >> 0x20);
        }
        iVar12 = 0;
        iVar17 = 0;
        while (iVar12 = iVar12 + local_a0[0][0x10] * 10, iVar12 <= (int)uVar8) {
          if (iVar17 + 4 == iVar20 * 4) goto LAB_00089f64;
          local_a0[0] = *(int **)((int)local_a0 + iVar17 + 4);
          iVar17 = iVar17 + 4;
        }
        *(int **)(param_1 + local_c4 * 4 + 4) = local_a0[0];
        piVar10 = local_a0[0];
      }
    }
  }
  iVar17 = piVar10[0x13];
  if (0 < iVar17) {
    iVar20 = *(int *)(*(int *)(iVar16 + iVar6) + 0x50);
    iVar12 = *(int *)(*(int *)(iVar16 + iVar6) + 4) * 0x10;
    piVar14 = *(int **)(iVar20 + iVar12 + 0x170);
    if (piVar14 == (int *)0x0) {
      iVar5 = piVar10[0x1b];
LAB_00089fba:
      local_40 = iVar20 + iVar12 + 0x16c;
      local_44 = 0;
      local_48 = iVar5;
      local_3c = piVar14;
      FUN_00071c04(auStack_50,local_40,local_40,piVar14,&local_48);
      piVar10 = *(int **)(param_1 + local_c4 * 4 + 4);
      iVar17 = piVar10[0x13];
      local_b4 = local_4c;
    }
    else {
      iVar5 = piVar10[0x1b];
      local_b4 = (int *)0x0;
      do {
        if (*piVar14 < iVar5) {
          piVar11 = (int *)piVar14[4];
        }
        else {
          piVar11 = (int *)piVar14[3];
          local_b4 = piVar14;
        }
        piVar14 = piVar11;
      } while (piVar11 != (int *)0x0);
      piVar14 = local_b4;
      if ((local_b4 == (int *)0x0) || (iVar5 < *local_b4)) goto LAB_00089fba;
    }
    local_b4 = local_b4 + 1;
    if (piVar10[0x14] != iVar17) {
      uVar8 = piVar10[0x14] - iVar17;
      puVar13 = *(uint **)(DAT_0008a154 + 0x8a000);
      lVar1 = (ulonglong)*puVar13 * (ulonglong)puVar13[2];
      local_c0 = (uint)lVar1;
      uVar21 = puVar13[5] +
               puVar13[2] * puVar13[1] + *puVar13 * puVar13[3] + (int)((ulonglong)lVar1 >> 0x20) +
               (uint)CARRY4(puVar13[4],local_c0);
      *puVar13 = puVar13[4] + local_c0;
      puVar13[1] = uVar21;
      if (uVar8 - 1 < 0xfffffffe) {
        uVar21 = (uint)((ulonglong)uVar8 * (ulonglong)uVar21 >> 0x20);
      }
      iVar17 = uVar21 + *(int *)(*(int *)(param_1 + local_c4 * 4 + 4) + 0x4c);
    }
    uVar2 = DAT_0008a14c;
    *local_b4 = iVar17;
    iVar17 = param_1 + local_c4 * 4;
    *(undefined4 *)(*(int *)(iVar17 + 4) + 0x48) = uVar2;
    piVar10 = *(int **)(iVar17 + 4);
  }
  piVar10[0x10] = 0;
  iVar17 = *(int *)(param_1 + local_c4 * 4 + 4);
LAB_00089c50:
  if (0.0 < *(float *)(iVar17 + 0x20)) {
    fVar26 = *(float *)(iVar17 + 0x20) + *(float *)(iVar17 + 0x24) * *(float *)(iVar17 + 0x34);
    if ((int)((uint)(fVar26 < DAT_00089e04) << 0x1f) < 0) {
      fVar26 = DAT_00089e04;
    }
    *(float *)(param_1 + iVar19 * 4 + 4) = fVar26;
  }
  else {
    *(undefined4 *)(param_1 + iVar19 * 4 + 4) = DAT_00089e00;
  }
  iVar17 = param_1 + local_c4 * 4;
  fVar26 = *(float *)(*(int *)(iVar17 + 4) + 0x28);
  *(float *)(param_1 + (param_2 + 0x96) * 4) = fVar26;
  iVar12 = *(int *)(iVar17 + 4);
  if (*(float *)(iVar12 + 0x30) != 0.0) {
    fVar26 = fVar26 + *(float *)(iVar12 + 0x30) * *(float *)(param_1 + param_2 * 4 + 0x54);
    if (fVar26 == DAT_00089e04 || fVar26 < DAT_00089e04 != (NAN(fVar26) || NAN(DAT_00089e04))) {
      fVar26 = DAT_00089e04;
    }
    *(float *)(param_1 + (param_2 + 0x96) * 4) = fVar26;
    iVar12 = *(int *)(iVar17 + 4);
  }
  if (0 < *(int *)(iVar12 + 0xc)) {
    iVar17 = 0;
    iVar20 = 0;
    do {
      iVar20 = iVar20 + 1;
      iVar5 = *(int *)(iVar12 + 8) + iVar17;
      iVar17 = iVar17 + 0x68;
      FUN_00085d98(iVar5,*(undefined4 *)(iVar12 + 0x34));
      iVar12 = *(int *)(param_1 + local_c4 * 4 + 4);
    } while (iVar20 < *(int *)(iVar12 + 0xc));
  }
  iVar20 = *(int *)(*(int *)(iVar16 + iVar6) + 4);
  iVar12 = (iVar18 + iVar20) * 0x10;
  iVar17 = param_1 + iVar12 + 0x20c;
  piVar10 = *(int **)(param_1 + iVar12 + 0x210);
  while (*(int **)(param_1 + (iVar18 + iVar20) * 0x10 + 0x214) != piVar10) {
    if (((piVar10[0x1e] < 1) || (*(int *)(param_1 + iVar19 * 4) == 0)) ||
       (iVar12 = piVar10[0x1e] + -1, piVar10[0x1e] = iVar12, iVar12 != 0)) {
      piVar10[2] = 0;
      piVar10 = piVar10 + 0x1f;
    }
    else {
      local_3c = piVar10;
      local_38 = iVar17;
      local_34 = piVar10 + 0x1f;
      local_40 = iVar17;
      FUN_00087dac(&local_30,
                   param_1 + (iVar18 + *(int *)(*(int *)(iVar16 + iVar6) + 4)) * 0x10 + 0x20c,iVar17
                   ,piVar10,iVar17,piVar10 + 0x1f);
      iVar17 = local_30;
      piVar10 = local_2c;
    }
    iVar20 = *(int *)(*(int *)(iVar16 + iVar6) + 4);
  }
  iVar6 = FUN_0002f5ec();
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x40) = DAT_00089e00;
  }
  return *(undefined4 *)(*(int *)(param_1 + local_c4 * 4 + 4) + 0x6c);
}



