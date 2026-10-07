/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b92d8 _zip_error_get */

void _zip_error_get(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar1 = zip_error_get_sys_type(*param_1);
    if (iVar1 == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = param_1[1];
    }
  }
  return;
}



