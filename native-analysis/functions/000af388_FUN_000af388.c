/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af388 FUN_000af388 */

void FUN_000af388(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_7 - param_5 >> 6;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_000af2c0(param_1,param_3,iVar1,param_4,param_2), param_7 != param_5)) {
    do {
      iVar2 = param_5 + 0x40;
      FUN_000af224(iVar1,param_5);
      iVar1 = iVar1 + 0x40;
      param_5 = iVar2;
    } while (param_7 != iVar2);
  }
  return;
}



