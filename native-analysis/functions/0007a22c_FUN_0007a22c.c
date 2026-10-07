/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a22c FUN_0007a22c */

void FUN_0007a22c(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_0007a278;
  fVar3 = DAT_0007a274;
  fVar2 = param_2 - *(float *)(param_1 + 0xa0);
  *(float *)(param_1 + 0xa4) = param_2;
  fVar3 = fVar2 * fVar3;
  if (-1 < (int)((uint)(fVar3 < fVar1) << 0x1f)) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0xac) = fVar3;
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00081380(*(int *)(param_1 + 0xb8),fVar2,*(float *)(param_1 + 0xa0),param_2);
  }
  return;
}



