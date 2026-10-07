/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005f50c FUN_0005f50c */

void FUN_0005f50c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  
  iVar5 = DAT_0005f694 + 0x5f51c;
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_000995e4(*(undefined4 *)(param_1 + 0xa8));
    iVar1 = DAT_0005f69c;
    iVar7 = *(int *)(iVar5 + DAT_0005f698);
    puVar6 = (undefined4 *)(DAT_0005f69c + 0x5f538);
    *(undefined *)(iVar7 + 0x18d4) = 0;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f53c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f540);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f544);
    *(undefined4 *)(iVar7 + 0x1094) = *puVar6;
    *(undefined4 *)(iVar7 + 0x1098) = uVar2;
    *(undefined4 *)(iVar7 + 0x109c) = uVar3;
    *(undefined4 *)(iVar7 + 0x10a0) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f54c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f550);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f554);
    *(undefined4 *)(iVar7 + 0x10a4) = *(undefined4 *)(iVar1 + 0x5f548);
    *(undefined4 *)(iVar7 + 0x10a8) = uVar2;
    *(undefined4 *)(iVar7 + 0x10ac) = uVar3;
    *(undefined4 *)(iVar7 + 0x10b0) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f55c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f560);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f564);
    *(undefined4 *)(iVar7 + 0x10b4) = *(undefined4 *)(iVar1 + 0x5f558);
    *(undefined4 *)(iVar7 + 0x10b8) = uVar2;
    *(undefined4 *)(iVar7 + 0x10bc) = uVar3;
    *(undefined4 *)(iVar7 + 0x10c0) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f56c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f570);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f574);
    *(undefined4 *)(iVar7 + 0x10c4) = *(undefined4 *)(iVar1 + 0x5f568);
    *(undefined4 *)(iVar7 + 0x10c8) = uVar2;
    *(undefined4 *)(iVar7 + 0x10cc) = uVar3;
    *(undefined4 *)(iVar7 + 0x10d0) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f53c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f540);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f544);
    *(undefined4 *)(iVar7 + 0x1894) = *puVar6;
    *(undefined4 *)(iVar7 + 0x1898) = uVar2;
    *(undefined4 *)(iVar7 + 0x189c) = uVar3;
    *(undefined4 *)(iVar7 + 0x18a0) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f54c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f550);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f554);
    *(undefined4 *)(iVar7 + 0x18a4) = *(undefined4 *)(iVar1 + 0x5f548);
    *(undefined4 *)(iVar7 + 0x18a8) = uVar2;
    *(undefined4 *)(iVar7 + 0x18ac) = uVar3;
    *(undefined4 *)(iVar7 + 0x18b0) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f55c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f560);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f564);
    *(undefined4 *)(iVar7 + 0x18b4) = *(undefined4 *)(iVar1 + 0x5f558);
    *(undefined4 *)(iVar7 + 0x18b8) = uVar2;
    *(undefined4 *)(iVar7 + 0x18bc) = uVar3;
    *(undefined4 *)(iVar7 + 0x18c0) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x5f56c);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f570);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f574);
    *(undefined4 *)(iVar7 + 0x18c4) = *(undefined4 *)(iVar1 + 0x5f568);
    *(undefined4 *)(iVar7 + 0x18c8) = uVar2;
    *(undefined4 *)(iVar7 + 0x18cc) = uVar3;
    *(undefined4 *)(iVar7 + 0x18d0) = uVar4;
    iVar5 = *(int *)(iVar7 + 0x18d8);
    *(int *)(iVar7 + 0x18d8) = iVar5 + 1;
    fVar10 = *(float *)(param_1 + 0x14);
    fVar11 = *(float *)(param_1 + 0x18);
    fVar12 = *(float *)(param_1 + 0x1c);
    *(float *)(iVar7 + 0x1894) = fVar10 * *(float *)(iVar7 + 0x1894);
    *(float *)(iVar7 + 0x18a4) = fVar10 * *(float *)(iVar7 + 0x18a4);
    *(float *)(iVar7 + 0x18b4) = fVar10 * *(float *)(iVar7 + 0x18b4);
    fVar10 = fVar10 * *(float *)(iVar7 + 0x18c4);
    *(float *)(iVar7 + 0x18c4) = fVar10;
    *(float *)(iVar7 + 0x1898) = fVar11 * *(float *)(iVar7 + 0x1898);
    *(float *)(iVar7 + 0x18a8) = fVar11 * *(float *)(iVar7 + 0x18a8);
    *(float *)(iVar7 + 0x18b8) = fVar11 * *(float *)(iVar7 + 0x18b8);
    fVar11 = fVar11 * *(float *)(iVar7 + 0x18c8);
    *(float *)(iVar7 + 0x18c8) = fVar11;
    *(float *)(iVar7 + 0x189c) = fVar12 * *(float *)(iVar7 + 0x189c);
    *(float *)(iVar7 + 0x18ac) = fVar12 * *(float *)(iVar7 + 0x18ac);
    *(float *)(iVar7 + 0x18bc) = fVar12 * *(float *)(iVar7 + 0x18bc);
    fVar12 = fVar12 * *(float *)(iVar7 + 0x18cc);
    *(int *)(iVar7 + 0x18d8) = iVar5 + 2;
    *(float *)(iVar7 + 0x18cc) = fVar12;
    fVar8 = *(float *)(param_1 + 0xc);
    fVar9 = *(float *)(param_1 + 0x10);
    *(float *)(iVar7 + 0x18c4) = fVar10 + *(float *)(param_1 + 8);
    *(float *)(iVar7 + 0x18c8) = fVar11 + fVar8;
    *(float *)(iVar7 + 0x18cc) = fVar12 + fVar9;
    *(int *)(iVar7 + 0x18d8) = iVar5 + 3;
    FUN_0008d434(iVar7,1);
    local_24 = *(undefined *)(param_1 + 0x7c);
    local_23 = *(undefined *)(param_1 + 0x7d);
    local_22 = *(undefined *)(param_1 + 0x7e);
    local_21 = *(undefined *)(param_1 + 0x7f);
    FUN_000a35f4(&local_24);
    FUN_000995e0(*(undefined4 *)(param_1 + 0xa8));
  }
  return;
}



