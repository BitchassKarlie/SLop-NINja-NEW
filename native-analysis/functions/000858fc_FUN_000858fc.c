/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000858fc FUN_000858fc */

void FUN_000858fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_7 - param_5 >> 2;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_00085854(param_1,param_3,iVar1,param_4,param_2), param_7 != param_5)) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar1 + iVar2) = *(undefined4 *)(param_5 + iVar2);
      iVar2 = iVar2 + 4;
    } while (iVar2 != (param_7 - (param_5 + 4) & 0xfffffffcU) + 4);
  }
  return;
}



