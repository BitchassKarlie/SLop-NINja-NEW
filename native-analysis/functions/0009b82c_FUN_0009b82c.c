/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b82c FUN_0009b82c */

void FUN_0009b82c(int param_1,int param_2)

{
  size_t sVar1;
  char *__s;
  
  __s = (char *)(*(int *)(param_1 + 0x20) + 8);
  sVar1 = strlen(__s);
  FUN_00099d70(param_2 + 0x20,__s,sVar1);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}



