/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008107c FUN_0008107c */

void FUN_0008107c(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar3 = DAT_000812a0;
  fVar2 = DAT_0008129c;
  fVar1 = DAT_00081298;
  iVar13 = DAT_000812a4 + 0x81094;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    iVar11 = *(int *)(param_1 + 4) + 0x20;
    do {
      while( true ) {
        uVar4 = FUN_0007e454();
        iVar5 = FUN_0007d7f8(uVar4,*(undefined4 *)(iVar11 + -0x20));
        if (iVar5 != 0) break;
LAB_000810aa:
        bVar15 = iVar11 == *(int *)(param_1 + 8);
        iVar11 = iVar11 + 0x20;
        if (bVar15) goto LAB_00081132;
      }
      uVar4 = FUN_0007e454();
      iVar5 = FUN_0007da40(uVar4,*(undefined4 *)(iVar11 + -0x20),0);
      *(int *)(iVar11 + -0x1c) = iVar5;
      if (iVar5 == 0) goto LAB_000810aa;
      fVar18 = *(float *)(iVar11 + -8);
      fVar16 = *(float *)(iVar11 + -4);
      fVar17 = *(float *)(iVar11 + -0x14);
      fVar19 = *(float *)(iVar11 + -0x10);
      *(float *)(iVar5 + 8) = *(float *)(iVar11 + -0x18) + *(float *)(iVar11 + -0xc) * fVar3;
      *(float *)(iVar5 + 0xc) = fVar17 + fVar18 * fVar1;
      *(float *)(iVar5 + 0x10) = fVar19 + fVar16 * fVar2;
      iVar5 = FUN_0007d698(*(undefined4 *)(*(int *)(iVar11 + -0x1c) + 0x38));
      if (iVar5 == 0) goto LAB_000810aa;
      *(undefined4 *)(iVar11 + -0x1c) = 0;
      bVar15 = iVar11 != *(int *)(param_1 + 8);
      iVar11 = iVar11 + 0x20;
    } while (bVar15);
  }
LAB_00081132:
  iVar5 = DAT_000812ac;
  iVar11 = DAT_000812a8;
  fVar3 = DAT_000812a0;
  fVar2 = DAT_0008129c;
  fVar1 = DAT_00081298;
  piVar12 = *(int **)(param_1 + 0x14);
  if (piVar12 != *(int **)(param_1 + 0x18)) {
    puVar14 = (undefined4 *)(DAT_000812a8 + 0x81156);
    do {
      while( true ) {
        if (*(char *)((int)piVar12 + 0xd) == '\0') {
          pvVar6 = operator_new(0x70);
          FUN_0004a910();
          iVar9 = *piVar12;
          piVar12[2] = (int)pvVar6;
        }
        else {
          pvVar6 = operator_new(0x90);
          FUN_0005ef68();
          *(undefined4 *)((int)pvVar6 + 0x7c) = *(undefined4 *)(param_1 + 0x54);
          iVar9 = *piVar12;
          piVar12[2] = (int)pvVar6;
        }
        if (iVar9 == 0) {
          FUN_00084d90(piVar12);
        }
        FUN_00017d64((int)pvVar6 + 0x68,*piVar12);
        fVar17 = (float)piVar12[8];
        fVar20 = (float)piVar12[5];
        fVar16 = (float)piVar12[0x12];
        fVar18 = (float)piVar12[9];
        iVar9 = piVar12[2];
        fVar21 = (float)piVar12[6];
        fVar19 = (float)piVar12[0x13];
        *(float *)(iVar9 + 8) = (float)piVar12[4] + (float)piVar12[7] * fVar3 + (float)piVar12[0x11]
        ;
        *(float *)(iVar9 + 0xc) = fVar20 + fVar17 * fVar1 + fVar16;
        *(float *)(iVar9 + 0x10) = fVar21 + fVar18 * fVar2 + fVar19;
        iVar9 = piVar12[2];
        *(undefined *)(iVar9 + 0x53) = *(undefined *)((int)piVar12 + 0x73);
        *(undefined *)(iVar9 + 0x52) = *(undefined *)((int)piVar12 + 0x72);
        *(undefined *)(iVar9 + 0x51) = *(undefined *)((int)piVar12 + 0x71);
        *(undefined *)(iVar9 + 0x50) = *(undefined *)(piVar12 + 0x1c);
        *(int *)(piVar12[2] + 0x28) = piVar12[10];
        if (-1 < piVar12[0x1d] << 0x1f) break;
        uVar4 = *(undefined4 *)(iVar11 + 0x8115a);
        uVar7 = *(undefined4 *)(iVar11 + 0x8115e);
        iVar9 = piVar12[2];
        *(undefined4 *)(iVar9 + 0x14) = *puVar14;
        *(undefined4 *)(iVar9 + 0x18) = uVar4;
        *(undefined4 *)(iVar9 + 0x1c) = uVar7;
        if (piVar12[0x1d] << 0x1e < 0) {
          *(undefined *)(piVar12[2] + 0x53) = 0;
        }
        iVar9 = *(int *)(*(int *)(iVar13 + iVar5) + 0x40);
        if (iVar9 == 0) goto LAB_00081282;
LAB_00081226:
        FUN_00049d7c(iVar9,piVar12[2],0);
        piVar12 = piVar12 + 0x1f;
        if (piVar12 == *(int **)(param_1 + 0x18)) {
          return;
        }
      }
      iVar10 = piVar12[2];
      iVar9 = piVar12[0x1a];
      iVar8 = piVar12[0x1b];
      *(int *)(iVar10 + 0x14) = piVar12[0x19];
      *(int *)(iVar10 + 0x18) = iVar9;
      *(int *)(iVar10 + 0x1c) = iVar8;
      if (piVar12[0x1d] << 0x1e < 0) {
        *(undefined *)(piVar12[2] + 0x53) = 0;
      }
      iVar9 = *(int *)(*(int *)(iVar13 + iVar5) + 0x40);
      if (iVar9 != 0) goto LAB_00081226;
LAB_00081282:
      *(char *)(piVar12 + 3) = (char)iVar9;
      piVar12 = piVar12 + 0x1f;
    } while (piVar12 != *(int **)(param_1 + 0x18));
  }
  return;
}



