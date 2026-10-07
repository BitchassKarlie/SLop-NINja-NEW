/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00032044 FUN_00032044 */

void FUN_00032044(float param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar5 = DAT_00032350;
  iVar8 = DAT_00032348;
  param_1 = param_1 * DAT_0003232c;
  iVar9 = DAT_0003234c + 0x32062;
  fVar14 = *(float *)(DAT_00032348 + 0x3214c);
  if (*(char *)(DAT_00032348 + 0x32150) == '\0') {
    fVar11 = *(float *)(*(int *)(iVar9 + DAT_00032350) + 0x10);
    if (fVar11 < 0.0 == NAN(fVar11)) {
      if ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0) {
        uVar6 = FUN_0001c940();
        iVar7 = FUN_0001bb84(uVar6,0);
        if (iVar7 != 0) {
          uVar6 = FUN_0001c940();
          iVar7 = FUN_0001bb84(uVar6,1);
          if (iVar7 != 0) {
            if (*(char *)(iVar8 + 0x32150) != '\0') goto LAB_0003206e;
            goto LAB_00032082;
          }
        }
      }
      *(undefined *)(DAT_00032374 + 0x3226c) = 1;
      goto LAB_0003206e;
    }
  }
  else {
LAB_0003206e:
    fVar11 = *(float *)(DAT_00032354 + 0x32084);
    if ((fVar11 != 0.0 && fVar11 < 0.0 == NAN(fVar11)) &&
       (*(float *)(DAT_00032354 + 0x32084) = fVar11 - param_1, fVar11 - param_1 <= 0.0)) {
      FUN_000308ac();
    }
  }
LAB_00032082:
  iVar8 = DAT_00032368;
  if (*(int *)(*(int *)(iVar9 + iVar5) + 4) == 2) {
    if (*(char *)(DAT_00032368 + 0x321f1) == '\0') {
      fVar11 = *(float *)(*(int *)(iVar9 + iVar5) + 0x10);
      if (fVar11 < 0.0 != NAN(fVar11)) goto LAB_00032096;
      if ((int)((uint)(*(float *)(DAT_00032368 + 0x321ec) < 0.0) << 0x1f) < 0) {
        uVar6 = FUN_0001c940();
        iVar7 = FUN_0001bb84(uVar6,0);
        if (iVar7 != 0) {
          uVar6 = FUN_0001c940();
          iVar7 = FUN_0001bb84(uVar6,1);
          if (iVar7 != 0) {
            cVar10 = *(char *)(iVar8 + 0x321f1);
            goto joined_r0x00032326;
          }
        }
      }
      *(undefined *)(DAT_0003236c + 0x3221b) = 1;
    }
LAB_00032128:
    fVar11 = *(float *)(DAT_00032370 + 0x32142);
    if ((fVar11 != 0.0 && fVar11 < 0.0 == NAN(fVar11)) &&
       (*(float *)(DAT_00032370 + 0x32142) = fVar11 - param_1, fVar11 - param_1 <= 0.0)) {
      FUN_000307d0();
    }
  }
  else {
    cVar10 = *(char *)(DAT_00032358 + 0x32185);
joined_r0x00032326:
    if (cVar10 != '\0') goto LAB_00032128;
  }
