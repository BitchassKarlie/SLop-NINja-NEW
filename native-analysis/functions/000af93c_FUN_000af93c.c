/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af93c FUN_000af93c */

int * FUN_000af93c(int *param_1,int *param_2)

{
  int iVar1;
  int local_14;
  
  iVar1 = DAT_000af9bc;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = iVar1 + 0xaf94e;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*param_2 == 0) {
    FUN_000af8b4(param_1 + 0xc);
  }
  else {
    param_1[0xc] = 0;
    FUN_000af888(param_1 + 0xc,*param_2);
  }
  if (*param_2 == 0) {
    FUN_000af8b4(&local_14);
    param_1[0xe] = 0;
    param_1[0xd] = local_14 + 0xc;
    FUN_00093b40(&local_14);
  }
  else {
    param_1[0xd] = *param_2 + 0xc;
    param_1[0xe] = 0;
  }
  param_1[0x10] = DAT_000af9b4;
  param_1[0x11] = DAT_000af9b8;
  return param_1;
}



