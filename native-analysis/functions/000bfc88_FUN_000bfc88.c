/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bfc88 FUN_000bfc88 */

void FUN_000bfc88(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1[4] + *param_1;
  iVar5 = param_1[4] - *param_1;
  iVar3 = param_1[1] + param_1[5];
  iVar7 = param_1[5] - param_1[1];
  iVar4 = param_1[2] + param_1[6];
  iVar8 = param_1[6] - param_1[2];
  iVar2 = param_1[3] + param_1[7];
  iVar6 = param_1[7] - param_1[3];
  *param_1 = iVar8 + iVar7;
  param_1[2] = iVar8 - iVar7;
  param_1[1] = iVar6 - iVar5;
  param_1[3] = iVar6 + iVar5;
  param_1[4] = iVar4 - iVar1;
  param_1[6] = iVar4 + iVar1;
  param_1[5] = iVar2 - iVar3;
  param_1[7] = iVar2 + iVar3;
  return;
}



