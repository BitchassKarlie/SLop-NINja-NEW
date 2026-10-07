/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00078ae4 FUN_00078ae4 */

void FUN_00078ae4(undefined4 *param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  undefined *puVar14;
  char *pcVar15;
  uint *puVar16;
  int iVar17;
  char cVar18;
  uint *puVar19;
  code **ppcVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  undefined auStack_50 [4];
  int local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 *local_40;
  uint *local_3c;
  undefined auStack_38 [4];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  
  piVar2 = (int *)operator_new(0x48);
  puVar23 = param_1 + 7;
  iVar22 = DAT_00078f4c + 0x78b04;
  FUN_0009c1d4(piVar2,DAT_00078f48 + 0x78b02);
  FUN_00077854(puVar23);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = param_1[4];
  param_1[2] = 0;
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_0009b0e4(piVar2);
    if (iVar3 != 0) {
      iVar21 = DAT_00078f8c + 0x78d18;
      uVar5 = FUN_0009a5d8(piVar2,DAT_00078f88 + 0x78d16);
      iVar9 = FUN_0009a5d8(uVar5,iVar21);
      iVar25 = DAT_00078f98;
      iVar4 = DAT_00078f94;
      iVar3 = DAT_00078f58;
      if (iVar9 != 0) {
        iVar24 = DAT_00078f90 + 0x78d3e;
        iVar10 = DAT_00078f94 + 0x78d4a;
        do {
          FUN_0009a4a0(iVar9,iVar24);
          iVar11 = FUN_000782a0();
          if (iVar11 == 0) {
            piVar12 = (int *)operator_new(0x70);
            FUN_00077640();
            piVar12[4] = 0;
            ppcVar20 = (code **)(*piVar12 + 0xc);
          }
          else {
            piVar12 = (int *)operator_new(0x38);
            *piVar12 = iVar10;
            *(undefined *)((int)piVar12 + 0x2f) = 0xff;
            *(undefined *)((int)piVar12 + 0x33) = 0xff;
            *(undefined *)(piVar12 + 0xb) = 0;
            *(undefined *)((int)piVar12 + 0x2d) = 0;
            *(undefined *)((int)piVar12 + 0x2e) = 0;
            *(undefined *)(piVar12 + 0xc) = 0;
            *(undefined *)((int)piVar12 + 0x31) = 0;
            *(undefined *)((int)piVar12 + 0x32) = 0;
            piVar12[4] = -1;
            *(undefined *)(piVar12 + 0xd) = 1;
            piVar12[1] = 0;
            piVar12[5] = 0;
            piVar12[6] = 0;
            piVar12[10] = 0;
            piVar12[7] = 0;
            piVar12[3] = 0;
            puVar14 = *(undefined **)(iVar22 + iVar25);
            *(undefined *)((int)piVar12 + 0x2f) = puVar14[3];
            *(undefined *)((int)piVar12 + 0x2e) = puVar14[2];
            *(undefined *)((int)piVar12 + 0x2d) = puVar14[1];
            uVar1 = *puVar14;
            piVar12[8] = 0;
            piVar12[9] = 0;
            *(undefined *)(piVar12 + 0xb) = uVar1;
            piVar12[4] = iVar11;
            ppcVar20 = (code **)(iVar4 + 0x78d56);
          }
          (**ppcVar20)(piVar12,iVar9);
          iVar11 = FUN_0006fca8(*(undefined4 *)(*(int *)(iVar22 + iVar3) + 0x50),piVar12[2]);
          if (iVar11 == 0) {
            uVar5 = FUN_00017e38();
            iVar11 = FUN_00017aac(uVar5,piVar12[2]);
            if ((iVar11 == 0) && (0 < piVar12[3])) {
              *(undefined *)(piVar12 + 0xd) = 0;
              piVar12[3] = -1;
              FUN_00060ed4();
            }
          }
          else {
            piVar12[3] = -1;
          }
          FUN_00077af4(param_1 + 3);
          *(int **)param_1[5] = piVar12;
          param_1[5] = param_1[5] + 4;
          puVar16 = (uint *)param_1[8];
          if (puVar16 == (uint *)0x0) {
            uVar7 = piVar12[2];
LAB_00078e3a:
            local_2c = 0;
            local_40 = puVar23;
            local_3c = puVar16;
            local_30 = uVar7;
            FUN_00078a10(auStack_38,puVar23,puVar23,puVar16,&local_30);
            *(int **)(local_34 + 4) = piVar12;
            iVar11 = piVar12[4] * 0x10;
            puVar16 = (uint *)param_1[piVar12[4] * 4 + 0xc];
            if (puVar16 != (uint *)0x0) goto LAB_00078df2;
LAB_00078e6c:
            uVar7 = piVar12[2];
LAB_00078e6e:
            local_40 = (undefined4 *)((int)param_1 + iVar11 + 0x2c);
            local_44 = 0;
            local_48 = uVar7;
            local_3c = puVar16;
            FUN_00078a10(auStack_50,local_40,local_40,puVar16,&local_48);
            *(int **)(local_4c + 4) = piVar12;
            iVar11 = piVar12[4];
            iVar17 = param_1[iVar11];
          }
          else {
            uVar7 = piVar12[2];
            puVar13 = (uint *)0x0;
            do {
              if (*puVar16 < uVar7) {
                puVar19 = (uint *)puVar16[4];
              }
              else {
                puVar19 = (uint *)puVar16[3];
                puVar13 = puVar16;
              }
              puVar16 = puVar19;
            } while (puVar19 != (uint *)0x0);
            puVar16 = puVar13;
            if ((puVar13 == (uint *)0x0) || (uVar7 < *puVar13)) goto LAB_00078e3a;
            puVar13[1] = (uint)piVar12;
            iVar11 = piVar12[4] * 0x10;
            puVar16 = (uint *)param_1[piVar12[4] * 4 + 0xc];
            if (puVar16 == (uint *)0x0) goto LAB_00078e6c;
LAB_00078df2:
            uVar7 = piVar12[2];
            puVar13 = (uint *)0x0;
            do {
              if (*puVar16 < uVar7) {
                puVar19 = (uint *)puVar16[4];
              }
              else {
                puVar19 = (uint *)puVar16[3];
                puVar13 = puVar16;
              }
              puVar16 = puVar19;
            } while (puVar19 != (uint *)0x0);
            puVar16 = puVar13;
            if ((puVar13 == (uint *)0x0) || (uVar7 < *puVar13)) goto LAB_00078e6e;
            puVar13[1] = (uint)piVar12;
            iVar11 = piVar12[4];
            iVar17 = param_1[iVar11];
          }
          if (iVar17 == 0) {
            param_1[iVar11] = piVar12;
          }
          iVar9 = FUN_0009a4f0(iVar9,iVar21);
        } while (iVar9 != 0);
      }
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = (int *)operator_new(0x48);
  FUN_0009c1d4(piVar2,DAT_00078f50 + 0x78b44);
  if (piVar2 != (int *)0x0) {
    iVar4 = FUN_0009b0e4(piVar2,0);
    iVar3 = DAT_00078f58;
    if (iVar4 != 0) {
      uVar5 = FUN_0009a5d8(piVar2,DAT_00078f54 + 0x78b8e);
      iVar22 = *(int *)(iVar22 + iVar3);
      FUN_0009a8bc(uVar5,DAT_00078f5c + 0x78b9a,iVar22 + 0x24);
      FUN_0009a8bc(uVar5,DAT_00078f60 + 0x78bae,iVar22 + 0x28);
      FUN_0009a8bc(uVar5,DAT_00078f64 + 0x78bbc,iVar22 + 0x2c);
      iVar22 = FUN_0009a5d8(uVar5,DAT_00078f68 + 0x78bc6);
      if (iVar22 != 0) {
        iVar3 = DAT_00078f6c + 0x78bd4;
        iVar22 = FUN_0009a5d8(iVar22,iVar3);
        if (iVar22 != 0) {
          iVar4 = DAT_00078f70 + 0x78bf0;
          iVar25 = DAT_00078f74 + 0x78bf2;
          pcVar15 = (char *)(DAT_00078f78 + 0x78bf6);
          do {
            while ((pcVar6 = (char *)FUN_0009a4a0(iVar22,iVar4), pcVar6 == (char *)0x0 ||
                   (*pcVar6 == '\0'))) {
LAB_00078bf8:
              iVar22 = FUN_0009a4f0(iVar22,iVar3);
              if (iVar22 == 0) goto LAB_00078c86;
            }
            uVar7 = FUN_0008f414();
            if ((uint *)param_1[8] == (uint *)0x0) goto LAB_00078bf8;
            puVar16 = (uint *)0x0;
            puVar13 = (uint *)param_1[8];
            do {
              if (*puVar13 < uVar7) {
                puVar19 = (uint *)puVar13[4];
              }
              else {
                puVar19 = (uint *)puVar13[3];
                puVar16 = puVar13;
              }
              puVar13 = puVar19;
            } while (puVar19 != (uint *)0x0);
            if ((puVar16 == (uint *)0x0) || (uVar7 < *puVar16)) goto LAB_00078bf8;
            *(undefined4 *)(puVar16[1] + 0xc) = 0xffffffff;
            pcVar6 = (char *)FUN_0009a4a0(iVar22,iVar25);
            uVar7 = puVar16[1];
            if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
              *(undefined *)(uVar7 + 0x34) = 0;
            }
            else {
              uVar8 = strcmp(pcVar6,pcVar15);
              cVar18 = '\x01' - (char)uVar8;
              if (1 < uVar8) {
                cVar18 = '\0';
              }
              *(char *)(uVar7 + 0x34) = cVar18;
            }
            iVar22 = FUN_0009a4f0(iVar22,iVar3);
          } while (iVar22 != 0);
        }
      }
LAB_00078c86:
      iVar22 = FUN_0009a5d8(uVar5,DAT_00078f7c + 0x78c8e);
      if (iVar22 != 0) {
        iVar3 = DAT_00078f80 + 0x78c9e;
        iVar22 = FUN_0009a5d8(iVar22,iVar3);
        if (iVar22 != 0) {
          iVar4 = DAT_00078f84 + 0x78cb0;
          do {
            pcVar15 = (char *)FUN_0009a4a0(iVar22,iVar4);
            if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
              uVar7 = FUN_0008f414();
              if ((uint *)param_1[8] != (uint *)0x0) {
                puVar16 = (uint *)0x0;
                puVar13 = (uint *)param_1[8];
                do {
                  if (*puVar13 < uVar7) {
                    puVar19 = (uint *)puVar13[4];
                  }
                  else {
                    puVar19 = (uint *)puVar13[3];
                    puVar16 = puVar13;
                  }
                  puVar13 = puVar19;
                } while (puVar19 != (uint *)0x0);
                if (((puVar16 != (uint *)0x0) && (*puVar16 <= uVar7)) &&
                   (uVar7 = puVar16[1], uVar7 != 0)) {
                  param_1[*(int *)(uVar7 + 0x10)] = uVar7;
                }
              }
            }
            iVar22 = FUN_0009a4f0(iVar22,iVar3);
          } while (iVar22 != 0);
        }
      }
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  param_1[2] = 0;
  FUN_00077d38(param_1,0,*param_1);
  FUN_00077d38(param_1,1,param_1[1]);
  FUN_00077d38(param_1,2,param_1[2]);
  return;
}



