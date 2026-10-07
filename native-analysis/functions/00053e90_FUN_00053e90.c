/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00053e90 FUN_00053e90 */

void FUN_00053e90(int param_1)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x78) < 0) && (*(char *)(param_1 + 0x10d) != '\0')) {
    FUN_00053488(param_1 + 0x7c);
  }
  else if (*(int *)(param_1 + 0x74) != 0) {
    FUN_000670e8(*(undefined4 *)(*(int *)(DAT_00053edc + 0x53e9e + DAT_00053ee0) + 0x16c),param_1);
  }
  piVar1 = (int *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    piVar1 = *(int **)(param_1 + 0xa0);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



