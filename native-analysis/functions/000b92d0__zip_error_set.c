/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b92d0 _zip_error_set */

void _zip_error_set(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



