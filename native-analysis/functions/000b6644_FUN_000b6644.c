/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6644 FUN_000b6644 */

void FUN_000b6644(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  if (*(int *)(param_3 + 0xc) == *(int *)(param_3 + 4)) {
    if (*param_2 != *(int *)(param_1 + 0x20)) {
      FUN_000b4d6c(param_1 + 0x20,*param_2);
      FUN_000b4ee8(param_1);
    }
  }
  else {
    piVar1 = (int *)FUN_000b65cc(param_1 + 0x24,param_3);
    if (*param_2 != *piVar1) {
      FUN_000b4d6c(piVar1,*param_2);
      FUN_000b4ee8(param_1);
    }
  }
  return;
}



