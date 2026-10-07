/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1b84 FUN_000b1b84 */

int FUN_000b1b84(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  
  iVar1 = param_2;
  if (param_3 != 0) {
    pvVar5 = *(void **)(param_1 + 4);
    uVar6 = (*(int *)(param_1 + 0xc) - (int)pvVar5 >> 2) * -0xf0f0f0f;
    iVar4 = *(int *)(param_1 + 8);
    uVar3 = (iVar4 - (int)pvVar5 >> 2) * -0xf0f0f0f + param_3;
    if (uVar6 <= uVar3) {
      uVar6 = uVar6 + (uVar6 >> 1);
      if (uVar6 < uVar3) {
        uVar6 = uVar3;
      }
      pvVar5 = operator_new(uVar6 * 0x44);
      iVar1 = FUN_000b17a4(param_1,pvVar5,*(undefined4 *)(param_1 + 4),param_2);
      iVar4 = *(int *)(param_1 + 8);
    }
    uVar2 = FUN_000b17a4(param_1,iVar1 + param_3 * 0x44,param_2,iVar4);
    *(undefined4 *)(param_1 + 8) = uVar2;
    if (*(void **)(param_1 + 4) != pvVar5) {
      operator_delete(*(void **)(param_1 + 4));
      *(void **)(param_1 + 4) = pvVar5;
      *(void **)(param_1 + 0xc) = (void *)((int)pvVar5 + uVar6 * 0x44);
    }
  }
  return iVar1;
}



