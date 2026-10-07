/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5160 FUN_000b5160 */

int * FUN_000b5160(int *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = DAT_000b5188 + 0xb5172;
  if (pvVar1 != (void *)0x0) {
    FUN_000b5138(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_000a0990(param_1 + 4);
  return param_1;
}



