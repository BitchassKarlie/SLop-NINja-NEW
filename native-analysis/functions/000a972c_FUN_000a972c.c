/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a972c FUN_000a972c */

void FUN_000a972c(int param_1,int param_2,int param_3)

{
  void *__dest;
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0xc);
  *(int *)(param_2 + 0xc) = iVar1;
  if (iVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(param_1 + 3U & 0xfffffffc);
  }
  *(void **)(param_2 + 8) = __dest;
  memcpy(__dest,*(void **)(param_3 + 8),iVar1 * 4);
  FUN_000a96f4((void *)((int)__dest + iVar1 * 4),param_2,param_3);
  return;
}



