/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001cfc4 FUN_0001cfc4 */

void FUN_0001cfc4(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 4) = fVar1 * param_3 - *(float *)(param_1 + 8) * param_2;
  *(float *)(param_1 + 0x14) = fVar2 * param_3 - *(float *)(param_1 + 0x18) * param_2;
  *(float *)(param_1 + 0x24) = fVar3 * param_3 - *(float *)(param_1 + 0x28) * param_2;
  *(float *)(param_1 + 0x34) = fVar4 * param_3 - *(float *)(param_1 + 0x38) * param_2;
  *(float *)(param_1 + 8) = param_3 * *(float *)(param_1 + 8) + fVar1 * param_2;
  *(float *)(param_1 + 0x18) = param_3 * *(float *)(param_1 + 0x18) + param_2 * fVar2;
  *(float *)(param_1 + 0x28) = param_3 * *(float *)(param_1 + 0x28) + param_2 * fVar3;
  *(float *)(param_1 + 0x38) = param_3 * *(float *)(param_1 + 0x38) + param_2 * fVar4;
  return;
}



