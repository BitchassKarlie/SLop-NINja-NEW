/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005eb10 FUN_0005eb10 */

void FUN_0005eb10(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_50;
  int local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  iVar4 = DAT_0005eeb0;
  iVar9 = DAT_0005eeac + 0x5eb22;
  local_24 = **(int **)(iVar9 + DAT_0005eeb0);
  if (*(int *)(param_1 + 0x7c) == 0) {
    if (*(char *)(*(int *)(iVar9 + DAT_0005eeb4) + 2) == '\0') {
      fVar11 = *(float *)(param_1 + 0x88);
      param_2 = fVar11 + param_2;
      fVar12 = param_2 / DAT_0005ee68;
      *(float *)(param_1 + 0x88) = param_2;
      fVar13 = DAT_0005ee88;
      fVar16 = DAT_0005ee70;
      fVar10 = DAT_0005ee6c;
      if ((0.0 < fVar12) &&
         (fVar10 = DAT_0005ee70, fVar12 < DAT_0005ee6c != (NAN(fVar12) || NAN(DAT_0005ee6c)))) {
        fVar10 = param_2 / DAT_0005ee98 + DAT_0005ee6c;
      }
      fVar10 = DAT_0005ee6c - fVar10 * fVar10;
      if (*(int *)(param_1 + 0x84) == 0) {
        fVar13 = fVar10 * DAT_0005ee70;
        fVar16 = fVar10 * DAT_0005ee74;
        bVar1 = fVar10 < DAT_0005ee78;
        bVar2 = fVar10 == DAT_0005ee78;
        bVar3 = NAN(DAT_0005ee78);
        *(float *)(param_1 + 8) = *(float *)(param_1 + 0x70) - fVar13;
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x74) - fVar16;
        *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x78) - fVar13;
        if (bVar2 || bVar1 != (NAN(fVar10) || bVar3)) goto LAB_0005eb34;
      }
      else {
        fVar15 = (param_2 - DAT_0005ee7c) * DAT_0005ee80;
        fVar12 = DAT_0005ee70;
        if ((0.0 < fVar15) &&
           (fVar12 = fVar15, fVar15 < DAT_0005ee6c == (NAN(fVar15) || NAN(DAT_0005ee6c)))) {
          fVar12 = DAT_0005ee6c;
        }
        fVar15 = fVar10 * DAT_0005ee70;
        fVar10 = fVar10 * DAT_0005ee74;
        fVar14 = fVar12 * fVar12 * DAT_0005ee70;
        *(float *)(param_1 + 8) =
             fVar15 + *(float *)(param_1 + 0x70) + fVar12 * fVar12 * DAT_0005ee84;
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x74) + fVar10 + fVar14;
        *(float *)(param_1 + 0x10) = fVar15 + *(float *)(param_1 + 0x78) + fVar14;
        fVar10 = *(float *)(param_1 + 0x88);
        if ((int)((uint)(fVar10 < fVar13) << 0x1f) < 0) {
          fVar13 = (fVar10 - DAT_0005ee68) / DAT_0005ee8c;
          if (fVar16 < fVar13) {
            if (fVar13 < DAT_0005ee6c == (NAN(fVar13) || NAN(DAT_0005ee6c))) {
              uVar5 = 0;
            }
            else {
              fVar16 = (fVar10 - DAT_0005ee68) / DAT_0005eea4 + DAT_0005ee6c;
              uVar5 = (uint)(0.0 < fVar16 * DAT_0005eea8) * (int)(fVar16 * DAT_0005eea8) & 0xffff;
            }
          }
          else {
            uVar5 = 0x3ffc;
            fVar16 = DAT_0005ee6c;
          }
          *(float *)(param_1 + 0x8c) = fVar16;
          uVar6 = FUN_000927b8(uVar5);
          *(undefined4 *)(param_1 + 0x8c) = uVar6;
        }
        else {
          if ((int)((uint)(fVar11 < fVar13) << 0x1f) < 0) {
            uVar6 = FUN_0007e454();
            uVar7 = FUN_0008f414(DAT_0005eec4 + 0x5edec);
            iVar8 = FUN_0007da40(uVar6,uVar7,0);
            if (iVar8 != 0) {
              fVar10 = *(float *)(param_1 + 0xc);
              fVar16 = *(float *)(DAT_0005eec8 + 0x5ee10) * DAT_0005eea0;
              fVar11 = *(float *)(param_1 + 0x10);
              fVar13 = *(float *)(DAT_0005eec8 + 0x5ee14) * DAT_0005eea0;
              *(float *)(iVar8 + 8) =
                   *(float *)(param_1 + 8) + *(float *)(DAT_0005eec8 + 0x5ee0c) * DAT_0005eea0;
              *(float *)(iVar8 + 0xc) = fVar10 + fVar16;
              *(float *)(iVar8 + 0x10) = fVar11 + fVar13;
            }
            fVar10 = *(float *)(param_1 + 0x88);
          }
          fVar16 = (fVar10 - DAT_0005ee88) / DAT_0005ee8c;
          if (0.0 < fVar16) {
            if (fVar16 < DAT_0005ee6c == (NAN(fVar16) || NAN(DAT_0005ee6c))) {
              uVar5 = 0x5056;
              fVar16 = DAT_0005ee6c;
            }
            else {
              uVar5 = (uint)(0.0 < fVar16 * DAT_0005ee9c) * (int)(fVar16 * DAT_0005ee9c) & 0xffff;
            }
          }
          else {
            uVar5 = 0;
            fVar16 = DAT_0005ee70;
          }
          *(float *)(param_1 + 0x8c) = fVar16;
          fVar16 = (float)FUN_000927b8(uVar5);
          fVar13 = (float)FUN_000927b8(0x5056);
          *(float *)(param_1 + 0x8c) = (fVar16 / fVar13) * DAT_0005ee94;
        }
        fVar16 = *(float *)(param_1 + 0x88);
        if ((fVar16 != DAT_0005ee90 && fVar16 < DAT_0005ee90 == (NAN(fVar16) || NAN(DAT_0005ee90)))
           && (0 < *(int *)(param_1 + 0x80))) {
          local_50 = DAT_0005eeb8 + 0x5ecd4;
          local_4c = DAT_0005eebc + 0x5ecda;
          local_48[0] = 0;
          local_28 = 1;
          (**(code **)(DAT_0005eeb8 + 0x5ecdc))(&local_50,local_48);
          FUN_0002f56c(local_48);
          FUN_0002f640(local_48);
          local_50 = DAT_0005eec0 + 0x5ed02;
          FUN_0002f6fc(*(undefined4 *)(param_1 + 0x84),0,0,0);
          FUN_0007b72c();
          FUN_000796c4();
          *(undefined4 *)(param_1 + 0x80) = 0;
          fVar16 = *(float *)(param_1 + 0x88);
        }
        if (fVar16 == DAT_0005ee94 || fVar16 < DAT_0005ee94 != (NAN(fVar16) || NAN(DAT_0005ee94)))
        goto LAB_0005eb34;
      }
      *(undefined *)(param_1 + 0x27) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 200);
  }
LAB_0005eb34:
  if (local_24 == **(int **)(iVar9 + iVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



