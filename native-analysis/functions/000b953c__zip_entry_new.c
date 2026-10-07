/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b953c _zip_entry_new */

undefined4 * _zip_entry_new(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    puVar3 = (undefined4 *)malloc(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      _zip_error_set(8,0xe,0);
    }
    else {
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0xffffffff;
      puVar3[1] = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < *(int *)(param_1 + 0x2c) + -1) {
      pvVar1 = *(void **)(param_1 + 0x30);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c) + 0x10;
      *(int *)(param_1 + 0x2c) = iVar2;
      pvVar1 = realloc(*(void **)(param_1 + 0x30),iVar2 * 0x14);
      *(void **)(param_1 + 0x30) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        _zip_error_set(param_1 + 8,0xe,0);
        return (undefined4 *)0x0;
      }
      iVar2 = *(int *)(param_1 + 0x28);
    }
    puVar3 = (undefined4 *)((int)pvVar1 + iVar2 * 0x14);
    *(undefined4 *)((int)pvVar1 + iVar2 * 0x14) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0xffffffff;
    puVar3[1] = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return puVar3;
}



