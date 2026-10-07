/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019c60 FUN_00019c60 */

void FUN_00019c60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = *(int *)(param_1 + 300);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
  }
  else {
    fVar7 = *(float *)(iVar2 + 0x10);
    fVar5 = *(float *)(param_1 + 0xf0);
    fVar6 = *(float *)(param_1 + 0xf4);
    fVar8 = *(float *)(iVar2 + 0x14);
    fVar4 = *(float *)(param_1 + 0xf8);
    fVar9 = *(float *)(iVar2 + 0x18);
    uVar1 = *(undefined4 *)(iVar2 + 0x14);
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(param_1 + 0xf4) = uVar1;
    *(undefined4 *)(param_1 + 0xf8) = uVar3;
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) - (fVar5 - fVar7);
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) - (fVar6 - fVar8);
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xec) - (fVar4 - fVar9);
  }
  return;
}



