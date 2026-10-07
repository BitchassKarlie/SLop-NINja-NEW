/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aab54 FUN_000aab54 */

undefined4 FUN_000aab54(int param_1,int param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_60;
  float local_5c;
  float local_58;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar11 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_1 + 0xc);
  fVar10 = *(float *)(param_2 + 0xc);
  fVar5 = *(float *)(DAT_000aae90 + 0xaab72);
  fVar6 = *(float *)(DAT_000aae90 + 0xaab76);
  fVar15 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  *param_3 = *(float *)(DAT_000aae90 + 0xaab6e);
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  fVar5 = DAT_000aae84;
  fVar16 = *(float *)(param_1 + 0x14);
  fVar17 = *(float *)(param_2 + 0x14);
  fVar6 = ABS(fVar15) - (fVar16 + fVar17);
  if (fVar6 < 0.0 != NAN(fVar6)) {
    fVar11 = fVar11 - fVar13;
    fVar14 = *(float *)(param_1 + 0x18);
    fVar13 = ABS(fVar11) - (fVar17 + fVar14);
    if (fVar13 < 0.0 != NAN(fVar13)) {
      fVar8 = fVar8 - fVar10;
      fVar12 = *(float *)(param_1 + 0x1c);
      fVar10 = ABS(fVar8) - (fVar17 + fVar12);
      if (fVar10 < 0.0 != NAN(fVar10)) {
        fVar9 = *(float *)(param_1 + 4);
        fVar7 = fVar16 + fVar9;
        local_60 = *(float *)(param_2 + 4);
        if ((local_60 != fVar7 && local_60 < fVar7 == (NAN(local_60) || NAN(fVar7))) ||
           (fVar4 = local_60, (int)((uint)(local_60 < fVar9 - fVar16) << 0x1f) < 0)) {
          bVar1 = local_60 < fVar9;
          bVar2 = local_60 == fVar9;
          bVar3 = NAN(local_60) || NAN(fVar9);
          if (bVar2 || bVar1 != bVar3) {
            fVar16 = fVar9 - fVar16;
          }
          if (!bVar2 && bVar1 == bVar3) {
            local_24 = fVar7;
          }
          fVar4 = local_24;
          if (bVar2 || bVar1 != bVar3) {
            fVar4 = fVar16;
          }
        }
        local_24 = fVar4;
        fVar7 = *(float *)(param_1 + 8);
        fVar16 = fVar14 + fVar7;
        local_5c = *(float *)(param_2 + 8);
        if ((local_5c != fVar16 && local_5c < fVar16 == (NAN(local_5c) || NAN(fVar16))) ||
           (fVar9 = local_5c, (int)((uint)(local_5c < fVar7 - fVar14) << 0x1f) < 0)) {
          bVar1 = local_5c < fVar7;
          bVar2 = local_5c == fVar7;
          bVar3 = NAN(local_5c) || NAN(fVar7);
          if (bVar2 || bVar1 != bVar3) {
            fVar7 = fVar7 - fVar14;
          }
          if (!bVar2 && bVar1 == bVar3) {
            local_20 = fVar16;
          }
          fVar9 = local_20;
          if (bVar2 || bVar1 != bVar3) {
            fVar9 = fVar7;
          }
        }
        local_20 = fVar9;
        fVar16 = *(float *)(param_1 + 0xc);
        fVar14 = fVar12 + fVar16;
        local_58 = *(float *)(param_2 + 0xc);
        if (((local_58 != fVar14 && local_58 < fVar14 == (NAN(local_58) || NAN(fVar14))) ||
            (local_1c = local_58, (int)((uint)(local_58 < fVar16 - fVar12) << 0x1f) < 0)) &&
           (local_1c = fVar14,
           local_58 == fVar16 || local_58 < fVar16 != (NAN(local_58) || NAN(fVar16)))) {
          local_1c = fVar16 - fVar12;
        }
        if (((local_60 == local_24) && (local_5c == local_20)) && (local_58 == local_1c)) {
          fVar16 = ABS(fVar6);
          fVar17 = ABS(fVar13);
          if (-1 < (int)((uint)(fVar16 < fVar17) << 0x1f)) {
            fVar6 = ABS(fVar10);
            if (fVar17 != fVar6 && fVar17 < fVar6 == (NAN(fVar17) || NAN(fVar6))) {
              fVar6 = DAT_000aae88;
              if ((int)((uint)(fVar8 < DAT_000aae84) << 0x1f) < 0) {
                fVar6 = DAT_000aae8c;
              }
              *param_3 = DAT_000aae84;
              param_3[1] = fVar5;
              param_3[2] = -(fVar10 * fVar6);
              return 1;
            }
            fVar6 = DAT_000aae88;
            if ((int)((uint)(fVar11 < DAT_000aae84) << 0x1f) < 0) {
              fVar6 = DAT_000aae8c;
            }
            *param_3 = DAT_000aae84;
            param_3[1] = -(fVar13 * fVar6);
            param_3[2] = fVar5;
            return 1;
          }
          fVar11 = ABS(fVar10);
          if (fVar16 != fVar11 && fVar16 < fVar11 == (NAN(fVar16) || NAN(fVar11))) {
            fVar6 = DAT_000aae88;
            if ((int)((uint)(fVar8 < DAT_000aae84) << 0x1f) < 0) {
              fVar6 = DAT_000aae8c;
            }
            *param_3 = DAT_000aae84;
            param_3[1] = fVar5;
            param_3[2] = -(fVar10 * fVar6);
            return 1;
          }
          fVar8 = DAT_000aae88;
          if ((int)((uint)(fVar15 < DAT_000aae84) << 0x1f) < 0) {
            fVar8 = DAT_000aae8c;
          }
          *param_3 = -(fVar6 * fVar8);
          param_3[1] = fVar5;
          param_3[2] = fVar5;
          return 1;
        }
        local_5c = local_20 - local_5c;
        local_58 = local_1c - local_58;
        local_60 = local_24 - local_60;
        fVar6 = local_5c * local_5c + local_60 * local_60 + local_58 * local_58;
        fVar5 = fVar6 - fVar17 * fVar17;
        if (fVar5 < 0.0 != NAN(fVar5)) {
          fVar5 = (float)FUN_00092d98(fVar6);
          fVar6 = *(float *)(param_2 + 0x14);
          FUN_0001a178(&local_60);
          fVar5 = ABS(fVar5 - fVar6);
          *param_3 = local_60 * fVar5;
          param_3[1] = local_5c * fVar5;
          param_3[2] = local_58 * fVar5;
          return 1;
        }
      }
    }
  }
  return 0;
}



