/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b9bc FUN_0007b9bc */

void FUN_0007b9bc(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  
  fVar1 = DAT_0007bb2c;
  fVar9 = *(float *)(param_1 + 0xac);
  iVar7 = DAT_0007bb3c + 0x7b9d8;
  if ((fVar9 != DAT_0007bb2c && fVar9 < DAT_0007bb2c == (NAN(fVar9) || NAN(DAT_0007bb2c))) &&
     (*(int *)(param_1 + 0xb0) != 0)) {
    FUN_0007b72c();
    fVar9 = DAT_0007bb30;
    fVar11 = *(float *)(param_1 + 0xcc);
    uVar2 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))();
    fVar10 = fVar9 - *(float *)(param_1 + 0xac);
    uVar3 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))();
    uVar4 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x18))();
    uVar5 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x18))();
    iVar8 = *(int *)(iVar7 + DAT_0007bb40);
    fVar10 = DAT_0007bb38 + (float)(ulonglong)uVar5 * (fVar10 * fVar10 - DAT_0007bb34);
    *(float *)(iVar8 + 0x1894) = (float)(ulonglong)uVar3;
    *(float *)(iVar8 + 0x1898) = fVar1;
    *(float *)(iVar8 + 0x189c) = fVar1;
    *(float *)(iVar8 + 0x18a0) = fVar1;
    *(float *)(iVar8 + 0x18a4) = fVar1;
    *(float *)(iVar8 + 0x18a8) = (float)(ulonglong)uVar4;
    *(float *)(iVar8 + 0x18ac) = fVar1;
    *(float *)(iVar8 + 0x18b0) = fVar1;
    *(float *)(iVar8 + 0x18b4) = fVar1;
    *(float *)(iVar8 + 0x18b8) = fVar1;
    *(float *)(iVar8 + 0x18bc) = fVar1;
    *(float *)(iVar8 + 0x18c0) = fVar1;
    *(float *)(iVar8 + 0x18c4) = fVar11 + (float)(ulonglong)uVar2 * fVar1 + fVar1;
    *(float *)(iVar8 + 0x18c8) = fVar10 + fVar9 + fVar1;
    *(float *)(iVar8 + 0x18cc) = fVar1;
    *(float *)(iVar8 + 0x18d0) = fVar9;
    *(int *)(iVar8 + 0x18d8) = *(int *)(iVar8 + 0x18d8) + 1;
    FUN_0008d434(iVar8,1);
    FUN_000995e4(*(undefined4 *)(param_1 + 0xb0));
    puVar6 = *(undefined **)(iVar7 + DAT_0007bb44);
    local_34 = *puVar6;
    local_33 = puVar6[1];
    local_32 = puVar6[2];
    local_31 = puVar6[3];
    FUN_000a344c(&local_34,fVar1,fVar9,fVar1,fVar9);
    FUN_000995e0(*(undefined4 *)(param_1 + 0xb0));
  }
  return;
}



