/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6800 FUN_000b6800 */

int * FUN_000b6800(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000b6830 + 0xb6810;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = iVar1;
  FUN_0009edc4(param_1 + 3);
  iVar1 = DAT_000b6834;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = iVar1 + 0xb682a;
  param_1[3] = (int)(&UNK_000b6856 + iVar1);
  return param_1;
}



