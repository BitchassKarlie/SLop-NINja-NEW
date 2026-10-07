/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00073a48 FUN_00073a48 */

void FUN_00073a48(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x680;
  do {
    while ((*(char *)(param_1 + 0xc) == '\0' &&
           (iVar1 = FUN_000a59cc(*(undefined4 *)(param_1 + 4)), iVar1 != 0))) {
      FUN_000a5a64(*(undefined4 *)(param_1 + 4));
      *(undefined *)(param_1 + 0xe) = 1;
      param_1 = param_1 + 0x34;
      if (param_1 == iVar2) {
        return;
      }
    }
    param_1 = param_1 + 0x34;
  } while (param_1 != iVar2);
  return;
}



