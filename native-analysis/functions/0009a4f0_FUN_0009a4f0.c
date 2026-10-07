/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a4f0 FUN_0009a4f0 */

undefined4 FUN_0009a4f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_0009a4d0();
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (iVar2 != 0) break;
    piVar1 = (int *)FUN_0009a4d0(piVar1,param_2);
  }
  uVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
  return uVar3;
}



