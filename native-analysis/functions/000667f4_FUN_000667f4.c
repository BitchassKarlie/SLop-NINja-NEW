/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000667f4 FUN_000667f4 */

void FUN_000667f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  float fVar6;
  
  iVar2 = DAT_0006688c;
  iVar5 = DAT_00066888 + 0x6680c;
  fVar6 = *(float *)(param_1 + 0xb4);
  if ((int)((uint)(*(float *)(param_1 + 0xb4) < 0.0) << 0x1f) < 0) {
    fVar6 = DAT_00066880;
  }
  *(undefined *)(param_1 + 0xbc) = 0;
  iVar3 = *(int *)(iVar5 + iVar2);
  *(float *)(param_1 + 0x70) = fVar6;
  if ((*(int *)(iVar3 + 4) == 2) || (iVar3 = FUN_0002f5ec(), iVar3 != 0)) {
    uVar1 = DAT_00066884;
    iVar3 = *(int *)(iVar5 + iVar2);
    *(undefined4 *)(param_1 + 0x70) = DAT_00066884;
    iVar2 = *(int *)(iVar3 + 0x50);
    if ((*(float *)(iVar2 + 0xf0) == 0.0) &&
       ((int)((uint)(*(float *)(iVar3 + 0x10) < 0.0) << 0x1f) < 0)) {
      *(undefined4 *)(iVar2 + 0xf0) = uVar1;
    }
  }
  iVar2 = DAT_00066890;
  *(float *)(param_1 + 0xb8) = DAT_00066880;
  puVar4 = *(undefined **)(iVar5 + iVar2);
  *(undefined *)(param_1 + 0x53) = puVar4[3];
  *(undefined *)(param_1 + 0x52) = puVar4[2];
  *(undefined *)(param_1 + 0x51) = puVar4[1];
  *(undefined *)(param_1 + 0x50) = *puVar4;
  return;
}



