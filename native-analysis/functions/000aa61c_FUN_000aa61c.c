/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aa61c FUN_000aa61c */

int * FUN_000aa61c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = DAT_000aa678;
  *(undefined *)(param_1 + 4) = 0;
  *param_1 = iVar1 + 0xaa650;
  iVar1 = *(int *)(DAT_000aa67c + 0xaa65c);
  iVar2 = *(int *)(DAT_000aa67c + 0xaa660);
  param_1[1] = *(int *)(DAT_000aa67c + 0xaa658);
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  iVar1 = *(int *)(DAT_000aa680 + 0xaa66a);
  iVar2 = *(int *)(DAT_000aa680 + 0xaa66e);
  param_1[5] = *(int *)(DAT_000aa680 + 0xaa666);
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  *(undefined *)(param_1 + 4) = 0;
  FUN_000aa460(param_1);
  return param_1;
}



