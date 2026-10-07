/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00057b18 FUN_00057b18 */

void FUN_00057b18(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  
  fVar19 = *(float *)(param_1 + 0x74);
  param_2 = fVar19 + param_2;
  iVar13 = DAT_00057e8c + 0x57b36;
  bVar1 = param_2 < DAT_00057e38;
  bVar2 = param_2 == DAT_00057e38;
  bVar3 = NAN(DAT_00057e38);
  *(float *)(param_1 + 0x74) = param_2;
  uVar8 = DAT_00057e88;
  uVar9 = DAT_00057e68;
  fVar16 = DAT_00057e5c;
  fVar7 = DAT_00057e3c;
  if (bVar2 || bVar1 != (NAN(param_2) || bVar3)) {
    if (param_2 == DAT_00057e60 || param_2 < DAT_00057e60 != (NAN(param_2) || NAN(DAT_00057e60))) {
      fVar20 = (param_2 / DAT_00057e60) * (param_2 / DAT_00057e60);
      fVar16 = DAT_00057e44;
      fVar7 = DAT_00057e50;
      if (*(int *)(param_1 + 0x100) != 2) {
        fVar16 = DAT_00057e58;
        fVar7 = DAT_00057e54;
      }
      fVar17 = fVar20 * DAT_00057e5c;
      fVar18 = fVar17 + DAT_00057e5c;
      *(float *)(param_1 + 8) = fVar17 - DAT_00057e48;
      *(float *)(param_1 + 0xc) = fVar7 + fVar20 * fVar16;
      *(float *)(param_1 + 0x10) = fVar18;
    }
    else {
      if (*(int *)(param_1 + 0x100) != 2) {
        *(undefined4 *)(param_1 + 8) = DAT_00057e64;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        *(float *)(param_1 + 0x10) = fVar16;
        iVar11 = *(int *)(param_1 + 0x100);
        iVar6 = DAT_00057e90;
        goto joined_r0x00057c12;
      }
      *(undefined4 *)(param_1 + 8) = DAT_00057e64;
      *(undefined4 *)(param_1 + 0xc) = uVar8;
      *(float *)(param_1 + 0x10) = fVar16;
    }
  }
  else {
    if (param_2 != DAT_00057e3c && param_2 < DAT_00057e3c == (NAN(param_2) || NAN(DAT_00057e3c))) {
      *(float *)(param_1 + 0x74) = DAT_00057e3c;
      *(undefined *)(param_1 + 0x27) = 1;
      param_2 = fVar7;
    }
    fVar20 = (param_2 - DAT_00057e38) / DAT_00057e40 + DAT_00057e4c;
    fVar20 = fVar20 * fVar20;
    fVar16 = DAT_00057e44;
    fVar7 = DAT_00057e50;
    if (*(int *)(param_1 + 0x100) != 2) {
      fVar16 = DAT_00057e58;
      fVar7 = DAT_00057e54;
    }
    fVar17 = fVar20 * DAT_00057e5c;
    fVar18 = fVar17 + DAT_00057e5c;
    *(float *)(param_1 + 8) = fVar17 - DAT_00057e48;
    *(float *)(param_1 + 0xc) = fVar7 + fVar20 * fVar16;
    *(float *)(param_1 + 0x10) = fVar18;
  }
  iVar11 = *(int *)(param_1 + 0x100);
  iVar6 = DAT_00057e90;
joined_r0x00057c12:
  DAT_00057e90 = iVar6;
  if (iVar11 == 2) {
    iVar11 = (int)(fVar19 * DAT_00057e6c);
    iVar21 = (int)(*(float *)(param_1 + 0x74) * DAT_00057e6c);
    if ((iVar11 != iVar21) && (iVar21 < 4)) {
      piVar14 = (int *)(iVar6 + 0x57c42);
      if ((-1 < *piVar14 << 0x1f) && (iVar21 = __cxa_guard_acquire(piVar14), iVar21 != 0)) {
        uVar9 = FUN_0008f414(DAT_00057e9c + 0x57e26);
        *(undefined4 *)(iVar6 + 0x57c46) = uVar9;
        __cxa_guard_release(piVar14);
      }
      uVar9 = FUN_0007e454();
      iVar21 = FUN_0007da40(uVar9,*(undefined4 *)(DAT_00057e94 + 0x57c58),0);
      iVar6 = DAT_00057e98;
      if (iVar21 != 0) {
        puVar12 = *(uint **)(iVar13 + DAT_00057e98);
        uVar15 = puVar12[2];
        uVar4 = (ulonglong)*puVar12 * (ulonglong)uVar15 +
                CONCAT44(uVar15 * puVar12[1] + *puVar12 * puVar12[3],puVar12[4]);
        uVar10 = puVar12[5] + (int)(uVar4 >> 0x20);
        lVar5 = (ulonglong)uVar15 * (uVar4 & 0xffffffff) +
                CONCAT44(uVar15 * uVar10 + (int)uVar4 * puVar12[3],puVar12[4]);
        uVar15 = puVar12[5] + (int)((ulonglong)lVar5 >> 0x20);
        *puVar12 = (uint)lVar5;
        puVar12[1] = uVar15;
        fVar16 = DAT_00057e5c;
        fVar7 = DAT_00057e4c;
        fVar19 = (DAT_00057e80 -
                 (float)(ulonglong)((uVar15 >> 0x1e) + (uint)CARRY4(uVar15 * 4,uVar15))) -
                 DAT_00057e84;
        *(float *)(iVar21 + 8) =
             ((((float)(ulonglong)((uVar10 >> 0xd) - (uint)(uVar10 * 0x80000 < uVar10)) /
               DAT_00057e70) * DAT_00057e74 - DAT_00057e78) - DAT_00057e7c) +
             (float)(longlong)(iVar11 * 100);
        *(float *)(iVar21 + 0xc) = fVar19;
        *(float *)(iVar21 + 0x10) = fVar16;
        *(float *)(iVar21 + 0x28) = fVar7;
        *(undefined *)(iVar21 + 0x44) = 1;
      }
      puVar12 = *(uint **)(iVar13 + iVar6);
      lVar5 = (ulonglong)*puVar12 * (ulonglong)puVar12[2] +
              CONCAT44(puVar12[2] * puVar12[1] + *puVar12 * puVar12[3],puVar12[4]);
      *puVar12 = (uint)lVar5;
      puVar12[1] = puVar12[5] + (int)((ulonglong)lVar5 >> 0x20);
    }
  }
  return;
}



