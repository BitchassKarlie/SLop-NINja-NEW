/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008cc78 FUN_0008cc78 */

undefined4 FUN_0008cc78(int param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_24;
  float local_20;
  float local_1c;
  
  local_24 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  local_1c = *(float *)(param_1 + 0xc);
  local_20 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(DAT_0008cd58 + 0x8cca6);
  fVar3 = *(float *)(DAT_0008cd58 + 0x8ccaa);
  *param_3 = *(float *)(DAT_0008cd58 + 0x8cca2);
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  local_1c = local_1c - fVar4;
  fVar3 = local_20 * local_20 + local_24 * local_24 + local_1c * local_1c;
  fVar2 = *(float *)(param_1 + 0x14) + *(float *)(param_2 + 0x14);
  if (fVar3 < fVar2 * fVar2) {
    fVar2 = (float)FUN_00092d98(fVar3);
    fVar3 = fVar2 - (*(float *)(param_1 + 0x14) + *(float *)(param_2 + 0x14));
    if (fVar2 != 0.0 && fVar2 < 0.0 == NAN(fVar2)) {
      FUN_00019f30(&local_24,fVar2);
    }
    *param_3 = fVar3 * local_24;
    param_3[1] = fVar3 * local_20;
    param_3[2] = fVar3 * local_1c;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



