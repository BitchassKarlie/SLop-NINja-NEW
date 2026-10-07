/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00059000 FUN_00059000 */

void FUN_00059000(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 200) == 3) {
    iVar1 = *(int *)(DAT_00059034 + 0x59010 + DAT_00059038);
    FUN_0006ff24(*(undefined4 *)(iVar1 + 0x50));
    FUN_0006fc8c(*(undefined4 *)(iVar1 + 0x50));
    *(undefined4 *)(param_1 + 200) = 6;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(iVar1 + 0x89) = 0;
  }
  return;
}



