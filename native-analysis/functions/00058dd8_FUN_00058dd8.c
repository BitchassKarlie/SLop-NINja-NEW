/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00058dd8 FUN_00058dd8 */

byte FUN_00058dd8(void)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(*(int *)(DAT_00058e20 + 0x58de4 + DAT_00058e24) + 0x10);
  if ((int)((uint)(fVar3 < 0.0) << 0x1f) < 0) {
    fVar3 = -fVar3;
  }
  if ((-1 < (int)((uint)(fVar3 < DAT_00058e1c) << 0x1f)) ||
     (iVar2 = *(int *)(DAT_00058e20 + 0x58de4 + DAT_00058e24), 0.0 < *(float *)(iVar2 + 0x14))) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 8) ^ 1;
  }
  return bVar1;
}



