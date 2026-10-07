/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008c5c8 FUN_0008c5c8 */

undefined4 FUN_0008c5c8(int param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
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
  float fVar16;
  float fVar17;
  
  fVar10 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_2 + 0x18) - *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  fVar9 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_2 + 0x14) - *(float *)(param_2 + 4);
  fVar11 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0xc);
  fVar8 = *(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  fVar16 = fVar10 * fVar7 + fVar9 * fVar6 + fVar11 * fVar8;
  fVar14 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
  fVar15 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
  fVar5 = fVar14 * fVar15 - fVar16 * fVar16;
  fVar12 = fVar10 * fVar3 + fVar9 * fVar2 + fVar11 * fVar4;
  fVar13 = fVar7 * fVar3 + fVar6 * fVar2 + fVar8 * fVar4;
  if ((int)((uint)(fVar5 < DAT_0008c768) << 0x1f) < 0) {
    if (fVar16 != fVar15 && fVar16 < fVar15 == (NAN(fVar16) || NAN(fVar15))) {
      fVar13 = fVar12 / fVar16;
    }
    fVar17 = DAT_0008c76c;
    if (fVar16 == fVar15 || fVar16 < fVar15 != (NAN(fVar16) || NAN(fVar15))) {
      fVar13 = fVar13 / fVar15;
    }
  }
  else {
    fVar17 = (fVar16 * fVar13 - fVar15 * fVar12) / fVar5;
    fVar13 = (fVar14 * fVar13 - fVar16 * fVar12) / fVar5;
  }
  fVar5 = (fVar3 + fVar10 * fVar17) - fVar7 * fVar13;
  fVar2 = (fVar2 + fVar9 * fVar17) - fVar6 * fVar13;
  fVar3 = (fVar4 + fVar11 * fVar17) - fVar8 * fVar13;
  if ((((-1 < (int)((uint)(fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3 < DAT_0008c770) << 0x1f))
       || (fVar17 < 0.0 != NAN(fVar17))) || (DAT_0008c774 < fVar17)) ||
     ((fVar13 < 0.0 != NAN(fVar13) || (DAT_0008c774 < fVar13)))) {
    uVar1 = 0;
  }
  else if (fVar17 < DAT_0008c778 == (NAN(fVar17) || NAN(DAT_0008c778))) {
    fVar17 = DAT_0008c774 - fVar17;
    *param_3 = -(fVar9 * fVar17);
    param_3[1] = -(fVar10 * fVar17);
    param_3[2] = -(fVar11 * fVar17);
    uVar1 = 1;
  }
  else {
    *param_3 = fVar9 * fVar17;
    param_3[1] = fVar10 * fVar17;
    param_3[2] = fVar11 * fVar17;
    uVar1 = 1;
  }
  return uVar1;
}



