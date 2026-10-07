/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003c764 FUN_0003c764 */

undefined4 * FUN_0003c764(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  FUN_00017d64(param_1 + 2,param_2[2]);
  param_1[3] = 0;
  piVar1 = param_2 + 3;
  *(undefined *)(param_1 + 0xb) = 1;
  if (*(char *)(param_2 + 0xb) != '\0') {
    piVar1 = (int *)param_2[3];
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1 + 3);
  }
  *(undefined *)(param_1 + 0x14) = 1;
  param_1[0xc] = 0;
  piVar1 = param_2 + 0xc;
  if (*(char *)(param_2 + 0x14) != '\0') {
    piVar1 = (int *)param_2[0xc];
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1 + 0xc);
  }
  *(undefined *)(param_1 + 0x1d) = 1;
  param_1[0x15] = 0;
  piVar1 = param_2 + 0x15;
  if (*(char *)(param_2 + 0x1d) != '\0') {
    piVar1 = (int *)param_2[0x15];
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1 + 0x15);
  }
  *(undefined *)(param_1 + 0x26) = 1;
  param_1[0x1e] = 0;
  piVar1 = param_2 + 0x1e;
  if (*(char *)(param_2 + 0x26) != '\0') {
    piVar1 = (int *)param_2[0x1e];
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1 + 0x1e);
  }
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  *(undefined *)(param_1 + 0x31) = *(undefined *)(param_2 + 0x31);
  return param_1;
}



