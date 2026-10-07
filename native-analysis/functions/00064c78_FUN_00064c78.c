/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00064c78 FUN_00064c78 */

void FUN_00064c78(int param_1,uint *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar9 = DAT_00065014;
  fVar14 = DAT_00064ff8;
  iVar11 = DAT_0006500c + 0x64c8c;
  iVar5 = DAT_00065010;
  if (*(char *)(param_1 + 0x27d) != '\0') {
    fVar12 = (float)FUN_000927b8(*(undefined2 *)(DAT_00065014 + 0x64ece));
    if ((int)((uint)(fVar12 * fVar14 < 0.0) << 0x1f) < 0) {
      fVar12 = (float)FUN_000927b8(*(undefined2 *)(iVar9 + 0x64ece));
      fVar12 = fVar12 * DAT_00065008;
    }
    else {
      fVar12 = (float)FUN_000927b8(*(undefined2 *)(iVar9 + 0x64ece));
      fVar12 = fVar12 * fVar14;
    }
    iVar9 = DAT_00065018;
    iVar5 = DAT_00065010;
    fVar14 = DAT_00064ffc;
    *(float *)(DAT_00065018 + 0x64f00) = fVar12;
    fVar14 = (float)(longlong)(int)(uint)*(ushort *)(iVar9 + 0x64f04) +
             *(float *)(*(int *)(iVar11 + iVar5) + 0x3c) * fVar14;
    *(ushort *)(iVar9 + 0x64f04) = (ushort)(0.0 < fVar14) * (short)(int)fVar14;
  }
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar8 = param_2[2];
  *(uint *)(param_1 + 4) = uVar4;
  *(uint *)(param_1 + 8) = uVar6;
  *(uint *)(param_1 + 0xc) = uVar8;
  fVar14 = DAT_00064fe4;
  iVar9 = *(int *)(param_1 + 0x274);
  if (iVar9 != 0) {
    uVar4 = *(uint *)(param_1 + 4);
    uVar6 = *(uint *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    *(uint *)(param_1 + 0x268) = uVar4;
    *(uint *)(param_1 + 0x26c) = uVar6;
    *(int *)(param_1 + 0x270) = iVar9;
    *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) + *(float *)(param_1 + 0x18) + fVar14;
    fVar12 = DAT_00065000;
    fVar14 = DAT_00064ff0;
    fVar13 = *(float *)(param_1 + 0x264);
    if (fVar13 != 0.0 && fVar13 < 0.0 == NAN(fVar13)) {
      puVar7 = *(uint **)(iVar11 + DAT_0006501c);
      *(float *)(param_1 + 0x264) = fVar13 - *(float *)(*(int *)(iVar11 + iVar5) + 0x3c);
      fVar13 = DAT_00065004;
      uVar4 = puVar7[2];
      uVar2 = (ulonglong)*puVar7 * (ulonglong)uVar4 +
              CONCAT44(uVar4 * puVar7[1] + *puVar7 * puVar7[3],puVar7[4]);
      uVar8 = puVar7[5] + (int)(uVar2 >> 0x20);
      lVar3 = (ulonglong)uVar4 * (uVar2 & 0xffffffff) +
              CONCAT44(uVar4 * uVar8 + (int)uVar2 * puVar7[3],puVar7[4]);
      uVar4 = puVar7[5] + (int)((ulonglong)lVar3 >> 0x20);
      uVar6 = 0;
      *puVar7 = (uint)lVar3;
      puVar7[1] = uVar4;
      iVar9 = uVar4 * 0x7ffff;
      *(float *)(param_1 + 0x268) =
           *(float *)(param_1 + 0x268) +
           (((float)(ulonglong)((uVar8 >> 0xd) - (uint)(uVar8 * 0x80000 < uVar8)) / fVar12) * fVar14
           - fVar13);
      *(float *)(param_1 + 0x26c) =
           *(float *)(param_1 + 0x26c) +
           (((float)(ulonglong)((uVar4 >> 0xd) - (uint)(uVar4 * 0x80000 < uVar4)) / fVar12) * fVar14
           - fVar13);
      *(float *)(param_1 + 0x270) = *(float *)(param_1 + 0x270) + DAT_00064fec;
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) || (param_1 != *(int *)(*(int *)(param_1 + 0x58) + 0x8c))) {
    fVar14 = *(float *)(param_1 + 0x280) +
             *(float *)(*(int *)(iVar11 + iVar5) + 0x3c) * DAT_00064fe8;
    if ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0) {
      fVar14 = DAT_00064fec;
    }
    *(float *)(param_1 + 0x280) = fVar14;
  }
  else {
    fVar14 = *(float *)(param_1 + 0x280) +
             *(float *)(*(int *)(iVar11 + iVar5) + 0x3c) * DAT_00064ff0;
    if (fVar14 != DAT_00064ff4 && fVar14 < DAT_00064ff4 == (NAN(fVar14) || NAN(DAT_00064ff4))) {
      fVar14 = DAT_00064ff4;
    }
    *(float *)(param_1 + 0x280) = fVar14;
  }
  fVar12 = *(float *)(*(int *)(iVar11 + iVar5) + 0x3c);
  fVar13 = *(float *)(param_1 + 0x25c);
  cVar1 = *(char *)(*(int *)(param_1 + 0x278) + 0x34);
  fVar14 = DAT_00064ff0;
  if (cVar1 != '\0') {
    fVar14 = DAT_00064fe8;
  }
  fVar15 = DAT_00064fec;
  if (0.0 < fVar13 + fVar12 * fVar14) {
    fVar14 = DAT_00064ff0;
    if (cVar1 != '\0') {
      fVar14 = DAT_00064fe8;
    }
    fVar14 = fVar13 + fVar14 * fVar12;
    fVar15 = DAT_00064ff4;
    if (fVar14 < DAT_00064ff4 != (NAN(fVar14) || NAN(DAT_00064ff4))) {
      fVar14 = DAT_00064ff0;
      if (cVar1 != '\0') {
        fVar14 = DAT_00064fe8;
      }
      fVar15 = fVar13 + fVar14 * fVar12;
    }
  }
  *(float *)(param_1 + 0x25c) = fVar15;
  fVar13 = *(float *)(param_1 + 0x260);
  fVar12 = *(float *)(*(int *)(iVar11 + iVar5) + 0x3c);
  iVar9 = FUN_0007832c(uVar4,uVar6,iVar9);
  iVar10 = *(int *)(param_1 + 0x278);
  fVar14 = DAT_00064fe8;
  if ((iVar10 != 0) && (iVar10 == *(int *)(iVar9 + *(int *)(iVar10 + 0x10) * 4))) {
    fVar14 = DAT_00064ff0;
  }
  fVar15 = DAT_00064fec;
  if (0.0 < fVar13 + fVar12 * fVar14) {
    fVar13 = *(float *)(param_1 + 0x260);
    fVar12 = *(float *)(*(int *)(iVar11 + iVar5) + 0x3c);
    iVar9 = FUN_0007832c();
    iVar10 = *(int *)(param_1 + 0x278);
    fVar14 = DAT_00064fe8;
    if ((iVar10 != 0) && (iVar10 == *(int *)(iVar9 + *(int *)(iVar10 + 0x10) * 4))) {
      fVar14 = DAT_00064ff0;
    }
    fVar13 = fVar13 + fVar12 * fVar14;
    fVar15 = DAT_00064ff4;
    if (fVar13 < DAT_00064ff4 != (NAN(fVar13) || NAN(DAT_00064ff4))) {
      fVar12 = *(float *)(param_1 + 0x260);
      fVar14 = *(float *)(*(int *)(iVar11 + iVar5) + 0x3c);
      iVar5 = FUN_0007832c();
      iVar9 = *(int *)(param_1 + 0x278);
      if ((iVar9 == 0) || (iVar9 != *(int *)(iVar5 + *(int *)(iVar9 + 0x10) * 4))) {
        fVar15 = fVar12 + fVar14 * DAT_00064fe8;
      }
      else {
        fVar15 = fVar12 + fVar14 * DAT_00064ff0;
      }
    }
  }
  *(float *)(param_1 + 0x260) = fVar15;
  return;
}



