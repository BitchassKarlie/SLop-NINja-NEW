/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af610 FUN_000af610 */

void FUN_000af610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_7 - param_5 >> 3) * -0x49249249;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_000af52c(param_1,param_3,iVar1,0xb6db6db7,param_2), param_7 != param_5)) {
    do {
      iVar2 = param_5 + 0x38;
      FUN_000af4b4(iVar1,param_5);
      iVar1 = iVar1 + 0x38;
      param_5 = iVar2;
    } while (param_7 != iVar2);
  }
  return;
}



