/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1528 FUN_000a1528 */

void FUN_000a1528(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 8))(param_2);
    FUN_000a751c(iVar1 + 4);
  }
  piVar2 = (int *)FUN_000a75e0(param_1,param_2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
    FUN_00017d24();
  }
  return;
}



