/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008a15c FUN_0008a15c */

void FUN_0008a15c(int param_1,int param_2,float param_3,int param_4)

{
  *(int *)(param_1 + (param_4 + 0x94) * 4) = param_2 + -1;
  FUN_00089ba0(param_1,0);
  param_1 = param_1 + (param_4 + 0x94) * 4;
  param_3 = param_3 + *(float *)(param_1 + 4);
  if ((int)((uint)(param_3 < DAT_0008a1a0) << 0x1f) < 0) {
    param_3 = DAT_0008a1a0;
  }
  *(float *)(param_1 + 4) = param_3;
  return;
}



