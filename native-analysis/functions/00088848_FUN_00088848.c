/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088848 FUN_00088848 */

int FUN_00088848(int param_1)

{
  void *pvVar1;
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
      FUN_000887fc(&local_20,param_1,local_20,local_1c);
    } while (piVar3 != local_1c);
    piVar2 = *(int **)(param_1 + 4);
  }
  pvVar1 = *(void **)((int)piVar2 + 0xc);
  *(void **)((int)piVar2 + 0x10) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  operator_delete(piVar2);
  return param_1;
}



