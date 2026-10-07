/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00024030 FUN_00024030 */

void FUN_00024030(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  byte *pbVar22;
  int iVar23;
  char *pcVar24;
  int iVar25;
  byte *pbVar26;
  int iVar27;
  size_t sVar28;
  char *__dest;
  void *pvVar29;
  int iVar30;
  int iVar31;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte bVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  byte bVar38;
  int iVar39;
  int *piVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  byte **ppbVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int *piVar48;
  char **ppcVar49;
  int iVar50;
  undefined4 *puVar51;
  int iVar52;
  char *pcVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int local_260;
  int local_1e8 [3];
  undefined4 local_1dc;
  double local_1d8;
  int local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined auStack_1a4 [256];
  undefined auStack_a4 [40];
  undefined auStack_7c [40];
  undefined auStack_54 [40];
  int local_2c;
  
  iVar1 = DAT_000247ec;
  iVar30 = DAT_000247e8 + 0x2403c;
  local_2c = **(int **)(iVar30 + DAT_000247ec);
  if (*(int *)(DAT_000247f0 + 0x2404e) == 0) {
    piVar18 = (int *)operator_new(0x48);
    FUN_0009c1d4(piVar18,DAT_000247f4 + 0x2407e);
    if (piVar18 != (int *)0x0) {
      iVar19 = FUN_0009b0e4(piVar18,0);
      if (iVar19 != 0) {
        uVar17 = FUN_0009a5d8(piVar18,DAT_00024820 + 0x2437e);
        iVar19 = FUN_0009a5d8(uVar17,DAT_00024824 + 0x24388);
        if (iVar19 != 0) {
          pbVar22 = (byte *)FUN_0009a4a0(iVar19,DAT_00024828 + 0x2439c);
          if ((pbVar22 != (byte *)0x0) && (*pbVar22 != 0)) {
            local_1e8[0] = *(int *)(DAT_0002482c + 0x243ba);
            local_1e8[1] = *(undefined4 *)(DAT_0002482c + 0x243be);
            local_1e8[2] = *(undefined4 *)(DAT_0002482c + 0x243c2);
            local_1dc = *(undefined4 *)(DAT_0002482c + 0x243c6);
            iVar47 = 0;
            while( true ) {
              iVar23 = atoi((char *)pbVar22);
              iVar43 = DAT_00024830;
              *(int *)((int)local_1e8 + iVar47) = iVar23;
              bVar38 = *pbVar22;
              bVar32 = bVar38;
              if (bVar38 != 0) {
                bVar32 = 1;
              }
              if (bVar38 == 0x2c) {
                bVar32 = 0;
              }
              else {
                bVar32 = bVar32 & 1;
              }
              while (bVar32 != 0) {
                pbVar22 = pbVar22 + 1;
                bVar38 = *pbVar22;
                bVar32 = bVar38;
                if (bVar38 != 0) {
                  bVar32 = 1;
                }
                if (bVar38 == 0x2c) {
                  bVar32 = 0;
                }
                else {
                  bVar32 = bVar32 & 1;
                }
              }
              if ((bVar38 == 0) || (iVar47 = iVar47 + 4, iVar47 == 0x10)) break;
              pbVar22 = pbVar22 + 1;
            }
            *(char *)(DAT_00024830 + 0x24414) = (char)local_1e8[0];
            *(char *)(iVar43 + 0x24413) = (char)local_1e8[1];
            *(char *)(iVar43 + 0x24412) = (char)local_1e8[2];
            *(char *)(iVar43 + 0x24415) = (char)local_1dc;
          }
          iVar47 = DAT_00024834;
          FUN_0009a8bc(iVar19,DAT_00024838 + 0x2442c,DAT_00024834 + 0x2442e);
          FUN_0009a8bc(iVar19,DAT_0002483c + 0x2443e,iVar47 + 0x24432);
          FUN_0009a8bc(iVar19,DAT_00024840 + 0x2444c,iVar47 + 0x24436);
          FUN_0009a8bc(iVar19,DAT_00024844 + 0x2445a,iVar47 + 0x2443a);
          FUN_0009a8bc(iVar19,DAT_00024848 + 0x24468,iVar47 + 0x2443e);
          iVar43 = FUN_0009a884(iVar19,DAT_0002484c + 0x24474);
          if (iVar43 == 0) {
            *(float *)(iVar47 + 0x24442) = (float)(double)CONCAT44(uStack_1cc,local_1d0);
          }
          iVar47 = FUN_0009a884(iVar19,DAT_00024850 + 0x24492,&local_1d0);
          if (iVar47 == 0) {
            *(float *)(DAT_00024854 + 0x244c2) = (float)(double)CONCAT44(uStack_1cc,local_1d0);
          }
          iVar19 = FUN_0009a884(iVar19,DAT_00024858 + 0x244b2,&local_1d0);
          if (iVar19 == 0) {
            *(float *)(DAT_0002485c + 0x244e6) = (float)(double)CONCAT44(uStack_1cc,local_1d0);
          }
        }
        iVar19 = FUN_0009a5d8(uVar17,DAT_00024860 + 0x244d0);
        if (iVar19 != 0) {
          pcVar24 = (char *)FUN_0009a4a0(iVar19,DAT_00024864 + 0x244dc);
          if ((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) {
            strtod(pcVar24,(char **)0x0);
            *(float *)(*(int *)(iVar30 + DAT_00024f50) + 0x8c) =
                 (float)(double)CONCAT44(extraout_r1,pcVar24);
          }
          pcVar24 = (char *)FUN_0009a4a0(iVar19,DAT_00024868 + 0x244f0);
          if ((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) {
            strtod(pcVar24,(char **)0x0);
            *(float *)(*(int *)(iVar30 + DAT_00024f50) + 0x90) =
                 (float)(double)CONCAT44(extraout_r1_00,pcVar24);
          }
        }
        iVar19 = DAT_00024870;
        iVar23 = DAT_0002486c + 0x24506;
        iVar47 = FUN_0009a5d8(uVar17,iVar23);
        iVar43 = 0;
        *(undefined4 *)(iVar19 + 0x2450e) = 0;
        if (iVar47 == 0) {
          puVar20 = (undefined4 *)operator_new__(8);
          puVar20[1] = 0;
          puVar51 = puVar20 + 2;
          *puVar20 = 0x2ec;
        }
        else {
          while( true ) {
            *(int *)(iVar19 + 0x2450e) = iVar43 + 1;
            iVar47 = FUN_0009a4f0(iVar47,iVar23);
            if (iVar47 == 0) break;
            iVar43 = *(int *)(iVar19 + 0x2450e);
          }
          iVar19 = *(int *)(iVar19 + 0x2450e);
          puVar20 = (undefined4 *)operator_new__(iVar19 * 0x2ec + 8);
          *puVar20 = 0x2ec;
          puVar51 = puVar20 + 2;
          puVar20[1] = iVar19;
          if (iVar19 != 0) {
            iVar47 = 0;
            puVar20 = puVar51;
            do {
              iVar47 = iVar47 + 1;
              FUN_00023dc4(puVar20);
              puVar20 = puVar20 + 0xbb;
            } while (iVar19 != iVar47);
          }
        }
        ppbVar44 = (byte **)(DAT_00024874 + 0x2455e);
        iVar19 = DAT_00024878 + 0x24562;
        *ppbVar44 = (byte *)puVar51;
        uVar17 = FUN_0009a5d8(piVar18,iVar19);
        iVar25 = FUN_0009a5d8(uVar17,DAT_0002487c + 0x2456c);
        pbVar22 = *ppbVar44;
        FUN_00017d64(pbVar22 + 700,0);
        iVar16 = DAT_000248ec;
        iVar15 = DAT_000248e8;
        iVar14 = DAT_000248e4;
        iVar13 = DAT_000248e0;
        iVar12 = DAT_000248dc;
        iVar11 = DAT_000248d8;
        iVar10 = DAT_000248d4;
        iVar9 = DAT_000248d0;
        iVar8 = DAT_000248cc;
        iVar7 = DAT_000248c8;
        iVar6 = DAT_000248c4;
        iVar5 = DAT_000248c0;
        iVar4 = DAT_000248bc;
        iVar3 = DAT_000248b8;
        iVar2 = DAT_000248b4;
        iVar50 = DAT_000248b0;
        iVar35 = DAT_000248ac;
        iVar21 = DAT_000248a8;
        iVar56 = DAT_000248a4;
        iVar46 = DAT_000248a0;
        iVar39 = DAT_0002489c;
        iVar34 = DAT_00024898;
        iVar33 = DAT_00024894;
        iVar31 = DAT_00024890;
        iVar23 = DAT_0002488c;
        iVar43 = DAT_00024888;
        iVar47 = DAT_00024884;
        iVar19 = DAT_00024880;
        if (iVar25 != 0) {
          piVar48 = (int *)(DAT_000248d4 + 0x245f6);
          piVar40 = (int *)(DAT_000248e4 + 0x2461a);
          iVar36 = DAT_000248f0 + 0x24606;
          iVar41 = DAT_000248f4 + 0x2460a;
          while( true ) {
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar19 + 0x24616);
            if ((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) {
              strcpy((char *)pbVar22,pcVar24);
              uVar17 = FUN_0008f414(pbVar22);
              *(undefined4 *)(pbVar22 + 0x210) = uVar17;
              if ((byte)(*pbVar22 + 0x9f) < 0x1a) {
                *pbVar22 = *pbVar22 - 0x20;
              }
              uVar17 = FUN_0008f414(pbVar22);
              *(undefined4 *)(pbVar22 + 0x214) = uVar17;
              if ((byte)(*pbVar22 + 0xbf) < 0x1a) {
                *pbVar22 = *pbVar22 + 0x20;
              }
              FUN_0008f060(auStack_1a4,0x40,DAT_00024f38 + 0x24dfe,pbVar22);
              uVar17 = FUN_0008f414(auStack_1a4);
              iVar52 = DAT_00024f3c + 0x24e12;
              *(undefined4 *)(pbVar22 + 0x218) = uVar17;
              FUN_0008f060(auStack_1a4,0x40,iVar52,pbVar22);
              uVar17 = FUN_0008f414(auStack_1a4);
              iVar52 = DAT_00024f40 + 0x24e2e;
              *(undefined4 *)(pbVar22 + 0x21c) = uVar17;
              FUN_0008f060(pbVar22 + 0x140,0x40,iVar52,pbVar22);
              uVar17 = FUN_0008f414(pbVar22 + 0x140);
              iVar52 = DAT_00024f44 + 0x24e4a;
              *(undefined4 *)(pbVar22 + 0x220) = uVar17;
              FUN_0008f060(pbVar22 + 0x180,0x40,iVar52,pbVar22);
              uVar17 = FUN_0008f414(pbVar22 + 0x180);
              iVar52 = DAT_00024f48 + 0x24e64;
              *(undefined4 *)(pbVar22 + 0x224) = uVar17;
              FUN_0008f060(auStack_1a4,0x40,iVar52,pcVar24);
              FUN_0002fa48(&local_1a8,auStack_1a4);
              FUN_00017d64(pbVar22 + 700,local_1a8);
              FUN_00017d90(&local_1a8);
              FUN_0008f060(auStack_1a4,0x40,DAT_00024f4c + 0x24e92,pcVar24);
              FUN_0002fa48(&local_1ac,auStack_1a4);
              FUN_00017d64(pbVar22 + 0x2c0,local_1ac);
              FUN_00017d90(&local_1ac);
            }
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar47 + 0x2462c);
            if ((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) {
              FUN_0008f060(pbVar22 + 0x100,0x40,DAT_000248f8 + 0x24646,pbVar22);
            }
            else {
              pcVar24 = (char *)FUN_000832f8(pcVar24,0);
              strcpy((char *)(pbVar22 + 0x100),pcVar24);
            }
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar31 + 0x24650);
            if ((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) {
              strcpy((char *)(pbVar22 + 0xc0),(char *)pbVar22);
            }
            else {
              pcVar24 = (char *)FUN_000832f8(pcVar24,0);
              strcpy((char *)(pbVar22 + 0xc0),pcVar24);
            }
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar23 + 0x2466e);
            if ((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) {
              FUN_0008f060(pbVar22 + 0x80,0x40,DAT_000248fc + 0x2468a,pbVar22);
            }
            else {
              strcpy((char *)(pbVar22 + 0x80),pcVar24);
            }
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar43 + 0x24694);
            if ((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) {
              strcpy((char *)(pbVar22 + 0x40),(char *)pbVar22);
            }
            else {
              strcpy((char *)(pbVar22 + 0x40),pcVar24);
            }
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar34 + 0x246b4);
            if ((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) {
              strcpy((char *)(pbVar22 + 0x234),pcVar24);
            }
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar21 + 0x246ca);
            if ((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) {
              strcpy((char *)(pbVar22 + 0x1c0),(char *)pbVar22);
            }
            else {
              strcpy((char *)(pbVar22 + 0x1c0),pcVar24);
            }
            pbVar26 = (byte *)FUN_0009a4a0(iVar25,iVar46 + 0x246ea);
            if ((pbVar26 != (byte *)0x0) && (*pbVar26 != 0)) {
              iVar52 = 0;
              local_1e8[0] = *piVar48;
              local_1e8[1] = *(undefined4 *)(iVar10 + 0x245fa);
              local_1e8[2] = *(undefined4 *)(iVar10 + 0x245fe);
              local_1dc = *(undefined4 *)(iVar10 + 0x24602);
              while( true ) {
                iVar27 = atoi((char *)pbVar26);
                *(int *)((int)local_1e8 + iVar52) = iVar27;
                uVar42 = (uint)*pbVar26;
                uVar37 = uVar42 - 0x2c;
                if (uVar37 != 0) {
                  uVar37 = 1;
                }
                if (uVar42 == 0) {
                  uVar37 = 0;
                }
                else {
                  uVar37 = uVar37 & 1;
                }
                while (uVar37 != 0) {
                  pbVar26 = pbVar26 + 1;
                  uVar42 = (uint)*pbVar26;
                  uVar37 = uVar42;
                  if (uVar42 != 0) {
                    uVar37 = 1;
                  }
                  if (uVar42 == 0x2c) {
                    uVar37 = 0;
                  }
                  else {
                    uVar37 = uVar37 & 1;
                  }
                }
                if ((uVar42 == 0) || (iVar52 = iVar52 + 4, iVar52 == 0x10)) break;
                pbVar26 = pbVar26 + 1;
              }
              pbVar22[0x202] = (byte)local_1e8[0];
              pbVar22[0x201] = (byte)local_1e8[1];
              pbVar22[0x200] = (byte)local_1e8[2];
              pbVar22[0x203] = (byte)local_1dc;
              if ((byte)local_1dc == 0) {
                pbVar22[0x2d4] = 0;
              }
            }
            pbVar26 = (byte *)FUN_0009a4a0(iVar25,iVar33 + 0x24778);
            if ((pbVar26 != (byte *)0x0) && (*pbVar26 != 0)) {
              iVar52 = 0;
              local_1e8[0] = *piVar40;
              local_1e8[1] = *(undefined4 *)(iVar14 + 0x2461e);
              local_1e8[2] = *(undefined4 *)(iVar14 + 0x24622);
              while( true ) {
                iVar27 = atoi((char *)pbVar26);
                *(int *)((int)local_1e8 + iVar52) = iVar27;
                uVar42 = (uint)*pbVar26;
                uVar37 = uVar42 - 0x2c;
                if (uVar37 != 0) {
                  uVar37 = 1;
                }
                if (uVar42 == 0) {
                  uVar37 = 0;
                }
                else {
                  uVar37 = uVar37 & 1;
                }
                while (uVar37 != 0) {
                  pbVar26 = pbVar26 + 1;
                  uVar42 = (uint)*pbVar26;
                  uVar37 = uVar42;
                  if (uVar42 != 0) {
                    uVar37 = 1;
                  }
                  if (uVar42 == 0x2c) {
                    uVar37 = 0;
                  }
                  else {
                    uVar37 = uVar37 & 1;
                  }
                }
                if ((uVar42 == 0) || (iVar52 = iVar52 + 4, iVar52 == 0xc)) break;
                pbVar26 = pbVar26 + 1;
              }
              pbVar22[0x2b6] = (byte)local_1e8[0];
              pbVar22[0x2b5] = (byte)local_1e8[1];
              pbVar22[0x2b4] = (byte)local_1e8[2];
              pbVar22[0x2b7] = 0xff;
            }
            *(undefined4 *)(pbVar22 + 0x204) = DAT_00024900;
            *(undefined4 *)(pbVar22 + 0x2c4) = 0;
            *(undefined4 *)(pbVar22 + 0x208) = DAT_00024904;
            *(undefined4 *)(pbVar22 + 0x20c) = DAT_00024908;
            iVar52 = FUN_0009a884(iVar25,iVar35 + 0x2494e,&local_1d8);
            if (iVar52 == 0) {
              *(float *)(pbVar22 + 0x204) = (float)local_1d8;
            }
            iVar52 = FUN_0009a884(iVar25,iVar50 + 0x2496a,&local_1d8);
            if (iVar52 == 0) {
              *(float *)(pbVar22 + 0x208) = (float)local_1d8;
            }
            iVar52 = FUN_0009a884(iVar25,iVar39 + 0x24986,&local_1d8);
            if (iVar52 == 0) {
              *(float *)(pbVar22 + 0x20c) = (float)local_1d8;
            }
            FUN_0009a8bc(iVar25,iVar3 + 0x249a8,pbVar22 + 0x2c4);
            FUN_0009a8bc(iVar25,iVar4 + 0x249b6,pbVar22 + 0x2d0);
            FUN_0009a8bc(iVar25,iVar5 + 0x249c2,pbVar22 + 0x2e0);
            *(undefined4 *)(pbVar22 + 0x2e4) = *(undefined4 *)(pbVar22 + 0x2e0);
            FUN_0009a8bc(iVar25,iVar56 + 0x249d8,pbVar22 + 0x2e0);
            FUN_0009a8bc(iVar25,iVar7 + 0x249e6,pbVar22 + 0x2e4);
            local_1d0 = 0;
            FUN_0009a8bc(iVar25,iVar8 + 0x249f6,&local_1d0);
            iVar52 = local_1d0;
            if (local_1d0 != 1) {
              iVar52 = 0;
            }
            bVar38 = (byte)iVar52;
            if (local_1d0 == 1) {
              bVar38 = 1;
            }
            pbVar22[0x2d5] = bVar38;
            if (*(int *)(iVar9 + 0x24a1c) <= *(int *)(pbVar22 + 0x2d0)) {
              pbVar22[0x2d4] = 0;
            }
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar2 + 0x24a22);
            if ((((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) &&
                ((pcVar24 = (char *)FUN_0009a4a0(iVar25,DAT_00024f30 + 0x24cfa),
                 pcVar24 == (char *)0x0 || (*pcVar24 == '\0')))) ||
               (iVar52 = strcmp((char *)(DAT_00024f08 + 0x24a3c),pcVar24), iVar52 != 0)) {
              bVar38 = 0;
            }
            else {
              bVar38 = 1;
            }
            pbVar22[0x228] = bVar38;
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar11 + 0x24a52);
            if ((((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) &&
                ((pcVar24 = (char *)FUN_0009a4a0(iVar25,DAT_00024f2c + 0x24ce0),
                 pcVar24 == (char *)0x0 || (*pcVar24 == '\0')))) ||
               (iVar52 = strcmp((char *)(DAT_00024f0c + 0x24a6c),pcVar24), iVar52 != 0)) {
              bVar38 = 0;
            }
            else {
              bVar38 = 1;
            }
            pbVar22[0x2b8] = bVar38;
            pcVar24 = (char *)FUN_0009a4a0(iVar25,iVar12 + 0x24a82);
            if ((pcVar24 == (char *)0x0) || (*pcVar24 == '\0')) {
              uVar42 = (uint)pbVar22[0x2d4];
            }
            else {
              uVar42 = strcmp((char *)(DAT_00024f10 + 0x24a9c),pcVar24);
              if (uVar42 != 0) {
                uVar42 = 1;
              }
            }
            pbVar22[0x2d4] = (byte)uVar42;
            *(undefined4 *)(pbVar22 + 0x22c) = 0;
            *(undefined4 *)(pbVar22 + 0x230) = 0;
            for (iVar52 = FUN_0009a5d8(iVar25,iVar13 + 0x24aba); iVar52 != 0;
                iVar52 = FUN_0009a4f0(iVar52,iVar36)) {
              *(int *)(pbVar22 + 0x22c) = *(int *)(pbVar22 + 0x22c) + 1;
            }
            iVar52 = *(int *)(pbVar22 + 0x22c);
            if (0 < iVar52) {
              iVar27 = 0;
              pcVar24 = (char *)operator_new__(iVar52 << 8);
              pcVar53 = pcVar24;
              do {
                iVar27 = iVar27 + 1;
                memset(pcVar53,0,0x100);
                iVar45 = DAT_00024f14;
                pcVar53 = pcVar53 + 0x100;
              } while (iVar52 != iVar27);
              *(char **)(pbVar22 + 0x230) = pcVar24;
              for (iVar52 = FUN_0009a5d8(iVar25,iVar45 + 0x24b10); iVar52 != 0;
                  iVar52 = FUN_0009a4f0(iVar52,iVar41)) {
                uVar17 = FUN_0009a1d4(iVar52);
                pcVar53 = (char *)FUN_000832f8(uVar17,0);
                strcpy(pcVar24,pcVar53);
                pcVar24 = pcVar24 + 0x100;
              }
            }
            *(undefined4 *)(pbVar22 + 0x2dc) = 0;
            for (iVar52 = FUN_0009a5d8(iVar25,iVar6 + 0x24b4e); iVar52 != 0;
                iVar52 = FUN_0009a4f0(iVar52,iVar6 + 0x24b4e)) {
              *(int *)(pbVar22 + 0x2dc) = *(int *)(pbVar22 + 0x2dc) + 1;
            }
            iVar52 = *(int *)(pbVar22 + 0x2dc);
            if (iVar52 < 1) {
              sVar28 = strlen((char *)pbVar22);
              *(undefined4 *)(pbVar22 + 0x2dc) = 1;
              puVar20 = (undefined4 *)operator_new__(0x14);
              *puVar20 = 0xc;
              puVar20[1] = 1;
              puVar20[2] = 0;
              puVar20[3] = 10;
              puVar20[4] = 0;
              *(undefined4 **)(pbVar22 + 0x2d8) = puVar20 + 2;
              pvVar29 = operator_new__(sVar28 + 9);
              iVar52 = DAT_00024f34 + 0x24d54;
              puVar20[2] = pvVar29;
              FUN_0008f060(**(undefined4 **)(pbVar22 + 0x2d8),sVar28 + 9,iVar52,*pbVar22 - 0x20,
                           pbVar22 + 1);
            }
            else {
              puVar20 = (undefined4 *)operator_new__(iVar52 * 0xc + 8);
              iVar27 = 0;
              *puVar20 = 0xc;
              ppcVar49 = (char **)(puVar20 + 2);
              puVar20[1] = iVar52;
              do {
                iVar27 = iVar27 + 1;
                puVar20[2] = 0;
                puVar20[3] = 10;
                puVar20[4] = 0;
                iVar45 = DAT_00024f18;
                puVar20 = puVar20 + 3;
              } while (iVar52 != iVar27);
              *(char ***)(pbVar22 + 0x2d8) = ppcVar49;
              iVar52 = FUN_0009a5d8(iVar25,iVar45 + 0x24baa);
              pcVar24 = (char *)0x0;
              if (iVar52 != 0) {
                iVar27 = DAT_00024f1c + 0x24bc4;
                do {
                  FUN_0009a8bc(iVar52,iVar27,ppcVar49 + 1);
                  pcVar24 = pcVar24 + (int)ppcVar49[1];
                  ppcVar49[2] = pcVar24;
                  pcVar53 = (char *)FUN_0009a1d4(iVar52);
                  sVar28 = strlen(pcVar53);
                  __dest = (char *)operator_new__(sVar28 + 1);
                  *ppcVar49 = __dest;
                  strcpy(__dest,pcVar53);
                  iVar52 = FUN_0009a4f0(iVar52,iVar45 + 0x24baa);
                  ppcVar49 = ppcVar49 + 3;
                } while (iVar52 != 0);
              }
            }
            iVar52 = FUN_0009a5d8(iVar25,iVar15 + 0x24c08);
            if (iVar52 != 0) {
              iVar27 = 0;
              do {
                iVar27 = iVar27 + 1;
                iVar52 = FUN_0009a4f0(iVar52,iVar15 + 0x24c08);
              } while (iVar52 != 0);
              pvVar29 = operator_new(8);
              *(void **)(pbVar22 + 0x2e8) = pvVar29;
              *(int *)((int)pvVar29 + 4) = iVar27;
              puVar20 = (undefined4 *)operator_new__(iVar27 * 0xc);
              if (iVar27 != 0) {
                iVar52 = 0;
                puVar51 = puVar20;
                do {
                  iVar52 = iVar52 + 1;
                  puVar51[2] = 0;
                  puVar51[1] = 100;
                  *puVar51 = 0;
                  puVar51 = puVar51 + 3;
                } while (iVar27 != iVar52);
              }
              iVar52 = DAT_00024f20;
              **(undefined4 **)(pbVar22 + 0x2e8) = puVar20;
              puVar20 = (undefined4 *)**(undefined4 **)(pbVar22 + 0x2e8);
              iVar27 = FUN_0009a5d8(iVar25,iVar52 + 0x24c5e);
              if (iVar27 != 0) {
                iVar54 = DAT_00024f24 + 0x24c80;
                iVar45 = 0;
                iVar55 = DAT_00024f28 + 0x24c84;
                while( true ) {
                  pcVar24 = (char *)FUN_0009a4a0(iVar27,iVar54);
                  if ((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) {
                    uVar17 = FUN_0008f414();
                    *puVar20 = uVar17;
                  }
                  FUN_0009a8bc(iVar27,iVar55,puVar20 + 1);
                  iVar45 = iVar45 + puVar20[1];
                  puVar20[2] = iVar45;
                  iVar27 = FUN_0009a4f0(iVar27,iVar52 + 0x24c5e);
                  if (iVar27 == 0) break;
                  puVar20 = puVar20 + 3;
                }
              }
            }
            iVar25 = FUN_0009a4f0(iVar25,iVar16 + 0x24cc8);
            if (iVar25 == 0) break;
            pbVar22 = pbVar22 + 0x2ec;
          }
        }
      }
      (**(code **)(*piVar18 + 4))(piVar18);
    }
    if (*(int *)(DAT_000247f8 + 0x240a6) == 0) {
      uVar17 = 1;
    }
    else {
      iVar19 = *(int *)(DAT_000247f8 + 0x240aa);
      puVar20 = (undefined4 *)operator_new__(iVar19 * 0x24 + 8);
      puVar20[1] = iVar19;
      puVar51 = puVar20 + 2;
      *puVar20 = 0x24;
      if (iVar19 != 0) {
        iVar47 = 0;
        puVar20 = puVar51;
        do {
          iVar43 = 0;
          puVar20[4] = 0;
          puVar20[8] = 0;
          puVar20[5] = 0;
          puVar20[6] = 0;
          puVar20[7] = 0;
          do {
            FUN_0001f2f8(puVar20 + iVar43 + 4,0);
            puVar20[iVar43] = 0;
            iVar43 = iVar43 + 1;
          } while (iVar43 != 4);
          iVar47 = iVar47 + 1;
          puVar20 = puVar20 + 9;
        } while (iVar19 != iVar47);
      }
      iVar19 = DAT_000247fc;
      piVar48 = (int *)(DAT_000247fc + 0x24106);
      piVar18 = (int *)(DAT_000247fc + 0x2410a);
      *(undefined4 **)(DAT_000247fc + 0x2416e) = puVar51;
      iVar23 = DAT_00024814;
      iVar43 = DAT_00024810;
      iVar47 = DAT_0002480c;
      if (0 < *piVar18) {
        iVar46 = 0;
        iVar56 = 0;
        iVar33 = DAT_00024800 + 0x2414a;
        iVar39 = DAT_00024804 + 0x24152;
        iVar31 = DAT_00024808 + 0x2415a;
        local_260 = 0;
        iVar34 = DAT_00024818 + 0x2415e;
        do {
          iVar21 = 0;
          do {
            iVar50 = iVar21 + 1;
            iVar35 = *piVar48 + iVar56;
            FUN_0008f060(auStack_1a4,0x100,iVar33,iVar35 + 0x1c0,*(undefined *)(iVar35 + 0x1c0),
                         iVar50);
            iVar35 = *(int *)(iVar19 + 0x2416e);
            uVar17 = FUN_0001e818();
            FUN_0009e838(auStack_54,auStack_1a4);
            FUN_00093c60(&local_1b0,uVar17,auStack_54);
            FUN_0001f2f8(iVar35 + iVar46 + (iVar21 + 4) * 4,local_1b0);
            FUN_0001ed98(&local_1b0);
            FUN_0009e858(auStack_54);
            iVar35 = *(int *)(iVar19 + 0x2416e) + iVar46;
            FUN_000948a8(&local_1b4,*(undefined4 *)(iVar35 + (iVar21 + 4) * 4),0);
            uVar17 = FUN_0008c48c(**(undefined4 **)(local_1b4 + 0x48),iVar39);
            *(undefined4 *)(iVar35 + iVar21 * 4) = uVar17;
            FUN_00022234(&local_1b4);
            iVar21 = iVar50;
          } while (iVar50 != 2);
          FUN_0008f060(auStack_1a4,0x100,iVar31,*piVar48 + iVar56 + 0x1c0);
          iVar21 = FUN_0009fac8(auStack_1a4);
          if (iVar21 != 0) {
            iVar21 = *(int *)(iVar19 + 0x2416e);
            uVar17 = FUN_0001e818();
            FUN_0009e838(auStack_7c,auStack_1a4);
            FUN_00093c60(&local_1b8,uVar17,auStack_7c);
            FUN_0001f2f8(iVar21 + iVar46 + 0x18,local_1b8);
            FUN_0001ed98(&local_1b8);
            FUN_0009e858(auStack_7c);
            iVar21 = *(int *)(iVar19 + 0x2416e) + iVar46;
            FUN_000948a8(&local_1bc,*(undefined4 *)(iVar21 + 0x18),0);
            uVar17 = FUN_0008c48c(**(undefined4 **)(local_1bc + 0x48),iVar39);
            *(undefined4 *)(iVar21 + 8) = uVar17;
            FUN_00022234(&local_1bc);
          }
          FUN_0008f060(auStack_1a4,0x100,iVar47 + 0x24226,
                       *(int *)(iVar43 + 0x24224) + iVar56 + 0x1c0);
          iVar21 = FUN_0009fac8(auStack_1a4);
          if (iVar21 != 0) {
            iVar21 = *(int *)(iVar43 + 0x2428c);
            uVar17 = FUN_0001e818();
            FUN_0009e838(auStack_a4,auStack_1a4);
            FUN_00093c60(&local_1c0,uVar17,auStack_a4);
            FUN_0001f2f8(iVar21 + iVar46 + 0x1c,local_1c0);
            FUN_0001ed98(&local_1c0);
            FUN_0009e858(auStack_a4);
            iVar21 = *(int *)(iVar43 + 0x2428c) + iVar46;
            FUN_000948a8(&local_1c4,*(undefined4 *)(iVar21 + 0x1c),0);
            uVar17 = FUN_0008c48c(**(undefined4 **)(local_1c4 + 0x48),iVar34);
            *(undefined4 *)(iVar21 + 0xc) = uVar17;
            FUN_00022234(&local_1c4);
          }
          iVar46 = iVar46 + 0x24;
          iVar56 = iVar56 + 0x2ec;
          local_260 = local_260 + 1;
        } while (local_260 < *(int *)(iVar23 + 0x24252));
        puVar51 = *(undefined4 **)(iVar23 + 0x242b6);
      }
      iVar19 = DAT_0002481c;
      iVar47 = puVar51[2];
      local_1c8 = 0;
      FUN_00022784(*(undefined4 *)(iVar47 + 0xc),*(undefined4 *)(iVar47 + 4),
                   *(undefined4 *)(iVar47 + 0x10),&local_1c8);
      FUN_00022208(iVar19 + 0x24274,local_1c8);
      FUN_000221ac(&local_1c8);
      FUN_00022208(iVar19 + 0x24278,*(undefined4 *)(iVar19 + 0x24274));
      uVar17 = 1;
      *(undefined *)(iVar19 + 0x242cc) = 1;
    }
  }
  else {
    uVar17 = 0;
  }
  if (local_2c == **(int **)(iVar30 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}



