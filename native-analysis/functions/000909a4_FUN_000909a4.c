/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000909a4 FUN_000909a4 */

void FUN_000909a4(int param_1,int param_2,float *param_3,undefined4 param_4,float param_5,
                 float *param_6,uint param_7,float param_8,float *param_9)

{
  int iVar1;
  char cVar2;
  float fVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  short *psVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  char *pcVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float extraout_s15;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int local_e0 [4];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8 [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54 [2];
  
  fVar3 = DAT_00090cd8;
  iVar21 = DAT_00090ce0 + 0x909b6;
  if (*(int *)(param_2 + 0xc) != 0) {
    *param_6 = *param_6 / param_5;
    param_6[1] = param_6[1] / (param_8 * param_5);
    local_54[0] = fVar3;
    uVar23 = param_7 & 3;
    fVar48 = DAT_00090cd8;
    if (uVar23 == 1) {
      if ((int)(param_7 << 0x1b) < 0) {
        FUN_0009eabc(local_70,param_2);
        local_60 = *(undefined4 *)(param_2 + 0x10);
        local_5c = *(undefined4 *)(param_2 + 0x14);
        local_58 = *(undefined4 *)(param_2 + 0x18);
        FUN_000907ec(param_1,local_70,*param_6,local_54);
        local_70[0] = *(int *)(iVar21 + DAT_00091524) + 8;
        fVar48 = fVar3;
      }
    }
    else if (uVar23 != 0) {
      FUN_0009eabc(local_8c);
      local_7c = *(undefined4 *)(param_2 + 0x10);
      local_78 = *(undefined4 *)(param_2 + 0x14);
      local_74 = *(undefined4 *)(param_2 + 0x18);
      pfVar20 = (float *)(param_7 & 0x10);
      if ((float *)(param_7 & 0x10) != (float *)0x0) {
        pfVar20 = local_54;
      }
      fVar48 = *param_6;
      fVar3 = (float)FUN_000907ec(param_1,local_8c,fVar48,pfVar20);
      local_8c[0] = *(int *)(iVar21 + DAT_00090ce4) + 8;
      fVar48 = fVar48 - fVar3;
      if ((int)(param_7 << 0x1f) < 0) {
        fVar48 = fVar48 * DAT_0009151c;
      }
    }
    iVar17 = DAT_00090cec;
    iVar1 = DAT_00090ce8;
    iVar29 = *(int *)(iVar21 + DAT_00090ce8);
    puVar24 = (undefined4 *)(DAT_00090cec + 0x90a66);
    *(undefined *)(iVar29 + 0x18d4) = 0;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a6a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a6e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90a72);
    *(undefined4 *)(iVar29 + 0x1094) = *puVar24;
    *(undefined4 *)(iVar29 + 0x1098) = uVar9;
    *(undefined4 *)(iVar29 + 0x109c) = uVar10;
    *(undefined4 *)(iVar29 + 0x10a0) = uVar16;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a7a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a7e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90a82);
    *(undefined4 *)(iVar29 + 0x10a4) = *(undefined4 *)(iVar17 + 0x90a76);
    *(undefined4 *)(iVar29 + 0x10a8) = uVar9;
    *(undefined4 *)(iVar29 + 0x10ac) = uVar10;
    *(undefined4 *)(iVar29 + 0x10b0) = uVar16;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a8a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a8e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90a92);
    *(undefined4 *)(iVar29 + 0x10b4) = *(undefined4 *)(iVar17 + 0x90a86);
    *(undefined4 *)(iVar29 + 0x10b8) = uVar9;
    *(undefined4 *)(iVar29 + 0x10bc) = uVar10;
    *(undefined4 *)(iVar29 + 0x10c0) = uVar16;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a9a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a9e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90aa2);
    *(undefined4 *)(iVar29 + 0x10c4) = *(undefined4 *)(iVar17 + 0x90a96);
    *(undefined4 *)(iVar29 + 0x10c8) = uVar9;
    *(undefined4 *)(iVar29 + 0x10cc) = uVar10;
    *(undefined4 *)(iVar29 + 0x10d0) = uVar16;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a6a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a6e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90a72);
    *(undefined4 *)(iVar29 + 0x1894) = *puVar24;
    *(undefined4 *)(iVar29 + 0x1898) = uVar9;
    *(undefined4 *)(iVar29 + 0x189c) = uVar10;
    *(undefined4 *)(iVar29 + 0x18a0) = uVar16;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a7a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a7e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90a82);
    *(undefined4 *)(iVar29 + 0x18a4) = *(undefined4 *)(iVar17 + 0x90a76);
    *(undefined4 *)(iVar29 + 0x18a8) = uVar9;
    *(undefined4 *)(iVar29 + 0x18ac) = uVar10;
    *(undefined4 *)(iVar29 + 0x18b0) = uVar16;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a8a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a8e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90a92);
    *(undefined4 *)(iVar29 + 0x18b4) = *(undefined4 *)(iVar17 + 0x90a86);
    *(undefined4 *)(iVar29 + 0x18b8) = uVar9;
    *(undefined4 *)(iVar29 + 0x18bc) = uVar10;
    *(undefined4 *)(iVar29 + 0x18c0) = uVar16;
    uVar9 = *(undefined4 *)(iVar17 + 0x90a9a);
    uVar10 = *(undefined4 *)(iVar17 + 0x90a9e);
    uVar16 = *(undefined4 *)(iVar17 + 0x90aa2);
    *(undefined4 *)(iVar29 + 0x18c4) = *(undefined4 *)(iVar17 + 0x90a96);
    *(undefined4 *)(iVar29 + 0x18c8) = uVar9;
    *(undefined4 *)(iVar29 + 0x18cc) = uVar10;
    *(undefined4 *)(iVar29 + 0x18d0) = uVar16;
    iVar17 = *(int *)(iVar29 + 0x18d8);
    *(float *)(iVar29 + 0x1894) = param_5 * *(float *)(iVar29 + 0x1894);
    *(float *)(iVar29 + 0x18a4) = param_5 * *(float *)(iVar29 + 0x18a4);
    *(float *)(iVar29 + 0x18b4) = param_5 * *(float *)(iVar29 + 0x18b4);
    fVar44 = param_5 * *(float *)(iVar29 + 0x18c4);
    *(float *)(iVar29 + 0x18c4) = fVar44;
    *(float *)(iVar29 + 0x1898) = param_5 * *(float *)(iVar29 + 0x1898);
    *(float *)(iVar29 + 0x18a8) = param_5 * *(float *)(iVar29 + 0x18a8);
    *(float *)(iVar29 + 0x18b8) = param_5 * *(float *)(iVar29 + 0x18b8);
    fVar45 = param_5 * *(float *)(iVar29 + 0x18c8);
    *(float *)(iVar29 + 0x18c8) = fVar45;
    *(float *)(iVar29 + 0x189c) = param_5 * *(float *)(iVar29 + 0x189c);
    *(float *)(iVar29 + 0x18ac) = param_5 * *(float *)(iVar29 + 0x18ac);
    *(float *)(iVar29 + 0x18bc) = param_5 * *(float *)(iVar29 + 0x18bc);
    fVar47 = param_5 * *(float *)(iVar29 + 0x18cc);
    *(int *)(iVar29 + 0x18d8) = iVar17 + 2;
    *(float *)(iVar29 + 0x18cc) = fVar47;
    fVar3 = *param_3;
    fVar41 = param_3[1];
    fVar42 = param_3[2];
    *(int *)(iVar29 + 0x18d8) = iVar17 + 3;
    *(float *)(iVar29 + 0x18c4) = fVar3 + fVar44;
    *(float *)(iVar29 + 0x18c8) = fVar41 + fVar45;
    *(float *)(iVar29 + 0x18cc) = fVar42 + fVar47;
    FUN_000995e4(*(undefined4 *)(*(int *)(param_1 + 0x408) + 4));
    uVar4 = FUN_0009e880(param_4);
    iVar17 = DAT_00090cf4;
    iVar29 = *(int *)(param_2 + 0x18);
    if (iVar29 != 0) {
      pbVar5 = (byte *)(DAT_00090cf0 + 0x90bb8);
      pbVar11 = (byte *)(DAT_00090cf0 + 0x90bc4);
      pcVar28 = (char *)0x0;
      pbVar6 = (byte *)(DAT_00090cf8 + 0x90bca);
      iVar25 = DAT_00090cfc + 0x90bce;
      pbVar12 = (byte *)(DAT_00090cf8 + 0x90bd0);
      fVar3 = DAT_00090cd8;
      fVar41 = DAT_00090cd8;
      do {
        iVar30 = 0;
        iVar26 = iVar17 + 0x90bde;
        while ((fVar42 = DAT_00090cd8, iVar29 != 0 && (iVar30 < 0x100))) {
          if ((iVar29 == 10) || (pcVar28 == *(char **)(param_2 + 0x10))) {
            if ((pcVar28 != (char *)0x0) && (*pcVar28 == ' ')) {
              FUN_0009eaf4(param_2,1);
              iVar29 = *(int *)(param_2 + 0x18);
            }
            if (uVar23 == 1) {
              fVar48 = DAT_00091520;
              if ((int)(param_7 << 0x1b) < 0) {
                FUN_0009eabc(local_a8,param_2);
                fVar48 = DAT_00091520;
                local_98 = *(undefined4 *)(param_2 + 0x10);
                local_94 = *(undefined4 *)(param_2 + 0x14);
                local_90 = *(undefined4 *)(param_2 + 0x18);
                FUN_0009eaf4(local_a8,iVar29 == 10);
                FUN_000907ec(param_1,local_a8,*param_6,local_54);
                local_a8[0] = *(int *)(iVar21 + DAT_00091524) + 8;
                iVar29 = *(int *)(param_2 + 0x18);
              }
            }
            else if (uVar23 != 0) {
              FUN_0009eabc(local_c4,param_2);
              local_b4 = *(undefined4 *)(param_2 + 0x10);
              local_b0 = *(undefined4 *)(param_2 + 0x14);
              local_ac = *(undefined4 *)(param_2 + 0x18);
              FUN_0009eaf4(local_c4,iVar29 == 10);
              fVar48 = *param_6;
              pfVar20 = (float *)(param_7 & 0x10);
              if ((float *)(param_7 & 0x10) != (float *)0x0) {
                pfVar20 = local_54;
              }
              fVar42 = (float)FUN_000907ec(param_1,local_c4,fVar48,pfVar20);
              local_c4[0] = *(int *)(iVar21 + DAT_00091524) + 8;
              bVar32 = (int)(param_7 << 0x1f) < 0;
              fVar41 = extraout_s15;
              if (bVar32) {
                fVar41 = DAT_0009151c;
              }
              iVar29 = *(int *)(param_2 + 0x18);
              fVar48 = fVar48 - fVar42;
              if (bVar32) {
                fVar48 = fVar48 * fVar41;
              }
            }
            fVar3 = fVar3 - param_8;
            pcVar28 = (char *)0x0;
            fVar41 = DAT_00091520;
          }
          if (iVar29 == 0x3c) {
            pbVar13 = *(byte **)(param_2 + 0x10);
            pbVar27 = pbVar5;
            pbVar31 = pbVar13;
            if (pbVar13 == pbVar5) {
LAB_00091244:
              FUN_0009eaf4(param_2,0xc);
              uVar18 = *(uint *)(param_2 + 0x18);
              if (uVar18 == 0x3e) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                uVar22 = 6;
LAB_00091272:
                do {
                  if (uVar18 < 0x30) {
LAB_0009125e:
                    if (0x40 < uVar18) {
LAB_00091444:
                      if (uVar18 < 0x47) {
                        uVar8 = uVar18 - 0x37 | uVar8 << 4;
                        uVar22 = uVar22 - 1 & 0xff;
                      }
                    }
                  }
                  else {
                    if (uVar18 < 0x3a) {
                      uVar8 = uVar18 - 0x30 | uVar8 << 4;
                      FUN_0009eaf4(param_2,1);
                      uVar18 = *(uint *)(param_2 + 0x18);
                      uVar22 = uVar22 - 1 & 0xff;
                      if (uVar18 == 0x3e) break;
                      goto LAB_00091272;
                    }
                    if (uVar18 < 0x61) goto LAB_0009125e;
                    if (0x66 < uVar18) goto LAB_00091444;
                    uVar8 = uVar18 - 0x57 | uVar8 << 4;
                    uVar22 = uVar22 - 1 & 0xff;
                  }
                  FUN_0009eaf4(param_2,1);
                  uVar18 = *(uint *)(param_2 + 0x18);
                } while (uVar18 != 0x3e);
                if ((int)(uVar22 << 0x18) < 0) goto LAB_00091000;
                uVar8 = uVar8 & 0xffffff;
              }
              uVar8 = uVar8 | uVar4 & 0xff000000;
              FUN_0009eaf4(param_2,1);
              uVar9 = *(undefined4 *)(param_2 + 0x18);
            }
            else {
              do {
                uVar18 = (uint)*pbVar31;
                if (uVar18 == 0) {
                  if (*(char *)(DAT_0009133c + 0x9123e + (uint)*pbVar27) == '\0') goto LAB_00091244;
                  goto LAB_00090fc0;
                }
                if (*pbVar27 == 0) {
                  cVar15 = *(char *)(DAT_00091330 + 0x90fba + uVar18);
                  cVar2 = '\0';
                  goto LAB_00090fba;
                }
                if (*(char *)(iVar26 + uVar18) != *(char *)(iVar26 + (uint)*pbVar27))
                goto LAB_00090fc0;
                pbVar27 = pbVar27 + 1;
                pbVar31 = pbVar31 + 1;
              } while (pbVar27 != pbVar11);
              cVar15 = *(char *)(iVar26 + (uint)*pbVar31);
              cVar2 = *(char *)(iVar26 + (uint)*pbVar11);
LAB_00090fba:
              if (cVar2 == cVar15) goto LAB_00091244;
LAB_00090fc0:
              pbVar27 = pbVar6;
              if (pbVar13 != pbVar6) {
                do {
                  uVar18 = (uint)*pbVar13;
                  if (uVar18 == 0) {
                    cVar2 = *(char *)(DAT_00091340 + 0x912bc + (uint)*pbVar27);
                    cVar15 = '\0';
                    goto LAB_00090fde;
                  }
                  if (*pbVar27 == 0) {
                    cVar15 = *(char *)(DAT_00091334 + 0x90fde + uVar18);
                    cVar2 = '\0';
                    goto LAB_00090fde;
                  }
                  if (*(char *)(iVar25 + uVar18) != *(char *)(iVar25 + (uint)*pbVar27))
                  goto LAB_00090d24;
                  pbVar27 = pbVar27 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (pbVar27 != pbVar12);
                cVar15 = *(char *)(iVar25 + (uint)*pbVar13);
                cVar2 = *(char *)(iVar25 + (uint)*pbVar12);
LAB_00090fde:
                if (cVar15 != cVar2) goto LAB_00090d24;
              }
              uVar8 = FUN_0009e880(param_4,0x3c);
              iVar29 = *(int *)(param_2 + 0x18);
              while (iVar29 != 0x3e) {
                FUN_0009eaf4(param_2,1);
                iVar29 = *(int *)(param_2 + 0x18);
              }
LAB_00091000:
              FUN_0009eaf4(param_2,1);
              uVar9 = *(undefined4 *)(param_2 + 0x18);
            }
            psVar7 = (short *)FUN_0008f638(param_1,uVar9,0);
            uVar4 = uVar8;
            if (pcVar28 == (char *)0x0) goto LAB_0009101c;
LAB_00090d38:
            FUN_0009eaf4(param_2,1);
            if (psVar7 == (short *)0x0) goto LAB_00091068;
            fVar40 = *(float *)(psVar7 + 2);
            fVar43 = *(float *)(psVar7 + 4);
            fVar36 = fVar40 + *(float *)(psVar7 + 6) *
                              (*(float *)(param_1 + 0x424) /
                              (float)(longlong)*(int *)(param_1 + 0x41c));
            fVar47 = fVar43 + *(float *)(psVar7 + 8) *
                              (*(float *)(param_1 + 0x424) /
                              (float)(longlong)*(int *)(param_1 + 0x420));
            fVar44 = *(float *)(psVar7 + 6) * param_5;
            fVar42 = param_8 * *(float *)(psVar7 + 8) * param_5;
            fVar45 = param_3[1] + (fVar3 - param_8 * *(float *)(psVar7 + 0xc)) * param_5 +
                     fVar42 * DAT_00090d00;
            fVar46 = *param_3 + (fVar41 + *(float *)(psVar7 + 10) + fVar48) * param_5 +
                     fVar44 * DAT_00090d04;
            if (param_9 == (float *)0x0) {
LAB_00091074:
              iVar29 = iVar30 * 6;
              iVar19 = iVar30 * 0xd8;
              fVar35 = (fVar44 / param_5) * DAT_00091324;
              fVar37 = (fVar42 / param_5) * DAT_00091320;
              fVar46 = fVar35 + ((fVar46 - fVar44 * DAT_00091324) - *param_3) / param_5;
              fVar45 = fVar37 + ((fVar45 - fVar42 * DAT_00091320) - param_3[1]) / param_5;
              fVar44 = fVar46 + (fVar44 / param_5) * DAT_00091320;
              fVar37 = fVar37 + fVar45;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar30 * 0xd8) = fVar44;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar19 + 4) = fVar37;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar19 + 0x1c) = fVar40;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar19 + 0x20) = fVar47;
              if (iVar29 != 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x42c) + (iVar29 + -1) * 0x24) =
                     *(undefined4 *)(*(int *)(param_1 + 0x42c) + iVar30 * 0xd8);
                *(undefined4 *)(*(int *)(param_1 + 0x42c) + (iVar29 + -1) * 0x24 + 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x42c) + iVar19 + 4);
              }
              fVar45 = fVar45 + (fVar42 / param_5) * DAT_00091324;
              *(float *)(*(int *)(param_1 + 0x42c) + (iVar29 + 1) * 0x24) = fVar44;
              iVar29 = (iVar29 + 1) * 0x24;
              fVar35 = fVar35 + fVar46;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 4) = fVar45;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 0x1c) = fVar40;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 0x20) = fVar43;
              iVar29 = iVar19 + 0x48;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29) = fVar35;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 4) = fVar37;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 0x1c) = fVar36;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 0x20) = fVar47;
              iVar29 = iVar19 + 0x6c;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29) = fVar35;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 4) = fVar45;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 0x1c) = fVar36;
              *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 0x20) = fVar43;
              *(undefined4 *)(*(int *)(param_1 + 0x42c) + iVar19 + 0x90) =
                   *(undefined4 *)(*(int *)(param_1 + 0x42c) + iVar29);
              iVar14 = 0;
              *(undefined4 *)(*(int *)(param_1 + 0x42c) + iVar19 + 0x90 + 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x42c) + iVar29 + 4);
              fVar42 = DAT_00091328;
              do {
                iVar29 = iVar19 + iVar14;
                iVar14 = iVar14 + 0x24;
                *(uint *)(*(int *)(param_1 + 0x42c) + iVar29 + 0x18) = uVar4;
                *(float *)(*(int *)(param_1 + 0x42c) + iVar29 + 8) = fVar42;
              } while (iVar14 != 0xd8);
              iVar30 = iVar30 + 1;
            }
            else {
              fVar35 = *param_9;
              fVar37 = fVar46 + fVar44 * DAT_00090d00;
              fVar38 = fVar44 + fVar37;
              if ((-1 < (int)((uint)(fVar38 < fVar35) << 0x1f)) &&
                 (fVar33 = param_9[2],
                 fVar37 == fVar33 || fVar37 < fVar33 != (NAN(fVar37) || NAN(fVar33)))) {
                fVar49 = param_9[3];
                fVar34 = fVar45 + fVar42 * DAT_00090d04;
                if (-1 < (int)((uint)(fVar34 < fVar49) << 0x1f)) {
                  fVar50 = fVar34 - fVar42;
                  fVar51 = param_9[1];
                  if (fVar50 == fVar51 || fVar50 < fVar51 != (NAN(fVar50) || NAN(fVar51))) {
                    iVar29 = (uint)(fVar37 < fVar35) << 0x1f;
                    if (-1 < iVar29) {
                      fVar35 = fVar44;
                    }
                    if (iVar29 < 0) {
                      fVar37 = fVar37 + (fVar35 - fVar37);
                      fVar35 = fVar38 - fVar37;
                      if ((int)((uint)(fVar35 < 0.0) << 0x1f) < 0) {
                        fVar44 = -fVar35 / fVar44;
                        fVar40 = fVar36 - (fVar36 - fVar40) * fVar44;
                        fVar46 = fVar37 + fVar35 * DAT_00090d04;
                        fVar35 = -fVar35;
                      }
                      else {
                        fVar44 = fVar35 / fVar44;
                        fVar40 = fVar36 - (fVar36 - fVar40) * fVar44;
                        fVar46 = fVar37 + fVar35 * DAT_00090d04;
                      }
                    }
                    if (fVar38 == fVar33 || fVar38 < fVar33 != (NAN(fVar38) || NAN(fVar33))) {
                      fVar44 = fVar35;
                    }
                    fVar39 = DAT_00090d04;
                    if (fVar38 != fVar33 && fVar38 < fVar33 == (NAN(fVar38) || NAN(fVar33))) {
                      fVar44 = (fVar38 + (fVar33 - fVar38)) - fVar37;
                      if ((int)((uint)(fVar44 < 0.0) << 0x1f) < 0) {
                        fVar39 = -fVar44;
                        fVar36 = fVar40 + (fVar36 - fVar40) * (fVar39 / fVar35);
                        fVar46 = fVar37 + fVar44 * DAT_00090d04;
                        fVar44 = fVar39;
                      }
                      else {
                        fVar36 = fVar40 + (fVar36 - fVar40) * (fVar44 / fVar35);
                        fVar46 = fVar37 + fVar44 * DAT_0009151c;
                      }
                    }
                    if (fVar34 == fVar51 || fVar34 < fVar51 != (NAN(fVar34) || NAN(fVar51))) {
                      fVar39 = fVar42;
                    }
                    fVar35 = fVar42;
                    if (fVar34 != fVar51 && fVar34 < fVar51 == (NAN(fVar34) || NAN(fVar51))) {
                      fVar34 = fVar34 + (fVar51 - fVar34);
                      fVar35 = fVar50 - fVar34;
                      fVar39 = fVar35;
                      fVar45 = DAT_0009151c;
                      if ((int)((uint)(fVar35 < 0.0) << 0x1f) < 0) {
                        fVar39 = -fVar35;
                        fVar45 = DAT_00090d04;
                      }
                      fVar45 = fVar34 + fVar35 * fVar45;
                      fVar43 = fVar47 - (fVar47 - fVar43) * (fVar39 / fVar42);
                      fVar35 = fVar39;
                    }
                    fVar42 = fVar39;
                    if ((int)((uint)(fVar50 < fVar49) << 0x1f) < 0) {
                      fVar42 = (fVar50 + (fVar49 - fVar50)) - fVar34;
                      if ((int)((uint)(fVar42 < 0.0) << 0x1f) < 0) {
                        fVar47 = fVar43 + (fVar47 - fVar43) * (-fVar42 / fVar35);
                        fVar45 = fVar34 + fVar42 * DAT_00090d04;
                        fVar42 = -fVar42;
                      }
                      else {
                        fVar47 = fVar43 + (fVar47 - fVar43) * (fVar42 / fVar35);
                        fVar45 = fVar34 + fVar42 * DAT_0009151c;
                      }
                    }
                    goto LAB_00091074;
                  }
                }
              }
            }
            iVar29 = *(int *)(param_2 + 0x18);
            fVar42 = DAT_0009132c;
            if (*psVar7 != 0x20) {
              fVar42 = DAT_0009131c;
            }
            fVar41 = fVar41 + *(float *)(psVar7 + 0xe) + DAT_00091328 + fVar42 * local_54[0];
          }
          else {
LAB_00090d24:
            psVar7 = (short *)FUN_0008f638(param_1,iVar29,0);
            uVar8 = uVar4;
            if (pcVar28 != (char *)0x0) goto LAB_00090d38;
LAB_0009101c:
            FUN_0009eabc(local_e0,param_2);
            local_d0 = *(undefined4 *)(param_2 + 0x10);
            local_cc = *(undefined4 *)(param_2 + 0x14);
            local_c8 = *(undefined4 *)(param_2 + 0x18);
            pcVar28 = (char *)FUN_0009046c(param_1,local_e0,fVar41,*param_6,DAT_0009131c,local_54[0]
                                          );
            local_e0[0] = *(int *)(iVar21 + DAT_00091338) + 8;
            uVar4 = uVar8;
            if (pcVar28 != *(char **)(param_2 + 0x10)) goto LAB_00090d38;
LAB_00091068:
            iVar29 = *(int *)(param_2 + 0x18);
          }
        }
        if ((param_7 & 0xc) != 0) {
          fVar3 = fVar3 - param_8;
          iVar29 = *(int *)(iVar21 + iVar1);
          fVar44 = DAT_00090cdc;
          if ((param_7 & 4) != 0) {
            fVar44 = DAT_00090d04;
          }
          fVar44 = (-param_6[1] - fVar3) * fVar44;
          *(float *)(iVar29 + 0x18c4) =
               *(float *)(iVar29 + 0x18c4) + *(float *)(iVar29 + 0x1894) * DAT_00090cd8 +
               fVar44 * *(float *)(iVar29 + 0x18a4) + *(float *)(iVar29 + 0x18b4) * DAT_00090cd8;
          *(float *)(iVar29 + 0x18c8) =
               *(float *)(iVar29 + 0x18c8) + *(float *)(iVar29 + 0x1898) * fVar42 +
               fVar44 * *(float *)(iVar29 + 0x18a8) + *(float *)(iVar29 + 0x18b8) * fVar42;
          *(int *)(iVar29 + 0x18d8) = *(int *)(iVar29 + 0x18d8) + 1;
          *(float *)(iVar29 + 0x18cc) =
               *(float *)(iVar29 + 0x18cc) + *(float *)(iVar29 + 0x189c) * fVar42 +
               fVar44 * *(float *)(iVar29 + 0x18ac) + *(float *)(iVar29 + 0x18bc) * fVar42;
        }
        FUN_0008d434(*(undefined4 *)(iVar21 + iVar1),1);
        FUN_000a3434(*(undefined4 *)(param_1 + 0x42c),iVar30 * 6,0);
        iVar29 = *(int *)(param_2 + 0x18);
      } while (iVar29 != 0);
    }
    FUN_000995e0(*(undefined4 *)(*(int *)(param_1 + 0x408) + 4));
  }
  return;
}



