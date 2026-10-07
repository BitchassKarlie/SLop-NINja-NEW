/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008cb8c FUN_0008cb8c */

undefined4 FUN_0008cb8c(int param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_24 = *(float *)(DAT_0008cc74 + 0x8cb9c);
  local_20 = *(float *)(DAT_0008cc74 + 0x8cba0);
  local_1c = *(float *)(DAT_0008cc74 + 0x8cba4);
  FUN_00092f74(param_2 + 4,param_2 + 0x14,param_1 + 4,&local_24);
  local_30 = local_24 - *(float *)(param_1 + 4);
  local_2c = local_20 - *(float *)(param_1 + 8);
  local_28 = local_1c - *(float *)(param_1 + 0xc);
  fVar3 = local_2c * local_2c + local_30 * local_30 + local_28 * local_28;
  fVar2 = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14);
  if (fVar2 == fVar3 || fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3))) {
    uVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_00092d98(fVar3);
    FUN_0001a178(&local_30);
    fVar2 = *(float *)(param_1 + 0x14) - fVar2;
    if ((int)((uint)(fVar2 < 0.0) << 0x1f) < 0) {
      fVar2 = -fVar2;
    }
    *param_3 = local_30 * fVar2;
    param_3[1] = local_2c * fVar2;
    param_3[2] = local_28 * fVar2;
    uVar1 = 1;
  }
  return uVar1;
}



