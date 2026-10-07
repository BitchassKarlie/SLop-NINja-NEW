/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b950c zip_source_function */

undefined4 * zip_source_function(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)malloc(8);
    if (puVar1 == (undefined4 *)0x0) {
      _zip_error_set(param_1 + 2,0xe,0);
    }
    else {
      *puVar1 = param_2;
      puVar1[1] = param_3;
    }
  }
  return puVar1;
}



