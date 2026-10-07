/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077324 FUN_00077324 */

void FUN_00077324(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_18;
  int *local_14;
  
  iVar1 = *(int *)(param_1 + (param_3 + param_2 * 4) * 4);
  piVar2 = *(int **)(iVar1 + 4);
  local_14 = (int *)*piVar2;
  local_18 = iVar1;
  while (piVar2 != local_14) {
    FUN_000772d8(&local_18,iVar1,local_18,local_14);
  }
  return;
}



