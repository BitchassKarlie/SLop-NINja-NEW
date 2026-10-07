/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079b74 FUN_00079b74 */

void FUN_00079b74(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined local_1c [12];
  
  *(int *)(param_2 + 0x1c) = param_1;
  iVar2 = *(int *)(param_1 + 8);
  piVar1 = (int *)operator_new(0xc);
  *piVar1 = (int)local_1c;
  piVar1[1] = (int)local_1c;
  piVar1[2] = param_2;
  *piVar1 = iVar2;
  piVar1[1] = *(int *)(iVar2 + 4);
  *(int **)(iVar2 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



