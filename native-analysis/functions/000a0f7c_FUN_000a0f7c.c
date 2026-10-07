/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0f7c FUN_000a0f7c */

void FUN_000a0f7c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_000a0ad0(param_1,(*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) * 0x2fa0be83);
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  FUN_000942a0(param_1);
  FUN_00094044(param_1);
  return;
}



