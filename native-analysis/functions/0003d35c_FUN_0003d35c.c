/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003d35c FUN_0003d35c */

int * FUN_0003d35c(int *param_1)

{
  int iVar1;
  
  FUN_0003d2fc();
  *param_1 = DAT_0003d3b4 + 0x3d372;
  if (*(char *)(DAT_0003d3b8 + 0x3d392) == '\0') {
    FUN_0003cbe0();
  }
  FUN_00017d64(param_1 + 0x1a,0);
  iVar1 = DAT_0003d3b0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  param_1[0x22] = iVar1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[10] = 3;
  param_1[0x27] = 0;
  return param_1;
}



