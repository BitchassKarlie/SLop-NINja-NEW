/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9e20 FUN_000a9e20 */

void FUN_000a9e20(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_6 - param_2 < 0x334) {
    FUN_000a9dcc(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    iVar1 = (param_6 - param_2 >> 2) * -0x33333333 + 1 >> 3;
    iVar3 = param_2 + iVar1 * 0x14;
    FUN_000a9dcc(param_1,param_2,param_1,iVar3,param_1,param_2 + iVar1 * 0x28);
    FUN_000a9dcc(param_3,param_4 + iVar1 * -0x14,param_3,param_4,param_3,param_4 + iVar1 * 0x14);
    iVar2 = param_6 + iVar1 * -0x14;
    FUN_000a9dcc(param_5,param_6 + iVar1 * -0x28,param_5,iVar2,param_5,param_6);
    FUN_000a9dcc(param_1,iVar3,param_3,param_4,param_5,iVar2);
  }
  return;
}



