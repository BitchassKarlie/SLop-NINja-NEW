/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000575c8 FUN_000575c8 */

void FUN_000575c8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)(DAT_00057668 + 0x575d6);
  iVar3 = *piVar5;
  if (iVar3 != 0) {
    iVar1 = iVar3 + *(int *)(iVar3 + -4) * 0x88;
    iVar6 = iVar1;
    if (iVar3 != iVar1) {
      do {
        puVar2 = (undefined4 *)(iVar1 + -0x88);
        iVar1 = iVar1 + -0x88;
        (**(code **)*puVar2)(iVar1);
        iVar6 = *piVar5;
      } while (iVar6 != iVar1);
    }
    operator_delete__((void *)(iVar6 + -8));
    *(undefined4 *)(DAT_0005766c + 0x5760e) = 0;
  }
  puVar2 = (undefined4 *)operator_new__((param_1 * 0x11 + 1) * 8);
  puVar2[1] = param_1;
  puVar4 = puVar2 + 2;
  *puVar2 = 0x88;
  if (param_1 != 0) {
    iVar3 = 0;
    puVar2 = puVar4;
    do {
      iVar3 = iVar3 + 1;
      FUN_00057470(puVar2);
      puVar2 = puVar2 + 0x22;
    } while (param_1 != iVar3);
  }
  iVar3 = DAT_00057670;
  iVar6 = 0;
  *(undefined4 **)(DAT_00057670 + 0x57644) = puVar4;
  *(int *)(iVar3 + 0x5764c) = param_1;
  *(undefined4 *)(iVar3 + 0x57648) = 0;
  if (0 < param_1) {
    do {
      iVar6 = iVar6 + 1;
      FUN_00049d7c(param_2,puVar4,0);
      *(undefined *)((int)puVar4 + 0x26) = 1;
      puVar4 = puVar4 + 0x22;
    } while (iVar6 != param_1);
  }
  return;
}



