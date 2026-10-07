/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006a0f8 FUN_0006a0f8 */

undefined4 FUN_0006a0f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x154);
  if (*(int **)(param_1 + 0x154) != piVar1) {
    do {
      FUN_00069fb8(piVar1 + 2,param_2,param_3);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x154));
  }
  return 0;
}



