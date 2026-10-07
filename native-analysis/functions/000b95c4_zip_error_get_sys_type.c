/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b95c4 zip_error_get_sys_type */

undefined4 zip_error_get_sys_type(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (**(int **)(DAT_000b95e4 + 0xb95cc + DAT_000b95e8) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(DAT_000b95e4 + 0xb95cc + DAT_000b95ec) + param_1 * 4);
  }
  return uVar1;
}



