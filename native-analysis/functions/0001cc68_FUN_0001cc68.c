/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001cc68 FUN_0001cc68 */

void FUN_0001cc68(int param_1,int **param_2,undefined4 param_3)

{
  *(undefined *)(param_1 + 0x88) = 1;
  if (*(char *)(param_2 + 8) != '\0') {
    param_2 = (int **)*param_2;
  }
  if (param_2 != (int **)0x0) {
    (**(code **)((int)*param_2 + 8))(param_2,param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x84) = param_3;
  *(undefined2 *)(param_1 + 0x70) = 2;
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0x2d;
  return;
}



