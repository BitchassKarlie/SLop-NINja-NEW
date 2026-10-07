/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088ab4 FUN_00088ab4 */

int FUN_00088ab4(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  FUN_00088a30();
  iVar2 = param_1 + 0x20c;
  if (iVar2 != 0) {
    iVar3 = param_1 + 0x24c;
    do {
      iVar3 = iVar3 + -0x10;
      FUN_00087f90(iVar3);
    } while (iVar2 != iVar3);
  }
  if (param_1 != -0x1ec) {
    do {
      if (*(void **)(iVar2 + -8) != (void *)0x0) {
        operator_delete__(*(void **)(iVar2 + -8));
        *(undefined4 *)(iVar2 + -8) = 0;
      }
      iVar2 = iVar2 + -8;
    } while (iVar2 != param_1 + 0x1ec);
  }
  if (param_1 != -0xac) {
    iVar2 = param_1 + 0xec;
    do {
      pvVar1 = *(void **)(iVar2 + -0xc);
      *(void **)(iVar2 + -8) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      iVar2 = iVar2 + -0x10;
    } while (iVar2 != param_1 + 0xac);
  }
  return param_1;
}



