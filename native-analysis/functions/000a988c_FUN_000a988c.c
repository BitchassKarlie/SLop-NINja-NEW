/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a988c FUN_000a988c */

uint FUN_000a988c(int *param_1,int *param_2)

{
  void *__s1;
  uint uVar1;
  void *__s2;
  uint uVar2;
  uint uVar3;
  
  __s1 = *(void **)(*param_1 + 0x10);
  __s2 = *(void **)(*param_2 + 0x10);
  uVar3 = *(int *)(*param_1 + 0x18) - (int)__s1;
  uVar2 = *(int *)(*param_2 + 0x18) - (int)__s2;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  uVar1 = memcmp(__s1,__s2,uVar1);
  if (uVar1 == 0) {
    uVar1 = (uint)(uVar3 < uVar2);
  }
  else {
    uVar1 = uVar1 >> 0x1f;
  }
  return uVar1;
}



