/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1a88 FUN_000a1a88 */

void FUN_000a1a88(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_000a1a34();
  piVar1 = *(int **)(param_1 + 8);
  piVar1[1] = 0;
  FUN_000a07fc(piVar1 + 1,*(undefined4 *)(param_2 + 4));
  piVar1[2] = *(int *)(param_2 + 8);
  *piVar1 = DAT_000a1ac0 + 0xa1ab4;
  piVar1[3] = *(int *)(param_2 + 0xc);
  piVar1[4] = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x14;
  return;
}



