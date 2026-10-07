/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000992d8 FUN_000992d8 */

void FUN_000992d8(uint *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *param_1 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  iVar5 = 0;
  param_1[1] = 0;
  FUN_0009f2b4(param_2,param_1,4);
  pvVar1 = operator_new__(param_3 - 4U);
  param_1[1] = (uint)pvVar1;
  FUN_0009f2b4(param_2,pvVar1,param_3 - 4U);
  uVar4 = param_1[1];
  iVar2 = uVar4 + *param_1 * 0xc;
  if (*param_1 != 0) {
    uVar3 = 0;
    while( true ) {
      uVar3 = uVar3 + 1;
      *(int *)(uVar4 + iVar5) = *(int *)(uVar4 + iVar5) + iVar2;
      iVar5 = iVar5 + 0xc;
      if (*param_1 <= uVar3) break;
      uVar4 = param_1[1];
    }
  }
  return;
}



