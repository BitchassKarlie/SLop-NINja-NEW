/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b194c FUN_000b194c */

void FUN_000b194c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  
  if (param_2 == 0) {
    if (*(void **)(param_1 + 4) == (void *)0x0) {
      return;
    }
    operator_delete(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  pvVar6 = *(void **)(param_1 + 4);
  uVar5 = param_2 + 1;
  uVar2 = *(int *)(param_1 + 8) - (int)pvVar6;
  if (uVar2 < uVar5) {
    uVar4 = *(int *)(param_1 + 0xc) - (int)pvVar6;
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
  }
  else {
    if (uVar2 <= uVar5 * 4) goto LAB_000b19b6;
    uVar4 = *(int *)(param_1 + 0xc) - (int)pvVar6;
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
  }
  if (uVar5 < uVar2) {
    pvVar6 = operator_new(uVar5);
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar5 < uVar2) {
      uVar5 = uVar2;
    }
    pvVar6 = operator_new(uVar5);
    iVar1 = *(int *)(param_1 + 4);
  }
  if ((uVar5 != 0) && (uVar4 != 0)) {
    uVar3 = 0;
    uVar2 = uVar5;
    do {
      uVar2 = uVar2 - 1;
      *(undefined *)((int)pvVar6 + uVar3) = *(undefined *)(iVar1 + uVar3);
      if (uVar2 == 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
  }
  *(uint *)(param_1 + 0xc) = (int)pvVar6 + uVar4;
  *(undefined *)((int)pvVar6 + uVar4) = 0;
  operator_delete(*(void **)(param_1 + 4));
  *(void **)(param_1 + 4) = pvVar6;
  *(uint *)(param_1 + 8) = (int)pvVar6 + uVar5;
LAB_000b19b6:
  *(undefined *)((int)pvVar6 + param_2) = 0;
  return;
}



