/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc128 FUN_000bc128 */

int FUN_000bc128(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  uint __size;
  
  iVar3 = *(int *)(param_1 + 0x48);
  __size = param_2 + 7U & 0xfffffff8;
  if (*(int *)(param_1 + 0x4c) < (int)(__size + iVar3)) {
    if (*(int *)(param_1 + 0x44) != 0) {
      puVar2 = (undefined4 *)malloc(8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48);
      puVar2[1] = *(undefined4 *)(param_1 + 0x54);
      *puVar2 = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 **)(param_1 + 0x54) = puVar2;
    }
    *(uint *)(param_1 + 0x4c) = __size;
    pvVar1 = malloc(__size);
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(void **)(param_1 + 0x44) = pvVar1;
  }
  else {
    pvVar1 = *(void **)(param_1 + 0x44);
    __size = __size + iVar3;
  }
  *(uint *)(param_1 + 0x48) = __size;
  return (int)pvVar1 + iVar3;
}



