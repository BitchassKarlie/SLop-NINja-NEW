/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8134 FUN_000a8134 */

void FUN_000a8134(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != iVar3) {
    do {
      iVar2 = iVar1 + 0xc;
      FUN_000a08c8(iVar1);
      iVar1 = iVar2;
    } while (iVar3 != iVar2);
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 8) = iVar3;
  FUN_000a80d0(param_1,param_1,iVar1,param_2,param_3,param_4,param_5);
  return;
}



