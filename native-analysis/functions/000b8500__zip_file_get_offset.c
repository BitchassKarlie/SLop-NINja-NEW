/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b8500 _zip_file_get_offset */

int _zip_file_get_offset(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int __off;
  undefined auStack_54 [28];
  ushort local_38;
  ushort local_30;
  
  __off = *(int *)(**(int **)(param_1 + 0x1c) + param_2 * 0x3c + 0x38);
  iVar1 = fseek(*(FILE **)(param_1 + 4),__off,0);
  if (iVar1 == 0) {
    iVar2 = _zip_dirent_read(auStack_54,*(undefined4 *)(param_1 + 4),0,0,1,param_1 + 8);
    iVar1 = 0;
    if (iVar2 == 0) {
      iVar1 = (uint)local_38 + (uint)local_30 + 0x1e + __off;
      _zip_dirent_finalize(auStack_54);
    }
  }
  else {
    puVar3 = (undefined4 *)__errno();
    iVar1 = 0;
    _zip_error_set(param_1 + 8,4,*puVar3);
  }
  return iVar1;
}



