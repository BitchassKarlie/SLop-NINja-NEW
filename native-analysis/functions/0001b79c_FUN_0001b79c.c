/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001b79c FUN_0001b79c */

void FUN_0001b79c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    FUN_000a751c(iVar1 + 4);
  }
  piVar2 = (int *)FUN_000a75e0(DAT_0001b7c8 + 0x1b7b6,param_1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
    FUN_00017d24();
  }
  return;
}



