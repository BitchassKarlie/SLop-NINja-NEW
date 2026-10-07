/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082aa0 FUN_00082aa0 */

void FUN_00082aa0(int param_1)

{
  FUN_0007b784();
  if ((*(int *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    *(undefined *)(param_1 + 0x3c) = 1;
    *(int *)(DAT_00082ae4 + 0x82ac0) = *(int *)(DAT_00082ae4 + 0x82ac0) + 1;
    FUN_0002b134(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0,0,0);
  }
  return;
}



