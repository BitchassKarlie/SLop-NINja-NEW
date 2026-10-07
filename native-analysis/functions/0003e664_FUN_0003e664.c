/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e664 FUN_0003e664 */

void FUN_0003e664(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  iVar1 = *(int *)(DAT_0003e718 + 0x3e674 + DAT_0003e71c);
  *(float *)(iVar1 + 0x1894) = fVar2 * *(float *)(iVar1 + 0x1894);
  *(float *)(iVar1 + 0x18a4) = fVar2 * *(float *)(iVar1 + 0x18a4);
  *(float *)(iVar1 + 0x18b4) = fVar2 * *(float *)(iVar1 + 0x18b4);
  *(float *)(iVar1 + 0x18c4) = fVar2 * *(float *)(iVar1 + 0x18c4);
  *(float *)(iVar1 + 0x1898) = fVar3 * *(float *)(iVar1 + 0x1898);
  *(float *)(iVar1 + 0x18a8) = fVar3 * *(float *)(iVar1 + 0x18a8);
  *(float *)(iVar1 + 0x18b8) = fVar3 * *(float *)(iVar1 + 0x18b8);
  *(float *)(iVar1 + 0x18c8) = fVar3 * *(float *)(iVar1 + 0x18c8);
  *(float *)(iVar1 + 0x189c) = fVar4 * *(float *)(iVar1 + 0x189c);
  *(float *)(iVar1 + 0x18ac) = fVar4 * *(float *)(iVar1 + 0x18ac);
  *(float *)(iVar1 + 0x18bc) = fVar4 * *(float *)(iVar1 + 0x18bc);
  *(int *)(iVar1 + 0x18d8) = *(int *)(iVar1 + 0x18d8) + 1;
  *(float *)(iVar1 + 0x18cc) = fVar4 * *(float *)(iVar1 + 0x18cc);
  return;
}



