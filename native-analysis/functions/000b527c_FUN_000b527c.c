/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b527c FUN_000b527c */

void * FUN_000b527c(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *__src;
  
  iVar1 = FUN_000a9330(param_2,param_3);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 3) {
      __src = (void *)FUN_000b4b9c(*(int *)(iVar1 + 0xc) + 0x18,*(undefined4 *)(iVar1 + 0x10));
      memmove(param_1,__src,0x40);
    }
  }
  return param_1;
}



