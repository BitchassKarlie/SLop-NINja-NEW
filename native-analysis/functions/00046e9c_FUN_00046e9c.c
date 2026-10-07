/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00046e9c FUN_00046e9c */

void FUN_00046e9c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00046f8c;
  iVar4 = DAT_00046f88 + 0x46ea8;
  FUN_00017d64(param_1 + 0x68,0);
  FUN_000a3a68();
  FUN_00094a70();
  iVar3 = *(int *)(iVar4 + iVar1);
  if (*(int *)(iVar3 + 0x168) == param_1) {
    iVar2 = *(int *)(iVar3 + 0x50);
    *(undefined4 *)(iVar2 + 0x10c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x108) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x100) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x104) = 0xffffffff;
    *(undefined *)(*(int *)(iVar3 + 0x50) + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x168) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x8c) + 0x27) = 1;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x90) + 0x27) = 1;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar4 + iVar1) + 0x40));
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar4 + iVar1) + 0x40));
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar4 + iVar1) + 0x40));
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar4 + iVar1) + 0x40));
  }
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 4))();
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 4))();
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 4))();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  FUN_0007555c();
  FUN_00074914();
  return;
}



