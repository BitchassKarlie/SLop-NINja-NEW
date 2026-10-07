/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6418 FUN_000a6418 */

void FUN_000a6418(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((*(char *)(DAT_000a6434 + 0xa6428) != '\0') &&
     (piVar1 = *(int **)(DAT_000a6434 + 0xa642c), piVar1 != (int *)0x0)) {
    if (param_3 != 0) {
      param_3 = 1;
    }
    (**(code **)(*piVar1 + 0x48))(piVar1,param_3);
  }
  return;
}



