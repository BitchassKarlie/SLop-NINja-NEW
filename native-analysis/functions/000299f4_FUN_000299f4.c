/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000299f4 FUN_000299f4 */

void FUN_000299f4(int param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float local_34;
  float local_30;
  float local_2c;
  
  iVar7 = DAT_00029f20;
  fVar13 = *(float *)(DAT_00029f18 + 0x29a04);
  iVar10 = DAT_00029f1c + 0x29a1c;
  if (*param_3 == fVar13) {
    if ((((param_3[1] == *(float *)(DAT_00029f18 + 0x29a08)) &&
         (param_3[2] == *(float *)(DAT_00029f18 + 0x29a0c))) &&
        (fVar13 == *(float *)(param_1 + 0x138))) &&
       ((*(float *)(DAT_00029f18 + 0x29a08) == *(float *)(param_1 + 0x13c) &&
        (*(float *)(DAT_00029f18 + 0x29a0c) == *(float *)(param_1 + 0x140))))) {
      return;
    }
    if (((*param_3 == fVar13) &&
        (puVar12 = (undefined4 *)(DAT_00029f20 + 0x29a68),
        param_3[1] == *(float *)(DAT_00029f20 + 0x29a6c))) &&
       (param_3[2] == *(float *)(DAT_00029f20 + 0x29a70))) {
      fVar13 = *(float *)(param_1 + 0x13c);
      fVar5 = *(float *)(param_1 + 0x140);
      *param_3 = *(float *)(param_1 + 0x138);
      param_3[1] = fVar13;
      param_3[2] = fVar5;
      iVar11 = param_1 + *(int *)(param_1 + 0x1cc) * 0xc;
      uVar4 = *(undefined4 *)(iVar7 + 0x29a6c);
      uVar6 = *(undefined4 *)(iVar7 + 0x29a70);
      *(undefined4 *)(iVar11 + 0x184) = *puVar12;
      *(undefined4 *)(iVar11 + 0x188) = uVar4;
      *(undefined4 *)(iVar11 + 0x18c) = uVar6;
      goto LAB_00029ad6;
    }
  }
  if (*(int *)(param_1 + 0x1d0) == 0) {
    uVar4 = *(undefined4 *)(DAT_00029f24 + 0x29ac6);
    uVar6 = *(undefined4 *)(DAT_00029f24 + 0x29aca);
    iVar7 = param_1 + *(int *)(param_1 + 0x1cc) * 0xc;
    *(undefined4 *)(iVar7 + 0x184) = *(undefined4 *)(DAT_00029f24 + 0x29ac2);
    *(undefined4 *)(iVar7 + 0x188) = uVar4;
    *(undefined4 *)(iVar7 + 0x18c) = uVar6;
  }
  else {
    fVar13 = param_3[1];
    fVar5 = param_3[2];
    iVar7 = param_1 + *(int *)(param_1 + 0x1cc) * 0xc;
    *(float *)(iVar7 + 0x184) = *param_3;
    *(float *)(iVar7 + 0x188) = fVar13;
    *(float *)(iVar7 + 0x18c) = fVar5;
    FUN_0001a178(param_1 + *(int *)(param_1 + 0x1cc) * 0xc + 0x184);
  }
LAB_00029ad6:
  fVar13 = param_3[1];
  fVar5 = param_3[2];
  *(float *)(param_1 + 0x138) = *param_3;
  *(float *)(param_1 + 0x13c) = fVar13;
  *(float *)(param_1 + 0x140) = fVar5;
  uVar4 = *(undefined4 *)(DAT_00029f28 + 0x29aee);
  iVar7 = *(int *)(DAT_00029f28 + 0x29af2);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(DAT_00029f28 + 0x29aea);
  *(undefined4 *)(param_1 + 0x1d8) = uVar4;
  *(int *)(param_1 + 0x1dc) = iVar7;
  iVar11 = *(int *)(param_1 + 0x1d0);
  if (iVar11 < 2) {
    iVar9 = *(int *)(param_1 + 0x1cc);
  }
  else {
    iVar7 = 1;
    iVar9 = *(int *)(param_1 + 0x1cc) + 0x11;
    fVar13 = *(float *)(param_1 + 0x1d4);
    fVar5 = *(float *)(param_1 + 0x1d8);
    fVar14 = *(float *)(param_1 + 0x1dc);
    do {
      iVar7 = iVar7 + 1;
      iVar8 = iVar9 % 6;
      iVar9 = iVar9 + -1;
      iVar8 = param_1 + iVar8 * 0xc;
      fVar13 = fVar13 + *(float *)(iVar8 + 0x184);
      fVar5 = fVar5 + *(float *)(iVar8 + 0x188);
      fVar14 = fVar14 + *(float *)(iVar8 + 0x18c);
    } while (iVar7 < iVar11);
    *(float *)(param_1 + 0x1dc) = fVar14;
    *(float *)(param_1 + 0x1d4) = fVar13;
    *(float *)(param_1 + 0x1d8) = fVar5;
    FUN_00019f30((undefined4 *)(param_1 + 0x1d4),(float)(longlong)(iVar11 + -1));
    iVar9 = *(int *)(param_1 + 0x1cc);
    iVar11 = *(int *)(param_1 + 0x1d0);
    iVar7 = param_1 + iVar9 * 0xc;
    fVar13 = *(float *)(param_1 + 0x1d4) - *(float *)(iVar7 + 0x184);
    fVar14 = *(float *)(param_1 + 0x1d8) - *(float *)(iVar7 + 0x188);
    fVar5 = *(float *)(param_1 + 0x1dc) - *(float *)(iVar7 + 0x18c);
    fVar5 = fVar14 * fVar14 + fVar13 * fVar13 + fVar5 * fVar5;
    fVar13 = fVar5;
    if (fVar5 != DAT_00029efc && fVar5 < DAT_00029efc == (NAN(fVar5) || NAN(DAT_00029efc))) {
      fVar13 = DAT_00029f00;
    }
    if (fVar5 != DAT_00029efc && fVar5 < DAT_00029efc == (NAN(fVar5) || NAN(DAT_00029efc))) {
      *(float *)(param_1 + 0x1e0) = fVar13;
    }
  }
  iVar8 = iVar11 + 1;
  if (iVar8 < 6) {
    iVar7 = iVar8;
  }
  if (iVar11 + -5 < 0 == SBORROW4(iVar8,6)) {
    iVar7 = 6;
  }
  *(int *)(param_1 + 0x1d0) = iVar7;
  fVar13 = DAT_00029f04;
  *(int *)(param_1 + 0x1cc) = (iVar9 + 1) % 6;
  local_34 = param_3[1] - param_3[2] * fVar13;
  local_2c = *param_3 * fVar13 - param_3[1] * fVar13;
  local_30 = param_3[2] * fVar13 - *param_3;
  FUN_0001a178(&local_34);
  iVar7 = *(int *)(param_1 + 0x50);
  if (iVar7 <= *(int *)(param_1 + 0x58)) {
    if (2 < iVar7) {
      iVar9 = 2;
      iVar11 = 0;
      do {
        iVar8 = iVar11 + 0x48;
        iVar9 = iVar9 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar11) =
             *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8);
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar11 + 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 4);
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar11 + 0x24) =
             *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar11 + 0x6c);
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar11 + 0x24 + 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar11 + 0x6c + 4);
        iVar7 = *(int *)(param_1 + 0x50);
        iVar11 = iVar8;
      } while (iVar9 < iVar7);
    }
    *(int *)(param_1 + 0x58) = iVar7 + -2;
  }
  if ((int)((uint)(*(float *)(param_1 + 0x154) < DAT_00029f08) << 0x1f) < 0) {
    fVar13 = *(float *)(param_1 + 0x154) +
             *(float *)(*(int *)(iVar10 + DAT_00029f2c) + 0x3c) * DAT_00029f0c;
    bVar1 = fVar13 < DAT_00029f08;
    bVar2 = fVar13 != DAT_00029f08;
    bVar3 = NAN(DAT_00029f08);
    *(float *)(param_1 + 0x154) = fVar13;
    if ((bVar2 && bVar1 == (NAN(fVar13) || bVar3)) ||
       ((int)((uint)(*(float *)(DAT_00029f38 + 0x29ed2) <
                    *(float *)((int)&DAT_00029f18 + DAT_00029f3c)) << 0x1f) < 0)) {
      *(float *)(param_1 + 0x154) = DAT_00029f08;
    }
  }
  iVar7 = FUN_0002f5f4();
  uVar4 = DAT_00029f14;
  if ((iVar7 == 0) ||
     (fVar13 = *(float *)(*(int *)(iVar10 + DAT_00029f2c) + 0x10), fVar13 < 0.0 != NAN(fVar13))) {
    fVar13 = *(float *)(param_1 + 0x154);
    iVar7 = DAT_00029f30 + 0x29cfe;
  }
  else {
    fVar13 = *(float *)(param_1 + 0x154);
    iVar7 = DAT_00029f34 + 0x29ebe;
  }
  fVar13 = fVar13 * DAT_00029f10 * *(float *)(iVar7 + 0xc);
  local_34 = fVar13 * local_34;
  local_30 = fVar13 * local_30;
  local_2c = fVar13 * local_2c;
  fVar13 = param_2[1];
  fVar5 = param_2[2] - local_2c;
  *(float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24) = *param_2 - local_34;
  *(float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + 4) = fVar13 - local_30;
  fVar13 = DAT_00029f04;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + 0x1c) = uVar4;
  *(float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + 0x20) = fVar13;
  iVar10 = *(int *)(param_1 + 0x58);
  iVar7 = *(int *)(param_1 + 0x5c);
  uVar6 = FUN_0009e880(param_1 + 0x44);
  *(undefined4 *)(iVar7 + iVar10 * 0x24 + 0x18) = uVar6;
  iVar7 = *(int *)(param_1 + 0x58) + 1;
  *(float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + 8) = fVar5;
  *(int *)(param_1 + 0x58) = iVar7;
  fVar13 = param_2[1];
  fVar5 = param_2[2] + local_2c;
  *(float *)(*(int *)(param_1 + 0x5c) + iVar7 * 0x24) = *param_2 + local_34;
  *(float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + 4) = fVar13 + local_30;
  fVar13 = DAT_00029f08;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + 0x1c) = uVar4;
  *(float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + 0x20) = fVar13;
  iVar10 = *(int *)(param_1 + 0x58);
  iVar7 = *(int *)(param_1 + 0x5c);
  uVar4 = FUN_0009e880(param_1 + 0x44);
  *(undefined4 *)(iVar7 + iVar10 * 0x24 + 0x18) = uVar4;
  iVar7 = *(int *)(param_1 + 0x58);
  *(float *)(*(int *)(param_1 + 0x5c) + iVar7 * 0x24 + 8) = fVar5;
  *(int *)(param_1 + 0x58) = iVar7 + 1;
  return;
}



