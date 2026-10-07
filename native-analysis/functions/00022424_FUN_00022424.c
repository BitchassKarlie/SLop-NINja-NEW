/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022424 FUN_00022424 */

void ** FUN_00022424(void **param_1)

{
  if ((*(char *)((int)param_1 + 0x65) == '\0') && (*param_1 != (void *)0x0)) {
    operator_delete__(*param_1);
    *param_1 = (void *)0x0;
  }
  FUN_000223ec(param_1 + 1);
  return param_1;
}



