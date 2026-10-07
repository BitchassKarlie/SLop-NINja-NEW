/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aa294 FUN_000aa294 */

undefined4 FUN_000aa294(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xfff) < 6) {
    uVar1 = *(undefined4 *)(DAT_000aa2ac + 0xaa2a2 + (param_1 & 0xfff) * 4);
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



