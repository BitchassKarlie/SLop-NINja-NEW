/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088e88 FUN_00088e88 */

void FUN_00088e88(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  void *pvVar19;
  undefined4 uVar20;
  int iVar21;
  int **ppiVar22;
  uint **ppuVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  int **ppiVar28;
  int iVar29;
  char *pcVar30;
  uint uVar31;
  void **ppvVar32;
  int *piVar33;
  int **ppiVar34;
  undefined4 *puVar35;
  uint uVar36;
  bool bVar37;
  float fVar38;
  int local_110;
  undefined4 *local_108;
  undefined4 *local_104;
  uint local_f8;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined auStack_c0 [4];
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0 [20];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  void *local_44;
  void *pvStack_40;
  void *pvStack_3c;
  double local_38;
  uint local_2c [2];
  
  uVar20 = DAT_00089050;
  ppuVar23 = (uint **)(DAT_00089030 + 0x88e96);
  *ppuVar23 = param_1 + 2;
  param_1[0x1e] = uVar20;
  param_1[9] = 0;
  param_1[0x1d] = uVar20;
  param_1[8] = 0;
  *(undefined *)((int)param_1 + 0x25d) = 0;
  *(undefined *)((int)param_1 + 0x25e) = 0;
  puVar24 = *ppuVar23;
  lVar3 = (ulonglong)*puVar24 * (ulonglong)puVar24[2] +
          CONCAT44(puVar24[2] * puVar24[1] + *puVar24 * puVar24[3],puVar24[4]);
  uVar31 = puVar24[5] + (int)((ulonglong)lVar3 >> 0x20);
  *puVar24 = (uint)lVar3;
  puVar24[1] = uVar31;
  iVar5 = DAT_00089034;
  fVar4 = DAT_00089028;
  param_1[0x23] = uVar20;
  param_1[0x27] = uVar20;
  param_1[0x24] = uVar20;
  param_1[0x28] = uVar20;
  param_1[0x25] = uVar20;
  param_1[0x93] = 0;
  param_1[0x29] = uVar20;
  param_1[0x26] = uVar20;
  param_1[0x2a] = uVar20;
  iVar21 = DAT_00089038 + 0x88f2e;
  param_1[0x98] =
       DAT_0008902c +
       ((float)(ulonglong)((uVar31 >> 0xd) - (uint)(uVar31 * 0x80000 < uVar31)) / fVar4) *
       DAT_0008902c;
  uVar20 = DAT_00089048;
  param_1[0x1f] = DAT_00089048;
  param_1[0x20] = uVar20;
  param_1[0x21] = uVar20;
  param_1[0x22] = uVar20;
  iVar6 = DAT_00089040;
  local_110 = 0;
  iVar10 = DAT_0008903c + 0x88f5a;
  iVar25 = DAT_00089044 + 0x88f64;
  puVar35 = param_1;
  local_108 = param_1;
  local_104 = param_1;
  while( true ) {
    piVar11 = (int *)operator_new(0x48);
    FUN_0009c1d4(piVar11,*(undefined4 *)(iVar5 + 0x88f74 + local_110 * 4));
    if (piVar11 != (int *)0x0) break;
LAB_00089002:
    puVar35 = puVar35 + 0x10;
    local_110 = local_110 + 1;
    local_108 = local_108 + 4;
    local_104 = local_104 + 1;
    if (local_110 == 4) {
      *param_1 = 0;
      return;
    }
  }
  iVar12 = FUN_0009b0e4(piVar11,0);
  if (iVar12 != 0) {
    FUN_0009a5d8(piVar11,iVar6 + 0x89060);
    iVar26 = FUN_0009a0e8();
    uVar7 = DAT_0008904c;
    uVar20 = DAT_00089048;
    puVar35[0x4a] = 0xffffffff;
    puVar35[0x3c] = uVar7;
    uVar7 = DAT_00089050;
    puVar35[0x3b] = 10;
    puVar35[0x3d] = uVar7;
    puVar35[0x3e] = uVar7;
    puVar35[0x48] = 100;
    uVar7 = DAT_00089054;
    puVar35[0x47] = uVar20;
    puVar35[0x49] = 0;
    puVar35[0x3f] = uVar20;
    puVar35[0x40] = uVar20;
    puVar35[0x43] = uVar20;
    puVar35[0x44] = uVar20;
    puVar35[0x45] = uVar20;
    puVar35[0x41] = uVar7;
    puVar35[0x42] = uVar20;
    *(undefined *)(puVar35 + 0x46) = 1;
    *(undefined *)((int)puVar35 + 0x119) = 1;
    iVar12 = DAT_00089400;
    if (iVar26 != 0) {
      local_f8 = 0;
      iVar29 = DAT_000893fc + 0x890dc;
      do {
        pcVar30 = (char *)(*(int *)(iVar26 + 0x20) + 8);
        iVar13 = strcmp(pcVar30,(char *)(iVar12 + 0x89104));
        if (iVar13 == 0) {
          puVar24 = (uint *)operator_new(0x7c);
          FUN_00085070(puVar24,param_1 + local_110 * 0x10 + 0x3b);
          iVar13 = DAT_00089410;
          puVar24[0x1b] = local_f8;
          local_2c[0] = 0xffffffff;
          local_f8 = local_f8 + 1;
          FUN_0009a8bc(iVar26,iVar13 + 0x891da,local_2c);
          uVar31 = ~local_2c[0] >> 0x1f;
          if (local_110 == 2) {
            uVar31 = 1;
          }
          if (uVar31 != 0) {
            *puVar24 = local_2c[0];
          }
          FUN_0009a8bc(iVar26,DAT_00089414 + 0x8920c,puVar24 + 0x1d);
          pcVar30 = (char *)FUN_0009a4a0(iVar26,DAT_00089418 + 0x89216);
          if ((pcVar30 != (char *)0x0) && (*pcVar30 != '\0')) {
            iVar13 = strcmp(pcVar30,(char *)(DAT_0008941c + 0x89226));
            if (iVar13 == 0) {
              puVar24[1] = 0xfffffffe;
            }
            else {
              uVar31 = atoi(pcVar30);
              if ((-1 < (int)uVar31) && ((int)*puVar24 <= (int)uVar31)) {
                puVar24[1] = uVar31;
              }
            }
          }
          local_2c[0] = 0xffffffff;
          FUN_0009a8bc(iVar26,DAT_00089420 + 0x89242,local_2c);
          iVar13 = DAT_00089424;
          if (-1 < (int)local_2c[0]) {
            puVar24[0xf] = local_2c[0];
          }
          iVar13 = FUN_0009a884(iVar26,iVar13 + 0x8925a,&local_38);
          if (iVar13 == 0) {
            puVar24[0x1a] = (uint)(float)local_38;
          }
          iVar13 = FUN_0009a884(iVar26,DAT_00089428 + 0x89276,&local_38);
          if (iVar13 == 0) {
            puVar24[0x11] = (uint)(float)local_38;
          }
          FUN_0009a8bc(iVar26,DAT_0008942c + 0x89294,puVar24 + 0x13);
          FUN_0009a8bc(iVar26,DAT_00089430 + 0x892a0,puVar24 + 0x13);
          FUN_0009a8bc(iVar26,DAT_00089434 + 0x892ae,puVar24 + 0x14);
          uVar31 = puVar24[0x14];
          iVar13 = DAT_00089438 + 0x892be;
          if ((int)puVar24[0x13] < 0) {
            puVar24[0x13] = uVar31;
          }
          bVar37 = (int)uVar31 < 0;
          if (bVar37) {
            uVar31 = puVar24[0x13];
          }
          if (bVar37) {
            puVar24[0x14] = uVar31;
          }
          iVar13 = FUN_0009a5d8(iVar26,iVar13);
          if (iVar13 != 0) {
            puVar15 = (undefined4 *)operator_new(8);
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar24[0x1c] = (uint)puVar15;
            FUN_00086564(puVar15,iVar13);
          }
          iVar14 = DAT_0008943c + 0x892ec;
          iVar13 = FUN_0009a5d8(iVar26,iVar14);
          iVar14 = FUN_0008f414(iVar14);
          for (; iVar13 != 0; iVar13 = FUN_0009a110(iVar13)) {
            while (iVar16 = FUN_0008f414(*(int *)(iVar13 + 0x20) + 8), iVar14 != iVar16) {
              iVar13 = FUN_0009a110(iVar13);
              if (iVar13 == 0) goto LAB_00089326;
            }
            puVar24[3] = puVar24[3] + 1;
          }
LAB_00089326:
          uVar31 = puVar24[3];
          puVar15 = (undefined4 *)operator_new__((uVar31 * 0xd + 1) * 8);
          puVar15[1] = uVar31;
          puVar27 = puVar15 + 2;
          *puVar15 = 0x68;
          uVar8 = DAT_000893f8;
          uVar7 = DAT_000893f4;
          uVar20 = DAT_000893f0;
          if (uVar31 != 0) {
            uVar36 = 0;
            do {
              puVar15[4] = 0;
              puVar15[8] = uVar7;
              puVar15[5] = 0;
              puVar15[0xe] = uVar8;
              puVar15[6] = 0;
              puVar15[0xf] = uVar7;
              *(undefined *)((int)puVar15 + 0x6d) = 0;
              local_50 = uVar20;
              local_4c = uVar8;
              local_48 = uVar20;
              uVar36 = uVar36 + 1;
              puVar15[9] = uVar20;
              puVar15[10] = uVar8;
              puVar15[0xb] = uVar20;
              puVar15[0x15] = uVar20;
              puVar15[0x10] = 0;
              puVar15[0x16] = uVar20;
              puVar15[7] = 0;
              puVar15[0x14] = uVar20;
              puVar15[0x13] = uVar20;
              puVar15[0x12] = uVar20;
              puVar15[0x11] = uVar20;
              puVar15[0x17] = 0;
              puVar15[0x1a] = uVar20;
              puVar15[2] = 0;
              puVar15[0xc] = uVar7;
              puVar15[0xd] = uVar7;
              *(undefined *)(puVar15 + 0x1b) = 0;
              puVar15 = puVar15 + 0x1a;
            } while (uVar31 != uVar36);
          }
          iVar13 = DAT_00089440;
          puVar24[2] = (uint)puVar27;
          iVar17 = FUN_0009a5d8(iVar26,iVar13 + 0x893da);
          iVar16 = DAT_00089448;
          iVar13 = DAT_00089444;
          ppvVar32 = (void **)puVar24[2];
          if (iVar17 != 0) {
            while( true ) {
              iVar18 = FUN_0008f414(*(int *)(iVar17 + 0x20) + 8);
              if (iVar14 == iVar18) {
                uVar20 = FUN_0009a4a0(iVar17,iVar10);
                pvVar19 = (void *)FUN_00084f38(uVar20,ppvVar32 + 1);
                ppvVar32[5] = pvVar19;
                if (0 < (int)pvVar19) {
                  pvVar19 = operator_new__((int)pvVar19 << 2);
                  *ppvVar32 = pvVar19;
                  if (0 < (int)ppvVar32[5]) {
                    iVar18 = 0;
                    while( true ) {
                      *(undefined4 *)((int)pvVar19 + iVar18 * 4) = 0xffffffff;
                      iVar18 = iVar18 + 1;
                      if ((int)ppvVar32[5] <= iVar18) break;
                      pvVar19 = *ppvVar32;
                    }
                  }
                }
                iVar18 = FUN_0009a884(iVar17,iVar21,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0xf] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,iVar25,&local_38);
                if (iVar18 == 0) {
                  pvVar19 = (void *)(float)local_38;
                  ppvVar32[0x11] = pvVar19;
                }
                else {
                  pvVar19 = ppvVar32[0x11];
                }
                puVar24[0x1e] =
                     (int)((float)(longlong)(int)puVar24[0x1e] +
                          ((float)pvVar19 + (float)ppvVar32[0xf]) * DAT_0008944c);
                iVar18 = FUN_0009a884(iVar17,iVar29,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0x12] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,iVar13 + 0x8951e,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0x12] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,DAT_00089808 + 0x89538,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0x13] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,DAT_0008980c + 0x89552,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0x14] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,DAT_00089810 + 0x8956c,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0xc] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,DAT_00089814 + 0x89586,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0xd] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,DAT_00089818 + 0x895a0,&local_38);
                if (iVar18 == 0) {
                  pvVar19 = (void *)(float)local_38;
                  ppvVar32[10] = pvVar19;
                }
                else {
                  pvVar19 = ppvVar32[10];
                }
                iVar18 = DAT_0008981c;
                ppvVar32[0xb] = pvVar19;
                iVar18 = FUN_0009a884(iVar17,iVar18 + 0x895c2,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[10] = (void *)(float)local_38;
                }
                iVar18 = FUN_0009a884(iVar17,DAT_00089820 + 0x895dc,&local_38);
                if (iVar18 == 0) {
                  ppvVar32[0xb] = (void *)(float)local_38;
                }
                pcVar30 = (char *)FUN_0009a4a0(iVar17,DAT_00089824 + 0x895f4);
                if ((pcVar30 != (char *)0x0) && (*pcVar30 != '\0')) {
                  FUN_00084684(&local_44,pcVar30);
                  ppvVar32[7] = local_44;
                  ppvVar32[8] = pvStack_40;
                  ppvVar32[9] = pvStack_3c;
                }
                pcVar30 = (char *)FUN_0009a4a0(iVar17,DAT_00089828 + 0x8960a);
                if ((pcVar30 == (char *)0x0) || (*pcVar30 == '\0')) {
                  ppvVar32[0xe] = (void *)0x0;
                }
                else {
                  pvVar19 = (void *)FUN_00085de4();
                  ppvVar32[0xe] = pvVar19;
                }
                pcVar30 = (char *)FUN_0009a4a0(iVar17,DAT_0008982c + 0x89622);
                if (pcVar30 != (char *)0x0) {
                  uVar31 = strcmp((char *)(DAT_00089830 + 0x8962e),pcVar30);
                  pcVar30 = (char *)(1 - uVar31);
                  if (1 < uVar31) {
                    pcVar30 = (char *)0x0;
                  }
                }
                *(char *)(ppvVar32 + 0x19) = (char)pcVar30;
              }
              iVar17 = FUN_0009a4f0(iVar17,iVar16 + 0x89458);
              if (iVar17 == 0) break;
              ppvVar32 = ppvVar32 + 0x1a;
            }
          }
          iVar13 = FUN_0009a5d8(iVar26,DAT_00089834 + 0x89646);
          if (iVar13 != 0) {
            iVar14 = FUN_0009a884(iVar13,DAT_00089838 + 0x89654,&local_38);
            if (iVar14 == 0) {
              puVar24[4] = (uint)(float)local_38;
            }
            iVar14 = FUN_0009a884(iVar13,DAT_0008983c + 0x8966e,&local_38);
            if (iVar14 == 0) {
              puVar24[5] = (uint)(float)local_38;
            }
            iVar13 = FUN_0009a884(iVar13,DAT_00089840 + 0x89688,&local_38);
            if (iVar13 == 0) {
              puVar24[6] = (uint)(float)local_38;
            }
          }
          iVar13 = FUN_0009a5d8(iVar26,DAT_00089844 + 0x896a0);
          if (iVar13 != 0) {
            iVar14 = FUN_0009a884(iVar13,DAT_00089848 + 0x896b0,&local_38);
            if (iVar14 == 0) {
              puVar24[10] = (uint)(float)local_38;
            }
            iVar14 = FUN_0009a884(iVar13,DAT_0008984c + 0x896ca,&local_38);
            if (iVar14 == 0) {
              puVar24[0xc] = (uint)(float)local_38;
            }
            iVar14 = FUN_0009a884(iVar13,DAT_00089850 + 0x896e4,&local_38);
            if (iVar14 == 0) {
              puVar24[7] = (uint)(float)local_38;
            }
            fVar4 = DAT_00089804;
            fVar38 = (float)puVar24[10];
            bVar37 = fVar38 < DAT_00089804;
            bVar1 = fVar38 != DAT_00089804;
            bVar2 = NAN(DAT_00089804);
            iVar14 = DAT_00089854 + 0x8970a;
            if (bVar1 && bVar37 == (NAN(fVar38) || bVar2)) {
              puVar24[8] = (uint)DAT_00089804;
            }
            if (bVar1 && bVar37 == (NAN(fVar38) || bVar2)) {
              puVar24[9] = (uint)fVar4;
            }
            iVar14 = FUN_0009a884(iVar13,iVar14,&local_38);
            if (iVar14 == 0) {
              puVar24[8] = (uint)(float)local_38;
            }
            iVar14 = FUN_0009a884(iVar13,DAT_00089858 + 0x89732,&local_38);
            if (iVar14 == 0) {
              puVar24[9] = (uint)(float)local_38;
            }
            pcVar30 = (char *)FUN_0009a4a0(iVar13,DAT_0008985c + 0x8974a);
            if ((pcVar30 == (char *)0x0) || (*pcVar30 == '\0')) {
              iVar14 = 1;
            }
            else {
              iVar14 = strcmp((char *)(DAT_00089860 + 0x89762),pcVar30);
              if (iVar14 != 0) {
                iVar14 = 1;
              }
            }
            iVar16 = DAT_00089864;
            *(char *)(puVar24 + 0xe) = (char)iVar14;
            uVar20 = FUN_0009a4a0(iVar13,iVar16 + 0x89776);
            bVar9 = FUN_00084524(uVar20,DAT_00089868 + 0x8977e);
            *(byte *)((int)puVar24 + 0x39) = bVar9 ^ 1;
          }
          iVar13 = FUN_0009a5d8(iVar26,DAT_0008986c + 0x89790);
          uVar31 = puVar24[0x16];
          uVar36 = puVar24[0x17];
          if (uVar31 != uVar36) {
            do {
              if (*(void **)(uVar31 + 4) != (void *)0x0) {
                operator_delete(*(void **)(uVar31 + 4));
                *(undefined4 *)(uVar31 + 8) = 0;
                *(undefined4 *)(uVar31 + 0xc) = 0;
                *(undefined4 *)(uVar31 + 4) = 0;
              }
              uVar31 = uVar31 + 0x10;
            } while (uVar36 != uVar31);
            uVar36 = puVar24[0x16];
          }
          puVar24[0x17] = uVar36;
          puVar24[0x19] = 0;
          if (iVar13 != 0) {
            uVar20 = FUN_0009a4a0(iVar13,DAT_00089870 + 0x897ce);
            FUN_00084f38(uVar20,puVar24 + 0x15);
          }
          iVar13 = local_110 + puVar35[0x49] * 4;
          iVar14 = iVar13 + 0xb;
          FUN_00085a44(param_1 + iVar13 * 4 + 0x2b);
          *(uint **)param_1[iVar14 * 4 + 1] = puVar24;
          param_1[iVar14 * 4 + 1] = param_1[iVar14 * 4 + 1] + 4;
        }
        else {
          iVar14 = strcmp(pcVar30,(char *)(DAT_00089404 + 0x89114));
          iVar13 = DAT_00089b48;
          uVar20 = DAT_00089b38;
          if (iVar14 == 0) {
            puVar35[0x49] = 0;
            puVar35[0x47] = uVar20;
            uVar7 = DAT_00089b3c;
            puVar35[0x4a] = 0xffffffff;
            puVar35[0x3c] = uVar7;
            uVar7 = DAT_00089b40;
            puVar35[0x3b] = 10;
            puVar35[0x3d] = uVar7;
            puVar35[0x3e] = uVar7;
            puVar35[0x3f] = uVar20;
            puVar35[0x40] = uVar20;
            puVar35[0x43] = uVar20;
            puVar35[0x44] = uVar20;
            puVar35[0x45] = uVar20;
            uVar7 = DAT_00089b44;
            puVar35[0x42] = uVar20;
            puVar35[0x41] = uVar7;
            puVar35[0x48] = 100;
            *(undefined *)(puVar35 + 0x46) = 1;
            *(undefined *)((int)puVar35 + 0x119) = 1;
            FUN_0009a8bc(iVar26,iVar13 + 0x898d4,param_1 + local_110 * 0x10 + 0x3b);
            iVar13 = FUN_0009a884(iVar26,DAT_00089b4c + 0x898ec,&local_38);
            if (iVar13 == 0) {
              puVar35[0x3c] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b50 + 0x89906,&local_38);
            if (iVar13 == 0) {
              puVar35[0x3d] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b54 + 0x89920,&local_38);
            if (iVar13 == 0) {
              puVar35[0x3e] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b58 + 0x8993a,&local_38);
            if (iVar13 == 0) {
              puVar35[0x3f] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b5c + 0x89954,&local_38);
            if (iVar13 == 0) {
              puVar35[0x40] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b60 + 0x8996e,&local_38);
            if (iVar13 == 0) {
              puVar35[0x41] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b64 + 0x89988,&local_38);
            if (iVar13 == 0) {
              puVar35[0x42] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b68 + 0x899a2,&local_38);
            if (iVar13 == 0) {
              puVar35[0x43] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b6c + 0x899bc,&local_38);
            if (iVar13 == 0) {
              puVar35[0x44] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b70 + 0x899d6,&local_38);
            if (iVar13 == 0) {
              puVar35[0x45] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b74 + 0x899f0,&local_38);
            if (iVar13 == 0) {
              puVar35[0x47] = (float)local_38;
            }
            FUN_0009a8bc(iVar26,DAT_00089b78 + 0x89a0a,param_1 + local_110 * 0x10 + 0x48);
            pcVar30 = (char *)FUN_0009a4a0(iVar26,DAT_00089b7c + 0x89a14);
            if ((pcVar30 == (char *)0x0) || (*pcVar30 == '\0')) {
              iVar13 = 1;
            }
            else {
              iVar13 = strcmp((char *)(DAT_00089b80 + 0x89a28),pcVar30);
              if (iVar13 != 0) {
                iVar13 = 1;
              }
            }
            iVar14 = DAT_00089b84;
            *(char *)(puVar35 + 0x46) = (char)iVar13;
            iVar13 = DAT_00089b88;
            uVar20 = FUN_0009a4a0(iVar26,iVar14 + 0x89a3c);
            bVar9 = FUN_00084524(uVar20,DAT_00089b8c + 0x89a48);
            *(byte *)((int)puVar35 + 0x119) = bVar9 ^ 1;
            iVar14 = FUN_0009a4a0(iVar26,iVar13 + 0x89a46);
            if (iVar14 != 0) {
              pcVar30 = (char *)FUN_0009a4a0(iVar26,iVar13 + 0x89a46);
              iVar13 = strcmp(pcVar30,(char *)(DAT_00089b90 + 0x89a6a));
              if (iVar13 == 0) {
                puVar35[0x49] = 1;
                puVar35[0x4a] = 2;
                puVar35[0x4b] = 0xffffffff;
              }
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b94 + 0x89a8c,&local_38);
            if (iVar13 == 0) {
              local_104[0x1f] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b98 + 0x89aa8,&local_38);
            if (iVar13 == 0) {
              local_104[0x23] = (float)local_38;
            }
            iVar13 = FUN_0009a884(iVar26,DAT_00089b9c + 0x89ac4,&local_38);
            if (iVar13 == 0) {
              local_104[0x27] = (float)local_38;
            }
          }
          else {
            iVar13 = strcmp(pcVar30,(char *)(DAT_00089408 + 0x89124));
            if (iVar13 == 0) {
              FUN_00086564(param_1 + local_110 * 2 + 0x7b,iVar26);
            }
            else {
              iVar13 = strcmp(pcVar30,(char *)(DAT_0008940c + 0x89134));
              if (iVar13 == 0) {
                local_58 = 0xfff0bdc0;
                local_54 = 0xffffffff;
                piVar33 = &local_cc;
                do {
                  piVar33[7] = -1;
                  piVar33 = piVar33 + 1;
                } while (piVar33 != local_b0 + 0xd);
                local_5c = DAT_000893f0;
                local_cc = iVar13;
                local_c8 = iVar13;
                local_c4 = iVar13;
                local_bc = iVar13;
                local_b8 = iVar13;
                local_b4 = iVar13;
                local_60 = iVar13;
                FUN_00086624(&local_cc,iVar26);
                iVar13 = local_110 + puVar35[0x49] * 4;
                iVar14 = iVar13 + 0x21;
                FUN_00087f54(param_1 + iVar13 * 4 + 0x83);
                FUN_00086a14(param_1[iVar14 * 4 + 1],&local_cc);
                param_1[iVar14 * 4 + 1] = param_1[iVar14 * 4 + 1] + 0x7c;
                FUN_000223ec(auStack_c0);
              }
            }
          }
        }
        iVar26 = FUN_0009a110(iVar26);
      } while (iVar26 != 0);
    }
  }
  ppiVar22 = (int **)local_108[0x2c];
  ppiVar34 = (int **)local_108[0x2d];
joined_r0x00088f9e:
  if (ppiVar22 != ppiVar34) {
    do {
      piVar33 = *ppiVar22;
      if (piVar33[1] == -1) {
        piVar33[1] = -2;
        ppiVar28 = (int **)local_108[0x2c];
        if (ppiVar28 != (int **)local_108[0x2d]) goto code_r0x00088fd0;
      }
      ppiVar22 = ppiVar22 + 1;
      if (ppiVar34 == ppiVar22) break;
    } while( true );
  }
  (**(code **)(*piVar11 + 4))();
  goto LAB_00089002;
code_r0x00088fd0:
  iVar12 = 1000000;
  do {
    iVar26 = **ppiVar28;
    if ((*piVar33 < iVar26) && (iVar26 <= iVar12)) {
      iVar12 = iVar26 + -1;
    }
    ppiVar28 = ppiVar28 + 1;
  } while ((int **)local_108[0x2d] != ppiVar28);
  if (iVar12 < 1000000) {
    piVar33[1] = iVar12;
  }
  ppiVar22 = ppiVar22 + 1;
  goto joined_r0x00088f9e;
}



