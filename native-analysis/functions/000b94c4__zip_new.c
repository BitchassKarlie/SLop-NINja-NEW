/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b94c4 _zip_new */

undefined4 * _zip_new(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    _zip_error_set(param_1,0xe,0);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    _zip_error_init(puVar1 + 2);
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0xffffffff;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xc] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0xf] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
  }
  return puVar1;
}



