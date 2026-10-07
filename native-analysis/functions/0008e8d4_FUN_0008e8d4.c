/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e8d4 FUN_0008e8d4 */

void FUN_0008e8d4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined local_1c [12];
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    piVar1 = (int *)operator_new(0xc);
    *piVar1 = (int)local_1c;
    piVar1[1] = (int)local_1c;
    piVar1[2] = param_2;
    *piVar1 = iVar2;
    piVar1[1] = *(int *)(iVar2 + 4);
    *(int **)(iVar2 + 4) = piVar1;
    *(int **)piVar1[1] = piVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



