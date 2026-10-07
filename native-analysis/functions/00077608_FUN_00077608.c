/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077608 FUN_00077608 */

void FUN_00077608(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = 0;
    do {
      pvVar2 = *(void **)(param_1 + iVar1);
      if (pvVar2 != (void *)0x0) {
        FUN_000775bc(pvVar2);
        operator_delete(pvVar2);
        *(undefined4 *)(param_1 + iVar1) = 0;
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x10);
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x10;
  } while (iVar3 != 4);
  return;
}



