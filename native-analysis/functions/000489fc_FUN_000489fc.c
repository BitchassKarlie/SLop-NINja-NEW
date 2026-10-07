/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000489fc FUN_000489fc */

void FUN_000489fc(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined *puVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  undefined4 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  
  iVar11 = DAT_00048d84;
  iVar9 = DAT_00048d80;
  iVar18 = DAT_00048d7c + 0x48a14;
  if ((*(int *)(param_1 + 0x74) == 0xe) && (**(int **)(iVar18 + DAT_00048d80) != 0)) {
    iVar16 = 7 - (int)*(float *)(param_1 + 0x78) % 8;
    if (*(char *)(DAT_00048d84 + 0x48af2) == '\0') {
      *(undefined *)(DAT_00048d84 + 0x48af2) = 1;
      fVar26 = DAT_00048d6c;
      fVar22 = DAT_00048d68;
      fVar1 = DAT_00048d64;
      fVar27 = DAT_00048d60;
      fVar24 = DAT_00048d5c;
      sVar15 = 0;
      iVar17 = 0;
      pfVar13 = (float *)(iVar11 + 0x48af6);
      do {
        fVar2 = (float)FUN_000927b8(sVar15);
        fVar2 = fVar2 * fVar24;
        fVar3 = (float)FUN_000927c8(sVar15);
        fVar3 = fVar3 * fVar24;
        fVar4 = (float)FUN_000927b8(sVar15 + 0x3ffc);
        fVar4 = fVar4 * fVar27;
        fVar5 = (float)FUN_000927c8(sVar15 + 0x3ffc);
        iVar7 = 0;
        pfVar13[7] = fVar1;
        pfVar13[8] = fVar1;
        pfVar10 = (float *)(iVar11 + 0x48af6) + iVar17 * 9;
        pfVar13[0x10] = fVar22;
        pfVar13[0x11] = fVar1;
        pfVar13[0x19] = fVar1;
        pfVar13[0x1a] = fVar22;
        pfVar13[0x22] = fVar1;
        pfVar13[0x23] = fVar22;
        pfVar13[0x2b] = fVar22;
        pfVar13[0x2c] = fVar1;
        pfVar13[0x34] = fVar22;
        pfVar13[0x35] = fVar22;
        *pfVar13 = fVar2 - fVar4;
        fVar23 = fVar2 * fVar26;
        fVar5 = fVar5 * fVar27;
        pfVar13[1] = fVar3 - fVar5;
        fVar25 = fVar3 * fVar26;
        pfVar13[9] = fVar2 + fVar4;
        pfVar13[0x24] = fVar2 + fVar4;
        fVar2 = fVar23 - fVar4;
        pfVar13[10] = fVar3 + fVar5;
        pfVar13[0x25] = fVar3 + fVar5;
        fVar3 = fVar25 - fVar5;
        pfVar13[0x12] = fVar2;
        pfVar13[0x1b] = fVar2;
        pfVar13[0x13] = fVar3;
        pfVar13[0x1c] = fVar3;
        pfVar13[0x2d] = fVar4 + fVar23;
        pfVar13[0x2e] = fVar5 + fVar25;
        do {
          iVar7 = iVar7 + 1;
          pfVar10[5] = fVar22;
          pfVar10[2] = fVar1;
          pfVar10 = pfVar10 + 9;
        } while (iVar7 != 6);
        sVar15 = sVar15 + 0x1ffe;
        pfVar13 = pfVar13 + 0x36;
        iVar17 = iVar17 + 6;
      } while (sVar15 != -0x10);
    }
    puVar14 = (undefined *)(DAT_00048d88 + 0x48c3c);
    puVar20 = &UNK_000492fc + DAT_00048d88;
    do {
      local_49 = 200;
      local_4d = 200;
      iVar11 = (iVar16 % 8) * 0x20;
      if (0xfe < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar11 < 0x40) {
        iVar11 = 0x40;
      }
      local_50 = (undefined)iVar11;
      local_4f = local_50;
      local_4e = local_50;
      local_4c = local_50;
      local_4b = local_50;
      local_4a = local_50;
      FUN_0002c714(&local_54,&local_50,param_2);
      local_49 = local_51;
      local_4a = local_52;
      local_4b = local_53;
      local_4c = local_54;
      iVar11 = 0;
      do {
        uVar6 = FUN_0009e880(&local_4c);
        iVar17 = iVar11 + 0x24;
        *(undefined4 *)(puVar14 + iVar11 + 0x18) = uVar6;
        iVar11 = iVar17;
      } while (iVar17 != 0xd8);
      puVar14 = puVar14 + 0xd8;
      iVar16 = iVar16 + 1;
    } while (puVar14 != puVar20);
    puVar19 = *(undefined4 **)(iVar18 + iVar9);
    FUN_000995e4(*puVar19);
    iVar9 = DAT_00048d90;
    fVar27 = DAT_00048d70;
    iVar11 = *(int *)(iVar18 + DAT_00048d8c);
    puVar21 = (undefined4 *)(DAT_00048d90 + 0x48c2c);
    *(undefined *)(iVar11 + 0x18d4) = 0;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c30);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c34);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c38);
    *(undefined4 *)(iVar11 + 0x1094) = *puVar21;
    *(undefined4 *)(iVar11 + 0x1098) = uVar6;
    *(undefined4 *)(iVar11 + 0x109c) = uVar8;
    *(undefined4 *)(iVar11 + 0x10a0) = uVar12;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c40);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c44);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c48);
    *(undefined4 *)(iVar11 + 0x10a4) = *(undefined4 *)(iVar9 + 0x48c3c);
    *(undefined4 *)(iVar11 + 0x10a8) = uVar6;
    *(undefined4 *)(iVar11 + 0x10ac) = uVar8;
    *(undefined4 *)(iVar11 + 0x10b0) = uVar12;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c50);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c54);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c58);
    *(undefined4 *)(iVar11 + 0x10b4) = *(undefined4 *)(iVar9 + 0x48c4c);
    *(undefined4 *)(iVar11 + 0x10b8) = uVar6;
    *(undefined4 *)(iVar11 + 0x10bc) = uVar8;
    *(undefined4 *)(iVar11 + 0x10c0) = uVar12;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c60);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c64);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c68);
    *(undefined4 *)(iVar11 + 0x10c4) = *(undefined4 *)(iVar9 + 0x48c5c);
    *(undefined4 *)(iVar11 + 0x10c8) = uVar6;
    *(undefined4 *)(iVar11 + 0x10cc) = uVar8;
    *(undefined4 *)(iVar11 + 0x10d0) = uVar12;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c30);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c34);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c38);
    *(undefined4 *)(iVar11 + 0x1894) = *puVar21;
    *(undefined4 *)(iVar11 + 0x1898) = uVar6;
    *(undefined4 *)(iVar11 + 0x189c) = uVar8;
    *(undefined4 *)(iVar11 + 0x18a0) = uVar12;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c40);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c44);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c48);
    *(undefined4 *)(iVar11 + 0x18a4) = *(undefined4 *)(iVar9 + 0x48c3c);
    *(undefined4 *)(iVar11 + 0x18a8) = uVar6;
    *(undefined4 *)(iVar11 + 0x18ac) = uVar8;
    *(undefined4 *)(iVar11 + 0x18b0) = uVar12;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c50);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c54);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c58);
    *(undefined4 *)(iVar11 + 0x18b4) = *(undefined4 *)(iVar9 + 0x48c4c);
    *(undefined4 *)(iVar11 + 0x18b8) = uVar6;
    *(undefined4 *)(iVar11 + 0x18bc) = uVar8;
    *(undefined4 *)(iVar11 + 0x18c0) = uVar12;
    uVar6 = *(undefined4 *)(iVar9 + 0x48c60);
    uVar8 = *(undefined4 *)(iVar9 + 0x48c64);
    uVar12 = *(undefined4 *)(iVar9 + 0x48c68);
    *(undefined4 *)(iVar11 + 0x18c4) = *(undefined4 *)(iVar9 + 0x48c5c);
    *(undefined4 *)(iVar11 + 0x18c8) = uVar6;
    *(undefined4 *)(iVar11 + 0x18cc) = uVar8;
    *(undefined4 *)(iVar11 + 0x18d0) = uVar12;
    iVar9 = *(int *)(iVar11 + 0x18d8);
    *(int *)(iVar11 + 0x18d8) = iVar9 + 1;
    fVar24 = *(float *)(DAT_00048d94 + 0x48c8a) * fVar27;
    fVar26 = *(float *)(DAT_00048d94 + 0x48c8e) * fVar27;
    fVar27 = *(float *)(DAT_00048d94 + 0x48c92) * fVar27;
    *(float *)(iVar11 + 0x1894) = fVar24 * *(float *)(iVar11 + 0x1894);
    *(float *)(iVar11 + 0x18a4) = fVar24 * *(float *)(iVar11 + 0x18a4);
    *(float *)(iVar11 + 0x18b4) = fVar24 * *(float *)(iVar11 + 0x18b4);
    *(float *)(iVar11 + 0x1898) = fVar26 * *(float *)(iVar11 + 0x1898);
    *(float *)(iVar11 + 0x18a8) = fVar26 * *(float *)(iVar11 + 0x18a8);
    *(float *)(iVar11 + 0x18b8) = fVar26 * *(float *)(iVar11 + 0x18b8);
    *(float *)(iVar11 + 0x189c) = fVar27 * *(float *)(iVar11 + 0x189c);
    *(float *)(iVar11 + 0x18ac) = fVar27 * *(float *)(iVar11 + 0x18ac);
    *(float *)(iVar11 + 0x18bc) = fVar27 * *(float *)(iVar11 + 0x18bc);
    fVar1 = DAT_00048d78;
    fVar22 = fVar24 * *(float *)(iVar11 + 0x18c4) - DAT_00048d74;
    *(int *)(iVar11 + 0x18d8) = iVar9 + 3;
    fVar24 = DAT_00048d64;
    *(float *)(iVar11 + 0x18c4) = fVar22;
    *(float *)(iVar11 + 0x18c8) = fVar26 * *(float *)(iVar11 + 0x18c8) - fVar1;
    *(float *)(iVar11 + 0x18cc) = fVar24 + fVar27 * *(float *)(iVar11 + 0x18cc);
    FUN_0008d434(iVar11,1);
    FUN_000a3440(DAT_00048d98 + 0x48e08,0x30,0);
    FUN_000995e0(*puVar19);
  }
  return;
}



