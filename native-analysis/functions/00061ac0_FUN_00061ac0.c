/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00061ac0 FUN_00061ac0 */

int * FUN_00061ac0(int *param_1)

{
  *param_1 = DAT_00061afc + 0x61ad0;
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  FUN_00017d64(param_1 + 0x9d,0);
  *(undefined *)(param_1 + 0x9f) = 0;
  FUN_00017d90(param_1 + 0x9d);
  FUN_0003e424(param_1);
  return param_1;
}



