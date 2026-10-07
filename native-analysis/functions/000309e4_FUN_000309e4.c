/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000309e4 FUN_000309e4 */

void FUN_000309e4(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  iVar6 = DAT_00030bc4;
  fVar5 = DAT_00030bbc;
  fVar4 = DAT_00030bb8;
  fVar3 = DAT_00030bb4;
  fVar2 = DAT_00030bb0;
  fVar1 = DAT_00030bac;
  pfVar11 = *(float **)(*(int *)(DAT_00030bc0 + 0x30a22) + 4);
  if (pfVar11 != (float *)0x0) {
    param_1 = param_1 * DAT_00030ba8;
    iVar12 = DAT_00030bc8 + 0x30a22;
    do {
      while( true ) {
        fVar14 = fVar2;
        if (pfVar11[6] != 0.0) {
          fVar14 = fVar1;
        }
        fVar14 = *pfVar11 + param_1 * fVar14;
        *pfVar11 = fVar14;
        if (-1 < (int)((uint)(fVar14 < fVar3) << 0x1f)) break;
        if (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) {
          iVar13 = (int)fVar14;
          iVar9 = iVar12 + iVar13 * 0xc;
          iVar10 = iVar12 + (iVar13 + 1) * 0xc;
          fVar14 = fVar14 - (float)(longlong)iVar13;
          local_5c = pfVar11[1];
          local_34 = fVar2;
          local_6c = fVar4;
          local_68 = fVar4;
          local_64 = fVar4;
          local_60 = fVar4;
          local_58 = fVar4;
          local_54 = fVar4;
          local_50 = fVar4;
          local_4c = fVar4;
          local_44 = fVar4;
          local_40 = fVar4;
          local_3c = fVar4;
          local_38 = fVar4;
          local_48 = (*(float *)(iVar9 + 0x38) +
                     fVar14 * (*(float *)(iVar10 + 0x38) - *(float *)(iVar9 + 0x38))) * local_5c;
          local_70 = (*(float *)(iVar9 + 0x30) +
                     fVar14 * (*(float *)(iVar10 + 0x30) - *(float *)(iVar9 + 0x30))) * local_5c;
          local_5c = (*(float *)(iVar9 + 0x34) +
                     fVar14 * (*(float *)(iVar10 + 0x34) - *(float *)(iVar9 + 0x34))) * local_5c;
          uVar7 = FUN_000927b8((int)(pfVar11[2] * fVar5) & 0xffff);
          uVar8 = FUN_000927c8((int)(pfVar11[2] * fVar5) & 0xffff);
          FUN_0001d0e0(&local_70,uVar7,uVar8);
          local_40 = local_40 + pfVar11[3];
          local_3c = local_3c + pfVar11[4];
          local_38 = local_38 + pfVar11[5];
          FUN_00094538(*(undefined4 *)(iVar12 + (int)pfVar11[6] * 4 + 0x84),&local_70);
        }
LAB_00030b4e:
        pfVar11 = (float *)pfVar11[9];
        if (pfVar11 == (float *)0x0) {
          return;
        }
      }
      FUN_00030984(*(undefined4 *)(iVar6 + 0x30a48),pfVar11);
      iVar10 = *(int *)(iVar6 + 0x30aac);
      iVar9 = *(int *)(iVar10 + 0xc);
      if (*(int *)(iVar10 + 0x10) <= iVar9) goto LAB_00030b4e;
      *(float **)(*(int *)(iVar10 + 8) + iVar9 * 4) = pfVar11;
      *(int *)(iVar10 + 0xc) = iVar9 + 1;
      pfVar11 = (float *)pfVar11[9];
    } while (pfVar11 != (float *)0x0);
  }
  return;
}



