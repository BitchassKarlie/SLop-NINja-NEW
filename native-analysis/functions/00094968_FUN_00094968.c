/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094968 FUN_00094968 */

void FUN_00094968(int param_1,int **param_2)

{
  undefined4 *puVar1;
  
  FUN_0009493c(param_1 + 0x34);
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  *puVar1 = 0;
  FUN_00094838(puVar1,*param_2);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
  (**(code **)(**param_2 + 0x20))(*param_2,param_1 + 0x44);
  return;
}



