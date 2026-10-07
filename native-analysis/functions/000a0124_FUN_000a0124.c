/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0124 FUN_000a0124 */

int FUN_000a0124(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_20;
  int *local_1c;
  
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar2;
  local_1c = piVar1;
  local_20 = param_1;
  if (piVar2 != piVar1) {
    do {
      FUN_000a00dc(&local_20,param_1,local_20,local_1c);
    } while (piVar2 != local_1c);
    piVar1 = *(int **)(param_1 + 4);
  }
  FUN_0009fd54((int)piVar1 + 8);
  operator_delete(piVar1);
  return param_1;
}



