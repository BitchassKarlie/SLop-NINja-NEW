/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abca4 FUN_000abca4 */

void FUN_000abca4(int *param_1,void *param_2,size_t param_3)

{
  if (param_3 != 0) {
    memcpy(param_2,(void *)(param_1[0xc] + *param_1),param_3);
    *param_1 = *param_1 + param_3;
  }
  return;
}



