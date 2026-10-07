/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000889fc FUN_000889fc */

bool FUN_000889fc(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined auStack_20 [8];
  int local_18;
  int *local_14;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (piVar1 != piVar2) {
    FUN_0008599c(param_2,piVar2 + 2);
    local_18 = param_1;
    local_14 = piVar2;
    FUN_000887fc(auStack_20,param_1,param_1,piVar2);
  }
  return piVar1 != piVar2;
}



