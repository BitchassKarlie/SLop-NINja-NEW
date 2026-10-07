/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000739dc FUN_000739dc */

void FUN_000739dc(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x680;
  do {
    while (*(char *)(param_1 + 0xc) == '\0') {
      FUN_000a5af0(*(undefined4 *)(param_1 + 4),0);
      FUN_00098b50(*(undefined4 *)(param_1 + 4));
      *(undefined *)(param_1 + 0xc) = 1;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      param_1 = param_1 + 0x34;
      if (param_1 == iVar1) {
        return;
      }
    }
    *(undefined *)(param_1 + 0xc) = 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1 = param_1 + 0x34;
  } while (param_1 != iVar1);
  return;
}



