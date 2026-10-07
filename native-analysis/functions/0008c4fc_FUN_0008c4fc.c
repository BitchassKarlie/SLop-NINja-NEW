/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008c4fc FUN_0008c4fc */

int * FUN_0008c4fc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0008c548;
  *param_1 = DAT_0008c550 + 0x8c510;
  iVar2 = *(int *)(DAT_0008c554 + 0x8c51e);
  iVar3 = *(int *)(DAT_0008c554 + 0x8c522);
  param_1[1] = *(int *)(DAT_0008c554 + 0x8c51a);
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  iVar2 = DAT_0008c54c;
  param_1[5] = iVar1;
  param_1[6] = iVar2;
  param_1[7] = iVar2;
  *(undefined *)(param_1 + 4) = 0;
  return param_1;
}



