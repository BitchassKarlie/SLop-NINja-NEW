/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00074914 FUN_00074914 */

void FUN_00074914(int param_1)

{
  int *piVar1;
  int local_18;
  int *local_14;
  
  piVar1 = *(int **)(param_1 + 0x14);
  local_14 = (int *)*piVar1;
  local_18 = param_1 + 0x10;
  while (piVar1 != local_14) {
    FUN_000748cc(&local_18,param_1 + 0x10,local_18,local_14);
  }
  return;
}



