/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008ff10 FUN_0008ff10 */

void ** FUN_0008ff10(void **param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = (**(code **)(*param_1[1] + 0x28))();
  if (iVar1 != 0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_1[1] + 0x24))();
  }
  if (*param_1 != (void *)0x0) {
    operator_delete__(*param_1);
    *param_1 = (void *)0x0;
  }
  FUN_000221ac(param_1 + 1);
  return param_1;
}



