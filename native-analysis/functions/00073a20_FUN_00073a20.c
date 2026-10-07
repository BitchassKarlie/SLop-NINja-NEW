/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00073a20 FUN_00073a20 */

void FUN_00073a20(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x680;
  do {
    while (*(char *)(param_1 + 0xe) != '\0') {
      FUN_000a5bc8(*(undefined4 *)(param_1 + 4));
      *(undefined *)(param_1 + 0xe) = 0;
      param_1 = param_1 + 0x34;
      if (param_1 == iVar1) {
        return;
      }
    }
    param_1 = param_1 + 0x34;
  } while (param_1 != iVar1);
  return;
}



