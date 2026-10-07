/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094a0c FUN_00094a0c */

undefined4 FUN_00094a0c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (*(char *)(param_1 + 0x94) == '\0') {
      piVar1 = (int *)(param_1 + 0x74);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x74);
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0xc))();
      return uVar2;
    }
  }
  else {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      piVar1 = (int *)(param_1 + 0x98);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x98);
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0xc))();
      return uVar2;
    }
  }
  return 0;
}



