/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0874 FUN_000a0874 */

void FUN_000a0874(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = operator_new(param_2 * 0x14);
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    FUN_000a0828(param_1,pvVar1);
    operator_delete(*(void **)(param_1 + 4));
  }
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x14);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar3 - iVar2 >> 2) * 4);
  return;
}



