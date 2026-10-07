/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000993f8 FUN_000993f8 */

void FUN_000993f8(void *param_1)

{
  memset(param_1,0,0x40);
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
    operator_delete__(*(void **)((int)param_1 + 0x44));
  }
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  if (*(void **)((int)param_1 + 0x4c) != (void *)0x0) {
    operator_delete__(*(void **)((int)param_1 + 0x4c));
  }
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  return;
}



