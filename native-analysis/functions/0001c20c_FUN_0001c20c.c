/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c20c FUN_0001c20c */

void FUN_0001c20c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined local_1c [12];
  
  iVar2 = *(int *)(param_1 + 0x1018);
  piVar1 = (int *)operator_new(0xc);
  *piVar1 = (int)local_1c;
  piVar1[1] = (int)local_1c;
  piVar1[2] = param_2;
  *piVar1 = iVar2;
  piVar1[1] = *(int *)(iVar2 + 4);
  *(int **)(iVar2 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  *(int *)(param_1 + 0x101c) = *(int *)(param_1 + 0x101c) + 1;
  return;
}



