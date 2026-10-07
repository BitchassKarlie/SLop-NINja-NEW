/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008570c FUN_0008570c */

int FUN_0008570c(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x24c);
  fVar2 = DAT_00085750;
  if (iVar1 != 0) {
    fVar2 = *(float *)(iVar1 + 0x68);
  }
  iVar1 = (uint)((float)(longlong)(**(int **)(DAT_00085754 + 0x8571a + DAT_00085758) / 2) <
                fVar2 * *(float *)(param_1 + 0x70)) << 0x1f;
  if (-1 < iVar1) {
    param_1 = 0;
  }
  if (iVar1 < 0) {
    param_1 = 1;
  }
  return param_1;
}



