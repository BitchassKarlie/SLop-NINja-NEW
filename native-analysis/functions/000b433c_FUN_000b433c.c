/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b433c FUN_000b433c */

int FUN_000b433c(int *param_1,int *param_2)

{
  uint uVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  
  if (*param_2 == *param_1) {
    iVar2 = 1;
  }
  else {
    iVar3 = *param_1;
    iVar2 = *param_2;
    __n = *(int *)(iVar3 + 0x18) - (int)*(void **)(iVar3 + 0x10);
    if ((__n == *(int *)(iVar2 + 0x18) - (int)*(void **)(iVar2 + 0x10)) && (iVar3 != iVar2)) {
      uVar1 = memcmp(*(void **)(iVar3 + 0x10),*(void **)(iVar2 + 0x10),__n);
      iVar2 = 1 - uVar1;
      if (1 < uVar1) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



