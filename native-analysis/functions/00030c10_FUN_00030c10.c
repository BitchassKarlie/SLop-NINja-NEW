/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030c10 FUN_00030c10 */

void FUN_00030c10(void **param_1)

{
  void *pvVar1;
  
  FUN_00030bcc();
  if ((*(short *)(param_1 + 4) != 0) && (pvVar1 = *param_1, pvVar1 != (void *)0x0)) {
    FUN_00093094(pvVar1);
    operator_delete(pvVar1);
    *param_1 = (void *)0x0;
  }
  return;
}



