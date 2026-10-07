/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000855c8 FUN_000855c8 */

void FUN_000855c8(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  param_1 = param_1 + (param_3 + 0x12) * 4;
  fVar1 = *(float *)(param_1 + 4);
  if (fVar1 != 0.0 && fVar1 < 0.0 == NAN(fVar1)) {
    fVar2 = fVar1 + param_2;
    if (-1 < (int)((uint)(fVar1 + param_2 < DAT_000855fc) << 0x1f)) {
      fVar2 = DAT_000855fc;
    }
    *(float *)(param_1 + 4) = fVar2;
  }
  return;
}



