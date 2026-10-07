/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a36ac FUN_000a36ac */

int * FUN_000a36ac(int *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = DAT_000a3708 + 0xa36bc;
  *(undefined *)(param_1 + 9) = 1;
  param_1[1] = 0;
  if (*(char *)(param_2 + 0x24) == '\0') {
    piVar1 = (int *)(param_2 + 4);
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1 + 1);
  }
  *(undefined *)(param_1 + 0x12) = 1;
  param_1[10] = 0;
  piVar1 = (int *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x48) != '\0') {
    piVar1 = *(int **)(param_2 + 0x28);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1 + 10);
  }
  *(undefined *)(param_1 + 0x13) = *(undefined *)(param_2 + 0x4c);
  return param_1;
}



