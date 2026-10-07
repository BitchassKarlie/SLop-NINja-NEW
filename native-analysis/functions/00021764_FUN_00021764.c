/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00021764 FUN_00021764 */

int FUN_00021764(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = DAT_00021a48;
  fVar5 = DAT_00021a44;
  cVar1 = *(char *)(param_1 + 0xb4);
  if (cVar1 == '\0') {
LAB_000217c6:
    fVar7 = *(float *)(param_1 + 0xa0);
joined_r0x00021b76:
    if ((int)((uint)(fVar7 < 0.0) << 0x1f) < 0) {
      fVar6 = *(float *)(param_1 + 0x14);
      if ((fVar6 != DAT_00021a50 && fVar6 < DAT_00021a50 == (NAN(fVar6) || NAN(DAT_00021a50))) &&
         (cVar1 != '\0')) {
        *(float *)(param_1 + 0x14) = DAT_00021a44;
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        fVar6 = fVar5;
      }
      fVar5 = *(float *)(param_1 + 0xbc);
      if ((fVar5 != DAT_00021a50 && fVar5 < DAT_00021a50 == (NAN(fVar5) || NAN(DAT_00021a50))) &&
         (cVar1 != '\0')) {
        *(float *)(param_1 + 0xbc) = DAT_00021a44;
        *(undefined4 *)(param_1 + 200) = DAT_00021a48;
      }
      fVar8 = *(float *)(param_1 + 0x2c) * DAT_00021a54;
      fVar5 = -(fVar8 + DAT_00021a4c);
      if ((fVar5 < fVar6) || (-1 < (int)((uint)(*(float *)(param_1 + 0x20) < 0.0) << 0x1f))) {
        bVar2 = false;
      }
      else {
        if (((*(float *)(param_1 + 0x6c) <= 0.0) &&
            (fVar5 < *(float *)(param_1 + 0xbc) == (NAN(fVar5) || NAN(*(float *)(param_1 + 0xbc)))))
           && ((int)((uint)(*(float *)(param_1 + 200) < 0.0) << 0x1f) < 0)) goto LAB_00021b42;
        bVar2 = true;
      }
      if (cVar1 != '\0') {
        fVar8 = fVar8 + DAT_00021a50;
        fVar6 = *(float *)(param_1 + 0x10);
        fVar5 = -fVar8;
        if (((fVar6 <= fVar5) || (fVar6 < fVar8 == (NAN(fVar6) || NAN(fVar8)))) &&
           ((fVar6 = *(float *)(param_1 + 0xb8), fVar5 < fVar6 == (NAN(fVar5) || NAN(fVar6)) ||
            (fVar8 <= fVar6)))) goto LAB_00021b42;
      }
    }
    else {
      bVar2 = false;
    }
    uVar3 = DAT_00021a30;
    fVar5 = DAT_00021a2c;
    if (fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7)) {
      fVar7 = *(float *)(param_1 + 0x14);
      if (((int)((uint)(fVar7 < DAT_00021a28) << 0x1f) < 0) && (cVar1 != '\0')) {
        *(float *)(param_1 + 0x14) = DAT_00021a2c;
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        fVar7 = fVar5;
      }
      if (((int)((uint)(*(float *)(param_1 + 0xbc) < DAT_00021a28) << 0x1f) < 0) && (cVar1 != '\0'))
      {
        *(float *)(param_1 + 0xbc) = DAT_00021a2c;
        *(undefined4 *)(param_1 + 200) = DAT_00021a30;
      }
      fVar6 = *(float *)(param_1 + 0x2c) * DAT_00021a54;
      fVar5 = fVar6 + DAT_00021a4c;
      if ((fVar7 < fVar5 == (NAN(fVar7) || NAN(fVar5))) &&
         (fVar7 = *(float *)(param_1 + 0x20), fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7))) {
        bVar2 = true;
LAB_0002185c:
        if (((*(float *)(param_1 + 0x6c) <= 0.0) && (fVar5 <= *(float *)(param_1 + 0xbc))) &&
           (fVar5 = *(float *)(param_1 + 200), fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)))
        goto LAB_00021b42;
      }
      else if (bVar2) goto LAB_0002185c;
      if (cVar1 != '\0') {
        fVar6 = fVar6 + DAT_00021a50;
        fVar7 = *(float *)(param_1 + 0x10);
        fVar5 = -fVar6;
        if (((fVar7 <= fVar5) || (fVar7 < fVar6 == (NAN(fVar7) || NAN(fVar6)))) &&
           ((fVar7 = *(float *)(param_1 + 0xb8), fVar5 < fVar7 == (NAN(fVar5) || NAN(fVar7)) ||
            (fVar6 <= fVar7)))) goto LAB_00021b42;
      }
    }
    uVar3 = DAT_00021a48;
    fVar5 = DAT_00021a38;
    fVar7 = *(float *)(param_1 + 0x9c);
    if ((int)((uint)(fVar7 < 0.0) << 0x1f) < 0) {
      if (cVar1 == '\0') {
        fVar5 = -(DAT_00021a50 + *(float *)(param_1 + 0x2c) * DAT_00021a54);
        if (*(float *)(param_1 + 0x10) <= fVar5) goto LAB_00021942;
LAB_00021baa:
        if (!bVar2) goto LAB_00021972;
      }
      else {
        fVar6 = *(float *)(param_1 + 0x10);
        if (fVar6 != DAT_00021a34 && fVar6 < DAT_00021a34 == (NAN(fVar6) || NAN(DAT_00021a34))) {
          *(float *)(param_1 + 0x10) = DAT_00021a38;
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
          fVar6 = fVar5;
        }
        fVar5 = *(float *)(param_1 + 0xb8);
        if (fVar5 != DAT_00021a34 && fVar5 < DAT_00021a34 == (NAN(fVar5) || NAN(DAT_00021a34))) {
          *(float *)(param_1 + 0xb8) = DAT_00021a38;
          *(undefined4 *)(param_1 + 0xc4) = DAT_00021a48;
        }
        fVar5 = -(DAT_00021a50 + *(float *)(param_1 + 0x2c) * DAT_00021a54);
        if (fVar5 < fVar6) goto LAB_00021baa;
LAB_00021942:
        if (-1 < (int)((uint)(*(float *)(param_1 + 0x1c) < 0.0) << 0x1f)) goto LAB_00021baa;
        bVar2 = true;
      }
      if (((*(float *)(param_1 + 0x6c) <= 0.0) &&
          (fVar5 < *(float *)(param_1 + 0xb8) == (NAN(fVar5) || NAN(*(float *)(param_1 + 0xb8)))))
         && ((int)((uint)(*(float *)(param_1 + 0xc4) < 0.0) << 0x1f) < 0)) goto LAB_00021b42;
    }
