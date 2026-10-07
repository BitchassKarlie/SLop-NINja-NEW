/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098a78 FUN_00098a78 */

void FUN_00098a78(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 4;
  FUN_000987fc(iVar1);
  **(undefined **)(param_1 + 0xc) = (char)((uint)param_2 >> 0x18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_000987fc(iVar1);
  **(undefined **)(param_1 + 0xc) = (char)((uint)param_2 >> 0x10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_000987fc(iVar1);
  **(undefined **)(param_1 + 0xc) = (char)((uint)param_2 >> 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_000987fc(iVar1);
  **(undefined **)(param_1 + 0xc) = (char)param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



