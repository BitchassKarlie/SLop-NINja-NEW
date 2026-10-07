/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006ad04 FUN_0006ad04 */

int FUN_0006ad04(int param_1)

{
  void *pvVar1;
  
  FUN_0006acb8(param_1 + 0x150);
  pvVar1 = *(void **)(param_1 + 0x154);
  if (*(void **)((int)pvVar1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)((int)pvVar1 + 0xc));
    *(undefined4 *)((int)pvVar1 + 0x10) = 0;
    *(undefined4 *)((int)pvVar1 + 0x14) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
  }
  operator_delete(pvVar1);
  FUN_00017d90(param_1 + 0xf0);
  return param_1;
}



