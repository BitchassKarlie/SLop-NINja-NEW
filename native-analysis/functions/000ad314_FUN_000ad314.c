/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad314 FUN_000ad314 */

undefined *
FUN_000ad314(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int **param_7,undefined4 param_8,
            undefined4 param_9)

{
  param_1[0x40] = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 4) = param_8;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  if (*(char *)(param_7 + 8) != '\0') {
    param_7 = (int **)*param_7;
  }
  if (param_7 != (int **)0x0) {
    (**(code **)((int)*param_7 + 8))(param_7,param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 8) = param_9;
  return param_1;
}



