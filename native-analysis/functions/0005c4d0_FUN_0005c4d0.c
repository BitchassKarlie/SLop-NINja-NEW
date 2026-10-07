/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005c4d0 FUN_0005c4d0 */

void FUN_0005c4d0(int param_1,undefined4 param_2,int **param_3,undefined param_4,undefined param_5)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_2;
  if (*(char *)(param_3 + 8) != '\0') {
    param_3 = (int **)*param_3;
  }
  if (param_3 != (int **)0x0) {
    (**(code **)((int)*param_3 + 8))(param_3,param_1 + 0xc0);
  }
  *(undefined *)(param_1 + 0xbe) = param_5;
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined *)(param_1 + 0xbd) = param_4;
  return;
}



