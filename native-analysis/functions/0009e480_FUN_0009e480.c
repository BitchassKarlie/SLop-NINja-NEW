/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e480 FUN_0009e480 */

uint * FUN_0009e480(uint *param_1)

{
  if (*param_1 < 0x21) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = (uint *)param_1[1];
  }
  return param_1;
}



