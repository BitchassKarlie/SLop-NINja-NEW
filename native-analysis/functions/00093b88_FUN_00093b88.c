/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093b88 FUN_00093b88 */

void FUN_00093b88(int *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (*(short *)((int)param_1 + 0x12) == 1) {
    pvVar2 = (void *)param_1[1];
    iVar1 = *param_1;
    if (iVar1 == 0) {
      while (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((int)pvVar2 + 8);
        operator_delete(pvVar2);
        pvVar2 = pvVar3;
      }
    }
    else if (pvVar2 != (void *)0x0) {
      while( true ) {
        pvVar2 = *(void **)((int)pvVar2 + 8);
        FUN_00093040(iVar1);
        if (pvVar2 == (void *)0x0) break;
        iVar1 = *param_1;
      }
    }
  }
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  return;
}



