/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005efbc FUN_0005efbc */

int * FUN_0005efbc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0004a8dc();
  iVar2 = DAT_0005f008;
  param_1[0x21] = -1;
  iVar1 = DAT_0005f00c;
  param_1[0x22] = DAT_0005f000;
  *param_1 = iVar2 + 0x5efe0;
  param_1[0x23] = DAT_0005f004;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  iVar2 = *(int *)(iVar1 + 0x5efe4);
  iVar3 = *(int *)(iVar1 + 0x5efe8);
  param_1[0x1c] = *(int *)(iVar1 + 0x5efe0);
  param_1[0x1d] = iVar2;
  param_1[0x1e] = iVar3;
  return param_1;
}



