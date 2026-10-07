/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc1c0 FUN_000bc1c0 */

undefined4 FUN_000bc1c0(void *param_1)

{
  FUN_000bc174();
  if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x44));
  }
  memset(param_1,0,0x58);
  return 0;
}



