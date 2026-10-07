/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000650d0 FUN_000650d0 */

void FUN_000650d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float extraout_s15;
  float fVar13;
  float fVar14;
  undefined auStack_118 [32];
  undefined4 local_f8 [47];
  
  fVar4 = DAT_0006528c;
  fVar3 = DAT_00065288;
  fVar2 = DAT_00065284;
  uVar7 = DAT_00065280;
  uVar6 = DAT_0006527c;
  fVar1 = DAT_00065278;
  iVar11 = DAT_0006529c + 0x650ee;
  if (DAT_00065274 < *(float *)(param_1 + 0x8c)) {
    puVar8 = local_f8;
    iVar9 = 0;
    do {
      uVar5 = FUN_0009e880(param_1 + 0x50);
      fVar14 = DAT_00065290;
      puVar8[-4] = fVar1;
      puVar8[-5] = fVar1;
      puVar8[-6] = fVar1;
      puVar8[-7] = fVar1;
      puVar8[-8] = fVar1;
      puVar8[-3] = uVar6;
      puVar8[-1] = uVar7;
      *puVar8 = uVar7;
      puVar8[-2] = uVar5;
      fVar13 = extraout_s15;
      if (1 < iVar9 - 2U) {
        puVar8[-7] = fVar3;
        fVar13 = fVar3;
        if (2 < iVar9) {
          fVar13 = fVar2;
        }
        puVar8[-8] = fVar13;
      }
      bVar12 = iVar9 << 0x1f < 0;
      if (bVar12) {
        fVar13 = (float)puVar8[-7] - fVar4;
      }
      if (bVar12) {
        puVar8[-7] = fVar13;
      }
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 9;
    } while (iVar9 != 6);
    FUN_000995e4(*(undefined4 *)(param_1 + 0x68));
    iVar9 = DAT_000652a4;
    fVar2 = DAT_00065298;
    fVar1 = DAT_00065278;
    iVar10 = 0;
    iVar11 = *(int *)(iVar11 + DAT_000652a0);
    puVar8 = (undefined4 *)(DAT_000652a4 + 0x651a8);
    fVar14 = (float)(ulonglong)*(ushort *)(param_1 + 0x70) * DAT_00065294 * fVar14 - fVar14;
    while( true ) {
      iVar10 = iVar10 + 1;
      *(undefined *)(iVar11 + 0x18d4) = 0;
      uVar6 = *(undefined4 *)(iVar9 + 0x651ac);
      uVar7 = *(undefined4 *)(iVar9 + 0x651b0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651b4);
      *(undefined4 *)(iVar11 + 0x1094) = *puVar8;
      *(undefined4 *)(iVar11 + 0x1098) = uVar6;
      *(undefined4 *)(iVar11 + 0x109c) = uVar7;
      *(undefined4 *)(iVar11 + 0x10a0) = uVar5;
      uVar6 = *(undefined4 *)(iVar9 + 0x651bc);
      uVar7 = *(undefined4 *)(iVar9 + 0x651c0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651c4);
      *(undefined4 *)(iVar11 + 0x10a4) = *(undefined4 *)(iVar9 + 0x651b8);
      *(undefined4 *)(iVar11 + 0x10a8) = uVar6;
      *(undefined4 *)(iVar11 + 0x10ac) = uVar7;
      *(undefined4 *)(iVar11 + 0x10b0) = uVar5;
      uVar6 = *(undefined4 *)(iVar9 + 0x651cc);
      uVar7 = *(undefined4 *)(iVar9 + 0x651d0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651d4);
      *(undefined4 *)(iVar11 + 0x10b4) = *(undefined4 *)(iVar9 + 0x651c8);
      *(undefined4 *)(iVar11 + 0x10b8) = uVar6;
      *(undefined4 *)(iVar11 + 0x10bc) = uVar7;
      *(undefined4 *)(iVar11 + 0x10c0) = uVar5;
      uVar6 = *(undefined4 *)(iVar9 + 0x651dc);
      uVar7 = *(undefined4 *)(iVar9 + 0x651e0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651e4);
      *(undefined4 *)(iVar11 + 0x10c4) = *(undefined4 *)(iVar9 + 0x651d8);
      *(undefined4 *)(iVar11 + 0x10c8) = uVar6;
      *(undefined4 *)(iVar11 + 0x10cc) = uVar7;
      *(undefined4 *)(iVar11 + 0x10d0) = uVar5;
      uVar6 = *(undefined4 *)(iVar9 + 0x651ac);
      uVar7 = *(undefined4 *)(iVar9 + 0x651b0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651b4);
      *(undefined4 *)(iVar11 + 0x1894) = *puVar8;
      *(undefined4 *)(iVar11 + 0x1898) = uVar6;
      *(undefined4 *)(iVar11 + 0x189c) = uVar7;
      *(undefined4 *)(iVar11 + 0x18a0) = uVar5;
      uVar6 = *(undefined4 *)(iVar9 + 0x651bc);
      uVar7 = *(undefined4 *)(iVar9 + 0x651c0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651c4);
      *(undefined4 *)(iVar11 + 0x18a4) = *(undefined4 *)(iVar9 + 0x651b8);
      *(undefined4 *)(iVar11 + 0x18a8) = uVar6;
      *(undefined4 *)(iVar11 + 0x18ac) = uVar7;
      *(undefined4 *)(iVar11 + 0x18b0) = uVar5;
      uVar6 = *(undefined4 *)(iVar9 + 0x651cc);
      uVar7 = *(undefined4 *)(iVar9 + 0x651d0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651d4);
      *(undefined4 *)(iVar11 + 0x18b4) = *(undefined4 *)(iVar9 + 0x651c8);
      *(undefined4 *)(iVar11 + 0x18b8) = uVar6;
      *(undefined4 *)(iVar11 + 0x18bc) = uVar7;
      *(undefined4 *)(iVar11 + 0x18c0) = uVar5;
      uVar6 = *(undefined4 *)(iVar9 + 0x651dc);
      uVar7 = *(undefined4 *)(iVar9 + 0x651e0);
      uVar5 = *(undefined4 *)(iVar9 + 0x651e4);
      *(undefined4 *)(iVar11 + 0x18c4) = *(undefined4 *)(iVar9 + 0x651d8);
      *(undefined4 *)(iVar11 + 0x18c8) = uVar6;
      *(undefined4 *)(iVar11 + 0x18cc) = uVar7;
      *(undefined4 *)(iVar11 + 0x18d0) = uVar5;
      *(int *)(iVar11 + 0x18d8) = *(int *)(iVar11 + 0x18d8) + 2;
      *(float *)(iVar11 + 0x18c4) = *(float *)(iVar11 + 0x18c4) + fVar1;
      *(float *)(iVar11 + 0x18c8) = fVar14 + *(float *)(iVar11 + 0x18c8);
      *(float *)(iVar11 + 0x18cc) = *(float *)(iVar11 + 0x18cc) - fVar2;
      FUN_0008d434(iVar11,1);
      FUN_000a3434(auStack_118,6,0);
      if (iVar10 == 4) break;
      fVar14 = fVar14 + DAT_00065290;
    }
    FUN_000995e0(*(undefined4 *)(param_1 + 0x68));
  }
  return;
}



