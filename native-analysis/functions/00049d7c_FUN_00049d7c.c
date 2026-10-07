/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049d7c FUN_00049d7c */

void FUN_00049d7c(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int iVar5;
  int ****local_28;
  undefined *local_24;
  undefined4 local_20;
  int *****local_1c;
  int *****local_18;
  undefined4 local_14;
  int *****pppppiVar4;
  
  pppppiVar4 = &local_28;
  if (param_3 == 0) {
    iVar5 = *(int *)(param_1 + 4);
    piVar1 = (int *)operator_new(0xc);
    local_20 = param_2;
    local_28 = (int ****)&local_28;
    local_24 = (undefined *)&local_28;
  }
  else {
    iVar5 = **(int **)(param_1 + 4);
    piVar1 = (int *)operator_new(0xc);
    pppppiVar4 = (int *****)&local_1c;
    local_14 = param_2;
    local_1c = pppppiVar4;
    local_18 = pppppiVar4;
  }
  ppppiVar2 = pppppiVar4[1];
  ppppiVar3 = pppppiVar4[2];
  *piVar1 = (int)*pppppiVar4;
  piVar1[1] = (int)ppppiVar2;
  piVar1[2] = (int)ppppiVar3;
  *piVar1 = iVar5;
  piVar1[1] = *(int *)(iVar5 + 4);
  *(int **)(iVar5 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



