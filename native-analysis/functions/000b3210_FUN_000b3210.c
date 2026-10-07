/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3210 FUN_000b3210 */

int * FUN_000b3210(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)operator_new(0x2a8);
  FUN_000b6b80();
  iVar2 = FUN_000b6cac(piVar1,param_1,param_2);
  if ((iVar2 == 0) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



