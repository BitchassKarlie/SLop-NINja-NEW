/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00054574 FUN_00054574 */

void FUN_00054574(int param_1,undefined4 *param_2,int **param_3,undefined4 param_4,float *param_5,
                 int **param_6)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int **ppiVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  float *pfVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar4 = DAT_00054988;
  iVar16 = DAT_00054984 + 0x54586;
  local_2c = **(int **)(iVar16 + DAT_00054988);
  *(undefined *)(param_1 + 0x10d) = 1;
  *(undefined *)(param_1 + 0x10c) = 0;
  uVar8 = param_2[1];
  uVar10 = param_2[2];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = uVar10;
  *(undefined4 *)(param_1 + 0x78) = param_4;
  ppiVar5 = param_3;
  if (*(char *)(param_3 + 8) != '\0') {
    ppiVar5 = (int **)*param_3;
  }
  if (ppiVar5 != (int **)0x0) {
    (**(code **)((int)*ppiVar5 + 8))(ppiVar5,param_1 + 0x7c);
  }
  if (*(char *)(param_6 + 8) != '\0') {
    param_6 = (int **)*param_6;
  }
  if (param_6 != (int **)0x0) {
    (**(code **)((int)*param_6 + 8))(param_6,param_1 + 0xa0);
  }
  *(undefined *)(param_1 + 0x26) = 0;
  *(undefined *)(param_1 + 0x124) = 0;
  *(undefined *)(param_1 + 0x10f) = 1;
  iVar12 = DAT_0005498c;
  uVar8 = DAT_00054954;
  fVar19 = DAT_00054950;
  fVar17 = *param_5;
  fVar18 = param_5[1];
  pfVar15 = (float *)(DAT_0005498c + 0x54610);
  if ((int)((uint)(fVar17 < 0.0) << 0x1f) < 0) {
    fVar17 = -fVar17;
  }
  if ((int)((uint)(fVar18 < 0.0) << 0x1f) < 0) {
    fVar18 = -fVar18;
  }
  fVar17 = fVar17 + fVar18;
  bVar2 = fVar17 != DAT_00054950;
  bVar1 = fVar17 < DAT_00054950 == (NAN(fVar17) || NAN(DAT_00054950));
  *(bool *)(param_1 + 0x11c) = bVar2 && bVar1;
  uVar10 = *(undefined4 *)(iVar12 + 0x54614);
  uVar11 = *(undefined4 *)(iVar12 + 0x54618);
  *(float *)(param_1 + 0x14) = *pfVar15;
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  *(undefined4 *)(param_1 + 0x1c) = uVar11;
  pfVar6 = (float *)(param_1 + 0x110);
  fVar17 = param_5[1];
  fVar18 = param_5[2];
  *pfVar6 = *param_5;
  *(float *)(param_1 + 0x114) = fVar17;
  *(float *)(param_1 + 0x118) = fVar18;
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  fVar17 = param_5[1];
  fVar18 = param_5[2];
  *(float *)(param_1 + 0xf4) = *param_5;
  *(float *)(param_1 + 0xf8) = fVar17;
  *(float *)(param_1 + 0xfc) = fVar18;
  *(float *)(param_1 + 0xe8) = fVar19;
  *(undefined *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined *)(param_1 + 0xcb) = 0;
  *(undefined4 *)(param_1 + 0x128) = uVar8;
  fVar17 = DAT_00054958;
  *(undefined *)(param_1 + 0x10e) = 1;
  *(float *)(param_1 + 0xec) = fVar17;
  *(float *)(param_1 + 0xf0) = fVar17;
  *(undefined *)(param_1 + 0x11d) = 1;
  uVar8 = DAT_0005495c;
  *(float *)(param_1 + 0x144) = fVar19;
  *(undefined4 *)(param_1 + 0x13c) = uVar8;
  *(undefined4 *)(param_1 + 0x138) = uVar8;
  *(float *)(param_1 + 0x20) = fVar19;
  *(undefined4 *)(param_1 + 0x140) = DAT_00054960;
  if (*(int *)(param_1 + 0x78) < 0) {
    if (bVar2 && bVar1) goto LAB_0005499e;
    iVar12 = (**(code **)(**(int **)(param_1 + 0x68) + 0x14))();
    *(float *)(param_1 + 0x110) = (float)(ulonglong)(iVar12 + 1);
    iVar12 = (**(code **)(**(int **)(param_1 + 0x68) + 0x18))();
    *(float *)(param_1 + 0x114) = (float)(ulonglong)(iVar12 + 1);
    *(float *)(param_1 + 0x14) = *pfVar6;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x118);
  }
  else {
    puVar14 = *(uint **)(iVar16 + DAT_00054990);
    lVar3 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
            CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
    uVar9 = puVar14[5] + (int)((ulonglong)lVar3 >> 0x20);
    *puVar14 = (uint)lVar3;
    puVar14[1] = uVar9;
    *(bool *)(param_1 + 0xe4) = CARRY4(uVar9,uVar9);
    lVar3 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
            CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
    uVar9 = puVar14[5] + (int)((ulonglong)lVar3 >> 0x20);
    *puVar14 = (uint)lVar3;
    puVar14[1] = uVar9;
    lVar3 = (ulonglong)uVar9 * 0x28;
    uVar9 = (int)((ulonglong)lVar3 >> 0x20) - 0x14;
    *(float *)(param_1 + 0xdc) = (float)(ulonglong)uVar9;
    uVar8 = FUN_0001c940(uVar9,0x28,(int)lVar3);
    iVar13 = DAT_00054994;
    iVar7 = FUN_0001ca28(uVar8,**(int **)(iVar16 + DAT_00054994) <= *(int *)(param_1 + 0x78),1);
    *(int *)(param_1 + 0x74) = iVar7;
    uVar8 = param_2[1];
    uVar10 = param_2[2];
    *(undefined4 *)(iVar7 + 0x10) = *param_2;
    *(undefined4 *)(iVar7 + 0x14) = uVar8;
    *(undefined4 *)(iVar7 + 0x18) = uVar10;
    iVar7 = *(int *)(param_1 + 0x74);
    uVar8 = *(undefined4 *)(iVar12 + 0x54614);
    uVar10 = *(undefined4 *)(iVar12 + 0x54618);
    *(float *)(iVar7 + 0x1c) = *pfVar15;
    *(undefined4 *)(iVar7 + 0x20) = uVar8;
    *(undefined4 *)(iVar7 + 0x24) = uVar10;
    (**(code **)(**(int **)(param_1 + 0x74) + 8))
              (*(int **)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0x78),0);
    *(undefined4 *)(param_1 + 0x28) = 2;
    lVar3 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
            CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
    uVar9 = puVar14[5] + (int)((ulonglong)lVar3 >> 0x20);
    *puVar14 = (uint)lVar3;
    puVar14[1] = uVar9;
    *(float *)(param_1 + 0xe8) =
         DAT_00054968 +
         ((float)(ulonglong)((uVar9 >> 0xd) - (uint)(uVar9 * 0x80000 < uVar9)) / DAT_00054964) *
         DAT_0005496c;
    lVar3 = (ulonglong)*puVar14 * (ulonglong)puVar14[2] +
            CONCAT44(puVar14[2] * puVar14[1] + *puVar14 * puVar14[3],puVar14[4]);
    uVar9 = puVar14[5] + (int)((ulonglong)lVar3 >> 0x20);
    *puVar14 = (uint)lVar3;
    puVar14[1] = uVar9;
    if (CARRY4(uVar9,uVar9) == false) {
      *(float *)(param_1 + 0xe8) = -*(float *)(param_1 + 0xe8);
    }
    fVar19 = DAT_00054970;
    iVar12 = *(int *)(param_1 + 0x78);
    if (iVar12 < **(int **)(iVar16 + iVar13)) {
      iVar13 = *(int *)(param_1 + 0x74);
      *(float *)(iVar13 + 0xf0) = *(float *)(iVar13 + 0xf0) * DAT_00054970;
      *(float *)(iVar13 + 0xf4) = *(float *)(iVar13 + 0xf4) * fVar19;
      *(float *)(iVar13 + 0xf8) = *(float *)(iVar13 + 0xf8) * fVar19;
      fVar19 = *(float *)(*(int *)(param_1 + 0x74) + 0xf0);
      iVar13 = (uint)(fVar19 < 0.0) << 0x1f;
      if (-1 < iVar13) {
        iVar12 = 0;
      }
      if (iVar13 < 0) {
        iVar12 = 1;
      }
      if (iVar12 == 0) {
        fVar17 = DAT_00054974;
        if (fVar19 == DAT_00054974 || fVar19 < DAT_00054974 != (NAN(fVar19) || NAN(DAT_00054974)))
        goto LAB_00054a00;
LAB_00054882:
        fVar17 = fVar19;
        if (iVar12 == 0) goto LAB_00054b1c;
        fVar17 = -fVar19;
        fVar19 = DAT_00054958;
      }
      else {
        fVar18 = -fVar19;
        fVar17 = DAT_00054b48;
        if (fVar18 != DAT_00054b48 && fVar18 < DAT_00054b48 == (NAN(fVar18) || NAN(DAT_00054b48)))
        goto LAB_00054882;
LAB_00054a00:
        fVar19 = DAT_00054b4c;
        if (iVar12 == 0) {
LAB_00054b1c:
          fVar19 = DAT_00054b54;
        }
      }
      *(float *)(*(int *)(param_1 + 0x74) + 0xf0) = fVar17 * fVar19;
      fVar19 = *(float *)(*(int *)(param_1 + 0x74) + 0xf4);
      iVar13 = (uint)(fVar19 < 0.0) << 0x1f;
      if (-1 < iVar13) {
        iVar12 = 0;
      }
      if (iVar13 < 0) {
        iVar12 = 1;
      }
      fVar17 = fVar19;
      if (iVar12 != 0) {
        fVar17 = -fVar19;
      }
      if (fVar17 == DAT_00054978 || fVar17 < DAT_00054978 != (NAN(fVar17) || NAN(DAT_00054978))) {
        fVar17 = DAT_00054b4c;
        fVar19 = DAT_00054978;
        if (iVar12 == 0) goto LAB_00054b22;
      }
      else if (iVar12 == 0) {
LAB_00054b22:
        fVar17 = DAT_00054b54;
      }
      else {
        fVar17 = DAT_00054958;
        fVar19 = -fVar19;
      }
      *(float *)(*(int *)(param_1 + 0x74) + 0xf4) = fVar19 * fVar17;
      uVar8 = DAT_0005497c;
      iVar12 = *(int *)(param_1 + 0x74);
      *(undefined4 *)(iVar12 + 0xfc) = *(undefined4 *)(iVar12 + 0xf0);
      *(undefined4 *)(iVar12 + 0x100) = *(undefined4 *)(iVar12 + 0xf4);
      *(undefined4 *)(iVar12 + 0x104) = *(undefined4 *)(iVar12 + 0xf8);
      *(undefined *)(*(int *)(param_1 + 0x74) + 0x7c) = 0;
      *(int *)(*(int *)(param_1 + 0x74) + 0x108) = param_1;
      *(undefined *)(*(int *)(param_1 + 0x74) + 0x10c) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x98) = uVar8;
      if (*(char *)(param_1 + 0x11c) == '\0') {
        iVar12 = *(int *)(param_1 + 0x74);
        fVar19 = *(float *)(iVar12 + 0x2c) * DAT_00054980;
        fVar17 = *(float *)(iVar12 + 0x30) * DAT_00054980;
        *pfVar6 = *(float *)(iVar12 + 0x28) * DAT_00054980;
        *(float *)(param_1 + 0x114) = fVar19;
        *(float *)(param_1 + 0x118) = fVar17;
        uVar10 = *(undefined4 *)(param_1 + 0x74);
        goto LAB_0005499e;
      }
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0x74) + 0x80) = 0;
      uVar8 = *(undefined4 *)(param_1 + 0x74);
      local_50[0] = 0;
      local_30 = 1;
      if (*(char *)(param_3 + 8) != '\0') {
        param_3 = (int **)*param_3;
      }
      if (param_3 != (int **)0x0) {
        (**(code **)((int)*param_3 + 8))(param_3,local_50);
      }
      FUN_0001cc68(uVar8,local_50,param_1);
      FUN_0001d358(local_50);
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x6c) = DAT_00054b50;
      fVar19 = DAT_00054b40;
      iVar12 = *(int *)(param_1 + 0x74);
      *(float *)(iVar12 + 0x28) = *(float *)(iVar12 + 0x28) * DAT_00054b40;
      *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * fVar19;
      *(float *)(iVar12 + 0x30) = *(float *)(iVar12 + 0x30) * fVar19;
      if (*(char *)(param_1 + 0x11c) == '\0') {
        fVar18 = *(float *)(*(int *)(iVar16 + DAT_00054b5c) + 0x8c);
        fVar19 = *(float *)(DAT_00054b60 + 0x54aa2);
        fVar17 = *(float *)(DAT_00054b60 + 0x54aa6);
        *pfVar6 = (*(float *)(DAT_00054b60 + 0x54a9e) + *(float *)(DAT_00054b60 + 0x54a9e)) * fVar18
        ;
        *(float *)(param_1 + 0x114) = (fVar19 + fVar19) * fVar18;
        *(float *)(param_1 + 0x118) = (fVar17 + fVar17) * fVar18;
        uVar10 = *(undefined4 *)(param_1 + 0x74);
        goto LAB_0005499e;
      }
    }
  }
  uVar10 = *(undefined4 *)(param_1 + 0x74);
LAB_0005499e:
  iVar12 = DAT_00054b58;
  fVar19 = DAT_00054b40;
  *(undefined4 *)(param_1 + 0x120) = uVar10;
  uVar8 = *(undefined4 *)(iVar12 + 0x549b0);
  uVar10 = *(undefined4 *)(iVar12 + 0x549b4);
  *(float *)(param_1 + 0xf4) = *(float *)(iVar12 + 0x549ac);
  *(undefined4 *)(param_1 + 0xf8) = uVar8;
  *(undefined4 *)(param_1 + 0xfc) = uVar10;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  uVar8 = DAT_00054b44;
  *(float *)(param_1 + 300) = fVar19;
  *(float *)(param_1 + 0x130) = fVar19;
  *(undefined4 *)(param_1 + 0x134) = uVar8;
  if (local_2c != **(int **)(iVar16 + iVar4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



