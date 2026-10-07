/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00095988 FUN_00095988 */

int * FUN_00095988(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_34;
  undefined auStack_30 [4];
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  undefined auStack_18 [4];
  int local_14;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 == (int *)0x0) {
    local_34 = *param_2;
  }
  else {
    local_34 = *param_2;
    piVar1 = (int *)0x0;
    do {
      if (*piVar3 < local_34) {
        piVar2 = (int *)piVar3[7];
      }
      else {
        piVar2 = (int *)piVar3[6];
        piVar1 = piVar3;
      }
      piVar3 = piVar2;
    } while (piVar2 != (int *)0x0);
    piVar3 = piVar1;
    if ((piVar1 != (int *)0x0) && (*piVar1 <= local_34)) {
      return piVar1 + 1;
    }
  }
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  FUN_00017cb8(auStack_30);
  local_20 = param_1;
  local_1c = piVar3;
  FUN_000957e4(auStack_18,param_1,param_1,piVar3,&local_34);
  if (local_2c != (void *)0x0) {
    operator_delete(local_2c);
  }
  return (int *)(local_14 + 4);
}



