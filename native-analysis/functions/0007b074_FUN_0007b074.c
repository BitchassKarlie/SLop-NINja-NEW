/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b074 FUN_0007b074 */

void FUN_0007b074(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_7 - param_5 >> 2) * -0x42108421;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_0007af9c(param_1,param_3,iVar1,0xbdef7bdf,param_2), param_7 != param_5)) {
    do {
      iVar2 = param_5 + 0x7c;
      FUN_00079bac(iVar1,param_5);
      iVar1 = iVar1 + 0x7c;
      param_5 = iVar2;
    } while (param_7 != iVar2);
  }
  return;
}



