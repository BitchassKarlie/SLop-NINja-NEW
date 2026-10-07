/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099338 FUN_00099338 */

void FUN_00099338(uint *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  iVar6 = 0;
  param_1[1] = 0;
  FUN_0009f2b4(param_2,param_1,4);
  pvVar1 = operator_new__(param_3 - 4U);
  param_1[1] = (uint)pvVar1;
  FUN_0009f2b4(param_2,pvVar1,param_3 - 4U);
  uVar4 = param_1[1];
  iVar3 = uVar4 + *param_1 * 0x28;
  if (*param_1 != 0) {
    uVar2 = 0;
    while( true ) {
      iVar5 = uVar4 + iVar6;
      uVar2 = uVar2 + 1;
      *(int *)(uVar4 + iVar6) = *(int *)(uVar4 + iVar6) + iVar3;
      iVar6 = iVar6 + 0x28;
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + iVar3;
      *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + iVar3;
      if (*param_1 <= uVar2) break;
      uVar4 = param_1[1];
    }
  }
  return;
}



