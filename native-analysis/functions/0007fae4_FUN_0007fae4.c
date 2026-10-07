/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007fae4 FUN_0007fae4 */

void FUN_0007fae4(int param_1,float **param_2,int *param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  float *pfVar20;
  int iVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  char cVar27;
  float *pfVar28;
  float *pfVar29;
  float fVar30;
  float *pfVar31;
  float fVar32;
  float *pfVar33;
  float fVar34;
  float *pfVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float *pfVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 *local_e0;
  uint local_d8;
  
  iVar18 = DAT_0007fea0 + 0x7faf6;
  uVar1 = *(ushort *)(param_3 + 1);
  if (uVar1 == 0) {
    return;
  }
  param_3[2] = param_3[2] + 1;
  pfVar20 = *param_2;
  iVar12 = (uint)uVar1 * 0x8c;
  iVar21 = *param_3;
  puVar22 = (undefined4 *)(iVar21 + iVar12);
  *(undefined2 *)(param_3 + 1) = *(undefined2 *)(puVar22 + 0x10);
  puVar22[0x10] = (uint)*(ushort *)(pfVar20 + 1);
  *(ushort *)(pfVar20 + 1) = uVar1;
  puVar22[0xe] = *pfVar20;
  puVar22[0xf] = *pfVar20 - *pfVar20 * *(float *)(param_1 + 0x24);
  if (*(char *)((int)pfVar20 + 0x39) == '\0') {
    uVar13 = *(undefined4 *)(param_1 + 0xc);
    uVar16 = *(undefined4 *)(param_1 + 0x10);
    *puVar22 = *(undefined4 *)(param_1 + 8);
    puVar22[1] = uVar13;
    puVar22[2] = uVar16;
  }
  else {
    uVar13 = *(undefined4 *)(DAT_0007fea4 + 0x7fb4e);
    uVar16 = *(undefined4 *)(DAT_0007fea4 + 0x7fb52);
    *puVar22 = *(undefined4 *)(DAT_0007fea4 + 0x7fb4a);
    puVar22[1] = uVar13;
    puVar22[2] = uVar16;
  }
  iVar8 = DAT_0007fea8;
  puVar22[0x22] = param_1;
  fVar32 = DAT_0007feac;
  fVar40 = pfVar20[8];
  fVar36 = pfVar20[0xc];
  fVar30 = pfVar20[0xb];
  fVar34 = pfVar20[0xd];
  fVar41 = pfVar20[9];
  puVar19 = *(uint **)(iVar18 + iVar8);
  fVar37 = pfVar20[10];
  lVar6 = (ulonglong)*puVar19 * (ulonglong)puVar19[2] +
          CONCAT44(puVar19[2] * puVar19[1] + *puVar19 * puVar19[3],puVar19[4]);
  uVar14 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
  *puVar19 = (uint)lVar6;
  puVar19[1] = uVar14;
  fVar32 = (float)(ulonglong)((uVar14 >> 0xd) - (uint)(uVar14 * 0x80000 < uVar14)) / fVar32;
  fVar38 = pfVar20[9];
  fVar42 = pfVar20[10];
  puVar22[6] = pfVar20[8] + (fVar30 - fVar40) * fVar32;
  puVar22[7] = fVar38 + (fVar36 - fVar41) * fVar32;
  puVar22[8] = fVar42 + (fVar34 - fVar37) * fVar32;
  iVar11 = FUN_0002f5ec();
  if ((iVar11 != 0) && (*(char *)(param_1 + 0x44) == '\0')) {
    fVar36 = (float)puVar22[7];
    fVar30 = (float)puVar22[6];
    puVar22[6] = fVar36;
    puVar22[7] = fVar30;
    fVar34 = *(float *)(iVar21 + iVar12);
    bVar2 = (byte)(((uint)(fVar34 == 0.0) << 0x1e) >> 0x18);
    cVar27 = -((char)((byte)(((uint)(fVar34 < 0.0) << 0x1f) >> 0x18) | bVar2) >> 7);
    fVar32 = DAT_0007fe94;
    if (((bool)(bVar2 >> 6) || (bool)cVar27 != NAN(fVar34)) &&
       (fVar32 = DAT_00080554, cVar27 != '\0')) {
      fVar32 = DAT_00080558;
    }
    fVar32 = fVar32 * fVar36;
    puVar22[6] = fVar32;
    fVar34 = *(float *)(param_1 + 0x34);
    puVar22[6] = fVar32 * fVar34;
    puVar22[7] = fVar34 * fVar30;
    puVar22[8] = (float)puVar22[8] * fVar34;
  }
  pfVar33 = param_2[3];
  pfVar28 = param_2[6];
  puVar19 = *(uint **)(iVar18 + iVar8);
  uVar26 = puVar19[3];
  uVar17 = puVar19[2];
  uVar7 = (ulonglong)*puVar19 * (ulonglong)uVar17 +
          CONCAT44(uVar17 * puVar19[1] + *puVar19 * uVar26,puVar19[4]);
  uVar14 = puVar19[5] + (int)(uVar7 >> 0x20);
  *puVar19 = (uint)uVar7;
  puVar19[1] = uVar14;
  uVar7 = (ulonglong)uVar17 * (uVar7 & 0xffffffff) +
          CONCAT44(uVar17 * uVar14 + (uint)uVar7 * uVar26,puVar19[4]);
  pfVar35 = param_2[4];
  pfVar29 = param_2[7];
  uVar15 = puVar19[5] + (int)(uVar7 >> 0x20);
  *puVar19 = (uint)uVar7;
  puVar19[1] = uVar15;
  fVar30 = DAT_0007feac;
  pfVar39 = param_2[5];
  pfVar31 = param_2[8];
  lVar6 = (ulonglong)uVar17 * (uVar7 & 0xffffffff) +
          CONCAT44(uVar17 * uVar15 + (uint)uVar7 * uVar26,puVar19[4]);
  uVar17 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
  *puVar19 = (uint)lVar6;
  puVar19[1] = uVar17;
  fVar32 = DAT_0007fe98;
  fVar40 = *(float *)(param_1 + 0x34);
  fVar37 = fVar40 * ((float)pfVar33 +
                    ((float)pfVar28 - (float)pfVar33) *
                    ((float)(ulonglong)((uVar14 >> 0xd) - (uint)(uVar14 * 0x80000 < uVar14)) /
                    fVar30));
  fVar38 = fVar40 * ((float)pfVar35 +
                    ((float)pfVar29 - (float)pfVar35) *
                    ((float)(ulonglong)((uVar15 >> 0xd) - (uint)(uVar15 * 0x80000 < uVar15)) /
                    fVar30));
  fVar34 = *(float *)(param_1 + 0x2c);
  fVar36 = *(float *)(param_1 + 0x30);
  puVar22[5] = fVar40 * ((float)pfVar39 +
                        ((float)pfVar31 - (float)pfVar39) *
                        ((float)(ulonglong)((uVar17 >> 0xd) - (uint)(uVar17 * 0x80000 < uVar17)) /
                        fVar30)) * DAT_0007fe98;
  puVar22[3] = (fVar36 * fVar38 + fVar34 * fVar37) * fVar32;
  puVar22[4] = (fVar34 * fVar38 - fVar36 * fVar37) * fVar32;
  fVar34 = pfVar20[0x17];
  fVar32 = pfVar20[0x18];
  lVar6 = (ulonglong)*puVar19 * (ulonglong)puVar19[2];
  local_d8 = (uint)lVar6;
  uVar14 = puVar19[5] +
           puVar19[2] * puVar19[1] + *puVar19 * puVar19[3] + (int)((ulonglong)lVar6 >> 0x20) +
           (uint)CARRY4(puVar19[4],local_d8);
  *puVar19 = puVar19[4] + local_d8;
  puVar19[1] = uVar14;
  *(short *)(puVar22 + 0x11) =
       (short)(int)(((float)(longlong)(int)fVar34 +
                    ((float)(longlong)(int)fVar32 - (float)(longlong)(int)fVar34) *
                    ((float)(ulonglong)((uVar14 >> 0xd) - (uint)(uVar14 * 0x80000 < uVar14)) /
                    fVar30)) * DAT_0007fe9c);
  if (*(char *)(pfVar20 + 0xe) == '\x01') {
    fVar34 = *pfVar20;
    fVar32 = (float)puVar22[4];
    fVar30 = (float)puVar22[5];
    *(float *)(iVar21 + iVar12) = *(float *)(iVar21 + iVar12) - fVar34 * (float)puVar22[3];
    puVar22[1] = (float)puVar22[1] - fVar34 * fVar32;
    puVar22[2] = (float)puVar22[2] - fVar34 * fVar30;
  }
  bVar2 = *(byte *)((int)pfVar20 + 0x3a);
  bVar3 = *(byte *)((int)pfVar20 + 0x3b);
  uVar14 = lrand48();
  bVar4 = *(byte *)((int)pfVar20 + 0x3d);
  bVar5 = *(byte *)(pfVar20 + 0xf);
  uVar15 = lrand48();
  fVar34 = (float)(longlong)
                  ((int)((uint)bVar2 * 0x1000 +
                        ((int)(((uint)bVar3 * 0x1000 + (uint)bVar2 * -0x1000) * (uVar14 & 0xfff)) >>
                        0xc)) >> 0xc);
  bVar2 = *(byte *)((int)pfVar20 + 0x3f);
  bVar3 = *(byte *)((int)pfVar20 + 0x3e);
  uVar14 = lrand48();
  fVar32 = DAT_0007feac;
  fVar30 = fVar34 * *(float *)(param_1 + 0x28);
  fVar36 = (float)(longlong)
                  ((int)((uint)bVar5 * 0x1000 +
                        ((int)(((uint)bVar4 * 0x1000 + (uint)bVar5 * -0x1000) * (uVar15 & 0xfff)) >>
                        0xc)) >> 0xc);
  *(ushort *)(puVar22 + 0x1a) = (ushort)(0.0 < fVar30) * (short)(int)fVar30;
  *(short *)((int)puVar22 + 0x6a) = (short)(int)((fVar36 - fVar34) * *(float *)(param_1 + 0x28));
  *(short *)(puVar22 + 0x1b) =
       (short)(int)(((float)(longlong)
                            ((int)((uint)bVar3 * 0x1000 +
                                  ((int)(((uint)bVar2 * 0x1000 + (uint)bVar3 * -0x1000) *
                                        (uVar14 & 0xfff)) >> 0xc)) >> 0xc) - fVar36) *
                   *(float *)(param_1 + 0x28));
  puVar19 = *(uint **)(iVar18 + iVar8);
  iVar12 = 0;
  local_e0 = puVar22;
  do {
    uVar26 = iVar12 << 3;
    uVar14 = 0xff << (uVar26 & 0xff);
    uVar15 = (uVar14 & (uint)pfVar20[0x19]) >> (uVar26 & 0xff);
    fVar30 = pfVar20[0x1a];
    uVar17 = puVar19[2];
    uVar7 = (ulonglong)*puVar19 * (ulonglong)uVar17 +
            CONCAT44(uVar17 * puVar19[1] + *puVar19 * puVar19[3],puVar19[4]);
    uVar23 = puVar19[5] + (int)(uVar7 >> 0x20);
    *puVar19 = (uint)uVar7;
    puVar19[1] = uVar23;
    iVar11 = (int)((float)(longlong)(int)uVar15 +
                  (float)(longlong)(int)(((uVar14 & (uint)fVar30) >> (uVar26 & 0xff)) - uVar15) *
                  ((float)(ulonglong)((uVar23 >> 0xd) - (uint)(uVar23 * 0x80000 < uVar23)) / fVar32)
                  );
    uVar24 = (uVar14 & (uint)pfVar20[0x1b]) >> (uVar26 & 0xff);
    fVar30 = pfVar20[0x1c];
    uVar7 = (ulonglong)uVar17 * (uVar7 & 0xffffffff) +
            CONCAT44(uVar17 * uVar23 + (uint)uVar7 * puVar19[3],puVar19[4]);
    uVar23 = puVar19[5] + (int)(uVar7 >> 0x20);
    *puVar19 = (uint)uVar7;
    puVar19[1] = uVar23;
    uVar25 = (uVar14 & (uint)pfVar20[0x1d]) >> (uVar26 & 0xff);
    fVar34 = pfVar20[0x1e];
    lVar6 = (ulonglong)uVar17 * (uVar7 & 0xffffffff) +
            CONCAT44(uVar17 * uVar23 + (uint)uVar7 * puVar19[3],puVar19[4]);
    uVar15 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
    *puVar19 = (uint)lVar6;
    puVar19[1] = uVar15;
    iVar21 = iVar12 + 1;
    *(char *)((int)puVar22 + iVar12 + 0x24) = (char)iVar11;
    sVar9 = (short)(int)((float)(longlong)(int)uVar24 +
                        (float)(longlong)
                               (int)(((uVar14 & (uint)fVar30) >> (uVar26 & 0xff)) - uVar24) *
                        ((float)(ulonglong)((uVar23 >> 0xd) - (uint)(uVar23 * 0x80000 < uVar23)) /
                        fVar32));
    *(short *)(local_e0 + 10) = sVar9 - (short)iVar11;
    *(short *)(local_e0 + 0xc) =
         (short)(int)((float)(longlong)(int)uVar25 +
                     (float)(longlong)(int)(((uVar14 & (uint)fVar34) >> (uVar26 & 0xff)) - uVar25) *
                     ((float)(ulonglong)((uVar15 >> 0xd) - (uint)(uVar15 * 0x80000 < uVar15)) /
                     fVar32)) - sVar9;
    local_e0 = (undefined4 *)((int)local_e0 + 2);
    iVar12 = iVar21;
  } while (iVar21 != 4);
  if (*(char *)(pfVar20 + 0xe) == '\x02') {
    sVar9 = *(short *)(puVar22 + 0x11);
    sVar10 = FUN_00092918(puVar22[3],puVar22[4]);
    *(short *)(puVar22 + 0x11) = sVar10 + sVar9;
  }
  fVar32 = DAT_0007feac;
  puVar19 = *(uint **)(iVar18 + iVar8);
  lVar6 = (ulonglong)*puVar19 * (ulonglong)puVar19[2] +
          CONCAT44(puVar19[2] * puVar19[1] + *puVar19 * puVar19[3],puVar19[4]);
  uVar14 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
  *puVar19 = (uint)lVar6;
  puVar19[1] = uVar14;
  fVar30 = (float)(ulonglong)((uVar14 >> 0xd) - (uint)(uVar14 * 0x80000 < uVar14)) / fVar32;
  puVar22[0x12] =
       (float)(longlong)(int)*(short *)(pfVar20 + 0x14) +
       ((float)(longlong)(int)*(short *)((int)pfVar20 + 0x52) -
       (float)(longlong)(int)*(short *)(pfVar20 + 0x14)) * fVar30;
  puVar22[0x13] =
       (float)(longlong)(int)*(short *)(pfVar20 + 0x15) +
       ((float)(longlong)(int)*(short *)((int)pfVar20 + 0x56) -
       (float)(longlong)(int)*(short *)(pfVar20 + 0x15)) * fVar30;
  lVar6 = (ulonglong)*puVar19 * (ulonglong)puVar19[2] +
          CONCAT44(puVar19[2] * puVar19[1] + *puVar19 * puVar19[3],puVar19[4]);
  uVar14 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
  *puVar19 = (uint)lVar6;
  puVar19[1] = uVar14;
  sVar9 = *(short *)(pfVar20 + 0x10);
  fVar32 = (float)(ulonglong)((uVar14 >> 0xd) - (uint)(uVar14 * 0x80000 < uVar14)) / fVar32;
  fVar30 = (float)(longlong)(int)sVar9 +
           ((float)(longlong)(int)*(short *)((int)pfVar20 + 0x42) - (float)(longlong)(int)sVar9) *
           fVar32;
  puVar22[0x15] = fVar30;
  fVar32 = (float)(longlong)(int)*(short *)(pfVar20 + 0x11) +
           ((float)(longlong)(int)*(short *)((int)pfVar20 + 0x46) -
           (float)(longlong)(int)*(short *)(pfVar20 + 0x11)) * fVar32;
  puVar22[0x16] = fVar32;
  if (fVar32 == 0.0) {
    if (fVar30 == 0.0) {
      sVar9 = 0;
    }
    if (fVar30 != 0.0) goto LAB_000804b8;
    *(short *)(puVar22 + 0x14) = sVar9;
  }
  else {
LAB_000804b8:
    puVar19 = *(uint **)(iVar18 + iVar8);
    lVar6 = (ulonglong)*puVar19 * (ulonglong)puVar19[2] +
            CONCAT44(puVar19[2] * puVar19[1] + *puVar19 * puVar19[3],puVar19[4]);
    uVar14 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
    *puVar19 = (uint)lVar6;
    puVar19[1] = uVar14;
    *(short *)(puVar22 + 0x14) = (short)uVar14;
  }
  fVar32 = DAT_0008054c;
  puVar19 = *(uint **)(iVar18 + iVar8);
  lVar6 = (ulonglong)*puVar19 * (ulonglong)puVar19[2] +
          CONCAT44(puVar19[2] * puVar19[1] + *puVar19 * puVar19[3],puVar19[4]);
  uVar14 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
  *puVar19 = (uint)lVar6;
  puVar19[1] = uVar14;
  sVar9 = *(short *)(pfVar20 + 0x12);
  fVar32 = (float)(ulonglong)((uVar14 >> 0xd) - (uint)(uVar14 * 0x80000 < uVar14)) / fVar32;
  fVar30 = (float)(longlong)(int)sVar9 +
           ((float)(longlong)(int)*(short *)((int)pfVar20 + 0x4a) - (float)(longlong)(int)sVar9) *
           fVar32;
  puVar22[0x18] = fVar30;
  fVar32 = (float)(longlong)(int)*(short *)(pfVar20 + 0x13) +
           ((float)(longlong)(int)*(short *)((int)pfVar20 + 0x4e) -
           (float)(longlong)(int)*(short *)(pfVar20 + 0x13)) * fVar32;
  puVar22[0x19] = fVar32;
  if (fVar32 == 0.0) {
    if (fVar30 == 0.0) {
      sVar9 = 0;
    }
    if (fVar30 == 0.0) {
      *(short *)(puVar22 + 0x17) = sVar9;
      sVar9 = *(short *)(puVar22 + 0x11);
      fVar32 = DAT_00080554;
      fVar30 = DAT_0008055c;
      goto joined_r0x0008038c;
    }
  }
  puVar19 = *(uint **)(iVar18 + iVar8);
  lVar6 = (ulonglong)*puVar19 * (ulonglong)puVar19[2] +
          CONCAT44(puVar19[2] * puVar19[1] + *puVar19 * puVar19[3],puVar19[4]);
  uVar14 = puVar19[5] + (int)((ulonglong)lVar6 >> 0x20);
  *puVar19 = (uint)lVar6;
  puVar19[1] = uVar14;
  sVar9 = *(short *)(puVar22 + 0x11);
  *(short *)(puVar22 + 0x17) = (short)uVar14;
  fVar32 = DAT_00080554;
  fVar30 = DAT_0008055c;
joined_r0x0008038c:
  DAT_00080554 = fVar32;
  DAT_0008055c = fVar30;
  if (sVar9 == 0) {
    puVar22[0x20] = DAT_00080550;
    fVar30 = DAT_00080558;
    puVar22[0x21] = DAT_00080558;
    puVar22[0x1c] = fVar30;
    puVar22[0x1d] = fVar32;
    puVar22[0x1e] = fVar32;
    puVar22[0x1f] = fVar30;
  }
  else {
    uVar13 = FUN_000927b8(sVar9 + 0x4000);
    uVar16 = FUN_000927c8(*(short *)(puVar22 + 0x11) + 0x4000);
    puVar22[0x1c] = uVar13;
    puVar22[0x1d] = uVar16;
    uVar13 = FUN_000927b8(*(undefined2 *)(puVar22 + 0x11));
    uVar16 = FUN_000927c8(*(undefined2 *)(puVar22 + 0x11));
    puVar22[0x1e] = uVar13;
    puVar22[0x1f] = uVar16;
    uVar14 = *(ushort *)(puVar22 + 0x11) + 0xdff2;
    uVar15 = uVar14 + (uVar14 / 0xfff0) * 0x10 & 0xffff;
    fVar32 = (float)FUN_000927b8(uVar15,uVar14 * -0x7ff7ff7f);
    puVar22[0x20] = fVar32 * fVar30;
    fVar32 = (float)FUN_000927c8(uVar15);
    puVar22[0x21] = fVar32 * fVar30;
  }
  return;
}



