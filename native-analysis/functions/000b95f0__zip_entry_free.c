/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b95f0 _zip_entry_free */

void _zip_entry_free(int param_1)

{
  free(*(void **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  free(*(void **)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  _zip_unchange_data(param_1);
  return;
}



