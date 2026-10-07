/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077364 FUN_00077364 */

undefined4 FUN_00077364(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_3 = param_3 + param_2 * 4;
  FUN_00077324();
  iVar1 = *(int *)(param_1 + param_3 * 4);
  *(undefined *)(iVar1 + 0xe) = 0;
  *(undefined *)(iVar1 + 0xc) = 0;
  *(undefined *)(iVar1 + 0xd) = 0;
  FUN_000a3a68();
  FUN_000a3734();
  return *(undefined4 *)(param_1 + param_3 * 4);
}



