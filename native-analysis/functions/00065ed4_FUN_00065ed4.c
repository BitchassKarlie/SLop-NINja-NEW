/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00065ed4 FUN_00065ed4 */

void FUN_00065ed4(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_88 [7];
  int local_6c [7];
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  undefined auStack_48 [4];
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined auStack_40 [4];
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  
  iVar8 = DAT_00066230;
  iVar7 = DAT_0006622c + 0x65eea;
  fVar12 = *(float *)(*(int *)(iVar7 + DAT_00066230) + 0x10);
  if ((int)((uint)(fVar12 < 0.0) << 0x1f) < 0) {
    fVar12 = -fVar12;
  }
  if (((int)((uint)(fVar12 < DAT_00066210) << 0x1f) < 0) &&
     (iVar2 = FUN_0002f5d4(), fVar12 = DAT_00066214, iVar2 != 0)) {
    iVar8 = *(int *)(iVar7 + iVar8);
    uVar10 = *(undefined4 *)(iVar8 + 0x5c);
    FUN_00036320(local_6c,param_1 + 0x74);
    fVar1 = DAT_0006621c;
    uVar3 = DAT_00066218;
    fVar13 = *(float *)(param_1 + 0x14);
    fVar17 = *(float *)(param_1 + 8);
    local_3c = *(undefined *)(param_1 + 0x50);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    local_3b = *(undefined *)(param_1 + 0x51);
    local_3a = *(undefined *)(param_1 + 0x52);
    local_39 = *(undefined *)(param_1 + 0x53);
    FUN_0002c714(auStack_40,&local_3c,param_2);
    FUN_00091528(uVar10,local_6c,fVar17 + fVar13 * fVar12,uVar5,uVar3,auStack_40,fVar1,uVar3,uVar3,
                 0xe,0);
    iVar2 = *(int *)(iVar7 + DAT_00066234) + 8;
    local_6c[0] = iVar2;
    if (*(char *)(param_1 + 0xbc) != '\0') {
      uVar5 = *(undefined4 *)(iVar8 + 0x5c);
      FUN_00036320(local_88,param_1 + 0xbc);
      fVar13 = *(float *)(param_1 + 0x14);
      fVar18 = *(float *)(param_1 + 8);
      fVar17 = *(float *)(param_1 + 0xc);
      puVar4 = *(undefined **)(iVar7 + DAT_00066238);
      local_44 = *puVar4;
      local_43 = puVar4[1];
      local_42 = puVar4[2];
      local_41 = puVar4[3];
      FUN_0002c714(auStack_48,&local_44,param_2);
      FUN_00091528(uVar5,local_88,fVar18 + fVar13 * fVar12,fVar17 - fVar1,uVar3,auStack_48,
                   DAT_00066220,uVar3,uVar3,0xe,0);
      local_88[0] = iVar2;
    }
    iVar8 = DAT_0006623c;
    fVar1 = DAT_00066228;
    fVar12 = DAT_00066224;
    if (*(int *)(param_1 + 0x68) != 0) {
      uVar14 = (uint)*(float *)(param_1 + 0xb8);
      puVar9 = (undefined4 *)(DAT_0006623c + 0x6605a);
      uVar6 = uVar14 & ~((int)uVar14 >> 0x20);
      if ((int)uVar14 < 0) {
        uVar6 = uVar14 + 3;
      }
      fVar16 = (float)(longlong)((int)uVar14 % 4) * DAT_00066224;
      fVar19 = (float)(longlong)((int)uVar6 >> 2) * DAT_00066228;
      FUN_000995e4(*(undefined4 *)(param_1 + 0x68));
      iVar7 = *(int *)(iVar7 + DAT_00066240);
      *(undefined *)(iVar7 + 0x18d4) = 0;
      uVar3 = *(undefined4 *)(iVar8 + 0x6605e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66062);
      uVar10 = *(undefined4 *)(iVar8 + 0x66066);
      *(undefined4 *)(iVar7 + 0x1094) = *puVar9;
      *(undefined4 *)(iVar7 + 0x1098) = uVar3;
      *(undefined4 *)(iVar7 + 0x109c) = uVar5;
      *(undefined4 *)(iVar7 + 0x10a0) = uVar10;
      uVar3 = *(undefined4 *)(iVar8 + 0x6606e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66072);
      uVar10 = *(undefined4 *)(iVar8 + 0x66076);
      *(undefined4 *)(iVar7 + 0x10a4) = *(undefined4 *)(iVar8 + 0x6606a);
      *(undefined4 *)(iVar7 + 0x10a8) = uVar3;
      *(undefined4 *)(iVar7 + 0x10ac) = uVar5;
      *(undefined4 *)(iVar7 + 0x10b0) = uVar10;
      uVar3 = *(undefined4 *)(iVar8 + 0x6607e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66082);
      uVar10 = *(undefined4 *)(iVar8 + 0x66086);
      *(undefined4 *)(iVar7 + 0x10b4) = *(undefined4 *)(iVar8 + 0x6607a);
      *(undefined4 *)(iVar7 + 0x10b8) = uVar3;
      *(undefined4 *)(iVar7 + 0x10bc) = uVar5;
      *(undefined4 *)(iVar7 + 0x10c0) = uVar10;
      uVar3 = *(undefined4 *)(iVar8 + 0x6608e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66092);
      uVar10 = *(undefined4 *)(iVar8 + 0x66096);
      *(undefined4 *)(iVar7 + 0x10c4) = *(undefined4 *)(iVar8 + 0x6608a);
      *(undefined4 *)(iVar7 + 0x10c8) = uVar3;
      *(undefined4 *)(iVar7 + 0x10cc) = uVar5;
      *(undefined4 *)(iVar7 + 0x10d0) = uVar10;
      uVar3 = *(undefined4 *)(iVar8 + 0x6605e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66062);
      uVar10 = *(undefined4 *)(iVar8 + 0x66066);
      *(undefined4 *)(iVar7 + 0x1894) = *puVar9;
      *(undefined4 *)(iVar7 + 0x1898) = uVar3;
      *(undefined4 *)(iVar7 + 0x189c) = uVar5;
      *(undefined4 *)(iVar7 + 0x18a0) = uVar10;
      uVar3 = *(undefined4 *)(iVar8 + 0x6606e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66072);
      uVar10 = *(undefined4 *)(iVar8 + 0x66076);
      *(undefined4 *)(iVar7 + 0x18a4) = *(undefined4 *)(iVar8 + 0x6606a);
      *(undefined4 *)(iVar7 + 0x18a8) = uVar3;
      *(undefined4 *)(iVar7 + 0x18ac) = uVar5;
      *(undefined4 *)(iVar7 + 0x18b0) = uVar10;
      uVar3 = *(undefined4 *)(iVar8 + 0x6607e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66082);
      uVar10 = *(undefined4 *)(iVar8 + 0x66086);
      *(undefined4 *)(iVar7 + 0x18b4) = *(undefined4 *)(iVar8 + 0x6607a);
      *(undefined4 *)(iVar7 + 0x18b8) = uVar3;
      *(undefined4 *)(iVar7 + 0x18bc) = uVar5;
      *(undefined4 *)(iVar7 + 0x18c0) = uVar10;
      uVar3 = *(undefined4 *)(iVar8 + 0x6608e);
      uVar5 = *(undefined4 *)(iVar8 + 0x66092);
      uVar10 = *(undefined4 *)(iVar8 + 0x66096);
      *(undefined4 *)(iVar7 + 0x18c4) = *(undefined4 *)(iVar8 + 0x6608a);
      *(undefined4 *)(iVar7 + 0x18c8) = uVar3;
      *(undefined4 *)(iVar7 + 0x18cc) = uVar5;
      *(undefined4 *)(iVar7 + 0x18d0) = uVar10;
      iVar8 = *(int *)(iVar7 + 0x18d8);
      *(int *)(iVar7 + 0x18d8) = iVar8 + 1;
      fVar18 = *(float *)(param_1 + 0x14);
      fVar11 = *(float *)(param_1 + 0x18);
      fVar15 = *(float *)(param_1 + 0x1c);
      *(float *)(iVar7 + 0x1894) = fVar18 * *(float *)(iVar7 + 0x1894);
      *(float *)(iVar7 + 0x18a4) = fVar18 * *(float *)(iVar7 + 0x18a4);
      *(float *)(iVar7 + 0x18b4) = fVar18 * *(float *)(iVar7 + 0x18b4);
      fVar18 = fVar18 * *(float *)(iVar7 + 0x18c4);
      *(float *)(iVar7 + 0x18c4) = fVar18;
      *(float *)(iVar7 + 0x1898) = fVar11 * *(float *)(iVar7 + 0x1898);
      *(float *)(iVar7 + 0x18a8) = fVar11 * *(float *)(iVar7 + 0x18a8);
      *(float *)(iVar7 + 0x18b8) = fVar11 * *(float *)(iVar7 + 0x18b8);
      fVar11 = fVar11 * *(float *)(iVar7 + 0x18c8);
      *(float *)(iVar7 + 0x18c8) = fVar11;
      *(float *)(iVar7 + 0x189c) = fVar15 * *(float *)(iVar7 + 0x189c);
      *(float *)(iVar7 + 0x18ac) = fVar15 * *(float *)(iVar7 + 0x18ac);
      *(float *)(iVar7 + 0x18bc) = fVar15 * *(float *)(iVar7 + 0x18bc);
      fVar15 = fVar15 * *(float *)(iVar7 + 0x18cc);
      *(int *)(iVar7 + 0x18d8) = iVar8 + 2;
      *(float *)(iVar7 + 0x18cc) = fVar15;
      fVar13 = *(float *)(param_1 + 0xc);
      fVar17 = *(float *)(param_1 + 0x10);
      *(float *)(iVar7 + 0x18c4) = fVar18 + *(float *)(param_1 + 8);
      *(float *)(iVar7 + 0x18c8) = fVar11 + fVar13;
      *(float *)(iVar7 + 0x18cc) = fVar15 + fVar17;
      *(int *)(iVar7 + 0x18d8) = iVar8 + 3;
      FUN_0008d434(iVar7,1);
      FUN_0002fee4(&local_4c,param_2);
      local_50 = local_4c;
      local_4f = local_4b;
      local_4e = local_4a;
      local_4d = local_49;
      FUN_000a344c(&local_50,fVar16,fVar16 + fVar12,fVar19,fVar19 + fVar1);
      FUN_000995e0(*(undefined4 *)(param_1 + 0x68));
    }
  }
  return;
}



