/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b0c0 FUN_0007b0c0 */

void FUN_0007b0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != iVar3) {
    do {
      FUN_00084cd8(iVar1,0);
      iVar2 = iVar1 + 0x7c;
      FUN_00017d90(iVar1);
      iVar1 = iVar2;
    } while (iVar3 != iVar2);
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 8) = iVar3;
  FUN_0007b074(param_1,param_1,iVar1,param_2,param_3,param_4,param_5);
  return;
}



