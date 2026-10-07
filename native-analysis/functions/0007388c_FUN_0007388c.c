/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007388c FUN_0007388c */

int FUN_0007388c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(param_1 + iVar2 + 4) = 0;
    }
    iVar2 = iVar2 + 0x34;
  } while (iVar2 != 0x680);
  if (param_1 != -4) {
    iVar2 = param_1 + 0x684;
    do {
      iVar3 = iVar2 + -0x34;
      FUN_0001d388(iVar2 + -0x24);
      iVar2 = iVar3;
    } while (iVar3 != param_1 + 4);
  }
  return param_1;
}



