/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008be04 FUN_0008be04 */

void FUN_0008be04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != iVar3) {
    do {
      iVar1 = iVar2 + 0xc;
      iVar2 = iVar2 + 0x7c;
      FUN_000223ec(iVar1);
    } while (iVar3 != iVar2);
    iVar2 = *(int *)(param_1 + 4);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 8) = iVar3;
  FUN_0008bdb8(param_1,param_1,iVar2,param_2,param_3,param_4,param_5);
  return;
}



