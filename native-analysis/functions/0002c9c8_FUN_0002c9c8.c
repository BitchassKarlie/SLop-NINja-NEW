/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002c9c8 FUN_0002c9c8 */

void FUN_0002c9c8(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = DAT_0002cae0;
  iVar10 = 0;
  iVar12 = DAT_0002cae4 + 0x2c9da;
  piVar1 = (int *)(DAT_0002cae0 + 0x2c9e4);
  *(undefined4 *)(DAT_0002cae0 + 0x2c9e8) = 0;
  iVar4 = DAT_0002cae8;
  piVar9 = *(int **)(iVar3 + 0x2c9dc);
  if (0 < *piVar1) {
    while( true ) {
      if ((*(char *)((int)piVar9 + 0x75) != '\0') && (-1 < piVar9[0x1c])) {
        (**(code **)(*piVar9 + 0x10))(piVar9);
        *(int *)(iVar4 + 0x2c9f8) = *(int *)(iVar4 + 0x2c9f8) + 1;
      }
      iVar10 = iVar10 + 1;
      if (*(int *)(iVar3 + 0x2c9e4) <= iVar10) break;
      piVar9 = piVar9 + 0x1e;
    }
  }
  iVar3 = DAT_0002caec;
  if (*(int *)(DAT_0002caec + 0x2ca26) != 0) {
    FUN_000995e4(*(undefined4 *)(DAT_0002caec + 0x2ca26));
    iVar4 = DAT_0002caf4;
    fVar2 = DAT_0002cadc;
    iVar12 = *(int *)(iVar12 + DAT_0002caf0);
    puVar11 = (undefined4 *)(DAT_0002caf4 + 0x2ca30);
    *(undefined *)(iVar12 + 0x18d4) = 0;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca34);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca38);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca3c);
    *(undefined4 *)(iVar12 + 0x1094) = *puVar11;
    *(undefined4 *)(iVar12 + 0x1098) = uVar5;
    *(undefined4 *)(iVar12 + 0x109c) = uVar6;
    *(undefined4 *)(iVar12 + 0x10a0) = uVar7;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca44);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca48);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca4c);
    *(undefined4 *)(iVar12 + 0x10a4) = *(undefined4 *)(iVar4 + 0x2ca40);
    *(undefined4 *)(iVar12 + 0x10a8) = uVar5;
    *(undefined4 *)(iVar12 + 0x10ac) = uVar6;
    *(undefined4 *)(iVar12 + 0x10b0) = uVar7;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca54);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca58);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca5c);
    *(undefined4 *)(iVar12 + 0x10b4) = *(undefined4 *)(iVar4 + 0x2ca50);
    *(undefined4 *)(iVar12 + 0x10b8) = uVar5;
    *(undefined4 *)(iVar12 + 0x10bc) = uVar6;
    *(undefined4 *)(iVar12 + 0x10c0) = uVar7;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca64);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca68);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca6c);
    *(undefined4 *)(iVar12 + 0x10c4) = *(undefined4 *)(iVar4 + 0x2ca60);
    *(undefined4 *)(iVar12 + 0x10c8) = uVar5;
    *(undefined4 *)(iVar12 + 0x10cc) = uVar6;
    *(undefined4 *)(iVar12 + 0x10d0) = uVar7;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca34);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca38);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca3c);
    *(undefined4 *)(iVar12 + 0x1894) = *puVar11;
    *(undefined4 *)(iVar12 + 0x1898) = uVar5;
    *(undefined4 *)(iVar12 + 0x189c) = uVar6;
    *(undefined4 *)(iVar12 + 0x18a0) = uVar7;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca44);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca48);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca4c);
    *(undefined4 *)(iVar12 + 0x18a4) = *(undefined4 *)(iVar4 + 0x2ca40);
    *(undefined4 *)(iVar12 + 0x18a8) = uVar5;
    *(undefined4 *)(iVar12 + 0x18ac) = uVar6;
    *(undefined4 *)(iVar12 + 0x18b0) = uVar7;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca54);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca58);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca5c);
    *(undefined4 *)(iVar12 + 0x18b4) = *(undefined4 *)(iVar4 + 0x2ca50);
    *(undefined4 *)(iVar12 + 0x18b8) = uVar5;
    *(undefined4 *)(iVar12 + 0x18bc) = uVar6;
    *(undefined4 *)(iVar12 + 0x18c0) = uVar7;
    uVar5 = *(undefined4 *)(iVar4 + 0x2ca64);
    uVar6 = *(undefined4 *)(iVar4 + 0x2ca68);
    uVar7 = *(undefined4 *)(iVar4 + 0x2ca6c);
    *(undefined4 *)(iVar12 + 0x18c4) = *(undefined4 *)(iVar4 + 0x2ca60);
    *(undefined4 *)(iVar12 + 0x18c8) = uVar5;
    *(undefined4 *)(iVar12 + 0x18cc) = uVar6;
    *(undefined4 *)(iVar12 + 0x18d0) = uVar7;
    iVar4 = DAT_0002caf8;
    iVar10 = *(int *)(iVar12 + 0x18d8);
    pfVar8 = (float *)(DAT_0002caf8 + 0x2ca80);
    *(int *)(iVar12 + 0x18d8) = iVar10 + 1;
    fVar13 = *pfVar8;
    fVar14 = *(float *)(iVar4 + 0x2ca84);
    fVar15 = *(float *)(iVar4 + 0x2ca88);
    *(int *)(iVar12 + 0x18d8) = iVar10 + 2;
    *(float *)(iVar12 + 0x18c4) = *(float *)(iVar12 + 0x18c4) + fVar13 * fVar2;
    *(float *)(iVar12 + 0x18c8) = *(float *)(iVar12 + 0x18c8) + fVar14 * fVar2;
    *(float *)(iVar12 + 0x18cc) = *(float *)(iVar12 + 0x18cc) + fVar15 * fVar2;
    FUN_0008d434(iVar12,1);
    FUN_000a3440(iVar3 + 0x2ca2a,*(int *)(iVar3 + 0x2ca22) * 6,0);
    FUN_000995e0(*(undefined4 *)(iVar3 + 0x2ca26));
  }
  return;
}



