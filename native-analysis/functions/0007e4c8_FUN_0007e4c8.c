/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007e4c8 FUN_0007e4c8 */

void FUN_0007e4c8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
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
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  float *__src;
  int iVar28;
  char *pcVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  void *pvVar36;
  int *piVar37;
  undefined4 *puVar38;
  int iVar39;
  char *pcVar40;
  char *__s2;
  undefined4 extraout_r1;
  float fVar41;
  int iVar42;
  undefined4 extraout_r1_00;
  int iVar43;
  undefined4 *puVar44;
  int iVar45;
  char *__s2_00;
  char *__s2_01;
  float fVar46;
  int iVar47;
  int iVar48;
  undefined4 *puVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  float *pfVar57;
  float *pfVar58;
  size_t __n;
  int iVar59;
  int iVar60;
  char *pcVar61;
  int iVar62;
  int iVar63;
  float *pfVar64;
  char local_1294;
  int local_1258;
  int *local_1250;
  int local_11bc;
  int local_11b8;
  int local_119c [1024];
  int local_19c [13];
  void *local_168;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  char acStack_134 [256];
  int local_34;
  
  iVar2 = DAT_0007e6a4;
  iVar55 = DAT_0007e6a0 + 0x7e4e0;
  local_34 = **(int **)(iVar55 + DAT_0007e6a4);
  if (*param_1 == 0) {
    puVar38 = (undefined4 *)operator_new__(0x23008);
    puVar44 = puVar38 + 2;
    *puVar38 = 0x8c;
    puVar49 = puVar38 + 0x8c00;
    puVar38[1] = 0x400;
    do {
      puVar38[0x24] = 0;
      puVar38 = puVar38 + 0x23;
    } while (puVar38 != puVar49);
    iVar45 = 0x8c;
    iVar39 = 1;
    *param_1 = (int)puVar44;
    do {
      iVar39 = iVar39 + 1;
      FUN_00093804(*param_1 + iVar45,0,0x8c);
      iVar50 = *param_1 + iVar45;
      iVar45 = iVar45 + 0x8c;
      *(int *)(iVar50 + 0x40) = iVar39;
    } while (iVar39 != 0x400);
    *(undefined4 *)(*param_1 + 0x22fb4) = 0;
    *(undefined2 *)(param_1 + 1) = 1;
  }
  if (param_1[8] == 0) {
    piVar37 = (int *)operator_new(0x14);
    *piVar37 = DAT_0007f6e4 + 0x7f614;
    puVar38 = (undefined4 *)operator_new__(0x21c8);
    puVar49 = puVar38 + 2;
    *puVar38 = 0x48;
    puVar44 = puVar38 + 0x870;
    puVar38[1] = 0x78;
    do {
      puVar38[0x10] = 0;
      puVar38[0x11] = 0;
      puVar38[0x12] = 0;
      *(undefined *)(puVar38 + 0x13) = 0;
      puVar38 = puVar38 + 0x12;
    } while (puVar38 != puVar44);
    piVar37[1] = (int)puVar49;
    pvVar36 = operator_new__(0x1e0);
    piVar37[2] = (int)pvVar36;
    iVar39 = 0;
    iVar45 = 0;
    do {
      iVar50 = iVar45;
      *(int *)(piVar37[2] + iVar50) = piVar37[1] + iVar39;
      iVar39 = iVar39 + 0x48;
      iVar45 = iVar50 + 4;
    } while (iVar50 + 4 != 0x1e0);
    local_11b8 = DAT_0007f6e8;
    piVar37[3] = iVar50 + -0x164;
    piVar37[4] = iVar50 + -0x164;
    param_1[8] = (int)piVar37;
    local_11bc = DAT_0007f6ec;
  }
  else {
    local_11bc = DAT_0007e6a8;
    local_11b8 = DAT_0007e6ac;
  }
  local_1250 = local_19c;
  iVar45 = DAT_0007e6b0 + 0x7e520;
  iVar50 = DAT_0007e6b4 + 0x7e524;
  iVar56 = DAT_0007e6b8 + 0x7e526;
  iVar39 = DAT_0007e6bc + 0x7e52a;
  do {
    FUN_0009c1d4(local_1250,param_3);
    iVar25 = FUN_0009b0e4(local_1250,0);
    if (iVar25 == 0) {
      FUN_00099050();
      FUN_0009903c();
      bVar1 = false;
    }
    else {
      uVar26 = FUN_0009a5d8(local_1250,DAT_0007e6c0 + 0x7e57e);
      uVar26 = FUN_0009a5d8(uVar26,DAT_0007e6c4 + 0x7e586);
      iVar27 = FUN_0009a5d8(uVar26,DAT_0007e6c8 + 0x7e58e);
      __src = (float *)operator_new__(0xa0a0);
      param_1[4] = 0;
      iVar24 = DAT_0007e75c;
      iVar23 = DAT_0007e74c;
      iVar22 = DAT_0007e748;
      iVar21 = DAT_0007e744;
      iVar20 = DAT_0007e740;
      iVar19 = DAT_0007e73c;
      iVar18 = DAT_0007e738;
      iVar17 = DAT_0007e734;
      iVar16 = DAT_0007e730;
      iVar15 = DAT_0007e72c;
      iVar14 = DAT_0007e728;
      iVar13 = DAT_0007e724;
      iVar12 = DAT_0007e720;
      iVar11 = DAT_0007e71c;
      iVar10 = DAT_0007e718;
      iVar9 = DAT_0007e714;
      iVar8 = DAT_0007e710;
      iVar7 = DAT_0007e70c;
      iVar35 = DAT_0007e708;
      iVar43 = DAT_0007e704;
      iVar34 = DAT_0007e700;
      iVar6 = DAT_0007e6fc;
      iVar5 = DAT_0007e6f8;
      iVar4 = DAT_0007e6f4;
      iVar52 = DAT_0007e6f0;
      iVar48 = DAT_0007e6ec;
      iVar47 = DAT_0007e6e8;
      iVar42 = DAT_0007e6e4;
      iVar51 = DAT_0007e6e0;
      iVar3 = DAT_0007e6dc;
      iVar54 = DAT_0007e6d8;
      iVar59 = DAT_0007e6d4;
      iVar53 = DAT_0007e6d0;
      iVar25 = DAT_0007e6cc;
      pfVar57 = __src;
      if (iVar27 != 0) {
        iVar60 = 0;
        __s2_00 = (char *)(DAT_0007e750 + 0x7e686);
        __s2_01 = (char *)(DAT_0007e754 + 0x7e690);
        pcVar40 = (char *)(DAT_0007e758 + 0x7e696);
        __s2 = (char *)(DAT_0007e760 + 0x7e69e);
        do {
          FUN_0009a4a0(iVar27,iVar53 + 0x7e794);
          iVar28 = FUN_0008f414();
          local_119c[iVar60] = iVar28;
          if (param_4 != 0) {
            pcVar61 = *(char **)(param_4 + param_1[4] * 4);
            pcVar29 = (char *)FUN_0009a4a0(iVar27,iVar53 + 0x7e794);
            strcpy(pcVar61,pcVar29);
          }
          FUN_00093804(pfVar57,0,0x88);
          FUN_0009a8bc(iVar27,iVar25 + 0x7e7d6,pfVar57 + 0x21);
          uVar30 = FUN_0009a5d8(iVar27,iVar54 + 0x7e7e0);
          uVar30 = FUN_0009a4a0(uVar30,iVar59 + 0x7e7e8);
          sprintf(acStack_134,(char *)(iVar3 + 0x7e7f2),param_2,uVar30);
          uVar30 = FUN_000996c4();
          FUN_00099cd0(&local_138,uVar30,acStack_134);
          FUN_00017d64(pfVar57 + 0x1f,local_138);
          FUN_00017d90(&local_138);
          uVar31 = (**(code **)(*(int *)pfVar57[0x1f] + 0x14))();
          uVar32 = (**(code **)(*(int *)pfVar57[0x1f] + 0x18))();
          pfVar57[0x20] = (float)(ulonglong)uVar31 / (float)(ulonglong)uVar32;
          FUN_0009a5d8(iVar27,iVar51 + 0x7e848);
          pcVar29 = (char *)FUN_0009a1d4();
          strtod(pcVar29,(char **)0x0);
          *pfVar57 = (float)((double)CONCAT44(extraout_r1,pcVar29) / DAT_0007eba8);
          iVar60 = FUN_0009a5d8(iVar27,iVar42 + 0x7e870);
          if (iVar60 == 0) {
LAB_0007f100:
            *(char *)(pfVar57 + 0xe) = (char)iVar60;
          }
          else {
            FUN_0009a5d8(iVar27,iVar42 + 0x7e870);
            pcVar29 = (char *)FUN_0009a1d4();
            iVar60 = strcmp(pcVar29,__s2_00);
            if (iVar60 == 0) goto LAB_0007f100;
            iVar60 = strcmp(pcVar29,pcVar40);
            if (iVar60 == 0) {
              *(undefined *)(pfVar57 + 0xe) = 1;
            }
            else {
              iVar60 = strcmp(pcVar29,__s2_01);
              if (iVar60 == 0) {
                *(undefined *)(pfVar57 + 0xe) = 2;
              }
              else {
                iVar60 = strcmp(pcVar29,(char *)(DAT_0007f6e0 + 0x7f5ec));
                if (iVar60 == 0) {
                  *(undefined *)(pfVar57 + 0xe) = 3;
                }
                else {
                  *(undefined *)(pfVar57 + 0xe) = 0;
                }
              }
            }
          }
          iVar60 = FUN_0009a5d8(iVar27,iVar47 + 0x7e8b2);
          if (iVar60 == 0) {
LAB_0007f172:
            *(char *)((int)pfVar57 + 0x39) = (char)iVar60;
          }
          else {
            FUN_0009a5d8(iVar27,iVar47 + 0x7e8b2);
            pcVar29 = (char *)FUN_0009a1d4();
            iVar60 = strcmp(pcVar29,__s2);
            if (iVar60 == 0) {
              *(undefined *)((int)pfVar57 + 0x39) = 1;
            }
            else {
              iVar60 = strcmp(pcVar29,(char *)(iVar24 + 0x7f26c));
              if (iVar60 == 0) goto LAB_0007f172;
              *(undefined *)((int)pfVar57 + 0x39) = 0;
            }
          }
          FUN_0009a5d8(iVar27,iVar48 + 0x7e8e4);
          pcVar29 = (char *)FUN_0009a1d4();
          sscanf(pcVar29,(char *)(iVar52 + 0x7e8f2),&local_13c,&local_140,&local_144);
          pfVar57[8] = (float)(longlong)local_13c;
          pfVar57[9] = (float)(longlong)local_140;
          pfVar57[10] = (float)(longlong)local_144;
          iVar60 = FUN_0009a5d8(iVar27,iVar5 + 0x7e930);
          if (iVar60 == 0) {
            pfVar57[0xb] = pfVar57[8];
            pfVar57[0xc] = pfVar57[9];
            pfVar57[0xd] = pfVar57[10];
          }
          else {
            FUN_0009a5d8(iVar27,iVar5 + 0x7e930);
            pcVar29 = (char *)FUN_0009a1d4();
            sscanf(pcVar29,(char *)(iVar52 + 0x7e8f2),&local_13c,&local_140,&local_144);
            pfVar57[0xb] = (float)(longlong)local_13c;
            pfVar57[0xc] = (float)(longlong)local_140;
            pfVar57[0xd] = (float)(longlong)local_144;
          }
          fVar41 = DAT_0007ebb0;
          uVar30 = FUN_0009a5d8(iVar27,iVar4 + 0x7e98a);
          pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar34 + 0x7e992);
          pcVar61 = (char *)(iVar6 + 0x7e9a2);
          sscanf(pcVar29,pcVar61,&local_154,&local_150,&local_14c,&local_148);
          *(char *)((int)pfVar57 + 0x6b) =
               (0.0 < (float)(longlong)local_148 * fVar41) *
               (char)(int)((float)(longlong)local_148 * fVar41);
          *(char *)((int)pfVar57 + 0x6a) =
               (0.0 < (float)(longlong)local_154 * fVar41) *
               (char)(int)((float)(longlong)local_154 * fVar41);
          *(char *)((int)pfVar57 + 0x69) =
               (0.0 < (float)(longlong)local_150 * fVar41) *
               (char)(int)((float)(longlong)local_150 * fVar41);
          *(char *)(pfVar57 + 0x1a) =
               (0.0 < (float)(longlong)local_14c * fVar41) *
               (char)(int)((float)(longlong)local_14c * fVar41);
          pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar35 + 0x7ea14);
          sscanf(pcVar29,pcVar61,&local_154,&local_150,&local_14c,&local_148);
          *(char *)((int)pfVar57 + 0x67) =
               (0.0 < (float)(longlong)local_148 * fVar41) *
               (char)(int)((float)(longlong)local_148 * fVar41);
          *(char *)((int)pfVar57 + 0x66) =
               (0.0 < (float)(longlong)local_154 * fVar41) *
               (char)(int)((float)(longlong)local_154 * fVar41);
          *(char *)((int)pfVar57 + 0x65) =
               (0.0 < (float)(longlong)local_150 * fVar41) *
               (char)(int)((float)(longlong)local_150 * fVar41);
          *(char *)(pfVar57 + 0x19) =
               (0.0 < (float)(longlong)local_14c * fVar41) *
               (char)(int)((float)(longlong)local_14c * fVar41);
          iVar60 = FUN_0009a4a0(uVar30);
          if (iVar60 == 0) {
LAB_0007f222:
            *(undefined *)((int)pfVar57 + 0x77) = *(undefined *)((int)pfVar57 + 0x67);
            *(undefined *)((int)pfVar57 + 0x76) = *(undefined *)((int)pfVar57 + 0x66);
            *(undefined *)((int)pfVar57 + 0x75) = *(undefined *)((int)pfVar57 + 0x65);
            *(undefined *)(pfVar57 + 0x1d) = *(undefined *)(pfVar57 + 0x19);
            *(undefined *)((int)pfVar57 + 0x7b) = *(undefined *)((int)pfVar57 + 0x6b);
            *(undefined *)((int)pfVar57 + 0x7a) = *(undefined *)((int)pfVar57 + 0x6a);
            *(undefined *)((int)pfVar57 + 0x79) = *(undefined *)((int)pfVar57 + 0x69);
            *(undefined *)(pfVar57 + 0x1e) = *(undefined *)(pfVar57 + 0x1a);
          }
          else {
            iVar28 = DAT_0007ebb4 + 0x7eaa2;
            iVar60 = FUN_0009a4a0(uVar30,iVar28);
            if (iVar60 == 0) goto LAB_0007f222;
            pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar43 + 0x7ea8e);
            sscanf(pcVar29,pcVar61,&local_154,&local_150,&local_14c,&local_148);
            *(char *)((int)pfVar57 + 0x7b) =
                 (0.0 < (float)(longlong)local_148 * fVar41) *
                 (char)(int)((float)(longlong)local_148 * fVar41);
            *(char *)((int)pfVar57 + 0x7a) =
                 (0.0 < (float)(longlong)local_154 * fVar41) *
                 (char)(int)((float)(longlong)local_154 * fVar41);
            *(char *)((int)pfVar57 + 0x79) =
                 (0.0 < (float)(longlong)local_150 * fVar41) *
                 (char)(int)((float)(longlong)local_150 * fVar41);
            *(char *)(pfVar57 + 0x1e) =
                 (0.0 < (float)(longlong)local_14c * fVar41) *
                 (char)(int)((float)(longlong)local_14c * fVar41);
            pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar28);
            sscanf(pcVar29,pcVar61,&local_154,&local_150,&local_14c,&local_148);
            *(char *)((int)pfVar57 + 0x77) =
                 (0.0 < (float)(longlong)local_148 * fVar41) *
                 (char)(int)((float)(longlong)local_148 * fVar41);
            *(char *)((int)pfVar57 + 0x76) =
                 (0.0 < (float)(longlong)local_154 * fVar41) *
                 (char)(int)((float)(longlong)local_154 * fVar41);
            *(char *)((int)pfVar57 + 0x75) =
                 (0.0 < (float)(longlong)local_150 * fVar41) *
                 (char)(int)((float)(longlong)local_150 * fVar41);
            *(char *)(pfVar57 + 0x1d) =
                 (0.0 < (float)(longlong)local_14c * fVar41) *
                 (char)(int)((float)(longlong)local_14c * fVar41);
          }
          iVar60 = FUN_0009a4a0(uVar30,iVar8 + 0x7ebc0);
          if (iVar60 == 0) {
LAB_0007f19c:
            *(char *)((int)pfVar57 + 0x6e) =
                 (char)((uint)*(byte *)((int)pfVar57 + 0x76) + (uint)*(byte *)((int)pfVar57 + 0x66)
                       >> 1);
            *(char *)((int)pfVar57 + 0x6d) =
                 (char)((uint)*(byte *)((int)pfVar57 + 0x75) + (uint)*(byte *)((int)pfVar57 + 0x65)
                       >> 1);
            *(char *)((int)pfVar57 + 0x6f) =
                 (char)((uint)*(byte *)((int)pfVar57 + 0x77) + (uint)*(byte *)((int)pfVar57 + 0x67)
                       >> 1);
            *(char *)(pfVar57 + 0x1b) =
                 (char)((uint)*(byte *)(pfVar57 + 0x1d) + (uint)*(byte *)(pfVar57 + 0x19) >> 1);
            *(char *)((int)pfVar57 + 0x72) =
                 (char)((uint)*(byte *)((int)pfVar57 + 0x7a) + (uint)*(byte *)((int)pfVar57 + 0x6a)
                       >> 1);
            *(char *)((int)pfVar57 + 0x71) =
                 (char)((uint)*(byte *)((int)pfVar57 + 0x79) + (uint)*(byte *)((int)pfVar57 + 0x69)
                       >> 1);
            *(char *)(pfVar57 + 0x1c) =
                 (char)((uint)*(byte *)(pfVar57 + 0x1e) + (uint)*(byte *)(pfVar57 + 0x1a) >> 1);
            *(char *)((int)pfVar57 + 0x73) =
                 (char)((uint)*(byte *)((int)pfVar57 + 0x7b) + (uint)*(byte *)((int)pfVar57 + 0x6b)
                       >> 1);
          }
          else {
            iVar28 = DAT_0007ef1c + 0x7ebd6;
            iVar60 = FUN_0009a4a0(uVar30,iVar28);
            fVar41 = DAT_0007ef18;
            if (iVar60 == 0) goto LAB_0007f19c;
            pcVar61 = (char *)(DAT_0007ef20 + 0x7ebf0);
            pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar28);
            sscanf(pcVar29,pcVar61,&local_154,&local_150,&local_14c,&local_148);
            *(char *)((int)pfVar57 + 0x73) =
                 (0.0 < (float)(longlong)local_148 * fVar41) *
                 (char)(int)((float)(longlong)local_148 * fVar41);
            *(char *)((int)pfVar57 + 0x72) =
                 (0.0 < (float)(longlong)local_154 * fVar41) *
                 (char)(int)((float)(longlong)local_154 * fVar41);
            *(char *)((int)pfVar57 + 0x71) =
                 (0.0 < (float)(longlong)local_150 * fVar41) *
                 (char)(int)((float)(longlong)local_150 * fVar41);
            *(char *)(pfVar57 + 0x1c) =
                 (0.0 < (float)(longlong)local_14c * fVar41) *
                 (char)(int)((float)(longlong)local_14c * fVar41);
            pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar8 + 0x7ebc0);
            sscanf(pcVar29,pcVar61,&local_154,&local_150,&local_14c,&local_148);
            *(char *)((int)pfVar57 + 0x6f) =
                 (0.0 < (float)(longlong)local_148 * fVar41) *
                 (char)(int)((float)(longlong)local_148 * fVar41);
            *(char *)((int)pfVar57 + 0x6e) =
                 (0.0 < (float)(longlong)local_154 * fVar41) *
                 (char)(int)((float)(longlong)local_154 * fVar41);
            *(char *)((int)pfVar57 + 0x6d) =
                 (0.0 < (float)(longlong)local_150 * fVar41) *
                 (char)(int)((float)(longlong)local_150 * fVar41);
            *(char *)(pfVar57 + 0x1b) =
                 (0.0 < (float)(longlong)local_14c * fVar41) *
                 (char)(int)((float)(longlong)local_14c * fVar41);
          }
          *(undefined2 *)(pfVar57 + 1) = 0;
          iVar60 = FUN_0009a5d8(iVar27,iVar7 + 0x7ece8);
          if (iVar60 == 0) {
LAB_0007f152:
            iVar60 = DAT_0007f6a8;
            pfVar64 = (float *)(DAT_0007f6a8 + 0x7f15e);
            fVar41 = *(float *)(DAT_0007f6a8 + 0x7f162);
            fVar46 = *(float *)(DAT_0007f6a8 + 0x7f166);
            pfVar57[2] = *pfVar64;
            pfVar57[3] = fVar41;
            pfVar57[4] = fVar46;
            fVar41 = *(float *)(iVar60 + 0x7f162);
            fVar46 = *(float *)(iVar60 + 0x7f166);
            pfVar57[5] = *pfVar64;
            pfVar57[6] = fVar41;
            pfVar57[7] = fVar46;
          }
          else {
            iVar62 = DAT_0007ef24 + 0x7ecfa;
            iVar28 = FUN_0009a4a0(iVar60,iVar62);
            if (iVar28 == 0) goto LAB_0007f152;
            iVar63 = DAT_0007ef28 + 0x7ed0e;
            iVar33 = FUN_0009a4a0(iVar60,iVar63);
            iVar28 = DAT_0007ef2c;
            if (iVar33 == 0) goto LAB_0007f152;
            pfVar64 = (float *)(DAT_0007ef2c + 0x7ed2e);
            fVar41 = *(float *)(DAT_0007ef2c + 0x7ed32);
            fVar46 = *(float *)(DAT_0007ef2c + 0x7ed36);
            pfVar57[2] = *pfVar64;
            pfVar57[3] = fVar41;
            pfVar57[4] = fVar46;
            fVar41 = *(float *)(iVar28 + 0x7ed32);
            fVar46 = *(float *)(iVar28 + 0x7ed36);
            pfVar57[5] = *pfVar64;
            pfVar57[6] = fVar41;
            pfVar57[7] = fVar46;
            iVar28 = DAT_0007ef30;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar62);
            sscanf(pcVar29,(char *)(iVar28 + 0x7ed5a),pfVar57 + 2,pfVar57 + 3,pfVar57 + 4);
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar63);
            sscanf(pcVar29,(char *)(iVar28 + 0x7ed5a),pfVar57 + 5,pfVar57 + 6,pfVar57 + 7);
          }
          uVar30 = FUN_0009a5d8(iVar27,iVar10 + 0x7ed92);
          pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar9 + 0x7ed9a);
          iVar60 = atoi(pcVar29);
          *(char *)((int)pfVar57 + 0x3a) = (char)iVar60;
          pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar12 + 0x7edae);
          iVar60 = atoi(pcVar29);
          *(char *)((int)pfVar57 + 0x3b) = (char)iVar60;
          pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar11 + 0x7edc0);
          iVar60 = atoi(pcVar29);
          *(char *)((int)pfVar57 + 0x3e) = (char)iVar60;
          pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar14 + 0x7edd2);
          iVar60 = atoi(pcVar29);
          *(char *)((int)pfVar57 + 0x3f) = (char)iVar60;
          iVar60 = FUN_0009a4a0(uVar30);
          if (iVar60 == 0) {
LAB_0007f17a:
            *(char *)((int)pfVar57 + 0x3d) =
                 (char)((int)((uint)*(byte *)((int)pfVar57 + 0x3f) +
                             (uint)*(byte *)((int)pfVar57 + 0x3b)) >> 1);
            *(char *)(pfVar57 + 0xf) =
                 (char)((int)((uint)*(byte *)((int)pfVar57 + 0x3e) +
                             (uint)*(byte *)((int)pfVar57 + 0x3a)) >> 1);
          }
          else {
            iVar28 = DAT_0007ef34 + 0x7edf8;
            iVar60 = FUN_0009a4a0(uVar30,iVar28);
            if (iVar60 == 0) goto LAB_0007f17a;
            pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar13 + 0x7ede4);
            iVar60 = atoi(pcVar29);
            *(char *)((int)pfVar57 + 0x3d) = (char)iVar60;
            pcVar29 = (char *)FUN_0009a4a0(uVar30,iVar28);
            iVar60 = atoi(pcVar29);
            *(char *)(pfVar57 + 0xf) = (char)iVar60;
          }
          iVar60 = FUN_0009a5d8(iVar27,iVar16 + 0x7ee2a);
          if (iVar60 == 0) {
LAB_0007f13c:
            *(undefined2 *)(pfVar57 + 0x10) = 0;
            *(undefined2 *)((int)pfVar57 + 0x42) = 0;
            *(undefined2 *)(pfVar57 + 0x11) = 0;
            *(undefined2 *)((int)pfVar57 + 0x46) = 0;
          }
          else {
            iVar62 = DAT_0007ef38 + 0x7ee3c;
            iVar28 = FUN_0009a4a0(iVar60,iVar62);
            if (iVar28 == 0) goto LAB_0007f13c;
            iVar33 = DAT_0007ef3c + 0x7ee4e;
            iVar28 = FUN_0009a4a0(iVar60,iVar33);
            if (iVar28 == 0) goto LAB_0007f13c;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar62);
            iVar28 = DAT_0007ef40;
            iVar62 = atoi(pcVar29);
            *(short *)(pfVar57 + 0x10) = (short)iVar62;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar33);
            iVar62 = atoi(pcVar29);
            *(short *)((int)pfVar57 + 0x42) = (short)iVar62;
            iVar62 = FUN_0009a4a0(iVar60,iVar28 + 0x7ee6e);
            if (iVar62 == 0) {
LAB_0007f2ba:
              *(undefined2 *)(pfVar57 + 0x11) = *(undefined2 *)(pfVar57 + 0x10);
              *(undefined2 *)((int)pfVar57 + 0x46) = *(undefined2 *)((int)pfVar57 + 0x42);
            }
            else {
              iVar33 = DAT_0007ef44 + 0x7ee98;
              iVar62 = FUN_0009a4a0(iVar60,iVar33);
              if (iVar62 == 0) goto LAB_0007f2ba;
              pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar28 + 0x7ee6e);
              iVar28 = atoi(pcVar29);
              *(short *)(pfVar57 + 0x11) = (short)iVar28;
              pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar33);
              iVar60 = atoi(pcVar29);
              *(short *)((int)pfVar57 + 0x46) = (short)iVar60;
            }
          }
          iVar60 = FUN_0009a5d8(iVar27,iVar15 + 0x7eece);
          if (iVar60 == 0) {
LAB_0007f126:
            *(undefined2 *)(pfVar57 + 0x12) = 0;
            *(undefined2 *)((int)pfVar57 + 0x4a) = 0;
            *(undefined2 *)(pfVar57 + 0x13) = 0;
            *(undefined2 *)((int)pfVar57 + 0x4e) = 0;
          }
          else {
            iVar62 = DAT_0007ef48 + 0x7eee0;
            iVar28 = FUN_0009a4a0(iVar60,iVar62);
            if (iVar28 == 0) goto LAB_0007f126;
            iVar33 = DAT_0007ef4c + 0x7eef2;
            iVar28 = FUN_0009a4a0(iVar60,iVar33);
            if (iVar28 == 0) goto LAB_0007f126;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar62);
            iVar28 = DAT_0007ef50;
            iVar62 = atoi(pcVar29);
            *(short *)(pfVar57 + 0x12) = (short)iVar62;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar33);
            iVar62 = atoi(pcVar29);
            *(short *)((int)pfVar57 + 0x4a) = (short)iVar62;
            iVar62 = FUN_0009a4a0(iVar60,iVar28 + 0x7ef12);
            if (iVar62 == 0) {
LAB_0007f2cc:
              *(undefined2 *)(pfVar57 + 0x13) = *(undefined2 *)(pfVar57 + 0x12);
              *(undefined2 *)((int)pfVar57 + 0x4e) = *(undefined2 *)((int)pfVar57 + 0x4a);
            }
            else {
              iVar33 = DAT_0007f688 + 0x7ef7c;
              iVar62 = FUN_0009a4a0(iVar60,iVar33);
              if (iVar62 == 0) goto LAB_0007f2cc;
              pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar28 + 0x7ef12);
              iVar28 = atoi(pcVar29);
              *(short *)(pfVar57 + 0x13) = (short)iVar28;
              pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar33);
              iVar60 = atoi(pcVar29);
              *(short *)((int)pfVar57 + 0x4e) = (short)iVar60;
            }
          }
          iVar60 = FUN_0009a5d8(iVar27,iVar18 + 0x7efb2);
          if (iVar60 == 0) {
LAB_0007f11e:
            pfVar57[0x17] = 0.0;
            pfVar57[0x18] = 0.0;
          }
          else {
            iVar62 = DAT_0007f68c + 0x7efc4;
            iVar28 = FUN_0009a4a0(iVar60,iVar62);
            if (iVar28 == 0) goto LAB_0007f11e;
            iVar33 = DAT_0007f690 + 0x7efd8;
            iVar28 = FUN_0009a4a0(iVar60,iVar33);
            if (iVar28 == 0) goto LAB_0007f11e;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar62);
            fVar41 = (float)atoi(pcVar29);
            pfVar57[0x17] = fVar41;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar33);
            fVar41 = (float)atoi(pcVar29);
            pfVar57[0x18] = fVar41;
          }
          iVar60 = FUN_0009a5d8(iVar27,iVar17 + 0x7f00a);
          if (iVar60 == 0) {
LAB_0007f108:
            *(undefined2 *)(pfVar57 + 0x14) = 0;
            *(undefined2 *)((int)pfVar57 + 0x52) = 0;
            *(undefined2 *)(pfVar57 + 0x15) = 0;
            *(undefined2 *)((int)pfVar57 + 0x56) = 0;
          }
          else {
            iVar62 = DAT_0007f694 + 0x7f01a;
            iVar28 = FUN_0009a4a0(iVar60,iVar62);
            if (iVar28 == 0) goto LAB_0007f108;
            iVar33 = DAT_0007f698 + 0x7f02c;
            iVar28 = FUN_0009a4a0(iVar60,iVar33);
            if (iVar28 == 0) goto LAB_0007f108;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar62);
            iVar28 = DAT_0007f69c;
            iVar62 = atoi(pcVar29);
            *(short *)(pfVar57 + 0x14) = (short)iVar62;
            pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar33);
            iVar62 = atoi(pcVar29);
            *(short *)((int)pfVar57 + 0x52) = (short)iVar62;
            iVar62 = FUN_0009a4a0(iVar60,iVar28 + 0x7f04a);
            if (iVar62 == 0) {
LAB_0007f290:
              *(undefined2 *)(pfVar57 + 0x15) = *(undefined2 *)(pfVar57 + 0x14);
              *(undefined2 *)((int)pfVar57 + 0x56) = *(undefined2 *)((int)pfVar57 + 0x52);
            }
            else {
              iVar33 = DAT_0007f6a0 + 0x7f076;
              iVar62 = FUN_0009a4a0(iVar60,iVar33);
              if (iVar62 == 0) goto LAB_0007f290;
              pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar28 + 0x7f04a);
              iVar28 = atoi(pcVar29);
              *(short *)(pfVar57 + 0x15) = (short)iVar28;
              pcVar29 = (char *)FUN_0009a4a0(iVar60,iVar33);
              iVar60 = atoi(pcVar29);
              *(short *)((int)pfVar57 + 0x56) = (short)iVar60;
            }
          }
          FUN_0009a5d8(iVar27,iVar19 + 0x7f0ac);
          pcVar29 = (char *)FUN_0009a1d4();
          iVar60 = strcmp(pcVar29,(char *)(iVar20 + 0x7f0b8));
          if (iVar60 == 0) {
            *(undefined2 *)(pfVar57 + 0x16) = 0x302;
          }
          FUN_0009a5d8(iVar27,iVar21 + 0x7f0cc);
          pcVar29 = (char *)FUN_0009a1d4();
          iVar60 = strcmp(pcVar29,(char *)(iVar22 + 0x7f0d8));
          if (iVar60 == 0) {
            *(undefined2 *)(pfVar57 + 0x16) = 0x303;
          }
          else {
            iVar60 = strcmp(pcVar29,(char *)(DAT_0007f6a4 + 0x7f0ec));
            if (iVar60 == 0) {
              *(undefined2 *)(pfVar57 + 0x16) = 1;
            }
          }
          pfVar57 = pfVar57 + 0x22;
          iVar27 = FUN_0009a4f0(iVar27,iVar23 + 0x7e776);
          iVar60 = param_1[4] + 1;
          param_1[4] = iVar60;
        } while (iVar27 != 0);
      }
      param_1[6] = 0;
      iVar51 = param_1[4];
      local_1258 = FUN_0009a5d8(uVar26,DAT_0007f6ac + 0x7f320);
      iVar3 = local_119c[0];
      iVar54 = DAT_0007f6c4;
      iVar59 = DAT_0007f6bc;
      iVar53 = DAT_0007f6b4;
      iVar25 = DAT_0007f6b0;
      if (local_1258 != 0) {
        iVar47 = DAT_0007f6b8 + 0x7f35e;
        iVar52 = DAT_0007f6c0 + 0x7f366;
        iVar42 = DAT_0007f6cc + 0x7f36a;
        iVar48 = DAT_0007f6c8 + 0x7f36e;
        pfVar64 = pfVar57;
        do {
          FUN_00093804(pfVar64,0,0x4c);
          pfVar57 = pfVar64 + 0x13;
          FUN_0009a4a0(local_1258,iVar59 + 0x7f38a);
          fVar41 = (float)FUN_0008f414();
          pfVar64[0x10] = fVar41;
          pcVar40 = (char *)FUN_0009a4a0(local_1258,iVar59 + 0x7f38a);
          strcpy((char *)pfVar64,pcVar40);
          FUN_0009a5d8(local_1258,iVar25 + 0x7f3ae);
          pcVar40 = (char *)FUN_0009a1d4();
          strtod(pcVar40,(char **)0x0);
          pfVar64[0x11] = (float)((double)CONCAT44(extraout_r1_00,pcVar40) / DAT_0007f680);
          iVar34 = FUN_0009a5d8(local_1258,iVar53 + 0x7f3d8);
          iVar6 = DAT_0007f6dc;
          iVar5 = DAT_0007f6d8;
          iVar4 = DAT_0007f6d4;
          if (iVar34 == 0) {
            local_1294 = '\0';
          }
          else {
            local_1294 = '\0';
            iVar43 = DAT_0007f6d0 + 0x7f410;
            pfVar58 = pfVar57;
            do {
              pfVar57 = pfVar58 + 9;
              FUN_00093804(pfVar58,0,0x4c);
              FUN_0009a4a0(iVar34,iVar47);
              iVar35 = FUN_0008f414();
              if (0 < param_1[4]) {
                if (iVar35 == iVar3) {
                  fVar41 = 0.0;
                }
                else {
                  fVar41 = 0.0;
                  do {
                    fVar41 = (float)((int)fVar41 + 1);
                    if (fVar41 == (float)param_1[4]) goto LAB_0007f44e;
                  } while (iVar35 != local_119c[(int)fVar41]);
                }
                *pfVar58 = fVar41;
              }
LAB_0007f44e:
              uVar26 = FUN_0009a5d8(iVar34,iVar52);
              pcVar40 = (char *)FUN_0009a4a0(uVar26,iVar42);
              iVar35 = atoi(pcVar40);
              *(short *)(pfVar58 + 1) = (short)iVar35;
              pcVar40 = (char *)FUN_0009a4a0(uVar26,iVar48);
              iVar35 = atoi(pcVar40);
              *(short *)((int)pfVar58 + 6) = (short)iVar35;
              uVar26 = FUN_0009a5d8(iVar34,iVar45);
              pcVar40 = (char *)FUN_0009a4a0(uVar26,iVar50);
              iVar35 = atoi(pcVar40);
              *(char *)(pfVar58 + 2) = (char)iVar35;
              pcVar40 = (char *)FUN_0009a4a0(uVar26,iVar56);
              iVar35 = atoi(pcVar40);
              *(char *)((int)pfVar58 + 9) = (char)iVar35;
              uVar26 = FUN_0009a5d8(iVar34,iVar39);
              pcVar40 = (char *)FUN_0009a4a0(uVar26,iVar43);
              sscanf(pcVar40,(char *)(iVar4 + 0x7f4ba),&local_14c,&local_150,&local_154);
              pfVar58[3] = (float)(longlong)local_14c;
              pfVar58[4] = (float)(longlong)local_150;
              pfVar58[5] = (float)(longlong)local_154;
              pcVar40 = (char *)FUN_0009a4a0(uVar26,iVar5 + 0x7f4ea);
              sscanf(pcVar40,(char *)(iVar4 + 0x7f4ba),&local_14c,&local_150,&local_154);
              pfVar58[6] = (float)(longlong)local_14c;
              pfVar58[7] = (float)(longlong)local_150;
              pfVar58[8] = (float)(longlong)local_154;
              iVar34 = FUN_0009a4f0(iVar34,iVar6 + 0x7f524);
              local_1294 = local_1294 + '\x01';
              pfVar58 = pfVar57;
            } while (iVar34 != 0);
          }
          *(char *)((int)pfVar64 + 0x4b) = local_1294;
          param_1[6] = param_1[6] + 1;
          local_1258 = FUN_0009a4f0(local_1258,iVar54 + 0x7f54c);
          pfVar64 = pfVar57;
        } while (local_1258 != 0);
      }
      iVar59 = 0;
      __n = (int)pfVar57 - (int)__src;
      pvVar36 = operator_new__(__n + 1);
      param_1[5] = (int)pvVar36;
      *(undefined *)((int)pvVar36 + __n) = 0;
      param_1[7] = (int)((int)(void *)param_1[5] + iVar51 * 0x88);
      memcpy((void *)param_1[5],__src,__n);
      iVar53 = param_1[6];
      iVar25 = param_1[7];
      if (0 < iVar53) {
        while( true ) {
          uVar31 = (uint)*(byte *)(iVar25 + 0x4b);
          if (uVar31 != 0) {
            iVar54 = 0x4c;
            iVar53 = 0;
            do {
              iVar53 = iVar53 + 1;
              *(int *)(iVar25 + iVar54) = param_1[5] + *(int *)(iVar25 + iVar54) * 0x88;
              uVar31 = (uint)*(byte *)(iVar25 + 0x4b);
              iVar54 = iVar54 + 0x24;
            } while (iVar53 < (int)uVar31);
            iVar53 = param_1[6];
          }
          iVar59 = iVar59 + 1;
          if (iVar53 <= iVar59) break;
          iVar25 = iVar25 + uVar31 * 0x24 + 0x4c;
        }
      }
      if (__src != (float *)0x0) {
        operator_delete__(__src);
      }
      bVar1 = true;
    }
    local_19c[0] = *(int *)(iVar55 + local_11bc) + 8;
    if ((local_168 != *(void **)(iVar55 + local_11b8)) && (local_168 != (void *)0x0)) {
      operator_delete__(local_168);
    }
    FUN_0009ac4c(local_1250);
    if (bVar1) {
      if (local_34 != **(int **)(iVar55 + iVar2)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



