/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049d14 FUN_00049d14 */

void FUN_00049d14(int param_1,int param_2)

{
  int *piVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 0x2c);
    if (*(char *)(param_2 + 0x4c) != '\0') {
      piVar1 = *(int **)(param_2 + 0x2c);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
    }
    ppvVar4 = *(void ***)(param_1 + 4);
    ppvVar2 = (void **)*ppvVar4;
    while (ppvVar4 != ppvVar2) {
      if (ppvVar2[2] == (void *)param_2) {
        if (ppvVar2 != (void **)*(void **)(param_1 + 4)) {
          ppvVar3 = (void **)*ppvVar2;
          *(void ***)ppvVar2[1] = ppvVar3;
          *(void **)((int)*ppvVar2 + 4) = ppvVar2[1];
          operator_delete(ppvVar2);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          ppvVar2 = ppvVar3;
        }
      }
      else {
        ppvVar2 = (void **)*ppvVar2;
      }
    }
  }
  return;
}



