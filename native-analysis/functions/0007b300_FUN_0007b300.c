/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b300 FUN_0007b300 */

void * FUN_0007b300(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  
  pvVar1 = operator_new(0xd0);
  FUN_0007b1f0(pvVar1,param_1);
  piVar4 = (int *)**(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != piVar4) {
    do {
      uVar2 = (**(code **)(*(int *)piVar4[2] + 0x24))();
      FUN_00079b74(pvVar1,uVar2);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    pvVar3 = operator_new(0xc4);
    FUN_0007a3a4();
    *(void **)((int)pvVar1 + 0x98) = pvVar3;
    FUN_0007a328(pvVar3,*(undefined4 *)(param_1 + 0x98));
  }
  return pvVar1;
}



