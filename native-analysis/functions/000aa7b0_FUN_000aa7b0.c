/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aa7b0 FUN_000aa7b0 */

undefined4 FUN_000aa7b0(int param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
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
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined auStack_34 [4];
  
  if (((*(float *)(param_1 + 0x14) != *(float *)(DAT_000aab50 + 0xaa7bc)) ||
      (*(float *)(param_1 + 0x18) != *(float *)(DAT_000aab50 + 0xaa7c0))) ||
     (*(float *)(param_1 + 0x1c) != *(float *)(DAT_000aab50 + 0xaa7c4))) {
    local_40 = *(float *)(param_2 + 0x14);
    local_3c = *(float *)(param_2 + 0x18);
    local_38 = *(float *)(param_2 + 0x1c);
    local_4c = *(float *)(param_2 + 4);
    fVar10 = local_40 - local_4c;
    local_48 = *(float *)(param_2 + 8);
    local_44 = *(float *)(param_2 + 0xc);
    fVar11 = *(float *)(param_1 + 4) - (fVar10 * DAT_000aab40 + local_4c);
    fVar9 = ABS(fVar11) - (ABS(fVar10 * DAT_000aab40) + *(float *)(param_1 + 0x14));
    if (fVar9 == 0.0 || fVar9 < 0.0 != NAN(fVar9)) {
      fVar13 = local_3c - local_48;
      fVar14 = *(float *)(param_1 + 8) - (fVar13 * DAT_000aab40 + local_48);
      fVar12 = ABS(fVar14) - (ABS(fVar13 * DAT_000aab40) + *(float *)(param_1 + 0x18));
      if (fVar12 == 0.0 || fVar12 < 0.0 != NAN(fVar12)) {
        fVar15 = local_38 - local_44;
        fVar8 = ABS(*(float *)(param_1 + 0xc) - (fVar15 * DAT_000aab40 + local_44)) -
                (ABS(fVar15 * DAT_000aab40) + *(float *)(param_1 + 0x1c));
        if (fVar8 == 0.0 || fVar8 < 0.0 != NAN(fVar8)) {
          local_50 = -fVar15;
          local_58 = fVar10;
          local_54 = fVar13;
          iVar1 = FUN_00092f1c(param_1 + 4,&local_4c,&local_40,&local_58,auStack_34);
          if (iVar1 != 0) {
            local_58 = -fVar10;
            local_54 = fVar13;
            local_50 = fVar15;
          }
          FUN_0001a178(&local_58);
          fVar10 = DAT_000aab44;
          fVar2 = (*(float *)(param_1 + 4) + *(float *)(param_1 + 0x14)) * local_58;
          fVar3 = (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x18)) * local_54;
          fVar4 = (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x18)) * local_54;
          fVar6 = (*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x1c)) * local_50;
          fVar7 = (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x1c)) * local_50;
          fVar13 = fVar2 + fVar3;
          fVar2 = fVar2 + fVar4;
          fVar8 = fVar13 + fVar6;
          fVar13 = fVar13 + fVar7;
          fVar5 = (*(float *)(param_1 + 4) - *(float *)(param_1 + 0x14)) * local_58;
          fVar15 = fVar6 + fVar2;
          fVar3 = fVar3 + fVar5;
          if (fVar8 != fVar13 && fVar8 < fVar13 == (NAN(fVar8) || NAN(fVar13))) {
            fVar13 = fVar8;
          }
          fVar2 = fVar7 + fVar2;
          if (fVar13 == fVar15 || fVar13 < fVar15 != (NAN(fVar13) || NAN(fVar15))) {
            fVar13 = fVar15;
          }
          fVar8 = fVar6 + fVar3;
          fVar4 = fVar4 + fVar5;
          if (fVar13 == fVar2 || fVar13 < fVar2 != (NAN(fVar13) || NAN(fVar2))) {
            fVar13 = fVar2;
          }
          fVar3 = fVar7 + fVar3;
          if (fVar13 == fVar8 || fVar13 < fVar8 != (NAN(fVar13) || NAN(fVar8))) {
            fVar13 = fVar8;
          }
          fVar6 = fVar6 + fVar4;
          if (fVar13 == fVar3 || fVar13 < fVar3 != (NAN(fVar13) || NAN(fVar3))) {
            fVar13 = fVar3;
          }
          fVar7 = fVar7 + fVar4;
          if (fVar13 == fVar6 || fVar13 < fVar6 != (NAN(fVar13) || NAN(fVar6))) {
            fVar13 = fVar6;
          }
          if (fVar13 == fVar7 || fVar13 < fVar7 != (NAN(fVar13) || NAN(fVar7))) {
            fVar13 = fVar7;
          }
          fVar15 = local_54 * local_48 + local_58 * local_4c + local_50 * local_44;
          fVar8 = local_54 * local_3c + local_58 * local_40 + local_50 * local_38;
          if ((int)((uint)(fVar15 < fVar8) << 0x1f) < 0) {
            fVar8 = fVar15;
          }
          fVar8 = fVar8 - fVar13;
          if (fVar8 == DAT_000aab44 || fVar8 < DAT_000aab44 != (NAN(fVar8) || NAN(DAT_000aab44))) {
            if (param_3 != (float *)0x0) {
              *param_3 = DAT_000aab44;
              param_3[1] = fVar10;
              param_3[2] = fVar10;
              if ((int)((uint)(fVar9 < 0.0) << 0x1f) < 0) {
                fVar9 = -fVar9;
              }
              iVar1 = (uint)(fVar8 < 0.0) << 0x1f;
              if ((int)((uint)(fVar12 < 0.0) << 0x1f) < 0) {
                fVar12 = -fVar12;
              }
              if (-1 < iVar1) {
                fVar10 = fVar8;
              }
              if (iVar1 < 0) {
                fVar10 = -fVar8;
              }
              if (-1 < (int)((uint)(fVar9 < fVar12) << 0x1f)) {
                if (fVar12 == fVar10 || fVar12 < fVar10 != (NAN(fVar12) || NAN(fVar10))) {
                  fVar9 = DAT_000aab48;
                  if ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0) {
                    fVar9 = DAT_000aab4c;
                  }
                  param_3[1] = fVar9 * fVar12;
                  return 1;
                }
                *param_3 = fVar8 * local_58;
                param_3[1] = fVar8 * local_54;
                param_3[2] = fVar8 * local_50;
                return 1;
              }
              if (fVar9 == fVar10 || fVar9 < fVar10 != (NAN(fVar9) || NAN(fVar10))) {
                fVar10 = DAT_000aab48;
                if ((int)((uint)(fVar11 < 0.0) << 0x1f) < 0) {
                  fVar10 = DAT_000aab4c;
                }
                *param_3 = fVar10 * fVar9;
                return 1;
              }
              *param_3 = fVar8 * local_58;
              param_3[1] = fVar8 * local_54;
              param_3[2] = fVar8 * local_50;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



