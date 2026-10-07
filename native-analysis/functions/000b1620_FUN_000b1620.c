/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1620 FUN_000b1620 */

void * FUN_000b1620(undefined4 param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(0x3c);
  FUN_0009e7a4(pvVar1,param_2);
  *(undefined4 *)((int)pvVar1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)pvVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((int)pvVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)pvVar1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)((int)pvVar1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x30) != 0) {
    iVar2 = FUN_000b1620(param_1);
    *(int *)((int)pvVar1 + 0x30) = iVar2;
    *(void **)(iVar2 + 0x38) = pvVar1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar2 = FUN_000b1620(param_1);
    *(int *)((int)pvVar1 + 0x34) = iVar2;
    *(void **)(iVar2 + 0x38) = pvVar1;
  }
  return pvVar1;
}



