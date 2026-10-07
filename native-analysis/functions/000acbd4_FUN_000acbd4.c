/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000acbd4 FUN_000acbd4 */

void FUN_000acbd4(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_6 - param_2 < 0x290) {
    FUN_000acb84(param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  else {
    iVar1 = (param_6 - param_2 >> 4) + 1 >> 3;
    iVar3 = param_2 + iVar1 * 0x10;
    FUN_000acb84(param_1,param_2,param_1,iVar3,param_1,param_2 + iVar1 * 0x20,0);
    FUN_000acb84(param_3,param_4 + iVar1 * -0x10,param_3,param_4,param_3,param_4 + iVar1 * 0x10,0);
    iVar2 = param_6 + iVar1 * -0x10;
    FUN_000acb84(param_5,param_6 + iVar1 * -0x20,param_5,iVar2,param_5,param_6,0);
    FUN_000acb84(param_1,iVar3,param_3,param_4,param_5,iVar2,0);
  }
  return;
}



