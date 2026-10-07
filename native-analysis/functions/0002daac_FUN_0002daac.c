/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002daac FUN_0002daac */

void FUN_0002daac(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  float fVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined uVar14;
  float *pfVar15;
  byte *pbVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  
  iVar2 = DAT_0002dd30;
  iVar18 = DAT_0002dd2c + 0x2dac4;
  fVar23 = *(float *)(*(int *)(iVar18 + DAT_0002dd30) + 0x3c);
  iVar11 = *(int *)(param_1 + 0x70);
  fVar25 = *(float *)(param_1 + 0x38) + fVar23 * *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + fVar23 * *(float *)(param_1 + 0x60);
  fVar26 = *(float *)(param_1 + 0x40) + fVar23 * *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x38) = fVar25;
  *(float *)(param_1 + 0x40) = fVar26;
  iVar1 = DAT_0002e150;
  fVar24 = DAT_0002e148;
  fVar23 = DAT_0002dd18;
  if (iVar11 < 0) {
    if ((int)((uint)(fVar26 < DAT_0002dd44) << 0x1f) < 0) {
      puVar17 = *(uint **)(iVar18 + DAT_0002e150);
      uVar22 = puVar17[3];
      uVar12 = puVar17[2];
      uVar20 = puVar17[4];
      uVar21 = puVar17[5];
      lVar3 = (ulonglong)*puVar17 * (ulonglong)uVar12;
      uVar19 = (uint)lVar3;
      uVar5 = uVar19 + uVar20;
      uVar19 = (int)((ulonglong)lVar3 >> 0x20) + uVar12 * puVar17[1] + *puVar17 * uVar22 +
               uVar21 + CARRY4(uVar19,uVar20);
      if (uVar19 >> 0x1e == 0) {
        lVar3 = (ulonglong)uVar12 * (ulonglong)uVar5 +
                CONCAT44(uVar12 * uVar19 + uVar5 * uVar22,uVar20);
        uVar21 = uVar21 + (int)((ulonglong)lVar3 >> 0x20);
        *puVar17 = (uint)lVar3;
        puVar17[1] = uVar21;
        puVar9 = (uint *)(uint)CARRY4(uVar21,uVar21);
        if (puVar9 == (uint *)0x0) {
          uVar10 = 2;
        }
        else {
          uVar10 = 3;
        }
        lVar3 = CONCAT44(uVar10,uVar12);
      }
      else {
        uVar6 = (uint)((ulonglong)uVar12 * (ulonglong)uVar5);
        puVar9 = (uint *)((int)((ulonglong)uVar12 * (ulonglong)uVar5 >> 0x20) +
                         uVar12 * uVar19 + uVar5 * uVar22);
        uVar5 = (int)puVar9 + uVar21 + CARRY4(uVar20,uVar6);
        *puVar17 = uVar20 + uVar6;
        puVar17[1] = uVar5;
        lVar3 = (ulonglong)uVar5 * 6;
        if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
          lVar3 = CONCAT44(1,(int)lVar3);
        }
      }
      *(int *)(param_1 + 0x70) = (int)((ulonglong)lVar3 >> 0x20);
      puVar17 = (uint *)lVar3;
      if (*(char *)(param_1 + 0x18) != '\0') {
        puVar7 = *(uint **)(iVar18 + iVar1);
        uVar19 = puVar7[2];
        uVar20 = puVar7[4];
        lVar3 = (ulonglong)*puVar7 * (ulonglong)uVar19;
        uVar12 = (uint)lVar3;
        uVar5 = uVar12 + uVar20;
        uVar12 = (int)((ulonglong)lVar3 >> 0x20) + uVar19 * puVar7[1] + *puVar7 * puVar7[3] +
                 puVar7[5] + (uint)CARRY4(uVar12,uVar20);
        *puVar7 = uVar5;
        puVar7[1] = uVar12;
        puVar9 = puVar7;
        puVar17 = (uint *)(uVar12 * 2);
        if (CARRY4(uVar12,uVar12) == false) {
          lVar3 = (ulonglong)uVar19 * (ulonglong)uVar5 +
                  CONCAT44(uVar19 * uVar12 + uVar5 * puVar7[3],uVar20);
          uVar5 = puVar7[5] + (int)((ulonglong)lVar3 >> 0x20);
          *puVar7 = (uint)lVar3;
          puVar7[1] = uVar5;
          puVar9 = (uint *)(uint)CARRY4(uVar5,uVar5);
          if (puVar9 == (uint *)0x0) {
            uVar10 = 4;
          }
          else {
            uVar10 = 5;
          }
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          puVar17 = puVar7;
        }
      }
      if ((*(int *)(param_1 + 0x14) < **(int **)(iVar18 + DAT_0002e154)) &&
         (iVar11 = FUN_00021680(*(int *)(param_1 + 0x14),puVar9,puVar17),
         *(char *)(iVar11 + 0x2b8) != '\0')) {
        puVar17 = *(uint **)(iVar18 + iVar1);
        lVar3 = (ulonglong)*puVar17 * (ulonglong)puVar17[2] +
                CONCAT44(puVar17[2] * puVar17[1] + *puVar17 * puVar17[3],puVar17[4]);
        uVar5 = puVar17[5] + (int)((ulonglong)lVar3 >> 0x20);
        *puVar17 = (uint)lVar3;
        puVar17[1] = uVar5;
        if (CARRY4(uVar5,uVar5) == false) {
          uVar10 = 2;
        }
        else {
          uVar10 = 3;
        }
        *(undefined4 *)(param_1 + 0x70) = uVar10;
      }
      else {
        fVar24 = DAT_0002e178;
        fVar23 = DAT_0002e174;
        if (*(int *)(param_1 + 0x70) - 4U < 2) {
          uVar5 = FUN_00092918(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x5c));
          puVar17 = *(uint **)(iVar18 + iVar1);
          fVar25 = (float)(ulonglong)uVar5 / DAT_0002e17c;
          *(float *)(param_1 + 0x10) = fVar25;
          lVar3 = (ulonglong)*puVar17 * (ulonglong)puVar17[2] +
                  CONCAT44(puVar17[2] * puVar17[1] + *puVar17 * puVar17[3],puVar17[4]);
          uVar5 = puVar17[5] + (int)((ulonglong)lVar3 >> 0x20);
          *puVar17 = (uint)lVar3;
          puVar17[1] = uVar5;
          fVar25 = fVar25 + (((float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) /
                             DAT_0002e180) * DAT_0002e184 - DAT_0002e188);
          *(float *)(param_1 + 0x10) = fVar25;
          fVar26 = (float)FUN_000927c8((int)(fVar25 * fVar23) & 0xffff);
          fVar8 = (float)FUN_000927b8((int)(*(float *)(param_1 + 0x10) * fVar23) & 0xffff);
          fVar25 = DAT_0002e190;
          fVar8 = fVar8 * DAT_0002e18c;
          *(float *)(param_1 + 0x1c) = fVar26 * DAT_0002e18c;
          *(float *)(param_1 + 0x20) = fVar8;
          *(float *)(param_1 + 0x24) = fVar24;
          fVar26 = (float)FUN_000927c8((int)((*(float *)(param_1 + 0x10) + fVar25) * fVar23) &
                                       0xffff);
          fVar23 = (float)FUN_000927b8((int)((*(float *)(param_1 + 0x10) + fVar25) * fVar23) &
                                       0xffff);
          fVar23 = fVar23 * DAT_0002e194;
          *(float *)(param_1 + 0x28) = fVar26 * DAT_0002e194;
          *(float *)(param_1 + 0x2c) = fVar23;
          *(float *)(param_1 + 0x30) = fVar24;
        }
      }
      iVar11 = DAT_0002e158;
      *(float *)(param_1 + 0x40) = DAT_0002e128;
      iVar4 = DAT_0002e15c;
      fVar23 = DAT_0002e12c;
      uVar10 = *(undefined4 *)(iVar11 + 0x2de3e);
      uVar13 = *(undefined4 *)(iVar11 + 0x2de42);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar11 + 0x2de3a);
      *(undefined4 *)(param_1 + 0x60) = uVar10;
      *(undefined4 *)(param_1 + 100) = uVar13;
      fVar23 = *(float *)(DAT_0002e160 + *(int *)(param_1 + 0x70) * 4 + 0x2deb0) * fVar23;
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * fVar23;
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * fVar23;
      *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) * fVar23;
      if ((*(uint *)(iVar4 + 0x2e64a) & 1) == 0) {
        iVar11 = __cxa_guard_acquire(iVar4 + 0x2e64a);
        if (iVar11 != 0) {
          uVar10 = FUN_00022674(DAT_0002e170 + 0x2e118,0);
          *(undefined4 *)(iVar4 + 0x2e64e) = uVar10;
          __cxa_guard_release(iVar4 + 0x2e64a);
        }
      }
      if (*(int *)(param_1 + 0x14) == *(int *)(DAT_0002e164 + 0x2e69a)) {
        FUN_0002d8a4(0);
      }
      else {
        fVar23 = *(float *)(param_1 + 0x44);
        if (fVar23 == DAT_0002e130 || fVar23 < DAT_0002e130 != (NAN(fVar23) || NAN(DAT_0002e130))) {
          if (fVar23 == DAT_0002e134 || fVar23 < DAT_0002e134 != (NAN(fVar23) || NAN(DAT_0002e134)))
          {
            FUN_0002d8a4(1);
          }
          else {
            FUN_0002d8a4(2);
          }
        }
        else {
          FUN_0002d8a4(3);
        }
      }
      fVar23 = DAT_0002e180;
      puVar17 = *(uint **)(iVar18 + iVar1);
      lVar3 = (ulonglong)*puVar17 * (ulonglong)puVar17[2] +
              CONCAT44(puVar17[2] * puVar17[1] + *puVar17 * puVar17[3],puVar17[4]);
      uVar5 = puVar17[5] + (int)((ulonglong)lVar3 >> 0x20);
      *puVar17 = (uint)lVar3;
      puVar17[1] = uVar5;
      *(float *)(param_1 + 0x68) =
           DAT_0002e138 +
           ((float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) / fVar23) *
           DAT_0002e12c;
      lVar3 = (ulonglong)*puVar17 * (ulonglong)puVar17[2] +
              CONCAT44(puVar17[2] * puVar17[1] + *puVar17 * puVar17[3],puVar17[4]);
      uVar5 = puVar17[5] + (int)((ulonglong)lVar3 >> 0x20);
      *puVar17 = (uint)lVar3;
      puVar17[1] = uVar5;
      fVar24 = DAT_0002e194;
      *(float *)(param_1 + 0x6c) =
           DAT_0002e13c +
           ((float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) / fVar23) *
           DAT_0002e194;
      lVar3 = (ulonglong)*puVar17 * (ulonglong)puVar17[2] +
              CONCAT44(puVar17[2] * puVar17[1] + *puVar17 * puVar17[3],puVar17[4]);
      fVar23 = (float)(puVar17[5] + (int)((ulonglong)lVar3 >> 0x20));
      *puVar17 = (uint)lVar3;
      puVar17[1] = (uint)fVar23;
      if ((int)((ulonglong)(uint)fVar23 * 10 >> 0x20) == 0) {
        iVar1 = (uint)(*(float *)((int)&DAT_0002e7bc + DAT_0002e168 + 2) < DAT_0002e140) << 0x1f;
        if (iVar1 < 0) {
          fVar23 = fVar24;
        }
        if (iVar1 < 0) {
          *(float *)((int)&DAT_0002e7bc + DAT_0002e168 + 2) = fVar23;
        }
      }
    }
    if (*(char *)(param_1 + 0x74) != '\0') {
      fVar23 = *(float *)(*(int *)(iVar18 + iVar2) + 0x3c) * DAT_0002e144;
      if ((int)((uint)(*(float *)(param_1 + 0x38) < 0.0) << 0x1f) < 0) {
        fVar23 = -fVar23;
      }
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar23;
      return;
    }
    *(float *)(param_1 + 0x60) =
         *(float *)(param_1 + 0x60) + *(float *)(*(int *)(iVar18 + iVar2) + 0x3c) * DAT_0002e14c;
    return;
  }
  pfVar15 = (float *)(DAT_0002dd34 + 0x2e30a);
  param_2 = param_2 * *pfVar15;
  fVar26 = *(float *)(param_1 + 0x68);
  if (DAT_0002dd10 < fVar26) {
LAB_0002dbae:
    fVar24 = *(float *)(param_1 + 4);
    fVar23 = DAT_0002dd20;
    if (fVar24 == DAT_0002dd20 || fVar24 < DAT_0002dd20 != (NAN(fVar24) || NAN(DAT_0002dd20)))
    goto LAB_0002dcb0;
  }
  else {
    if (*(char *)(param_1 + 0x74) != '\0') {
      iVar1 = (uint)(fVar25 < 0.0) << 0x1f;
      pfVar15 = (float *)(DAT_0002dd38 + 0x2db36);
      fVar24 = param_2 * pfVar15[iVar11 + 0x1e];
      if (-1 < iVar1) {
        fVar25 = fVar24;
      }
      if (iVar1 < 0) {
        fVar25 = -fVar24;
      }
      fVar25 = *(float *)(param_1 + 0x5c) + fVar25;
      fVar8 = DAT_0002dd44;
      if ((DAT_0002dd44 < fVar25) &&
         (fVar8 = fVar25, fVar25 < DAT_0002dd14 == (NAN(fVar25) || NAN(DAT_0002dd14)))) {
        fVar8 = DAT_0002dd14;
      }
      fVar24 = fVar24 + *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x5c) = fVar8;
      if ((fVar23 < fVar24) &&
         (fVar23 = fVar24, fVar24 < DAT_0002dd1c == (NAN(fVar24) || NAN(DAT_0002dd1c)))) {
        fVar23 = DAT_0002dd1c;
      }
      *(float *)(param_1 + 0x44) = fVar23;
      goto LAB_0002dbae;
    }
    pfVar15 = (float *)(DAT_0002e16c + 0x2e01c);
    fVar23 = *(float *)(param_1 + 0x60) - param_2 * pfVar15[iVar11 + 0x1e];
    if ((int)((uint)(fVar23 < DAT_0002e128) << 0x1f) < 0) {
      fVar23 = DAT_0002e128;
    }
    fVar25 = *(float *)(param_1 + 0x48) - param_2 * pfVar15[iVar11 + 0x1e];
    *(float *)(param_1 + 0x60) = fVar23;
    fVar23 = DAT_0002e178;
    if ((int)((uint)(fVar25 < fVar24) << 0x1f) < 0) {
      fVar25 = fVar24;
    }
    *(float *)(param_1 + 0x48) = fVar25;
    fVar24 = *(float *)(param_1 + 4);
    if (fVar24 == fVar23 || fVar24 < fVar23 != (NAN(fVar24) || NAN(fVar23))) goto LAB_0002dcb0;
  }
  fVar24 = fVar24 - *(float *)(*(int *)(iVar18 + iVar2) + 0x3c);
  *(float *)(param_1 + 4) = fVar24;
  if (fVar24 <= fVar23) {
    *(float *)(param_1 + 4) = fVar23;
    fVar25 = DAT_0002e198;
  }
  else {
    fVar26 = fVar24 + fVar24;
    fVar25 = DAT_0002e198;
    if ((0.0 < fVar26) &&
       (fVar25 = fVar23, fVar26 < DAT_0002dd24 != (NAN(fVar26) || NAN(DAT_0002dd24)))) {
      fVar25 = DAT_0002dd24 + fVar24 * DAT_0002dd28;
    }
  }
  __aeabi_idivmod(*(undefined4 *)(param_1 + 0x14),**(undefined4 **)(iVar18 + DAT_0002dd3c));
  FUN_00021610(&local_3c);
  pbVar16 = *(byte **)(iVar18 + DAT_0002dd40);
  fVar23 = (float)(longlong)(int)(uint)pbVar16[2] +
           fVar25 * (float)(longlong)(int)((uint)local_3a - (uint)pbVar16[2]);
  *(char *)(param_1 + 10) = (0.0 < fVar23) * (char)(int)fVar23;
  fVar23 = (float)(longlong)(int)(uint)pbVar16[1] +
           fVar25 * (float)(longlong)(int)((uint)local_3b - (uint)pbVar16[1]);
  *(char *)(param_1 + 9) = (0.0 < fVar23) * (char)(int)fVar23;
  fVar23 = (float)(longlong)(int)(uint)*pbVar16 +
           fVar25 * (float)(longlong)(int)((uint)local_3c - (uint)*pbVar16);
  *(char *)(param_1 + 8) = (0.0 < fVar23) * (char)(int)fVar23;
  pfVar15 = (float *)(uint)pbVar16[3];
  *(float *)(param_1 + 0xc) =
       (float)(longlong)(int)pfVar15 +
       fVar25 * (float)(longlong)(int)((uint)local_39 - (int)pfVar15);
  fVar26 = *(float *)(param_1 + 0x68);
LAB_0002dcb0:
  uVar14 = SUB41(pfVar15,0);
  fVar26 = fVar26 - param_2 * *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x68) = fVar26;
  fVar23 = DAT_0002dd20;
  if (fVar26 <= DAT_0002dd20) {
    uVar14 = 0;
    *(float *)(param_1 + 0x68) = DAT_0002dd20;
    *(undefined *)(param_1 + 0x75) = 0;
    fVar26 = fVar23;
  }
  fVar23 = *(float *)(param_1 + 0xc);
  fVar26 = fVar23 * fVar26;
  iVar2 = (uint)(fVar23 < fVar26) << 0x1f;
  if (iVar2 < 0) {
    fVar23 = (float)((uint)(0.0 < fVar23) * (int)fVar23);
  }
  if (-1 < iVar2) {
    fVar26 = (float)((uint)(0.0 < fVar26) * (int)fVar26);
  }
  if (iVar2 < 0) {
    uVar14 = SUB41(fVar23,0);
  }
  if (-1 < iVar2) {
    uVar14 = SUB41(fVar26,0);
  }
  *(undefined *)(param_1 + 0xb) = uVar14;
  return;
}



