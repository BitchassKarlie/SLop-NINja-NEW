/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae0a4 FUN_000ae0a4 */

int * FUN_000ae0a4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_000ad60c();
  iVar1 = 0;
  *param_1 = DAT_000ae0e4 + 0xae0be;
  iVar2 = 0;
  do {
    *(undefined4 *)((int)param_1 + iVar1 + 0x20) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x1c);
  do {
    *(undefined4 *)((int)param_1 + iVar2 + 0x3c) = 0;
    iVar1 = DAT_000ae0e8;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x1c);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int **)(iVar1 + 0xae0e0) = param_1;
  return param_1;
}



