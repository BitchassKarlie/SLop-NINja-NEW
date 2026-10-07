/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9610 FUN_000a9610 */

void FUN_000a9610(int param_1,int param_2,int param_3)

{
  void *__dest;
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x34);
  *(int *)(param_2 + 0x34) = iVar1;
  if (iVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(param_1 + 3U & 0xfffffffc);
  }
  *(void **)(param_2 + 0x30) = __dest;
  memcpy(__dest,*(void **)(param_3 + 0x30),iVar1 * 0x10);
  FUN_000a958c((void *)((int)__dest + iVar1 * 0x10),param_2,param_3);
  return;
}



