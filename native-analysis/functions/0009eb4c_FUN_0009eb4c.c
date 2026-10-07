/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009eb4c FUN_0009eb4c */

void FUN_0009eb4c(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  char *local_14 [2];
  
  if (param_2 == (char *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(char **)(param_1 + 4) = param_2;
    local_14[0] = param_2;
    sVar1 = strlen(param_2);
    *(undefined4 *)(param_1 + 8) = 0;
    *(size_t *)(param_1 + 0xc) = sVar1;
    while (iVar2 = FUN_000b3374(local_14), iVar2 != 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return;
}



