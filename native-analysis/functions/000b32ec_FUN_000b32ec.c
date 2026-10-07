/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b32ec FUN_000b32ec */

void FUN_000b32ec(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined local_1c [12];
  
  iVar1 = FUN_000b3248();
  iVar3 = *(int *)(iVar1 + 4);
  piVar2 = (int *)operator_new(0xc);
  *piVar2 = (int)local_1c;
  piVar2[1] = (int)local_1c;
  piVar2[2] = param_1;
  *piVar2 = iVar3;
  piVar2[1] = *(int *)(iVar3 + 4);
  *(int **)(iVar3 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  return;
}



