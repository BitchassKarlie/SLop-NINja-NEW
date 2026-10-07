/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000302e0 FUN_000302e0 */

undefined4 FUN_000302e0(uint param_1)

{
  float fVar1;
  
  if (param_1 < 0x10) {
    fVar1 = *(float *)(*(int *)(DAT_00030328 + 0x302e8 + DAT_0003032c) + param_1 * 0xc + 0xac);
    if (fVar1 == DAT_00030320) {
      return 1;
    }
    if (fVar1 == DAT_00030324) {
      return 2;
    }
  }
  return 0;
}



