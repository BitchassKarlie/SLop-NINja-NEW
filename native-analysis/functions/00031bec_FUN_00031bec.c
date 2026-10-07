/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031bec FUN_00031bec */

void FUN_00031bec(float param_1)

{
  int iVar1;
  float fVar2;
  
  if (param_1 == DAT_00031c4c || param_1 < DAT_00031c4c != (NAN(param_1) || NAN(DAT_00031c4c))) {
    fVar2 = *(float *)(*(int *)(DAT_00031c54 + 0x31c00 + DAT_00031c58) + 0x14);
  }
  else {
    iVar1 = *(int *)(DAT_00031c54 + 0x31c00 + DAT_00031c58);
    fVar2 = *(float *)(iVar1 + 0x14);
    if (fVar2 <= DAT_00031c4c) {
      FUN_00031a38(0);
      fVar2 = *(float *)(iVar1 + 0x14);
    }
  }
  if ((fVar2 != 0.0 && fVar2 < 0.0 == NAN(fVar2)) &&
     ((int)((uint)(fVar2 < DAT_00031c50) << 0x1f) < 0)) {
    FUN_000316b0();
  }
  return;
}



