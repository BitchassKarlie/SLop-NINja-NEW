/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f3a0 FUN_0009f3a0 */

void FUN_0009f3a0(void **param_1)

{
  void *pvVar1;
  
  pvVar1 = *param_1;
  if (*(FILE **)((int)pvVar1 + 8) != (FILE *)0x0) {
    fclose(*(FILE **)((int)pvVar1 + 8));
    *(undefined4 *)((int)*param_1 + 8) = 0;
    pvVar1 = *param_1;
  }
  operator_delete(pvVar1);
  *param_1 = (void *)0x0;
  return;
}



