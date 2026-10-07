/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008696c FUN_0008696c */

void FUN_0008696c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_7 - param_5 >> 4;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_000868f4(param_1,param_3,iVar1,param_4,param_2), param_7 != param_5)) {
    do {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar2 = param_5 + 0x10;
      FUN_000868ac(iVar1,param_5);
      iVar1 = iVar1 + 0x10;
      param_5 = iVar2;
    } while (param_7 != iVar2);
  }
  return;
}



