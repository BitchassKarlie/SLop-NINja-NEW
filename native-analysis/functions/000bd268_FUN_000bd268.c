/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd268 FUN_000bd268 */

uint FUN_000bd268(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0x10 | param_1 << 0x10;
  uVar1 = (uVar1 & 0xff00ff) << 8 | uVar1 >> 8 & 0xff00ff;
  uVar1 = (uVar1 & 0xf0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f;
  uVar1 = (uVar1 & 0x33333333) << 2 | uVar1 >> 2 & 0x33333333;
  return (uVar1 & 0x55555555) << 1 | uVar1 >> 1 & 0x55555555;
}



