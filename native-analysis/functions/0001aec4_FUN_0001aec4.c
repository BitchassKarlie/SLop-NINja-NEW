/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001aec4 FUN_0001aec4 */

int * FUN_0001aec4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_0008db68();
  iVar1 = DAT_0001af10;
  *param_1 = DAT_0001af14 + 0x1aee2;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x136) = 0;
  iVar3 = DAT_0001af18;
  piVar4 = (int *)(DAT_0001af18 + 0x1aef4);
  iVar2 = *(int *)(DAT_0001af18 + 0x1aef8);
  param_1[0x51] = *piVar4;
  param_1[0x52] = iVar2;
  iVar3 = *(int *)(iVar3 + 0x1aef8);
  param_1[0x4e] = *piVar4;
  param_1[0x4f] = iVar3;
  param_1[0x59] = iVar1;
  return param_1;
}



