/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000608e0 FUN_000608e0 */

void FUN_000608e0(int param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (param_2 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    sVar1 = strlen(param_2);
    __dest = (char *)operator_new__(sVar1 + 1);
    *(char **)(param_1 + 0x54) = __dest;
    strcpy(__dest,param_2);
  }
  return;
}



