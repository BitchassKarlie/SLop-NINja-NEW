/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b56e8 FUN_000b56e8 */

void FUN_000b56e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_7 - param_5 >> 3) * -0x3b13b13b;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_000b5630(param_1,param_3,iVar1,0xc4ec4ec5,param_2), param_7 != param_5)) {
    do {
      iVar2 = param_5 + 0x68;
      FUN_000b5324(iVar1,param_5);
      iVar1 = iVar1 + 0x68;
      param_5 = iVar2;
    } while (param_7 != iVar2);
  }
  return;
}



