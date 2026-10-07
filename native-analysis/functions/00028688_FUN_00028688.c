/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00028688 FUN_00028688 */

void FUN_00028688(undefined *param_1,float param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  char *pcVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  
  iVar15 = DAT_000288d8;
  if (param_2 == 0.0) goto LAB_00028782;
  iVar12 = *(int *)(DAT_000288b8 + 0x286a6);
  if (iVar12 == 1) {
    puVar11 = (undefined *)(DAT_000288d8 + 0x287a6);
    *(undefined *)(DAT_000288d8 + 0x287a9) = *(undefined *)(DAT_000288d8 + 0x287ad);
    *(undefined *)(iVar15 + 0x287a8) = *(undefined *)(iVar15 + 0x287ac);
    *(undefined *)(iVar15 + 0x287a7) = *(undefined *)(iVar15 + 0x287ab);
    *puVar11 = *(undefined *)(iVar15 + 0x287aa);
    goto LAB_00028782;
  }
  fVar16 = *(float *)(DAT_000288bc + 0x286f8) + param_2 * *(float *)(DAT_000288b8 + 0x286aa);
  fVar14 = (float)(longlong)iVar12;
  *(float *)(DAT_000288bc + 0x286f8) = fVar16;
  if (fVar16 != fVar14 && fVar16 < fVar14 == (NAN(fVar16) || NAN(fVar14))) {
    do {
      fVar16 = fVar16 - fVar14;
    } while (fVar16 != fVar14 && fVar16 < fVar14 == (NAN(fVar16) || NAN(fVar14)));
    *(float *)(DAT_000288c0 + 0x28728) = fVar16;
  }
  iVar15 = DAT_000288b0;
  if ((int)((uint)(fVar16 < 0.0) << 0x1f) < 0) {
    iVar10 = DAT_000288c4 + 0x286f6;
    if (*(int *)(DAT_000288c4 + 0x2873e) == 0) {
      fVar16 = *(float *)(DAT_000288c4 + 0x2873a);
      if ((int)((uint)(fVar16 < 0.0) << 0x1f) < 0) {
        do {
          fVar16 = fVar16 + fVar14;
        } while ((int)((uint)(fVar16 < 0.0) << 0x1f) < 0);
        iVar10 = DAT_000288c8 + 0x2871e;
        *(float *)(DAT_000288c8 + 0x28762) = fVar16;
      }
      goto LAB_0002872a;
    }
    *(undefined4 *)(DAT_000288c4 + 0x2873a) = DAT_000288ac;
  }
  else {
    iVar10 = DAT_000288cc + 0x28728;
    fVar16 = *(float *)(DAT_000288cc + 0x2876c);
LAB_0002872a:
    iVar9 = DAT_000288dc;
    iVar15 = (int)(fVar16 + DAT_000288a4);
    fVar14 = fVar16 - (float)(longlong)iVar15;
    if ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0) {
      if (fVar14 == DAT_000288a8 || fVar14 < DAT_000288a8 != (NAN(fVar14) || NAN(DAT_000288a8))) {
        iVar10 = 0;
      }
      if (fVar14 != DAT_000288a8 && fVar14 < DAT_000288a8 == (NAN(fVar14) || NAN(DAT_000288a8))) {
        iVar10 = 1;
      }
    }
    else {
      iVar1 = (uint)(fVar14 < DAT_000288b4) << 0x1f;
      if (-1 < iVar1) {
        iVar10 = 0;
      }
      if (iVar1 < 0) {
        iVar10 = 1;
      }
    }
    if (iVar10 == 0) {
      iVar15 = (int)fVar16;
      pcVar13 = (char *)(DAT_000288dc + 0x287c2);
      fVar16 = fVar16 - (float)(longlong)iVar15;
      __aeabi_idivmod(iVar15,iVar12);
      bVar6 = pcVar13[extraout_r1_00 * 4 + 4];
      bVar7 = pcVar13[extraout_r1_00 * 4 + 5];
      bVar8 = pcVar13[extraout_r1_00 * 4 + 6];
      bVar2 = pcVar13[extraout_r1_00 * 4 + 7];
      __aeabi_idivmod(iVar15 + 1,iVar12);
      bVar3 = pcVar13[extraout_r1_01 * 4 + 5];
      bVar4 = pcVar13[extraout_r1_01 * 4 + 4];
      bVar5 = pcVar13[extraout_r1_01 * 4 + 7];
      fVar14 = (float)(longlong)(int)(uint)bVar8 +
               (float)(longlong)(int)((uint)(byte)pcVar13[extraout_r1_01 * 4 + 6] - (uint)bVar8) *
               fVar16;
      *(char *)(iVar9 + 0x287c4) = (0.0 < fVar14) * (char)(int)fVar14;
      fVar14 = (float)(longlong)(int)(uint)bVar7 +
               (float)(longlong)(int)((uint)bVar3 - (uint)bVar7) * fVar16;
      *(char *)(iVar9 + 0x287c3) = (0.0 < fVar14) * (char)(int)fVar14;
      fVar14 = (float)(longlong)(int)(uint)bVar6 +
               (float)(longlong)(int)((uint)bVar4 - (uint)bVar6) * fVar16;
      *pcVar13 = (0.0 < fVar14) * (char)(int)fVar14;
      fVar14 = (float)(longlong)(int)(uint)bVar2 +
               (float)(longlong)(int)((uint)bVar5 - (uint)bVar2) * fVar16;
      *(char *)(iVar9 + 0x287c5) = (0.0 < fVar14) * (char)(int)fVar14;
      goto LAB_00028782;
    }
  }
  __aeabi_idivmod(iVar15,iVar12);
  iVar15 = DAT_000288d0;
  puVar11 = (undefined *)(DAT_000288d0 + 0x28770);
  *(undefined *)(DAT_000288d0 + 0x28773) = puVar11[extraout_r1 * 4 + 7];
  *(undefined *)(iVar15 + 0x28772) = puVar11[extraout_r1 * 4 + 6];
  *(undefined *)(iVar15 + 0x28771) = puVar11[extraout_r1 * 4 + 5];
  *puVar11 = puVar11[extraout_r1 * 4 + 4];
LAB_00028782:
  iVar15 = DAT_000288d4;
  if (param_1 != (undefined *)0x0) {
    puVar11 = (undefined *)(DAT_000288d4 + 0x2878a);
    param_1[3] = *(undefined *)(DAT_000288d4 + 0x2878d);
    param_1[2] = *(undefined *)(iVar15 + 0x2878c);
    param_1[1] = *(undefined *)(iVar15 + 0x2878b);
    *param_1 = *puVar11;
  }
  return;
}



