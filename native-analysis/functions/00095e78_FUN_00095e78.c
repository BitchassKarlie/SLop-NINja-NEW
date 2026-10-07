/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00095e78 FUN_00095e78 */

undefined4 FUN_00095e78(int param_1,int param_2,void *param_3)

{
  void *__src;
  
  FUN_000988dc(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_00098920(param_2);
  *(int *)(param_1 + 8) = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8);
  __src = (void *)FUN_0009878c(param_2);
  memcpy(param_3,__src,*(size_t *)(param_1 + 8));
  return *(undefined4 *)(param_1 + 8);
}