LAB_00021972:
    fVar5 = DAT_00021a40;
    uVar3 = DAT_00021a30;
    if (fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7)) {
      if (cVar1 == '\0') {
        fVar7 = *(float *)(param_1 + 0x10);
      }
      else {
        fVar7 = *(float *)(param_1 + 0x10);
        if ((int)((uint)(*(float *)(param_1 + 0x10) < DAT_00021a3c) << 0x1f) < 0) {
          *(float *)(param_1 + 0x10) = DAT_00021a40;
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
          fVar7 = fVar5;
        }
        if ((int)((uint)(*(float *)(param_1 + 0xb8) < DAT_00021a3c) << 0x1f) < 0) {
          *(float *)(param_1 + 0xb8) = DAT_00021a40;
          *(undefined4 *)(param_1 + 0xc4) = DAT_00021a30;
        }
      }
      fVar5 = DAT_00021a50 + *(float *)(param_1 + 0x2c) * DAT_00021a54;
      if ((((fVar7 < fVar5 == (NAN(fVar7) || NAN(fVar5))) &&
           (fVar7 = *(float *)(param_1 + 0x1c), fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7))) ||
          (bVar2)) && ((*(float *)(param_1 + 0x6c) <= 0.0 && (fVar5 <= *(float *)(param_1 + 0xb8))))
         ) {
        fVar5 = *(float *)(param_1 + 0xc4);
        if (fVar5 == 0.0 || fVar5 < 0.0 != NAN(fVar5)) {
          param_1 = 0;
        }
        if (fVar5 == 0.0 || fVar5 < 0.0 != NAN(fVar5)) {
          return param_1;
        }
        return 1;
      }
    }
    iVar4 = 0;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x9c);
    if ((int)((uint)(fVar7 < 0.0) << 0x1f) < 0) {
      fVar7 = -fVar7;
    }
    if (fVar7 == 0.0 || fVar7 < 0.0 != NAN(fVar7)) goto LAB_000217c6;
    fVar8 = DAT_00021a4c + *(float *)(param_1 + 0x2c) * DAT_00021a54;
    fVar6 = *(float *)(param_1 + 0x14);
    fVar7 = -fVar8;
    if ((fVar7 < fVar6) && (fVar6 < fVar8 != (NAN(fVar6) || NAN(fVar8)))) {
      fVar7 = *(float *)(param_1 + 0xa0);
      goto joined_r0x00021b76;
    }
    fVar6 = *(float *)(param_1 + 0xbc);
    if ((fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6))) && (fVar6 < fVar8)) goto LAB_000217c6;
LAB_00021b42:
    iVar4 = 1;
  }
  return iVar4;
}



