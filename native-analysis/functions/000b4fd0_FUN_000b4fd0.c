/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4fd0 FUN_000b4fd0 */

void FUN_000b4fd0(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = operator_new(param_2 * 4);
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    FUN_000b4ce0(param_1,pvVar1);
    operator_delete(*(void **)(param_1 + 4));
  }
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 4);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar3 - iVar2 >> 2) * 4);
  *(void **)(param_1 + 4) = pvVar1;
  return;
}



