/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000971a4 FUN_000971a4 */

undefined4 FUN_000971a4(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = DAT_00097458;
  if (1 < *(int *)(param_1 + 0xac) - 1U) {
    param_2 = param_2 + *(float *)(param_1 + 0x10b0);
    bVar1 = param_2 < DAT_00097458;
    bVar2 = NAN(DAT_00097458);
    *(float *)(param_1 + 0x10b0) = param_2;
    if (bVar1 != (NAN(param_2) || bVar2)) {
      param_2 = param_2 * DAT_0009745c;
      *(float *)(param_1 + 0x70) =
           *(float *)(param_1 + 0x88) +
           param_2 * (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x88));
      *(float *)(param_1 + 0x74) =
           *(float *)(param_1 + 0x8c) +
           param_2 * (*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x8c));
      *(float *)(param_1 + 0x78) =
           *(float *)(param_1 + 0x90) +
           param_2 * (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x90));
      return 1;
    }
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x84);
    *(float *)(param_1 + 0x10b0) = fVar11;
    if (*(int *)(param_1 + 0xac) != 3) {
      *(undefined4 *)(param_1 + 0xac) = 1;
      return 1;
    }
    FUN_00017d64(param_1 + 4,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00017d64(param_1 + 8,0);
    FUN_00017d64(param_1 + 0xc,0);
    FUN_0002e348();
    FUN_000918a0();
    return 0;
  }
  if (*(int *)(param_1 + 0xac) == 1) {
    iVar5 = param_1 + 0x1080;
    *(undefined4 *)(param_1 + 0x10bc) = 0;
    if (*(float *)(param_1 + 0x10b8) == 0.0) {
      fVar11 = *(float *)(param_1 + 0x10b4);
      if (fVar11 < 0.0 == NAN(fVar11)) {
        fVar9 = *(float *)(param_1 + 0xa8);
        bVar4 = (byte)(((uint)(fVar9 == 0.0) << 0x1e) >> 0x18);
        cVar6 = -((char)((byte)(((uint)(fVar9 < 0.0) << 0x1f) >> 0x18) | bVar4) >> 7);
        if (cVar6 != '\0') {
          if (((bool)(bVar4 >> 6) || (bool)cVar6 != NAN(fVar9)) &&
             (fVar9 == DAT_00097460 || fVar9 < DAT_00097460 != (NAN(fVar9) || NAN(DAT_00097460)))) {
            *(float *)(param_1 + 0xa8) = fVar9 - fVar9 * DAT_00097464;
            return 1;
          }
          *(float *)(param_1 + 0xa8) = DAT_00097470;
          return 1;
        }
        fVar10 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x60);
        iVar3 = (uint)(fVar10 < 0.0) << 0x1f;
        if (-1 < iVar3) {
          iVar5 = 0;
        }
        if (iVar3 < 0) {
          iVar5 = 1;
        }
        fVar7 = fVar10;
        if (iVar5 != 0) {
          fVar7 = -fVar10;
        }
        fVar7 = fVar11 - fVar7;
        fVar8 = DAT_00097470;
        if (fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7)) {
          fVar7 = fVar10;
          if (iVar5 != 0) {
            fVar7 = -fVar10;
          }
          fVar8 = fVar11 - fVar7;
        }
        if ((int)((uint)(fVar8 < fVar9) << 0x1f) < 0) {
          fVar7 = fVar10;
          if (iVar5 != 0) {
            fVar7 = -fVar10;
          }
          fVar7 = fVar11 - fVar7;
          fVar8 = DAT_00097470;
          if (fVar7 != 0.0 && fVar7 < 0.0 == NAN(fVar7)) {
            if (iVar5 != 0) {
              fVar10 = -fVar10;
            }
            fVar8 = fVar11 - fVar10;
          }
          fVar11 = fVar8 - fVar9;
          if ((fVar11 == 0.0 || fVar11 < 0.0 != NAN(fVar11)) &&
             (fVar11 == DAT_00097460 || fVar11 < DAT_00097460 != (NAN(fVar11) || NAN(DAT_00097460)))
             ) {
            *(float *)(param_1 + 0xa8) = fVar9 + fVar11 * DAT_00097464;
            return 1;
          }
          *(float *)(param_1 + 0xa8) = fVar8;
          return 1;
        }
      }
    }
    else {
      fVar10 = *(float *)(param_1 + 0x10b8) + *(float *)(param_1 + 0xa8);
      fVar9 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x60);
      *(float *)(param_1 + 0xa8) = fVar10;
      bVar1 = (int)((uint)(fVar9 < 0.0) << 0x1f) < 0;
      fVar11 = fVar9;
      if (bVar1) {
        fVar11 = -fVar9;
      }
      if ((int)((uint)(fVar10 < -(fVar11 + (float)(ulonglong)*(uint *)(param_1 + 0x1c))) << 0x1f) <
          0) {
        if (bVar1) {
          fVar9 = -fVar9;
        }
        *(float *)(param_1 + 0xa8) = -(fVar9 + (float)(ulonglong)*(uint *)(param_1 + 0x1c));
      }
      else {
        fVar11 = *(float *)(param_1 + 0x10b4);
        if (fVar10 != fVar11 && fVar10 < fVar11 == (NAN(fVar10) || NAN(fVar11))) {
          *(float *)(param_1 + 0xa8) = fVar11;
        }
      }
      fVar11 = *(float *)(param_1 + 0x10b8) * DAT_00097468;
      *(float *)(param_1 + 0x10b8) = fVar11;
      if ((int)((uint)(fVar11 < 0.0) << 0x1f) < 0) {
        bVar1 = fVar11 < DAT_0009746c == (NAN(fVar11) || NAN(DAT_0009746c)) && bVar1;
        if (fVar11 < DAT_0009746c == (NAN(fVar11) || NAN(DAT_0009746c))) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = fVar11 <= DAT_00097458 || fVar11 <= DAT_00097458 && bVar1;
      }
      if (bVar1) {
        *(float *)(param_1 + 0x10b8) = DAT_00097470;
        return 1;
      }
    }
  }
  return 1;
}



