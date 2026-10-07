/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5b98 FUN_000a5b98 */

void FUN_000a5b98(int param_1,void *param_2)

{
  int iVar1;
  void *__dest;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_000a5b7c();
  }
  iVar1 = FUN_0008ef3c(param_2);
  __dest = operator_new__(iVar1 + 1U);
  memcpy(__dest,param_2,iVar1 + 1U);
  *(void **)(param_1 + 4) = __dest;
  return;
}



