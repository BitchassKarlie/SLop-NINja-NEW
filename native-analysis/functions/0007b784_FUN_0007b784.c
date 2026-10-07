/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b784 FUN_0007b784 */

void FUN_0007b784(int param_1,undefined4 param_2,float *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = *(float *)(param_1 + 0xc);
  bVar1 = fVar13 < 0.0;
  bVar2 = fVar13 == 0.0;
  bVar3 = NAN(fVar13);
  fVar12 = *(float *)(param_1 + 4);
  iVar10 = DAT_0007b998 + 0x7b7a0;
  if (!bVar2 && bVar1 == bVar3) {
    fVar13 = fVar13 + fVar12;
  }
  if (bVar2 || bVar1 != bVar3) {
    *(float *)(param_1 + 0xc) = fVar12;
  }
  if (!bVar2 && bVar1 == bVar3) {
    *(float *)(param_1 + 0xc) = fVar13;
  }
  if (param_3 != (float *)0x0) {
    fVar13 = *param_3;
    if (fVar12 == 0.0 || fVar12 < 0.0 != NAN(fVar12)) {
      param_4 = 0;
    }
    if (fVar12 != 0.0 && fVar12 < 0.0 == NAN(fVar12)) {
      param_4 = 1;
    }
    fVar12 = DAT_0007b984;
    if (param_4 != 0) {
      fVar12 = DAT_0007b980;
    }
    if ((fVar13 == fVar12 || fVar13 < fVar12 != (NAN(fVar13) || NAN(fVar12))) &&
       (fVar13 = DAT_0007b984, param_4 != 0)) {
      fVar13 = DAT_0007b980;
    }
    *(float *)(param_1 + 0xc) = fVar13;
  }
  iVar4 = DAT_0007b99c;
  if (-1 < *(int *)(DAT_0007b99c + 0x7b874) << 0x1f) {
    iVar11 = DAT_0007b99c + 0x7b874;
    iVar5 = __cxa_guard_acquire(iVar11);
    if (iVar5 != 0) {
      uVar6 = FUN_0008f414(DAT_0007b9b8 + 0x7b95a);
      *(undefined4 *)(iVar4 + 0x7b878) = uVar6;
      __cxa_guard_release(iVar11);
    }
  }
  iVar4 = DAT_0007b9a0;
  if (-1 < *(int *)(DAT_0007b9a0 + 0x7b88a) << 0x1f) {
    iVar11 = DAT_0007b9a0 + 0x7b88a;
    iVar5 = __cxa_guard_acquire(iVar11);
    if (iVar5 != 0) {
      uVar6 = FUN_0008f414(DAT_0007b9b4 + 0x7b936);
      *(undefined4 *)(iVar4 + 0x7b88e) = uVar6;
      __cxa_guard_release(iVar11);
    }
  }
  fVar13 = *(float *)(*(int *)(*(int *)(iVar10 + DAT_0007b9a4) + 0x50) + 0xf0);
  iVar10 = FUN_0007b72c();
  fVar12 = DAT_0007b984;
  if (*(uint **)(iVar10 + 0x20) != (uint *)0x0) {
    puVar7 = (uint *)0x0;
    puVar9 = *(uint **)(iVar10 + 0x20);
    do {
      if (*puVar9 < *(uint *)(DAT_0007b9a8 + 0x7b8a2)) {
        puVar8 = (uint *)puVar9[4];
      }
      else {
        puVar8 = (uint *)puVar9[3];
        puVar7 = puVar9;
      }
      puVar9 = puVar8;
    } while (puVar8 != (uint *)0x0);
    if (((puVar7 != (uint *)0x0) && (*puVar7 <= *(uint *)(DAT_0007b9a8 + 0x7b8a2))) &&
       (puVar7[1] != 0)) {
      fVar12 = DAT_0007b98c;
    }
  }
  fVar13 = fVar13 + fVar12;
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (*(int *)(DAT_0007b9ac + 0x7b8e2) != *(int *)(*(int *)(param_1 + 0x1c) + 0x10))) {
    iVar10 = FUN_0007b72c();
    if (*(uint **)(iVar10 + 0x20) != (uint *)0x0) {
      puVar7 = (uint *)0x0;
      puVar9 = *(uint **)(iVar10 + 0x20);
      do {
        if (*puVar9 < *(uint *)(DAT_0007b9b0 + 0x7b8f4)) {
          puVar8 = (uint *)puVar9[4];
        }
        else {
          puVar8 = (uint *)puVar9[3];
          puVar7 = puVar9;
        }
        puVar9 = puVar8;
      } while (puVar8 != (uint *)0x0);
      if (((puVar7 != (uint *)0x0) && (*puVar7 <= *(uint *)(DAT_0007b9b0 + 0x7b8f4))) &&
         (puVar7[1] != 0)) goto LAB_0007b88e;
    }
    fVar12 = *(float *)(param_1 + 0xc);
    fVar13 = fVar13 + DAT_0007b984;
    iVar10 = FUN_0007b72c();
    fVar12 = fVar12 / *(float *)(iVar10 + 0x68);
    if (fVar12 == fVar13 || fVar12 < fVar13 != (NAN(fVar12) || NAN(fVar13))) {
      return;
    }
  }
  else {
LAB_0007b88e:
    fVar12 = *(float *)(param_1 + 0xc);
    fVar13 = fVar13 + DAT_0007b988;
    iVar10 = FUN_0007b72c();
    fVar12 = fVar12 / *(float *)(iVar10 + 0x68);
    if (fVar12 == fVar13 || fVar12 < fVar13 != (NAN(fVar12) || NAN(fVar13))) {
      return;
    }
  }
  iVar10 = FUN_0007b72c();
  fVar12 = DAT_0007b990;
  fVar14 = fVar13 * *(float *)(iVar10 + 0x68) - DAT_0007b990;
  if (fVar14 == DAT_0007b994 || fVar14 < DAT_0007b994 != (NAN(fVar14) || NAN(DAT_0007b994))) {
    *(float *)(param_1 + 0xc) = DAT_0007b994;
  }
  else {
    iVar10 = FUN_0007b72c();
    *(float *)(param_1 + 0xc) = fVar13 * *(float *)(iVar10 + 0x68) - fVar12;
  }
  return;
}



