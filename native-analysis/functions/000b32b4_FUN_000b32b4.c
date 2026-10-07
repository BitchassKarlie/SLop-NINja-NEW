/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b32b4 FUN_000b32b4 */

int FUN_000b32b4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_000b3248();
  piVar3 = (int *)**(int **)(iVar1 + 4);
  iVar1 = FUN_000b3248();
  iVar1 = *(int *)(iVar1 + 4);
  while( true ) {
    if (piVar3 == (int *)iVar1) {
      return 0;
    }
    iVar2 = (*(code *)piVar3[2])(param_1,param_2);
    if (iVar2 != 0) break;
    piVar3 = (int *)*piVar3;
  }
  return iVar2;
}



