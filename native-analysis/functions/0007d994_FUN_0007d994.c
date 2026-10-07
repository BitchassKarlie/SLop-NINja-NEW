/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007d994 FUN_0007d994 */

void FUN_0007d994(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  if ((iVar1 != 0) && (0 < param_1[4])) {
    iVar2 = 0;
    iVar4 = 0;
    while( true ) {
      iVar4 = iVar4 + 1;
      FUN_00017d64(iVar1 + iVar2 + 0x7c,0);
      iVar2 = iVar2 + 0x88;
      if (param_1[4] <= iVar4) break;
      iVar1 = param_1[5];
    }
  }
  FUN_0007d860(param_1);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[5] = 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4) * 0x8c + iVar1;
    if (iVar1 != iVar2) {
      iVar2 = iVar2 + (((uint)((iVar2 + -0x8c) - iVar1) >> 2) * 0xaf8af8b & 0x3fffffff) * -0x8c +
                      -0x8c;
    }
    operator_delete__((void *)(iVar2 + -8));
    *param_1 = 0;
  }
  pvVar3 = (void *)param_1[8];
  if (pvVar3 != (void *)0x0) {
    FUN_0007d938(pvVar3);
    operator_delete(pvVar3);
    param_1[8] = 0;
  }
  return;
}



