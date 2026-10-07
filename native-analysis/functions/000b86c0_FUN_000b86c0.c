/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b86c0 FUN_000b86c0 */

void FUN_000b86c0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14 [2];
  undefined4 local_c;
  
  local_14[0] = param_3;
  if (param_2 != 0) {
    _zip_error_get(param_2,local_14,&local_c);
    iVar1 = zip_error_get_sys_type(local_14[0]);
    if (iVar1 == 1) {
      puVar2 = (undefined4 *)__errno();
      *puVar2 = local_c;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_14[0];
  }
  return;
}



