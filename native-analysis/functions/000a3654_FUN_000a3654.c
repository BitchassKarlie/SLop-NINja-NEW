/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3654 FUN_000a3654 */

undefined4 FUN_000a3654(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x28;
  if (*(char *)(param_1 + 0x48) != '\0') {
    iVar3 = *(int *)(param_1 + 0x28);
  }
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      piVar1 = (int *)(param_1 + 4);
    }
    else {
      piVar1 = *(int **)(param_1 + 4);
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0xc))();
      return uVar2;
    }
  }
  else {
    if (*(char *)(param_1 + 0x48) == '\0') {
      piVar1 = (int *)(param_1 + 0x28);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x28);
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0xc))();
      return uVar2;
    }
  }
  return 0;
}



