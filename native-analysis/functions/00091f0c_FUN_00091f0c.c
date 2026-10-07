/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00091f0c FUN_00091f0c */

void FUN_00091f0c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined local_1c [12];
  
  piVar1 = (int *)operator_new(0x58);
  FUN_000ae0a4();
  (**(code **)(*piVar1 + 8))(piVar1);
  iVar3 = *(int *)(param_1 + 8);
  piVar2 = (int *)operator_new(0xc);
  *piVar2 = (int)local_1c;
  piVar2[1] = (int)local_1c;
  piVar2[2] = (int)piVar1;
  *piVar2 = iVar3;
  piVar2[1] = *(int *)(iVar3 + 4);
  *(int **)(iVar3 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



