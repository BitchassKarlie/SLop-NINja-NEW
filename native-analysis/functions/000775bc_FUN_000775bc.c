/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000775bc FUN_000775bc */

int FUN_000775bc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int local_20;
  int *local_1c;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar3;
  local_1c = piVar2;
  local_20 = param_1;
  if (piVar3 != piVar2) {
    do {
      FUN_000772d8(&local_20,param_1,local_20,local_1c);
    } while (piVar3 != local_1c);
    piVar2 = *(int **)(param_1 + 4);
  }
  uVar1 = FUN_000a3a68();
  FUN_000a371c(uVar1,*(undefined4 *)((int)piVar2 + 0x54));
  operator_delete(piVar2);
  return param_1;
}



