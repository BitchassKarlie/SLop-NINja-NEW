/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c2fd0 FUN_000c2fd0 */

undefined4 FUN_000c2fd0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 4) < 0) ||
     (param_2 = param_2 + *(int *)(param_1 + 8), *(int *)(param_1 + 4) < param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 8) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



