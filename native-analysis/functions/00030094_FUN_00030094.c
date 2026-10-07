/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030094 FUN_00030094 */

undefined4 FUN_00030094(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(DAT_000300d0 + 0x300a0 + DAT_000300d4) + 0x14);
  if ((int)((uint)(fVar2 < DAT_000300c8) << 0x1f) < 0) {
    iVar1 = (uint)(fVar2 < DAT_000300cc) << 0x1f;
    if (-1 < iVar1) {
      param_1 = 0;
    }
    if (iVar1 < 0) {
      param_1 = 1;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



