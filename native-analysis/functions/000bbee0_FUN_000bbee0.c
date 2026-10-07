/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bbee0 FUN_000bbee0 */

undefined4 FUN_000bbee0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x18);
  }
  else {
    param_2 = param_2 + *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x14) < param_2) {
      return 0xffffff7d;
    }
  }
  *(int *)(param_1 + 0x18) = param_2;
  return 0;
}



