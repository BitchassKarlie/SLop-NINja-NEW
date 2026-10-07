/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093dd4 FUN_00093dd4 */

void FUN_00093dd4(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int local_14;
  
  local_14 = 0;
  FUN_0001f2f8(&local_14,*param_2);
  for (piVar1 = *(int **)(param_1 + 4); (piVar1 != (int *)0x0 && (local_14 != *piVar1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_0001ed98(&local_14);
  if (piVar1 != (int *)0x0) {
    FUN_00093d64(param_1,piVar1);
  }
  return;
}



