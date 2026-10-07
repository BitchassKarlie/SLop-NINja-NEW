/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008575c FUN_0008575c */

float FUN_0008575c(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x24c);
  fVar2 = DAT_00085780;
  if (iVar1 != 0) {
    fVar2 = *(float *)(iVar1 + 0x68);
  }
  return fVar2 * *(float *)(param_1 + 0x70);
}



