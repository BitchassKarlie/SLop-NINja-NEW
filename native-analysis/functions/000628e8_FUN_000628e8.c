/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000628e8 FUN_000628e8 */

int * FUN_000628e8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0005fb88();
  iVar2 = DAT_00062940;
  iVar1 = DAT_0006293c;
  param_1[0x9d] = 0;
  param_1[0x99] = iVar1;
  *param_1 = iVar2 + 0x6290c;
  param_1[0x9e] = 0;
  FUN_00017d64(param_1 + 0x9d,0);
  *(undefined *)((int)param_1 + 0x27d) = 0;
  param_1[0xa0] = iVar1;
  *(undefined *)(param_1 + 0x9f) = 1;
  param_1[0x97] = iVar1;
  *(undefined *)((int)param_1 + 0x27e) = 0;
  param_1[0x98] = iVar1;
  return param_1;
}