LAB_00032096:
  iVar7 = DAT_00032384;
  iVar8 = DAT_0003235c;
  if (*(char *)(*(int *)(iVar9 + iVar5) + 0x49) == '\0') {
    fVar11 = *(float *)(DAT_00032378 + 0x32272);
    bVar4 = (byte)(((uint)(fVar11 == 0.0) << 0x1e) >> 0x18);
    cVar10 = -((char)((byte)(((uint)(fVar11 < 0.0) << 0x1f) >> 0x18) | bVar4) >> 7);
    if ((bool)(bVar4 >> 6) || (bool)cVar10 != NAN(fVar11)) {
      if (cVar10 != '\0') {
        fVar13 = param_1 + fVar11;
        if (-1 < (int)((uint)(param_1 + fVar11 < 0.0) << 0x1f)) {
          fVar13 = DAT_00032334;
        }
        *(float *)(DAT_00032378 + 0x32272) = fVar13;
      }
    }
    else {
      fVar11 = fVar11 - param_1;
      if (fVar11 == 0.0 || fVar11 < 0.0 != NAN(fVar11)) {
        fVar11 = DAT_00032334;
      }
      *(float *)(DAT_00032378 + 0x32272) = fVar11;
    }
LAB_000321a8:
    iVar8 = DAT_0003237c + 0x321ae;
    if (*(int *)(DAT_0003237c + 0x322a6) == 0) {
      return;
    }
  }
  else {
    if (-1 < (int)((uint)(*(float *)(*(int *)(iVar9 + iVar5) + 0x10) < 0.0) << 0x1f)) {
      fVar11 = *(float *)(DAT_00032384 + 0x32306);
      if ((int)((uint)(fVar11 < 0.0) << 0x1f) < 0) {
        uVar6 = FUN_0001c940();
        iVar8 = FUN_0001bb84(uVar6,0);
        if (iVar8 != 0) {
          fVar11 = *(float *)(iVar7 + 0x32306) + param_1 * DAT_00032340;
          if (-1 < (int)((uint)(fVar11 < DAT_00032344) << 0x1f)) {
            fVar11 = DAT_00032344;
          }
          *(float *)(iVar7 + 0x32306) = fVar11;
          goto LAB_000321a8;
        }
        fVar11 = *(float *)(iVar7 + 0x32306);
      }
      iVar8 = DAT_00032388;
      fVar12 = **(float **)(*(int *)(iVar9 + iVar5) + 0x18c) * DAT_0003233c;
      fVar13 = param_1 + fVar11;
      if (-1 < (int)((uint)(param_1 + fVar11 < fVar12) << 0x1f)) {
        fVar13 = fVar12;
      }
      *(float *)(DAT_00032388 + 0x3232a) = fVar13;
      if (fVar13 != 0.0 && fVar13 < 0.0 == NAN(fVar13)) {
        if (*(int *)((int)&DAT_00032330 + iVar8 + 2) == 1) goto LAB_000321b6;
        *(undefined4 *)((int)&DAT_00032330 + iVar8 + 2) = 1;
        uVar6 = FUN_000a5f28();
        FUN_000a6038(uVar6,DAT_0003238c + 0x32270);
      }
      goto LAB_000321a8;
    }
    param_1 = *(float *)(DAT_0003235c + 0x321a6) - param_1;
    bVar1 = param_1 < DAT_00032330;
    bVar2 = param_1 == DAT_00032330;
    bVar3 = NAN(DAT_00032330);
    if (bVar2 || bVar1 != (NAN(param_1) || bVar3)) {
      *(float *)(DAT_0003235c + 0x321a6) = DAT_00032330;
    }
    if ((!bVar2 && bVar1 == (NAN(param_1) || bVar3)) &&
       (*(float *)(iVar8 + 0x321a6) = param_1, -1 < (int)((uint)(param_1 < 0.0) << 0x1f)))
    goto LAB_000321a8;
    iVar8 = DAT_00032360 + 0x320d8;
    if (*(int *)(DAT_00032360 + 0x321d0) != -1) {
      *(undefined4 *)(DAT_00032360 + 0x321d0) = 0xffffffff;
      uVar6 = FUN_000a5f28();
      FUN_000a6038(uVar6,DAT_00032364 + 0x320f2);
      goto LAB_000321a8;
    }
  }
  fVar13 = *(float *)(iVar8 + 0xf0);
LAB_000321b6:
  if (fVar14 != fVar13) {
    uVar6 = FUN_000a5f28();
    fVar14 = *(float *)(DAT_00032380 + 0x322be);
    if ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0) {
      fVar14 = -fVar14;
    }
    FUN_000a60dc(uVar6,fVar14 * DAT_00032338);
  }
  return;
}



