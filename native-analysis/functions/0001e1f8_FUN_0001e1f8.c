/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001e1f8 FUN_0001e1f8 */

void FUN_0001e1f8(int param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_60;
  undefined4 local_5c;
  uint local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar9 = DAT_0001e53c;
  iVar2 = DAT_0001e538;
  uVar6 = DAT_0001e52c;
  uVar3 = DAT_0001e514;
  iVar11 = DAT_0001e534 + 0x1e20e;
  local_34 = **(int **)(iVar11 + DAT_0001e538);
  param_2 = param_2 * *(float *)(param_1 + 0xa8);
  fVar17 = param_2 / DAT_0001e50c;
  if (*(char *)(param_1 + 0x68) == '\0') {
    fVar15 = *(float *)(param_1 + 0xa4);
    if (fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15)) {
      fVar12 = *(float *)(*(int *)(iVar11 + DAT_0001e53c) + 0x14);
      if ((fVar12 != 0.0 && fVar12 < 0.0 == NAN(fVar12)) ||
         (*(char *)(*(int *)(iVar11 + DAT_0001e53c) + 8) != '\0')) {
        *(undefined4 *)(param_1 + 0xa4) = DAT_0001e514;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        uVar6 = DAT_0001e530;
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
        *(undefined4 *)(param_1 + 0x20) = uVar6;
        *(undefined4 *)(param_1 + 0x24) = uVar3;
        fVar15 = *(float *)(param_1 + 0xa4);
      }
      iVar8 = *(int *)(iVar11 + iVar9);
      fVar12 = fVar15;
      if (*(char *)(iVar8 + 2) == '\0') {
        fVar12 = fVar15 - *(float *)(iVar8 + 0x3c);
        *(float *)(param_1 + 0xa4) = fVar12;
      }
      iVar8 = DAT_0001e544;
      if (((fVar12 <= DAT_0001e548) &&
          (fVar15 != DAT_0001e548 && fVar15 < DAT_0001e548 == (NAN(fVar15) || NAN(DAT_0001e548))))
         && (*(char *)((int)&DAT_0001eb64 + DAT_0001e544) == '\0')) {
        iVar9 = *(int *)(iVar11 + iVar9);
        uVar10 = (uint)*(byte *)(iVar9 + 8);
        if (uVar10 == 0) {
          puVar5 = (undefined4 *)FUN_000a5f28();
          (**(code **)*puVar5)(puVar5,DAT_0001e804 + 0x1e716);
          uVar3 = *(undefined4 *)(iVar9 + 0x18c);
          local_60 = DAT_0001e808 + 0x1e730;
          local_38 = 1;
          local_5c = *(undefined4 *)(iVar11 + DAT_0001e80c);
          local_58[0] = uVar10;
          (**(code **)(DAT_0001e808 + 0x1e738))(&local_60,local_58);
          FUN_00073a7c(uVar3,DAT_0001e810 + 0x1e752,0x3f800000,local_58);
          FUN_0001d388(local_58);
          local_60 = DAT_0001e814;
          *(undefined *)((int)&DAT_0001eb64 + iVar8) = 1;
          local_60 = local_60 + 0x1e76e;
          fVar12 = *(float *)(param_1 + 0xa4);
        }
      }
      if (0.0 < fVar12) goto LAB_0001e4f4;
      iVar9 = FUN_00086780();
      fVar15 = *(float *)(iVar9 + 0x68);
      iVar9 = (int)fVar15;
      if ((int)((uint)((float)(longlong)iVar9 + DAT_0001e518 < fVar15) << 0x1f) < 0) {
        iVar8 = FUN_00086780();
        fVar15 = (fVar15 - (float)(longlong)iVar9) * DAT_0001e7f4;
        lVar1 = (ulonglong)*(uint *)(iVar8 + 8) * (ulonglong)*(uint *)(iVar8 + 0x10) +
                CONCAT44(*(uint *)(iVar8 + 0x10) * *(int *)(iVar8 + 0xc) +
                         *(uint *)(iVar8 + 8) * *(int *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x18)
                        );
        uVar10 = *(int *)(iVar8 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
        *(int *)(iVar8 + 8) = (int)lVar1;
        *(uint *)(iVar8 + 0xc) = uVar10;
        fVar12 = (float)((ulonglong)uVar10 * 100 >> 0x20);
        if (fVar15 != fVar12 && fVar15 < fVar12 == (NAN(fVar15) || NAN(fVar12))) {
          iVar9 = iVar9 + 1;
        }
      }
      uVar6 = DAT_0001e7fc;
      uVar3 = DAT_0001e7f8;
      if (iVar9 < 1) {
        *(undefined4 *)(param_1 + 0xa4) = DAT_0001e7f8;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        uVar6 = DAT_0001e800;
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
        *(undefined4 *)(param_1 + 0x20) = uVar6;
        *(undefined4 *)(param_1 + 0x24) = uVar3;
      }
      else if (iVar9 != 1) {
        uVar3 = FUN_00086780();
        FUN_00086eb0(uVar3,iVar9 + -1,0,0);
      }
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
LAB_0001e46c:
      fVar13 = *(float *)(param_1 + 0x1c);
      fVar14 = *(float *)(param_1 + 0x20);
      fVar12 = *(float *)(param_1 + 0x24);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x90);
      fVar15 = *(float *)(param_1 + 0x8c);
      fVar14 = *(float *)(param_1 + 0x20) + param_2 * fVar16;
      fVar13 = *(float *)(param_1 + 0x1c) + param_2 * fVar15;
      *(float *)(param_1 + 0x20) = fVar14;
      fVar12 = *(float *)(param_1 + 0x24) + param_2 * *(float *)(param_1 + 0x94);
      *(float *)(param_1 + 0x1c) = fVar13;
      *(float *)(param_1 + 0x24) = fVar12;
      if ((((((int)((uint)(fVar16 < 0.0) << 0x1f) < 0) && ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0))
           || ((fVar16 != 0.0 && fVar16 < 0.0 == NAN(fVar16) &&
               (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14))))) ||
          (((int)((uint)(fVar15 < 0.0) << 0x1f) < 0 && ((int)((uint)(fVar13 < 0.0) << 0x1f) < 0))))
         || ((fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15) &&
             (fVar13 != 0.0 && fVar13 < 0.0 == NAN(fVar13))))) {
        fVar15 = (float)FUN_0001a178(param_1 + 0x8c);
        fVar15 = fVar15 + fVar17 * DAT_0001e548 + fVar17 * DAT_0001e548;
        *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) * fVar15;
        *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) * fVar15;
        *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) * fVar15;
        goto LAB_0001e46c;
      }
    }
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar17 * fVar13;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar17 * fVar14;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar17 * fVar12;
    if (param_2 != 0.0 && param_2 < 0.0 == NAN(param_2)) {
      *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x70) + *(short *)(param_1 + 0x74);
      *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x72) + *(short *)(param_1 + 0x76);
    }
    fVar17 = DAT_0001e51c;
    uVar3 = DAT_0001e514;
    iVar9 = *(int *)(param_1 + 0x38);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar9 + 8) = uVar6;
    *(undefined4 *)(iVar9 + 0xc) = uVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc) = uVar3;
    fVar15 = *(float *)(param_1 + 0x14);
    if (fVar17 < fVar15) goto LAB_0001e296;
  }
  else {
    if (*(char *)(param_1 + 0x88) == '\0') {
      fVar17 = *(float *)(param_1 + 0x3c) - *(float *)(*(int *)(iVar11 + DAT_0001e53c) + 0x3c);
      *(float *)(param_1 + 0x3c) = fVar17;
      if ((int)((uint)(fVar17 < 0.0) << 0x1f) < 0) {
        uVar3 = FUN_0001c940();
        piVar4 = (int *)FUN_0001ca28(uVar3,4,1);
        iVar9 = *(int *)(param_1 + 0x14);
        iVar8 = *(int *)(param_1 + 0x18);
        piVar4[4] = *(int *)(param_1 + 0x10);
        piVar4[5] = iVar9;
        piVar4[6] = iVar8;
        (**(code **)(*piVar4 + 8))(piVar4,0,0,0);
        *(undefined4 *)(param_1 + 0x3c) = DAT_0001e54c;
      }
    }
    else {
      if (*(char *)(param_1 + 0x80) == '\0') {
LAB_0001e5dc:
        fVar14 = *(float *)(param_1 + 0x1c);
        fVar16 = *(float *)(param_1 + 0x20);
        fVar12 = *(float *)(param_1 + 0x24);
      }
      else {
        fVar13 = *(float *)(param_1 + 0x90);
        fVar15 = *(float *)(param_1 + 0x8c);
        fVar16 = *(float *)(param_1 + 0x20) + param_2 * fVar13;
        fVar14 = *(float *)(param_1 + 0x1c) + param_2 * fVar15;
        *(float *)(param_1 + 0x20) = fVar16;
        fVar12 = *(float *)(param_1 + 0x24) + param_2 * *(float *)(param_1 + 0x94);
        *(float *)(param_1 + 0x1c) = fVar14;
        *(float *)(param_1 + 0x24) = fVar12;
        if (((((int)((uint)(fVar13 < 0.0) << 0x1f) < 0) && ((int)((uint)(fVar16 < 0.0) << 0x1f) < 0)
             ) || ((fVar13 != 0.0 && fVar13 < 0.0 == NAN(fVar13) &&
                   (fVar16 != 0.0 && fVar16 < 0.0 == NAN(fVar16))))) ||
           ((((int)((uint)(fVar15 < 0.0) << 0x1f) < 0 && ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0))
            || ((fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15) &&
                (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14))))))) {
          fVar15 = (float)FUN_0001a178(param_1 + 0x8c);
          fVar15 = fVar15 + fVar17 * DAT_0001e548 + fVar17 * DAT_0001e548;
          *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) * fVar15;
          *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) * fVar15;
          *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) * fVar15;
          goto LAB_0001e5dc;
        }
      }
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar17 * fVar14;
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar17 * fVar16;
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar17 * fVar12;
      if (param_2 != 0.0 && param_2 < 0.0 == NAN(param_2)) {
        *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x70) + *(short *)(param_1 + 0x74);
        *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x72) + *(short *)(param_1 + 0x76);
      }
    }
    fVar12 = DAT_0001e51c;
    fVar17 = DAT_0001e518;
    uVar6 = DAT_0001e514;
    uVar3 = DAT_0001e510;
    iVar9 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(iVar9 + 4) = DAT_0001e510;
    *(undefined4 *)(iVar9 + 8) = uVar3;
    *(undefined4 *)(iVar9 + 0xc) = uVar6;
    *(float *)(*(int *)(param_1 + 0x38) + 0x14) = fVar17;
    fVar15 = *(float *)(param_1 + 0x14);
    if (fVar12 < fVar15) {
LAB_0001e296:
      if (((fVar15 < DAT_0001e520 != (NAN(fVar15) || NAN(DAT_0001e520))) &&
          (fVar17 = *(float *)(param_1 + 0x10), DAT_0001e524 < fVar17)) &&
         (fVar17 < DAT_0001e528 != (NAN(fVar17) || NAN(DAT_0001e528)))) {
        if (*(int *)(param_1 + 0x7c) == 0) {
          uVar3 = FUN_0007e454();
          iVar9 = FUN_0007da40(uVar3,*(undefined4 *)
                                      (DAT_0001e540 + *(int *)(param_1 + 100) * 4 + 0x1eaca),0);
          *(int *)(param_1 + 0x7c) = iVar9;
          if (iVar9 != 0) {
            uVar3 = *(undefined4 *)(param_1 + 0x14);
            uVar6 = *(undefined4 *)(param_1 + 0x18);
            *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(param_1 + 0x10);
            *(undefined4 *)(iVar9 + 0xc) = uVar3;
            *(undefined4 *)(iVar9 + 0x10) = uVar6;
          }
        }
        goto LAB_0001e4f4;
      }
    }
  }
  FUN_0001e0c0(param_1);
LAB_0001e4f4:
  if (local_34 != **(int **)(iVar11 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



