/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000acabc FUN_000acabc */

void FUN_000acabc(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_30 [8];
  undefined auStack_28 [12];
  
  iVar3 = param_4 - param_2 >> 4;
  iVar1 = iVar3 - (param_4 - param_2 >> 0x1f) >> 1;
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
    iVar2 = param_2 + iVar1 * 0x10;
    while( true ) {
      FUN_000ac66c(auStack_30,iVar2);
      iVar2 = iVar2 + -0x10;
      FUN_000ac9d8(param_1,param_2,iVar1,iVar3,auStack_30,0,param_3);
      FUN_0009f860(auStack_28);
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
    }
  }
  return;
}



