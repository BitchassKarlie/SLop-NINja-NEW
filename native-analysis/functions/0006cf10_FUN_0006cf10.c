/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006cf10 FUN_0006cf10 */

void FUN_0006cf10(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = DAT_0006cf44 + 0x6cf1a;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    FUN_000a751c(iVar1 + 4);
  }
  piVar2 = (int *)FUN_000a75e0(*(int *)(iVar3 + DAT_0006cf48) + 0x180,param_1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
    FUN_00017d24();
  }
  return;
}



