/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001af1c FUN_0001af1c */

int * FUN_0001af1c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_0008db68();
  iVar1 = DAT_0001af68;
  *param_1 = DAT_0001af6c + 0x1af3a;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x136) = 0;
  iVar3 = DAT_0001af70;
  piVar4 = (int *)(DAT_0001af70 + 0x1af4c);
  iVar2 = *(int *)(DAT_0001af70 + 0x1af50);
  param_1[0x51] = *piVar4;
  param_1[0x52] = iVar2;
  iVar3 = *(int *)(iVar3 + 0x1af50);
  param_1[0x4e] = *piVar4;
  param_1[0x4f] = iVar3;
  param_1[0x59] = iVar1;
  return param_1;
}



