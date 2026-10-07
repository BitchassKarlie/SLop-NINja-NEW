/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085550 FUN_00085550 */

float FUN_00085550(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + (param_2 + 0x18) * 4) / DAT_000855b8 + DAT_000855bc;
  fVar2 = DAT_000855c0;
  if ((0.0 < fVar1) && (fVar2 = fVar1, fVar1 < DAT_000855bc == (NAN(fVar1) || NAN(DAT_000855bc)))) {
    fVar2 = DAT_000855bc;
  }
  fVar2 = ((float)(longlong)*(int *)(param_1 + param_2 * 4 + 0x5c) + fVar2) / DAT_000855c4;
  if (-1 < (int)((uint)(fVar2 < DAT_000855bc) << 0x1f)) {
    fVar2 = DAT_000855bc;
  }
  return fVar2;
}



