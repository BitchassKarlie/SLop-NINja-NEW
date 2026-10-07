/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00066de8 FUN_00066de8 */

undefined4 FUN_00066de8(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(DAT_00066e44 + 0x66df4 + DAT_00066e48) + 0x10);
  if ((int)((uint)(fVar2 < 0.0) << 0x1f) < 0) {
    fVar2 = -fVar2;
  }
  if (fVar2 == DAT_00066e3c || fVar2 < DAT_00066e3c != (NAN(fVar2) || NAN(DAT_00066e3c))) {
    iVar1 = *(int *)(DAT_00066e44 + 0x66df4 + DAT_00066e48);
    if ((*(int *)(iVar1 + 0x168) == 0) || (iVar1 = *(int *)(iVar1 + 0x40), iVar1 == 0)) {
      param_1 = 0;
    }
    else {
      iVar1 = (uint)(*(float *)(iVar1 + 0x24) < DAT_00066e40) << 0x1f;
      if (-1 < iVar1) {
        param_1 = 0;
      }
      if (iVar1 < 0) {
        param_1 = 1;
      }
    }
  }
  else {
    param_1 = 1;
  }
  return param_1;
}



