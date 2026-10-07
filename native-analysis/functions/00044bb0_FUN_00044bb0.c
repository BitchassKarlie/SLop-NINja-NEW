/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00044bb0 FUN_00044bb0 */

int * FUN_00044bb0(int *param_1,undefined param_2)

{
  int iVar1;
  
  FUN_0003d2fc();
  *param_1 = DAT_00044c18 + 0x44bc8;
  FUN_00044984();
  *(undefined *)(param_1 + 0x2d) = param_2;
  FUN_00017d64(param_1 + 0x1a,0);
  param_1[0x2c] = DAT_00044c10;
  *(undefined *)((int)param_1 + 0x26) = 0;
  iVar1 = DAT_00044c14;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x22] = iVar1;
  param_1[0x2b] = 0;
  param_1[0x2f] = iVar1;
  param_1[0x23] = 0;
  param_1[10] = 0;
  param_1[0x2e] = 3;
  param_1[0x30] = 0;
  return param_1;
}



