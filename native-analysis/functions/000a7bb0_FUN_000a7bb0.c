/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a7bb0 FUN_000a7bb0 */

uint FUN_000a7bb0(int param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *__s1;
  
  __s1 = *(void **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  sVar1 = strlen(param_2);
  uVar4 = iVar3 - (int)__s1;
  uVar2 = sVar1;
  if (uVar4 <= sVar1) {
    uVar2 = uVar4;
  }
  uVar2 = memcmp(__s1,param_2,uVar2);
  if (uVar2 == 0) {
    if (uVar4 < sVar1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uint)(uVar4 != sVar1);
    }
  }
  return uVar2;
}



