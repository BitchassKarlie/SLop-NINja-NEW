/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001d614 FUN_0001d614 */

void FUN_0001d614(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  
  iVar9 = DAT_0001d7e0;
  uVar2 = DAT_0001d7d4;
  uVar1 = DAT_0001d7d0;
  iVar10 = DAT_0001d7e0 + 0x1d636;
  iVar14 = DAT_0001d7e4 + 0x1d646;
  iVar15 = *(int *)(DAT_0001d7e0 + 0x1d646) * 6;
  iVar11 = *(int *)(DAT_0001d7e0 + 0x1d646) * 0xd8;
  iVar5 = iVar10 + iVar11;
  iVar12 = iVar10 + (iVar15 + 3) * 0x24;
  *(float *)(iVar5 + 0x14) =
       *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x48);
  fVar16 = *(float *)(param_1 + 0x40);
  fVar18 = *(float *)(param_1 + 0x4c);
  fVar17 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(iVar5 + 0x30) = uVar1;
  *(undefined4 *)(iVar5 + 0x34) = uVar2;
  iVar13 = iVar10 + (iVar15 + 4) * 0x24;
  *(float *)(iVar5 + 0x18) = fVar17 + fVar16 + fVar18;
  iVar5 = iVar10 + (iVar15 + 1) * 0x24;
  *(float *)(iVar5 + 0x14) =
       *(float *)(param_1 + 0x10) + (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x3c));
  fVar17 = *(float *)(param_1 + 0x4c);
  fVar19 = *(float *)(param_1 + 0x40);
  fVar18 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(iVar5 + 0x30) = uVar2;
  *(undefined4 *)(iVar5 + 0x34) = uVar2;
  fVar16 = DAT_0001d7d8;
  *(float *)(iVar5 + 0x18) = fVar18 + (fVar17 - fVar19);
  iVar6 = iVar10 + (iVar15 + 2) * 0x24;
  iVar10 = iVar10 + (iVar15 + 5) * 0x24;
  iVar11 = iVar11 + iVar9 + 0x1d64a;
  *(float *)(iVar6 + 0x14) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x3c) * fVar16;
  fVar18 = *(float *)(param_1 + 0x40);
  fVar19 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(iVar6 + 0x30) = uVar1;
  *(undefined4 *)(iVar6 + 0x34) = uVar1;
  fVar17 = DAT_0001d7dc;
  *(float *)(iVar6 + 0x18) = fVar19 + fVar18 * fVar16;
  uVar3 = *(undefined4 *)(iVar6 + 0x18);
  uVar4 = *(undefined4 *)(iVar6 + 0x1c);
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
  *(undefined4 *)(iVar12 + 0x18) = uVar3;
  *(undefined4 *)(iVar12 + 0x1c) = uVar4;
  *(undefined4 *)(iVar12 + 0x20) = uVar7;
  uVar3 = *(undefined4 *)(iVar6 + 0x28);
  uVar4 = *(undefined4 *)(iVar6 + 0x2c);
  uVar7 = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(iVar12 + 0x24) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(iVar12 + 0x28) = uVar3;
  *(undefined4 *)(iVar12 + 0x2c) = uVar4;
  *(undefined4 *)(iVar12 + 0x30) = uVar7;
  *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar6 + 0x34);
  uVar3 = *(undefined4 *)(iVar5 + 0x18);
  uVar4 = *(undefined4 *)(iVar5 + 0x1c);
  uVar7 = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
  *(undefined4 *)(iVar13 + 0x18) = uVar3;
  *(undefined4 *)(iVar13 + 0x1c) = uVar4;
  *(undefined4 *)(iVar13 + 0x20) = uVar7;
  uVar3 = *(undefined4 *)(iVar5 + 0x28);
  uVar4 = *(undefined4 *)(iVar5 + 0x2c);
  uVar7 = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(iVar13 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(iVar13 + 0x28) = uVar3;
  *(undefined4 *)(iVar13 + 0x2c) = uVar4;
  *(undefined4 *)(iVar13 + 0x30) = uVar7;
  *(undefined4 *)(iVar13 + 0x34) = *(undefined4 *)(iVar5 + 0x34);
  iVar9 = DAT_0001d7e8;
  *(float *)(iVar10 + 0x14) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x3c) * fVar17;
  fVar16 = *(float *)(param_1 + 0x40);
  fVar18 = *(float *)(param_1 + 0x14);
  puVar8 = *(undefined **)(iVar14 + iVar9);
  *(undefined4 *)(iVar10 + 0x30) = uVar2;
  *(undefined4 *)(iVar10 + 0x34) = uVar1;
  iVar9 = 0;
  *(float *)(iVar10 + 0x18) = fVar18 + fVar16 * fVar17;
  local_2c = *puVar8;
  local_2b = puVar8[1];
  local_2a = puVar8[2];
  local_29 = puVar8[3];
  do {
    *(undefined4 *)(iVar11 + 8) = uVar2;
    *(undefined4 *)(iVar11 + 0xc) = uVar2;
    *(undefined4 *)(iVar11 + 0x10) = uVar2;
    *(undefined4 *)(iVar11 + 0x14) = uVar1;
    iVar9 = iVar9 + 1;
    uVar3 = FUN_0009e880(&local_2c);
    *(undefined4 *)(iVar11 + 0x18) = uVar3;
    iVar11 = iVar11 + 0x24;
  } while (iVar9 != 6);
  return;
}



