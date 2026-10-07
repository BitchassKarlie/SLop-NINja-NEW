/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005c524 FUN_0005c524 */

void FUN_0005c524(int *param_1)

{
  int *piVar1;
  
  if (*(char *)((int)param_1 + 0xbe) != '\0') {
    *(undefined *)((int)param_1 + 0xbd) = 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  piVar1 = param_1 + 0x30;
  if (*(char *)(param_1 + 0x38) != '\0') {
    piVar1 = (int *)param_1[0x30];
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



