/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000927e0 FUN_000927e0 */

float FUN_000927e0(uint param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(DAT_00092820 + 0x927ec + (((int)param_1 >> 4) + 0x400U & 0xfff) * 4);
  fVar2 = DAT_0009281c;
  if (fVar1 != 0.0) {
    fVar2 = *(float *)(DAT_00092820 + 0x927ec + (param_1 >> 4) * 4) / fVar1;
  }
  return fVar2;
}



