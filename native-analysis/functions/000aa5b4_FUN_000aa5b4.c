/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aa5b4 FUN_000aa5b4 */

int * FUN_000aa5b4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = DAT_000aa610;
  *(undefined *)(param_1 + 4) = 0;
  *param_1 = iVar1 + 0xaa5e8;
  iVar1 = *(int *)(DAT_000aa614 + 0xaa5f4);
  iVar2 = *(int *)(DAT_000aa614 + 0xaa5f8);
  param_1[1] = *(int *)(DAT_000aa614 + 0xaa5f0);
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  iVar1 = *(int *)(DAT_000aa618 + 0xaa602);
  iVar2 = *(int *)(DAT_000aa618 + 0xaa606);
  param_1[5] = *(int *)(DAT_000aa618 + 0xaa5fe);
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  *(undefined *)(param_1 + 4) = 0;
  FUN_000aa460(param_1);
  return param_1;
}



