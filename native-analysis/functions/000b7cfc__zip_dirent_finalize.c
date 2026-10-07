/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7cfc _zip_dirent_finalize */

void _zip_dirent_finalize(int param_1)

{
  free(*(void **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  free(*(void **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  free(*(void **)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



