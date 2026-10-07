/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004debc FUN_0004debc */

int * FUN_0004debc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0004a8dc();
  iVar2 = DAT_0004df1c;
  iVar1 = DAT_0004df18;
  param_1[0x26] = DAT_0004df18;
  param_1[0x27] = iVar1;
  *param_1 = iVar2 + 0x4dedc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined *)(param_1 + 0x28) = 0;
  *(undefined *)((int)param_1 + 0xa1) = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  iVar1 = DAT_0004df20;
  param_1[10] = 3;
  if (FUN_0004df24[iVar1 + 4] == (code)0x0) {
    FUN_0004de00();
  }
  return param_1;
}



