/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085600 FUN_00085600 */

float FUN_00085600(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x24c);
  fVar3 = DAT_000856b8;
  if (iVar1 != 0) {
    fVar3 = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x34) * *(float *)(iVar1 + 0x14) +
            *(float *)(iVar1 + 0x18) * *(float *)(param_1 + param_2 * 4 + 0x54);
  }
  if (param_2 == 0) {
    fVar2 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x78) * fVar3;
  }
  else {
    fVar2 = DAT_000856b8 * fVar3;
  }
  fVar4 = DAT_000856c0;
  if (0.0 < fVar2) {
    fVar2 = DAT_000856b8;
    if (param_2 == 0) {
      fVar2 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x78);
    }
    fVar4 = DAT_000856bc;
    if (fVar2 * fVar3 < DAT_000856bc != (NAN(fVar2 * fVar3) || NAN(DAT_000856bc))) {
      if (param_2 == 0) {
        fVar4 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x78) * fVar3;
      }
      else {
        fVar4 = DAT_000856b8 * fVar3;
      }
    }
  }
  return fVar4;
}



