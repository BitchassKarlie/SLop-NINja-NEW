/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017cb8 FUN_00017cb8 */

void FUN_00017cb8(int param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
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
  puVar1 = *(undefined **)(param_1 + 4);
  uVar3 = param_2 + 1;
  uVar2 = *(int *)(param_1 + 8) - (int)puVar1;
  if (uVar2 < uVar3) {
    operator_delete(puVar1);
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  else {
    if (uVar2 <= uVar3 * 4) goto LAB_00017ce6;
    operator_delete(puVar1);
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  if ((uVar2 <= uVar3) && (uVar2 = uVar2 + (uVar2 >> 1), uVar3 < uVar2)) {
    uVar3 = uVar2;
  }
  puVar1 = (undefined *)operator_new(uVar3);
  *(undefined **)(param_1 + 4) = puVar1;
  *(undefined **)(param_1 + 8) = puVar1 + uVar3;
LAB_00017ce6:
  *(undefined **)(param_1 + 0xc) = puVar1;
  *puVar1 = 0;
  *(undefined *)(*(int *)(param_1 + 4) + param_2) = 0;
  return;
}



