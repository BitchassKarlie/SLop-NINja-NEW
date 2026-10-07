/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9a60 FUN_000b9a60 */

int FUN_000b9a60(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (-1 < param_2) {
      if (*(int *)(param_1 + 0x34) <= param_2) {
        return 0;
      }
      return *(int *)(param_1 + 0x4c) + param_2 * 0x10;
    }
    if (2 < *(int *)(param_1 + 0x58)) {
      return *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 0x10;
    }
  }
  return *(int *)(param_1 + 0x4c);
}



