/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030274 FUN_00030274 */

float FUN_00030274(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = DAT_000302b0;
  fVar3 = *(float *)(DAT_000302b0 + 0x3028a) - DAT_000302a4;
  iVar1 = (uint)(fVar3 < DAT_000302a8) << 0x1f;
  *(float *)(DAT_000302b0 + 0x3028a) = fVar3;
  if (iVar1 < 0) {
    fVar3 = DAT_000302ac;
  }
  if (iVar1 < 0) {
    *(float *)(iVar2 + 0x3028a) = fVar3;
  }
  return fVar3;
}



