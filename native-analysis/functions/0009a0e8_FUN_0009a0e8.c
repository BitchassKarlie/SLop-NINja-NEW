/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a0e8 FUN_0009a0e8 */

undefined4 FUN_0009a0e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if (iVar1 != 0) break;
    piVar3 = (int *)piVar3[10];
  }
  uVar2 = (**(code **)(*piVar3 + 0x14))(piVar3);
  return uVar2;
}



