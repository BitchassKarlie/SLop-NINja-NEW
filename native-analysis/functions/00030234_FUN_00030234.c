/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030234 FUN_00030234 */

float FUN_00030234(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = DAT_00030270;
  fVar3 = *(float *)(DAT_00030270 + 0x30246) - DAT_00030264;
  iVar1 = (uint)(fVar3 < DAT_00030268) << 0x1f;
  *(float *)(DAT_00030270 + 0x30246) = fVar3;
  if (iVar1 < 0) {
    fVar3 = DAT_0003026c;
  }
  if (iVar1 < 0) {
    *(float *)(iVar2 + 0x30246) = fVar3;
  }
  return fVar3;
}



