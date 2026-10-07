/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077830 FUN_00077830 */

undefined4 FUN_00077830(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x14)) {
      return 0;
    }
    if (*(char *)(*piVar1 + 0x34) == '\0') break;
    piVar1 = piVar1 + 1;
  }
  return 1;
}



