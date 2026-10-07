/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00032d18 FUN_00032d18 */

void FUN_00032d18(int param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined auStack_1c [4];
  
  uVar5 = 1 - param_2;
  if (1 < param_2) {
    uVar5 = 0;
  }
  uVar3 = uVar5;
  if (param_2 == 2) {
    uVar3 = uVar5 | 1;
  }
  iVar4 = DAT_00032d88 + 0x32d36;
  if (uVar3 != 0) {
    if (param_1 != 0) {
      FUN_00032390(auStack_1c);
      pvVar2 = operator_new(0x104);
      iVar1 = DAT_00032d8c;
      FUN_00058274(pvVar2,param_1,0xffffffff,auStack_1c,0);
      *(void **)(iVar1 + 0x32e6c) = pvVar2;
      FUN_00017d90(auStack_1c);
      (**(code **)(**(int **)(iVar1 + 0x32e6c) + 8))();
    }
    if (uVar5 != 0) {
      *(undefined *)(*(int *)(iVar4 + DAT_00032d90) + 0x194) = 1;
    }
  }
  return;
}



